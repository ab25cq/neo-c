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

struct sNewNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
};

struct sImplementsNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* obj_exp;
    struct sType*  inf_type  ;
};

struct sTrueNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sGeneric
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
};

struct sHeapSizeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sSizeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sOffsetOf
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
    char*  name  ;
};

struct sSizeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicSizeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sTypeOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignOfExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignOfExpNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sAlignAsExpNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sIsPointer
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
};

struct sGCDecNoFreeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sOptionalNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sRefNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct tuple2$2sNode$phsNode$ph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct sSpanNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
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
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
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
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType*  type  , struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo*  info  );
char*  sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
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
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType*  inf_type  , struct sInfo*  info  );
char*  sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo*  info  );
static void sImplementsNode_finalize(struct sImplementsNode* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  );
char*  sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo*  info  );
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo*  info  );
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  );
char*  sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo*  info  );
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo*  info  );
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  );
char*  sGeneric_kind(struct sGeneric* self);
_Bool sGeneric_compile(struct sGeneric* self, struct sInfo*  info  );
static void sGeneric_finalize(struct sGeneric* self);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self);
_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  );
static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo*  info  );
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  );
char*  sOffsetOf_kind(struct sOffsetOf* self);
_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo*  info  );
static void sOffsetOf_finalize(struct sOffsetOf* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo*  info  );
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self);
_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  );
static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo*  info  );
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo*  info  );
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  );
char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo*  info  );
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo*  info  );
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo*  info  );
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo*  info  );
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo*  info  );
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo*  info  );
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo*  info  );
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo*  info  );
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  );
char*  sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo*  info  );
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  );
char*  sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo*  info  );
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo*  info  );
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  );
char*  sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo*  info  );
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo*  info  );
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo*  info  );
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  );
char*  sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo*  info  );
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  );
char*  sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo*  info  );
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  );
char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo*  info  );
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  );
char*  sOptionalNode_kind(struct sOptionalNode* self);
_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  );
static void sOptionalNode_finalize(struct sOptionalNode* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  );
char*  sRefNode_kind(struct sRefNode* self);
_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  );
static void sRefNode_finalize(struct sRefNode* self);
struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  );
static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self);
static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  );
char*  sSpanNode_kind(struct sSpanNode* self);
_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  );
static void sSpanNode_finalize(struct sSpanNode* self);
static struct sRefNode* sRefNode_clone(struct sRefNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self);
static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self);
static struct sGeneric* sGeneric_clone(struct sGeneric* self);
static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  );
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  );
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
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType*  type  , struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj35  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj36;
    struct sNode* __dec_obj37;
    struct sNewNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)come_null_checker(self, "25obj.nc", 7))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj35=((struct sNewNode*)come_null_checker(self, "25obj.nc", 9))->type,
    ((struct sNewNode*)come_null_checker(self, "25obj.nc", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj36=((struct sNewNode*)come_null_checker(self, "25obj.nc", 10))->initializer,
    ((struct sNewNode*)come_null_checker(self, "25obj.nc", 10))->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj37=((struct sNewNode*)come_null_checker(self, "25obj.nc", 11))->initializer_num,
    ((struct sNewNode*)come_null_checker(self, "25obj.nc", 11))->initializer_num=(struct sNode*)come_increment_ref_count(initializer_num);
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sNewNode*)come_increment_ref_count(self);
    come_call_finalizer(sNewNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNewNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sNewNode_kind(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNewNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  num_string  ;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  cvalue  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    struct list$1sNode$ph* __dec_obj38;
    char*  type_name  ;
    char*  type_name2  ;
    char*  var_name  ;
    struct sType*  type3  ;
    char*  type_name3  ;
    struct buffer*  buf  ;
    char*  obj  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj39  ;
    char*  __dec_obj40  ;
    struct sClass*  klass  ;
    _Bool Value_10;
    struct CVALUE*  come_value2  ;
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
    struct CVALUE*  come_value_11  ;
    char*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    char*  var_name_15  ;
    struct sType*  type3_16  ;
    char*  type_name3_17  ;
    struct buffer*  buf_18  ;
    char*  obj_19  ;
    _Bool _conditional_value_X1;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    struct sClass*  klass_20  ;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_21;
    struct tuple2$2char$phsNode$ph* it_23;
    struct tuple2$2char$phsNode$ph* multiple_assign_var1
;    char*  name  =0;
    struct sNode* exp=0;
    _Bool Value_25;
    struct CVALUE*  come_value2_26  ;
    struct sType*  left_type  ;
    struct list$1tuple2$2char$phsType$ph$ph* o2_saved_27;
    struct tuple2$2char$phsType$ph* it2;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  field_name  =0;
    struct sType*  field_type  =0;
    struct sType*  __dec_obj48  ;
    struct sType*  right_type  ;
    struct sType*  __dec_obj49  ;
    char*  c_value  ;
    char*  __dec_obj50  ;
    struct sType*  __dec_obj51  ;
    struct sType*  type3_30  ;
    char*  type_name3_31  ;
    _Bool _conditional_value_X2;
    char*  __dec_obj52  ;
    char*  __dec_obj53  ;
    struct sType*  __dec_obj54  ;
    memset(&obj, 0, sizeof(obj));
    memset(&obj_19, 0, sizeof(obj_19));
    type=(struct sType* )come_increment_ref_count(((struct sNewNode*)come_null_checker(self, "25obj.nc", 21))->type);
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct sNewNode*)come_null_checker(self, "25obj.nc", 22))->initializer);
    initializer_num=(struct sNode*)come_increment_ref_count(((struct sNewNode*)come_null_checker(self, "25obj.nc", 23))->initializer_num);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 25, "struct CVALUE* "))), "25obj.nc", 25)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 27, "struct buffer* "))), "25obj.nc", 27)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(num_string, "25obj.nc", 29)),"1");
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "25obj.nc", 31))->mArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 31)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 31)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 31)))){
        Value=node_compile(it,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(((struct buffer* )come_null_checker(num_string, "25obj.nc", 38)),"*(%s)",((struct CVALUE* )come_null_checker(cvalue, "25obj.nc", 38))->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 41))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    __dec_obj38=((struct sType* )come_null_checker(type2, "25obj.nc", 44))->mHeapArrayNum,
    ((struct sType* )come_null_checker(type2, "25obj.nc", 44))->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(type2, "25obj.nc", 44))->mArrayNum));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "25obj.nc", 45))->mArrayNum, "25obj.nc", 45)));
    ((struct sType* )come_null_checker(type2, "25obj.nc", 46))->mNew=(_Bool)1;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)0));
    type_name2=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
    if(initializer_num) {
        static int var_num=1;
        var_num++;
        var_name=(char* )come_increment_ref_count(xsprintf("__new_num__%d",var_num));
        type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
        ((struct sType* )come_null_checker(type3, "25obj.nc", 59))->mPointerNum++;
        if(((struct sType* )come_null_checker(type3, "25obj.nc", 60))->mNoSolvedGenericsType) {
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type3, "25obj.nc", 61))->mNoSolvedGenericsType, "25obj.nc", 61))->mPointerNum++;
        }
        type_name3=(char* )come_increment_ref_count(make_type_name_string(type3,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3,var_name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 68, "struct buffer* "))), "25obj.nc", 68)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "25obj.nc", 70)),"({");
        if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 73))->funcs, "25obj.nc", 73)), "25obj.nc", 73)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            __dec_obj39=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "25obj.nc", 74))))),((struct sInfo* )come_null_checker(info, "25obj.nc", 74))->sline,type_name3));
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj40=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "25obj.nc", 77))))),((struct sInfo* )come_null_checker(info, "25obj.nc", 77))->sline,type_name3));
            __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "25obj.nc", 80)),obj);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "25obj.nc", 81)),";");
        klass=((struct sType* )come_null_checker(type3, "25obj.nc", 83))->mClass;
        Value_10=node_compile(initializer_num,info);
        if(!Value_10) {
            __result_obj__0 = (_Bool)0;
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "25obj.nc", 91)),((char* )(__right_value14=string_operator_add(((char* )come_null_checker(((char* )(__right_value13=string_operator_add(((char* )come_null_checker(((char* )(__right_value12=string_operator_add(((char* )come_null_checker(((char* )(__right_value11=charp_operator_add(((char*)come_null_checker("*", "25obj.nc", 91)),var_name))), "25obj.nc", 91)),"= "))), "25obj.nc", 91)),((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 91))->c_value))), "25obj.nc", 91)),";"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "25obj.nc", 93)),var_name);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "25obj.nc", 94)),"; })");
        come_value_11=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 96, "struct CVALUE* "))), "25obj.nc", 96)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj41=((struct CVALUE* )come_null_checker(come_value_11, "25obj.nc", 98))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_11, "25obj.nc", 98))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "25obj.nc", 98))));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type2, "25obj.nc", 100))->mHeap=(_Bool)1;
        ((struct sType* )come_null_checker(type2, "25obj.nc", 101))->mPointerNum++;
        if(((struct sType* )come_null_checker(type2, "25obj.nc", 103))->mNoSolvedGenericsType) {
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type2, "25obj.nc", 104))->mNoSolvedGenericsType, "25obj.nc", 104))->mPointerNum++;
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type2, "25obj.nc", 105))->mNoSolvedGenericsType, "25obj.nc", 105))->mHeap=(_Bool)1;
        }
        __dec_obj42=((struct CVALUE* )come_null_checker(come_value_11, "25obj.nc", 108))->type,
        ((struct CVALUE* )come_null_checker(come_value_11, "25obj.nc", 108))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value_11, "25obj.nc", 109))->var=((void*)0);
        append_object_to_right_values(come_value_11,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_11, "25obj.nc", 113))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 115))->stack, "25obj.nc", 115)),(struct CVALUE* )come_increment_ref_count(come_value_11));
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(initializer) {
        static int var_num_14=1;
        var_num_14++;
        var_name_15=(char* )come_increment_ref_count(xsprintf("__new_obj__%d",var_num_14));
        type3_16=(struct sType* )come_increment_ref_count(sType_clone(type2));
        ((struct sType* )come_null_checker(type3_16, "25obj.nc", 124))->mPointerNum++;
        if(((struct sType* )come_null_checker(type3_16, "25obj.nc", 125))->mNoSolvedGenericsType) {
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type3_16, "25obj.nc", 126))->mNoSolvedGenericsType, "25obj.nc", 126))->mPointerNum++;
        }
        type_name3_17=(char* )come_increment_ref_count(make_type_name_string(type3_16,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3_16,var_name_15,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buf_18=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 133, "struct buffer* "))), "25obj.nc", 133)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 135)),"({");
        if(({(_conditional_value_X1=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 138))->funcs, "25obj.nc", 138)), "25obj.nc", 138)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
            __dec_obj46=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "25obj.nc", 139))))),((struct sInfo* )come_null_checker(info, "25obj.nc", 139))->sline,type_name3_17));
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj47=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "25obj.nc", 142))))),((struct sInfo* )come_null_checker(info, "25obj.nc", 142))->sline,type_name3_17));
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 145)),obj_19);
        buffer_append_str(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 146)),";");
        klass_20=((struct sType* )come_null_checker(type3_16, "25obj.nc", 148))->mClass;
        i=0;
        for(o2_saved_21=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),it_23=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_21, "25obj.nc", 151)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_21, "25obj.nc", 151)));it_23=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_21, "25obj.nc", 151)))){
            multiple_assign_var1=it_23;
            name=(char* )come_increment_ref_count(multiple_assign_var1->v1);
            exp=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_25=node_compile(exp,info);
            if(!Value_25) {
                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value2_26=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            left_type=((void*)0);
            for(o2_saved_27=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct sClass* )come_null_checker(klass_20, "25obj.nc", 161))->mFields),it2=list$1tuple2$2char$phsType$ph$ph_begin(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved_27, "25obj.nc", 161)));!list$1tuple2$2char$phsType$ph$ph_end(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved_27, "25obj.nc", 161)));it2=list$1tuple2$2char$phsType$ph$ph_next(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(o2_saved_27, "25obj.nc", 161)))){
                multiple_assign_var2=it2;
                field_name=(char* )come_increment_ref_count(multiple_assign_var2->v1);
                field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2);
                if(string_operator_equals(((char* )come_null_checker(name, "25obj.nc", 164)),field_name)) {
                    __dec_obj48=left_type,
                    left_type=(struct sType* )come_increment_ref_count(sType_clone(field_type));
                    come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, o2_saved_27, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(left_type==((void*)0)) {
                err_msg(info,"field %s is not defined",name);
                __result_obj__0 = (_Bool)1;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value2_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            right_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value2_26, "25obj.nc", 175))->type);
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char* )(__right_value0=string_to_string(((char* )come_null_checker(name, "25obj.nc", 177)))))))),left_type,right_type,come_value2_26,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            __dec_obj49=right_type,
            right_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value2_26, "25obj.nc", 179))->type);
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(((struct sType* )come_null_checker(left_type, "25obj.nc", 181))->mHeap&&((struct sType* )come_null_checker(right_type, "25obj.nc", 181))->mHeap&&((struct sType* )come_null_checker(left_type, "25obj.nc", 181))->mPointerNum>0&&((struct sType* )come_null_checker(right_type, "25obj.nc", 181))->mPointerNum>0) {
                c_value=(char* )come_increment_ref_count(increment_ref_count_object(left_type,((struct CVALUE* )come_null_checker(come_value2_26, "25obj.nc", 182))->c_value,info));
                buffer_append_format(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 183)),"%s->%s = %s",var_name_15,name,c_value);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 186)),"%s->%s = %s",var_name_15,name,((struct CVALUE* )come_null_checker(come_value2_26, "25obj.nc", 186))->c_value);
            }
            buffer_append_str(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 189)),";");
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 194)),var_name_15);
        buffer_append_str(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 195)),"; })");
        __dec_obj50=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 197))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 197))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf_18, "25obj.nc", 197))));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type2, "25obj.nc", 199))->mHeap=(_Bool)1;
        ((struct sType* )come_null_checker(type2, "25obj.nc", 200))->mPointerNum++;
        if(((struct sType* )come_null_checker(type2, "25obj.nc", 202))->mNoSolvedGenericsType) {
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type2, "25obj.nc", 203))->mNoSolvedGenericsType, "25obj.nc", 203))->mPointerNum++;
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type2, "25obj.nc", 204))->mNoSolvedGenericsType, "25obj.nc", 204))->mHeap=(_Bool)1;
        }
        __dec_obj51=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 207))->type,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 207))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 208))->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 212))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 214))->stack, "25obj.nc", 214)),(struct CVALUE* )come_increment_ref_count(come_value));
        (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        type3_30=(struct sType* )come_increment_ref_count(sType_clone(type2));
        ((struct sType* )come_null_checker(type3_30, "25obj.nc", 218))->mPointerNum++;
        ((struct sType* )come_null_checker(type3_30, "25obj.nc", 219))->mHeap=(_Bool)1;
        if(((struct sType* )come_null_checker(type3_30, "25obj.nc", 221))->mNoSolvedGenericsType) {
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type3_30, "25obj.nc", 222))->mNoSolvedGenericsType, "25obj.nc", 222))->mPointerNum++;
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type3_30, "25obj.nc", 223))->mNoSolvedGenericsType, "25obj.nc", 223))->mHeap=(_Bool)1;
        }
        type_name3_31=(char* )come_increment_ref_count(make_type_name_string(type3_30,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
        if(({(_conditional_value_X2=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 228))->funcs, "25obj.nc", 228)), "25obj.nc", 228)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
            __dec_obj52=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 229))->c_value,
            ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 229))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "25obj.nc", 229))))),((struct sInfo* )come_null_checker(info, "25obj.nc", 229))->sline,type_name3_31));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj53=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 232))->c_value,
            ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 232))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "25obj.nc", 232))))),((struct sInfo* )come_null_checker(info, "25obj.nc", 232))->sline,type_name3_31));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        ((struct sType* )come_null_checker(type2, "25obj.nc", 235))->mHeap=(_Bool)1;
        ((struct sType* )come_null_checker(type2, "25obj.nc", 236))->mPointerNum++;
        if(((struct sType* )come_null_checker(type2, "25obj.nc", 238))->mNoSolvedGenericsType) {
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type2, "25obj.nc", 239))->mNoSolvedGenericsType, "25obj.nc", 239))->mPointerNum++;
            ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type2, "25obj.nc", 240))->mNoSolvedGenericsType, "25obj.nc", 240))->mHeap=(_Bool)1;
        }
        __dec_obj54=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 243))->type,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 243))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 244))->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 248))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 250))->stack, "25obj.nc", 250)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(sType_finalize, type3_30, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3_31 = come_decrement_ref_count(type_name3_31, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
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
        __dec_obj15=((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 48))->mAnonymousName, "sType_clone", 48, "char* "));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 49))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName!=((void*)0)) {
        __dec_obj16=((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName, "sType_clone", 50, "char* "));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 51))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 52))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName!=((void*)0)) {
        __dec_obj17=((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName, "sType_clone", 53, "char* "));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 54))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 54))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 55))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 55))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum!=((void*)0)) {
        __dec_obj21=((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj22=((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic!=((void*)0)) {
        __dec_obj23=((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict!=((void*)0)) {
        __dec_obj24=((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj25=((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 65))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName!=((void*)0)) {
        __dec_obj26=((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName, "sType_clone", 66, "char* "));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj27=((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames!=((void*)0)) {
        __dec_obj31=((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType!=((void*)0)) {
        __dec_obj32=((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 73))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 73))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode!=((void*)0)) {
        __dec_obj33=((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum!=((void*)0)) {
        __dec_obj34=((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1038, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj3=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1048, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj4=((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1052))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_0;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1058, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj5=((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1062))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_1;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_1;
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
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1038, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj18=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1048, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj19=((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1052))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_2;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1058, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj20=((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1062))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_3;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_3;
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
    struct list_item$1int$* litem_4;
    struct list_item$1int$* litem_5;
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
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1048, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1int$*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1052))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_4;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1058, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1062))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_5;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_5;
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
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1038, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj28=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(char* )come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1048, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj29=((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1052))->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_6;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1058, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj30=((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1062))->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_7;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_7;
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

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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

static void sNewNode_finalize(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 2))->sname = come_decrement_ref_count(((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 4))->initializer!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, ((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 4))->initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 5))->initializer_num!=((void*)0)) {
        ((((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 5))->initializer_num) ? ((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 5))->initializer_num = come_decrement_ref_count(((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 5))->initializer_num, ((struct sNode*)((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 5))->initializer_num)->finalize, ((struct sNode*)((struct sNewNode*)come_null_checker(self, "sNewNode_finalize", 5))->initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
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
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
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

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_8;
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
    memset(&result_8,0,sizeof(struct sNode*));
    __result_obj__0 = result_8;
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
    struct sNode* result_9;
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
    memset(&result_9,0,sizeof(struct sNode*));
    __result_obj__0 = result_9;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1359))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1366))->len=0;
    __result_obj__0 = self;
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
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
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
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 2))->mName!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 2))->mName = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 3))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 4))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 5))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 6))->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 7))->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 7))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 8))->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 8))->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 9))->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 9))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 10))->mTextBlock!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 10))->mTextBlock = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 10))->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 11))->mTextBlockSName!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 11))->mTextBlockSName = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 11))->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 12))->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 12))->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 13))->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 13))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 14))->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 14))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 15))->mAttribute!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 15))->mAttribute = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 15))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 16))->mMiddleAttribute!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 16))->mMiddleAttribute = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 16))->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 17))->mFunAttribute!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 17))->mFunAttribute = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 17))->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
    it=((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sVar$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1sVar$ph*)come_null_checker(self, "list_item$1sVar$ph$p_finalize", 2))->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, ((struct list_item$1sVar$ph*)come_null_checker(self, "list_item$1sVar$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 2))->mName!=((void*)0)) {
        (((struct sVar* )come_null_checker(self, "sVar_finalize", 2))->mName = come_decrement_ref_count(((struct sVar* )come_null_checker(self, "sVar_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 3))->mCValueName!=((void*)0)) {
        (((struct sVar* )come_null_checker(self, "sVar_finalize", 3))->mCValueName = come_decrement_ref_count(((struct sVar* )come_null_checker(self, "sVar_finalize", 3))->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 4))->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sVar* )come_null_checker(self, "sVar_finalize", 4))->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 5))->mFunName!=((void*)0)) {
        (((struct sVar* )come_null_checker(self, "sVar_finalize", 5))->mFunName = come_decrement_ref_count(((struct sVar* )come_null_checker(self, "sVar_finalize", 5))->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_finalize", 2))->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sBlock* )come_null_checker(self, "sBlock_finalize", 2))->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_finalize", 3))->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, ((struct sBlock* )come_null_checker(self, "sBlock_finalize", 3))->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj43  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj44  ;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj45  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1122))->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1123, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1125))->prev=((void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1126))->next=((void*)0);
        __dec_obj43=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1133, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj44=((struct list_item$1CVALUE$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1137))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_12;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1143, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj45=((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1147))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_13;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_13;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_22;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_22,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_22;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_24;
    if(self==((void*)0)||((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_24,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_24;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_28;
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
    memset(&result_28,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_28;
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
    struct tuple2$2char$phsType$ph* result_29;
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
    memset(&result_29,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_29;
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

struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_new_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNewNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 260, "struct sNode");
    _inf_obj_value1=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count(((struct sNewNode* )come_null_checker(((struct sNewNode* )(__right_value0=(struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 260, "struct sNewNode* "))), "25obj.nc", 260))),type,((void*)0),((void*)0),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sNewNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_clone"; neo_current_frame = &fr;
    struct sNewNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewNode*  result  ;
    char*  __dec_obj55  ;
    struct sType*  __dec_obj56  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj62;
    struct sNode* __dec_obj63;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 5, "struct sNewNode* "));
    if(self!=((void*)0)) {
        ((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 6))->sline=((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj55=((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 7))->sname,
        ((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 7))->sname, "sNewNode_clone", 7, "char* "));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 8))->sline_real=((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 9))->type!=((void*)0)) {
        __dec_obj56=((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 9))->type,
        ((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 10))->initializer!=((void*)0)) {
        __dec_obj62=((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 10))->initializer,
        ((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 10))->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 10))->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 11))->initializer_num!=((void*)0)) {
        __dec_obj63=((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 11))->initializer_num,
        ((struct sNewNode* )come_null_checker(result, "sNewNode_clone", 11))->initializer_num=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sNewNode*)come_null_checker(self, "sNewNode_clone", 11))->initializer_num));
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sNewNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1017, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1017)))));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1019))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1022)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1022))->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1025)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1025))->item)));
        }
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1028))->next;
    }
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj57;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_32;
    struct tuple2$2char$phsNode$ph* __dec_obj58;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_33;
    struct tuple2$2char$phsNode$ph* __dec_obj59;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1038, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj57=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_32=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1048, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj58=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1052))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_32;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_32;
    }
    else {
        litem_33=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1058, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj59=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1062))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_33;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_33;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj60  ;
    struct sNode* __dec_obj61;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), (void*)0, 5, "struct tuple2$2char$phsNode$ph*"));
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 6))->v1!=((void*)0)) {
        __dec_obj60=((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 6))->v1,
        ((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 6))->v1=(char* )come_increment_ref_count((char* )come_memdup(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 6))->v1, "tuple2$2char$phsNode$ph_clone", 6, "char* "));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 7))->v2!=((void*)0)) {
        __dec_obj61=((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 7))->v2,
        ((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 7))->v2=(struct sNode*)come_increment_ref_count(sNode_clone(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 7))->v2));
        (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 2))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 3))->v2!=((void*)0)) {
        ((((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 3))->v2) ? ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 3))->v2, ((struct sNode*)((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 3))->v2)->finalize, ((struct sNode*)((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_finalize", 3))->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType*  inf_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj64;
    struct sType*  __dec_obj65  ;
    struct sImplementsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)come_null_checker(self, "25obj.nc", 267))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj64=((struct sImplementsNode*)come_null_checker(self, "25obj.nc", 269))->obj_exp,
    ((struct sImplementsNode*)come_null_checker(self, "25obj.nc", 269))->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj65=((struct sImplementsNode*)come_null_checker(self, "25obj.nc", 270))->inf_type,
    ((struct sImplementsNode*)come_null_checker(self, "25obj.nc", 270))->inf_type=(struct sType* )come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sImplementsNode*)come_increment_ref_count(self);
    come_call_finalizer(sImplementsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sImplementsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sImplementsNode_kind(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sImplementsNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* obj_exp;
    struct sType*  inf_type  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sClass*  klass  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  type_name2  ;
    int inf_num_stack;
    char*  buf  ;
    char*  buf2  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    char*  c_value  ;
    struct sType*  typeX  ;
    int i;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char*  name  =0;
    struct sType*  field_type  =0;
    char*  method_name  ;
    struct sFun*  fun  ;
    struct sType*  type2_36  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var4
;    struct sFun*  fun2  =0;
    char*  real_fun_name  =0;
    char*  __dec_obj66  ;
    struct sType*  type2_37  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun2_38  =0;
    char*  real_fun_name_39  =0;
    char*  __dec_obj67  ;
    struct sClass*  klass2  ;
    char*  __dec_obj68  ;
    char*  __dec_obj69  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj70  ;
    obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sImplementsNode*)come_null_checker(self, "25obj.nc", 280))->obj_exp));
    inf_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sImplementsNode*)come_null_checker(self, "25obj.nc", 281))->inf_type));
    Value=node_compile(obj_exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 289))->type));
    ((struct sType* )come_null_checker(type, "25obj.nc", 290))->mPointerNum--;
    ((struct sType* )come_null_checker(type, "25obj.nc", 291))->mHeap=(_Bool)0;
    klass=((struct sType* )come_null_checker(inf_type, "25obj.nc", 293))->mClass;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 295, "struct CVALUE* "))), "25obj.nc", 295)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(sType_clone(inf_type));
    type_name=(char* )come_increment_ref_count(make_type_name_string(inf_type,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0));
    type_name2=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0));
    static int inf_num=0;
    ++inf_num;
    inf_num_stack=inf_num;
    buf=(char* )come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name,inf_num_stack));
    add_come_code_at_function_head(info,buf);
    buf2=(char* )come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2,inf_num_stack));
    add_come_code_at_function_head(info,buf2);
    if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 311))->funcs, "25obj.nc", 311)), "25obj.nc", 311)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), (void*)0, %d, \"%s\");\n",inf_num_stack,type_name,type_name,((struct sInfo* )come_null_checker(info, "25obj.nc", 312))->sline,type_name);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), (void*)0, %d, \"%s\");\n",inf_num_stack,type_name,type_name,((struct sInfo* )come_null_checker(info, "25obj.nc", 315))->sline,type_name);
    }
    c_value=(char* )come_increment_ref_count(increment_ref_count_object(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 318))->type,((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 318))->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack,c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack,inf_num_stack);
    typeX=(struct sType* )come_increment_ref_count(sType_clone(type));
    ((struct sType* )come_null_checker(typeX, "25obj.nc", 323))->mPointerNum++;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically(typeX,"finalize",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically(typeX,"clone",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=1;i<list$1tuple2$2char$phsType$ph$ph_length(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(klass, "25obj.nc", 328))->mFields, "25obj.nc", 328)));i++){
        multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(klass, "25obj.nc", 329))->mFields, "25obj.nc", 329)), "25obj.nc", 329)),i)));
        name=(char* )come_increment_ref_count(multiple_assign_var3->v1);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        method_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,name,info,(_Bool)1));
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 333))->funcs, "25obj.nc", 333)),method_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)&&string_operator_equals(((char* )come_null_checker(name, "25obj.nc", 335)),"to_string")) {
            type2_36=(struct sType* )come_increment_ref_count(sType_clone(type));
            ((struct sType* )come_null_checker(type2_36, "25obj.nc", 337))->mPointerNum++;
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically(type2_36,name,info)));
            fun2=multiple_assign_var4->v1;
            real_fun_name=(char* )come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2;
            __dec_obj66=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_36, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(fun==((void*)0)&&string_operator_equals(((char* )come_null_checker(name, "25obj.nc", 344)),"equals")) {
            type2_37=(struct sType* )come_increment_ref_count(sType_clone(type));
            ((struct sType* )come_null_checker(type2_37, "25obj.nc", 346))->mPointerNum++;
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(type2_37,name,info)));
            fun2_38=multiple_assign_var5->v1;
            real_fun_name_39=(char* )come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2_38;
            __dec_obj67=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name_39);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_37, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name_39 = come_decrement_ref_count(real_fun_name_39, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(fun==((void*)0)) {
            klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 355))->classes, "25obj.nc", 355)), "25obj.nc", 355)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 355))->mClass, "25obj.nc", 355))->mName)));
            while(({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 356))->classes, "25obj.nc", 356)), "25obj.nc", 356)),((struct sClass* )come_null_checker(klass2, "25obj.nc", 356))->mParentClassName)))));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 357))->classes, "25obj.nc", 357)), "25obj.nc", 357)),((struct sClass* )come_null_checker(klass2, "25obj.nc", 357))->mParentClassName)));
                __dec_obj68=method_name,
                method_name=(char* )come_increment_ref_count(create_method_name_using_class(klass2,name,info));
                __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 361))->funcs, "25obj.nc", 361)),((char* )(__right_value0=__builtin_string(method_name))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(fun) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (method_name = come_decrement_ref_count(method_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __dec_obj69=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 375))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 375))->c_value=(char* )come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack));
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
    type3=(struct sType* )come_increment_ref_count(sType_clone(inf_type));
    ((struct sType* )come_null_checker(type3, "25obj.nc", 378))->mPointerNum++;
    ((struct sType* )come_null_checker(type3, "25obj.nc", 379))->mHeap=(_Bool)1;
    ((struct sType* )come_null_checker(type2, "25obj.nc", 380))->mHeap=(_Bool)1;
    __dec_obj70=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 382))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 382))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 383))->type, "25obj.nc", 383))->mPointerNum++;
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 384))->var=((void*)0);
    append_object_to_right_values(come_value2,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 388))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 390))->stack, "25obj.nc", 390)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0));
    (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, typeX, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sImplementsNode_finalize(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 2))->sname = come_decrement_ref_count(((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 3))->obj_exp!=((void*)0)) {
        ((((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 3))->obj_exp) ? ((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 3))->obj_exp = come_decrement_ref_count(((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 3))->obj_exp, ((struct sNode*)((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 3))->obj_exp)->finalize, ((struct sNode*)((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 3))->obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 4))->inf_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_finalize", 4))->inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2sFun$pchar$ph*)come_null_checker(self, "tuple2$2sFun$pchar$ph$p_finalize", 2))->v2!=((void*)0)) {
        (((struct tuple2$2sFun$pchar$ph*)come_null_checker(self, "tuple2$2sFun$pchar$ph$p_finalize", 2))->v2 = come_decrement_ref_count(((struct tuple2$2sFun$pchar$ph*)come_null_checker(self, "tuple2$2sFun$pchar$ph$p_finalize", 2))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
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

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_34;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_34,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_34);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_35;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_35,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_35);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2191)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2191))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2195))->item_existance, "/usr/local/include/neo-c.h", 2195))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it], "/usr/local/include/neo-c.h", 2197)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it]==key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2199))->items, "/usr/local/include/neo-c.h", 2199))[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2204))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sTrueNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)come_null_checker(self, "25obj.nc", 400))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sTrueNode*)come_increment_ref_count(self);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTrueNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTrueNode_kind(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTrueNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj71  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj72  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 410, "struct CVALUE* "))), "25obj.nc", 410)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj71=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 412))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 412))->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj72=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 413))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 413))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 413, "struct sType* "))), "25obj.nc", 413))),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 414))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 416))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 418))->stack, "25obj.nc", 418)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTrueNode_finalize(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sTrueNode*)come_null_checker(self, "sTrueNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sTrueNode*)come_null_checker(self, "sTrueNode_finalize", 2))->sname = come_decrement_ref_count(((struct sTrueNode*)come_null_checker(self, "sTrueNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNode* create_true_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_true_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sTrueNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 426, "struct sNode");
    _inf_obj_value2=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count(((struct sTrueNode* )come_null_checker(((struct sTrueNode* )(__right_value0=(struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), (void*)0, 426, "struct sTrueNode* "))), "25obj.nc", 426))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)));
    come_call_finalizer(sTrueNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_clone"; neo_current_frame = &fr;
    struct sTrueNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTrueNode*  result  ;
    char*  __dec_obj73  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), (void*)0, 5, "struct sTrueNode* "));
    if(self!=((void*)0)) {
        ((struct sTrueNode* )come_null_checker(result, "sTrueNode_clone", 6))->sline=((struct sTrueNode*)come_null_checker(self, "sTrueNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sTrueNode*)come_null_checker(self, "sTrueNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj73=((struct sTrueNode* )come_null_checker(result, "sTrueNode_clone", 7))->sname,
        ((struct sTrueNode* )come_null_checker(result, "sTrueNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sTrueNode*)come_null_checker(self, "sTrueNode_clone", 7))->sname, "sTrueNode_clone", 7, "char* "));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sTrueNode* )come_null_checker(result, "sTrueNode_clone", 8))->sline_real=((struct sTrueNode*)come_null_checker(self, "sTrueNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sTrueNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFalseNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)come_null_checker(self, "25obj.nc", 433))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sFalseNode*)come_increment_ref_count(self);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFalseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sFalseNode_kind(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFalseNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj74  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj75  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 443, "struct CVALUE* "))), "25obj.nc", 443)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj74=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 445))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 445))->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj75=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 446))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 446))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 446, "struct sType* "))), "25obj.nc", 446))),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 447))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 449))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 451))->stack, "25obj.nc", 451)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFalseNode_finalize(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sFalseNode*)come_null_checker(self, "sFalseNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sFalseNode*)come_null_checker(self, "sFalseNode_finalize", 2))->sname = come_decrement_ref_count(((struct sFalseNode*)come_null_checker(self, "sFalseNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNode* create_false_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_false_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sFalseNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 459, "struct sNode");
    _inf_obj_value3=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count(((struct sFalseNode* )come_null_checker(((struct sFalseNode* )(__right_value0=(struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), (void*)0, 459, "struct sFalseNode* "))), "25obj.nc", 459))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
    come_call_finalizer(sFalseNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_clone"; neo_current_frame = &fr;
    struct sFalseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFalseNode*  result  ;
    char*  __dec_obj76  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), (void*)0, 5, "struct sFalseNode* "));
    if(self!=((void*)0)) {
        ((struct sFalseNode* )come_null_checker(result, "sFalseNode_clone", 6))->sline=((struct sFalseNode*)come_null_checker(self, "sFalseNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sFalseNode*)come_null_checker(self, "sFalseNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj76=((struct sFalseNode* )come_null_checker(result, "sFalseNode_clone", 7))->sname,
        ((struct sFalseNode* )come_null_checker(result, "sFalseNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sFalseNode*)come_null_checker(self, "sFalseNode_clone", 7))->sname, "sFalseNode_clone", 7, "char* "));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sFalseNode* )come_null_checker(result, "sFalseNode_clone", 8))->sline_real=((struct sFalseNode*)come_null_checker(self, "sFalseNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sFalseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj77;
    struct list$1sType$ph* __dec_obj78;
    struct list$1sNode$ph* __dec_obj79;
    struct sNode* __dec_obj80;
    struct sGeneric* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGeneric*)come_increment_ref_count(((struct sGeneric*)come_null_checker(self, "25obj.nc", 466))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj77=((struct sGeneric*)come_null_checker(self, "25obj.nc", 468))->exp,
    ((struct sGeneric*)come_null_checker(self, "25obj.nc", 468))->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj78=((struct sGeneric*)come_null_checker(self, "25obj.nc", 469))->types,
    ((struct sGeneric*)come_null_checker(self, "25obj.nc", 469))->types=(struct list$1sType$ph*)come_increment_ref_count(types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj79=((struct sGeneric*)come_null_checker(self, "25obj.nc", 470))->exps,
    ((struct sGeneric*)come_null_checker(self, "25obj.nc", 470))->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj80=((struct sGeneric*)come_null_checker(self, "25obj.nc", 471))->default_exp,
    ((struct sGeneric*)come_null_checker(self, "25obj.nc", 471))->default_exp=(struct sNode*)come_increment_ref_count(default_exp);
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGeneric*)come_increment_ref_count(self);
    come_call_finalizer(sGeneric_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGeneric_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGeneric_kind(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGeneric"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGeneric_compile(struct sGeneric* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    struct list$1sNode$ph* exps;
    struct list$1sType$ph* types;
    struct sNode* default_exp;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct sType*  result_type  ;
    int n;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    struct sType*  type  ;
    _Bool Value_42;
    struct CVALUE*  come_value_43  ;
    struct sType*  __dec_obj81  ;
    _Bool Value_44;
    struct CVALUE*  come_value_45  ;
    int n_46;
    struct list$1sNode$ph* o2_saved_47;
    struct sNode* it_48;
    struct sType*  type_49  ;
    _Bool Value_50;
    struct CVALUE*  come_value_51  ;
    struct sType*  __dec_obj82  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj83  ;
    struct sType*  __dec_obj84  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sGeneric*)come_null_checker(self, "25obj.nc", 481))->exp);
    exps=(struct list$1sNode$ph*)come_increment_ref_count(((struct sGeneric*)come_null_checker(self, "25obj.nc", 482))->exps);
    types=(struct list$1sType$ph*)come_increment_ref_count(((struct sGeneric*)come_null_checker(self, "25obj.nc", 483))->types);
    default_exp=(struct sNode*)come_increment_ref_count(((struct sGeneric*)come_null_checker(self, "25obj.nc", 484))->default_exp);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 486, "struct buffer* "))), "25obj.nc", 486)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 493)),"_Generic((%s), ",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 493))->c_value);
    result_type=((void*)0);
    if(default_exp) {
        n=0;
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(exps),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 498)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 498)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 498)))){
            type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(types, "25obj.nc", 499)), "25obj.nc", 499)),n));
            Value_42=node_compile(it,info);
            if(!Value_42) {
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_43=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj81=result_type,
            result_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value_43, "25obj.nc", 507))->type);
            come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 509)),"%s: %s",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),((struct CVALUE* )come_null_checker(come_value_43, "25obj.nc", 509))->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 511)),",");
            n++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_44=node_compile(default_exp,info);
        if(!Value_44) {
            __result_obj__0 = (_Bool)0;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value_45=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 522)),"default: %s",((struct CVALUE* )come_null_checker(come_value_45, "25obj.nc", 522))->c_value);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 524)),")");
        come_call_finalizer(CVALUE_finalize, come_value_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        n_46=0;
        for(o2_saved_47=(struct list$1sNode$ph*)come_increment_ref_count(exps),it_48=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_47, "25obj.nc", 528)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_47, "25obj.nc", 528)));it_48=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_47, "25obj.nc", 528)))){
            type_49=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(types, "25obj.nc", 529)), "25obj.nc", 529)),n_46));
            Value_50=node_compile(it_48,info);
            if(!Value_50) {
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_51=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj82=result_type,
            result_type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value_51, "25obj.nc", 537))->type);
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 539)),"%s: %s",((char* )(__right_value0=make_type_name_string(type_49,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),((struct CVALUE* )come_null_checker(come_value_51, "25obj.nc", 539))->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(n_46==list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(exps, "25obj.nc", 541)))-1) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 542)),")");
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 545)),",");
            }
            n_46++;
            come_call_finalizer(sType_finalize, type_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 553, "struct CVALUE* "))), "25obj.nc", 553)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj83=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 555))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 555))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "25obj.nc", 555))));
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj84=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 556))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 556))->type=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 557))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 559))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 561))->stack, "25obj.nc", 561)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGeneric_finalize(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 2))->sname!=((void*)0)) {
        (((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 2))->sname = come_decrement_ref_count(((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 3))->exp!=((void*)0)) {
        ((((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 3))->exp) ? ((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 3))->exp = come_decrement_ref_count(((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 3))->exp, ((struct sNode*)((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 4))->types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 4))->types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 5))->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 5))->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 6))->default_exp!=((void*)0)) {
        ((((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 6))->default_exp) ? ((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 6))->default_exp = come_decrement_ref_count(((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 6))->default_exp, ((struct sNode*)((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 6))->default_exp)->finalize, ((struct sNode*)((struct sGeneric*)come_null_checker(self, "sGeneric_finalize", 6))->default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    struct sType*  default_value_40  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_40,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_40);
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
    struct sType*  default_value_41  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_41,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_41);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    return ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1276))->len;
    neo_current_frame = fr.prev;
}

struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj85  ;
    struct sHeapSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sHeapSizeOfNode*)come_increment_ref_count(((struct sHeapSizeOfNode*)come_null_checker(self, "25obj.nc", 571))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj85=((struct sHeapSizeOfNode*)come_null_checker(self, "25obj.nc", 573))->type,
    ((struct sHeapSizeOfNode*)come_null_checker(self, "25obj.nc", 573))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sHeapSizeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sHeapSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sHeapSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sHeapSizeOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct buffer*  buf  ;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  cvalue  ;
    char*  __dec_obj86  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj87  ;
    type=(struct sType* )come_increment_ref_count(((struct sHeapSizeOfNode*)come_null_checker(self, "25obj.nc", 583))->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 585, "struct CVALUE* "))), "25obj.nc", 585)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 587))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    ((struct sType* )come_null_checker(type2, "25obj.nc", 590))->mPointerNum--;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 594, "struct buffer* "))), "25obj.nc", 594)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 595)),"sizeof(%s)",type_name);
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "25obj.nc", 596))->mHeapArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 596)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 596)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "25obj.nc", 596)))){
        Value=node_compile(it,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "25obj.nc", 603)),"*(%s)",((struct CVALUE* )come_null_checker(cvalue, "25obj.nc", 603))->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj86=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 606))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 606))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "25obj.nc", 606))));
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj87=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 607))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 607))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 607, "struct sType* "))), "25obj.nc", 607))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 608))->type, "25obj.nc", 608))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 609))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 611))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 613))->stack, "25obj.nc", 613)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_finalize", 2))->sname = come_decrement_ref_count(((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj88  ;
    struct sSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)come_null_checker(self, "25obj.nc", 623))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj88=((struct sSizeOfNode*)come_null_checker(self, "25obj.nc", 625))->type,
    ((struct sSizeOfNode*)come_null_checker(self, "25obj.nc", 625))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sSizeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sSizeOfNode_kind(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj89  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj90  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(((struct sSizeOfNode*)come_null_checker(self, "25obj.nc", 635))->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 637, "struct CVALUE* "))), "25obj.nc", 637)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 639))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0));
    __dec_obj89=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 644))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 644))->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",type_name));
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj90=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 645))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 645))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 645, "struct sType* "))), "25obj.nc", 645))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 646))->type, "25obj.nc", 646))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 647))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 649))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 651))->stack, "25obj.nc", 651)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj91  ;
    char*  __dec_obj92  ;
    struct sOffsetOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)come_null_checker(self, "25obj.nc", 661))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj91=((struct sOffsetOf*)come_null_checker(self, "25obj.nc", 663))->type,
    ((struct sOffsetOf*)come_null_checker(self, "25obj.nc", 663))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj92=((struct sOffsetOf*)come_null_checker(self, "25obj.nc", 664))->name,
    ((struct sOffsetOf*)come_null_checker(self, "25obj.nc", 664))->name=(char* )come_increment_ref_count((char* )come_memdup(name, "25obj.nc", 664, "char* "));
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sOffsetOf*)come_increment_ref_count(self);
    come_call_finalizer(sOffsetOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sOffsetOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sOffsetOf_kind(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOffsetOf"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    char*  name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj93  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj94  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(((struct sOffsetOf*)come_null_checker(self, "25obj.nc", 674))->type);
    name=(char* )come_increment_ref_count(((struct sOffsetOf*)come_null_checker(self, "25obj.nc", 675))->name);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 677, "struct CVALUE* "))), "25obj.nc", 677)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 679))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj93=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 684))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 684))->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_offsetof(%s, %s)",type_name,name));
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj94=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 685))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 685))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 685, "struct sType* "))), "25obj.nc", 685))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 686))->type, "25obj.nc", 686))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 687))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 689))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 691))->stack, "25obj.nc", 691)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOffsetOf_finalize(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 2))->sname!=((void*)0)) {
        (((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 2))->sname = come_decrement_ref_count(((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 4))->name!=((void*)0)) {
        (((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 4))->name = come_decrement_ref_count(((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_finalize", 4))->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj95;
    struct sSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)come_null_checker(self, "25obj.nc", 701))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj95=((struct sSizeOfExpNode*)come_null_checker(self, "25obj.nc", 703))->exp,
    ((struct sSizeOfExpNode*)come_null_checker(self, "25obj.nc", 703))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sSizeOfExpNode_kind(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj96  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj97  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sSizeOfExpNode*)come_null_checker(self, "25obj.nc", 715))->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 723, "struct CVALUE* "))), "25obj.nc", 723)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj96=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 725))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 725))->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 725))->c_value));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj97=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 726))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 726))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 726, "struct sType* "))), "25obj.nc", 726))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 727))->type, "25obj.nc", 727))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 728))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 730))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 732))->stack, "25obj.nc", 732)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 3))->exp!=((void*)0)) {
        ((((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 3))->exp) ? ((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 3))->exp = come_decrement_ref_count(((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 3))->exp, ((struct sNode*)((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj98;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)come_null_checker(self, "25obj.nc", 742))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj98=((struct sDynamicSizeOfExpNode*)come_null_checker(self, "25obj.nc", 744))->exp,
    ((struct sDynamicSizeOfExpNode*)come_null_checker(self, "25obj.nc", 744))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj99  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj100  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)come_null_checker(self, "25obj.nc", 756))->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 764, "struct CVALUE* "))), "25obj.nc", 764)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj99=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 766))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 766))->c_value=(char* )come_increment_ref_count(xsprintf("dynamic_sizeof(%s)",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 766))->c_value));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj100=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 767))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 767))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 767, "struct sType* "))), "25obj.nc", 767))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 768))->type, "25obj.nc", 768))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 769))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 771))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 773))->stack, "25obj.nc", 773)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 2))->sname = come_decrement_ref_count(((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 3))->exp!=((void*)0)) {
        ((((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 3))->exp) ? ((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 3))->exp = come_decrement_ref_count(((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 3))->exp, ((struct sNode*)((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj101  ;
    struct sTypeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)come_null_checker(self, "25obj.nc", 783))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj101=((struct sTypeOfNode*)come_null_checker(self, "25obj.nc", 785))->type,
    ((struct sTypeOfNode*)come_null_checker(self, "25obj.nc", 785))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sTypeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTypeOfNode_kind(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj102  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj103  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(((struct sTypeOfNode*)come_null_checker(self, "25obj.nc", 795))->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 797, "struct CVALUE* "))), "25obj.nc", 797)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 799))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj102=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 804))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 804))->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj103=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 805))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 805))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 805, "struct sType* "))), "25obj.nc", 805))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 806))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 808))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 810))->stack, "25obj.nc", 810)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sTypeOfNode*)come_null_checker(self, "sTypeOfNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sTypeOfNode*)come_null_checker(self, "sTypeOfNode_finalize", 2))->sname = come_decrement_ref_count(((struct sTypeOfNode*)come_null_checker(self, "sTypeOfNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sTypeOfNode*)come_null_checker(self, "sTypeOfNode_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sTypeOfNode*)come_null_checker(self, "sTypeOfNode_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj104;
    struct sTypeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)come_null_checker(self, "25obj.nc", 820))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj104=((struct sTypeOfExpNode*)come_null_checker(self, "25obj.nc", 822))->exp,
    ((struct sTypeOfExpNode*)come_null_checker(self, "25obj.nc", 822))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sTypeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj105  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj106  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sTypeOfExpNode*)come_null_checker(self, "25obj.nc", 832))->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 840))->type));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 842))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj105=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 847))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 847))->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 848))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 848))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 848, "struct sType* "))), "25obj.nc", 848))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 849))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 851))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 853))->stack, "25obj.nc", 853)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 2))->sname = come_decrement_ref_count(((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 3))->exp!=((void*)0)) {
        ((((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 3))->exp) ? ((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 3))->exp = come_decrement_ref_count(((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 3))->exp, ((struct sNode*)((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sTypeOfExpNode*)come_null_checker(self, "sTypeOfExpNode_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj107;
    struct sDynamicTypeOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)come_null_checker(self, "25obj.nc", 863))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj107=((struct sDynamicTypeOf*)come_null_checker(self, "25obj.nc", 865))->exp,
    ((struct sDynamicTypeOf*)come_null_checker(self, "25obj.nc", 865))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDynamicTypeOf*)come_increment_ref_count(self);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDynamicTypeOf"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj108  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj109  ;
    struct CVALUE*  come_value2_52  ;
    char*  __dec_obj110  ;
    struct sType*  __dec_obj111  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sDynamicTypeOf*)come_null_checker(self, "25obj.nc", 875))->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 883))->type, "25obj.nc", 883))->mPointerNum>0&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 883))->type, "25obj.nc", 883))->mHeap) {
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 884, "struct CVALUE* "))), "25obj.nc", 884)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj108=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 886))->c_value,
        ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 886))->c_value=(char* )come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 886))->c_value));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj109=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 887))->type,
        ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 887))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 887, "struct sType* "))), "25obj.nc", 887))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 888))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 890))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 892))->stack, "25obj.nc", 892)),(struct CVALUE* )come_increment_ref_count(come_value2));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_52=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 895, "struct CVALUE* "))), "25obj.nc", 895)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj110=((struct CVALUE* )come_null_checker(come_value2_52, "25obj.nc", 897))->c_value,
        ((struct CVALUE* )come_null_checker(come_value2_52, "25obj.nc", 897))->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj111=((struct CVALUE* )come_null_checker(come_value2_52, "25obj.nc", 898))->type,
        ((struct CVALUE* )come_null_checker(come_value2_52, "25obj.nc", 898))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 898, "struct sType* "))), "25obj.nc", 898))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value2_52, "25obj.nc", 899))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2_52, "25obj.nc", 901))->c_value);
        append_object_to_right_values(come_value2_52,((struct CVALUE* )come_null_checker(come_value2_52, "25obj.nc", 903))->type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 905))->stack, "25obj.nc", 905)),(struct CVALUE* )come_increment_ref_count(come_value2_52));
        come_call_finalizer(CVALUE_finalize, come_value2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 2))->sname!=((void*)0)) {
        (((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 2))->sname = come_decrement_ref_count(((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 3))->exp!=((void*)0)) {
        ((((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 3))->exp) ? ((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 3))->exp = come_decrement_ref_count(((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 3))->exp, ((struct sNode*)((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj112  ;
    struct sAlignOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)come_null_checker(self, "25obj.nc", 916))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj112=((struct sAlignOfNode*)come_null_checker(self, "25obj.nc", 918))->type,
    ((struct sAlignOfNode*)come_null_checker(self, "25obj.nc", 918))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignOfNode_kind(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj113  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj114  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(((struct sAlignOfNode*)come_null_checker(self, "25obj.nc", 930))->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 932, "struct CVALUE* "))), "25obj.nc", 932)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 934))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj113=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 939))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 939))->c_value=(char* )come_increment_ref_count(xsprintf("_Alignof(%s)",type_name));
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj114=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 940))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 940))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 940, "struct sType* "))), "25obj.nc", 940))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 941))->type, "25obj.nc", 941))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 942))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 944))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 946))->stack, "25obj.nc", 946)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj115;
    struct sAlignOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)come_null_checker(self, "25obj.nc", 956))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj115=((struct sAlignOfExpNode*)come_null_checker(self, "25obj.nc", 958))->exp,
    ((struct sAlignOfExpNode*)come_null_checker(self, "25obj.nc", 958))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj116  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj117  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode*)come_null_checker(self, "25obj.nc", 968))->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 976, "struct CVALUE* "))), "25obj.nc", 976)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj116=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 978))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 978))->c_value=(char* )come_increment_ref_count(xsprintf("_AlignOf(%s)",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 978))->c_value));
    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj117=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 979))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 979))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 979, "struct sType* "))), "25obj.nc", 979))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 980))->type, "25obj.nc", 980))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 981))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 983))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 985))->stack, "25obj.nc", 985)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 3))->exp!=((void*)0)) {
        ((((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 3))->exp) ? ((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 3))->exp = come_decrement_ref_count(((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 3))->exp, ((struct sNode*)((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj118  ;
    struct sAlignOfNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)come_null_checker(self, "25obj.nc", 995))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj118=((struct sAlignOfNode2*)come_null_checker(self, "25obj.nc", 997))->type,
    ((struct sAlignOfNode2*)come_null_checker(self, "25obj.nc", 997))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignOfNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignOfNode2_kind(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode2"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj119  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj120  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(((struct sAlignOfNode2*)come_null_checker(self, "25obj.nc", 1007))->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1009, "struct CVALUE* "))), "25obj.nc", 1009)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 1011))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj119=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1016))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1016))->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",type_name));
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj120=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1017))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1017))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1017, "struct sType* "))), "25obj.nc", 1017))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1018))->type, "25obj.nc", 1018))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1019))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1021))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1023))->stack, "25obj.nc", 1023)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_finalize", 2))->sname!=((void*)0)) {
        (((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_finalize", 2))->sname = come_decrement_ref_count(((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj121;
    struct sAlignOfExpNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)come_null_checker(self, "25obj.nc", 1033))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj121=((struct sAlignOfExpNode2*)come_null_checker(self, "25obj.nc", 1035))->exp,
    ((struct sAlignOfExpNode2*)come_null_checker(self, "25obj.nc", 1035))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignOfExpNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode2"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj122  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj123  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode2*)come_null_checker(self, "25obj.nc", 1045))->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1053, "struct CVALUE* "))), "25obj.nc", 1053)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj122=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1055))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1055))->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1055))->c_value));
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj123=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1056))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1056))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1056, "struct sType* "))), "25obj.nc", 1056))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1057))->type, "25obj.nc", 1057))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1058))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1060))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1062))->stack, "25obj.nc", 1062)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 2))->sname!=((void*)0)) {
        (((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 2))->sname = come_decrement_ref_count(((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 3))->exp!=((void*)0)) {
        ((((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 3))->exp) ? ((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 3))->exp = come_decrement_ref_count(((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 3))->exp, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj124  ;
    struct sAlignAsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)come_null_checker(self, "25obj.nc", 1072))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj124=((struct sAlignAsNode*)come_null_checker(self, "25obj.nc", 1074))->type,
    ((struct sAlignAsNode*)come_null_checker(self, "25obj.nc", 1074))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignAsNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignAsNode_kind(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj125  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj126  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(((struct sAlignAsNode*)come_null_checker(self, "25obj.nc", 1084))->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1086, "struct CVALUE* "))), "25obj.nc", 1086)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,((struct sInfo* )come_null_checker(info, "25obj.nc", 1088))->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj125=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1093))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1093))->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",type_name));
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj126=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1094))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1094))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1094, "struct sType* "))), "25obj.nc", 1094))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1095))->type, "25obj.nc", 1095))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1096))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1098))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1100))->stack, "25obj.nc", 1100)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAlignAsNode*)come_null_checker(self, "sAlignAsNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sAlignAsNode*)come_null_checker(self, "sAlignAsNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAlignAsNode*)come_null_checker(self, "sAlignAsNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAlignAsNode*)come_null_checker(self, "sAlignAsNode_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sAlignAsNode*)come_null_checker(self, "sAlignAsNode_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj127;
    struct sAlignAsExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)come_null_checker(self, "25obj.nc", 1110))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj127=((struct sAlignAsExpNode*)come_null_checker(self, "25obj.nc", 1112))->exp,
    ((struct sAlignAsExpNode*)come_null_checker(self, "25obj.nc", 1112))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignAsExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsExpNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj128  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj129  ;
    exp=(struct sNode*)come_increment_ref_count(((struct sAlignAsExpNode*)come_null_checker(self, "25obj.nc", 1122))->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1130, "struct CVALUE* "))), "25obj.nc", 1130)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj128=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1132))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1132))->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1132))->c_value));
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj129=((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1133))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1133))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1133, "struct sType* "))), "25obj.nc", 1133))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj129,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1134))->type, "25obj.nc", 1134))->mUnsigned=(_Bool)1;
    ((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1135))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "25obj.nc", 1137))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1139))->stack, "25obj.nc", 1139)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 3))->exp!=((void*)0)) {
        ((((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 3))->exp) ? ((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 3))->exp = come_decrement_ref_count(((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 3))->exp, ((struct sNode*)((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 3))->exp)->finalize, ((struct sNode*)((struct sAlignAsExpNode*)come_null_checker(self, "sAlignAsExpNode_finalize", 3))->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj130;
    struct sDeleteNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)come_null_checker(self, "25obj.nc", 1149))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj130=((struct sDeleteNode*)come_null_checker(self, "25obj.nc", 1151))->node,
    ((struct sDeleteNode*)come_null_checker(self, "25obj.nc", 1151))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDeleteNode*)come_increment_ref_count(self);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDeleteNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDeleteNode_kind(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDeleteNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(((struct sDeleteNode*)come_null_checker(self, "25obj.nc", 1161))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1169))->type, "25obj.nc", 1169))->mPointerNum>0) {
        free_object(((struct sType* )(__right_value0=sType_clone(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1170))->type))),((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1170))->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDeleteNode_finalize(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 2))->sname = come_decrement_ref_count(((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 3))->node) ? ((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 3))->node = come_decrement_ref_count(((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 3))->node, ((struct sNode*)((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj131;
    struct sBorrowNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)come_null_checker(self, "25obj.nc", 1181))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj131=((struct sBorrowNode*)come_null_checker(self, "25obj.nc", 1183))->node,
    ((struct sBorrowNode*)come_null_checker(self, "25obj.nc", 1183))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
    __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sBorrowNode_kind(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sBorrowNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  __dec_obj132  ;
    node=(struct sNode*)come_increment_ref_count(((struct sBorrowNode*)come_null_checker(self, "25obj.nc", 1195))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    remove_value_from_right_value_objects(come_value,info);
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1205))->type));
    ((struct sType* )come_null_checker(type, "25obj.nc", 1206))->mHeap=(_Bool)0;
    __dec_obj132=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1207))->type,
    ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1207))->type=(struct sType* )come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1209))->stack, "25obj.nc", 1209)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBorrowNode_finalize(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 2))->sname = come_decrement_ref_count(((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 3))->node) ? ((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 3))->node = come_decrement_ref_count(((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 3))->node, ((struct sNode*)((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj133;
    struct sCloneNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)come_null_checker(self, "25obj.nc", 1219))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj133=((struct sCloneNode*)come_null_checker(self, "25obj.nc", 1221))->node,
    ((struct sCloneNode*)come_null_checker(self, "25obj.nc", 1221))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sCloneNode*)come_increment_ref_count(self);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCloneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sCloneNode_kind(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCloneNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct tuple2$2sType$phchar$ph* multiple_assign_var6
;    struct sType*  result_type  =0;
    char*  c_value  =0;
    char*  __dec_obj134  ;
    struct sType*  __dec_obj135  ;
    node=(struct sNode*)come_increment_ref_count(((struct sCloneNode*)come_null_checker(self, "25obj.nc", 1231))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "25obj.nc", 1239))->type));
    if(((struct sType* )come_null_checker(left_type, "25obj.nc", 1241))->mPointerNum==1&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type, "25obj.nc", 1241))->mClass, "25obj.nc", 1241))->mName, "25obj.nc", 1241)),"void")&&((struct sType* )come_null_checker(left_type, "25obj.nc", 1241))->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1242))->stack, "25obj.nc", 1242)),(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(((struct sType* )come_null_checker(left_type, "25obj.nc", 1244))->mPointerNum==0) {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1245))->stack, "25obj.nc", 1245)),(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(((struct sType* )come_null_checker(left_type, "25obj.nc", 1247))->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1248, "struct CVALUE* "))), "25obj.nc", 1248)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,((struct CVALUE* )come_null_checker(left_value, "25obj.nc", 1250))->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1);
        c_value=(char* )come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj134=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1251))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1251))->c_value=(char* )come_increment_ref_count(c_value);
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj135=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1252))->type,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1252))->type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1253))->type, "25obj.nc", 1253))->mHeap=(_Bool)1;
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1254))->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1258))->stack, "25obj.nc", 1258)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCloneNode_finalize(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 3))->node) ? ((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 3))->node = come_decrement_ref_count(((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 3))->node, ((struct sNode*)((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sCloneNode*)come_null_checker(self, "sCloneNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj136;
    struct sDupeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)come_null_checker(self, "25obj.nc", 1269))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj136=((struct sDupeNode*)come_null_checker(self, "25obj.nc", 1271))->node,
    ((struct sDupeNode*)come_null_checker(self, "25obj.nc", 1271))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDupeNode*)come_increment_ref_count(self);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDupeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDupeNode_kind(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDupeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct tuple2$2sType$phchar$ph* multiple_assign_var7
;    struct sType*  result_type  =0;
    char*  c_value  =0;
    char*  __dec_obj137  ;
    struct sType*  __dec_obj138  ;
    node=(struct sNode*)come_increment_ref_count(((struct sDupeNode*)come_null_checker(self, "25obj.nc", 1281))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "25obj.nc", 1289))->type));
    if(((struct sType* )come_null_checker(left_type, "25obj.nc", 1291))->mPointerNum==0) {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1292))->stack, "25obj.nc", 1292)),(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(((struct sType* )come_null_checker(left_type, "25obj.nc", 1294))->mPointerNum>0&&((struct sType* )come_null_checker(left_type, "25obj.nc", 1294))->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1295))->stack, "25obj.nc", 1295)),(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(((struct sType* )come_null_checker(left_type, "25obj.nc", 1297))->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1298, "struct CVALUE* "))), "25obj.nc", 1298)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,((struct CVALUE* )come_null_checker(left_value, "25obj.nc", 1300))->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1);
        c_value=(char* )come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj137=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1301))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1301))->c_value=(char* )come_increment_ref_count(c_value);
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj138=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1302))->type,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1302))->type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1303))->type, "25obj.nc", 1303))->mHeap=(_Bool)1;
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1304))->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1308))->stack, "25obj.nc", 1308)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDupeNode_finalize(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 2))->sname = come_decrement_ref_count(((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 3))->node) ? ((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 3))->node = come_decrement_ref_count(((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 3))->node, ((struct sNode*)((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sDupeNode*)come_null_checker(self, "sDupeNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj139;
    struct sDummyHeapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)come_null_checker(self, "25obj.nc", 1319))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj139=((struct sDummyHeapNode*)come_null_checker(self, "25obj.nc", 1321))->node,
    ((struct sDummyHeapNode*)come_null_checker(self, "25obj.nc", 1321))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDummyHeapNode*)come_increment_ref_count(self);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDummyHeapNode_kind(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDummyHeapNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(((struct sDummyHeapNode*)come_null_checker(self, "25obj.nc", 1331))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1339))->type, "25obj.nc", 1339))->mPointerNum>0) {
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1340))->type, "25obj.nc", 1340))->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1343))->stack, "25obj.nc", 1343)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 2))->sname = come_decrement_ref_count(((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 3))->node) ? ((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 3))->node = come_decrement_ref_count(((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 3))->node, ((struct sNode*)((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj140;
    struct sGCIncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)come_null_checker(self, "25obj.nc", 1353))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj140=((struct sGCIncNode*)come_null_checker(self, "25obj.nc", 1355))->node,
    ((struct sGCIncNode*)come_null_checker(self, "25obj.nc", 1355))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCIncNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCIncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGCIncNode_kind(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCIncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  type_name  ;
    char*  __dec_obj141  ;
    node=(struct sNode*)come_increment_ref_count(((struct sGCIncNode*)come_null_checker(self, "25obj.nc", 1365))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1373))->type;
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1375))->type, "25obj.nc", 1375))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1375))->type, "25obj.nc", 1375))->mPointerNum>0) {
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
        __dec_obj141=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1377))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1377))->c_value=(char* )come_increment_ref_count(increment_ref_count_object(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1377))->type,((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1377))->c_value,info));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1380))->stack, "25obj.nc", 1380)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCIncNode_finalize(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 2))->sname = come_decrement_ref_count(((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 3))->node) ? ((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 3))->node = come_decrement_ref_count(((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 3))->node, ((struct sNode*)((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj142;
    struct sGCDecNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)come_null_checker(self, "25obj.nc", 1390))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj142=((struct sGCDecNode*)come_null_checker(self, "25obj.nc", 1392))->node,
    ((struct sGCDecNode*)come_null_checker(self, "25obj.nc", 1392))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCDecNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGCDecNode_kind(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(((struct sGCDecNode*)come_null_checker(self, "25obj.nc", 1402))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1410))->type);
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1412))->type, "25obj.nc", 1412))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1412))->type, "25obj.nc", 1412))->mPointerNum>0) {
        decrement_ref_count_object(type,((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1413))->c_value,info,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1416))->stack, "25obj.nc", 1416)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNode_finalize(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 2))->sname = come_decrement_ref_count(((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 3))->node) ? ((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 3))->node = come_decrement_ref_count(((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 3))->node, ((struct sNode*)((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj143  ;
    struct sIsHeap* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)come_null_checker(self, "25obj.nc", 1426))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj143=((struct sIsHeap*)come_null_checker(self, "25obj.nc", 1428))->type,
    ((struct sIsHeap*)come_null_checker(self, "25obj.nc", 1428))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sIsHeap*)come_increment_ref_count(self);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsHeap_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sIsHeap_kind(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsHeap"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj144  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj145  ;
    struct CVALUE*  come_value_53  ;
    char*  __dec_obj146  ;
    struct sType*  __dec_obj147  ;
    if(((struct sType* )come_null_checker(((struct sIsHeap*)come_null_checker(self, "25obj.nc", 1438))->type, "25obj.nc", 1438))->mHeap) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1439, "struct CVALUE* "))), "25obj.nc", 1439)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj144=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1441))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1441))->c_value=(char* )come_increment_ref_count(xsprintf("1"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj145=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1442))->type,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1442))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1442, "struct sType* "))), "25obj.nc", 1442))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1443))->var=((void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1445))->stack, "25obj.nc", 1445)),(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1447))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_53=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1450, "struct CVALUE* "))), "25obj.nc", 1450)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj146=((struct CVALUE* )come_null_checker(come_value_53, "25obj.nc", 1452))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_53, "25obj.nc", 1452))->c_value=(char* )come_increment_ref_count(xsprintf("0"));
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj147=((struct CVALUE* )come_null_checker(come_value_53, "25obj.nc", 1453))->type,
        ((struct CVALUE* )come_null_checker(come_value_53, "25obj.nc", 1453))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1453, "struct sType* "))), "25obj.nc", 1453))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value_53, "25obj.nc", 1454))->var=((void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1456))->stack, "25obj.nc", 1456)),(struct CVALUE* )come_increment_ref_count(come_value_53));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_53, "25obj.nc", 1458))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsHeap_finalize(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sIsHeap*)come_null_checker(self, "sIsHeap_finalize", 2))->sname!=((void*)0)) {
        (((struct sIsHeap*)come_null_checker(self, "sIsHeap_finalize", 2))->sname = come_decrement_ref_count(((struct sIsHeap*)come_null_checker(self, "sIsHeap_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sIsHeap*)come_null_checker(self, "sIsHeap_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sIsHeap*)come_null_checker(self, "sIsHeap_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj148  ;
    struct sIsPointer* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)come_null_checker(self, "25obj.nc", 1469))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj148=((struct sIsPointer*)come_null_checker(self, "25obj.nc", 1471))->type,
    ((struct sIsPointer*)come_null_checker(self, "25obj.nc", 1471))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sIsPointer*)come_increment_ref_count(self);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsPointer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sIsPointer_kind(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsPointer"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj149  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj150  ;
    struct CVALUE*  come_value_54  ;
    char*  __dec_obj151  ;
    struct sType*  __dec_obj152  ;
    if(((struct sType* )come_null_checker(((struct sIsPointer*)come_null_checker(self, "25obj.nc", 1481))->type, "25obj.nc", 1481))->mPointerNum==0&&((struct sType* )come_null_checker(((struct sIsPointer*)come_null_checker(self, "25obj.nc", 1481))->type, "25obj.nc", 1481))->mArrayPointerNum==0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1482, "struct CVALUE* "))), "25obj.nc", 1482)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj149=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1484))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1484))->c_value=(char* )come_increment_ref_count(xsprintf("0"));
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj150=((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1485))->type,
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1485))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1485, "struct sType* "))), "25obj.nc", 1485))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj150,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1486))->var=((void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1488))->stack, "25obj.nc", 1488)),(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1490))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_54=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1493, "struct CVALUE* "))), "25obj.nc", 1493)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj151=((struct CVALUE* )come_null_checker(come_value_54, "25obj.nc", 1495))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_54, "25obj.nc", 1495))->c_value=(char* )come_increment_ref_count(xsprintf("1"));
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj152=((struct CVALUE* )come_null_checker(come_value_54, "25obj.nc", 1496))->type,
        ((struct CVALUE* )come_null_checker(come_value_54, "25obj.nc", 1496))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1496, "struct sType* "))), "25obj.nc", 1496))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value_54, "25obj.nc", 1497))->var=((void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1499))->stack, "25obj.nc", 1499)),(struct CVALUE* )come_increment_ref_count(come_value_54));
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_54, "25obj.nc", 1501))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsPointer_finalize(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sIsPointer*)come_null_checker(self, "sIsPointer_finalize", 2))->sname!=((void*)0)) {
        (((struct sIsPointer*)come_null_checker(self, "sIsPointer_finalize", 2))->sname = come_decrement_ref_count(((struct sIsPointer*)come_null_checker(self, "sIsPointer_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sIsPointer*)come_null_checker(self, "sIsPointer_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sIsPointer*)come_null_checker(self, "sIsPointer_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj153;
    struct sGCDecNoFreeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)come_null_checker(self, "25obj.nc", 1512))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj153=((struct sGCDecNoFreeNode*)come_null_checker(self, "25obj.nc", 1514))->node,
    ((struct sGCDecNoFreeNode*)come_null_checker(self, "25obj.nc", 1514))->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNoFreeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)come_null_checker(self, "25obj.nc", 1524))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1532))->type);
    if(((struct sType* )come_null_checker(type, "25obj.nc", 1534))->mHeap&&((struct sType* )come_null_checker(type, "25obj.nc", 1534))->mPointerNum>0) {
        decrement_ref_count_object(type,((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1535))->c_value,info,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "25obj.nc", 1538))->stack, "25obj.nc", 1538)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 2))->sname = come_decrement_ref_count(((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 3))->node) ? ((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 3))->node = come_decrement_ref_count(((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 3))->node, ((struct sNode*)((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj154;
    struct sOptionalNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOptionalNode*)come_increment_ref_count(((struct sOptionalNode*)come_null_checker(self, "25obj.nc", 1548))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj154=((struct sOptionalNode*)come_null_checker(self, "25obj.nc", 1550))->node,
    ((struct sOptionalNode*)come_null_checker(self, "25obj.nc", 1550))->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sOptionalNode*)come_increment_ref_count(self);
    come_call_finalizer(sOptionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOptionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sOptionalNode_kind(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOptionalNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* node3;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_55;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(((struct sOptionalNode*)come_null_checker(self, "25obj.nc", 1560))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1571))->type, "25obj.nc", 1571))->mPointerNum==0&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1571))->type, "25obj.nc", 1571))->mArrayPointerNum==0) {
        err_msg(info,"require pointer for ref");
        __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1580))->var==((void*)0)) {
        global_=(_Bool)0;
        heap_=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1582))->type, "25obj.nc", 1582))->mHeap;
        local_=(_Bool)0;
    }
    else {
        global_=((struct sVar* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1586))->var, "25obj.nc", 1586))->mGlobal;
        heap_=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1587))->type, "25obj.nc", 1587))->mHeap;
        local_=!((struct sVar* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1588))->var, "25obj.nc", 1588))->mGlobal;
    }
    type_=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1591))->type));
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1593, "struct sType* "))), "25obj.nc", 1593))),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "25obj.nc", 1594))->mGenericsTypes, "25obj.nc", 1594)),(struct sType* )come_increment_ref_count(type_));
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1596, "struct sType* "))), "25obj.nc", 1596))),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1597))->mGenericsTypes, "25obj.nc", 1597)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1597, "struct sType* "))), "25obj.nc", 1597))),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info));
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2),info));
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1603, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "25obj.nc", 1603)))));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info));
    node3=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2),(char*)come_increment_ref_count(xsprintf("stacktop")),info));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1608)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1608, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(obj))));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1609)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1609, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(node))));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1610)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1610, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info)))))))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1611)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1611, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info)))))))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1612)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1612, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info)))))))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1613)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1613, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(node3))));
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj),params,((void*)0),0,((void*)0),info,(_Bool)0));
    Value_55=node_compile(method_node,info);
    if(!Value_55) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOptionalNode_finalize(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 2))->sname = come_decrement_ref_count(((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 3))->node) ? ((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 3))->node = come_decrement_ref_count(((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 3))->node, ((struct sNode*)((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj155  ;
    struct sNode* __dec_obj156;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj155=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj156=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj157;
    struct sRefNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRefNode*)come_increment_ref_count(((struct sRefNode*)come_null_checker(self, "25obj.nc", 1631))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj157=((struct sRefNode*)come_null_checker(self, "25obj.nc", 1633))->node,
    ((struct sRefNode*)come_null_checker(self, "25obj.nc", 1633))->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sRefNode*)come_increment_ref_count(self);
    come_call_finalizer(sRefNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRefNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sRefNode_kind(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRefNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* node3;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_56;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(((struct sRefNode*)come_null_checker(self, "25obj.nc", 1643))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1654))->type, "25obj.nc", 1654))->mHeap) {
    }
    else if(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1656))->var==((void*)0)) {
        err_msg(info,"require variable name for ref");
        __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1661))->type, "25obj.nc", 1661))->mPointerNum==0&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1661))->type, "25obj.nc", 1661))->mArrayPointerNum==0) {
        err_msg(info,"require pointer for ref");
        __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1670))->type, "25obj.nc", 1670))->mHeap) {
        global_=(_Bool)0;
        heap_=(_Bool)1;
        local_=(_Bool)0;
    }
    else {
        global_=((struct sVar* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1676))->var, "25obj.nc", 1676))->mGlobal;
        heap_=((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1677))->type, "25obj.nc", 1677))->mHeap;
        local_=!((struct sVar* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1678))->var, "25obj.nc", 1678))->mGlobal;
    }
    type_=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1681))->type));
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1683, "struct sType* "))), "25obj.nc", 1683))),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "25obj.nc", 1684))->mGenericsTypes, "25obj.nc", 1684)),(struct sType* )come_increment_ref_count(type_));
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1686, "struct sType* "))), "25obj.nc", 1686))),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1687))->mGenericsTypes, "25obj.nc", 1687)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1687, "struct sType* "))), "25obj.nc", 1687))),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info));
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2),info));
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1693, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "25obj.nc", 1693)))));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info));
    node3=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2),(char*)come_increment_ref_count(xsprintf("stacktop")),info));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1698)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1698, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(obj))));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1699)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1699, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(node))));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1700)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1700, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info)))))))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1701)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1701, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info)))))))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1702)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1702, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info)))))))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1703)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1703, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(node3))));
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj),params,((void*)0),0,((void*)0),info,(_Bool)0));
    Value_56=node_compile(method_node,info);
    if(!Value_56) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRefNode_finalize(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 2))->sname = come_decrement_ref_count(((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 3))->node) ? ((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 3))->node = come_decrement_ref_count(((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 3))->node, ((struct sNode*)((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sRefNode*)come_null_checker(self, "sRefNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_head_and_len"; neo_current_frame = &fr;
    struct sNode* head;
    struct sNode* len;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  var_name  ;
    struct sNode* svar;
    struct sNode* __dec_obj158;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj159;
    struct sNode* __dec_obj160;
    struct sNode* __dec_obj161;
    struct sNode* __dec_obj162;
    struct sNode* _inf_value4;
    struct sHeapSizeOfNode* _inf_obj_value4;
    struct sNode* __dec_obj165;
    char*  var_name_58  ;
    struct sNode* svar_59;
    struct sNode* __dec_obj166;
    struct sNode* _inf_value5;
    struct sDynamicSizeOfExpNode* _inf_obj_value5;
    void* __right_value3 = (void*)0;
    struct sNode* __dec_obj169;
    struct sNode* __dec_obj170;
    struct sNode* node2;
    struct sNode* _inf_value6;
    struct sSizeOfExpNode* _inf_obj_value6;
    struct sNode* __dec_obj173;
    struct sNode* __dec_obj174;
    struct sNode* _inf_value7;
    struct sSizeOfExpNode* _inf_obj_value7;
    struct sNode* __dec_obj175;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&len, 0, sizeof(len));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1719))->type);
    if((((struct sType* )come_null_checker(type, "25obj.nc", 1720))->mOriginalTypeName&&string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1720))->mOriginalTypeName, "25obj.nc", 1720)),"string"))||(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1720))->mClass, "25obj.nc", 1720))->mName, "25obj.nc", 1720)),"char")&&((struct sType* )come_null_checker(type, "25obj.nc", 1720))->mPointerNum==1&&((struct sType* )come_null_checker(type, "25obj.nc", 1720))->mHeap)&&!((struct sType* )come_null_checker(type, "25obj.nc", 1720))->mNew) {
        static int n=0;
        var_name=(char*)come_increment_ref_count(xsprintf("__tmp_string\%s",((char* )(__right_value0=int_to_string(++n)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        svar=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name),((void*)0),((void*)0),type,(_Bool)1,node,info));
        __dec_obj158=head,
        head=(struct sNode*)come_increment_ref_count(svar);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0) :0);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1729, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "25obj.nc", 1729)))));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1731)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1731, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(create_load_var(var_name,info)))));
        __dec_obj159=len,
        len=(struct sNode*)come_increment_ref_count(create_funcall("strlen",params,((void*)0),0,((void*)0),info,(_Bool)0));
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0) :0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((svar) ? svar = come_decrement_ref_count(svar, ((struct sNode*)svar)->finalize, ((struct sNode*)svar)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1735))->mClass, "25obj.nc", 1735))->mName, "25obj.nc", 1735)),"buffer")) {
        __dec_obj160=head,
        head=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node),(char*)come_increment_ref_count(xsprintf("buf")),info));
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0) :0);
        __dec_obj161=len,
        len=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node),(char*)come_increment_ref_count(xsprintf("len")),info));
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0, (void*)0) :0);
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1739))->mClass, "25obj.nc", 1739))->mName, "25obj.nc", 1739)),"map")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1739))->mClass, "25obj.nc", 1739))->mName, "25obj.nc", 1739)),"list")) {
        err_msg(info,"can't get sirialize memory of this type(%s)",((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1740))->mClass, "25obj.nc", 1740))->mName);
        exit(1);
    }
    else if(((struct sType* )come_null_checker(type, "25obj.nc", 1743))->mHeap&&((struct sType* )come_null_checker(type, "25obj.nc", 1743))->mPointerNum==1&&((struct sType* )come_null_checker(type, "25obj.nc", 1743))->mNew) {
        __dec_obj162=head,
        head=(struct sNode*)come_increment_ref_count(node);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0) :0);
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1745, "struct sNode");
        _inf_obj_value4=(struct sHeapSizeOfNode*)come_increment_ref_count(((struct sHeapSizeOfNode*)(__right_value1=sHeapSizeOfNode_initialize((struct sHeapSizeOfNode* )come_increment_ref_count(((struct sHeapSizeOfNode* )come_null_checker(((struct sHeapSizeOfNode* )(__right_value0=(struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), (void*)0, 1745, "struct sHeapSizeOfNode* "))), "25obj.nc", 1745))),type,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sHeapSizeOfNode_finalize;
        _inf_value4->clone=(void*)sHeapSizeOfNode_clone;
        _inf_value4->compile=(void*)sHeapSizeOfNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sHeapSizeOfNode_kind;
        __dec_obj165=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value4);
        (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0) :0);
        come_call_finalizer(sHeapSizeOfNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sHeapSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    else if(((struct sType* )come_null_checker(type, "25obj.nc", 1747))->mHeap&&((struct sType* )come_null_checker(type, "25obj.nc", 1747))->mPointerNum==1) {
        static int n_57=0;
        var_name_58=(char*)come_increment_ref_count(xsprintf("__tmp_heap\%s",((char* )(__right_value0=int_to_string(++n_57)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        svar_59=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name_58),((void*)0),((void*)0),type,(_Bool)1,node,info));
        __dec_obj166=head,
        head=(struct sNode*)come_increment_ref_count(svar_59);
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0, (void*)0) :0);
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1754, "struct sNode");
        _inf_obj_value5=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value2=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count(((struct sDynamicSizeOfExpNode* )come_null_checker(((struct sDynamicSizeOfExpNode* )(__right_value0=(struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), (void*)0, 1754, "struct sDynamicSizeOfExpNode* "))), "25obj.nc", 1754))),(struct sNode*)come_increment_ref_count(create_load_var(var_name_58,info)),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value5->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value5->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sDynamicSizeOfExpNode_kind;
        __dec_obj169=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value5);
        (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0, (void*)0) :0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        (var_name_58 = come_decrement_ref_count(var_name_58, (void*)0, (void*)0, 0, 0, (void*)0));
        ((svar_59) ? svar_59 = come_decrement_ref_count(svar_59, ((struct sNode*)svar_59)->finalize, ((struct sNode*)svar_59)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(((struct sType* )come_null_checker(type, "25obj.nc", 1756))->mPointerNum==1) {
        __dec_obj170=head,
        head=(struct sNode*)come_increment_ref_count(node);
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0) :0);
        node2=(struct sNode*)come_increment_ref_count(create_defference_node((struct sNode*)come_increment_ref_count(node),(_Bool)0,info));
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1759, "struct sNode");
        _inf_obj_value6=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count(((struct sSizeOfExpNode* )come_null_checker(((struct sSizeOfExpNode* )(__right_value0=(struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), (void*)0, 1759, "struct sSizeOfExpNode* "))), "25obj.nc", 1759))),(struct sNode*)come_increment_ref_count(node2),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sSizeOfExpNode_finalize;
        _inf_value6->clone=(void*)sSizeOfExpNode_clone;
        _inf_value6->compile=(void*)sSizeOfExpNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sSizeOfExpNode_kind;
        __dec_obj173=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value6);
        (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0) :0);
        come_call_finalizer(sSizeOfExpNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else {
        __dec_obj174=head,
        head=(struct sNode*)come_increment_ref_count(node);
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0) :0);
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1763, "struct sNode");
        _inf_obj_value7=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count(((struct sSizeOfExpNode* )come_null_checker(((struct sSizeOfExpNode* )(__right_value0=(struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), (void*)0, 1763, "struct sSizeOfExpNode* "))), "25obj.nc", 1763))),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sSizeOfExpNode_finalize;
        _inf_value7->clone=(void*)sSizeOfExpNode_clone;
        _inf_value7->compile=(void*)sSizeOfExpNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sSizeOfExpNode_kind;
        __dec_obj175=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value7);
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0) :0);
        come_call_finalizer(sSizeOfExpNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(((struct tuple2$2sNode$phsNode$ph*)(__right_value1=tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "25obj.nc", 1766, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(head),(struct sNode*)come_increment_ref_count(len)))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_clone"; neo_current_frame = &fr;
    struct sHeapSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sHeapSizeOfNode*  result  ;
    char*  __dec_obj163  ;
    struct sType*  __dec_obj164  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sHeapSizeOfNode* )come_increment_ref_count((struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), (void*)0, 5, "struct sHeapSizeOfNode* "));
    if(self!=((void*)0)) {
        ((struct sHeapSizeOfNode* )come_null_checker(result, "sHeapSizeOfNode_clone", 6))->sline=((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj163=((struct sHeapSizeOfNode* )come_null_checker(result, "sHeapSizeOfNode_clone", 7))->sname,
        ((struct sHeapSizeOfNode* )come_null_checker(result, "sHeapSizeOfNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_clone", 7))->sname, "sHeapSizeOfNode_clone", 7, "char* "));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sHeapSizeOfNode* )come_null_checker(result, "sHeapSizeOfNode_clone", 8))->sline_real=((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_clone", 9))->type!=((void*)0)) {
        __dec_obj164=((struct sHeapSizeOfNode* )come_null_checker(result, "sHeapSizeOfNode_clone", 9))->type,
        ((struct sHeapSizeOfNode* )come_null_checker(result, "sHeapSizeOfNode_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sHeapSizeOfNode*)come_null_checker(self, "sHeapSizeOfNode_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sHeapSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicSizeOfExpNode*  result  ;
    char*  __dec_obj167  ;
    struct sNode* __dec_obj168;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), (void*)0, 5, "struct sDynamicSizeOfExpNode* "));
    if(self!=((void*)0)) {
        ((struct sDynamicSizeOfExpNode* )come_null_checker(result, "sDynamicSizeOfExpNode_clone", 6))->sline=((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj167=((struct sDynamicSizeOfExpNode* )come_null_checker(result, "sDynamicSizeOfExpNode_clone", 7))->sname,
        ((struct sDynamicSizeOfExpNode* )come_null_checker(result, "sDynamicSizeOfExpNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_clone", 7))->sname, "sDynamicSizeOfExpNode_clone", 7, "char* "));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sDynamicSizeOfExpNode* )come_null_checker(result, "sDynamicSizeOfExpNode_clone", 8))->sline_real=((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_clone", 9))->exp!=((void*)0)) {
        __dec_obj168=((struct sDynamicSizeOfExpNode* )come_null_checker(result, "sDynamicSizeOfExpNode_clone", 9))->exp,
        ((struct sDynamicSizeOfExpNode* )come_null_checker(result, "sDynamicSizeOfExpNode_clone", 9))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sDynamicSizeOfExpNode*)come_null_checker(self, "sDynamicSizeOfExpNode_clone", 9))->exp));
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfExpNode*  result  ;
    char*  __dec_obj171  ;
    struct sNode* __dec_obj172;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), (void*)0, 5, "struct sSizeOfExpNode* "));
    if(self!=((void*)0)) {
        ((struct sSizeOfExpNode* )come_null_checker(result, "sSizeOfExpNode_clone", 6))->sline=((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj171=((struct sSizeOfExpNode* )come_null_checker(result, "sSizeOfExpNode_clone", 7))->sname,
        ((struct sSizeOfExpNode* )come_null_checker(result, "sSizeOfExpNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_clone", 7))->sname, "sSizeOfExpNode_clone", 7, "char* "));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sSizeOfExpNode* )come_null_checker(result, "sSizeOfExpNode_clone", 8))->sline_real=((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_clone", 9))->exp!=((void*)0)) {
        __dec_obj172=((struct sSizeOfExpNode* )come_null_checker(result, "sSizeOfExpNode_clone", 9))->exp,
        ((struct sSizeOfExpNode* )come_null_checker(result, "sSizeOfExpNode_clone", 9))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sSizeOfExpNode*)come_null_checker(self, "sSizeOfExpNode_clone", 9))->exp));
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph_initialize"; neo_current_frame = &fr;
    struct sNode* __dec_obj176;
    struct sNode* __dec_obj177;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    __dec_obj176=((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1,
    ((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1=(struct sNode*)come_increment_ref_count(v1);
    (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj177=((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2,
    ((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 2))->v1!=((void*)0)) {
        ((((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 2))->v1) ? ((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 2))->v1, ((struct sNode*)((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 2))->v1)->finalize, ((struct sNode*)((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 2))->v1)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 3))->v2!=((void*)0)) {
        ((((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 3))->v2) ? ((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 3))->v2, ((struct sNode*)((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 3))->v2)->finalize, ((struct sNode*)((struct tuple2$2sNode$phsNode$ph*)come_null_checker(self, "tuple2$2sNode$phsNode$ph$p_finalize", 3))->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj178;
    struct sSpanNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSpanNode*)come_increment_ref_count(((struct sSpanNode*)come_null_checker(self, "25obj.nc", 1774))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj178=((struct sSpanNode*)come_null_checker(self, "25obj.nc", 1776))->node,
    ((struct sSpanNode*)come_null_checker(self, "25obj.nc", 1776))->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sSpanNode*)come_increment_ref_count(self);
    come_call_finalizer(sSpanNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSpanNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sSpanNode_kind(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSpanNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool no_output_come_code;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* _inf_value8;
    struct sRefNode* _inf_obj_value8;
    struct sNode* ref_;
    struct tuple2$2sNode$phsNode$ph* multiple_assign_var8
;    struct sNode* head=0;
    struct sNode* len=0;
    struct sNode* method_node;
    _Bool Value_60;
    node=(struct sNode*)come_increment_ref_count(((struct sSpanNode*)come_null_checker(self, "25obj.nc", 1786))->node);
    no_output_come_code=((struct sInfo* )come_null_checker(info, "25obj.nc", 1788))->no_output_come_code;
    ((struct sInfo* )come_null_checker(info, "25obj.nc", 1789))->no_output_come_code=(_Bool)1;
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "25obj.nc", 1793))->no_output_come_code=no_output_come_code;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1797))->type, "25obj.nc", 1797))->mHeap) {
    }
    else if(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1799))->var==((void*)0)) {
        err_msg(info,"require variable name for span");
        __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1804))->type, "25obj.nc", 1804))->mPointerNum==0&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1804))->type, "25obj.nc", 1804))->mArrayPointerNum==0) {
        err_msg(info,"require pointer for span");
        __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    type_=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "25obj.nc", 1809))->type));
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1811, "struct sType* "))), "25obj.nc", 1811))),(char*)come_increment_ref_count(xsprintf("span")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "25obj.nc", 1812))->mGenericsTypes, "25obj.nc", 1812)),(struct sType* )come_increment_ref_count(type_));
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1814, "struct sType* "))), "25obj.nc", 1814))),(char*)come_increment_ref_count(xsprintf("span")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1815))->mGenericsTypes, "25obj.nc", 1815)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1815, "struct sType* "))), "25obj.nc", 1815))),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info));
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2),info));
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1821, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "25obj.nc", 1821)))));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1823, "struct sNode");
    _inf_obj_value8=(struct sRefNode*)come_increment_ref_count(((struct sRefNode*)(__right_value1=sRefNode_initialize((struct sRefNode* )come_increment_ref_count(((struct sRefNode* )come_null_checker(((struct sRefNode* )(__right_value0=(struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), (void*)0, 1823, "struct sRefNode* "))), "25obj.nc", 1823))),(struct sNode*)come_increment_ref_count(node),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sRefNode_finalize;
    _inf_value8->clone=(void*)sRefNode_clone;
    _inf_value8->compile=(void*)sRefNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sNodeBase_terminated;
    _inf_value8->kind=(void*)sRefNode_kind;
    ref_=(struct sNode*)come_increment_ref_count(_inf_value8);
    come_call_finalizer(sRefNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sRefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    multiple_assign_var8=((struct tuple2$2sNode$phsNode$ph*)(__right_value0=get_head_and_len((struct sNode*)come_increment_ref_count(node),(struct CVALUE* )come_increment_ref_count(come_value),info)));
    head=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v1);
    len=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1827)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1827, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(obj))));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1828)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1828, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(ref_))));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1829)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1829, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(head))));
    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "25obj.nc", 1830)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1830, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(len))));
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj),params,((void*)0),0,((void*)0),info,(_Bool)0));
    Value_60=node_compile(method_node,info);
    if(!Value_60) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((ref_) ? ref_ = come_decrement_ref_count(ref_, ((struct sNode*)ref_)->finalize, ((struct sNode*)ref_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((ref_) ? ref_ = come_decrement_ref_count(ref_, ((struct sNode*)ref_)->finalize, ((struct sNode*)ref_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSpanNode_finalize(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 3))->node) ? ((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 3))->node = come_decrement_ref_count(((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 3))->node, ((struct sNode*)((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sSpanNode*)come_null_checker(self, "sSpanNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sRefNode* sRefNode_clone(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_clone"; neo_current_frame = &fr;
    struct sRefNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRefNode*  result  ;
    char*  __dec_obj179  ;
    struct sNode* __dec_obj180;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRefNode* )come_increment_ref_count((struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), (void*)0, 5, "struct sRefNode* "));
    if(self!=((void*)0)) {
        ((struct sRefNode* )come_null_checker(result, "sRefNode_clone", 6))->sline=((struct sRefNode*)come_null_checker(self, "sRefNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sRefNode*)come_null_checker(self, "sRefNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj179=((struct sRefNode* )come_null_checker(result, "sRefNode_clone", 7))->sname,
        ((struct sRefNode* )come_null_checker(result, "sRefNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sRefNode*)come_null_checker(self, "sRefNode_clone", 7))->sname, "sRefNode_clone", 7, "char* "));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sRefNode* )come_null_checker(result, "sRefNode_clone", 8))->sline_real=((struct sRefNode*)come_null_checker(self, "sRefNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sRefNode*)come_null_checker(self, "sRefNode_clone", 9))->node!=((void*)0)) {
        __dec_obj180=((struct sRefNode* )come_null_checker(result, "sRefNode_clone", 9))->node,
        ((struct sRefNode* )come_null_checker(result, "sRefNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sRefNode*)come_null_checker(self, "sRefNode_clone", 9))->node));
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sRefNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct sNode* exp;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value9;
    struct sNewNode* _inf_obj_value9;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value10;
    struct sNewNode* _inf_obj_value10;
    struct sNode* obj;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    char*  word  ;
    _Bool no_comma;
    struct sNode* exp_61;
    struct sNode* exp_62;
    struct sNode* _inf_value11;
    struct sNewNode* _inf_obj_value11;
    struct sNode* _inf_value12;
    struct sNewNode* _inf_obj_value12;
    struct sNode* _inf_value13;
    struct sTrueNode* _inf_obj_value13;
    struct sNode* _inf_value14;
    struct sFalseNode* _inf_obj_value14;
    struct sNode* node;
    struct sNode* _inf_value15;
    struct sDeleteNode* _inf_obj_value15;
    struct sNode* node_63;
    struct sNode* _inf_value16;
    struct sBorrowNode* _inf_obj_value16;
    struct sNode* node_64;
    struct sNode* _inf_value17;
    struct sCloneNode* _inf_obj_value17;
    struct sNode* node_65;
    struct sNode* _inf_value18;
    struct sDupeNode* _inf_obj_value18;
    struct sNode* node_66;
    struct sNode* _inf_value19;
    struct sDummyHeapNode* _inf_obj_value19;
    struct sNode* node_67;
    struct sNode* _inf_value20;
    struct sGCIncNode* _inf_obj_value20;
    struct sNode* node_68;
    struct sNode* _inf_value21;
    struct sGCDecNode* _inf_obj_value21;
    struct sNode* node_69;
    struct sNode* _inf_value22;
    struct sGCDecNoFreeNode* _inf_obj_value22;
    struct sNode* node_70;
    struct sNode* _inf_value23;
    struct sGCDecNoFreeNode* _inf_obj_value23;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  param_type  =0;
    char*  param_name  =0;
    _Bool err_71=0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    struct sNode* _inf_value24;
    struct sIsHeap* _inf_obj_value24;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType*  param_type_72  =0;
    char*  param_name_73  =0;
    _Bool err_74=0;
    struct sType*  type2__75  ;
    struct sType*  type2_76  ;
    struct sNode* _inf_value25;
    struct sIsPointer* _inf_obj_value25;
    struct sNode* node_77;
    struct sNode* _inf_value26;
    struct sOptionalNode* _inf_obj_value26;
    struct sNode* node_78;
    struct sNode* _inf_value27;
    struct sRefNode* _inf_obj_value27;
    struct sNode* node_79;
    struct sNode* _inf_value28;
    struct sSpanNode* _inf_obj_value28;
    _Bool come_c;
    struct sNode* node_80;
    _Bool come_safe;
    struct sNode* node_81;
    _Bool come_safe_82;
    struct sNode* node_83;
    _Bool no_comma_84;
    struct sNode* exp_85;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
    _Bool no_comma_86;
    struct sNode* __dec_obj205;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var12
;    struct sType*  type_87  =0;
    char*  name_88  =0;
    _Bool err_89=0;
    _Bool no_comma_90;
    struct sNode* node_91;
    struct sNode* _inf_value29;
    struct sGeneric* _inf_obj_value29;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var13
;    struct sType*  type_92  =0;
    char*  name_93  =0;
    _Bool err_94=0;
    char*  word_95  ;
    struct sNode* _inf_value30;
    struct sOffsetOf* _inf_obj_value30;
    _Bool paren;
    _Bool is_type_name_flag;
    char* p;
    int sline;
    char*  word_96  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var14
;    struct sType*  type_97  =0;
    char*  name_98  =0;
    _Bool err_99=0;
    struct sNode* _inf_value31;
    struct sSizeOfNode* _inf_obj_value31;
    struct sNode* exp_100;
    _Bool no_comma_101;
    struct sNode* __dec_obj216;
    struct sNode* __dec_obj217;
    struct sNode* _inf_value32;
    struct sSizeOfExpNode* _inf_obj_value32;
    _Bool paren_102;
    struct sNode* exp_103;
    _Bool no_comma_104;
    struct sNode* __dec_obj218;
    struct sNode* __dec_obj219;
    struct sNode* _inf_value33;
    struct sDynamicTypeOf* _inf_obj_value33;
    _Bool paren_105;
    struct sNode* exp_106;
    _Bool no_comma_107;
    struct sNode* __dec_obj222;
    struct sNode* __dec_obj223;
    struct sNode* _inf_value34;
    struct sDynamicSizeOfExpNode* _inf_obj_value34;
    _Bool paren_108;
    _Bool is_type_name_flag_109;
    char* p_110;
    int sline_111;
    char*  word_112  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;    struct sType*  type_113  =0;
    char*  name_114  =0;
    _Bool err_115=0;
    struct sNode* _inf_value35;
    struct sAlignOfNode* _inf_obj_value35;
    struct sNode* exp_116;
    _Bool no_comma_117;
    struct sNode* __dec_obj226;
    struct sNode* __dec_obj227;
    struct sNode* _inf_value36;
    struct sAlignOfExpNode* _inf_obj_value36;
    _Bool paren_118;
    _Bool is_type_name_flag_119;
    char* p_120;
    int sline_121;
    char*  word_122  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;    struct sType*  type_123  =0;
    char*  name_124  =0;
    _Bool err_125=0;
    struct sNode* _inf_value37;
    struct sAlignOfNode2* _inf_obj_value37;
    struct sNode* exp_126;
    _Bool no_comma_127;
    struct sNode* __dec_obj232;
    struct sNode* __dec_obj233;
    struct sNode* _inf_value38;
    struct sAlignOfExpNode2* _inf_obj_value38;
    memset(&exp_100, 0, sizeof(exp_100));
    memset(&exp_103, 0, sizeof(exp_103));
    memset(&exp_106, 0, sizeof(exp_106));
    memset(&exp_116, 0, sizeof(exp_116));
    memset(&exp_126, 0, sizeof(exp_126));
    if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1844)),"new")) {
        multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1);
        name=(char* )come_increment_ref_count(multiple_assign_var9->v2);
        err=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 1851))->p==40) {
            if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "25obj.nc", 1852))->mClass, "25obj.nc", 1852))->mNumber) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 1853))->p++;
                skip_spaces_and_lf(info);
                exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                expected_next_character(41,info);
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1859, "struct sNode");
                _inf_obj_value9=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count(((struct sNewNode* )come_null_checker(((struct sNewNode* )(__right_value0=(struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1859, "struct sNewNode* "))), "25obj.nc", 1859))),type,((void*)0),(struct sNode*)come_increment_ref_count(exp),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sNewNode_finalize;
                _inf_value9->clone=(void*)sNewNode_clone;
                _inf_value9->compile=(void*)sNewNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sNewNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sNewNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1862, "struct sNode");
                _inf_obj_value10=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count(((struct sNewNode* )come_null_checker(((struct sNewNode* )(__right_value0=(struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1862, "struct sNewNode* "))), "25obj.nc", 1862))),type,((void*)0),((void*)0),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sNewNode_finalize;
                _inf_value10->clone=(void*)sNewNode_clone;
                _inf_value10->compile=(void*)sNewNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sNewNode_kind;
                obj=(struct sNode*)come_increment_ref_count(_inf_value10);
                come_call_finalizer(sNewNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                fun_name=(char* )come_increment_ref_count(__builtin_string("initialize"));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj)),(char* )come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)0))));
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 1868))->p==123) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 1869))->p++;
            skip_spaces_and_lf(info);
            initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1872, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "25obj.nc", 1872)))));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            while((_Bool)1) {
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 1877))->p==58) {
                    ((struct sInfo* )come_null_checker(info, "25obj.nc", 1878))->p++;
                    skip_spaces_and_lf(info);
                    no_comma=((struct sInfo* )come_null_checker(info, "25obj.nc", 1881))->no_comma;
                    ((struct sInfo* )come_null_checker(info, "25obj.nc", 1882))->no_comma=(_Bool)1;
                    exp_61=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    ((struct sInfo* )come_null_checker(info, "25obj.nc", 1884))->no_comma=no_comma;
                    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(initializer, "25obj.nc", 1886)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1886, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp_61))));
                    ((exp_61) ? exp_61 = come_decrement_ref_count(exp_61, ((struct sNode*)exp_61)->finalize, ((struct sNode*)exp_61)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 1888))->p==44) {
                    exp_62=(struct sNode*)come_increment_ref_count(create_load_var(word,info));
                    list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(initializer, "25obj.nc", 1891)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1891, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp_62))));
                    ((exp_62) ? exp_62 = come_decrement_ref_count(exp_62, ((struct sNode*)exp_62)->finalize, ((struct sNode*)exp_62)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",*((struct sInfo* )come_null_checker(info, "25obj.nc", 1894))->p);
                    exit(2);
                }
                if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 1898))->p==44) {
                    ((struct sInfo* )come_null_checker(info, "25obj.nc", 1899))->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 1902))->p==125) {
                    ((struct sInfo* )come_null_checker(info, "25obj.nc", 1903))->p++;
                    skip_spaces_and_lf(info);
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*((struct sInfo* )come_null_checker(info, "25obj.nc", 1908))->p);
                    exit(2);
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1912, "struct sNode");
            _inf_obj_value11=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count(((struct sNewNode* )come_null_checker(((struct sNewNode* )(__right_value0=(struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1912, "struct sNewNode* "))), "25obj.nc", 1912))),type,(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),((void*)0),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sNewNode_finalize;
            _inf_value11->clone=(void*)sNewNode_clone;
            _inf_value11->compile=(void*)sNewNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sNewNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1915, "struct sNode");
            _inf_obj_value12=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count(((struct sNewNode* )come_null_checker(((struct sNewNode* )(__right_value0=(struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1915, "struct sNewNode* "))), "25obj.nc", 1915))),type,((void*)0),((void*)0),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sNewNode_finalize;
            _inf_value12->clone=(void*)sNewNode_clone;
            _inf_value12->compile=(void*)sNewNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sNewNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1918)),"true")) {
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1919, "struct sNode");
        _inf_obj_value13=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count(((struct sTrueNode* )come_null_checker(((struct sTrueNode* )(__right_value0=(struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), (void*)0, 1919, "struct sTrueNode* "))), "25obj.nc", 1919))),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sTrueNode_finalize;
        _inf_value13->clone=(void*)sTrueNode_clone;
        _inf_value13->compile=(void*)sTrueNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sTrueNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
        come_call_finalizer(sTrueNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1921)),"false")) {
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1922, "struct sNode");
        _inf_obj_value14=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count(((struct sFalseNode* )come_null_checker(((struct sFalseNode* )(__right_value0=(struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), (void*)0, 1922, "struct sFalseNode* "))), "25obj.nc", 1922))),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFalseNode_finalize;
        _inf_value14->clone=(void*)sFalseNode_clone;
        _inf_value14->compile=(void*)sFalseNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFalseNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
        come_call_finalizer(sFalseNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1924)),"delete")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1924))->p!=40) {
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1927, "struct sNode");
        _inf_obj_value15=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value1=sDeleteNode_initialize((struct sDeleteNode* )come_increment_ref_count(((struct sDeleteNode* )come_null_checker(((struct sDeleteNode* )(__right_value0=(struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), (void*)0, 1927, "struct sDeleteNode* "))), "25obj.nc", 1927))),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sDeleteNode_finalize;
        _inf_value15->clone=(void*)sDeleteNode_clone;
        _inf_value15->compile=(void*)sDeleteNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sDeleteNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1929)),"borrow")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1929))->p!=40) {
        node_63=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1932, "struct sNode");
        _inf_obj_value16=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value1=sBorrowNode_initialize((struct sBorrowNode* )come_increment_ref_count(((struct sBorrowNode* )come_null_checker(((struct sBorrowNode* )(__right_value0=(struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), (void*)0, 1932, "struct sBorrowNode* "))), "25obj.nc", 1932))),(struct sNode*)come_increment_ref_count(node_63),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sBorrowNode_finalize;
        _inf_value16->clone=(void*)sBorrowNode_clone;
        _inf_value16->compile=(void*)sBorrowNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sBorrowNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)));
        ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1934)),"clone")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1934))->p!=40) {
        node_64=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1937, "struct sNode");
        _inf_obj_value17=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value1=sCloneNode_initialize((struct sCloneNode* )come_increment_ref_count(((struct sCloneNode* )come_null_checker(((struct sCloneNode* )(__right_value0=(struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), (void*)0, 1937, "struct sCloneNode* "))), "25obj.nc", 1937))),(struct sNode*)come_increment_ref_count(node_64),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sCloneNode_finalize;
        _inf_value17->clone=(void*)sCloneNode_clone;
        _inf_value17->compile=(void*)sCloneNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sCloneNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)));
        ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1939)),"dupe")) {
        node_65=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1942, "struct sNode");
        _inf_obj_value18=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value1=sDupeNode_initialize((struct sDupeNode* )come_increment_ref_count(((struct sDupeNode* )come_null_checker(((struct sDupeNode* )(__right_value0=(struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), (void*)0, 1942, "struct sDupeNode* "))), "25obj.nc", 1942))),(struct sNode*)come_increment_ref_count(node_65),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sDupeNode_finalize;
        _inf_value18->clone=(void*)sDupeNode_clone;
        _inf_value18->compile=(void*)sDupeNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sDupeNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)));
        ((node_65) ? node_65 = come_decrement_ref_count(node_65, ((struct sNode*)node_65)->finalize, ((struct sNode*)node_65)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_65) ? node_65 = come_decrement_ref_count(node_65, ((struct sNode*)node_65)->finalize, ((struct sNode*)node_65)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1944)),"dummy_heap")) {
        node_66=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1947, "struct sNode");
        _inf_obj_value19=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value1=sDummyHeapNode_initialize((struct sDummyHeapNode* )come_increment_ref_count(((struct sDummyHeapNode* )come_null_checker(((struct sDummyHeapNode* )(__right_value0=(struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), (void*)0, 1947, "struct sDummyHeapNode* "))), "25obj.nc", 1947))),(struct sNode*)come_increment_ref_count(node_66),info))));
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value19->clone=(void*)sDummyHeapNode_clone;
        _inf_value19->compile=(void*)sDummyHeapNode_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sline_real=(void*)sNodeBase_sline_real;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sDummyHeapNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)));
        ((node_66) ? node_66 = come_decrement_ref_count(node_66, ((struct sNode*)node_66)->finalize, ((struct sNode*)node_66)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_66) ? node_66 = come_decrement_ref_count(node_66, ((struct sNode*)node_66)->finalize, ((struct sNode*)node_66)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1949)),"gc_inc")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1949))->p==40) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 1950))->p++;
        skip_spaces_and_lf(info);
        node_67=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1957, "struct sNode");
        _inf_obj_value20=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value1=sGCIncNode_initialize((struct sGCIncNode* )come_increment_ref_count(((struct sGCIncNode* )come_null_checker(((struct sGCIncNode* )(__right_value0=(struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), (void*)0, 1957, "struct sGCIncNode* "))), "25obj.nc", 1957))),(struct sNode*)come_increment_ref_count(node_67),info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sGCIncNode_finalize;
        _inf_value20->clone=(void*)sGCIncNode_clone;
        _inf_value20->compile=(void*)sGCIncNode_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sGCIncNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)));
        ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1959)),"gc_dec")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1959))->p==40) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 1960))->p++;
        skip_spaces_and_lf(info);
        node_68=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1967, "struct sNode");
        _inf_obj_value21=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value1=sGCDecNode_initialize((struct sGCDecNode* )come_increment_ref_count(((struct sGCDecNode* )come_null_checker(((struct sGCDecNode* )(__right_value0=(struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), (void*)0, 1967, "struct sGCDecNode* "))), "25obj.nc", 1967))),(struct sNode*)come_increment_ref_count(node_68),info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sGCDecNode_finalize;
        _inf_value21->clone=(void*)sGCDecNode_clone;
        _inf_value21->compile=(void*)sGCDecNode_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sGCDecNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)));
        ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_68) ? node_68 = come_decrement_ref_count(node_68, ((struct sNode*)node_68)->finalize, ((struct sNode*)node_68)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1969)),"gc_dec_nofree")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1969))->p==40) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 1970))->p++;
        skip_spaces_and_lf(info);
        node_69=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1977, "struct sNode");
        _inf_obj_value22=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count(((struct sGCDecNoFreeNode* )come_null_checker(((struct sGCDecNoFreeNode* )(__right_value0=(struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), (void*)0, 1977, "struct sGCDecNoFreeNode* "))), "25obj.nc", 1977))),(struct sNode*)come_increment_ref_count(node_69),info))));
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value22->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value22->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value22)));
        ((node_69) ? node_69 = come_decrement_ref_count(node_69, ((struct sNode*)node_69)->finalize, ((struct sNode*)node_69)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_69) ? node_69 = come_decrement_ref_count(node_69, ((struct sNode*)node_69)->finalize, ((struct sNode*)node_69)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1979)),"lock")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1979))->p==40) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 1980))->p++;
        skip_spaces_and_lf(info);
        node_70=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1987, "struct sNode");
        _inf_obj_value23=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count(((struct sGCDecNoFreeNode* )come_null_checker(((struct sGCDecNoFreeNode* )(__right_value0=(struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), (void*)0, 1987, "struct sGCDecNoFreeNode* "))), "25obj.nc", 1987))),(struct sNode*)come_increment_ref_count(node_70),info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value23->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value23->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value23)));
        ((node_70) ? node_70 = come_decrement_ref_count(node_70, ((struct sNode*)node_70)->finalize, ((struct sNode*)node_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_70) ? node_70 = come_decrement_ref_count(node_70, ((struct sNode*)node_70)->finalize, ((struct sNode*)node_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 1989)),"isheap")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 1989))->p==40) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 1990))->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1);
        param_name=(char* )come_increment_ref_count(multiple_assign_var10->v2);
        err_71=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err_71) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_=(struct sType* )come_increment_ref_count(solve_generics(param_type,((struct sInfo* )come_null_checker(info, "25obj.nc", 1999))->generics_type,info));
        type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
        expected_next_character(41,info);
        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2004, "struct sNode");
        _inf_obj_value24=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value1=sIsHeap_initialize((struct sIsHeap* )come_increment_ref_count(((struct sIsHeap* )come_null_checker(((struct sIsHeap* )(__right_value0=(struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), (void*)0, 2004, "struct sIsHeap* "))), "25obj.nc", 2004))),type2,info))));
        _inf_value24->_protocol_obj=_inf_obj_value24;
        _inf_value24->finalize=(void*)sIsHeap_finalize;
        _inf_value24->clone=(void*)sIsHeap_clone;
        _inf_value24->compile=(void*)sIsHeap_compile;
        _inf_value24->sline=(void*)sNodeBase_sline;
        _inf_value24->sline_real=(void*)sNodeBase_sline_real;
        _inf_value24->sname=(void*)sNodeBase_sname;
        _inf_value24->terminated=(void*)sNodeBase_terminated;
        _inf_value24->kind=(void*)sIsHeap_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value24)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sIsHeap_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sIsHeap_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2006)),"ispointer")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2006))->p==40) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2007))->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var11=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_72=(struct sType* )come_increment_ref_count(multiple_assign_var11->v1);
        param_name_73=(char* )come_increment_ref_count(multiple_assign_var11->v2);
        err_74=multiple_assign_var11->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err_74) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2__75=(struct sType* )come_increment_ref_count(solve_generics(param_type_72,((struct sInfo* )come_null_checker(info, "25obj.nc", 2016))->generics_type,info));
        type2_76=(struct sType* )come_increment_ref_count(solve_method_generics(type2__75,info));
        expected_next_character(41,info);
        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2021, "struct sNode");
        _inf_obj_value25=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value1=sIsPointer_initialize((struct sIsPointer* )come_increment_ref_count(((struct sIsPointer* )come_null_checker(((struct sIsPointer* )(__right_value0=(struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), (void*)0, 2021, "struct sIsPointer* "))), "25obj.nc", 2021))),type2_76,info))));
        _inf_value25->_protocol_obj=_inf_obj_value25;
        _inf_value25->finalize=(void*)sIsPointer_finalize;
        _inf_value25->clone=(void*)sIsPointer_clone;
        _inf_value25->compile=(void*)sIsPointer_compile;
        _inf_value25->sline=(void*)sNodeBase_sline;
        _inf_value25->sline_real=(void*)sNodeBase_sline_real;
        _inf_value25->sname=(void*)sNodeBase_sname;
        _inf_value25->terminated=(void*)sNodeBase_terminated;
        _inf_value25->kind=(void*)sIsPointer_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value25)));
        come_call_finalizer(sType_finalize, param_type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_73 = come_decrement_ref_count(param_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2__75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sIsPointer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sIsPointer_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_73 = come_decrement_ref_count(param_name_73, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2__75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2023)),"optional")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2023))->p!=60) {
        node_77=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2027, "struct sNode");
        _inf_obj_value26=(struct sOptionalNode*)come_increment_ref_count(((struct sOptionalNode*)(__right_value1=sOptionalNode_initialize((struct sOptionalNode* )come_increment_ref_count(((struct sOptionalNode* )come_null_checker(((struct sOptionalNode* )(__right_value0=(struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), (void*)0, 2027, "struct sOptionalNode* "))), "25obj.nc", 2027))),(struct sNode*)come_increment_ref_count(node_77),info))));
        _inf_value26->_protocol_obj=_inf_obj_value26;
        _inf_value26->finalize=(void*)sOptionalNode_finalize;
        _inf_value26->clone=(void*)sOptionalNode_clone;
        _inf_value26->compile=(void*)sOptionalNode_compile;
        _inf_value26->sline=(void*)sNodeBase_sline;
        _inf_value26->sline_real=(void*)sNodeBase_sline_real;
        _inf_value26->sname=(void*)sNodeBase_sname;
        _inf_value26->terminated=(void*)sNodeBase_terminated;
        _inf_value26->kind=(void*)sOptionalNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value26)));
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sOptionalNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sOptionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2029)),"ref")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2029))->p!=60) {
        node_78=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2032, "struct sNode");
        _inf_obj_value27=(struct sRefNode*)come_increment_ref_count(((struct sRefNode*)(__right_value1=sRefNode_initialize((struct sRefNode* )come_increment_ref_count(((struct sRefNode* )come_null_checker(((struct sRefNode* )(__right_value0=(struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), (void*)0, 2032, "struct sRefNode* "))), "25obj.nc", 2032))),(struct sNode*)come_increment_ref_count(node_78),info))));
        _inf_value27->_protocol_obj=_inf_obj_value27;
        _inf_value27->finalize=(void*)sRefNode_finalize;
        _inf_value27->clone=(void*)sRefNode_clone;
        _inf_value27->compile=(void*)sRefNode_compile;
        _inf_value27->sline=(void*)sNodeBase_sline;
        _inf_value27->sline_real=(void*)sNodeBase_sline_real;
        _inf_value27->sname=(void*)sNodeBase_sname;
        _inf_value27->terminated=(void*)sNodeBase_terminated;
        _inf_value27->kind=(void*)sRefNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value27)));
        ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sRefNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sRefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2034)),"span")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2034))->p!=60) {
        node_79=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2037, "struct sNode");
        _inf_obj_value28=(struct sSpanNode*)come_increment_ref_count(((struct sSpanNode*)(__right_value1=sSpanNode_initialize((struct sSpanNode* )come_increment_ref_count(((struct sSpanNode* )come_null_checker(((struct sSpanNode* )(__right_value0=(struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), (void*)0, 2037, "struct sSpanNode* "))), "25obj.nc", 2037))),(struct sNode*)come_increment_ref_count(node_79),info))));
        _inf_value28->_protocol_obj=_inf_obj_value28;
        _inf_value28->finalize=(void*)sSpanNode_finalize;
        _inf_value28->clone=(void*)sSpanNode_clone;
        _inf_value28->compile=(void*)sSpanNode_compile;
        _inf_value28->sline=(void*)sNodeBase_sline;
        _inf_value28->sline_real=(void*)sNodeBase_sline_real;
        _inf_value28->sname=(void*)sNodeBase_sname;
        _inf_value28->terminated=(void*)sNodeBase_terminated;
        _inf_value28->kind=(void*)sSpanNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value28)));
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sSpanNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sSpanNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2039)),"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2041))->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2049))->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2057))->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2063))->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2071))->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c=gComeC;
            gComeC=(_Bool)1;
            if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2077))->p==123) {
                node_80=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_80);
                ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else if(parsecmp("unsafe",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2089))->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            come_safe=gComeSafe;
            gComeSafe=(_Bool)0;
            if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2095))->p==123) {
                node_81=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)0,(_Bool)1,info));
                gComeSafe=come_safe;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_81);
                ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else if(parsecmp("safe",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2107))->p+=strlen("safe");
            skip_spaces_and_lf(info);
            come_safe_82=gComeSafe;
            gComeSafe=(_Bool)1;
            if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2113))->p==123) {
                node_83=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)0,(_Bool)0,info));
                gComeSafe=come_safe_82;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_83);
                ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2129)),"_Generic")&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2129))->p==40) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2130))->p++;
        skip_spaces_and_lf(info);
        no_comma_84=((struct sInfo* )come_null_checker(info, "25obj.nc", 2133))->no_comma;
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2134))->no_comma=(_Bool)1;
        exp_85=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2136))->no_comma=no_comma_84;
        expected_next_character(44,info);
        types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 2140, "struct list$1sType$ph*"))), "25obj.nc", 2140)))));
        come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 2141, "struct list$1sNode$ph*"))), "25obj.nc", 2141)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        default_exp=((void*)0);
        while(1) {
            if(strncmp(((struct sInfo* )come_null_checker(info, "25obj.nc", 2145))->p,"default",strlen("default"))==0) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2146))->p+=strlen("default");
                skip_spaces_and_lf(info);
                expected_next_character(58,info);
                no_comma_86=((struct sInfo* )come_null_checker(info, "25obj.nc", 2151))->no_comma;
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2152))->no_comma=(_Bool)1;
                __dec_obj205=default_exp,
                default_exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0, (void*)0) :0);
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2154))->no_comma=no_comma_86;
            }
            else {
                multiple_assign_var12=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_87=(struct sType* )come_increment_ref_count(multiple_assign_var12->v1);
                name_88=(char* )come_increment_ref_count(multiple_assign_var12->v2);
                err_89=multiple_assign_var12->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(types, "25obj.nc", 2159)),(struct sType* )come_increment_ref_count(type_87));
                expected_next_character(58,info);
                no_comma_90=((struct sInfo* )come_null_checker(info, "25obj.nc", 2163))->no_comma;
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2164))->no_comma=(_Bool)1;
                node_91=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2166))->no_comma=no_comma_90;
                list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(exps, "25obj.nc", 2168)),(struct sNode*)come_increment_ref_count(node_91));
                come_call_finalizer(sType_finalize, type_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_88 = come_decrement_ref_count(name_88, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2171))->p==44) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2172))->p++;
                skip_spaces_and_lf(info);
            }
            else if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2175))->p==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2179))->p==41) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2180))->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2186, "struct sNode");
        _inf_obj_value29=(struct sGeneric*)come_increment_ref_count(((struct sGeneric*)(__right_value1=sGeneric_initialize((struct sGeneric* )come_increment_ref_count(((struct sGeneric* )come_null_checker(((struct sGeneric* )(__right_value0=(struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), (void*)0, 2186, "struct sGeneric* "))), "25obj.nc", 2186))),(struct sNode*)come_increment_ref_count(exp_85),(struct list$1sType$ph*)come_increment_ref_count(types),(struct list$1sNode$ph*)come_increment_ref_count(exps),(struct sNode*)come_increment_ref_count(default_exp),info))));
        _inf_value29->_protocol_obj=_inf_obj_value29;
        _inf_value29->finalize=(void*)sGeneric_finalize;
        _inf_value29->clone=(void*)sGeneric_clone;
        _inf_value29->compile=(void*)sGeneric_compile;
        _inf_value29->sline=(void*)sNodeBase_sline;
        _inf_value29->sline_real=(void*)sNodeBase_sline_real;
        _inf_value29->sname=(void*)sNodeBase_sname;
        _inf_value29->terminated=(void*)sNodeBase_terminated;
        _inf_value29->kind=(void*)sGeneric_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value29)));
        ((exp_85) ? exp_85 = come_decrement_ref_count(exp_85, ((struct sNode*)exp_85)->finalize, ((struct sNode*)exp_85)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGeneric_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sGeneric_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp_85) ? exp_85 = come_decrement_ref_count(exp_85, ((struct sNode*)exp_85)->finalize, ((struct sNode*)exp_85)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2188)),"offsetof")||charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2188)),"__builtin_offsetof")) {
        expected_next_character(40,info);
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2191))->in_offsetof=(_Bool)1;
        multiple_assign_var13=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type_92=(struct sType* )come_increment_ref_count(multiple_assign_var13->v1);
        name_93=(char* )come_increment_ref_count(multiple_assign_var13->v2);
        err_94=multiple_assign_var13->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2193))->in_offsetof=(_Bool)0;
        if(!err_94) {
            err_msg(info,"parse type");
            exit(2);
        }
        expected_next_character(44,info);
        word_95=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        expected_next_character(41,info);
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2206, "struct sNode");
        _inf_obj_value30=(struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)(__right_value1=sOffsetOf_initialize((struct sOffsetOf* )come_increment_ref_count(((struct sOffsetOf* )come_null_checker(((struct sOffsetOf* )(__right_value0=(struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), (void*)0, 2206, "struct sOffsetOf* "))), "25obj.nc", 2206))),type_92,(char* )come_increment_ref_count(word_95),info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sOffsetOf_finalize;
        _inf_value30->clone=(void*)sOffsetOf_clone;
        _inf_value30->compile=(void*)sOffsetOf_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sOffsetOf_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value30)));
        come_call_finalizer(sType_finalize, type_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_93 = come_decrement_ref_count(name_93, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_95 = come_decrement_ref_count(word_95, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sOffsetOf_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sOffsetOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_93 = come_decrement_ref_count(name_93, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_95 = come_decrement_ref_count(word_95, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2208)),"sizeof")) {
        paren=(_Bool)0;
        if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2210))->p==40) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2211))->p++;
            skip_spaces_and_lf(info);
            paren=(_Bool)1;
        }
        is_type_name_flag=(_Bool)0;
        {
            p=((struct sInfo* )come_null_checker(info, "25obj.nc", 2220))->p;
            sline=((struct sInfo* )come_null_checker(info, "25obj.nc", 2221))->sline;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2223))->p)||*((struct sInfo* )come_null_checker(info, "25obj.nc", 2223))->p==95) {
                word_96=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_96,info)) {
                    is_type_name_flag=(_Bool)1;
                }
                (word_96 = come_decrement_ref_count(word_96, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2231))->p=p;
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2232))->sline=sline;
        }
        if(is_type_name_flag) {
            multiple_assign_var14=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_97=(struct sType* )come_increment_ref_count(multiple_assign_var14->v1);
            name_98=(char* )come_increment_ref_count(multiple_assign_var14->v2);
            err_99=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_99) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2242))->p==41) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2243))->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2249, "struct sNode");
            _inf_obj_value31=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value1=sSizeOfNode_initialize((struct sSizeOfNode* )come_increment_ref_count(((struct sSizeOfNode* )come_null_checker(((struct sSizeOfNode* )(__right_value0=(struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), (void*)0, 2249, "struct sSizeOfNode* "))), "25obj.nc", 2249))),type_97,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sSizeOfNode_finalize;
            _inf_value31->clone=(void*)sSizeOfNode_clone;
            _inf_value31->compile=(void*)sSizeOfNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sSizeOfNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value31)));
            come_call_finalizer(sType_finalize, type_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_98 = come_decrement_ref_count(name_98, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sSizeOfNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_98 = come_decrement_ref_count(name_98, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren) {
                no_comma_101=((struct sInfo* )come_null_checker(info, "25obj.nc", 2254))->no_comma;
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2255))->no_comma=(_Bool)1;
                __dec_obj216=exp_100,
                exp_100=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj216 ? __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0, (void*)0) :0);
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2257))->no_comma=no_comma_101;
            }
            else {
                __dec_obj217=exp_100,
                exp_100=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0) :0);
            }
            if(paren&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2263))->p==41) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2264))->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2270, "struct sNode");
            _inf_obj_value32=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count(((struct sSizeOfExpNode* )come_null_checker(((struct sSizeOfExpNode* )(__right_value0=(struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), (void*)0, 2270, "struct sSizeOfExpNode* "))), "25obj.nc", 2270))),(struct sNode*)come_increment_ref_count(exp_100),info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value32->clone=(void*)sSizeOfExpNode_clone;
            _inf_value32->compile=(void*)sSizeOfExpNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sSizeOfExpNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value32)));
            ((exp_100) ? exp_100 = come_decrement_ref_count(exp_100, ((struct sNode*)exp_100)->finalize, ((struct sNode*)exp_100)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_100) ? exp_100 = come_decrement_ref_count(exp_100, ((struct sNode*)exp_100)->finalize, ((struct sNode*)exp_100)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2341)),"dynamic_typeof")) {
        paren_102=(_Bool)0;
        if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2345))->p==40) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2346))->p++;
            skip_spaces_and_lf(info);
            paren_102=(_Bool)1;
        }
        if(!paren_102) {
            no_comma_104=((struct sInfo* )come_null_checker(info, "25obj.nc", 2353))->no_comma;
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2354))->no_comma=(_Bool)1;
            __dec_obj218=exp_103,
            exp_103=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2356))->no_comma=no_comma_104;
        }
        else {
            __dec_obj219=exp_103,
            exp_103=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0, (void*)0) :0);
        }
        if(paren_102&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2364))->p==41) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2365))->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2369, "struct sNode");
        _inf_obj_value33=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value1=sDynamicTypeOf_initialize((struct sDynamicTypeOf* )come_increment_ref_count(((struct sDynamicTypeOf* )come_null_checker(((struct sDynamicTypeOf* )(__right_value0=(struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), (void*)0, 2369, "struct sDynamicTypeOf* "))), "25obj.nc", 2369))),(struct sNode*)come_increment_ref_count(exp_103),info))));
        _inf_value33->_protocol_obj=_inf_obj_value33;
        _inf_value33->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value33->clone=(void*)sDynamicTypeOf_clone;
        _inf_value33->compile=(void*)sDynamicTypeOf_compile;
        _inf_value33->sline=(void*)sNodeBase_sline;
        _inf_value33->sline_real=(void*)sNodeBase_sline_real;
        _inf_value33->sname=(void*)sNodeBase_sname;
        _inf_value33->terminated=(void*)sNodeBase_terminated;
        _inf_value33->kind=(void*)sDynamicTypeOf_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value33)));
        ((exp_103) ? exp_103 = come_decrement_ref_count(exp_103, ((struct sNode*)exp_103)->finalize, ((struct sNode*)exp_103)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp_103) ? exp_103 = come_decrement_ref_count(exp_103, ((struct sNode*)exp_103)->finalize, ((struct sNode*)exp_103)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2371)),"dynamic_sizeof")) {
        paren_105=(_Bool)0;
        if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2375))->p==40) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2376))->p++;
            skip_spaces_and_lf(info);
            paren_105=(_Bool)1;
        }
        if(!paren_105) {
            no_comma_107=((struct sInfo* )come_null_checker(info, "25obj.nc", 2383))->no_comma;
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2384))->no_comma=(_Bool)1;
            __dec_obj222=exp_106,
            exp_106=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2386))->no_comma=no_comma_107;
        }
        else {
            __dec_obj223=exp_106,
            exp_106=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0) :0);
        }
        if(paren_105&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2394))->p==41) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2395))->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2399, "struct sNode");
        _inf_obj_value34=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value1=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count(((struct sDynamicSizeOfExpNode* )come_null_checker(((struct sDynamicSizeOfExpNode* )(__right_value0=(struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), (void*)0, 2399, "struct sDynamicSizeOfExpNode* "))), "25obj.nc", 2399))),(struct sNode*)come_increment_ref_count(exp_106),info))));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value34->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value34->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value34->sline=(void*)sNodeBase_sline;
        _inf_value34->sline_real=(void*)sNodeBase_sline_real;
        _inf_value34->sname=(void*)sNodeBase_sname;
        _inf_value34->terminated=(void*)sNodeBase_terminated;
        _inf_value34->kind=(void*)sDynamicSizeOfExpNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value34)));
        ((exp_106) ? exp_106 = come_decrement_ref_count(exp_106, ((struct sNode*)exp_106)->finalize, ((struct sNode*)exp_106)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp_106) ? exp_106 = come_decrement_ref_count(exp_106, ((struct sNode*)exp_106)->finalize, ((struct sNode*)exp_106)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2401)),"_Alignof")) {
        paren_108=(_Bool)0;
        if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2403))->p==40) {
            paren_108=(_Bool)1;
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2405))->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_109=(_Bool)0;
        {
            p_110=((struct sInfo* )come_null_checker(info, "25obj.nc", 2412))->p;
            sline_111=((struct sInfo* )come_null_checker(info, "25obj.nc", 2413))->sline;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2415))->p)||*((struct sInfo* )come_null_checker(info, "25obj.nc", 2415))->p==95) {
                word_112=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_112,info)) {
                    is_type_name_flag_109=(_Bool)1;
                }
                (word_112 = come_decrement_ref_count(word_112, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2423))->p=p_110;
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2424))->sline=sline_111;
        }
        if(is_type_name_flag_109) {
            multiple_assign_var15=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_113=(struct sType* )come_increment_ref_count(multiple_assign_var15->v1);
            name_114=(char* )come_increment_ref_count(multiple_assign_var15->v2);
            err_115=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_115) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_108&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2434))->p==41) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2435))->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2439, "struct sNode");
            _inf_obj_value35=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value1=sAlignOfNode_initialize((struct sAlignOfNode* )come_increment_ref_count(((struct sAlignOfNode* )come_null_checker(((struct sAlignOfNode* )(__right_value0=(struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), (void*)0, 2439, "struct sAlignOfNode* "))), "25obj.nc", 2439))),type_113,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sAlignOfNode_finalize;
            _inf_value35->clone=(void*)sAlignOfNode_clone;
            _inf_value35->compile=(void*)sAlignOfNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sAlignOfNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value35)));
            come_call_finalizer(sType_finalize, type_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_114 = come_decrement_ref_count(name_114, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAlignOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_114 = come_decrement_ref_count(name_114, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren_108) {
                no_comma_117=((struct sInfo* )come_null_checker(info, "25obj.nc", 2444))->no_comma;
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2445))->no_comma=(_Bool)1;
                __dec_obj226=exp_116,
                exp_116=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj226 ? __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0, (void*)0) :0);
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2447))->no_comma=no_comma_117;
            }
            else {
                __dec_obj227=exp_116,
                exp_116=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0) :0);
            }
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2453, "struct sNode");
            _inf_obj_value36=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value1=sAlignOfExpNode_initialize((struct sAlignOfExpNode* )come_increment_ref_count(((struct sAlignOfExpNode* )come_null_checker(((struct sAlignOfExpNode* )(__right_value0=(struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), (void*)0, 2453, "struct sAlignOfExpNode* "))), "25obj.nc", 2453))),(struct sNode*)come_increment_ref_count(exp_116),info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value36->clone=(void*)sAlignOfExpNode_clone;
            _inf_value36->compile=(void*)sAlignOfExpNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sAlignOfExpNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value36)));
            ((exp_116) ? exp_116 = come_decrement_ref_count(exp_116, ((struct sNode*)exp_116)->finalize, ((struct sNode*)exp_116)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_116) ? exp_116 = come_decrement_ref_count(exp_116, ((struct sNode*)exp_116)->finalize, ((struct sNode*)exp_116)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2456)),"__alignof__")) {
        paren_118=(_Bool)0;
        if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2458))->p==40) {
            paren_118=(_Bool)1;
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2460))->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_119=(_Bool)0;
        {
            p_120=((struct sInfo* )come_null_checker(info, "25obj.nc", 2467))->p;
            sline_121=((struct sInfo* )come_null_checker(info, "25obj.nc", 2468))->sline;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2470))->p)||*((struct sInfo* )come_null_checker(info, "25obj.nc", 2470))->p==95) {
                word_122=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_122,info)) {
                    is_type_name_flag_119=(_Bool)1;
                }
                (word_122 = come_decrement_ref_count(word_122, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2478))->p=p_120;
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2479))->sline=sline_121;
        }
        if(is_type_name_flag_119) {
            multiple_assign_var16=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_123=(struct sType* )come_increment_ref_count(multiple_assign_var16->v1);
            name_124=(char* )come_increment_ref_count(multiple_assign_var16->v2);
            err_125=multiple_assign_var16->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_125) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_118&&*((struct sInfo* )come_null_checker(info, "25obj.nc", 2489))->p==41) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2490))->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2494, "struct sNode");
            _inf_obj_value37=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value1=sAlignOfNode2_initialize((struct sAlignOfNode2* )come_increment_ref_count(((struct sAlignOfNode2* )come_null_checker(((struct sAlignOfNode2* )(__right_value0=(struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), (void*)0, 2494, "struct sAlignOfNode2* "))), "25obj.nc", 2494))),type_123,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value37->clone=(void*)sAlignOfNode2_clone;
            _inf_value37->compile=(void*)sAlignOfNode2_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sAlignOfNode2_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value37)));
            come_call_finalizer(sType_finalize, type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_124 = come_decrement_ref_count(name_124, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode2_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAlignOfNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_124 = come_decrement_ref_count(name_124, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren_118) {
                no_comma_127=((struct sInfo* )come_null_checker(info, "25obj.nc", 2499))->no_comma;
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2500))->no_comma=(_Bool)1;
                __dec_obj232=exp_126,
                exp_126=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0, (void*)0) :0);
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2502))->no_comma=no_comma_127;
            }
            else {
                __dec_obj233=exp_126,
                exp_126=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0) :0);
            }
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2508, "struct sNode");
            _inf_obj_value38=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value1=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2* )come_increment_ref_count(((struct sAlignOfExpNode2* )come_null_checker(((struct sAlignOfExpNode2* )(__right_value0=(struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), (void*)0, 2508, "struct sAlignOfExpNode2* "))), "25obj.nc", 2508))),(struct sNode*)come_increment_ref_count(exp_126),info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value38->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value38->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sAlignOfExpNode2_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value38)));
            ((exp_126) ? exp_126 = come_decrement_ref_count(exp_126, ((struct sNode*)exp_126)->finalize, ((struct sNode*)exp_126)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_126) ? exp_126 = come_decrement_ref_count(exp_126, ((struct sNode*)exp_126)->finalize, ((struct sNode*)exp_126)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v20(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_clone"; neo_current_frame = &fr;
    struct sDeleteNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeleteNode*  result  ;
    char*  __dec_obj181  ;
    struct sNode* __dec_obj182;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), (void*)0, 5, "struct sDeleteNode* "));
    if(self!=((void*)0)) {
        ((struct sDeleteNode* )come_null_checker(result, "sDeleteNode_clone", 6))->sline=((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj181=((struct sDeleteNode* )come_null_checker(result, "sDeleteNode_clone", 7))->sname,
        ((struct sDeleteNode* )come_null_checker(result, "sDeleteNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_clone", 7))->sname, "sDeleteNode_clone", 7, "char* "));
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sDeleteNode* )come_null_checker(result, "sDeleteNode_clone", 8))->sline_real=((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_clone", 9))->node!=((void*)0)) {
        __dec_obj182=((struct sDeleteNode* )come_null_checker(result, "sDeleteNode_clone", 9))->node,
        ((struct sDeleteNode* )come_null_checker(result, "sDeleteNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sDeleteNode*)come_null_checker(self, "sDeleteNode_clone", 9))->node));
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDeleteNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_clone"; neo_current_frame = &fr;
    struct sBorrowNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBorrowNode*  result  ;
    char*  __dec_obj183  ;
    struct sNode* __dec_obj184;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), (void*)0, 5, "struct sBorrowNode* "));
    if(self!=((void*)0)) {
        ((struct sBorrowNode* )come_null_checker(result, "sBorrowNode_clone", 6))->sline=((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj183=((struct sBorrowNode* )come_null_checker(result, "sBorrowNode_clone", 7))->sname,
        ((struct sBorrowNode* )come_null_checker(result, "sBorrowNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_clone", 7))->sname, "sBorrowNode_clone", 7, "char* "));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sBorrowNode* )come_null_checker(result, "sBorrowNode_clone", 8))->sline_real=((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_clone", 9))->node!=((void*)0)) {
        __dec_obj184=((struct sBorrowNode* )come_null_checker(result, "sBorrowNode_clone", 9))->node,
        ((struct sBorrowNode* )come_null_checker(result, "sBorrowNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sBorrowNode*)come_null_checker(self, "sBorrowNode_clone", 9))->node));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sBorrowNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_clone"; neo_current_frame = &fr;
    struct sCloneNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCloneNode*  result  ;
    char*  __dec_obj185  ;
    struct sNode* __dec_obj186;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), (void*)0, 5, "struct sCloneNode* "));
    if(self!=((void*)0)) {
        ((struct sCloneNode* )come_null_checker(result, "sCloneNode_clone", 6))->sline=((struct sCloneNode*)come_null_checker(self, "sCloneNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sCloneNode*)come_null_checker(self, "sCloneNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj185=((struct sCloneNode* )come_null_checker(result, "sCloneNode_clone", 7))->sname,
        ((struct sCloneNode* )come_null_checker(result, "sCloneNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCloneNode*)come_null_checker(self, "sCloneNode_clone", 7))->sname, "sCloneNode_clone", 7, "char* "));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCloneNode* )come_null_checker(result, "sCloneNode_clone", 8))->sline_real=((struct sCloneNode*)come_null_checker(self, "sCloneNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sCloneNode*)come_null_checker(self, "sCloneNode_clone", 9))->node!=((void*)0)) {
        __dec_obj186=((struct sCloneNode* )come_null_checker(result, "sCloneNode_clone", 9))->node,
        ((struct sCloneNode* )come_null_checker(result, "sCloneNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sCloneNode*)come_null_checker(self, "sCloneNode_clone", 9))->node));
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sCloneNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_clone"; neo_current_frame = &fr;
    struct sDupeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDupeNode*  result  ;
    char*  __dec_obj187  ;
    struct sNode* __dec_obj188;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), (void*)0, 5, "struct sDupeNode* "));
    if(self!=((void*)0)) {
        ((struct sDupeNode* )come_null_checker(result, "sDupeNode_clone", 6))->sline=((struct sDupeNode*)come_null_checker(self, "sDupeNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sDupeNode*)come_null_checker(self, "sDupeNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj187=((struct sDupeNode* )come_null_checker(result, "sDupeNode_clone", 7))->sname,
        ((struct sDupeNode* )come_null_checker(result, "sDupeNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sDupeNode*)come_null_checker(self, "sDupeNode_clone", 7))->sname, "sDupeNode_clone", 7, "char* "));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sDupeNode* )come_null_checker(result, "sDupeNode_clone", 8))->sline_real=((struct sDupeNode*)come_null_checker(self, "sDupeNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sDupeNode*)come_null_checker(self, "sDupeNode_clone", 9))->node!=((void*)0)) {
        __dec_obj188=((struct sDupeNode* )come_null_checker(result, "sDupeNode_clone", 9))->node,
        ((struct sDupeNode* )come_null_checker(result, "sDupeNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sDupeNode*)come_null_checker(self, "sDupeNode_clone", 9))->node));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDupeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_clone"; neo_current_frame = &fr;
    struct sDummyHeapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDummyHeapNode*  result  ;
    char*  __dec_obj189  ;
    struct sNode* __dec_obj190;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), (void*)0, 5, "struct sDummyHeapNode* "));
    if(self!=((void*)0)) {
        ((struct sDummyHeapNode* )come_null_checker(result, "sDummyHeapNode_clone", 6))->sline=((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj189=((struct sDummyHeapNode* )come_null_checker(result, "sDummyHeapNode_clone", 7))->sname,
        ((struct sDummyHeapNode* )come_null_checker(result, "sDummyHeapNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_clone", 7))->sname, "sDummyHeapNode_clone", 7, "char* "));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sDummyHeapNode* )come_null_checker(result, "sDummyHeapNode_clone", 8))->sline_real=((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_clone", 9))->node!=((void*)0)) {
        __dec_obj190=((struct sDummyHeapNode* )come_null_checker(result, "sDummyHeapNode_clone", 9))->node,
        ((struct sDummyHeapNode* )come_null_checker(result, "sDummyHeapNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sDummyHeapNode*)come_null_checker(self, "sDummyHeapNode_clone", 9))->node));
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDummyHeapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_clone"; neo_current_frame = &fr;
    struct sGCIncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCIncNode*  result  ;
    char*  __dec_obj191  ;
    struct sNode* __dec_obj192;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), (void*)0, 5, "struct sGCIncNode* "));
    if(self!=((void*)0)) {
        ((struct sGCIncNode* )come_null_checker(result, "sGCIncNode_clone", 6))->sline=((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj191=((struct sGCIncNode* )come_null_checker(result, "sGCIncNode_clone", 7))->sname,
        ((struct sGCIncNode* )come_null_checker(result, "sGCIncNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_clone", 7))->sname, "sGCIncNode_clone", 7, "char* "));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sGCIncNode* )come_null_checker(result, "sGCIncNode_clone", 8))->sline_real=((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_clone", 9))->node!=((void*)0)) {
        __dec_obj192=((struct sGCIncNode* )come_null_checker(result, "sGCIncNode_clone", 9))->node,
        ((struct sGCIncNode* )come_null_checker(result, "sGCIncNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGCIncNode*)come_null_checker(self, "sGCIncNode_clone", 9))->node));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCIncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_clone"; neo_current_frame = &fr;
    struct sGCDecNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNode*  result  ;
    char*  __dec_obj193  ;
    struct sNode* __dec_obj194;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), (void*)0, 5, "struct sGCDecNode* "));
    if(self!=((void*)0)) {
        ((struct sGCDecNode* )come_null_checker(result, "sGCDecNode_clone", 6))->sline=((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj193=((struct sGCDecNode* )come_null_checker(result, "sGCDecNode_clone", 7))->sname,
        ((struct sGCDecNode* )come_null_checker(result, "sGCDecNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_clone", 7))->sname, "sGCDecNode_clone", 7, "char* "));
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sGCDecNode* )come_null_checker(result, "sGCDecNode_clone", 8))->sline_real=((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_clone", 9))->node!=((void*)0)) {
        __dec_obj194=((struct sGCDecNode* )come_null_checker(result, "sGCDecNode_clone", 9))->node,
        ((struct sGCDecNode* )come_null_checker(result, "sGCDecNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGCDecNode*)come_null_checker(self, "sGCDecNode_clone", 9))->node));
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCDecNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_clone"; neo_current_frame = &fr;
    struct sGCDecNoFreeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNoFreeNode*  result  ;
    char*  __dec_obj195  ;
    struct sNode* __dec_obj196;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), (void*)0, 5, "struct sGCDecNoFreeNode* "));
    if(self!=((void*)0)) {
        ((struct sGCDecNoFreeNode* )come_null_checker(result, "sGCDecNoFreeNode_clone", 6))->sline=((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj195=((struct sGCDecNoFreeNode* )come_null_checker(result, "sGCDecNoFreeNode_clone", 7))->sname,
        ((struct sGCDecNoFreeNode* )come_null_checker(result, "sGCDecNoFreeNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_clone", 7))->sname, "sGCDecNoFreeNode_clone", 7, "char* "));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sGCDecNoFreeNode* )come_null_checker(result, "sGCDecNoFreeNode_clone", 8))->sline_real=((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_clone", 9))->node!=((void*)0)) {
        __dec_obj196=((struct sGCDecNoFreeNode* )come_null_checker(result, "sGCDecNoFreeNode_clone", 9))->node,
        ((struct sGCDecNoFreeNode* )come_null_checker(result, "sGCDecNoFreeNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGCDecNoFreeNode*)come_null_checker(self, "sGCDecNoFreeNode_clone", 9))->node));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_clone"; neo_current_frame = &fr;
    struct sIsHeap* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsHeap*  result  ;
    char*  __dec_obj197  ;
    struct sType*  __dec_obj198  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), (void*)0, 5, "struct sIsHeap* "));
    if(self!=((void*)0)) {
        ((struct sIsHeap* )come_null_checker(result, "sIsHeap_clone", 6))->sline=((struct sIsHeap*)come_null_checker(self, "sIsHeap_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sIsHeap*)come_null_checker(self, "sIsHeap_clone", 7))->sname!=((void*)0)) {
        __dec_obj197=((struct sIsHeap* )come_null_checker(result, "sIsHeap_clone", 7))->sname,
        ((struct sIsHeap* )come_null_checker(result, "sIsHeap_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sIsHeap*)come_null_checker(self, "sIsHeap_clone", 7))->sname, "sIsHeap_clone", 7, "char* "));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sIsHeap* )come_null_checker(result, "sIsHeap_clone", 8))->sline_real=((struct sIsHeap*)come_null_checker(self, "sIsHeap_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sIsHeap*)come_null_checker(self, "sIsHeap_clone", 9))->type!=((void*)0)) {
        __dec_obj198=((struct sIsHeap* )come_null_checker(result, "sIsHeap_clone", 9))->type,
        ((struct sIsHeap* )come_null_checker(result, "sIsHeap_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sIsHeap*)come_null_checker(self, "sIsHeap_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sIsHeap_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_clone"; neo_current_frame = &fr;
    struct sIsPointer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsPointer*  result  ;
    char*  __dec_obj199  ;
    struct sType*  __dec_obj200  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), (void*)0, 5, "struct sIsPointer* "));
    if(self!=((void*)0)) {
        ((struct sIsPointer* )come_null_checker(result, "sIsPointer_clone", 6))->sline=((struct sIsPointer*)come_null_checker(self, "sIsPointer_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sIsPointer*)come_null_checker(self, "sIsPointer_clone", 7))->sname!=((void*)0)) {
        __dec_obj199=((struct sIsPointer* )come_null_checker(result, "sIsPointer_clone", 7))->sname,
        ((struct sIsPointer* )come_null_checker(result, "sIsPointer_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sIsPointer*)come_null_checker(self, "sIsPointer_clone", 7))->sname, "sIsPointer_clone", 7, "char* "));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sIsPointer* )come_null_checker(result, "sIsPointer_clone", 8))->sline_real=((struct sIsPointer*)come_null_checker(self, "sIsPointer_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sIsPointer*)come_null_checker(self, "sIsPointer_clone", 9))->type!=((void*)0)) {
        __dec_obj200=((struct sIsPointer* )come_null_checker(result, "sIsPointer_clone", 9))->type,
        ((struct sIsPointer* )come_null_checker(result, "sIsPointer_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sIsPointer*)come_null_checker(self, "sIsPointer_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sIsPointer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_clone"; neo_current_frame = &fr;
    struct sOptionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOptionalNode*  result  ;
    char*  __dec_obj201  ;
    struct sNode* __dec_obj202;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOptionalNode* )come_increment_ref_count((struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), (void*)0, 5, "struct sOptionalNode* "));
    if(self!=((void*)0)) {
        ((struct sOptionalNode* )come_null_checker(result, "sOptionalNode_clone", 6))->sline=((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj201=((struct sOptionalNode* )come_null_checker(result, "sOptionalNode_clone", 7))->sname,
        ((struct sOptionalNode* )come_null_checker(result, "sOptionalNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_clone", 7))->sname, "sOptionalNode_clone", 7, "char* "));
        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sOptionalNode* )come_null_checker(result, "sOptionalNode_clone", 8))->sline_real=((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_clone", 9))->node!=((void*)0)) {
        __dec_obj202=((struct sOptionalNode* )come_null_checker(result, "sOptionalNode_clone", 9))->node,
        ((struct sOptionalNode* )come_null_checker(result, "sOptionalNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sOptionalNode*)come_null_checker(self, "sOptionalNode_clone", 9))->node));
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sOptionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_clone"; neo_current_frame = &fr;
    struct sSpanNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSpanNode*  result  ;
    char*  __dec_obj203  ;
    struct sNode* __dec_obj204;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSpanNode* )come_increment_ref_count((struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), (void*)0, 5, "struct sSpanNode* "));
    if(self!=((void*)0)) {
        ((struct sSpanNode* )come_null_checker(result, "sSpanNode_clone", 6))->sline=((struct sSpanNode*)come_null_checker(self, "sSpanNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sSpanNode*)come_null_checker(self, "sSpanNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj203=((struct sSpanNode* )come_null_checker(result, "sSpanNode_clone", 7))->sname,
        ((struct sSpanNode* )come_null_checker(result, "sSpanNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sSpanNode*)come_null_checker(self, "sSpanNode_clone", 7))->sname, "sSpanNode_clone", 7, "char* "));
        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sSpanNode* )come_null_checker(result, "sSpanNode_clone", 8))->sline_real=((struct sSpanNode*)come_null_checker(self, "sSpanNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sSpanNode*)come_null_checker(self, "sSpanNode_clone", 9))->node!=((void*)0)) {
        __dec_obj204=((struct sSpanNode* )come_null_checker(result, "sSpanNode_clone", 9))->node,
        ((struct sSpanNode* )come_null_checker(result, "sSpanNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sSpanNode*)come_null_checker(self, "sSpanNode_clone", 9))->node));
        (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSpanNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGeneric* sGeneric_clone(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_clone"; neo_current_frame = &fr;
    struct sGeneric* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGeneric*  result  ;
    char*  __dec_obj206  ;
    struct sNode* __dec_obj207;
    struct list$1sType$ph* __dec_obj208;
    struct list$1sNode$ph* __dec_obj209;
    struct sNode* __dec_obj210;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), (void*)0, 5, "struct sGeneric* "));
    if(self!=((void*)0)) {
        ((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 6))->sline=((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 7))->sname!=((void*)0)) {
        __dec_obj206=((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 7))->sname,
        ((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 7))->sname, "sGeneric_clone", 7, "char* "));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 8))->sline_real=((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 9))->exp!=((void*)0)) {
        __dec_obj207=((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 9))->exp,
        ((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 9))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 9))->exp));
        (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 10))->types!=((void*)0)) {
        __dec_obj208=((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 10))->types,
        ((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 10))->types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 10))->types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 11))->exps!=((void*)0)) {
        __dec_obj209=((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 11))->exps,
        ((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 11))->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 11))->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj209,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 12))->default_exp!=((void*)0)) {
        __dec_obj210=((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 12))->default_exp,
        ((struct sGeneric* )come_null_checker(result, "sGeneric_clone", 12))->default_exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGeneric*)come_null_checker(self, "sGeneric_clone", 12))->default_exp));
        (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGeneric_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_clone"; neo_current_frame = &fr;
    struct sOffsetOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOffsetOf*  result  ;
    char*  __dec_obj211  ;
    struct sType*  __dec_obj212  ;
    char*  __dec_obj213  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), (void*)0, 5, "struct sOffsetOf* "));
    if(self!=((void*)0)) {
        ((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 6))->sline=((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 7))->sname!=((void*)0)) {
        __dec_obj211=((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 7))->sname,
        ((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 7))->sname, "sOffsetOf_clone", 7, "char* "));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 8))->sline_real=((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 9))->type!=((void*)0)) {
        __dec_obj212=((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 9))->type,
        ((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj212,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 10))->name!=((void*)0)) {
        __dec_obj213=((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 10))->name,
        ((struct sOffsetOf* )come_null_checker(result, "sOffsetOf_clone", 10))->name=(char* )come_increment_ref_count((char* )come_memdup(((struct sOffsetOf*)come_null_checker(self, "sOffsetOf_clone", 10))->name, "sOffsetOf_clone", 10, "char* "));
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sOffsetOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_clone"; neo_current_frame = &fr;
    struct sSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfNode*  result  ;
    char*  __dec_obj214  ;
    struct sType*  __dec_obj215  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), (void*)0, 5, "struct sSizeOfNode* "));
    if(self!=((void*)0)) {
        ((struct sSizeOfNode* )come_null_checker(result, "sSizeOfNode_clone", 6))->sline=((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj214=((struct sSizeOfNode* )come_null_checker(result, "sSizeOfNode_clone", 7))->sname,
        ((struct sSizeOfNode* )come_null_checker(result, "sSizeOfNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_clone", 7))->sname, "sSizeOfNode_clone", 7, "char* "));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sSizeOfNode* )come_null_checker(result, "sSizeOfNode_clone", 8))->sline_real=((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_clone", 9))->type!=((void*)0)) {
        __dec_obj215=((struct sSizeOfNode* )come_null_checker(result, "sSizeOfNode_clone", 9))->type,
        ((struct sSizeOfNode* )come_null_checker(result, "sSizeOfNode_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sSizeOfNode*)come_null_checker(self, "sSizeOfNode_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj215,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_clone"; neo_current_frame = &fr;
    struct sDynamicTypeOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicTypeOf*  result  ;
    char*  __dec_obj220  ;
    struct sNode* __dec_obj221;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), (void*)0, 5, "struct sDynamicTypeOf* "));
    if(self!=((void*)0)) {
        ((struct sDynamicTypeOf* )come_null_checker(result, "sDynamicTypeOf_clone", 6))->sline=((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_clone", 7))->sname!=((void*)0)) {
        __dec_obj220=((struct sDynamicTypeOf* )come_null_checker(result, "sDynamicTypeOf_clone", 7))->sname,
        ((struct sDynamicTypeOf* )come_null_checker(result, "sDynamicTypeOf_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_clone", 7))->sname, "sDynamicTypeOf_clone", 7, "char* "));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sDynamicTypeOf* )come_null_checker(result, "sDynamicTypeOf_clone", 8))->sline_real=((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_clone", 9))->exp!=((void*)0)) {
        __dec_obj221=((struct sDynamicTypeOf* )come_null_checker(result, "sDynamicTypeOf_clone", 9))->exp,
        ((struct sDynamicTypeOf* )come_null_checker(result, "sDynamicTypeOf_clone", 9))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sDynamicTypeOf*)come_null_checker(self, "sDynamicTypeOf_clone", 9))->exp));
        (__dec_obj221 ? __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDynamicTypeOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_clone"; neo_current_frame = &fr;
    struct sAlignOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode*  result  ;
    char*  __dec_obj224  ;
    struct sType*  __dec_obj225  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), (void*)0, 5, "struct sAlignOfNode* "));
    if(self!=((void*)0)) {
        ((struct sAlignOfNode* )come_null_checker(result, "sAlignOfNode_clone", 6))->sline=((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj224=((struct sAlignOfNode* )come_null_checker(result, "sAlignOfNode_clone", 7))->sname,
        ((struct sAlignOfNode* )come_null_checker(result, "sAlignOfNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_clone", 7))->sname, "sAlignOfNode_clone", 7, "char* "));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sAlignOfNode* )come_null_checker(result, "sAlignOfNode_clone", 8))->sline_real=((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_clone", 9))->type!=((void*)0)) {
        __dec_obj225=((struct sAlignOfNode* )come_null_checker(result, "sAlignOfNode_clone", 9))->type,
        ((struct sAlignOfNode* )come_null_checker(result, "sAlignOfNode_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sAlignOfNode*)come_null_checker(self, "sAlignOfNode_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj225,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode*  result  ;
    char*  __dec_obj228  ;
    struct sNode* __dec_obj229;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), (void*)0, 5, "struct sAlignOfExpNode* "));
    if(self!=((void*)0)) {
        ((struct sAlignOfExpNode* )come_null_checker(result, "sAlignOfExpNode_clone", 6))->sline=((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj228=((struct sAlignOfExpNode* )come_null_checker(result, "sAlignOfExpNode_clone", 7))->sname,
        ((struct sAlignOfExpNode* )come_null_checker(result, "sAlignOfExpNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_clone", 7))->sname, "sAlignOfExpNode_clone", 7, "char* "));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sAlignOfExpNode* )come_null_checker(result, "sAlignOfExpNode_clone", 8))->sline_real=((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_clone", 9))->exp!=((void*)0)) {
        __dec_obj229=((struct sAlignOfExpNode* )come_null_checker(result, "sAlignOfExpNode_clone", 9))->exp,
        ((struct sAlignOfExpNode* )come_null_checker(result, "sAlignOfExpNode_clone", 9))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAlignOfExpNode*)come_null_checker(self, "sAlignOfExpNode_clone", 9))->exp));
        (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode2*  result  ;
    char*  __dec_obj230  ;
    struct sType*  __dec_obj231  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), (void*)0, 5, "struct sAlignOfNode2* "));
    if(self!=((void*)0)) {
        ((struct sAlignOfNode2* )come_null_checker(result, "sAlignOfNode2_clone", 6))->sline=((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_clone", 7))->sname!=((void*)0)) {
        __dec_obj230=((struct sAlignOfNode2* )come_null_checker(result, "sAlignOfNode2_clone", 7))->sname,
        ((struct sAlignOfNode2* )come_null_checker(result, "sAlignOfNode2_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_clone", 7))->sname, "sAlignOfNode2_clone", 7, "char* "));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sAlignOfNode2* )come_null_checker(result, "sAlignOfNode2_clone", 8))->sline_real=((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_clone", 9))->type!=((void*)0)) {
        __dec_obj231=((struct sAlignOfNode2* )come_null_checker(result, "sAlignOfNode2_clone", 9))->type,
        ((struct sAlignOfNode2* )come_null_checker(result, "sAlignOfNode2_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sAlignOfNode2*)come_null_checker(self, "sAlignOfNode2_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode2*  result  ;
    char*  __dec_obj234  ;
    struct sNode* __dec_obj235;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), (void*)0, 5, "struct sAlignOfExpNode2* "));
    if(self!=((void*)0)) {
        ((struct sAlignOfExpNode2* )come_null_checker(result, "sAlignOfExpNode2_clone", 6))->sline=((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_clone", 7))->sname!=((void*)0)) {
        __dec_obj234=((struct sAlignOfExpNode2* )come_null_checker(result, "sAlignOfExpNode2_clone", 7))->sname,
        ((struct sAlignOfExpNode2* )come_null_checker(result, "sAlignOfExpNode2_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_clone", 7))->sname, "sAlignOfExpNode2_clone", 7, "char* "));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sAlignOfExpNode2* )come_null_checker(result, "sAlignOfExpNode2_clone", 8))->sline_real=((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_clone", 9))->exp!=((void*)0)) {
        __dec_obj235=((struct sAlignOfExpNode2* )come_null_checker(result, "sAlignOfExpNode2_clone", 9))->exp,
        ((struct sAlignOfExpNode2* )come_null_checker(result, "sAlignOfExpNode2_clone", 9))->exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAlignOfExpNode2*)come_null_checker(self, "sAlignOfExpNode2_clone", 9))->exp));
        (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v94"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    _Bool come_c;
    _Bool come_safe;
    _Bool come_safe_128;
    if(charp_operator_equals(((char*)come_null_checker(buf, "25obj.nc", 2559)),"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2561))->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2569))->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2577))->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2583))->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2589))->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2592))->p==123) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2593))->p++;
                skip_spaces_and_lf(info);
                come_c=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(parsecmp("unsafe",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2608))->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2611))->p==123) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2612))->p++;
                skip_spaces_and_lf(info);
                come_safe=gComeSafe;
                gComeSafe=(_Bool)0;
                transpile_toplevel((_Bool)1,info);
                gComeSafe=come_safe;
            }
            else {
                gComeSafe=(_Bool)0;
            }
        }
        else if(parsecmp("safe",info)) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2627))->p+=strlen("safe");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2630))->p==123) {
                ((struct sInfo* )come_null_checker(info, "25obj.nc", 2631))->p++;
                skip_spaces_and_lf(info);
                come_safe_128=gComeSafe;
                gComeSafe=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeSafe=come_safe_128;
            }
            else {
                gComeSafe=(_Bool)1;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v93(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_implements"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value39;
    struct sImplementsNode* _inf_obj_value39;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2658, "struct sNode");
    _inf_obj_value39=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count(((struct sImplementsNode* )come_null_checker(((struct sImplementsNode* )(__right_value0=(struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), (void*)0, 2658, "struct sImplementsNode* "))), "25obj.nc", 2658))),(struct sNode*)come_increment_ref_count(node),inf_type,info))));
    _inf_value39->_protocol_obj=_inf_obj_value39;
    _inf_value39->finalize=(void*)sImplementsNode_finalize;
    _inf_value39->clone=(void*)sImplementsNode_clone;
    _inf_value39->compile=(void*)sImplementsNode_compile;
    _inf_value39->sline=(void*)sNodeBase_sline;
    _inf_value39->sline_real=(void*)sNodeBase_sline_real;
    _inf_value39->sname=(void*)sNodeBase_sname;
    _inf_value39->terminated=(void*)sNodeBase_terminated;
    _inf_value39->kind=(void*)sImplementsNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value39)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_clone"; neo_current_frame = &fr;
    struct sImplementsNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sImplementsNode*  result  ;
    char*  __dec_obj236  ;
    struct sNode* __dec_obj237;
    struct sType*  __dec_obj238  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), (void*)0, 5, "struct sImplementsNode* "));
    if(self!=((void*)0)) {
        ((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 6))->sline=((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj236=((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 7))->sname,
        ((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 7))->sname, "sImplementsNode_clone", 7, "char* "));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 8))->sline_real=((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 9))->obj_exp!=((void*)0)) {
        __dec_obj237=((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 9))->obj_exp,
        ((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 9))->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 9))->obj_exp));
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 10))->inf_type!=((void*)0)) {
        __dec_obj238=((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 10))->inf_type,
        ((struct sImplementsNode* )come_null_checker(result, "sImplementsNode_clone", 10))->inf_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sImplementsNode*)come_null_checker(self, "sImplementsNode_clone", 10))->inf_type));
        come_call_finalizer(sType_finalize, __dec_obj238,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sImplementsNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var17
;    struct sType*  type3  =0;
    char*  name2  =0;
    _Bool err=0;
    struct sType*  inf_type  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value40;
    struct sImplementsNode* _inf_obj_value40;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!((struct sNode*)come_null_checker(node, "25obj.nc", 2663))->terminated(((struct sNode*)come_null_checker(node, "25obj.nc", 2663))->_protocol_obj)&&!gComeC&&parsecmp("implements",info)) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2664))->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var17=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3=(struct sType* )come_increment_ref_count(multiple_assign_var17->v1);
        name2=(char* )come_increment_ref_count(multiple_assign_var17->v2);
        err=multiple_assign_var17->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err) {
            printf("%s %d: parse_type failed\n",((struct sInfo* )come_null_checker(info, "25obj.nc", 2669))->sname,((struct sInfo* )come_null_checker(info, "25obj.nc", 2669))->sline);
            exit(2);
        }
        inf_type=(struct sType* )come_increment_ref_count(sType_clone(type3));
        _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2675, "struct sNode");
        _inf_obj_value40=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count(((struct sImplementsNode* )come_null_checker(((struct sImplementsNode* )(__right_value0=(struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), (void*)0, 2675, "struct sImplementsNode* "))), "25obj.nc", 2675))),(struct sNode*)come_increment_ref_count(node),inf_type,info))));
        _inf_value40->_protocol_obj=_inf_obj_value40;
        _inf_value40->finalize=(void*)sImplementsNode_finalize;
        _inf_value40->clone=(void*)sImplementsNode_clone;
        _inf_value40->compile=(void*)sImplementsNode_compile;
        _inf_value40->sline=(void*)sNodeBase_sline;
        _inf_value40->sline_real=(void*)sNodeBase_sline_real;
        _inf_value40->sname=(void*)sNodeBase_sname;
        _inf_value40->terminated=(void*)sNodeBase_terminated;
        _inf_value40->kind=(void*)sImplementsNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value40)));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2677))->p==64) {
        ((struct sInfo* )come_null_checker(info, "25obj.nc", 2678))->p++;
        while(xisalnum(*((struct sInfo* )come_null_checker(info, "25obj.nc", 2679))->p)||*((struct sInfo* )come_null_checker(info, "25obj.nc", 2679))->p==95) {
            ((struct sInfo* )come_null_checker(info, "25obj.nc", 2680))->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

