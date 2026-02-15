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
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
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
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
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
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)come_null_checker(self, "08call.nc", 11))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=((struct sReturnNode*)come_null_checker(self, "08call.nc", 13))->value,
    ((struct sReturnNode*)come_null_checker(self, "08call.nc", 13))->value=(struct sNode*)come_increment_ref_count(value);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sReturnNode*)come_increment_ref_count(self);
    come_call_finalizer(sReturnNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReturnNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sReturnNode_kind(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReturnNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct list$1sVar$ph* o2_saved;
    struct sVar*  it  ;
    struct list$1sVar$ph* __dec_obj37;
    _Bool _conditional_value_X0;
    struct sFun*  come_fun_10  ;
    struct list$1sVar$ph* o2_saved_11;
    struct sVar*  it_12  ;
    struct list$1sVar$ph* __dec_obj38;
    memset(&result_type3, 0, sizeof(result_type3));
    if(((struct sReturnNode*)come_null_checker(self, "08call.nc", 23))->value) {
        come_fun=((struct sInfo* )come_null_checker(info, "08call.nc", 24))->come_fun;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(come_fun, "08call.nc", 26))->mResultType));
        result_type2_=(struct sType* )come_increment_ref_count(solve_generics(result_type,((struct sInfo* )come_null_checker(info, "08call.nc", 28))->generics_type,info));
        result_type2=(struct sType* )come_increment_ref_count(solve_method_generics(result_type2_,info));
        if(((struct sType* )come_null_checker(result_type2, "08call.nc", 32))->mNoSolvedGenericsType) {
            result_type3=((struct sType* )come_null_checker(result_type2, "08call.nc", 33))->mNoSolvedGenericsType;
        }
        else {
            result_type3=result_type2;
        }
        Value=node_compile(((struct sReturnNode*)come_null_checker(self, "08call.nc", 39))->value,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        come_value_type_=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value, "08call.nc", 45))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 45))->generics_type,info));
        come_value_type=(struct sType* )come_increment_ref_count(solve_method_generics(come_value_type_,info));
        __dec_obj36=((struct sInfo* )come_null_checker(info, "08call.nc", 48))->function_result_type,
        ((struct sInfo* )come_null_checker(info, "08call.nc", 48))->function_result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "08call.nc", 48))->type));
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        check_assign_type("result type",result_type2,come_value_type,come_value,info);
        if(gComeC) {
            add_come_code(info,"return %s;\n",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 54))->c_value);
        }
        else if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 56))->come_fun, "08call.nc", 56))->mName, "08call.nc", 56)),"main")&&((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 56))->come_fun, "08call.nc", 56))->mNoResultType&&!existance_free_objects_on_return(((struct sFun* )come_null_checker(come_fun, "08call.nc", 56))->mBlock,info,((struct CVALUE* )come_null_checker(come_value, "08call.nc", 56))->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            if(!gComeC&&!((struct sType* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 57))->come_fun, "08call.nc", 57))->mResultType, "08call.nc", 57))->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            add_come_code(info,"return %s;\n",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 60))->c_value);
        }
        else {
            if(!((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 63))->come_fun, "08call.nc", 63))->mDefineReturnVar) {
                ((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 64))->come_fun, "08call.nc", 64))->mDefineReturnVar=(_Bool)1;
                add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value2=make_define_var(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),info,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            if(!((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 69))->come_fun, "08call.nc", 69))->mNoResultType) {
                if(((struct sType* )come_null_checker(result_type2, "08call.nc", 70))->mHeap) {
                    type_name=(char* )come_increment_ref_count(make_type_name_string(result_type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = (%%s)come_increment_ref_count(%%s);\n",((char* )(__right_value0=int_to_string(000)))))),type_name,((struct CVALUE* )come_null_checker(come_value, "08call.nc", 72))->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
                else {
                    add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 75))->c_value);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            else {
                add_come_code(info,((char*)(__right_value1=xsprintf("__result_obj__\%s = %%s;\n",((char* )(__right_value0=int_to_string(000)))))),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 79))->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            add_last_code_to_source(info);
            free_objects_on_return(((struct sFun* )come_null_checker(come_fun, "08call.nc", 83))->mBlock,info,((struct CVALUE* )come_null_checker(come_value, "08call.nc", 83))->var,(_Bool)0,((struct CVALUE* )come_null_checker(come_value, "08call.nc", 83))->mLoadField);
            free_right_value_objects(info);
            if(((struct sInfo* )come_null_checker(info, "08call.nc", 86))->block_level==1) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 87))->inhibits_output_code=(_Bool)1;
                if(((struct sInfo* )come_null_checker(info, "08call.nc", 89))->match_it_var) {
                    for(o2_saved=(struct list$1sVar$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "08call.nc", 90))->match_it_var),it=list$1sVar$ph_begin(((struct list$1sVar$ph*)come_null_checker(o2_saved, "08call.nc", 90)));!list$1sVar$ph_end(((struct list$1sVar$ph*)come_null_checker(o2_saved, "08call.nc", 90)));it=list$1sVar$ph_next(((struct list$1sVar$ph*)come_null_checker(o2_saved, "08call.nc", 90)))){
                        free_object(((struct sVar* )come_null_checker(it, "08call.nc", 91))->mType,((struct sVar* )come_null_checker(it, "08call.nc", 91))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                    }
                    come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    __dec_obj37=((struct sInfo* )come_null_checker(info, "08call.nc", 93))->match_it_var,
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 93))->match_it_var=((void*)0);
                    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            if(!gComeC&&!((struct sType* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 97))->come_fun, "08call.nc", 97))->mResultType, "08call.nc", 97))->mNorecord) {
                add_come_code(info,"neo_current_frame = fr.prev;\n");
            }
            if(({(_conditional_value_X0=(!gComeC&&string_operator_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 101))->come_fun, "08call.nc", 101))->mName, "08call.nc", 101)),"main")&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 101))->funcs, "08call.nc", 101)), "08call.nc", 101)),((char*)(__right_value1=xsprintf("come_heap_final"))))))));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                free_objects(((struct sInfo* )come_null_checker(info, "08call.nc", 102))->gv_table,((void*)0),info,(_Bool)0);
                add_come_code(info,((char* )(__right_value0=xsprintf("come_heap_final();\n"))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            if(((struct sType* )come_null_checker(result_type2, "08call.nc", 106))->mHeap) {
                free_object(result_type2,((char*)(__right_value1=xsprintf("__result_obj__\%s",((char* )(__right_value0=int_to_string(000)))))),(_Bool)0,(_Bool)1,info,(_Bool)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            add_come_code(info,((char*)(__right_value1=xsprintf("return __result_obj__\%s;\n",((char* )(__right_value0=int_to_string(000)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, come_value_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_10=((struct sInfo* )come_null_checker(info, "08call.nc", 114))->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(((struct sFun* )come_null_checker(come_fun_10, "08call.nc", 117))->mBlock,info,((void*)0),(_Bool)0,(_Bool)0);
        free_right_value_objects(info);
        if(((struct sInfo* )come_null_checker(info, "08call.nc", 120))->block_level==1) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 121))->inhibits_output_code=(_Bool)1;
            if(((struct sInfo* )come_null_checker(info, "08call.nc", 123))->match_it_var) {
                for(o2_saved_11=(struct list$1sVar$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "08call.nc", 124))->match_it_var),it_12=list$1sVar$ph_begin(((struct list$1sVar$ph*)come_null_checker(o2_saved_11, "08call.nc", 124)));!list$1sVar$ph_end(((struct list$1sVar$ph*)come_null_checker(o2_saved_11, "08call.nc", 124)));it_12=list$1sVar$ph_next(((struct list$1sVar$ph*)come_null_checker(o2_saved_11, "08call.nc", 124)))){
                    free_object(((struct sVar* )come_null_checker(it_12, "08call.nc", 125))->mType,((struct sVar* )come_null_checker(it_12, "08call.nc", 125))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                }
                come_call_finalizer(list$1sVar$ph$p_finalize, o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __dec_obj38=((struct sInfo* )come_null_checker(info, "08call.nc", 127))->match_it_var,
                ((struct sInfo* )come_null_checker(info, "08call.nc", 127))->match_it_var=((void*)0);
                come_call_finalizer(list$1sVar$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(!gComeC&&!((struct sType* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 131))->come_fun, "08call.nc", 131))->mResultType, "08call.nc", 131))->mNorecord) {
            add_come_code(info,"neo_current_frame = fr.prev;\n");
        }
        if(!gComeC&&string_operator_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 135))->come_fun, "08call.nc", 135))->mName, "08call.nc", 135)),"main")) {
            free_objects(((struct sInfo* )come_null_checker(info, "08call.nc", 136))->gv_table,((void*)0),info,(_Bool)0);
            add_come_code(info,((char* )(__right_value0=xsprintf("come_heap_final();\n"))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        add_come_code(info,"return;\n");
    }
    ((struct sInfo* )come_null_checker(info, "08call.nc", 143))->last_statment_is_return=(_Bool)1;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname!=((void*)0)) {
        (((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname = come_decrement_ref_count(((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void sReturnNode_finalize(struct sReturnNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReturnNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 2))->sname = come_decrement_ref_count(((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 3))->value!=((void*)0)) {
        ((((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 3))->value) ? ((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 3))->value = come_decrement_ref_count(((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 3))->value, ((struct sNode*)((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 3))->value)->finalize, ((struct sNode*)((struct sReturnNode*)come_null_checker(self, "sReturnNode_finalize", 3))->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
        __dec_obj2=((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType!=((void*)0)) {
        __dec_obj3=((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes!=((void*)0)) {
        __dec_obj7=((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj8=((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum!=((void*)0)) {
        __dec_obj9=((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas!=((void*)0)) {
        __dec_obj10=((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 13))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName!=((void*)0)) {
        __dec_obj11=((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName, "sType_clone", 14, "char* "));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute!=((void*)0)) {
        __dec_obj12=((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute, "sType_clone", 15, "char* "));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute!=((void*)0)) {
        __dec_obj13=((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute, "sType_clone", 16, "char* "));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute!=((void*)0)) {
        __dec_obj14=((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute, "sType_clone", 17, "char* "));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute!=((void*)0)) {
        __dec_obj15=((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute, "sType_clone", 18, "char* "));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj16=((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 48))->mAnonymousName, "sType_clone", 48, "char* "));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 49))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName!=((void*)0)) {
        __dec_obj17=((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName, "sType_clone", 50, "char* "));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 51))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 52))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName!=((void*)0)) {
        __dec_obj18=((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName, "sType_clone", 53, "char* "));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 54))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 54))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 55))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 55))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum!=((void*)0)) {
        __dec_obj22=((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj23=((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic!=((void*)0)) {
        __dec_obj24=((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict!=((void*)0)) {
        __dec_obj25=((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj26=((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 65))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName!=((void*)0)) {
        __dec_obj27=((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName, "sType_clone", 66, "char* "));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj28=((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames!=((void*)0)) {
        __dec_obj32=((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType!=((void*)0)) {
        __dec_obj33=((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 73))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 73))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode!=((void*)0)) {
        __dec_obj34=((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum!=((void*)0)) {
        __dec_obj35=((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj5  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj6  ;
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
        __dec_obj4=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1048, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj5=((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1052))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_0;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1058, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj6=((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1062))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj20;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj21;
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
        __dec_obj19=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1048, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj20=((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1052))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_2;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1058, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj21=((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1062))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0) :0);
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
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj30  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj31  ;
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
        __dec_obj29=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1048, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj30=((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1052))->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_6;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1058, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj31=((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1062))->item=(char* )come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
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
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1sVar$ph*)come_null_checker(((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
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
    return self==((void*)0)||((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_next"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_9  ;
    if(self==((void*)0)||((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1sVar$ph*)come_null_checker(((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1sVar$ph*)come_null_checker(((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_9,0,sizeof(struct sVar* ));
    __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_finalize"; neo_current_frame = &fr;
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

struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_return_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sReturnNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 151, "struct sNode");
    _inf_obj_value1=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count(((struct sReturnNode* )come_null_checker(((struct sReturnNode* )(__right_value0=(struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), (void*)0, 151, "struct sReturnNode* "))), "08call.nc", 151))),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sReturnNode_finalize;
    _inf_value1->clone=(void*)sReturnNode_clone;
    _inf_value1->compile=(void*)sReturnNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sReturnNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sReturnNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
    result=(struct sReturnNode* )come_increment_ref_count((struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), (void*)0, 5, "struct sReturnNode* "));
    if(self!=((void*)0)) {
        ((struct sReturnNode* )come_null_checker(result, "sReturnNode_clone", 6))->sline=((struct sReturnNode*)come_null_checker(self, "sReturnNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sReturnNode*)come_null_checker(self, "sReturnNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj39=((struct sReturnNode* )come_null_checker(result, "sReturnNode_clone", 7))->sname,
        ((struct sReturnNode* )come_null_checker(result, "sReturnNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sReturnNode*)come_null_checker(self, "sReturnNode_clone", 7))->sname, "sReturnNode_clone", 7, "char* "));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sReturnNode* )come_null_checker(result, "sReturnNode_clone", 8))->sline_real=((struct sReturnNode*)come_null_checker(self, "sReturnNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sReturnNode*)come_null_checker(self, "sReturnNode_clone", 9))->value!=((void*)0)) {
        __dec_obj40=((struct sReturnNode* )come_null_checker(result, "sReturnNode_clone", 9))->value,
        ((struct sReturnNode* )come_null_checker(result, "sReturnNode_clone", 9))->value=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sReturnNode*)come_null_checker(self, "sReturnNode_clone", 9))->value));
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sReturnNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sCSourceNode* sCSourceNode_initialize(struct sCSourceNode* self, char*  contents  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj41  ;
    struct sCSourceNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCSourceNode*)come_increment_ref_count(((struct sCSourceNode*)come_null_checker(self, "08call.nc", 159))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj41=((struct sCSourceNode*)come_null_checker(self, "08call.nc", 161))->contents,
    ((struct sCSourceNode*)come_null_checker(self, "08call.nc", 161))->contents=(char* )come_increment_ref_count(contents);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sCSourceNode*)come_increment_ref_count(self);
    come_call_finalizer(sCSourceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sCSourceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sCSourceNode_kind(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCSourceNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sCSourceNode_compile(struct sCSourceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    add_come_last_code(info,"%s",((char* )(__right_value0=string_operator_load_range_element(((char* )come_null_checker(((char* )come_null_checker(((struct sCSourceNode*)come_null_checker(self, "08call.nc", 171))->contents, "08call.nc", 171)), "08call.nc", 171)),1,-2))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sCSourceNode_finalize(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_finalize", 3))->contents!=((void*)0)) {
        (((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_finalize", 3))->contents = come_decrement_ref_count(((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_finalize", 3))->contents, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char*  source  , _Bool volatile_, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj42  ;
    struct sInlineAssembler* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)come_null_checker(self, "08call.nc", 181))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj42=((struct sInlineAssembler*)come_null_checker(self, "08call.nc", 183))->source,
    ((struct sInlineAssembler*)come_null_checker(self, "08call.nc", 183))->source=(char* )come_increment_ref_count(source);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sInlineAssembler*)come_null_checker(self, "08call.nc", 184))->volatile_=volatile_;
    __result_obj__0 = (struct sInlineAssembler*)come_increment_ref_count(self);
    come_call_finalizer(sInlineAssembler_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInlineAssembler_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sInlineAssembler_kind(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInlineAssembler"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    source=(char* )come_increment_ref_count(((struct sInlineAssembler*)come_null_checker(self, "08call.nc", 194))->source);
    volatile_=((struct sInlineAssembler*)come_null_checker(self, "08call.nc", 195))->volatile_;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 198, "struct CVALUE* "))), "08call.nc", 198)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj43=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 200))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 200))->c_value=(char*)come_increment_ref_count(xsprintf(" __asm \%s \%s",((char* )(__right_value0=charp_to_string(((char*)come_null_checker(((volatile_)?("volatile"):("")), "08call.nc", 200))))),((char* )(__right_value1=string_to_string(((char* )come_null_checker(source, "08call.nc", 200)))))));
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    __dec_obj44=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 202))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 202))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 202, "struct sType* "))), "08call.nc", 202))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 203))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 205))->stack, "08call.nc", 205)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 207))->c_value);
    __result_obj__0 = (_Bool)1;
    (source = come_decrement_ref_count(source, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_finalize", 2))->sname!=((void*)0)) {
        (((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_finalize", 2))->sname = come_decrement_ref_count(((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_finalize", 3))->source!=((void*)0)) {
        (((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_finalize", 3))->source = come_decrement_ref_count(((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_finalize", 3))->source, (void*)0, (void*)0, 0, 0, (void*)0));
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
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj46  ;
    struct list_item$1CVALUE$ph* litem_14;
    struct CVALUE*  __dec_obj47  ;
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
        __dec_obj45=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1133, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj46=((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1137))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_13;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1143, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj47=((struct list_item$1CVALUE$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1147))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_14;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_14;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)come_null_checker(self, "08call.nc", 217))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLineNode_kind(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLineNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 227, "struct CVALUE* "))), "08call.nc", 227)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj48=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 229))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 229))->c_value=(char* )come_increment_ref_count(xsprintf("%d",((struct sInfo* )come_null_checker(info, "08call.nc", 229))->sline));
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj49=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 230))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 230))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 230, "struct sType* "))), "08call.nc", 230))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 231))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 233))->stack, "08call.nc", 233)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 235))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLineNode_finalize(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLineNode*)come_null_checker(self, "sLineNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sLineNode*)come_null_checker(self, "sLineNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLineNode*)come_null_checker(self, "sLineNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)come_null_checker(self, "08call.nc", 245))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sSNameNode_kind(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSNameNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 255, "struct CVALUE* "))), "08call.nc", 255)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj50=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 257))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 257))->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",((struct sInfo* )come_null_checker(info, "08call.nc", 257))->sname));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj51=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 258))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 258))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 258, "struct sType* "))), "08call.nc", 258))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 259))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 261))->stack, "08call.nc", 261)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 263))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSNameNode_finalize(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sSNameNode*)come_null_checker(self, "sSNameNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sSNameNode*)come_null_checker(self, "sSNameNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSNameNode*)come_null_checker(self, "sSNameNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)come_null_checker(self, "08call.nc", 273))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sFuncNode_kind(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFuncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 283, "struct CVALUE* "))), "08call.nc", 283)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj52=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 285))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 285))->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 285))->come_fun, "08call.nc", 285))->mName));
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj53=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 286))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 286))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 286, "struct sType* "))), "08call.nc", 286))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 288))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 290))->stack, "08call.nc", 290)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 292))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFuncNode_finalize(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sFuncNode*)come_null_checker(self, "sFuncNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sFuncNode*)come_null_checker(self, "sFuncNode_finalize", 2))->sname = come_decrement_ref_count(((struct sFuncNode*)come_null_checker(self, "sFuncNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)come_null_checker(self, "08call.nc", 302))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sCallerFuncNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerFuncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerFuncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sCallerFuncNode_kind(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerFuncNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 312, "struct CVALUE* "))), "08call.nc", 312)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sInfo* )come_null_checker(info, "08call.nc", 314))->caller_fun) {
        __dec_obj54=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 315))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 315))->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 315))->caller_fun, "08call.nc", 315))->mName));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj55=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 318))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 318))->c_value=(char* )come_increment_ref_count(xsprintf("\"\""));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj56=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 320))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 320))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 320, "struct sType* "))), "08call.nc", 320))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 322))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 324))->stack, "08call.nc", 324)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 326))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCallerFuncNode*)come_null_checker(self, "sCallerFuncNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sCallerFuncNode*)come_null_checker(self, "sCallerFuncNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCallerFuncNode*)come_null_checker(self, "sCallerFuncNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)come_null_checker(self, "08call.nc", 336))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sCallerLineNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerLineNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerLineNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 341, "struct CVALUE* "))), "08call.nc", 341)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj57=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 343))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 343))->c_value=(char* )come_increment_ref_count(xsprintf("%d",((struct sInfo* )come_null_checker(info, "08call.nc", 343))->caller_line));
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj58=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 344))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 344))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 344, "struct sType* "))), "08call.nc", 344))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 345))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 347))->stack, "08call.nc", 347)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 349))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerLineNode_kind(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerLineNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCallerLineNode*)come_null_checker(self, "sCallerLineNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sCallerLineNode*)come_null_checker(self, "sCallerLineNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCallerLineNode*)come_null_checker(self, "sCallerLineNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)come_null_checker(self, "08call.nc", 364))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sCallerSNameNode*)come_increment_ref_count(self);
    come_call_finalizer(sCallerSNameNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCallerSNameNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 369, "struct CVALUE* "))), "08call.nc", 369)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj59=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 371))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 371))->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",((struct sInfo* )come_null_checker(info, "08call.nc", 371))->caller_sname));
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj60=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 372))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 372))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 372, "struct sType* "))), "08call.nc", 372))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 373))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 375))->stack, "08call.nc", 375)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "08call.nc", 377))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  sCallerSNameNode_kind(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCallerSNameNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCallerSNameNode*)come_null_checker(self, "sCallerSNameNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sCallerSNameNode*)come_null_checker(self, "sCallerSNameNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCallerSNameNode*)come_null_checker(self, "sCallerSNameNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
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
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)come_null_checker(self, "08call.nc", 392))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj61=((struct sFunCallNode*)come_null_checker(self, "08call.nc", 394))->fun_name,
    ((struct sFunCallNode*)come_null_checker(self, "08call.nc", 394))->fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj67=((struct sFunCallNode*)come_null_checker(self, "08call.nc", 395))->params,
    ((struct sFunCallNode*)come_null_checker(self, "08call.nc", 395))->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj68=((struct sFunCallNode*)come_null_checker(self, "08call.nc", 396))->method_generics_types,
    ((struct sFunCallNode*)come_null_checker(self, "08call.nc", 396))->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj69=((struct sFunCallNode*)come_null_checker(self, "08call.nc", 397))->method_block,
    ((struct sFunCallNode*)come_null_checker(self, "08call.nc", 397))->method_block=(struct buffer* )come_increment_ref_count(method_block);
    come_call_finalizer(buffer_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sFunCallNode*)come_null_checker(self, "08call.nc", 398))->method_block_sline=method_block_sline;
    __result_obj__0 = (struct sFunCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sFunCallNode_kind(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFunCallNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_terminated"; neo_current_frame = &fr;
    if(((struct sFunCallNode*)come_null_checker(self, "08call.nc", 408))->method_block) {
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
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
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
    struct list$1CVALUE$ph* o2_saved_21;
    struct CVALUE*  it_23  ;
    struct CVALUE*  come_value_25  ;
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
    struct list$1CVALUE$ph* come_params_26;
    struct sFun*  fun_27  ;
    _Bool no_output_come_code;
    struct CVALUE*  method_block_node  ;
    struct sType*  method_block_lambda_type  ;
    struct sType*  method_block_result_type  ;
    struct sType*  generics_fun_method_block_lambda_type  ;
    struct sType*  generics_fun_method_block_result_type  ;
    int method_generics_num;
    int n;
    struct list$1sType$ph* o2_saved_33;
    struct sType*  it_35  ;
    int method_generics_num_37;
    struct list$1CVALUE$ph* come_params_38;
    int i_39;
    struct sType*  result_type_40  ;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_41;
    struct tuple2$2char$phsNode$ph* it_42;
    struct tuple2$2char$phsNode$ph* multiple_assign_var3
;    char*  label_43  =0;
    struct sNode* node_44=0;
    _Bool Value_45;
    struct CVALUE*  come_value_46  ;
    struct sType*  type__47  ;
    struct sType*  type2__48  ;
    struct sType*  type3_  ;
    struct sType*  __dec_obj77  ;
    int method_generics_num_51;
    int n_52;
    struct list$1sType$ph* o2_saved_53;
    struct sType*  it_54  ;
    int method_generics_num_55;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name_62  =0;
    struct sGenericsFun*  gfun_63  =0;
    char*  __dec_obj81  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5
;    char*  name_64  =0;
    struct sGenericsFun*  gfun_65  =0;
    char*  __dec_obj82  ;
    struct list$1CVALUE$ph* come_params_66;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_67;
    struct tuple2$2char$phsNode$ph* it_68;
    struct tuple2$2char$phsNode$ph* multiple_assign_var6
;    char*  label_69  =0;
    struct sNode* node_70=0;
    _Bool Value_71;
    struct CVALUE*  come_value_72  ;
    struct sType*  type__73  ;
    struct sType*  __dec_obj83  ;
    char*  type1  ;
    char*  type2  ;
    struct CVALUE*  come_value_74  ;
    char*  __dec_obj84  ;
    struct sType*  __dec_obj85  ;
    struct CVALUE*  come_value_75  ;
    char*  __dec_obj86  ;
    struct sType*  __dec_obj87  ;
    struct list$1CVALUE$ph* come_params_76;
    int i_77;
    struct sType*  result_type_78  ;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_79;
    struct tuple2$2char$phsNode$ph* it_80;
    struct tuple2$2char$phsNode$ph* multiple_assign_var7
;    char*  label_81  =0;
    struct sNode* node_82=0;
    _Bool Value_83;
    struct CVALUE*  come_value_84  ;
    struct sType*  type__85  ;
    struct sType*  __dec_obj88  ;
    struct sType*  __dec_obj89  ;
    struct buffer*  buf_86  ;
    int j_87;
    struct list$1CVALUE$ph* o2_saved_88;
    struct CVALUE*  it_89  ;
    struct CVALUE*  come_value_90  ;
    char*  __dec_obj90  ;
    struct sType*  __dec_obj91  ;
    struct list$1CVALUE$ph* come_params_91;
    int i_92;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_93;
    struct tuple2$2char$phsNode$ph* it_94;
    struct tuple2$2char$phsNode$ph* multiple_assign_var8
;    char*  label_95  =0;
    struct sNode* node_96=0;
    _Bool Value_97;
    struct CVALUE*  come_value_98  ;
    struct sType*  type__99  ;
    struct sType*  __dec_obj92  ;
    struct buffer*  buf_100  ;
    int j_101;
    struct list$1CVALUE$ph* o2_saved_102;
    struct CVALUE*  it_103  ;
    struct sType*  result_type_104  ;
    struct CVALUE*  come_value_105  ;
    char*  __dec_obj93  ;
    struct sType*  __dec_obj94  ;
    struct list$1CVALUE$ph* come_params_106;
    int i_107;
    struct sType*  result_type_108  ;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_109;
    struct tuple2$2char$phsNode$ph* it_110;
    struct tuple2$2char$phsNode$ph* multiple_assign_var9
;    char*  label_111  =0;
    struct sNode* node_112=0;
    _Bool Value_113;
    struct CVALUE*  come_value_114  ;
    struct sType*  type__115  ;
    struct sType*  __dec_obj95  ;
    struct sType*  __dec_obj96  ;
    struct buffer*  buf_116  ;
    int j_117;
    struct list$1CVALUE$ph* o2_saved_118;
    struct CVALUE*  it_119  ;
    struct CVALUE*  come_value_120  ;
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
    int i_121;
    char*  new_fun_name  ;
    char*  __dec_obj107  ;
    char*  new_fun_name_122  ;
    _Bool _conditional_value_X2;
    char*  __dec_obj108  ;
    int i_123;
    char*  new_fun_name_124  ;
    _Bool _conditional_value_X3;
    char*  __dec_obj109  ;
    struct sFun*  fun_125  ;
    struct list$1CVALUE$ph* come_params_126;
    int i_127;
    struct sType*  result_type_128  ;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_129;
    struct tuple2$2char$phsNode$ph* it_130;
    struct tuple2$2char$phsNode$ph* multiple_assign_var10
;    char*  label_131  =0;
    struct sNode* node_132=0;
    _Bool Value_133;
    struct CVALUE*  come_value_134  ;
    struct sType*  type__135  ;
    struct sType*  __dec_obj110  ;
    struct sType*  __dec_obj111  ;
    struct buffer*  buf_136  ;
    int j_137;
    struct list$1CVALUE$ph* o2_saved_138;
    struct CVALUE*  it_139  ;
    struct CVALUE*  come_value_140  ;
    char*  __dec_obj112  ;
    struct sType*  __dec_obj113  ;
    struct sType*  result_type_141  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* o2_saved_142;
    struct sType*  it_143  ;
    struct sType*  it2_  ;
    struct sType*  it2  ;
    struct sType*  result_type_  ;
    struct sType*  __dec_obj114  ;
    struct list$1CVALUE$ph* come_params_144;
    int i_145;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_146;
    struct tuple2$2char$phsNode$ph* it_147;
    struct tuple2$2char$phsNode$ph* multiple_assign_var11
;    char*  label_148  =0;
    struct sNode* node_149=0;
    _Bool Value_150;
    struct CVALUE*  come_value_151  ;
    struct sType*  type__152  ;
    struct sType*  __dec_obj115  ;
    int n_153;
    struct list$1char$ph* o2_saved_154;
    char*  it_156  ;
    int i_159;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_160;
    struct tuple2$2char$phsNode$ph* it_161;
    struct tuple2$2char$phsNode$ph* multiple_assign_var12
;    char*  label_162  =0;
    struct sNode* node_163=0;
    _Bool Value_164;
    struct CVALUE*  come_value_165  ;
    struct sType*  type__166  ;
    struct sType*  __dec_obj117  ;
    _Bool Value_167;
    struct CVALUE*  come_value_168  ;
    struct sType*  type__169  ;
    struct sType*  __dec_obj118  ;
    _Bool _conditional_value_X4;
    char*  default_param  ;
    char* param_name;
    struct buffer*  source  ;
    char* p_172;
    char* head;
    int sline;
    struct buffer*  __dec_obj119  ;
    _Bool no_output_come_code_173;
    struct sNode* node_174;
    _Bool Value_175;
    struct buffer*  __dec_obj120  ;
    struct CVALUE*  come_value_176  ;
    struct sType*  type__177  ;
    struct sType*  __dec_obj121  ;
    struct sNode* _inf_value2;
    struct sCurrentNode* _inf_obj_value2;
    struct sNode* current_stack_frame_node;
    _Bool Value_178;
    struct CVALUE*  come_value_179  ;
    struct sType*  type__180  ;
    struct sType*  __dec_obj123  ;
    struct buffer*  method_block2  ;
    struct sType*  method_block_type  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    int num_method_block;
    struct sType*  result_type_181  ;
    struct sType*  result_type2_  ;
    struct sType*  result_type2  ;
    struct list$1sType$ph* param_types_182;
    struct list$1char$ph* param_names;
    struct buffer*  all_alhabet_sname  ;
    char* p_183;
    struct list$1sType$ph* o2_saved_184;
    struct sType*  it_185  ;
    struct sType*  param_type  ;
    char*  param_name_186  ;
    char*  param_name_187  ;
    struct sType*  param_type2_  ;
    struct sType*  param_type2  ;
    char*  param_name_188  ;
    struct sType*  param_type2__189  ;
    struct sType*  param_type2_190  ;
    struct buffer*  source3  ;
    char* p_191;
    char* head_192;
    int sline_193;
    struct buffer*  __dec_obj124  ;
    struct sNode* node_194;
    _Bool Value_195;
    char* method_block_name;
    struct CVALUE*  come_value2  ;
    struct sFun*  fun2  ;
    struct sType*  method_block_type2  ;
    char*  __dec_obj125  ;
    struct sType*  __dec_obj126  ;
    struct buffer*  __dec_obj127  ;
    struct buffer*  buf_196  ;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    char*  __dec_obj130  ;
    int j_197;
    struct list$1CVALUE$ph* o2_saved_198;
    struct CVALUE*  it_199  ;
    struct CVALUE*  come_value_200  ;
    char*  __dec_obj131  ;
    struct sType*  __dec_obj132  ;
    memset(&type__99, 0, sizeof(type__99));
    memset(&t, 0, sizeof(t));
    memset(&i_121, 0, sizeof(i_121));
    fun_name=(char* )come_increment_ref_count(((struct sFunCallNode*)come_null_checker(self, "08call.nc", 418))->fun_name);
    params=((struct sFunCallNode*)come_null_checker(self, "08call.nc", 419))->params;
    method_block=((struct sFunCallNode*)come_null_checker(self, "08call.nc", 420))->method_block;
    method_block_sline=((struct sFunCallNode*)come_null_checker(self, "08call.nc", 421))->method_block_sline;
    var_=get_variable_from_table(((struct sInfo* )come_null_checker(info, "08call.nc", 423))->lv_table,fun_name);
    if(var_==((void*)0)) {
        var_=get_variable_from_table(((struct sInfo* )come_null_checker(info, "08call.nc", 426))->gv_table,fun_name);
    }
    if(var_) {
        lambda_type=((struct sVar* )come_null_checker(var_, "08call.nc", 431))->mType;
        if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 433))->mClass, "08call.nc", 433))->mName, "08call.nc", 433)),"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name);
            __result_obj__0 = (_Bool)1;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(lambda_type, "08call.nc", 438))->mResultType));
        if(result_type) {
            ((struct sType* )come_null_checker(result_type, "08call.nc", 440))->mStatic=(_Bool)0;
        }
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 443, "struct list$1CVALUE$ph*"))), "08call.nc", 443)))));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 445))->mParamTypes, "08call.nc", 445)))!=list$1tuple2$2char$phsNode$ph$ph_length(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 445)))&&!((struct sType* )come_null_checker(lambda_type, "08call.nc", 445))->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 446))->mParamTypes, "08call.nc", 446))),list$1tuple2$2char$phsNode$ph$ph_length(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 446))));
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        i=0;
        for(o2_saved=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "08call.nc", 451)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "08call.nc", 451)));it=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "08call.nc", 451)))){
            multiple_assign_var1=it;
            label=(char* )come_increment_ref_count(multiple_assign_var1->v1);
            node=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value=node_compile(node,info);
            if(!Value) {
                __result_obj__0 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type_=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "08call.nc", 460))->type));
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type_,((struct sInfo* )come_null_checker(info, "08call.nc", 461))->generics_type,info));
            __dec_obj70=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 462))->type,
            ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 462))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(({(_conditional_value_X0=(((struct sType* )come_null_checker(lambda_type, "08call.nc", 464))->mVarArgs&&((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 464))->mParamTypes, "08call.nc", 464)), "08call.nc", 464)),i)))==((void*)0)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            }
            else {
                check_assign_type(((char*)(__right_value2=xsprintf("\%s calling param #\%s",((char* )(__right_value0=string_to_string(((char* )come_null_checker(fun_name, "08call.nc", 467))))),((char* )(__right_value1=int_to_string(i)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 467))->mParamTypes, "08call.nc", 467)), "08call.nc", 467)),i))),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 467))->type,come_value,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(({(_conditional_value_X1=(((struct sType* )come_null_checker(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 469))->mParamTypes, "08call.nc", 469)), "08call.nc", 469)),i))), "08call.nc", 469))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "08call.nc", 469))->type, "08call.nc", 469))->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 470))->mParamTypes, "08call.nc", 470)), "08call.nc", 470)),i))),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 470))->type,come_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 474)),(struct CVALUE* )come_increment_ref_count(come_value));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 480, "struct buffer* "))), "08call.nc", 480)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 482)),((struct sVar* )come_null_checker(var_, "08call.nc", 482))->mCValueName);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 483)),"(");
        j=0;
        for(o2_saved_21=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_23=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_21, "08call.nc", 486)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_21, "08call.nc", 486)));it_23=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_21, "08call.nc", 486)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 487)),((struct CVALUE* )come_null_checker(it_23, "08call.nc", 487))->c_value);
            if(j!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 489)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 490)),",");
            }
            j++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 495)),")");
        come_value_25=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 497, "struct CVALUE* "))), "08call.nc", 497)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj71=((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 498))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 498))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 498))));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj72=((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 499))->type,
        ((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 499))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 500))->type) {
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 501))->type, "08call.nc", 501))->mStatic=(_Bool)0;
        }
        ((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 503))->var=((void*)0);
        if(((struct sType* )come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 505))->mResultType, "08call.nc", 505))->mHeap) {
            append_object_to_right_values(come_value_25,((struct sType* )come_null_checker(lambda_type, "08call.nc", 506))->mResultType,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_25, "08call.nc", 509))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 511))->stack, "08call.nc", 511)),(struct CVALUE* )come_increment_ref_count(come_value_25));
        ((struct sInfo* )come_null_checker(info, "08call.nc", 513))->calling_fun=((void*)0);
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    generics_fun=((struct sGenericsFun* )(__right_value1=map$2char$phsGenericsFun$ph_at(((struct map$2char$phsGenericsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 517))->generics_funcs, "08call.nc", 517)),((char* )(__right_value0=__builtin_string(fun_name))),((void*)0),(_Bool)0)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    method_generics=(_Bool)0;
    if(generics_fun) {
        method_generics=list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sGenericsFun* )come_null_checker(generics_fun, "08call.nc", 520))->mMethodGenericsTypeNames, "08call.nc", 520)))>0;
    }
    if((((struct sFunCallNode*)come_null_checker(self, "08call.nc", 522))->method_generics_types&&list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFunCallNode*)come_null_checker(self, "08call.nc", 522))->method_generics_types, "08call.nc", 522)))>0)||method_generics) {
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFunCallNode*)come_null_checker(self, "08call.nc", 523))->method_generics_types, "08call.nc", 523)))==0) {
            method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 524, "struct list$1sType$ph*"))), "08call.nc", 524)))));
            come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name),method_generics_types,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var2->v1);
            gfun=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            generics_fun_name=(char* )come_increment_ref_count(name);
            fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 528))->funcs, "08call.nc", 528)),generics_fun_name,((void*)0),(_Bool)0)));
            if(method_block) {
                come_params_26=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 531, "struct list$1CVALUE$ph*"))), "08call.nc", 531)))));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                fun_27=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 533))->funcs, "08call.nc", 533)),generics_fun_name,((void*)0),(_Bool)0)));
                no_output_come_code=((struct sInfo* )come_null_checker(info, "08call.nc", 535))->no_output_come_code;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 536))->no_output_come_code=(_Bool)1;
                if(!compile_method_block(method_block,come_params_26,fun_27,fun_name,method_block_sline,info,(_Bool)1)) {
                    __result_obj__0 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct sInfo* )come_null_checker(info, "08call.nc", 540))->no_output_come_code=no_output_come_code;
                method_block_node=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_26, "08call.nc", 541)), "08call.nc", 541)),-1)));
                method_block_lambda_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(method_block_node, "08call.nc", 543))->type));
                method_block_result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sInfo* )come_null_checker(info, "08call.nc", 544))->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sGenericsFun* )come_null_checker(generics_fun, "08call.nc", 546))->mParamTypes, "08call.nc", 546)), "08call.nc", 546)),-1)));
                generics_fun_method_block_result_type=((struct sType* )come_null_checker(generics_fun_method_block_lambda_type, "08call.nc", 547))->mResultType;
                if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(generics_fun_method_block_result_type, "08call.nc", 549))->mClass, "08call.nc", 549))->mMethodGenerics) {
                    method_generics_num=((struct sClass* )come_null_checker(((struct sType* )come_null_checker(generics_fun_method_block_result_type, "08call.nc", 550))->mClass, "08call.nc", 550))->mMethodGenericsNum;
                    list$1sType$ph_operator_store_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(method_generics_types, "08call.nc", 551)), "08call.nc", 551)),method_generics_num,(struct sType* )come_increment_ref_count(sType_clone(method_block_result_type)));
                }
                n=0;
                for(o2_saved_33=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(generics_fun_method_block_lambda_type, "08call.nc", 554))->mParamTypes),it_35=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_33, "08call.nc", 554)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_33, "08call.nc", 554)));it_35=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_33, "08call.nc", 554)))){
                    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(it_35, "08call.nc", 555))->mClass, "08call.nc", 555))->mMethodGenerics) {
                        method_generics_num_37=((struct sClass* )come_null_checker(((struct sType* )come_null_checker(it_35, "08call.nc", 556))->mClass, "08call.nc", 556))->mMethodGenericsNum;
                        list$1sType$ph_operator_store_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(method_generics_types, "08call.nc", 557)), "08call.nc", 557)),method_generics_num_37,(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value2=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(method_block_lambda_type, "08call.nc", 557))->mParamTypes, "08call.nc", 557)), "08call.nc", 557)),n))))));
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                    n++;
                }
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_params_38=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 563, "struct list$1CVALUE$ph*"))), "08call.nc", 563)))));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            i_39=0;
            result_type_40=((void*)0);
            for(o2_saved_41=params,it_42=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_41, "08call.nc", 567)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_41, "08call.nc", 567)));it_42=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_41, "08call.nc", 567)))){
                multiple_assign_var3=it_42;
                label_43=(char* )come_increment_ref_count(multiple_assign_var3->v1);
                node_44=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_45=node_compile(node_44,info);
                if(!Value_45) {
                    __result_obj__0 = (_Bool)0;
                    (label_43 = come_decrement_ref_count(label_43, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                come_value_46=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                type__47=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value_46, "08call.nc", 576))->type));
                type2__48=(struct sType* )come_increment_ref_count(solve_generics(type__47,((struct sInfo* )come_null_checker(info, "08call.nc", 577))->generics_type,info));
                type3_=(struct sType* )come_increment_ref_count(solve_method_generics(type2__48,info));
                __dec_obj77=((struct CVALUE* )come_null_checker(come_value_46, "08call.nc", 579))->type,
                ((struct CVALUE* )come_null_checker(come_value_46, "08call.nc", 579))->type=(struct sType* )come_increment_ref_count(type3_);
                come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params_38, "08call.nc", 581)),(struct CVALUE* )come_increment_ref_count(come_value_46));
                (label_43 = come_decrement_ref_count(label_43, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_44) ? node_44 = come_decrement_ref_count(node_44, ((struct sNode*)node_44)->finalize, ((struct sNode*)node_44)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type__47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2__48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sGenericsFun* )come_null_checker(generics_fun, "08call.nc", 584))->mResultType, "08call.nc", 584))->mClass, "08call.nc", 584))->mMethodGenerics) {
                method_generics_num_51=((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sGenericsFun* )come_null_checker(generics_fun, "08call.nc", 585))->mResultType, "08call.nc", 585))->mClass, "08call.nc", 585))->mMethodGenericsNum;
                if(((struct sInfo* )come_null_checker(info, "08call.nc", 587))->function_result_type) {
                    list$1sType$ph_operator_store_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(method_generics_types, "08call.nc", 588)), "08call.nc", 588)),method_generics_num_51,(struct sType* )come_increment_ref_count(sType_clone(((struct sInfo* )come_null_checker(info, "08call.nc", 588))->function_result_type)));
                }
            }
            n_52=0;
            for(o2_saved_53=(struct list$1sType$ph*)come_increment_ref_count(((struct sGenericsFun* )come_null_checker(generics_fun, "08call.nc", 592))->mParamTypes),it_54=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_53, "08call.nc", 592)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_53, "08call.nc", 592)));it_54=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_53, "08call.nc", 592)))){
                if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(it_54, "08call.nc", 593))->mClass, "08call.nc", 593))->mMethodGenerics) {
                    method_generics_num_55=((struct sClass* )come_null_checker(((struct sType* )come_null_checker(it_54, "08call.nc", 594))->mClass, "08call.nc", 594))->mMethodGenericsNum;
                    if(n_52<list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_38, "08call.nc", 595)))) {
                        list$1sType$ph_operator_store_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(method_generics_types, "08call.nc", 596)), "08call.nc", 596)),method_generics_num_55,(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value2=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_38, "08call.nc", 596)), "08call.nc", 596)),n_52))), "08call.nc", 596))->type)));
                        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    }
                }
                n_52++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_53, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            map$2char$phsFun$ph_remove(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 602))->funcs, "08call.nc", 602)),(char* )come_increment_ref_count(generics_fun_name),(_Bool)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name),method_generics_types,info)));
            name_62=(char* )come_increment_ref_count(multiple_assign_var4->v1);
            gfun_63=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj81=fun_name,
            fun_name=(char* )come_increment_ref_count(name_62);
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_62 = come_decrement_ref_count(name_62, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name),((struct sFunCallNode*)come_null_checker(self, "08call.nc", 608))->method_generics_types,info)));
            name_64=(char* )come_increment_ref_count(multiple_assign_var5->v1);
            gfun_65=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj82=fun_name,
            fun_name=(char* )come_increment_ref_count(name_64);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
            (name_64 = come_decrement_ref_count(name_64, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 615)),"__builtin_types_compatible_p")) {
        if(list$1tuple2$2char$phsNode$ph$ph_length(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 616)))!=2) {
            err_msg(info,"__builtin_types_compatible_p params error");
            __result_obj__0 = (_Bool)0;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_params_66=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 621, "struct list$1CVALUE$ph*"))), "08call.nc", 621)))));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        for(o2_saved_67=params,it_68=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_67, "08call.nc", 622)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_67, "08call.nc", 622)));it_68=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_67, "08call.nc", 622)))){
            multiple_assign_var6=it_68;
            label_69=(char* )come_increment_ref_count(multiple_assign_var6->v1);
            node_70=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_71=node_compile(node_70,info);
            if(!Value_71) {
                __result_obj__0 = (_Bool)0;
                (label_69 = come_decrement_ref_count(label_69, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_70) ? node_70 = come_decrement_ref_count(node_70, ((struct sNode*)node_70)->finalize, ((struct sNode*)node_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_72=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type__73=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_72, "08call.nc", 631))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 631))->generics_type,info));
            __dec_obj83=((struct CVALUE* )come_null_checker(come_value_72, "08call.nc", 632))->type,
            ((struct CVALUE* )come_null_checker(come_value_72, "08call.nc", 632))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__73,info));
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params_66, "08call.nc", 634)),(struct CVALUE* )come_increment_ref_count(come_value_72));
            (label_69 = come_decrement_ref_count(label_69, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_70) ? node_70 = come_decrement_ref_count(node_70, ((struct sNode*)node_70)->finalize, ((struct sNode*)node_70)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__73, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        type1=(char* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_66, "08call.nc", 637)), "08call.nc", 637)),0))), "08call.nc", 637))->c_value);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        type2=(char* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_66, "08call.nc", 638)), "08call.nc", 638)),1))), "08call.nc", 638))->c_value);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(type1, "08call.nc", 640)),type2)) {
            come_value_74=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 641, "struct CVALUE* "))), "08call.nc", 641)))));
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj84=((struct CVALUE* )come_null_checker(come_value_74, "08call.nc", 643))->c_value,
            ((struct CVALUE* )come_null_checker(come_value_74, "08call.nc", 643))->c_value=(char*)come_increment_ref_count(xsprintf("1"));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj85=((struct CVALUE* )come_null_checker(come_value_74, "08call.nc", 644))->type,
            ((struct CVALUE* )come_null_checker(come_value_74, "08call.nc", 644))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 644, "struct sType* "))), "08call.nc", 644))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct CVALUE* )come_null_checker(come_value_74, "08call.nc", 645))->var=((void*)0);
            add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_74, "08call.nc", 647))->c_value);
            list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 649))->stack, "08call.nc", 649)),(struct CVALUE* )come_increment_ref_count(come_value_74));
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
            come_call_finalizer(CVALUE_finalize, come_value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_75=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 654, "struct CVALUE* "))), "08call.nc", 654)))));
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj86=((struct CVALUE* )come_null_checker(come_value_75, "08call.nc", 656))->c_value,
            ((struct CVALUE* )come_null_checker(come_value_75, "08call.nc", 656))->c_value=(char*)come_increment_ref_count(xsprintf("0"));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj87=((struct CVALUE* )come_null_checker(come_value_75, "08call.nc", 657))->type,
            ((struct CVALUE* )come_null_checker(come_value_75, "08call.nc", 657))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 657, "struct sType* "))), "08call.nc", 657))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct CVALUE* )come_null_checker(come_value_75, "08call.nc", 658))->var=((void*)0);
            add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_75, "08call.nc", 660))->c_value);
            list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 662))->stack, "08call.nc", 662)),(struct CVALUE* )come_increment_ref_count(come_value_75));
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
            come_call_finalizer(CVALUE_finalize, come_value_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0));
        (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 667)),"__builtin_va_arg")) {
        come_params_76=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 668, "struct list$1CVALUE$ph*"))), "08call.nc", 668)))));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        i_77=0;
        result_type_78=((void*)0);
        for(o2_saved_79=params,it_80=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_79, "08call.nc", 672)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_79, "08call.nc", 672)));it_80=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_79, "08call.nc", 672)))){
            multiple_assign_var7=it_80;
            label_81=(char* )come_increment_ref_count(multiple_assign_var7->v1);
            node_82=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_83=node_compile(node_82,info);
            if(!Value_83) {
                __result_obj__0 = (_Bool)0;
                (label_81 = come_decrement_ref_count(label_81, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_82) ? node_82 = come_decrement_ref_count(node_82, ((struct sNode*)node_82)->finalize, ((struct sNode*)node_82)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_84=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type__85=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_84, "08call.nc", 681))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 681))->generics_type,info));
            __dec_obj88=((struct CVALUE* )come_null_checker(come_value_84, "08call.nc", 682))->type,
            ((struct CVALUE* )come_null_checker(come_value_84, "08call.nc", 682))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__85,info));
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params_76, "08call.nc", 684)),(struct CVALUE* )come_increment_ref_count(come_value_84));
            __dec_obj89=result_type_78,
            result_type_78=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value_84, "08call.nc", 686))->type);
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (label_81 = come_decrement_ref_count(label_81, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_82) ? node_82 = come_decrement_ref_count(node_82, ((struct sNode*)node_82)->finalize, ((struct sNode*)node_82)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buf_86=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 689, "struct buffer* "))), "08call.nc", 689)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_86, "08call.nc", 691)),fun_name);
        buffer_append_str(((struct buffer* )come_null_checker(buf_86, "08call.nc", 692)),"(");
        j_87=0;
        for(o2_saved_88=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_76),it_89=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_88, "08call.nc", 695)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_88, "08call.nc", 695)));it_89=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_88, "08call.nc", 695)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf_86, "08call.nc", 696)),((struct CVALUE* )come_null_checker(it_89, "08call.nc", 696))->c_value);
            if(j_87!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_76, "08call.nc", 698)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf_86, "08call.nc", 699)),",");
            }
            j_87++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_86, "08call.nc", 704)),")");
        come_value_90=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 706, "struct CVALUE* "))), "08call.nc", 706)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj90=((struct CVALUE* )come_null_checker(come_value_90, "08call.nc", 707))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_90, "08call.nc", 707))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf_86, "08call.nc", 707))));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj91=((struct CVALUE* )come_null_checker(come_value_90, "08call.nc", 708))->type,
        ((struct CVALUE* )come_null_checker(come_value_90, "08call.nc", 708))->type=(struct sType* )come_increment_ref_count(result_type_78);
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value_90, "08call.nc", 709))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_90, "08call.nc", 711))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 713))->stack, "08call.nc", 713)),(struct CVALUE* )come_increment_ref_count(come_value_90));
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 717)),"__builtin_va_copy")) {
        come_params_91=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 718, "struct list$1CVALUE$ph*"))), "08call.nc", 718)))));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        i_92=0;
        for(o2_saved_93=params,it_94=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_93, "08call.nc", 721)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_93, "08call.nc", 721)));it_94=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_93, "08call.nc", 721)))){
            multiple_assign_var8=it_94;
            label_95=(char* )come_increment_ref_count(multiple_assign_var8->v1);
            node_96=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_97=node_compile(node_96,info);
            if(!Value_97) {
                __result_obj__0 = (_Bool)0;
                (label_95 = come_decrement_ref_count(label_95, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_98=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            ((struct sType* )(__right_value0=solve_generics(((struct CVALUE* )come_null_checker(come_value_98, "08call.nc", 730))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 730))->generics_type,info)));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj92=((struct CVALUE* )come_null_checker(come_value_98, "08call.nc", 731))->type,
            ((struct CVALUE* )come_null_checker(come_value_98, "08call.nc", 731))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__99,info));
            come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params_91, "08call.nc", 733)),(struct CVALUE* )come_increment_ref_count(come_value_98));
            (label_95 = come_decrement_ref_count(label_95, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buf_100=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 736, "struct buffer* "))), "08call.nc", 736)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_100, "08call.nc", 738)),fun_name);
        buffer_append_str(((struct buffer* )come_null_checker(buf_100, "08call.nc", 739)),"(");
        j_101=0;
        for(o2_saved_102=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_91),it_103=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_102, "08call.nc", 742)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_102, "08call.nc", 742)));it_103=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_102, "08call.nc", 742)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf_100, "08call.nc", 743)),((struct CVALUE* )come_null_checker(it_103, "08call.nc", 743))->c_value);
            if(j_101!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_91, "08call.nc", 745)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf_100, "08call.nc", 746)),",");
            }
            j_101++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_100, "08call.nc", 751)),")");
        result_type_104=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 753, "struct sType* "))), "08call.nc", 753))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_value_105=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 755, "struct CVALUE* "))), "08call.nc", 755)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj93=((struct CVALUE* )come_null_checker(come_value_105, "08call.nc", 756))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_105, "08call.nc", 756))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf_100, "08call.nc", 756))));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj94=((struct CVALUE* )come_null_checker(come_value_105, "08call.nc", 757))->type,
        ((struct CVALUE* )come_null_checker(come_value_105, "08call.nc", 757))->type=(struct sType* )come_increment_ref_count(result_type_104);
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value_105, "08call.nc", 758))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_105, "08call.nc", 760))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 762))->stack, "08call.nc", 762)),(struct CVALUE* )come_increment_ref_count(come_value_105));
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if((strlen(fun_name)>strlen("__c11_atomic_")&&memcmp(fun_name,"__c11_atomic_",strlen("__c11_atomic"))==0)||(strlen(fun_name)>strlen("__builtin_")&&memcmp(fun_name,"__builtin_",strlen("__builtin"))==0)) {
        come_params_106=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 768, "struct list$1CVALUE$ph*"))), "08call.nc", 768)))));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        i_107=0;
        result_type_108=((void*)0);
        for(o2_saved_109=params,it_110=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_109, "08call.nc", 772)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_109, "08call.nc", 772)));it_110=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_109, "08call.nc", 772)))){
            multiple_assign_var9=it_110;
            label_111=(char* )come_increment_ref_count(multiple_assign_var9->v1);
            node_112=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
            Value_113=node_compile(node_112,info);
            if(!Value_113) {
                __result_obj__0 = (_Bool)0;
                (label_111 = come_decrement_ref_count(label_111, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_112) ? node_112 = come_decrement_ref_count(node_112, ((struct sNode*)node_112)->finalize, ((struct sNode*)node_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_114=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type__115=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_114, "08call.nc", 781))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 781))->generics_type,info));
            __dec_obj95=((struct CVALUE* )come_null_checker(come_value_114, "08call.nc", 782))->type,
            ((struct CVALUE* )come_null_checker(come_value_114, "08call.nc", 782))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__115,info));
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params_106, "08call.nc", 784)),(struct CVALUE* )come_increment_ref_count(come_value_114));
            __dec_obj96=result_type_108,
            result_type_108=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value_114, "08call.nc", 786))->type);
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (label_111 = come_decrement_ref_count(label_111, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_112) ? node_112 = come_decrement_ref_count(node_112, ((struct sNode*)node_112)->finalize, ((struct sNode*)node_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buf_116=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 789, "struct buffer* "))), "08call.nc", 789)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_116, "08call.nc", 791)),fun_name);
        buffer_append_str(((struct buffer* )come_null_checker(buf_116, "08call.nc", 792)),"(");
        j_117=0;
        for(o2_saved_118=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_106),it_119=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_118, "08call.nc", 795)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_118, "08call.nc", 795)));it_119=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_118, "08call.nc", 795)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf_116, "08call.nc", 796)),((struct CVALUE* )come_null_checker(it_119, "08call.nc", 796))->c_value);
            if(j_117!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_106, "08call.nc", 798)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf_116, "08call.nc", 799)),",");
            }
            j_117++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_116, "08call.nc", 804)),")");
        come_value_120=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 806, "struct CVALUE* "))), "08call.nc", 806)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj97=((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 807))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 807))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf_116, "08call.nc", 807))));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
        atomic_builtin=strlen(fun_name)>strlen("__c11_atomic_")&&memcmp(fun_name,"__c11_atomic_",strlen("__c11_atomic_"))==0;
        if(atomic_builtin) {
            if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 814)),"__c11_atomic_thread_fence")||string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 815)),"__c11_atomic_signal_fence")||string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 816)),"__c11_atomic_store")||string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 817)),"__c11_atomic_store_explicit")||string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 817)),"__c11_atomic_init")) {
                __dec_obj98=((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 819))->type,
                ((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 819))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 819, "struct sType* "))), "08call.nc", 819))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            else if(({(_conditional_value_X0=(string_index(((char* )come_null_checker(((char* )(__right_value0=__builtin_string(fun_name))), "08call.nc", 821)),"compare_exchange",-1)>=0||string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 822)),"__c11_atomic_is_lock_free")));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X0;})) {
                __dec_obj99=((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 824))->type,
                ((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 824))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 824, "struct sType* "))), "08call.nc", 824))),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            else if(list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_106, "08call.nc", 826)))>0) {
                use_value_param=string_index(((char* )come_null_checker(((char* )(__right_value0=__builtin_string(fun_name))), "08call.nc", 828)),"fetch_",-1)>=0||(string_index(((char* )come_null_checker(((char* )(__right_value1=__builtin_string(fun_name))), "08call.nc", 829)),"atomic_exchange",-1)>=0&&string_index(((char* )come_null_checker(((char* )(__right_value2=__builtin_string(fun_name))), "08call.nc", 830)),"compare_exchange",-1)<0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                if(use_value_param&&list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_106, "08call.nc", 832)))>1) {
                    __dec_obj100=t,
                    t=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_106, "08call.nc", 833)), "08call.nc", 833)),1))), "08call.nc", 833))->type));
                    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                else {
                    __dec_obj101=t,
                    t=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_106, "08call.nc", 836)), "08call.nc", 836)),0))), "08call.nc", 836))->type));
                    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(((struct sType* )come_null_checker(t, "08call.nc", 838))->mPointerNum>0) {
                        ((struct sType* )come_null_checker(t, "08call.nc", 839))->mPointerNum--;
                    }
                    else if(((struct sType* )come_null_checker(t, "08call.nc", 841))->mArrayPointerNum>0) {
                        ((struct sType* )come_null_checker(t, "08call.nc", 842))->mArrayPointerNum--;
                        if(((struct sType* )come_null_checker(t, "08call.nc", 843))->mArrayPointerNum==0) {
                            ((struct sType* )come_null_checker(t, "08call.nc", 844))->mArrayPointerType=(_Bool)0;
                        }
                    }
                    else if(((struct sType* )come_null_checker(t, "08call.nc", 847))->mArrayPointerType) {
                        ((struct sType* )come_null_checker(t, "08call.nc", 848))->mArrayPointerType=(_Bool)0;
                    }
                }
                ((struct sType* )come_null_checker(t, "08call.nc", 852))->mAtomic=(_Bool)0;
                __dec_obj102=((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 853))->type,
                ((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 853))->type=(struct sType* )come_increment_ref_count(t);
                come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, t, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj103=((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 856))->type,
                ((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 856))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 856, "struct sType* "))), "08call.nc", 856))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        else {
            __dec_obj104=((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 860))->type,
            ((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 860))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 860, "struct sType* "))), "08call.nc", 860))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        ((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 862))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_120, "08call.nc", 864))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 866))->stack, "08call.nc", 866)),(struct CVALUE* )come_increment_ref_count(come_value_120));
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1106)),"string")) {
        __dec_obj105=fun_name,
        fun_name=(char* )come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1109)),"wstring")) {
        __dec_obj106=fun_name,
        fun_name=(char* )come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1112)),"inherit")) {
        p=((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1113))->come_fun, "08call.nc", 1113))->mName;
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
        memcpy(real_fun_name,((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1132))->come_fun, "08call.nc", 1132))->mName,p-((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1132))->come_fun, "08call.nc", 1132))->mName);
        real_fun_name[p-((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1133))->come_fun, "08call.nc", 1133))->mName]=0;
        for(i_121=version-1;i_121>=1;i_121--){
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i_121));
            if(({(_conditional_value_X1=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1139))->funcs, "08call.nc", 1139)), "08call.nc", 1139)),new_fun_name)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
                __dec_obj107=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name));
                __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(i_121==0) {
            new_fun_name_122=(char* )come_increment_ref_count(xsprintf("%s",real_fun_name));
            if(({(_conditional_value_X2=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1148))->funcs, "08call.nc", 1148)), "08call.nc", 1148)),new_fun_name_122)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
                __dec_obj108=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_122));
                __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1152)),((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1152))->come_fun, "08call.nc", 1152))->mName)) {
                err_msg(info,"invalid inherit");
                __result_obj__0 = (_Bool)1;
                (new_fun_name_122 = come_decrement_ref_count(new_fun_name_122, (void*)0, (void*)0, 0, 0, (void*)0));
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (new_fun_name_122 = come_decrement_ref_count(new_fun_name_122, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        for(i_123=128;i_123>=1;i_123--){
            new_fun_name_124=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name,i_123));
            if(({(_conditional_value_X3=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1162))->funcs, "08call.nc", 1162)), "08call.nc", 1162)),new_fun_name_124)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X3;})) {
                __dec_obj109=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_124));
                __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
                (new_fun_name_124 = come_decrement_ref_count(new_fun_name_124, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (new_fun_name_124 = come_decrement_ref_count(new_fun_name_124, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    fun_125=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1170))->funcs, "08call.nc", 1170)),fun_name,((void*)0),(_Bool)0)));
    if(fun_125==((void*)0)) {
        printf("%s %d: function not found(%s) at function call(1), so no check types and no heap management\n",((struct sInfo* )come_null_checker(info, "08call.nc", 1173))->sname,((struct sInfo* )come_null_checker(info, "08call.nc", 1173))->sline,fun_name);
        come_params_126=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 1175, "struct list$1CVALUE$ph*"))), "08call.nc", 1175)))));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        i_127=0;
        result_type_128=((void*)0);
        for(o2_saved_129=params,it_130=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_129, "08call.nc", 1179)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_129, "08call.nc", 1179)));it_130=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_129, "08call.nc", 1179)))){
            multiple_assign_var10=it_130;
            label_131=(char* )come_increment_ref_count(multiple_assign_var10->v1);
            node_132=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            Value_133=node_compile(node_132,info);
            if(!Value_133) {
                __result_obj__0 = (_Bool)0;
                (label_131 = come_decrement_ref_count(label_131, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_132) ? node_132 = come_decrement_ref_count(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_134=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type__135=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_134, "08call.nc", 1188))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1188))->generics_type,info));
            __dec_obj110=((struct CVALUE* )come_null_checker(come_value_134, "08call.nc", 1189))->type,
            ((struct CVALUE* )come_null_checker(come_value_134, "08call.nc", 1189))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__135,info));
            come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params_126, "08call.nc", 1191)),(struct CVALUE* )come_increment_ref_count(come_value_134));
            __dec_obj111=result_type_128,
            result_type_128=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(come_value_134, "08call.nc", 1193))->type);
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            (label_131 = come_decrement_ref_count(label_131, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_132) ? node_132 = come_decrement_ref_count(node_132, ((struct sNode*)node_132)->finalize, ((struct sNode*)node_132)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buf_136=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1196, "struct buffer* "))), "08call.nc", 1196)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_136, "08call.nc", 1198)),fun_name);
        buffer_append_str(((struct buffer* )come_null_checker(buf_136, "08call.nc", 1199)),"(");
        j_137=0;
        for(o2_saved_138=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_126),it_139=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_138, "08call.nc", 1202)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_138, "08call.nc", 1202)));it_139=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_138, "08call.nc", 1202)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf_136, "08call.nc", 1203)),((struct CVALUE* )come_null_checker(it_139, "08call.nc", 1203))->c_value);
            if(j_137!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_126, "08call.nc", 1205)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf_136, "08call.nc", 1206)),",");
            }
            j_137++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_136, "08call.nc", 1211)),")");
        come_value_140=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1213, "struct CVALUE* "))), "08call.nc", 1213)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj112=((struct CVALUE* )come_null_checker(come_value_140, "08call.nc", 1214))->c_value,
        ((struct CVALUE* )come_null_checker(come_value_140, "08call.nc", 1214))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf_136, "08call.nc", 1214))));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj113=((struct CVALUE* )come_null_checker(come_value_140, "08call.nc", 1215))->type,
        ((struct CVALUE* )come_null_checker(come_value_140, "08call.nc", 1215))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1215, "struct sType* "))), "08call.nc", 1215))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value_140, "08call.nc", 1216))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_140, "08call.nc", 1218))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1220))->stack, "08call.nc", 1220)),(struct CVALUE* )come_increment_ref_count(come_value_140));
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    result_type_141=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1225))->mResultType));
    ((struct sType* )come_null_checker(result_type_141, "08call.nc", 1226))->mStatic=(_Bool)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1228, "struct list$1sType$ph*"))), "08call.nc", 1228)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved_142=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1229))->mParamTypes),it_143=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_142, "08call.nc", 1229)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_142, "08call.nc", 1229)));it_143=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_142, "08call.nc", 1229)))){
        it2_=(struct sType* )come_increment_ref_count(solve_generics(((struct sType* )(__right_value0=sType_clone(it_143))),((struct sInfo* )come_null_checker(info, "08call.nc", 1230))->generics_type,info));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        it2=(struct sType* )come_increment_ref_count(solve_method_generics(it2_,info));
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1232)),(struct sType* )come_increment_ref_count(sType_clone(it2)));
        come_call_finalizer(sType_finalize, it2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    result_type_=(struct sType* )come_increment_ref_count(solve_generics(result_type_141,((struct sInfo* )come_null_checker(info, "08call.nc", 1235))->generics_type,info));
    __dec_obj114=result_type_141,
    result_type_141=(struct sType* )come_increment_ref_count(solve_method_generics(result_type_,info));
    come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_params_144=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 1238, "struct list$1CVALUE$ph*"))), "08call.nc", 1238)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i_145=0;i_145<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1240))->mParamTypes, "08call.nc", 1240)))-(((method_block)?(2):(0)));i_145++){
        list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1241)),((void*)0));
    }
    for(o2_saved_146=params,it_147=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_146, "08call.nc", 1244)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_146, "08call.nc", 1244)));it_147=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_146, "08call.nc", 1244)))){
        multiple_assign_var11=it_147;
        label_148=(char* )come_increment_ref_count(multiple_assign_var11->v1);
        node_149=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        if(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1247))->mVarArgs||string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1247)),"__builtin_va_start")) {
        }
        else if(label_148) {
            Value_150=node_compile(node_149,info);
            if(!Value_150) {
                __result_obj__0 = (_Bool)0;
                (label_148 = come_decrement_ref_count(label_148, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_149) ? node_149 = come_decrement_ref_count(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_151=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type__152=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_151, "08call.nc", 1256))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1256))->generics_type,info));
            __dec_obj115=((struct CVALUE* )come_null_checker(come_value_151, "08call.nc", 1257))->type,
            ((struct CVALUE* )come_null_checker(come_value_151, "08call.nc", 1257))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__152,info));
            come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            n_153=0;
            for(o2_saved_154=(struct list$1char$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1260))->mParamNames),it_156=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved_154, "08call.nc", 1260)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved_154, "08call.nc", 1260)));it_156=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved_154, "08call.nc", 1260)))){
                if(string_operator_equals(((char* )come_null_checker(label_148, "08call.nc", 1261)),it_156)) {
                    break;
                }
                n_153++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1268)), "08call.nc", 1268)),n_153)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(((char* )come_null_checker(fun_name, "08call.nc", 1269))))),((char* )(__right_value1=int_to_string(n_153)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1269)), "08call.nc", 1269)),n_153))),((struct CVALUE* )come_null_checker(come_value_151, "08call.nc", 1269))->type,come_value_151,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            if(({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1271)), "08call.nc", 1271)),n_153)))&&((struct sType* )come_null_checker(((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1271)), "08call.nc", 1271)),n_153))), "08call.nc", 1271))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_151, "08call.nc", 1271))->type, "08call.nc", 1271))->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1272)), "08call.nc", 1272)),n_153))),((struct CVALUE* )come_null_checker(come_value_151, "08call.nc", 1272))->type,come_value_151,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            list$1CVALUE$ph_replace(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1275)),n_153,(struct CVALUE* )come_increment_ref_count(come_value_151));
            come_call_finalizer(CVALUE_finalize, come_value_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (label_148 = come_decrement_ref_count(label_148, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_149) ? node_149 = come_decrement_ref_count(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    i_159=0;
    for(o2_saved_160=params,it_161=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_160, "08call.nc", 1280)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_160, "08call.nc", 1280)));it_161=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_160, "08call.nc", 1280)))){
        multiple_assign_var12=it_161;
        label_162=(char* )come_increment_ref_count(multiple_assign_var12->v1);
        node_163=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
        if(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1283))->mVarArgs||string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1283)),"__builtin_va_start")) {
            Value_164=node_compile(node_163,info);
            if(!Value_164) {
                __result_obj__0 = (_Bool)0;
                (label_162 = come_decrement_ref_count(label_162, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_163) ? node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_165=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type__166=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_165, "08call.nc", 1290))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1290))->generics_type,info));
            __dec_obj117=((struct CVALUE* )come_null_checker(come_value_165, "08call.nc", 1291))->type,
            ((struct CVALUE* )come_null_checker(come_value_165, "08call.nc", 1291))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__166,info));
            come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                if(({(_conditional_value_X0=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1294)), "08call.nc", 1294)),i_159)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                    break;
                }
                else {
                    i_159++;
                }
            }
            if(({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1302)), "08call.nc", 1302)),i_159)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(((char* )come_null_checker(fun_name, "08call.nc", 1303))))),((char* )(__right_value1=int_to_string(i_159)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1303)), "08call.nc", 1303)),i_159))),((struct CVALUE* )come_null_checker(come_value_165, "08call.nc", 1303))->type,come_value_165,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            list$1CVALUE$ph_replace(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1306)),i_159,(struct CVALUE* )come_increment_ref_count(come_value_165));
            i_159++;
            come_call_finalizer(CVALUE_finalize, come_value_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(label_162) {
        }
        else {
            Value_167=node_compile(node_163,info);
            if(!Value_167) {
                __result_obj__0 = (_Bool)0;
                (label_162 = come_decrement_ref_count(label_162, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_163) ? node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_168=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            type__169=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_168, "08call.nc", 1318))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1318))->generics_type,info));
            __dec_obj118=((struct CVALUE* )come_null_checker(come_value_168, "08call.nc", 1319))->type,
            ((struct CVALUE* )come_null_checker(come_value_168, "08call.nc", 1319))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__169,info));
            come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                if(({(_conditional_value_X2=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1322)), "08call.nc", 1322)),i_159)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
                    break;
                }
                else {
                    i_159++;
                }
            }
            if(({(_conditional_value_X3=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1330)), "08call.nc", 1330)),i_159)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X3;})) {
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(((char* )come_null_checker(fun_name, "08call.nc", 1331))))),((char* )(__right_value1=int_to_string(i_159)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1331)), "08call.nc", 1331)),i_159))),((struct CVALUE* )come_null_checker(come_value_168, "08call.nc", 1331))->type,come_value_168,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            if(({(_conditional_value_X4=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1333)), "08call.nc", 1333)),i_159)))&&((struct sType* )come_null_checker(((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1333)), "08call.nc", 1333)),i_159))), "08call.nc", 1333))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_168, "08call.nc", 1333))->type, "08call.nc", 1333))->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X4;})) {
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1334)), "08call.nc", 1334)),i_159))),((struct CVALUE* )come_null_checker(come_value_168, "08call.nc", 1334))->type,come_value_168,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            list$1CVALUE$ph_replace(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1337)),i_159,(struct CVALUE* )come_increment_ref_count(come_value_168));
            i_159++;
            come_call_finalizer(CVALUE_finalize, come_value_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        (label_162 = come_decrement_ref_count(label_162, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_163) ? node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while((_Bool)1) {
        if(({(_conditional_value_X0=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1343)), "08call.nc", 1343)),i_159)))==((void*)0)));        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            break;
        }
        else {
            i_159++;
        }
    }
    if(list$1tuple2$2char$phsNode$ph$ph_length(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 1351)))<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1351))->mParamTypes, "08call.nc", 1351)))) {
        for(;i_159<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1353))->mParamTypes, "08call.nc", 1353)))-(((method_block)?(2):(0)));i_159++){
            default_param=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1354))->mParamDefaultParametors, "08call.nc", 1354)), "08call.nc", 1354)),i_159))), "08call.nc", 1354, "char* "));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            param_name=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1355))->mParamNames, "08call.nc", 1355)), "08call.nc", 1355)),i_159)));
            if(({(_conditional_value_X0=(default_param&&string_operator_not_equals(((char* )come_null_checker(default_param, "08call.nc", 1357)),"")&&((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1357)), "08call.nc", 1357)),i_159)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                source=(struct buffer* )come_increment_ref_count(((struct sInfo* )come_null_checker(info, "08call.nc", 1358))->source);
                p_172=((struct sInfo* )come_null_checker(info, "08call.nc", 1359))->p;
                head=((struct sInfo* )come_null_checker(info, "08call.nc", 1360))->head;
                sline=((struct sInfo* )come_null_checker(info, "08call.nc", 1361))->sline;
                __dec_obj119=((struct sInfo* )come_null_checker(info, "08call.nc", 1363))->source,
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1363))->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(((char* )come_null_checker(default_param, "08call.nc", 1363))));
                come_call_finalizer(buffer_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1364))->p=((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1364))->source, "08call.nc", 1364))->buf;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1365))->head=((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1365))->source, "08call.nc", 1365))->buf;
                no_output_come_code_173=((struct sInfo* )come_null_checker(info, "08call.nc", 1367))->no_output_come_code;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1368))->no_output_come_code=(_Bool)1;
                node_174=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                Value_175=node_compile(node_174,info);
                if(!Value_175) {
                    __result_obj__0 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((node_174) ? node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1376))->no_output_come_code=no_output_come_code_173;
                __dec_obj120=((struct sInfo* )come_null_checker(info, "08call.nc", 1378))->source,
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1378))->source=(struct buffer* )come_increment_ref_count(source);
                come_call_finalizer(buffer_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1379))->p=p_172;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1380))->head=head;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 1381))->sline=sline;
                come_value_176=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                type__177=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_176, "08call.nc", 1385))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1385))->generics_type,info));
                __dec_obj121=((struct CVALUE* )come_null_checker(come_value_176, "08call.nc", 1386))->type,
                ((struct CVALUE* )come_null_checker(come_value_176, "08call.nc", 1386))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__177,info));
                come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1388)), "08call.nc", 1388)),i_159)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
                    check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(((char* )come_null_checker(fun_name, "08call.nc", 1389))))),((char* )(__right_value1=int_to_string(i_159)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1389)), "08call.nc", 1389)),i_159))),((struct CVALUE* )come_null_checker(come_value_176, "08call.nc", 1389))->type,come_value_176,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(({(_conditional_value_X2=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1391)), "08call.nc", 1391)),i_159)))&&((struct sType* )come_null_checker(((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1391)), "08call.nc", 1391)),i_159))), "08call.nc", 1391))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_176, "08call.nc", 1391))->type, "08call.nc", 1391))->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(param_types, "08call.nc", 1392)), "08call.nc", 1392)),i_159))),((struct CVALUE* )come_null_checker(come_value_176, "08call.nc", 1392))->type,come_value_176,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                list$1CVALUE$ph_replace(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1394)),i_159,(struct CVALUE* )come_increment_ref_count(come_value_176));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node_174) ? node_174 = come_decrement_ref_count(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type__177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(({(_conditional_value_X3=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1397)), "08call.nc", 1397)),i_159)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X3;})) {
                    err_msg(info,"require parametor(%s)(1) %d",((struct sFun* )come_null_checker(fun_125, "08call.nc", 1398))->mName,i_159);
                    __result_obj__0 = (_Bool)1;
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1405))->mParamTypes, "08call.nc", 1405)))-(((method_block)?(2):(0)))!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1405)))&&!((struct sFun* )come_null_checker(fun_125, "08call.nc", 1405))->mVarArgs&&string_operator_not_equals(((char* )come_null_checker(fun_name, "08call.nc", 1405)),"__builtin_va_start")&&string_operator_not_equals(((char* )come_null_checker(fun_name, "08call.nc", 1405)),"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1407))->mParamTypes, "08call.nc", 1407))),list$1tuple2$2char$phsNode$ph$ph_length(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 1407))));
        __result_obj__0 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(method_block) {
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1412, "struct sNode");
        _inf_obj_value2=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count(((struct sCurrentNode* )come_null_checker(((struct sCurrentNode* )(__right_value0=(struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), (void*)0, 1412, "struct sCurrentNode* "))), "08call.nc", 1412))),info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sCurrentNode_finalize;
        _inf_value2->clone=(void*)sCurrentNode_clone;
        _inf_value2->compile=(void*)sCurrentNode_compile;
        _inf_value2->sline=(void*)sCurrentNode_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sCurrentNode_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sCurrentNode_kind;
        current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value2);
        come_call_finalizer(sCurrentNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        Value_178=node_compile(current_stack_frame_node,info);
        if(!Value_178) {
            __result_obj__0 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value_179=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        type__180=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_179, "08call.nc", 1419))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1419))->generics_type,info));
        __dec_obj123=((struct CVALUE* )come_null_checker(come_value_179, "08call.nc", 1420))->type,
        ((struct CVALUE* )come_null_checker(come_value_179, "08call.nc", 1420))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__180,info));
        come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1421)),(struct CVALUE* )come_increment_ref_count(come_value_179));
        method_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1423, "struct buffer* "))), "08call.nc", 1423)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        method_block_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1424))->mParamTypes, "08call.nc", 1424)), "08call.nc", 1424)),-1)))));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",((struct sInfo* )come_null_checker(info, "08call.nc", 1426))->current_stack_num));
        ((struct sType* )come_null_checker(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(method_block_type, "08call.nc", 1428))->mParamTypes, "08call.nc", 1428)), "08call.nc", 1428)),0))), "08call.nc", 1428))->mClass=((struct sClass* )(__right_value1=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1428))->classes, "08call.nc", 1428)), "08call.nc", 1428)),class_name)));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        current_stack_frame_struct=((struct sInfo* )come_null_checker(info, "08call.nc", 1429))->current_stack_frame_struct;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1430))->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1430))->classes, "08call.nc", 1430)), "08call.nc", 1430)),class_name)));
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1432))->num_method_block++;
        num_method_block=((struct sInfo* )come_null_checker(info, "08call.nc", 1434))->num_method_block;
        if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(method_block_type, "08call.nc", 1436))->mClass, "08call.nc", 1436))->mName, "08call.nc", 1436)),"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name);
            __result_obj__0 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        result_type_181=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(method_block_type, "08call.nc", 1441))->mResultType));
        ((struct sType* )come_null_checker(result_type_181, "08call.nc", 1442))->mStatic=(_Bool)0;
        result_type2_=(struct sType* )come_increment_ref_count(solve_generics(result_type_181,((struct sInfo* )come_null_checker(info, "08call.nc", 1443))->generics_type,info));
        result_type2=(struct sType* )come_increment_ref_count(solve_method_generics(result_type2_,info));
        param_types_182=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(method_block_type, "08call.nc", 1445))->mParamTypes));
        param_names=((struct sType* )come_null_checker(method_block_type, "08call.nc", 1446))->mParamNames;
        all_alhabet_sname=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1448, "struct buffer* "))), "08call.nc", 1448)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        {
            p_183=((struct sInfo* )come_null_checker(info, "08call.nc", 1450))->sname;
            while(*p_183) {
                if(xisalnum(*p_183)) {
                    buffer_append_char(((struct buffer* )come_null_checker(all_alhabet_sname, "08call.nc", 1453)),*p_183++);
                }
                else {
                    p_183++;
                }
            }
        }
        buffer_append_format(((struct buffer* )come_null_checker(method_block2, "08call.nc", 1461)),"%s fun_block%d_%s(",((char* )(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char* )(__right_value1=buffer_to_string(((struct buffer* )come_null_checker(all_alhabet_sname, "08call.nc", 1461))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        i_159=0;
        for(o2_saved_184=(struct list$1sType$ph*)come_increment_ref_count(param_types_182),it_185=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_184, "08call.nc", 1464)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_184, "08call.nc", 1464)));it_185=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_184, "08call.nc", 1464)))){
            param_type=(struct sType* )come_increment_ref_count(it_185);
            if(i_159==0) {
                param_name_186=(char* )come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(((struct buffer* )come_null_checker(method_block2, "08call.nc", 1470)),"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name_186,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_186 = come_decrement_ref_count(param_name_186, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(i_159==1) {
                param_name_187=(char* )come_increment_ref_count(xsprintf("it"));
                param_type2_=(struct sType* )come_increment_ref_count(solve_generics(param_type,((struct sInfo* )come_null_checker(info, "08call.nc", 1475))->generics_type,info));
                param_type2=(struct sType* )come_increment_ref_count(solve_method_generics(param_type2_,info));
                buffer_append_format(((struct buffer* )come_null_checker(method_block2, "08call.nc", 1478)),"%s",((char* )(__right_value0=make_come_define_var(param_type2,param_name_187,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_187 = come_decrement_ref_count(param_name_187, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_188=(char* )come_increment_ref_count(xsprintf("it%d",i_159));
                param_type2__189=(struct sType* )come_increment_ref_count(solve_generics(param_type,((struct sInfo* )come_null_checker(info, "08call.nc", 1483))->generics_type,info));
                param_type2_190=(struct sType* )come_increment_ref_count(solve_method_generics(param_type2__189,info));
                buffer_append_format(((struct buffer* )come_null_checker(method_block2, "08call.nc", 1486)),"%s",((char* )(__right_value0=make_come_define_var(param_type2_190,param_name_188,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (param_name_188 = come_decrement_ref_count(param_name_188, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2__189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, param_type2_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(i_159!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(param_types_182, "08call.nc", 1489)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(method_block2, "08call.nc", 1490)),",");
            }
            i_159++;
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(method_block2, "08call.nc", 1495)),")\n");
        buffer_append_str(((struct buffer* )come_null_checker(method_block2, "08call.nc", 1497)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(method_block, "08call.nc", 1497))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        source3=(struct buffer* )come_increment_ref_count(((struct sInfo* )come_null_checker(info, "08call.nc", 1499))->source);
        p_191=((struct sInfo* )come_null_checker(info, "08call.nc", 1500))->p;
        head_192=((struct sInfo* )come_null_checker(info, "08call.nc", 1501))->head;
        sline_193=((struct sInfo* )come_null_checker(info, "08call.nc", 1502))->sline;
        __dec_obj124=((struct sInfo* )come_null_checker(info, "08call.nc", 1504))->source,
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1504))->source=(struct buffer* )come_increment_ref_count(method_block2);
        come_call_finalizer(buffer_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1505))->p=((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1505))->source, "08call.nc", 1505))->buf;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1506))->head=((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1506))->source, "08call.nc", 1506))->buf;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1507))->sline=method_block_sline;
        node_194=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_195=node_compile(node_194,info);
        if(!Value_195) {
            __result_obj__0 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_194) ? node_194 = come_decrement_ref_count(node_194, ((struct sNode*)node_194)->finalize, ((struct sNode*)node_194)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        method_block_name=(char* )come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(all_alhabet_sname, "08call.nc", 1515)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1517, "struct CVALUE* "))), "08call.nc", 1517)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        fun2=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1519))->funcs, "08call.nc", 1519)),((char* )(__right_value0=__builtin_string(method_block_name))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(fun2==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name);
            __result_obj__0 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type__180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_194) ? node_194 = come_decrement_ref_count(node_194, ((struct sNode*)node_194)->finalize, ((struct sNode*)node_194)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        method_block_type2=((struct sFun* )come_null_checker(fun2, "08call.nc", 1526))->mLambdaType;
        __dec_obj125=((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1528))->c_value,
        ((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1528))->c_value=(char* )come_increment_ref_count(xsprintf("(void*)%s",method_block_name));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj126=((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1529))->type,
        ((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1529))->type=(struct sType* )come_increment_ref_count(sType_clone(method_block_type2));
        come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1530))->var=((void*)0);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1532)),(struct CVALUE* )come_increment_ref_count(come_value2));
        __dec_obj127=((struct sInfo* )come_null_checker(info, "08call.nc", 1534))->source,
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1534))->source=(struct buffer* )come_increment_ref_count(source3);
        come_call_finalizer(buffer_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1535))->p=p_191;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1536))->head=head_192;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1537))->sline=sline_193;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 1539))->current_stack_frame_struct=current_stack_frame_struct;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type__180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_194) ? node_194 = come_decrement_ref_count(node_194, ((struct sNode*)node_194)->finalize, ((struct sNode*)node_194)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buf_196=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1542, "struct buffer* "))), "08call.nc", 1542)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1544)),"__isoc23_strtoll")) {
        __dec_obj128=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoll"));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1547)),"__isoc23_strtoul")) {
        __dec_obj129=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoul"));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(string_operator_equals(((char* )come_null_checker(fun_name, "08call.nc", 1550)),"__isoc23_strtoull")) {
        __dec_obj130=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoull"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
    }
    buffer_append_str(((struct buffer* )come_null_checker(buf_196, "08call.nc", 1554)),fun_name);
    buffer_append_str(((struct buffer* )come_null_checker(buf_196, "08call.nc", 1555)),"(");
    j_197=0;
    for(o2_saved_198=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_144),it_199=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_198, "08call.nc", 1558)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_198, "08call.nc", 1558)));it_199=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_198, "08call.nc", 1558)))){
        buffer_append_str(((struct buffer* )come_null_checker(buf_196, "08call.nc", 1559)),((struct CVALUE* )come_null_checker(it_199, "08call.nc", 1559))->c_value);
        if(j_197!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_144, "08call.nc", 1561)))-1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf_196, "08call.nc", 1562)),",");
        }
        j_197++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf_196, "08call.nc", 1567)),")");
    come_value_200=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1569, "struct CVALUE* "))), "08call.nc", 1569)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj131=((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1570))->c_value,
    ((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1570))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf_196, "08call.nc", 1570))));
    __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj132=((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1571))->type,
    ((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1571))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type_141));
    come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1572))->type) {
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1573))->type, "08call.nc", 1573))->mStatic=(_Bool)0;
    }
    ((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1575))->var=((void*)0);
    if(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun_125, "08call.nc", 1577))->mResultType, "08call.nc", 1577))->mHeap) {
        append_object_to_right_values(come_value_200,result_type_141,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_200, "08call.nc", 1581))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1583))->stack, "08call.nc", 1583)),(struct CVALUE* )come_increment_ref_count(come_value_200));
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1585))->calling_fun=fun_125;
    __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct tuple2$2char$phsNode$ph* __dec_obj62;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_15;
    struct tuple2$2char$phsNode$ph* __dec_obj63;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_16;
    struct tuple2$2char$phsNode$ph* __dec_obj64;
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
        __dec_obj62=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_15=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1048, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj63=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1052))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_15;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_15;
    }
    else {
        litem_16=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1058, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj64=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1062))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_16;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_16;
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
    char*  __dec_obj65  ;
    struct sNode* __dec_obj66;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), (void*)0, 5, "struct tuple2$2char$phsNode$ph*"));
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 6))->v1!=((void*)0)) {
        __dec_obj65=((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 6))->v1,
        ((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 6))->v1=(char* )come_increment_ref_count((char* )come_memdup(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 6))->v1, "tuple2$2char$phsNode$ph_clone", 6, "char* "));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 7))->v2!=((void*)0)) {
        __dec_obj66=((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 7))->v2,
        ((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 7))->v2=(struct sNode*)come_increment_ref_count(sNode_clone(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 7))->v2));
        (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0) :0);
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

static void sFunCallNode_finalize(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 2))->sname = come_decrement_ref_count(((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 3))->fun_name!=((void*)0)) {
        (((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 3))->fun_name = come_decrement_ref_count(((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 3))->fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 4))->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, ((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 4))->params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 5))->method_generics_types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 5))->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 6))->method_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_finalize", 6))->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
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
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
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

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1276))->len;
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_17;
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
    memset(&result_17,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_17;
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
    struct tuple2$2char$phsNode$ph* result_18;
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
    memset(&result_18,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_18;
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
    struct sType*  default_value_19  ;
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
    memset(&default_value_19,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_19);
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
    struct sType*  default_value_20  ;
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
    memset(&default_value_20,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_20);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_22  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_22,0,sizeof(struct CVALUE* ));
    __result_obj__0 = result_22;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_24  ;
    if(self==((void*)0)||((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_24,0,sizeof(struct CVALUE* ));
    __result_obj__0 = result_24;
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
    return ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1276))->len;
    neo_current_frame = fr.prev;
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2191)))%((struct map$2char$phsGenericsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2191))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsGenericsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2195))->item_existance, "/usr/local/include/neo-c.h", 2195))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsGenericsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it], "/usr/local/include/neo-c.h", 2197)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsGenericsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it]==key)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(((struct sGenericsFun** )come_null_checker(((struct map$2char$phsGenericsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2199))->items, "/usr/local/include/neo-c.h", 2199))[it]);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsGenericsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2204))->size) {
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

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 2))->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 2))->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 3))->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 3))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 4))->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 4))->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 5))->mName!=((void*)0)) {
        (((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 5))->mName = come_decrement_ref_count(((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 5))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 6))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 6))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 7))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 7))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 8))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 8))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 9))->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 9))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 10))->mBlock!=((void*)0)) {
        (((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 10))->mBlock = come_decrement_ref_count(((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 10))->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 11))->mGenericsSName!=((void*)0)) {
        (((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 11))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun* )come_null_checker(self, "sGenericsFun_finalize", 11))->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
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
    return ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1276))->len;
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phsGenericsFun$p*)come_null_checker(self, "tuple2$2char$phsGenericsFun$p$p_finalize", 2))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsGenericsFun$p*)come_null_checker(self, "tuple2$2char$phsGenericsFun$p$p_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsGenericsFun$p*)come_null_checker(self, "tuple2$2char$phsGenericsFun$p$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
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

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_28  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_28,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_28);
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
    struct CVALUE*  default_value_29  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_29,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_29);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),position,(struct sType* )come_increment_ref_count(item));
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
    int i_32;
    struct sType*  __dec_obj76  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1530))->len;
    }
    if(position<0) {
        position=0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1536))->len==0||position>=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1536))->len) {
        len=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1537))->len;
        for(i=0;i<position-len;i++){
            memset(&default_value,0,sizeof(struct sType* ));
            list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1541)),default_value);
        }
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1543)),(struct sType* )come_increment_ref_count(item));
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1547))->head;
    i_32=0;
    while(it!=((void*)0)) {
        if(position==i_32) {
            __dec_obj76=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1551))->item,
            ((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1551))->item=(struct sType* )come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1554))->next;
        i_32++;
    }
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct list_item$1sType$ph* litem_30;
    struct sType*  __dec_obj74  ;
    struct list_item$1sType$ph* litem_31;
    struct sType*  __dec_obj75  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1122))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1123, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1125))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1126))->next=((void*)0);
        __dec_obj73=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_30=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1133, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj74=((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1137))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_30;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_30;
    }
    else {
        litem_31=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1143, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj75=((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1147))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_31;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_31;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_34  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1193))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1195))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1196))->it, "/usr/local/include/neo-c.h", 1196))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_34,0,sizeof(struct sType* ));
    __result_obj__0 = result_34;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1225))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_36  ;
    if(self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1207))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it=((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1213))->it, "/usr/local/include/neo-c.h", 1213))->next;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1215))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1216))->it, "/usr/local/include/neo-c.h", 1216))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_36,0,sizeof(struct sType* ));
    __result_obj__0 = result_36;
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
    struct list_item$1CVALUE$ph* litem_49;
    struct CVALUE*  __dec_obj79  ;
    struct list_item$1CVALUE$ph* litem_50;
    struct CVALUE*  __dec_obj80  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1038, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj78=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_49=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1048, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_49, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_49, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj79=((struct list_item$1CVALUE$ph*)come_null_checker(litem_49, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_49, "/usr/local/include/neo-c.h", 1052))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_49;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_49;
    }
    else {
        litem_50=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1058, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_50, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_50, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj80=((struct list_item$1CVALUE$ph*)come_null_checker(litem_50, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_50, "/usr/local/include/neo-c.h", 1062))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_50;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_50;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2225)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2225))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2229))->item_existance, "/usr/local/include/neo-c.h", 2229))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2231))->keys, "/usr/local/include/neo-c.h", 2231))[it], "/usr/local/include/neo-c.h", 2231)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2231))->keys, "/usr/local/include/neo-c.h", 2231))[it]==key)) {
                list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2233))->key_list, "/usr/local/include/neo-c.h", 2233)),((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2233))->keys, "/usr/local/include/neo-c.h", 2233))[it],(_Bool)0);
                ((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2235))->item_existance, "/usr/local/include/neo-c.h", 2235))[it]=(_Bool)0;
                if(1) {
                    (((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2237))->keys, "/usr/local/include/neo-c.h", 2237))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2237))->keys, "/usr/local/include/neo-c.h", 2237))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                }
                ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2239))->keys, "/usr/local/include/neo-c.h", 2239))[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sFun_finalize, ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2242))->items, "/usr/local/include/neo-c.h", 2242))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                memset(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2244))->items+it,0,sizeof(struct sFun* ));
                ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2246))->len--;
                break;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2252))->size) {
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
    struct list_item$1char$ph* it_56;
    int i_57;
    struct list_item$1char$ph* prev_it_58;
    struct list_item$1char$ph* it_59;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_60;
    struct list_item$1char$ph* prev_it_61;
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
        it_56=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1454))->head;
        i_57=0;
        while(it_56!=((void*)0)) {
            if(i_57==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1458))->tail=((struct list_item$1char$ph*)come_null_checker(it_56, "/usr/local/include/neo-c.h", 1458))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1459))->tail, "/usr/local/include/neo-c.h", 1459))->next=((void*)0);
            }
            if(i_57>=head) {
                prev_it_58=it_56;
                it_56=((struct list_item$1char$ph*)come_null_checker(it_56, "/usr/local/include/neo-c.h", 1465))->next;
                i_57++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1470))->len--;
            }
            else {
                it_56=((struct list_item$1char$ph*)come_null_checker(it_56, "/usr/local/include/neo-c.h", 1473))->next;
                i_57++;
            }
        }
    }
    else {
        it_59=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1479))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_60=0;
        while(it_59!=((void*)0)) {
            if(i_60==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_59, "/usr/local/include/neo-c.h", 1488))->prev;
            }
            if(i_60==tail) {
                tail_it=it_59;
            }
            if(i_60>=head&&i_60<tail) {
                prev_it_61=it_59;
                it_59=((struct list_item$1char$ph*)come_null_checker(it_59, "/usr/local/include/neo-c.h", 1498))->next;
                i_60++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1503))->len--;
            }
            else {
                it_59=((struct list_item$1char$ph*)come_null_checker(it_59, "/usr/local/include/neo-c.h", 1506))->next;
                i_60++;
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
    char*  result_155  ;
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
    memset(&result_155,0,sizeof(char* ));
    __result_obj__0 = result_155;
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
    char*  result_157  ;
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
    memset(&result_157,0,sizeof(char* ));
    __result_obj__0 = result_157;
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
    int i_158;
    struct CVALUE*  __dec_obj116  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1530))->len;
    }
    if(position<0) {
        position=0;
    }
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1536))->len==0||position>=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1536))->len) {
        len=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1537))->len;
        for(i=0;i<position-len;i++){
            memset(&default_value,0,sizeof(struct CVALUE* ));
            list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1541)),default_value);
        }
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1543)),(struct CVALUE* )come_increment_ref_count(item));
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1547))->head;
    i_158=0;
    while(it!=((void*)0)) {
        if(position==i_158) {
            __dec_obj116=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1551))->item,
            ((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1551))->item=(struct CVALUE* )come_increment_ref_count(item);
            come_call_finalizer(CVALUE_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1554))->next;
        i_158++;
    }
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    char*  default_value_170  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_170,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_170);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_171  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_171,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_171);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_clone"; neo_current_frame = &fr;
    struct sCurrentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCurrentNode*  result  ;
    char*  __dec_obj122  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), (void*)0, 5, "struct sCurrentNode* "));
    if(self!=((void*)0)) {
        ((struct sCurrentNode* )come_null_checker(result, "sCurrentNode_clone", 6))->sline=((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj122=((struct sCurrentNode* )come_null_checker(result, "sCurrentNode_clone", 7))->sname,
        ((struct sCurrentNode* )come_null_checker(result, "sCurrentNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_clone", 7))->sname, "sCurrentNode_clone", 7, "char* "));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCurrentNode* )come_null_checker(result, "sCurrentNode_clone", 8))->sline_real=((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer*  come_block  , int come_block_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __dec_obj133  ;
    struct sComeCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)come_null_checker(self, "08call.nc", 1594))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj133=((struct sComeCallNode*)come_null_checker(self, "08call.nc", 1596))->come_block,
    ((struct sComeCallNode*)come_null_checker(self, "08call.nc", 1596))->come_block=(struct buffer* )come_increment_ref_count(come_block);
    come_call_finalizer(buffer_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sComeCallNode*)come_null_checker(self, "08call.nc", 1597))->come_block_sline=come_block_sline;
    __result_obj__0 = (struct sComeCallNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sComeCallNode_kind(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeCallNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    char*  __dec_obj134  ;
    struct sType*  __dec_obj135  ;
    struct sNode* null_node;
    _Bool Value_201;
    struct CVALUE*  __dec_obj136  ;
    struct sType*  type__202  ;
    struct sType*  __dec_obj137  ;
    struct sNode* _inf_value3;
    struct sCurrentNode* _inf_obj_value3;
    struct sNode* current_stack_frame_node;
    _Bool Value_203;
    struct CVALUE*  current_stack_frame_value  ;
    char*  fun_name  ;
    struct buffer*  come_block2  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    struct buffer*  source3  ;
    char* p;
    char* head;
    int sline;
    struct buffer*  __dec_obj138  ;
    struct sNode* node;
    _Bool in_method_block;
    _Bool Value_204;
    struct buffer*  __dec_obj139  ;
    struct CVALUE*  fun_value  ;
    char*  __dec_obj140  ;
    struct sType*  __dec_obj141  ;
    struct buffer*  buf  ;
    char*  fun_name_205  ;
    int j;
    struct list$1CVALUE$ph* o2_saved;
    struct CVALUE*  it  ;
    struct CVALUE*  come_value_206  ;
    char*  __dec_obj142  ;
    struct sType*  type  ;
    struct sType*  __dec_obj143  ;
    come_block_sline=((struct sComeCallNode*)come_null_checker(self, "08call.nc", 1612))->come_block_sline;
    come_block=(struct buffer* )come_increment_ref_count(((struct sComeCallNode*)come_null_checker(self, "08call.nc", 1613))->come_block);
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 1615, "struct list$1CVALUE$ph*"))), "08call.nc", 1615)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    static int thread_num=0;
    thread_num++;
    var_name=(char* )come_increment_ref_count(xsprintf("__thread_info%d",thread_num));
    type_=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1622))->types, "08call.nc", 1622)),((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(type_==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    var_node=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name),((void*)0),((void*)0),type_,(_Bool)1,((void*)0),info));
    Value=node_compile(var_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    thread_var_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1637, "struct CVALUE* "))), "08call.nc", 1637)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj134=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1638))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1638))->c_value=(char* )come_increment_ref_count(xsprintf("&%s",((struct CVALUE* )come_null_checker(thread_var_value, "08call.nc", 1638))->c_value));
    __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj135=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1639))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1639))->type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(thread_var_value, "08call.nc", 1639))->type);
    come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1640))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 1642)),(struct CVALUE* )come_increment_ref_count(come_value));
    null_node=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_201=node_compile(null_node,info);
    if(!Value_201) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __dec_obj136=come_value,
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer(CVALUE_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type__202=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1652))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1652))->generics_type,info));
    __dec_obj137=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1653))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1653))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__202,info));
    come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 1655)),(struct CVALUE* )come_increment_ref_count(come_value));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1657, "struct sNode");
    _inf_obj_value3=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count(((struct sCurrentNode* )come_null_checker(((struct sCurrentNode* )(__right_value0=(struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), (void*)0, 1657, "struct sCurrentNode* "))), "08call.nc", 1657))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCurrentNode_finalize;
    _inf_value3->clone=(void*)sCurrentNode_clone;
    _inf_value3->compile=(void*)sCurrentNode_compile;
    _inf_value3->sline=(void*)sCurrentNode_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sCurrentNode_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer(sCurrentNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    Value_203=node_compile(current_stack_frame_node,info);
    if(!Value_203) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type__202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    current_stack_frame_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    fun_name=(char* )come_increment_ref_count(xsprintf("__thread_fun%d",thread_num));
    come_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1667, "struct buffer* "))), "08call.nc", 1667)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",((struct sInfo* )come_null_checker(info, "08call.nc", 1669))->current_stack_num));
    buffer_append_format(((struct buffer* )come_null_checker(come_block2, "08call.nc", 1671)),"void* %s(%s* parent)\n",fun_name,class_name);
    buffer_append_str(((struct buffer* )come_null_checker(come_block2, "08call.nc", 1673)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(come_block, "08call.nc", 1673))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    current_stack_frame_struct=((struct sInfo* )come_null_checker(info, "08call.nc", 1675))->current_stack_frame_struct;
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1676))->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1676))->classes, "08call.nc", 1676)), "08call.nc", 1676)),class_name)));
    source3=(struct buffer* )come_increment_ref_count(((struct sInfo* )come_null_checker(info, "08call.nc", 1678))->source);
    p=((struct sInfo* )come_null_checker(info, "08call.nc", 1679))->p;
    head=((struct sInfo* )come_null_checker(info, "08call.nc", 1680))->head;
    sline=((struct sInfo* )come_null_checker(info, "08call.nc", 1681))->sline;
    __dec_obj138=((struct sInfo* )come_null_checker(info, "08call.nc", 1683))->source,
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1683))->source=(struct buffer* )come_increment_ref_count(come_block2);
    come_call_finalizer(buffer_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1684))->p=((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1684))->source, "08call.nc", 1684))->buf;
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1685))->head=((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1685))->source, "08call.nc", 1685))->buf;
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1686))->sline=come_block_sline;
    node=(struct sNode*)come_increment_ref_count(parse_function(info));
    in_method_block=((struct sInfo* )come_null_checker(info, "08call.nc", 1690))->in_method_block;
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1691))->in_method_block=(_Bool)1;
    Value_204=node_compile(node,info);
    if(!Value_204) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type__202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1695))->in_method_block=in_method_block;
    __dec_obj139=((struct sInfo* )come_null_checker(info, "08call.nc", 1697))->source,
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1697))->source=(struct buffer* )come_increment_ref_count(source3);
    come_call_finalizer(buffer_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1698))->p=p;
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1699))->head=head;
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1700))->sline=sline;
    ((struct sInfo* )come_null_checker(info, "08call.nc", 1702))->current_stack_frame_struct=current_stack_frame_struct;
    fun_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1704, "struct CVALUE* "))), "08call.nc", 1704)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj140=((struct CVALUE* )come_null_checker(fun_value, "08call.nc", 1706))->c_value,
    ((struct CVALUE* )come_null_checker(fun_value, "08call.nc", 1706))->c_value=(char* )come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name));
    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj141=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1707))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1707))->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1708))->var=((void*)0);
    list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 1710)),(struct CVALUE* )come_increment_ref_count(fun_value));
    list$1CVALUE$ph_add(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 1712)),(struct CVALUE* )come_increment_ref_count(current_stack_frame_value));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1714, "struct buffer* "))), "08call.nc", 1714)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    fun_name_205=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1718)),"(");
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1719)),fun_name_205);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1720)),"(");
    j=0;
    for(o2_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved, "08call.nc", 1723)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved, "08call.nc", 1723)));it=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved, "08call.nc", 1723)))){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1724)),((struct CVALUE* )come_null_checker(it, "08call.nc", 1724))->c_value);
        if(j!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 1726)))-1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1727)),",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1732)),")");
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1733)),", ");
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1734)),((struct CVALUE* )come_null_checker(thread_var_value, "08call.nc", 1734))->c_value);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1735)),")");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_206=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1737, "struct CVALUE* "))), "08call.nc", 1737)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj142=((struct CVALUE* )come_null_checker(come_value_206, "08call.nc", 1738))->c_value,
    ((struct CVALUE* )come_null_checker(come_value_206, "08call.nc", 1738))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 1738))));
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
    type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value1=map$2char$phsType$ph_at(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1740))->types, "08call.nc", 1740)),((char*)(__right_value0=xsprintf("pthread_t"))),((void*)0),(_Bool)0)))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(type==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
    }
    __dec_obj143=((struct CVALUE* )come_null_checker(come_value_206, "08call.nc", 1744))->type,
    ((struct CVALUE* )come_null_checker(come_value_206, "08call.nc", 1744))->type=(struct sType* )come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value_206, "08call.nc", 1745))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_206, "08call.nc", 1747))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1749))->stack, "08call.nc", 1749)),(struct CVALUE* )come_increment_ref_count(come_value_206));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((var_node) ? var_node = come_decrement_ref_count(var_node, ((struct sNode*)var_node)->finalize, ((struct sNode*)var_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, thread_var_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((null_node) ? null_node = come_decrement_ref_count(null_node, ((struct sNode*)null_node)->finalize, ((struct sNode*)null_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sType_finalize, type__202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, current_stack_frame_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, come_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, fun_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (fun_name_205 = come_decrement_ref_count(fun_name_205, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(CVALUE_finalize, come_value_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeCallNode_finalize(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_finalize", 2))->sname = come_decrement_ref_count(((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_finalize", 3))->come_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_finalize", 3))->come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj144;
    struct sComeJoinNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)come_null_checker(self, "08call.nc", 1758))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj144=((struct sComeJoinNode*)come_null_checker(self, "08call.nc", 1760))->node,
    ((struct sComeJoinNode*)come_null_checker(self, "08call.nc", 1760))->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sComeJoinNode*)come_increment_ref_count(self);
    come_call_finalizer(sComeJoinNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComeJoinNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sComeJoinNode_kind(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComeJoinNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct CVALUE*  come_value_207  ;
    char*  __dec_obj145  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj146  ;
    node=(struct sNode*)come_increment_ref_count(((struct sComeJoinNode*)come_null_checker(self, "08call.nc", 1775))->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1783, "struct buffer* "))), "08call.nc", 1783)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1784)),"pthread_join(");
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1785)),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1785))->c_value);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1786)),", 0)");
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value_207=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1788, "struct CVALUE* "))), "08call.nc", 1788)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj145=((struct CVALUE* )come_null_checker(come_value_207, "08call.nc", 1789))->c_value,
    ((struct CVALUE* )come_null_checker(come_value_207, "08call.nc", 1789))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 1789))));
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj146=((struct CVALUE* )come_null_checker(come_value_207, "08call.nc", 1790))->type,
    ((struct CVALUE* )come_null_checker(come_value_207, "08call.nc", 1790))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1790, "struct sType* "))), "08call.nc", 1790))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value_207, "08call.nc", 1791))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value_207, "08call.nc", 1793))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1795))->stack, "08call.nc", 1795)),(struct CVALUE* )come_increment_ref_count(come_value_207));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 2))->sname = come_decrement_ref_count(((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 3))->node!=((void*)0)) {
        ((((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 3))->node) ? ((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 3))->node = come_decrement_ref_count(((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 3))->node, ((struct sNode*)((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 3))->node)->finalize, ((struct sNode*)((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNode$ph* vars, struct list$1sBlock$ph* blocks, struct sBlock*  else_block  , int time_out, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj147;
    struct list$1sBlock$ph* __dec_obj148;
    struct sBlock*  __dec_obj149  ;
    struct sComePollNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)come_null_checker(self, "08call.nc", 1805))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj147=((struct sComePollNode*)come_null_checker(self, "08call.nc", 1807))->vars,
    ((struct sComePollNode*)come_null_checker(self, "08call.nc", 1807))->vars=(struct list$1sNode$ph*)come_increment_ref_count(vars);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj148=((struct sComePollNode*)come_null_checker(self, "08call.nc", 1808))->blocks,
    ((struct sComePollNode*)come_null_checker(self, "08call.nc", 1808))->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(blocks);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj149=((struct sComePollNode*)come_null_checker(self, "08call.nc", 1809))->else_block,
    ((struct sComePollNode*)come_null_checker(self, "08call.nc", 1809))->else_block=(struct sBlock* )come_increment_ref_count(else_block);
    come_call_finalizer(sBlock_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sComePollNode*)come_null_checker(self, "08call.nc", 1810))->time_out=time_out;
    __result_obj__0 = (struct sComePollNode*)come_increment_ref_count(self);
    come_call_finalizer(sComePollNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComePollNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sComePollNode_kind(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComePollNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    int n_210;
    struct list$1sNode$ph* o2_saved_211;
    struct sNode* it_212;
    vars=(struct list$1sNode$ph*)come_increment_ref_count(((struct sComePollNode*)come_null_checker(self, "08call.nc", 1825))->vars);
    blocks=(struct list$1sBlock$ph*)come_increment_ref_count(((struct sComePollNode*)come_null_checker(self, "08call.nc", 1826))->blocks);
    time_out=((struct sComePollNode*)come_null_checker(self, "08call.nc", 1827))->time_out;
    static int var_num=0;
    var_num++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num,list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(vars, "08call.nc", 1832))));
    n=0;
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sComePollNode*)come_null_checker(self, "08call.nc", 1835))->vars),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "08call.nc", 1835)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "08call.nc", 1835)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "08call.nc", 1835)))){
        Value=node_compile(it,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num,n,((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1842))->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num,n,0x001);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num,var_num,list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(vars, "08call.nc", 1847))),time_out);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num);
    n_210=0;
    for(o2_saved_211=(struct list$1sNode$ph*)come_increment_ref_count(((struct sComePollNode*)come_null_checker(self, "08call.nc", 1851))->vars),it_212=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_211, "08call.nc", 1851)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_211, "08call.nc", 1851)));it_212=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_211, "08call.nc", 1851)))){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num,n_210,0x001);
        transpile_block(((struct sBlock* )(__right_value0=list$1sBlock$ph_operator_load_element(((struct list$1sBlock$ph*)come_null_checker(((struct list$1sBlock$ph*)come_null_checker(blocks, "08call.nc", 1853)), "08call.nc", 1853)),n_210))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        add_come_code(info,"}\n");
        n_210++;
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num);
    transpile_block(((struct sComePollNode*)come_null_checker(self, "08call.nc", 1862))->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    it=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sBlock$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1sBlock$ph*)come_null_checker(self, "list_item$1sBlock$ph$p_finalize", 2))->item!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, ((struct list_item$1sBlock$ph*)come_null_checker(self, "list_item$1sBlock$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sComePollNode_finalize(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 2))->sname = come_decrement_ref_count(((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 3))->vars!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 3))->vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 4))->blocks!=((void*)0)) {
        come_call_finalizer(list$1sBlock$ph$p_finalize, ((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 4))->blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 5))->else_block!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, ((struct sComePollNode*)come_null_checker(self, "sComePollNode_finalize", 5))->else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    it=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1006))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1009))->next;
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    return ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1276))->len;
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_208;
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
    memset(&result_208,0,sizeof(struct sNode*));
    __result_obj__0 = result_208;
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
    struct sNode* result_209;
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
    memset(&result_209,0,sizeof(struct sNode*));
    __result_obj__0 = result_209;
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
    struct sBlock*  default_value_213  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sBlock* )come_increment_ref_count(((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_213,0,sizeof(struct sBlock* ));
    __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_213);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_operator_load_element"; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_214  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sBlock* ));
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1658))->len;
    }
    it=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1661))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sBlock* )come_increment_ref_count(((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1665))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1667))->next;
        i++;
    }
    memset(&default_value_214,0,sizeof(struct sBlock* ));
    __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_214);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2char$phsNode$ph$ph* params, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj150;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj151;
    struct sLambdaCall* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)come_null_checker(self, "08call.nc", 1875))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj150=((struct sLambdaCall*)come_null_checker(self, "08call.nc", 1877))->node,
    ((struct sLambdaCall*)come_null_checker(self, "08call.nc", 1877))->node=(struct sNode*)come_increment_ref_count(node);
    (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj151=((struct sLambdaCall*)come_null_checker(self, "08call.nc", 1878))->params,
    ((struct sLambdaCall*)come_null_checker(self, "08call.nc", 1878))->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sLambdaCall*)come_increment_ref_count(self);
    come_call_finalizer(sLambdaCall_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLambdaCall_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLambdaCall_kind(struct sLambdaCall* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLambdaCall"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var13
;    char*  label  =0;
    struct sNode* node_215=0;
    _Bool Value_216;
    struct CVALUE*  come_value_217  ;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* o2_saved_218;
    struct CVALUE*  it_219  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj152  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj153  ;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* come_params_220;
    int i_221;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_222;
    struct tuple2$2char$phsNode$ph* it_223;
    struct tuple2$2char$phsNode$ph* multiple_assign_var14
;    char*  label_224  =0;
    struct sNode* node_225=0;
    _Bool Value_226;
    struct CVALUE*  come_value_227  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj154  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    struct buffer*  buf_228  ;
    int j_229;
    struct list$1CVALUE$ph* o2_saved_230;
    struct CVALUE*  it_231  ;
    struct CVALUE*  come_value2_232  ;
    char*  __dec_obj155  ;
    struct sType*  __dec_obj156  ;
    node=(struct sNode*)come_increment_ref_count(((struct sLambdaCall*)come_null_checker(self, "08call.nc", 1888))->node);
    params=((struct sLambdaCall*)come_null_checker(self, "08call.nc", 1889))->params;
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    lambda_type=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1897))->type;
    if(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1899))->mResultType==((void*)0)) {
        printf("no type check lambda type\n");
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 1901, "struct list$1CVALUE$ph*"))), "08call.nc", 1901)))));
        come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        i=0;
        for(o2_saved=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "08call.nc", 1903)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "08call.nc", 1903)));it=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "08call.nc", 1903)))){
            multiple_assign_var13=it;
            label=(char* )come_increment_ref_count(multiple_assign_var13->v1);
            node_215=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            Value_216=node_compile(node_215,info);
            if(!Value_216) {
                __result_obj__0 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_215) ? node_215 = come_decrement_ref_count(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_217=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 1912)),(struct CVALUE* )come_increment_ref_count(come_value_217));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_215) ? node_215 = come_decrement_ref_count(node_215, ((struct sNode*)node_215)->finalize, ((struct sNode*)node_215)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1917, "struct buffer* "))), "08call.nc", 1917)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1919)),"(");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1920)),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1920))->c_value);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1921)),")");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1922)),"(");
        j=0;
        for(o2_saved_218=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_219=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_218, "08call.nc", 1925)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_218, "08call.nc", 1925)));it_219=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_218, "08call.nc", 1925)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1926)),((struct CVALUE* )come_null_checker(it_219, "08call.nc", 1926))->c_value);
            if(j!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params, "08call.nc", 1928)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1929)),",");
            }
            j++;
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 1934)),")");
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1936, "struct CVALUE* "))), "08call.nc", 1936)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj152=((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1937))->c_value,
        ((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1937))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 1937))));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj153=((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1939))->type,
        ((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1939))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1939, "struct sType* "))), "08call.nc", 1939))),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1940))->type, "08call.nc", 1940))->mPointerNum=1;
        if(((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1941))->type) {
            ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1942))->type, "08call.nc", 1942))->mStatic=(_Bool)0;
        }
        ((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1944))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "08call.nc", 1946))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 1948))->stack, "08call.nc", 1948)),(struct CVALUE* )come_increment_ref_count(come_value2));
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1952))->mResultType));
    ((struct sType* )come_null_checker(result_type, "08call.nc", 1953))->mStatic=(_Bool)0;
    come_params_220=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 1955, "struct list$1CVALUE$ph*"))), "08call.nc", 1955)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1957))->mParamTypes, "08call.nc", 1957)))!=list$1tuple2$2char$phsNode$ph$ph_length(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 1957)))&&!((struct sType* )come_null_checker(lambda_type, "08call.nc", 1957))->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1958))->mParamTypes, "08call.nc", 1958))),list$1tuple2$2char$phsNode$ph$ph_length(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 1958))));
        __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    i_221=0;
    for(o2_saved_222=params,it_223=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_222, "08call.nc", 1963)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_222, "08call.nc", 1963)));it_223=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved_222, "08call.nc", 1963)))){
        multiple_assign_var14=it_223;
        label_224=(char* )come_increment_ref_count(multiple_assign_var14->v1);
        node_225=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
        Value_226=node_compile(node_225,info);
        if(!Value_226) {
            __result_obj__0 = (_Bool)0;
            (label_224 = come_decrement_ref_count(label_224, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_225) ? node_225 = come_decrement_ref_count(node_225, ((struct sNode*)node_225)->finalize, ((struct sNode*)node_225)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value_227=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        type_=(struct sType* )come_increment_ref_count(solve_generics(((struct CVALUE* )come_null_checker(come_value_227, "08call.nc", 1972))->type,((struct sInfo* )come_null_checker(info, "08call.nc", 1972))->generics_type,info));
        __dec_obj154=((struct CVALUE* )come_null_checker(come_value_227, "08call.nc", 1973))->type,
        ((struct CVALUE* )come_null_checker(come_value_227, "08call.nc", 1973))->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info));
        come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(({(_conditional_value_X0=(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1974))->mVarArgs&&((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1974))->mParamTypes, "08call.nc", 1974)), "08call.nc", 1974)),i_221)))==((void*)0)));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        }
        else {
            check_assign_type(((char*)(__right_value1=xsprintf("calling param #\%s",((char* )(__right_value0=int_to_string(i_221)))))),((struct sType* )(__right_value2=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1977))->mParamTypes, "08call.nc", 1977)), "08call.nc", 1977)),i_221))),((struct CVALUE* )come_null_checker(come_value_227, "08call.nc", 1977))->type,come_value_227,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(({(_conditional_value_X1=(((struct sType* )come_null_checker(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1978))->mParamTypes, "08call.nc", 1978)), "08call.nc", 1978)),i_221))), "08call.nc", 1978))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_227, "08call.nc", 1978))->type, "08call.nc", 1978))->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 1979))->mParamTypes, "08call.nc", 1979)), "08call.nc", 1979)),i_221))),((struct CVALUE* )come_null_checker(come_value_227, "08call.nc", 1979))->type,come_value_227,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params_220, "08call.nc", 1983)),(struct CVALUE* )come_increment_ref_count(come_value_227));
        i_221++;
        (label_224 = come_decrement_ref_count(label_224, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node_225) ? node_225 = come_decrement_ref_count(node_225, ((struct sNode*)node_225)->finalize, ((struct sNode*)node_225)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buf_228=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1988, "struct buffer* "))), "08call.nc", 1988)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf_228, "08call.nc", 1990)),"(");
    buffer_append_str(((struct buffer* )come_null_checker(buf_228, "08call.nc", 1991)),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 1991))->c_value);
    buffer_append_str(((struct buffer* )come_null_checker(buf_228, "08call.nc", 1992)),")");
    buffer_append_str(((struct buffer* )come_null_checker(buf_228, "08call.nc", 1993)),"(");
    j_229=0;
    for(o2_saved_230=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_220),it_231=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_230, "08call.nc", 1996)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_230, "08call.nc", 1996)));it_231=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_230, "08call.nc", 1996)))){
        buffer_append_str(((struct buffer* )come_null_checker(buf_228, "08call.nc", 1997)),((struct CVALUE* )come_null_checker(it_231, "08call.nc", 1997))->c_value);
        if(j_229!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params_220, "08call.nc", 1999)))-1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf_228, "08call.nc", 2000)),",");
        }
        j_229++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf_228, "08call.nc", 2005)),")");
    come_value2_232=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 2007, "struct CVALUE* "))), "08call.nc", 2007)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj155=((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2008))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2008))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf_228, "08call.nc", 2008))));
    __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
    if(((struct sType* )come_null_checker(((struct sType* )come_null_checker(lambda_type, "08call.nc", 2010))->mResultType, "08call.nc", 2010))->mHeap) {
        append_object_to_right_values(come_value2_232,((struct sType* )come_null_checker(lambda_type, "08call.nc", 2011))->mResultType,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    __dec_obj156=((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2014))->type,
    ((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2014))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2015))->type) {
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2016))->type, "08call.nc", 2016))->mStatic=(_Bool)0;
    }
    ((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2018))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2_232, "08call.nc", 2020))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 2022))->stack, "08call.nc", 2022)),(struct CVALUE* )come_increment_ref_count(come_value2_232));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLambdaCall_finalize(struct sLambdaCall* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 2))->sname!=((void*)0)) {
        (((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 2))->sname = come_decrement_ref_count(((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 3))->node!=((void*)0)) {
        ((((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 3))->node) ? ((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 3))->node = come_decrement_ref_count(((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 3))->node, ((struct sNode*)((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 3))->node)->finalize, ((struct sNode*)((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 3))->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 4))->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, ((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_finalize", 4))->params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj157  ;
    struct sVarArgTypeName* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)come_null_checker(self, "08call.nc", 2032))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj157=((struct sVarArgTypeName*)come_null_checker(self, "08call.nc", 2034))->type,
    ((struct sVarArgTypeName*)come_null_checker(self, "08call.nc", 2034))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sVarArgTypeName*)come_increment_ref_count(self);
    come_call_finalizer(sVarArgTypeName_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarArgTypeName_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sVarArgTypeName_kind(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sVarArgTypeName"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj158  ;
    struct sType*  __dec_obj159  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(((struct sVarArgTypeName*)come_null_checker(self, "08call.nc", 2044))->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 2046, "struct CVALUE* "))), "08call.nc", 2046)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj158=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 2048))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 2048))->c_value=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj159=((struct CVALUE* )come_null_checker(come_value, "08call.nc", 2049))->type,
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 2049))->type=(struct sType* )come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "08call.nc", 2050))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 2052))->stack, "08call.nc", 2052)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_finalize", 2))->sname!=((void*)0)) {
        (((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_finalize", 2))->sname = come_decrement_ref_count(((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sInnerAttribute* sInnerAttribute_initialize(struct sInnerAttribute* self, char*  attr  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj160  ;
    struct sInnerAttribute* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)come_null_checker(self, "08call.nc", 2062))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj160=((struct sInnerAttribute*)come_null_checker(self, "08call.nc", 2064))->attr,
    ((struct sInnerAttribute*)come_null_checker(self, "08call.nc", 2064))->attr=(char* )come_increment_ref_count(attr);
    __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sInnerAttribute*)come_increment_ref_count(self);
    come_call_finalizer(sInnerAttribute_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sInnerAttribute_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sInnerAttribute_kind(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sInnerAttribute"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sInnerAttribute_compile(struct sInnerAttribute* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_compile"; neo_current_frame = &fr;
    char*  attr  ;
    _Bool __result_obj__0;
    attr=(char* )come_increment_ref_count(((struct sInnerAttribute*)come_null_checker(self, "08call.nc", 2074))->attr);
    add_come_code(info,"__attribute__%s",attr);
    __result_obj__0 = (_Bool)1;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sInnerAttribute_finalize(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_finalize", 2))->sname!=((void*)0)) {
        (((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_finalize", 2))->sname = come_decrement_ref_count(((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_finalize", 3))->attr!=((void*)0)) {
        (((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_finalize", 3))->attr = come_decrement_ref_count(((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_finalize", 3))->attr, (void*)0, (void*)0, 0, 0, (void*)0));
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
    char*  __dec_obj161  ;
    char*  __dec_obj162  ;
    _Bool no_comma;
    _Bool in_fun_param;
    _Bool type_name_exp;
    struct sNode* node;
    struct sNode* __dec_obj163;
    struct buffer*  method_block  ;
    int method_block_sline;
    char* head;
    char* tail;
    struct buffer*  __dec_obj169  ;
    int len;
    char* mem;
    struct sNode* _inf_value4;
    struct sFunCallNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* node_235;
    struct sNode* __dec_obj175;
    struct sNode* __result_obj__0;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 2084, "struct list$1sType$ph*"))), "08call.nc", 2084)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2086))->p==60) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2087))->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2091))->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2095))->p==62) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2096))->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2100))->p==44) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2101))->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var15=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var15->v1);
                name=(char* )come_increment_ref_count(multiple_assign_var15->v2);
                err=multiple_assign_var15->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(method_generics_types, "08call.nc", 2112)),(struct sType* )come_increment_ref_count(sType_clone(type)));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    expected_next_character(40,info);
    skip_spaces_and_lf(info);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 2121, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "08call.nc", 2121)))));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    _va_arg=((struct sInfo* )come_null_checker(info, "08call.nc", 2123))->va_arg;
    if(charp_operator_equals(((char*)come_null_checker(fun_name, "08call.nc", 2124)),"__builtin_va_arg")) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2125))->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2129))->p==41) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2130))->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p=((struct sInfo* )come_null_checker(info, "08call.nc", 2135))->p;
        sline=((struct sInfo* )come_null_checker(info, "08call.nc", 2136))->sline;
        err_flag=(_Bool)0;
        label=(char* )come_increment_ref_count(__builtin_string(""));
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "08call.nc", 2140))->p)||*((struct sInfo* )come_null_checker(info, "08call.nc", 2140))->p==95) {
            __dec_obj161=label,
            label=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0);
            err_flag=(_Bool)1;
        }
        if(err_flag==(_Bool)1&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2145))->p==58) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2146))->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj162=label,
            label=((void*)0);
            __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2152))->p=p;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2153))->sline=sline;
        }
        no_comma=((struct sInfo* )come_null_checker(info, "08call.nc", 2156))->no_comma;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2157))->no_comma=(_Bool)1;
        in_fun_param=((struct sInfo* )come_null_checker(info, "08call.nc", 2159))->in_fun_param;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2160))->in_fun_param=(_Bool)1;
        type_name_exp=(_Bool)0;
        if(charp_operator_equals(((char*)come_null_checker(fun_name, "08call.nc", 2164)),"__builtin_types_compatible_p")) {
            type_name_exp=(_Bool)1;
        }
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp));
        __dec_obj163=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2172))->no_comma=no_comma;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2173))->in_fun_param=in_fun_param;
        list$1tuple2$2char$phsNode$ph$ph_push_back(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 2175)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "08call.nc", 2175, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node))));
        skip_spaces_and_lf(info);
        if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2179))->p==44) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2180))->p++;
            skip_spaces_and_lf(info);
        }
        else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2183))->p==41) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2184))->p++;
            skip_spaces_and_lf(info);
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    ((struct sInfo* )come_null_checker(info, "08call.nc", 2191))->va_arg=_va_arg;
    skip_spaces_and_lf(info);
    method_block=((void*)0);
    method_block_sline=0;
    if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2197))->p==123) {
        head=((struct sInfo* )come_null_checker(info, "08call.nc", 2198))->p;
        method_block_sline=((struct sInfo* )come_null_checker(info, "08call.nc", 2199))->sline;
        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        tail=((struct sInfo* )come_null_checker(info, "08call.nc", 2203))->p;
        __dec_obj169=method_block,
        method_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 2205, "struct buffer* "))), "08call.nc", 2205)))));
        come_call_finalizer(buffer_finalize, __dec_obj169,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        len=tail-head;
        mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 2208, "char*"));
        memcpy(mem,head,len);
        ((char*)come_null_checker(mem, "08call.nc", 2210))[len]=0;
        buffer_append_str(((struct buffer* )come_null_checker(method_block, "08call.nc", 2212)),mem);
        buffer_append_str(((struct buffer* )come_null_checker(method_block, "08call.nc", 2213)),"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2218, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode* )come_increment_ref_count(((struct sFunCallNode* )come_null_checker(((struct sFunCallNode* )(__right_value0=(struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), (void*)0, 2218, "struct sFunCallNode* "))), "08call.nc", 2218))),fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types),(struct buffer* )come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_235=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer(sFunCallNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj175=node_235,
    node_235=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_235),info));
    (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0) :0);
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node_235);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((node_235) ? node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj164;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_233;
    struct tuple2$2char$phsNode$ph* __dec_obj165;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_234;
    struct tuple2$2char$phsNode$ph* __dec_obj166;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1122))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1123, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1125))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1126))->next=((void*)0);
        __dec_obj164=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_233=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1133, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_233, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_233, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj165=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_233, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_233, "/usr/local/include/neo-c.h", 1137))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_233;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_233;
    }
    else {
        litem_234=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1143, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_234, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_234, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj166=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_234, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_234, "/usr/local/include/neo-c.h", 1147))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_234;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_234;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj167  ;
    struct sNode* __dec_obj168;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj167=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj168=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2930))->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_clone"; neo_current_frame = &fr;
    struct sFunCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunCallNode*  result  ;
    char*  __dec_obj170  ;
    char*  __dec_obj171  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj172;
    struct list$1sType$ph* __dec_obj173;
    struct buffer*  __dec_obj174  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFunCallNode* )come_increment_ref_count((struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), (void*)0, 5, "struct sFunCallNode* "));
    if(self!=((void*)0)) {
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 6))->sline=((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj170=((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 7))->sname,
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 7))->sname, "sFunCallNode_clone", 7, "char* "));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 8))->sline_real=((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 9))->fun_name!=((void*)0)) {
        __dec_obj171=((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 9))->fun_name,
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 9))->fun_name=(char* )come_increment_ref_count((char* )come_memdup(((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 9))->fun_name, "sFunCallNode_clone", 9, "char* "));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 10))->params!=((void*)0)) {
        __dec_obj172=((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 10))->params,
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 10))->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 10))->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 11))->method_generics_types!=((void*)0)) {
        __dec_obj173=((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 11))->method_generics_types,
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 11))->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 11))->method_generics_types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 12))->method_block!=((void*)0)) {
        __dec_obj174=((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 12))->method_block,
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 12))->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 12))->method_block));
        come_call_finalizer(buffer_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sFunCallNode* )come_null_checker(result, "sFunCallNode_clone", 13))->method_block_sline=((struct sFunCallNode*)come_null_checker(self, "sFunCallNode_clone", 13))->method_block_sline;
    }
    __result_obj__0 = result;
    come_call_finalizer(sFunCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2229, "struct sNode");
    _inf_obj_value5=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode* )come_increment_ref_count(((struct sFunCallNode* )come_null_checker(((struct sFunCallNode* )(__right_value0=(struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), (void*)0, 2229, "struct sFunCallNode* "))), "08call.nc", 2229))),(char*)fun_name,params,method_generics_types,method_block,method_block_sline,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sFunCallNode_finalize;
    _inf_value5->clone=(void*)sFunCallNode_clone;
    _inf_value5->compile=(void*)sFunCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sFunCallNode_terminated;
    _inf_value5->kind=(void*)sFunCallNode_kind;
    node=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer(sFunCallNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* expression_node_v1(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v1"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    err_msg(info,"invalid character(1)(%d)(%c)",*((struct sInfo* )come_null_checker(info, "08call.nc", 2237))->p,*((struct sInfo* )come_null_checker(info, "08call.nc", 2237))->p);
    stackframe();
    exit(3);
    __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
    head=((struct sInfo* )come_null_checker(info, "08call.nc", 2245))->p;
    if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2247))->p==40) {
        in_dquort=(_Bool)0;
        brace_num=0;
        while(*((struct sInfo* )come_null_checker(info, "08call.nc", 2250))->p) {
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2251))->p==34) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2252))->p++;
                in_dquort=!in_dquort;
            }
            else if(in_dquort) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2257))->p++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2259))->p==40) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2260))->p++;
                brace_num++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2263))->p==41) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2264))->p++;
                brace_num--;
                if(brace_num==0) {
                    break;
                }
            }
            else {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2272))->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    tail=((struct sInfo* )come_null_checker(info, "08call.nc", 2278))->p;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 2280, "struct buffer* "))), "08call.nc", 2280)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append(((struct buffer* )come_null_checker(buf, "08call.nc", 2282)),head,tail-head);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 2284))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct sNode* __dec_obj176;
    struct sNode* _inf_value7;
    struct sReturnNode* _inf_obj_value7;
    int nest;
    struct sNode* node;
    char* head;
    int head_sline;
    int sline_real;
    char*  buf  ;
    _Bool is_type_name_;
    _Bool is_special_word;
    _Bool define_function_pointer_flag;
    _Bool lambda_flag;
    char*  word2  ;
    _Bool fun_name_with_type_name;
    _Bool no_output_come_code;
    _Bool flag;
    char*  word2_236  ;
    _Bool call_method_generics_fun_call;
    char*  __dec_obj177  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    _Bool _conditional_value_X0;
    int nest_237;
    _Bool inline_asm;
    char*  __dec_obj178  ;
    char*  __dec_obj179  ;
    char*  __dec_obj180  ;
    struct sNode* node_238;
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
    struct sNode* node_239;
    struct sNode* node_240;
    struct sNode* node_241;
    struct buffer*  come_block  ;
    int come_block_sline;
    char* head_242;
    char* tail;
    struct buffer*  __dec_obj185  ;
    int len;
    char* mem;
    char* head_243;
    _Bool no_output_come_code_244;
    char* tail_245;
    struct buffer*  __dec_obj186  ;
    int len_246;
    char* mem_247;
    struct sNode* _inf_value10;
    struct sComeCallNode* _inf_obj_value10;
    struct sNode* node_248;
    struct buffer*  come_block_249  ;
    int come_block_sline_250;
    struct sNode* node_251;
    struct sNode* _inf_value11;
    struct sComeJoinNode* _inf_obj_value11;
    int time_out;
    struct list$1sNode$ph* vars;
    struct list$1sBlock$ph* blocks;
    struct sBlock*  else_block  ;
    struct sBlock*  __dec_obj191  ;
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
    struct sNode* node_261;
    _Bool volatile_;
    struct buffer*  buf2  ;
    char*  word  ;
    struct list$1sNode$ph* exps;
    _Bool dquort;
    int i;
    struct sNode* exp_262;
    _Bool Value;
    struct CVALUE*  come_value  ;
    int i_263;
    int i_264;
    int i_265;
    struct sNode* _inf_value20;
    struct sInlineAssembler* _inf_obj_value20;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var17
;    struct sType*  type_266  =0;
    char*  name_267  =0;
    _Bool err_268=0;
    char*  base_fun_name  ;
    char*  fun_name  ;
    struct sNode* node_269;
    struct buffer*  fun_name_270  ;
    char*  buf2_271  ;
    struct sNode* node_272;
    struct sNode* node_273;
    struct sNode* node_274;
    struct sNode* node_275;
    struct sNode* node_276;
    skip_spaces_and_lf(info);
    if(parsecmp("return",info)) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2292))->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2295))->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2296, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count(((struct sReturnNode* )come_null_checker(((struct sReturnNode* )(__right_value0=(struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), (void*)0, 2296, "struct sReturnNode* "))), "08call.nc", 2296))),((void*)0),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
            come_call_finalizer(sReturnNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else {
            value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            __dec_obj176=value,
            value=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value),info));
            (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0) :0);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2302, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value1=sReturnNode_initialize((struct sReturnNode* )come_increment_ref_count(((struct sReturnNode* )come_null_checker(((struct sReturnNode* )(__right_value0=(struct sReturnNode *)come_calloc(1, sizeof(struct sReturnNode )*(1), (void*)0, 2302, "struct sReturnNode* "))), "08call.nc", 2302))),(struct sNode*)come_increment_ref_count(value),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sReturnNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2306))->p==47&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2306))->p+1)==42) {
        nest=0;
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2309))->p==47&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2309))->p+1)==42) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2310))->p+=2;
                nest++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2313))->p==42&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2313))->p+1)==47) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2314))->p+=2;
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2321))->p==10) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2322))->p++;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2323))->sline++;
            }
            else {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2326))->p++;
            }
        }
    }
    else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2331))->p==47&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2331))->p+1)==47) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2332))->p+=2;
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2335))->p==10) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2336))->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2340))->p==0) {
                break;
            }
            else {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2344))->p++;
            }
        }
    }
    else if(!gComeC&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2348))->p==116&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2348))->p+1)==40) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2349))->p+=2;
        skip_spaces_and_lf(info);
        node=(struct sNode*)come_increment_ref_count(parse_tuple(info,(_Bool)0));
        skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if((xisalpha(*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p)||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==95)&&!((*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==76||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==108||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==115||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==83||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==98||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==66||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==104||*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==72)&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p+1)==34||(*((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p==76&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2358))->p+1)==39))) {
        head=((struct sInfo* )come_null_checker(info, "08call.nc", 2359))->p;
        head_sline=((struct sInfo* )come_null_checker(info, "08call.nc", 2360))->sline;
        sline_real=((struct sInfo* )come_null_checker(info, "08call.nc", 2361))->sline_real;
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2362))->sline_real=((struct sInfo* )come_null_checker(info, "08call.nc", 2362))->sline;
        buf=(char* )come_increment_ref_count(backtrace_parse_word(info));
        is_type_name_=is_type_name(buf,info);
        static const char* is_special_word_array[25]={ "if", "while", "for", "switch", "return", "sizeof", "offsetof", "isheap", "ispointer", "__typeof__"
                                    , "dynamic_typeof", "typeof", "gc_inc", "gc_dec", "gc_dec_nofree", "case", "_Alignof"
                                    , "_Alignas", "__alignof__", "_Atomic", "borrow", "dupe", "clone", "__builtin_offsetof", "_Generic" };
        is_special_word=charpa_contained(((const char**)come_null_checker(is_special_word_array, "08call.nc", 2372)),25,buf);
        define_function_pointer_flag=(_Bool)0;
        if(!is_special_word&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2376))->p==40&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2376))->p+1)!=42) {
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2380))->p==40) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2381))->p++;
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2384))->p==42) {
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2385))->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag=(_Bool)1;
                }
            }
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2392))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2393))->sline=head_sline;
        }
        lambda_flag=(_Bool)0;
        if(!is_special_word&&is_type_name_) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2400))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2401))->sline=head_sline;
            ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            word2=(char* )come_increment_ref_count(backtrace_parse_word(info));
            if(string_operator_equals(((char* )come_null_checker(word2, "08call.nc", 2407)),"lambda")) {
                lambda_flag=(_Bool)1;
            }
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2411))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2412))->sline=head_sline;
            (word2 = come_decrement_ref_count(word2, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        fun_name_with_type_name=(_Bool)0;
        if(!is_special_word) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2419))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2420))->sline=head_sline;
            no_output_come_code=((struct sInfo* )come_null_checker(info, "08call.nc", 2422))->no_output_come_code;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2423))->no_output_come_code=(_Bool)1;
            flag=(_Bool)0;
            while(xisalpha(*((struct sInfo* )come_null_checker(info, "08call.nc", 2426))->p)||*((struct sInfo* )come_null_checker(info, "08call.nc", 2426))->p==95) {
                flag=(_Bool)1;
                word2_236=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                (word2_236 = come_decrement_ref_count(word2_236, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            while(*((struct sInfo* )come_null_checker(info, "08call.nc", 2430))->p==42||*((struct sInfo* )come_null_checker(info, "08call.nc", 2430))->p==37) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2431))->p++;
                skip_spaces_and_lf(info);
            }
            while(*((struct sInfo* )come_null_checker(info, "08call.nc", 2434))->p==91&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2434))->p+1)==93) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2435))->p+=2;
                skip_spaces_and_lf(info);
            }
            if(flag&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2438))->p==58&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2438))->p+1)==58) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2439))->p+=2;
                skip_spaces_and_lf(info);
                if(xisalpha(*((struct sInfo* )come_null_checker(info, "08call.nc", 2441))->p)||*((struct sInfo* )come_null_checker(info, "08call.nc", 2441))->p==95) {
                    fun_name_with_type_name=(_Bool)1;
                }
            }
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2446))->no_output_come_code=no_output_come_code;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2448))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2449))->sline=head_sline;
        }
        call_method_generics_fun_call=(_Bool)0;
        if(!is_special_word) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2456))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2457))->sline=head_sline;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "08call.nc", 2459))->p)||*((struct sInfo* )come_null_checker(info, "08call.nc", 2459))->p==95) {
                __dec_obj177=buf,
                buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(({(_conditional_value_X0=(!is_type_name(buf,info)&&((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(((struct sVarTable* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 2463))->lv_table, "08call.nc", 2463))->mVars, "08call.nc", 2463)), "08call.nc", 2463)),((char* )(__right_value1=__builtin_string(buf))))))==((void*)0)&&((struct sVar* )(__right_value5=map$2char$phsVar$ph_operator_load_element(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(((struct sVarTable* )come_null_checker(((struct sInfo* )come_null_checker(info, "08call.nc", 2463))->gv_table, "08call.nc", 2463))->mVars, "08call.nc", 2463)), "08call.nc", 2463)),((char* )(__right_value4=__builtin_string(buf))))))==((void*)0)&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2463))->p==60));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sVar_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                nest_237=0;
                while(*((struct sInfo* )come_null_checker(info, "08call.nc", 2465))->p) {
                    if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2466))->p==60) {
                        ((struct sInfo* )come_null_checker(info, "08call.nc", 2467))->p++;
                        nest_237++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2470))->p==62) {
                        ((struct sInfo* )come_null_checker(info, "08call.nc", 2471))->p++;
                        if(nest_237==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2477))->p==10||*((struct sInfo* )come_null_checker(info, "08call.nc", 2477))->p==59) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "08call.nc", 2481))->p++;
                    }
                }
                if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2485))->p==40) {
                    call_method_generics_fun_call=(_Bool)1;
                }
            }
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2490))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2491))->sline=head_sline;
        }
        inline_asm=(_Bool)0;
        if(!is_special_word) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2498))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2499))->sline=head_sline;
            __dec_obj178=buf,
            buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0);
            if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2503)),"asm")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2503)),"__asm")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2503)),"__asm__")) {
                if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2504))->p==40) {
                    inline_asm=(_Bool)1;
                }
                else {
                    if(xisalpha(*((struct sInfo* )come_null_checker(info, "08call.nc", 2508))->p)||*((struct sInfo* )come_null_checker(info, "08call.nc", 2508))->p==95) {
                        __dec_obj179=buf,
                        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0);
                        if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2511))->p==40) {
                            inline_asm=(_Bool)1;
                        }
                    }
                }
            }
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2518))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2519))->sline=head_sline;
        }
        skip_spaces_and_lf(info);
        __dec_obj180=buf,
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0);
        skip_spaces_and_lf(info);
        if(lambda_flag) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2529))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2530))->sline=head_sline;
            node_238=(struct sNode*)come_increment_ref_count(parse_function(info));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2533))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_238);
            ((node_238) ? node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_238) ? node_238 = come_decrement_ref_count(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if((string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2536)),"_Static_assert")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2536)),"static_assert"))&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2536))->p==40) {
            expected_next_character(40,info);
            no_comma=((struct sInfo* )come_null_checker(info, "08call.nc", 2540))->no_comma;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2541))->no_comma=(_Bool)1;
            exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2543))->no_comma=no_comma;
            expected_next_character(44,info);
            exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            expected_next_character(41,info);
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=static_assert_node((struct sNode*)come_increment_ref_count(exp),(struct sNode*)come_increment_ref_count(exp2),info))));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2553)),"__attribute__")&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2553))->p==40) {
            attr=(char* )come_increment_ref_count(parse_inner_attribute(info));
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2557, "struct sNode");
            _inf_obj_value8=(struct sInnerAttribute*)come_increment_ref_count(((struct sInnerAttribute*)(__right_value1=sInnerAttribute_initialize((struct sInnerAttribute* )come_increment_ref_count(((struct sInnerAttribute* )come_null_checker(((struct sInnerAttribute* )(__right_value0=(struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), (void*)0, 2557, "struct sInnerAttribute* "))), "08call.nc", 2557))),(char* )come_increment_ref_count(attr),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sInnerAttribute_finalize;
            _inf_value8->clone=(void*)sInnerAttribute_clone;
            _inf_value8->compile=(void*)sInnerAttribute_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sInnerAttribute_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sInnerAttribute_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sInnerAttribute_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2559)),"__c__")&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2559))->p==123) {
            block_text=(char* )come_increment_ref_count(skip_block(info,(_Bool)0));
            contents=(char* )come_increment_ref_count(block_text);
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2565, "struct sNode");
            _inf_obj_value9=(struct sCSourceNode*)come_increment_ref_count(((struct sCSourceNode*)(__right_value1=sCSourceNode_initialize((struct sCSourceNode* )come_increment_ref_count(((struct sCSourceNode* )come_null_checker(((struct sCSourceNode* )(__right_value0=(struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), (void*)0, 2565, "struct sCSourceNode* "))), "08call.nc", 2565))),(char* )come_increment_ref_count(contents),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sCSourceNode_finalize;
            _inf_value9->clone=(void*)sCSourceNode_clone;
            _inf_value9->compile=(void*)sCSourceNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sCSourceNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCSourceNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sCSourceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0));
            (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2567)),"extern")) {
            node_239=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_239);
            ((node_239) ? node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_239) ? node_239 = come_decrement_ref_count(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(!gComeC&&(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2572)),"string")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2572)),"wstring"))&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2572))->p==40) {
            node_240=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2575))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_240);
            ((node_240) ? node_240 = come_decrement_ref_count(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_240) ? node_240 = come_decrement_ref_count(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(is_special_word) {
            node_241=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2581))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_241);
            ((node_241) ? node_241 = come_decrement_ref_count(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_241) ? node_241 = come_decrement_ref_count(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2584)),"come")) {
            come_block=((void*)0);
            come_block_sline=0;
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2588))->p==123) {
                head_242=((struct sInfo* )come_null_checker(info, "08call.nc", 2589))->p;
                come_block_sline=((struct sInfo* )come_null_checker(info, "08call.nc", 2590))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                tail=((struct sInfo* )come_null_checker(info, "08call.nc", 2594))->p;
                __dec_obj185=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 2596, "struct buffer* "))), "08call.nc", 2596)))));
                come_call_finalizer(buffer_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len=tail-head_242;
                mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 2599, "char*"));
                memcpy(mem,head_242,len);
                ((char*)come_null_checker(mem, "08call.nc", 2601))[len]=0;
                buffer_append_str(((struct buffer* )come_null_checker(come_block, "08call.nc", 2603)),mem);
                buffer_append_str(((struct buffer* )come_null_checker(come_block, "08call.nc", 2604)),"\n");
                (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                head_243=((struct sInfo* )come_null_checker(info, "08call.nc", 2607))->p;
                come_block_sline=((struct sInfo* )come_null_checker(info, "08call.nc", 2608))->sline;
                no_output_come_code_244=((struct sInfo* )come_null_checker(info, "08call.nc", 2610))->no_output_come_code;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2611))->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value0=expression_v13(info,(_Bool)0)));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2613))->no_output_come_code=no_output_come_code_244;
                tail_245=((struct sInfo* )come_null_checker(info, "08call.nc", 2615))->p;
                __dec_obj186=come_block,
                come_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 2617, "struct buffer* "))), "08call.nc", 2617)))));
                come_call_finalizer(buffer_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                len_246=tail_245-head_243;
                mem_247=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_246+1)), (void*)0, 2620, "char*"));
                memcpy(mem_247,head_243,len_246);
                ((char*)come_null_checker(mem_247, "08call.nc", 2622))[len_246]=0;
                buffer_append_str(((struct buffer* )come_null_checker(come_block, "08call.nc", 2624)),"{");
                buffer_append_str(((struct buffer* )come_null_checker(come_block, "08call.nc", 2625)),mem_247);
                buffer_append_str(((struct buffer* )come_null_checker(come_block, "08call.nc", 2626)),"; }");
                buffer_append_str(((struct buffer* )come_null_checker(come_block, "08call.nc", 2627)),"return (void*)0;\n}");
                buffer_append_str(((struct buffer* )come_null_checker(come_block, "08call.nc", 2628)),"\n");
                (mem_247 = come_decrement_ref_count(mem_247, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2631, "struct sNode");
            _inf_obj_value10=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value1=sComeCallNode_initialize((struct sComeCallNode* )come_increment_ref_count(((struct sComeCallNode* )come_null_checker(((struct sComeCallNode* )(__right_value0=(struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), (void*)0, 2631, "struct sComeCallNode* "))), "08call.nc", 2631))),(struct buffer* )come_increment_ref_count(come_block),come_block_sline,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeCallNode_finalize;
            _inf_value10->clone=(void*)sComeCallNode_clone;
            _inf_value10->compile=(void*)sComeCallNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeCallNode_terminated;
            _inf_value10->kind=(void*)sComeCallNode_kind;
            node_248=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer(sComeCallNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sComeCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2633))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_248);
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_248) ? node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, come_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_248) ? node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2636)),"come_join")&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2636))->p==40) {
            come_block_249=((void*)0);
            come_block_sline_250=0;
            expected_next_character(40,info);
            node_251=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            expected_next_character(41,info);
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2644))->sline_real=sline_real;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2645, "struct sNode");
            _inf_obj_value11=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value1=sComeJoinNode_initialize((struct sComeJoinNode* )come_increment_ref_count(((struct sComeJoinNode* )come_null_checker(((struct sComeJoinNode* )(__right_value0=(struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), (void*)0, 2645, "struct sComeJoinNode* "))), "08call.nc", 2645))),(struct sNode*)come_increment_ref_count(node_251),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComeJoinNode_finalize;
            _inf_value11->clone=(void*)sComeJoinNode_clone;
            _inf_value11->compile=(void*)sComeJoinNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComeJoinNode_terminated;
            _inf_value11->kind=(void*)sComeJoinNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
            come_call_finalizer(buffer_finalize, come_block_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_251) ? node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sComeJoinNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sComeJoinNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, come_block_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node_251) ? node_251 = come_decrement_ref_count(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(gComePthread&&string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2648)),"come_poll")&&(*((struct sInfo* )come_null_checker(info, "08call.nc", 2648))->p==40||*((struct sInfo* )come_null_checker(info, "08call.nc", 2648))->p==123)) {
            time_out=1;
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2650))->p==40) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 2651))->p++;
                while(xisdigit(*((struct sInfo* )come_null_checker(info, "08call.nc", 2653))->p)) {
                    time_out=time_out*10+(*((struct sInfo* )come_null_checker(info, "08call.nc", 2654))->p-48);
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2655))->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 2663, "struct list$1sNode$ph*"))), "08call.nc", 2663)))));
            come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count(((struct list$1sBlock$ph*)come_null_checker(((struct list$1sBlock$ph*)(__right_value0=(struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), (void*)0, 2664, "struct list$1sBlock$ph*"))), "08call.nc", 2664)))));
            come_call_finalizer(list$1sBlock$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock* )come_increment_ref_count(((struct sBlock* )come_null_checker(((struct sBlock* )(__right_value0=(struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), (void*)0, 2665, "struct sBlock* "))), "08call.nc", 2665)))));
            come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            while(1) {
                if(((((struct sInfo* )come_null_checker(info, "08call.nc", 2667))->end-((struct sInfo* )come_null_checker(info, "08call.nc", 2667))->p)>=strlen("else"))&&memcmp(((struct sInfo* )come_null_checker(info, "08call.nc", 2667))->p,"else",strlen("else"))==0) {
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2668))->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj191=else_block,
                    else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
                    come_call_finalizer(sBlock_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2673))->p==125) {
                        break;
                    }
                }
                else {
                    var_name=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
                    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(vars, "08call.nc", 2682)),(struct sNode*)come_increment_ref_count(var_name));
                    list$1sBlock$ph_add(((struct list$1sBlock$ph*)come_null_checker(blocks, "08call.nc", 2684)),(struct sBlock* )come_increment_ref_count(block));
                    if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2686))->p==125) {
                        ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    ((var_name) ? var_name = come_decrement_ref_count(var_name, ((struct sNode*)var_name)->finalize, ((struct sNode*)var_name)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2694))->sline_real=sline_real;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2695, "struct sNode");
            _inf_obj_value12=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value1=sComePollNode_initialize((struct sComePollNode* )come_increment_ref_count(((struct sComePollNode* )come_null_checker(((struct sComePollNode* )(__right_value0=(struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), (void*)0, 2695, "struct sComePollNode* "))), "08call.nc", 2695))),(struct list$1sNode$ph*)come_increment_ref_count(vars),(struct list$1sBlock$ph*)come_increment_ref_count(blocks),(struct sBlock* )come_increment_ref_count(else_block),time_out,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sComePollNode_finalize;
            _inf_value12->clone=(void*)sComePollNode_clone;
            _inf_value12->compile=(void*)sComePollNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sComePollNode_terminated;
            _inf_value12->kind=(void*)sComePollNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sComePollNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sComePollNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1sNode$ph$p_finalize, vars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sBlock$ph$p_finalize, blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2698)),"__func__")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2698)),"__FUNCTION__")) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2699))->sline_real=sline_real;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2700, "struct sNode");
            _inf_obj_value13=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1=sFuncNode_initialize((struct sFuncNode* )come_increment_ref_count(((struct sFuncNode* )come_null_checker(((struct sFuncNode* )(__right_value0=(struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), (void*)0, 2700, "struct sFuncNode* "))), "08call.nc", 2700))),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFuncNode_finalize;
            _inf_value13->clone=(void*)sFuncNode_clone;
            _inf_value13->compile=(void*)sFuncNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFuncNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sFuncNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2702)),"__line__")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2702)),"__LINE__")) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2703))->sline_real=sline_real;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2704, "struct sNode");
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1=sLineNode_initialize((struct sLineNode* )come_increment_ref_count(((struct sLineNode* )come_null_checker(((struct sLineNode* )(__right_value0=(struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), (void*)0, 2704, "struct sLineNode* "))), "08call.nc", 2704))),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sLineNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2706)),"__sname__")) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2707))->sline_real=sline_real;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2708, "struct sNode");
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1=sSNameNode_initialize((struct sSNameNode* )come_increment_ref_count(((struct sSNameNode* )come_null_checker(((struct sSNameNode* )(__right_value0=(struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), (void*)0, 2708, "struct sSNameNode* "))), "08call.nc", 2708))),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sSNameNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2710)),"__caller_func__")) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2711))->sline_real=sline_real;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2712, "struct sNode");
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1=sCallerFuncNode_initialize((struct sCallerFuncNode* )come_increment_ref_count(((struct sCallerFuncNode* )come_null_checker(((struct sCallerFuncNode* )(__right_value0=(struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), (void*)0, 2712, "struct sCallerFuncNode* "))), "08call.nc", 2712))),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerFuncNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sCallerFuncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2714)),"__caller_line__")) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2715))->sline_real=sline_real;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2716, "struct sNode");
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1=sCallerLineNode_initialize((struct sCallerLineNode* )come_increment_ref_count(((struct sCallerLineNode* )come_null_checker(((struct sCallerLineNode* )(__right_value0=(struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), (void*)0, 2716, "struct sCallerLineNode* "))), "08call.nc", 2716))),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerLineNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sCallerLineNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2718)),"__caller_sname__")) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2719))->sline_real=sline_real;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2720, "struct sNode");
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1=sCallerSNameNode_initialize((struct sCallerSNameNode* )come_increment_ref_count(((struct sCallerSNameNode* )come_null_checker(((struct sCallerSNameNode* )(__right_value0=(struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), (void*)0, 2720, "struct sCallerSNameNode* "))), "08call.nc", 2720))),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sCallerSNameNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sCallerSNameNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(((struct sInfo* )come_null_checker(info, "08call.nc", 2722))->va_arg&&is_type_name(buf,info)) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2723))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2724))->sline=head_sline;
            multiple_assign_var16=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var16->v1);
            name=(char* )come_increment_ref_count(multiple_assign_var16->v2);
            err=multiple_assign_var16->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2728))->sline_real=sline_real;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2729, "struct sNode");
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1=sVarArgTypeName_initialize((struct sVarArgTypeName* )come_increment_ref_count(((struct sVarArgTypeName* )come_null_checker(((struct sVarArgTypeName* )(__right_value0=(struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), (void*)0, 2729, "struct sVarArgTypeName* "))), "08call.nc", 2729))),type,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sVarArgTypeName_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sVarArgTypeName_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2731)),"sizeof")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2731)),"_Alignof")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2731)),"_Alignas")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2731)),"__alignof__")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2731)),"offsetof")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2731)),"__builtin_offsetof")||string_operator_equals(((char* )come_null_checker(buf, "08call.nc", 2731)),"_Generic")) {
            node_261=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2734))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_261);
            ((node_261) ? node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_261) ? node_261 = come_decrement_ref_count(node_261, ((struct sNode*)node_261)->finalize, ((struct sNode*)node_261)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(inline_asm) {
            volatile_=(_Bool)0;
            buf2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 2739, "struct buffer* "))), "08call.nc", 2739)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2741))->p!=40) {
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(string_operator_equals(((char* )come_null_checker(word, "08call.nc", 2744)),"volatile")) {
                    volatile_=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            expected_next_character(40,info);
            buffer_append_str(((struct buffer* )come_null_checker(buf2, "08call.nc", 2750)),"(\n");
            exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 2752, "struct list$1sNode$ph*"))), "08call.nc", 2752)))));
            come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            dquort=(_Bool)0;
            while((_Bool)1) {
                if(dquort) {
                    if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2756))->p==92) {
                        buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2757)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2757))->p);
                        ((struct sInfo* )come_null_checker(info, "08call.nc", 2758))->p++;
                        if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2760))->p==0) {
                            err_msg(info,"invalid source end");
                            __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0));
                            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
                            neo_current_frame = fr.prev;
                            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                            return __result_obj__0;
                        }
                        else {
                            buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2765)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2765))->p);
                            ((struct sInfo* )come_null_checker(info, "08call.nc", 2766))->p++;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2769))->p==34) {
                        buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2770)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2770))->p);
                        ((struct sInfo* )come_null_checker(info, "08call.nc", 2771))->p++;
                        buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2772)),10);
                        skip_spaces_and_lf(info);
                        dquort=(_Bool)0;
                    }
                    else {
                        buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2778)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2778))->p);
                        ((struct sInfo* )come_null_checker(info, "08call.nc", 2779))->p++;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2782))->p==34) {
                    dquort=(_Bool)1;
                    for(i=0;i<((struct sInfo* )come_null_checker(info, "08call.nc", 2785))->block_level+1;i++){
                        buffer_append_str(((struct buffer* )come_null_checker(buf2, "08call.nc", 2786)),"    ");
                    }
                    buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2788)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2788))->p);
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2789))->p++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2791))->p==40) {
                    buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2792)),40);
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2793))->p++;
                    exp_262=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    Value=node_compile(exp_262,info);
                    if(!Value) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0));
                        ((exp_262) ? exp_262 = come_decrement_ref_count(exp_262, ((struct sNode*)exp_262)->finalize, ((struct sNode*)exp_262)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
                        neo_current_frame = fr.prev;
                        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                        return __result_obj__0;
                    }
                    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    buffer_append_str(((struct buffer* )come_null_checker(buf2, "08call.nc", 2803)),((struct CVALUE* )come_null_checker(come_value, "08call.nc", 2803))->c_value);
                    expected_next_character(41,info);
                    buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2806)),41);
                    ((exp_262) ? exp_262 = come_decrement_ref_count(exp_262, ((struct sNode*)exp_262)->finalize, ((struct sNode*)exp_262)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2808))->p==41) {
                    for(i_263=0;i_263<((struct sInfo* )come_null_checker(info, "08call.nc", 2809))->block_level;i_263++){
                        buffer_append_str(((struct buffer* )come_null_checker(buf2, "08call.nc", 2810)),"    ");
                    }
                    buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2812)),41);
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2813))->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2817))->p==10) {
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2818))->sline++;
                    buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2819)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2819))->p);
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2820))->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2823))->p==58) {
                    for(i_264=0;i_264<((struct sInfo* )come_null_checker(info, "08call.nc", 2824))->block_level+1;i_264++){
                        buffer_append_str(((struct buffer* )come_null_checker(buf2, "08call.nc", 2825)),"    ");
                    }
                    buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2827)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2827))->p);
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2828))->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2831))->p==44) {
                    for(i_265=0;i_265<((struct sInfo* )come_null_checker(info, "08call.nc", 2832))->block_level+1;i_265++){
                        buffer_append_str(((struct buffer* )come_null_checker(buf2, "08call.nc", 2833)),"    ");
                    }
                    buffer_append_char(((struct buffer* )come_null_checker(buf2, "08call.nc", 2835)),*((struct sInfo* )come_null_checker(info, "08call.nc", 2835))->p);
                    ((struct sInfo* )come_null_checker(info, "08call.nc", 2836))->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2839))->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    err_msg(info,"unexpected character(%c)",*((struct sInfo* )come_null_checker(info, "08call.nc", 2844))->p);
                    exit(2);
                }
            }
            skip_spaces_and_lf(info);
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2850))->sline_real=sline_real;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2851, "struct sNode");
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value2=sInlineAssembler_initialize((struct sInlineAssembler* )come_increment_ref_count(((struct sInlineAssembler* )come_null_checker(((struct sInlineAssembler* )(__right_value0=(struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), (void*)0, 2851, "struct sInlineAssembler* "))), "08call.nc", 2851))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf2, "08call.nc", 2851)))),volatile_,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value20)));
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sInlineAssembler_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sInlineAssembler_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, buf2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(fun_name_with_type_name) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2854))->p=head;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2855))->sline=head_sline;
            multiple_assign_var17=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_266=(struct sType* )come_increment_ref_count(multiple_assign_var17->v1);
            name_267=(char* )come_increment_ref_count(multiple_assign_var17->v2);
            err_268=multiple_assign_var17->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            expected_next_character(58,info);
            expected_next_character(58,info);
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            fun_name=(char* )come_increment_ref_count(create_method_name(type_266,(_Bool)0,base_fun_name,info,(_Bool)1));
            node_269=(struct sNode*)come_increment_ref_count(parse_function_call(fun_name,info,(_Bool)0));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2868))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_269);
            come_call_finalizer(sType_finalize, type_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_267 = come_decrement_ref_count(name_267, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_269) ? node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_267 = come_decrement_ref_count(name_267, (void*)0, (void*)0, 0, 0, (void*)0));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_269) ? node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 2871))->p==58&&*(((struct sInfo* )come_null_checker(info, "08call.nc", 2871))->p+1)==58) {
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2872))->p+=2;
            skip_spaces_and_lf(info);
            fun_name_270=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 2875, "struct buffer* "))), "08call.nc", 2875)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            buffer_append_str(((struct buffer* )come_null_checker(fun_name_270, "08call.nc", 2877)),buf);
            buffer_append_str(((struct buffer* )come_null_checker(fun_name_270, "08call.nc", 2879)),"_");
            buf2_271=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            buffer_append_str(((struct buffer* )come_null_checker(fun_name_270, "08call.nc", 2883)),buf2_271);
            node_272=(struct sNode*)come_increment_ref_count(parse_function_call(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(fun_name_270, "08call.nc", 2885))))),info,(_Bool)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2887))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_272);
            come_call_finalizer(buffer_finalize, fun_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_271 = come_decrement_ref_count(buf2_271, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_272) ? node_272 = come_decrement_ref_count(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, fun_name_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (buf2_271 = come_decrement_ref_count(buf2_271, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_272) ? node_272 = come_decrement_ref_count(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(call_method_generics_fun_call) {
            node_273=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2893))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_273);
            ((node_273) ? node_273 = come_decrement_ref_count(node_273, ((struct sNode*)node_273)->finalize, ((struct sNode*)node_273)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_273) ? node_273 = come_decrement_ref_count(node_273, ((struct sNode*)node_273)->finalize, ((struct sNode*)node_273)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(!is_special_word&&*((struct sInfo* )come_null_checker(info, "08call.nc", 2896))->p==40&&!is_type_name_) {
            node_274=(struct sNode*)come_increment_ref_count(parse_function_call(buf,info,(_Bool)0));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2900))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_274);
            ((node_274) ? node_274 = come_decrement_ref_count(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_274) ? node_274 = come_decrement_ref_count(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            node_275=(struct sNode*)come_increment_ref_count(string_node_v21(buf,head,head_sline,info));
            ((struct sInfo* )come_null_checker(info, "08call.nc", 2906))->sline_real=sline_real;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(node_275);
            ((node_275) ? node_275 = come_decrement_ref_count(node_275, ((struct sNode*)node_275)->finalize, ((struct sNode*)node_275)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((node_275) ? node_275 = come_decrement_ref_count(node_275, ((struct sNode*)node_275)->finalize, ((struct sNode*)node_275)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        node_276=(struct sNode*)come_increment_ref_count(expression_node_v97(info));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_276);
        ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_276) ? node_276 = come_decrement_ref_count(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    err_msg(info,"unexpected operator(%c)",*((struct sInfo* )come_null_checker(info, "08call.nc", 2916))->p);
    exit(2);
    __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2565)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2565))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2569))->item_existance, "/usr/local/include/neo-c.h", 2569))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2571))->keys, "/usr/local/include/neo-c.h", 2571))[it], "/usr/local/include/neo-c.h", 2571)),key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2573))->items, "/usr/local/include/neo-c.h", 2573))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2578))->size) {
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

static struct sInnerAttribute* sInnerAttribute_clone(struct sInnerAttribute* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInnerAttribute_clone"; neo_current_frame = &fr;
    struct sInnerAttribute* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInnerAttribute*  result  ;
    char*  __dec_obj181  ;
    char*  __dec_obj182  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInnerAttribute* )come_increment_ref_count((struct sInnerAttribute *)come_calloc(1, sizeof(struct sInnerAttribute )*(1), (void*)0, 5, "struct sInnerAttribute* "));
    if(self!=((void*)0)) {
        ((struct sInnerAttribute* )come_null_checker(result, "sInnerAttribute_clone", 6))->sline=((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_clone", 7))->sname!=((void*)0)) {
        __dec_obj181=((struct sInnerAttribute* )come_null_checker(result, "sInnerAttribute_clone", 7))->sname,
        ((struct sInnerAttribute* )come_null_checker(result, "sInnerAttribute_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_clone", 7))->sname, "sInnerAttribute_clone", 7, "char* "));
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sInnerAttribute* )come_null_checker(result, "sInnerAttribute_clone", 8))->sline_real=((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_clone", 9))->attr!=((void*)0)) {
        __dec_obj182=((struct sInnerAttribute* )come_null_checker(result, "sInnerAttribute_clone", 9))->attr,
        ((struct sInnerAttribute* )come_null_checker(result, "sInnerAttribute_clone", 9))->attr=(char* )come_increment_ref_count((char* )come_memdup(((struct sInnerAttribute*)come_null_checker(self, "sInnerAttribute_clone", 9))->attr, "sInnerAttribute_clone", 9, "char* "));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sInnerAttribute_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCSourceNode* sCSourceNode_clone(struct sCSourceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCSourceNode_clone"; neo_current_frame = &fr;
    struct sCSourceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCSourceNode*  result  ;
    char*  __dec_obj183  ;
    char*  __dec_obj184  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCSourceNode* )come_increment_ref_count((struct sCSourceNode *)come_calloc(1, sizeof(struct sCSourceNode )*(1), (void*)0, 5, "struct sCSourceNode* "));
    if(self!=((void*)0)) {
        ((struct sCSourceNode* )come_null_checker(result, "sCSourceNode_clone", 6))->sline=((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj183=((struct sCSourceNode* )come_null_checker(result, "sCSourceNode_clone", 7))->sname,
        ((struct sCSourceNode* )come_null_checker(result, "sCSourceNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_clone", 7))->sname, "sCSourceNode_clone", 7, "char* "));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCSourceNode* )come_null_checker(result, "sCSourceNode_clone", 8))->sline_real=((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_clone", 9))->contents!=((void*)0)) {
        __dec_obj184=((struct sCSourceNode* )come_null_checker(result, "sCSourceNode_clone", 9))->contents,
        ((struct sCSourceNode* )come_null_checker(result, "sCSourceNode_clone", 9))->contents=(char* )come_increment_ref_count((char* )come_memdup(((struct sCSourceNode*)come_null_checker(self, "sCSourceNode_clone", 9))->contents, "sCSourceNode_clone", 9, "char* "));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sCSourceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeCallNode_clone"; neo_current_frame = &fr;
    struct sComeCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeCallNode*  result  ;
    char*  __dec_obj187  ;
    struct buffer*  __dec_obj188  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeCallNode* )come_increment_ref_count((struct sComeCallNode *)come_calloc(1, sizeof(struct sComeCallNode )*(1), (void*)0, 5, "struct sComeCallNode* "));
    if(self!=((void*)0)) {
        ((struct sComeCallNode* )come_null_checker(result, "sComeCallNode_clone", 6))->sline=((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj187=((struct sComeCallNode* )come_null_checker(result, "sComeCallNode_clone", 7))->sname,
        ((struct sComeCallNode* )come_null_checker(result, "sComeCallNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_clone", 7))->sname, "sComeCallNode_clone", 7, "char* "));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sComeCallNode* )come_null_checker(result, "sComeCallNode_clone", 8))->sline_real=((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_clone", 9))->come_block!=((void*)0)) {
        __dec_obj188=((struct sComeCallNode* )come_null_checker(result, "sComeCallNode_clone", 9))->come_block,
        ((struct sComeCallNode* )come_null_checker(result, "sComeCallNode_clone", 9))->come_block=(struct buffer* )come_increment_ref_count(buffer_clone(((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_clone", 9))->come_block));
        come_call_finalizer(buffer_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sComeCallNode* )come_null_checker(result, "sComeCallNode_clone", 10))->come_block_sline=((struct sComeCallNode*)come_null_checker(self, "sComeCallNode_clone", 10))->come_block_sline;
    }
    __result_obj__0 = result;
    come_call_finalizer(sComeCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComeJoinNode_clone"; neo_current_frame = &fr;
    struct sComeJoinNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComeJoinNode*  result  ;
    char*  __dec_obj189  ;
    struct sNode* __dec_obj190;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComeJoinNode* )come_increment_ref_count((struct sComeJoinNode *)come_calloc(1, sizeof(struct sComeJoinNode )*(1), (void*)0, 5, "struct sComeJoinNode* "));
    if(self!=((void*)0)) {
        ((struct sComeJoinNode* )come_null_checker(result, "sComeJoinNode_clone", 6))->sline=((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj189=((struct sComeJoinNode* )come_null_checker(result, "sComeJoinNode_clone", 7))->sname,
        ((struct sComeJoinNode* )come_null_checker(result, "sComeJoinNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_clone", 7))->sname, "sComeJoinNode_clone", 7, "char* "));
        __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sComeJoinNode* )come_null_checker(result, "sComeJoinNode_clone", 8))->sline_real=((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_clone", 9))->node!=((void*)0)) {
        __dec_obj190=((struct sComeJoinNode* )come_null_checker(result, "sComeJoinNode_clone", 9))->node,
        ((struct sComeJoinNode* )come_null_checker(result, "sComeJoinNode_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sComeJoinNode*)come_null_checker(self, "sComeJoinNode_clone", 9))->node));
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sComeJoinNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_initialize"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 985))->head=((void*)0);
    ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 986))->tail=((void*)0);
    ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 987))->len=0;
    __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_add"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sBlock$ph* litem;
    struct sBlock*  __dec_obj192  ;
    struct list_item$1sBlock$ph* litem_252;
    struct sBlock*  __dec_obj193  ;
    struct list_item$1sBlock$ph* litem_253;
    struct sBlock*  __dec_obj194  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1037))->len==0) {
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), (void*)0, 1038, "struct list_item$1sBlock$ph*"))));
        ((struct list_item$1sBlock$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1040))->prev=((void*)0);
        ((struct list_item$1sBlock$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1041))->next=((void*)0);
        __dec_obj192=((struct list_item$1sBlock$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item,
        ((struct list_item$1sBlock$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1042))->item=(struct sBlock* )come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj192,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1044))->tail=litem;
        ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1045))->head=litem;
    }
    else if(((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1047))->len==1) {
        litem_252=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), (void*)0, 1048, "struct list_item$1sBlock$ph*"))));
        ((struct list_item$1sBlock$ph*)come_null_checker(litem_252, "/usr/local/include/neo-c.h", 1050))->prev=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1050))->head;
        ((struct list_item$1sBlock$ph*)come_null_checker(litem_252, "/usr/local/include/neo-c.h", 1051))->next=((void*)0);
        __dec_obj193=((struct list_item$1sBlock$ph*)come_null_checker(litem_252, "/usr/local/include/neo-c.h", 1052))->item,
        ((struct list_item$1sBlock$ph*)come_null_checker(litem_252, "/usr/local/include/neo-c.h", 1052))->item=(struct sBlock* )come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj193,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1054))->tail=litem_252;
        ((struct list_item$1sBlock$ph*)come_null_checker(((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1055))->head, "/usr/local/include/neo-c.h", 1055))->next=litem_252;
    }
    else {
        litem_253=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), (void*)0, 1058, "struct list_item$1sBlock$ph*"))));
        ((struct list_item$1sBlock$ph*)come_null_checker(litem_253, "/usr/local/include/neo-c.h", 1060))->prev=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1060))->tail;
        ((struct list_item$1sBlock$ph*)come_null_checker(litem_253, "/usr/local/include/neo-c.h", 1061))->next=((void*)0);
        __dec_obj194=((struct list_item$1sBlock$ph*)come_null_checker(litem_253, "/usr/local/include/neo-c.h", 1062))->item,
        ((struct list_item$1sBlock$ph*)come_null_checker(litem_253, "/usr/local/include/neo-c.h", 1062))->item=(struct sBlock* )come_increment_ref_count(item);
        come_call_finalizer(sBlock_finalize, __dec_obj194,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sBlock$ph*)come_null_checker(((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1064))->tail, "/usr/local/include/neo-c.h", 1064))->next=litem_253;
        ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1065))->tail=litem_253;
    }
    ((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1068))->len++;
    __result_obj__0 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComePollNode_clone"; neo_current_frame = &fr;
    struct sComePollNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComePollNode*  result  ;
    char*  __dec_obj195  ;
    struct list$1sNode$ph* __dec_obj196;
    struct list$1sBlock$ph* __dec_obj209;
    struct sBlock*  __dec_obj210  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sComePollNode* )come_increment_ref_count((struct sComePollNode *)come_calloc(1, sizeof(struct sComePollNode )*(1), (void*)0, 5, "struct sComePollNode* "));
    if(self!=((void*)0)) {
        ((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 6))->sline=((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj195=((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 7))->sname,
        ((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 7))->sname, "sComePollNode_clone", 7, "char* "));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 8))->sline_real=((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 9))->vars!=((void*)0)) {
        __dec_obj196=((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 9))->vars,
        ((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 9))->vars=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 9))->vars));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj196,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 10))->blocks!=((void*)0)) {
        __dec_obj209=((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 10))->blocks,
        ((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 10))->blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 10))->blocks));
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj209,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 11))->else_block!=((void*)0)) {
        __dec_obj210=((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 11))->else_block,
        ((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 11))->else_block=(struct sBlock* )come_increment_ref_count(sBlock_clone(((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 11))->else_block));
        come_call_finalizer(sBlock_finalize, __dec_obj210,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sComePollNode* )come_null_checker(result, "sComePollNode_clone", 12))->time_out=((struct sComePollNode*)come_null_checker(self, "sComePollNode_clone", 12))->time_out;
    }
    __result_obj__0 = result;
    come_call_finalizer(sComePollNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count(((struct list$1sBlock$ph*)come_null_checker(((struct list$1sBlock$ph*)(__right_value0=(struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), (void*)0, 1017, "struct list$1sBlock$ph*"))), "/usr/local/include/neo-c.h", 1017)))));
    come_call_finalizer(list$1sBlock$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sBlock$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1019))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sBlock$ph_add(((struct list$1sBlock$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1022)),(struct sBlock* )come_increment_ref_count(sBlock_clone(((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1022))->item)));
        }
        else {
            list$1sBlock$ph_add(((struct list$1sBlock$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1025)),(struct sBlock* )come_increment_ref_count(sBlock_clone(((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1025))->item)));
        }
        it=((struct list_item$1sBlock$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1028))->next;
    }
    __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj197;
    struct sVarTable*  __dec_obj208  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), (void*)0, 5, "struct sBlock* "));
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_clone", 6))->mNodes!=((void*)0)) {
        __dec_obj197=((struct sBlock* )come_null_checker(result, "sBlock_clone", 6))->mNodes,
        ((struct sBlock* )come_null_checker(result, "sBlock_clone", 6))->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(((struct sBlock* )come_null_checker(self, "sBlock_clone", 6))->mNodes));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_clone", 7))->mVarTable!=((void*)0)) {
        __dec_obj208=((struct sBlock* )come_null_checker(result, "sBlock_clone", 7))->mVarTable,
        ((struct sBlock* )come_null_checker(result, "sBlock_clone", 7))->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(((struct sBlock* )come_null_checker(self, "sBlock_clone", 7))->mVarTable));
        come_call_finalizer(sVarTable_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sBlock* )come_null_checker(result, "sBlock_clone", 8))->mOmitSemicolon=((struct sBlock* )come_null_checker(self, "sBlock_clone", 8))->mOmitSemicolon;
    }
    __result_obj__0 = (struct sBlock* )come_increment_ref_count(result);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj207;
    if(self==(void*)0) {
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), (void*)0, 5, "struct sVarTable* "));
    if(self!=((void*)0)&&((struct sVarTable* )come_null_checker(self, "sVarTable_clone", 6))->mVars!=((void*)0)) {
        __dec_obj207=((struct sVarTable* )come_null_checker(result, "sVarTable_clone", 6))->mVars,
        ((struct sVarTable* )come_null_checker(result, "sVarTable_clone", 6))->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_clone(((struct sVarTable* )come_null_checker(self, "sVarTable_clone", 6))->mVars));
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sVarTable* )come_null_checker(result, "sVarTable_clone", 7))->mGlobal=((struct sVarTable* )come_null_checker(self, "sVarTable_clone", 7))->mGlobal;
    }
    if(self!=((void*)0)) {
        ((struct sVarTable* )come_null_checker(result, "sVarTable_clone", 8))->mParent=((struct sVarTable* )come_null_checker(self, "sVarTable_clone", 8))->mParent;
    }
    __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj199;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)(__right_value0=(struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), (void*)0, 2123, "struct map$2char$phsVar$ph*"))), "/usr/local/include/neo-c.h", 2123)))));
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj199=((struct map$2char$phsVar$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2125))->key_list,
    ((struct map$2char$phsVar$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2125))->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2125, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2125)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(it=map$2char$phsVar$ph_begin(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2127)));!map$2char$phsVar$ph_end(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2127)));it=map$2char$phsVar$ph_next(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2127)))){
        memset(&default_value,0,sizeof(struct sVar* ));
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2131)),it,default_value,(_Bool)0));
        if(1&&1) {
            map$2char$phsVar$ph_put(((struct map$2char$phsVar$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2134)),(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 2134, "char* ")),(struct sVar* )come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        else if(1) {
            map$2char$phsVar$ph_put(((struct map$2char$phsVar$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2137)),(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 2137, "char* ")),(struct sVar* )come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        else if(1) {
            map$2char$phsVar$ph_put(((struct map$2char$phsVar$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2140)),(char* )come_increment_ref_count(it),(struct sVar* )come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        else {
            map$2char$phsVar$ph_put(((struct map$2char$phsVar$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2143)),(char* )come_increment_ref_count(it),(struct sVar* )come_increment_ref_count(sVar_clone(it2)),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_254;
    for(i=0;i<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2093))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2094))->item_existance, "/usr/local/include/neo-c.h", 2094))[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2096))->items, "/usr/local/include/neo-c.h", 2096))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2100))->items);
    for(i_254=0;i_254<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2102))->size;i_254++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2103))->item_existance, "/usr/local/include/neo-c.h", 2103))[i_254]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2105))->keys, "/usr/local/include/neo-c.h", 2105))[i_254] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2105))->keys, "/usr/local/include/neo-c.h", 2105))[i_254], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2109))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2111))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2113))->item_existance = come_decrement_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2113))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj198;
    struct map$2char$phsVar$ph* __result_obj__0;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2046))->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), (void*)0, 2046, "char** "))));
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2047))->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), (void*)0, 2047, "struct sVar** "))));
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2048))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 2048, "_Bool*"))));
    for(i=0;i<128;i++){
        ((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2052))->item_existance, "/usr/local/include/neo-c.h", 2052))[i]=(_Bool)0;
    }
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2055))->size=128;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2056))->len=0;
    __dec_obj198=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2058))->key_list,
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2058))->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2058, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2058)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2060))->it=0;
    __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_255  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2281))->key_list, "/usr/local/include/neo-c.h", 2281))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2283))->key_list, "/usr/local/include/neo-c.h", 2283))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2284))->key_list, "/usr/local/include/neo-c.h", 2284))->it, "/usr/local/include/neo-c.h", 2284))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_255,0,sizeof(char* ));
    __result_obj__0 = result_255;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2312))->key_list, "/usr/local/include/neo-c.h", 2312))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_256  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2295))->key_list, "/usr/local/include/neo-c.h", 2295))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2300))->key_list, "/usr/local/include/neo-c.h", 2300))->it, "/usr/local/include/neo-c.h", 2300))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2302))->key_list, "/usr/local/include/neo-c.h", 2302))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2303))->key_list, "/usr/local/include/neo-c.h", 2303))->it, "/usr/local/include/neo-c.h", 2303))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_256,0,sizeof(char* ));
    __result_obj__0 = result_256;
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
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2191)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2191))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2195))->item_existance, "/usr/local/include/neo-c.h", 2195))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it], "/usr/local/include/neo-c.h", 2197)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2197))->keys, "/usr/local/include/neo-c.h", 2197))[it]==key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2199))->items, "/usr/local/include/neo-c.h", 2199))[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2204))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
    }
    __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2480))->len*2>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2480))->size) {
        map$2char$phsVar$ph_rehash(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2481)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2483)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2483))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2487))->item_existance, "/usr/local/include/neo-c.h", 2487))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2489))->keys, "/usr/local/include/neo-c.h", 2489))[it], "/usr/local/include/neo-c.h", 2489)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2489))->keys, "/usr/local/include/neo-c.h", 2489))[it]==key)) {
                if(1) {
                    (((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2492))->keys, "/usr/local/include/neo-c.h", 2492))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2492))->keys, "/usr/local/include/neo-c.h", 2492))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2493))->key_list, "/usr/local/include/neo-c.h", 2493)),((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2493))->keys, "/usr/local/include/neo-c.h", 2493))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2494))->keys, "/usr/local/include/neo-c.h", 2494))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2497))->key_list, "/usr/local/include/neo-c.h", 2497)),((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2497))->keys, "/usr/local/include/neo-c.h", 2497))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2498))->keys, "/usr/local/include/neo-c.h", 2498))[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2501))->items, "/usr/local/include/neo-c.h", 2501))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2502))->items, "/usr/local/include/neo-c.h", 2502))[it]=(struct sVar* )come_increment_ref_count(item);
                }
                else {
                    ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2505))->items, "/usr/local/include/neo-c.h", 2505))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2512))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2522))->item_existance, "/usr/local/include/neo-c.h", 2522))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2524))->keys, "/usr/local/include/neo-c.h", 2524))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2527))->keys, "/usr/local/include/neo-c.h", 2527))[it]=key;
            }
            if(1) {
                ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2530))->items, "/usr/local/include/neo-c.h", 2530))[it]=(struct sVar* )come_increment_ref_count(item);
            }
            else {
                ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2533))->items, "/usr/local/include/neo-c.h", 2533))[it]=item;
            }
            ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2536))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2543))->key_list, "/usr/local/include/neo-c.h", 2543)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2543))->key_list, "/usr/local/include/neo-c.h", 2543)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2543))->key_list, "/usr/local/include/neo-c.h", 2543)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 2544)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2550))->key_list, "/usr/local/include/neo-c.h", 2550)),(char* )come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sVar*  default_value_257  ;
    size=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2318))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2319, "char** "))));
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), (void*)0, 2320, "struct sVar** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2321, "_Bool*"))));
    len=0;
    for(it=map$2char$phsVar$ph_begin(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));!map$2char$phsVar$ph_end(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)));it=map$2char$phsVar$ph_next(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2325)))){
        memset(&default_value,0,sizeof(struct sVar* ));
        it2=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2328)),it,default_value,(_Bool)0)));
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
                memset(&default_value_257,0,sizeof(struct sVar* ));
                ((struct sVar** )come_null_checker(items, "/usr/local/include/neo-c.h", 2351))[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2351)),it,(struct sVar* )come_increment_ref_count(default_value_257),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sVar_finalize, default_value_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2359))->items);
    (((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance = come_decrement_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2360))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2361))->keys);
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2363))->keys=keys;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2364))->items=items;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2365))->item_existance=item_existance;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2367))->size=size;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2368))->len=len;
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj200  ;
    struct list_item$1char$ph* litem_258;
    char*  __dec_obj201  ;
    struct list_item$1char$ph* litem_259;
    char*  __dec_obj202  ;
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
        __dec_obj200=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1127))->item=(char* )come_increment_ref_count(item);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1129))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1130))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1132))->len==1) {
        litem_258=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1133, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_258, "/usr/local/include/neo-c.h", 1135))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1135))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_258, "/usr/local/include/neo-c.h", 1136))->next=((void*)0);
        __dec_obj201=((struct list_item$1char$ph*)come_null_checker(litem_258, "/usr/local/include/neo-c.h", 1137))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_258, "/usr/local/include/neo-c.h", 1137))->item=(char* )come_increment_ref_count(item);
        __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1139))->tail=litem_258;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1140))->head, "/usr/local/include/neo-c.h", 1140))->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1143, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_259, "/usr/local/include/neo-c.h", 1145))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1145))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_259, "/usr/local/include/neo-c.h", 1146))->next=((void*)0);
        __dec_obj202=((struct list_item$1char$ph*)come_null_checker(litem_259, "/usr/local/include/neo-c.h", 1147))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_259, "/usr/local/include/neo-c.h", 1147))->item=(char* )come_increment_ref_count(item);
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1149))->tail, "/usr/local/include/neo-c.h", 1149))->next=litem_259;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1150))->tail=litem_259;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1153))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj203  ;
    char*  __dec_obj204  ;
    struct sType*  __dec_obj205  ;
    char*  __dec_obj206  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), (void*)0, 5, "struct sVar* "));
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_clone", 6))->mName!=((void*)0)) {
        __dec_obj203=((struct sVar* )come_null_checker(result, "sVar_clone", 6))->mName,
        ((struct sVar* )come_null_checker(result, "sVar_clone", 6))->mName=(char* )come_increment_ref_count((char* )come_memdup(((struct sVar* )come_null_checker(self, "sVar_clone", 6))->mName, "sVar_clone", 6, "char* "));
        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_clone", 7))->mCValueName!=((void*)0)) {
        __dec_obj204=((struct sVar* )come_null_checker(result, "sVar_clone", 7))->mCValueName,
        ((struct sVar* )come_null_checker(result, "sVar_clone", 7))->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(((struct sVar* )come_null_checker(self, "sVar_clone", 7))->mCValueName, "sVar_clone", 7, "char* "));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_clone", 8))->mType!=((void*)0)) {
        __dec_obj205=((struct sVar* )come_null_checker(result, "sVar_clone", 8))->mType,
        ((struct sVar* )come_null_checker(result, "sVar_clone", 8))->mType=(struct sType* )come_increment_ref_count(sType_clone(((struct sVar* )come_null_checker(self, "sVar_clone", 8))->mType));
        come_call_finalizer(sType_finalize, __dec_obj205,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sVar* )come_null_checker(result, "sVar_clone", 9))->mGlobal=((struct sVar* )come_null_checker(self, "sVar_clone", 9))->mGlobal;
    }
    if(self!=((void*)0)) {
        ((struct sVar* )come_null_checker(result, "sVar_clone", 10))->mAllocaValue=((struct sVar* )come_null_checker(self, "sVar_clone", 10))->mAllocaValue;
    }
    if(self!=((void*)0)) {
        ((struct sVar* )come_null_checker(result, "sVar_clone", 11))->mNoFree=((struct sVar* )come_null_checker(self, "sVar_clone", 11))->mNoFree;
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_clone", 12))->mFunName!=((void*)0)) {
        __dec_obj206=((struct sVar* )come_null_checker(result, "sVar_clone", 12))->mFunName,
        ((struct sVar* )come_null_checker(result, "sVar_clone", 12))->mFunName=(char* )come_increment_ref_count((char* )come_memdup(((struct sVar* )come_null_checker(self, "sVar_clone", 12))->mFunName, "sVar_clone", 12, "char* "));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = (struct sVar* )come_increment_ref_count(result);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_260;
    for(i=0;i<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2093))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2094))->item_existance, "/usr/local/include/neo-c.h", 2094))[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2096))->items, "/usr/local/include/neo-c.h", 2096))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2100))->items);
    for(i_260=0;i_260<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2102))->size;i_260++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2103))->item_existance, "/usr/local/include/neo-c.h", 2103))[i_260]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2105))->keys, "/usr/local/include/neo-c.h", 2105))[i_260] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2105))->keys, "/usr/local/include/neo-c.h", 2105))[i_260], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2109))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2111))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2113))->item_existance = come_decrement_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2113))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFuncNode_clone"; neo_current_frame = &fr;
    struct sFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFuncNode*  result  ;
    char*  __dec_obj211  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFuncNode* )come_increment_ref_count((struct sFuncNode *)come_calloc(1, sizeof(struct sFuncNode )*(1), (void*)0, 5, "struct sFuncNode* "));
    if(self!=((void*)0)) {
        ((struct sFuncNode* )come_null_checker(result, "sFuncNode_clone", 6))->sline=((struct sFuncNode*)come_null_checker(self, "sFuncNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sFuncNode*)come_null_checker(self, "sFuncNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj211=((struct sFuncNode* )come_null_checker(result, "sFuncNode_clone", 7))->sname,
        ((struct sFuncNode* )come_null_checker(result, "sFuncNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sFuncNode*)come_null_checker(self, "sFuncNode_clone", 7))->sname, "sFuncNode_clone", 7, "char* "));
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sFuncNode* )come_null_checker(result, "sFuncNode_clone", 8))->sline_real=((struct sFuncNode*)come_null_checker(self, "sFuncNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLineNode_clone"; neo_current_frame = &fr;
    struct sLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLineNode*  result  ;
    char*  __dec_obj212  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLineNode* )come_increment_ref_count((struct sLineNode *)come_calloc(1, sizeof(struct sLineNode )*(1), (void*)0, 5, "struct sLineNode* "));
    if(self!=((void*)0)) {
        ((struct sLineNode* )come_null_checker(result, "sLineNode_clone", 6))->sline=((struct sLineNode*)come_null_checker(self, "sLineNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sLineNode*)come_null_checker(self, "sLineNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj212=((struct sLineNode* )come_null_checker(result, "sLineNode_clone", 7))->sname,
        ((struct sLineNode* )come_null_checker(result, "sLineNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLineNode*)come_null_checker(self, "sLineNode_clone", 7))->sname, "sLineNode_clone", 7, "char* "));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLineNode* )come_null_checker(result, "sLineNode_clone", 8))->sline_real=((struct sLineNode*)come_null_checker(self, "sLineNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSNameNode_clone"; neo_current_frame = &fr;
    struct sSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSNameNode*  result  ;
    char*  __dec_obj213  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSNameNode* )come_increment_ref_count((struct sSNameNode *)come_calloc(1, sizeof(struct sSNameNode )*(1), (void*)0, 5, "struct sSNameNode* "));
    if(self!=((void*)0)) {
        ((struct sSNameNode* )come_null_checker(result, "sSNameNode_clone", 6))->sline=((struct sSNameNode*)come_null_checker(self, "sSNameNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sSNameNode*)come_null_checker(self, "sSNameNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj213=((struct sSNameNode* )come_null_checker(result, "sSNameNode_clone", 7))->sname,
        ((struct sSNameNode* )come_null_checker(result, "sSNameNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sSNameNode*)come_null_checker(self, "sSNameNode_clone", 7))->sname, "sSNameNode_clone", 7, "char* "));
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sSNameNode* )come_null_checker(result, "sSNameNode_clone", 8))->sline_real=((struct sSNameNode*)come_null_checker(self, "sSNameNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerFuncNode_clone"; neo_current_frame = &fr;
    struct sCallerFuncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerFuncNode*  result  ;
    char*  __dec_obj214  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerFuncNode* )come_increment_ref_count((struct sCallerFuncNode *)come_calloc(1, sizeof(struct sCallerFuncNode )*(1), (void*)0, 5, "struct sCallerFuncNode* "));
    if(self!=((void*)0)) {
        ((struct sCallerFuncNode* )come_null_checker(result, "sCallerFuncNode_clone", 6))->sline=((struct sCallerFuncNode*)come_null_checker(self, "sCallerFuncNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sCallerFuncNode*)come_null_checker(self, "sCallerFuncNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj214=((struct sCallerFuncNode* )come_null_checker(result, "sCallerFuncNode_clone", 7))->sname,
        ((struct sCallerFuncNode* )come_null_checker(result, "sCallerFuncNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCallerFuncNode*)come_null_checker(self, "sCallerFuncNode_clone", 7))->sname, "sCallerFuncNode_clone", 7, "char* "));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCallerFuncNode* )come_null_checker(result, "sCallerFuncNode_clone", 8))->sline_real=((struct sCallerFuncNode*)come_null_checker(self, "sCallerFuncNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sCallerFuncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerLineNode_clone"; neo_current_frame = &fr;
    struct sCallerLineNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerLineNode*  result  ;
    char*  __dec_obj215  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerLineNode* )come_increment_ref_count((struct sCallerLineNode *)come_calloc(1, sizeof(struct sCallerLineNode )*(1), (void*)0, 5, "struct sCallerLineNode* "));
    if(self!=((void*)0)) {
        ((struct sCallerLineNode* )come_null_checker(result, "sCallerLineNode_clone", 6))->sline=((struct sCallerLineNode*)come_null_checker(self, "sCallerLineNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sCallerLineNode*)come_null_checker(self, "sCallerLineNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj215=((struct sCallerLineNode* )come_null_checker(result, "sCallerLineNode_clone", 7))->sname,
        ((struct sCallerLineNode* )come_null_checker(result, "sCallerLineNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCallerLineNode*)come_null_checker(self, "sCallerLineNode_clone", 7))->sname, "sCallerLineNode_clone", 7, "char* "));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCallerLineNode* )come_null_checker(result, "sCallerLineNode_clone", 8))->sline_real=((struct sCallerLineNode*)come_null_checker(self, "sCallerLineNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sCallerLineNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCallerSNameNode_clone"; neo_current_frame = &fr;
    struct sCallerSNameNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCallerSNameNode*  result  ;
    char*  __dec_obj216  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCallerSNameNode* )come_increment_ref_count((struct sCallerSNameNode *)come_calloc(1, sizeof(struct sCallerSNameNode )*(1), (void*)0, 5, "struct sCallerSNameNode* "));
    if(self!=((void*)0)) {
        ((struct sCallerSNameNode* )come_null_checker(result, "sCallerSNameNode_clone", 6))->sline=((struct sCallerSNameNode*)come_null_checker(self, "sCallerSNameNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sCallerSNameNode*)come_null_checker(self, "sCallerSNameNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj216=((struct sCallerSNameNode* )come_null_checker(result, "sCallerSNameNode_clone", 7))->sname,
        ((struct sCallerSNameNode* )come_null_checker(result, "sCallerSNameNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCallerSNameNode*)come_null_checker(self, "sCallerSNameNode_clone", 7))->sname, "sCallerSNameNode_clone", 7, "char* "));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCallerSNameNode* )come_null_checker(result, "sCallerSNameNode_clone", 8))->sline_real=((struct sCallerSNameNode*)come_null_checker(self, "sCallerSNameNode_clone", 8))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sCallerSNameNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarArgTypeName_clone"; neo_current_frame = &fr;
    struct sVarArgTypeName* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sVarArgTypeName*  result  ;
    char*  __dec_obj217  ;
    struct sType*  __dec_obj218  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sVarArgTypeName* )come_increment_ref_count((struct sVarArgTypeName *)come_calloc(1, sizeof(struct sVarArgTypeName )*(1), (void*)0, 5, "struct sVarArgTypeName* "));
    if(self!=((void*)0)) {
        ((struct sVarArgTypeName* )come_null_checker(result, "sVarArgTypeName_clone", 6))->sline=((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_clone", 7))->sname!=((void*)0)) {
        __dec_obj217=((struct sVarArgTypeName* )come_null_checker(result, "sVarArgTypeName_clone", 7))->sname,
        ((struct sVarArgTypeName* )come_null_checker(result, "sVarArgTypeName_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_clone", 7))->sname, "sVarArgTypeName_clone", 7, "char* "));
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sVarArgTypeName* )come_null_checker(result, "sVarArgTypeName_clone", 8))->sline_real=((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_clone", 9))->type!=((void*)0)) {
        __dec_obj218=((struct sVarArgTypeName* )come_null_checker(result, "sVarArgTypeName_clone", 9))->type,
        ((struct sVarArgTypeName* )come_null_checker(result, "sVarArgTypeName_clone", 9))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sVarArgTypeName*)come_null_checker(self, "sVarArgTypeName_clone", 9))->type));
        come_call_finalizer(sType_finalize, __dec_obj218,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sVarArgTypeName_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInlineAssembler_clone"; neo_current_frame = &fr;
    struct sInlineAssembler* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sInlineAssembler*  result  ;
    char*  __dec_obj219  ;
    char*  __dec_obj220  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sInlineAssembler* )come_increment_ref_count((struct sInlineAssembler *)come_calloc(1, sizeof(struct sInlineAssembler )*(1), (void*)0, 5, "struct sInlineAssembler* "));
    if(self!=((void*)0)) {
        ((struct sInlineAssembler* )come_null_checker(result, "sInlineAssembler_clone", 6))->sline=((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_clone", 7))->sname!=((void*)0)) {
        __dec_obj219=((struct sInlineAssembler* )come_null_checker(result, "sInlineAssembler_clone", 7))->sname,
        ((struct sInlineAssembler* )come_null_checker(result, "sInlineAssembler_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_clone", 7))->sname, "sInlineAssembler_clone", 7, "char* "));
        __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sInlineAssembler* )come_null_checker(result, "sInlineAssembler_clone", 8))->sline_real=((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_clone", 9))->source!=((void*)0)) {
        __dec_obj220=((struct sInlineAssembler* )come_null_checker(result, "sInlineAssembler_clone", 9))->source,
        ((struct sInlineAssembler* )come_null_checker(result, "sInlineAssembler_clone", 9))->source=(char* )come_increment_ref_count((char* )come_memdup(((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_clone", 9))->source, "sInlineAssembler_clone", 9, "char* "));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sInlineAssembler* )come_null_checker(result, "sInlineAssembler_clone", 10))->volatile_=((struct sInlineAssembler*)come_null_checker(self, "sInlineAssembler_clone", 10))->volatile_;
    }
    __result_obj__0 = result;
    come_call_finalizer(sInlineAssembler_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* expression_v5(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_v5"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v99(info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_of_statment"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* __dec_obj221;
    struct sNode* __result_obj__0;
    struct sNode* __dec_obj222;
    if(!((struct sNode*)come_null_checker(node, "08call.nc", 2929))->terminated(((struct sNode*)come_null_checker(node, "08call.nc", 2929))->_protocol_obj)&&parsecmp("or",info)) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2930))->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj221=node,
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj221 ? __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0, (void*)0) :0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(!((struct sNode*)come_null_checker(node, "08call.nc", 2937))->terminated(((struct sNode*)come_null_checker(node, "08call.nc", 2937))->_protocol_obj)&&parsecmp("and",info)) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 2938))->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj222=node,
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0, (void*)0) :0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* statment(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "statment"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    struct sNode* __dec_obj223;
    struct sNode* __result_obj__0;
    node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
    __dec_obj223=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node),info));
    (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_substring(((char* )come_null_checker(((char* )(__right_value0=__builtin_string(class_name))), "08call.nc", 2963)),0,p-class_name))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        else {
            p++;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(class_name))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    int i_277;
    char*  __result_obj__0  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 2975, "struct buffer* "))), "08call.nc", 2975)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    klass=((struct sType* )come_null_checker(generics_type, "08call.nc", 2977))->mClass;
    class_name=(char* )come_increment_ref_count(((struct sClass* )come_null_checker(klass, "08call.nc", 2979))->mName);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 2981)),class_name);
    if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "08call.nc", 2983))->mGenericsTypes, "08call.nc", 2983)))>0) {
        buffer_append_char(((struct buffer* )come_null_checker(buf, "08call.nc", 2984)),36);
        buffer_append_char(((struct buffer* )come_null_checker(buf, "08call.nc", 2985)),list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "08call.nc", 2985))->mGenericsTypes, "08call.nc", 2985)))+48);
        for(i=0;i<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "08call.nc", 2987))->mGenericsTypes, "08call.nc", 2987)));i++){
            type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "08call.nc", 2988))->mGenericsTypes, "08call.nc", 2988)), "08call.nc", 2988)),i)));
            type_name=(char* )come_increment_ref_count(create_generics_name(type,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 2991)),type_name);
            buffer_append_char(((struct buffer* )come_null_checker(buf, "08call.nc", 2993)),36);
            for(i_277=0;i_277<((struct sType* )come_null_checker(type, "08call.nc", 2994))->mPointerNum;i_277++){
                buffer_append_char(((struct buffer* )come_null_checker(buf, "08call.nc", 2995)),112);
            }
            if(((struct sType* )come_null_checker(type, "08call.nc", 2998))->mHeap) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 2999)),"h");
            }
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 3004))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  create_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_name"; neo_current_frame = &fr;
    char*  struct_name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj224  ;
    char*  __dec_obj225  ;
    char*  __dec_obj226  ;
    char*  __dec_obj227  ;
    char*  __dec_obj228  ;
    int i;
    int i_278;
    char*  __result_obj__0  ;
    memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3010, "struct buffer* "))), "08call.nc", 3010)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3011))->mOriginalTypeName, "08call.nc", 3011)),"")) {
        __dec_obj224=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(((struct sType* )come_null_checker(obj_type, "08call.nc", 3012))->mOriginalTypeName));
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(struct_name, "08call.nc", 3013)),"_Bool")) {
            __dec_obj225=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(!((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3016))->mClass, "08call.nc", 3016))->mStruct) {
            if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3017))->mGenericsTypes, "08call.nc", 3017)))>0&&((struct sType* )come_null_checker(obj_type, "08call.nc", 3017))->mTypedefOriginalType&&((struct sType* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3017))->mTypedefOriginalType, "08call.nc", 3017))->mPointerNum>0) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3018)),"$");
            }
            if(((struct sType* )come_null_checker(obj_type, "08call.nc", 3020))->mOriginalTypePointerNum) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3022)),"p");
            }
        }
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3026))->mClass, "08call.nc", 3026))->mStruct||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3026))->mClass, "08call.nc", 3026))->mProtocol) {
        __dec_obj226=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3027))->mClass, "08call.nc", 3027))->mName));
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(struct_name, "08call.nc", 3028)),"_Bool")) {
            __dec_obj227=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __dec_obj228=struct_name,
        struct_name=(char* )come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0, (void*)0);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3034))->mGenericsTypes, "08call.nc", 3034)))>0&&((struct sType* )come_null_checker(obj_type, "08call.nc", 3034))->mPointerNum>0) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3035)),"$");
        }
        for(i=0;i<((struct sType* )come_null_checker(obj_type, "08call.nc", 3037))->mPointerNum;i++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3039)),"p");
        }
        for(i_278=0;i_278<((struct sType* )come_null_checker(obj_type, "08call.nc", 3041))->mArrayPointerNum;i_278++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3043)),"p");
        }
    }
    if(((struct sType* )come_null_checker(obj_type, "08call.nc", 3047))->mArrayPointerType) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3048)),"a");
    }
    else if(!array_equal_pointer&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3050))->mArrayNum, "08call.nc", 3050)))>0) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3051)),"a");
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=xsprintf("%s%s_%s",struct_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 3054))))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_name_original_obj_type"; neo_current_frame = &fr;
    char*  struct_name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj229  ;
    char*  __dec_obj230  ;
    char*  __dec_obj231  ;
    int i;
    char*  __result_obj__0  ;
    memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3060, "struct buffer* "))), "08call.nc", 3060)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3061))->mClass, "08call.nc", 3061))->mStruct||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3061))->mClass, "08call.nc", 3061))->mProtocol) {
        __dec_obj229=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3062))->mClass, "08call.nc", 3062))->mName));
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(struct_name, "08call.nc", 3063)),"_Bool")) {
            __dec_obj230=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __dec_obj231=struct_name,
        struct_name=(char* )come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0,0, (void*)0);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3069))->mGenericsTypes, "08call.nc", 3069)))>0&&((struct sType* )come_null_checker(obj_type, "08call.nc", 3069))->mPointerNum>0) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3070)),"$");
        }
        for(i=0;i<((struct sType* )come_null_checker(obj_type, "08call.nc", 3072))->mPointerNum;i++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3074)),"p");
        }
    }
    if(((struct sType* )come_null_checker(obj_type, "08call.nc", 3078))->mArrayPointerType) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3079)),"a");
    }
    if(!array_equal_pointer&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3082))->mArrayNum, "08call.nc", 3082)))>0) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3083)),"pa");
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=xsprintf("%s%s_%s",struct_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 3086))))),fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  create_non_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_non_method_name"; neo_current_frame = &fr;
    char*  struct_name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj232  ;
    char*  __dec_obj233  ;
    int i;
    char*  __dec_obj234  ;
    char*  __dec_obj235  ;
    char*  __dec_obj236  ;
    int i_279;
    int len;
    char*  __result_obj__0  ;
    memset(&struct_name, 0, sizeof(struct_name));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3092, "struct buffer* "))), "08call.nc", 3092)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3093))->mOriginalTypeName, "08call.nc", 3093)),"")) {
        __dec_obj232=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(((struct sType* )come_null_checker(obj_type, "08call.nc", 3094))->mOriginalTypeName));
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0,0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(struct_name, "08call.nc", 3095)),"_Bool")) {
            __dec_obj233=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(!((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3098))->mClass, "08call.nc", 3098))->mStruct) {
            if(((struct sType* )come_null_checker(obj_type, "08call.nc", 3099))->mTypedefOriginalType) {
                if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3100))->mGenericsTypes, "08call.nc", 3100)))>0&&((struct sType* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3100))->mTypedefOriginalType, "08call.nc", 3100))->mPointerNum>0) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3101)),"$");
                }
                for(i=0;i<((struct sType* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3103))->mTypedefOriginalType, "08call.nc", 3103))->mPointerNum;i++){
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3105)),"p");
                }
            }
        }
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3110))->mClass, "08call.nc", 3110))->mStruct||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3110))->mClass, "08call.nc", 3110))->mProtocol) {
        __dec_obj234=struct_name,
        struct_name=(char* )come_increment_ref_count(__builtin_string(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3111))->mClass, "08call.nc", 3111))->mName));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(struct_name, "08call.nc", 3112)),"_Bool")) {
            __dec_obj235=struct_name,
            struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
            __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0);
        }
    }
    else {
        __dec_obj236=struct_name,
        struct_name=(char* )come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3118))->mGenericsTypes, "08call.nc", 3118)))>0&&((struct sType* )come_null_checker(obj_type, "08call.nc", 3118))->mPointerNum>0) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3119)),"$");
        }
        for(i_279=0;i_279<((struct sType* )come_null_checker(obj_type, "08call.nc", 3121))->mPointerNum;i_279++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3123)),"p");
        }
    }
    if(((struct sType* )come_null_checker(obj_type, "08call.nc", 3127))->mArrayPointerType) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3128)),"a");
    }
    if(!array_equal_pointer&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(obj_type, "08call.nc", 3131))->mArrayNum, "08call.nc", 3131)))>0) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "08call.nc", 3132)),"pa");
    }
    char none_method_name[charp_length(((const char*)come_null_checker(fun_name, "08call.nc", 3135)))+1];
    memset(&none_method_name, 0, sizeof(none_method_name));
    len=string_length(((char* )come_null_checker(struct_name, "08call.nc", 3137)))+string_length(((char* )come_null_checker(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "08call.nc", 3137))))), "08call.nc", 3137)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    memcpy(none_method_name,fun_name+len+1,charp_length(((const char*)come_null_checker(fun_name, "08call.nc", 3138)))-len-1);
    none_method_name[charp_length(((const char*)come_null_checker(fun_name, "08call.nc", 3139)))-len-1]=0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(none_method_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_name_using_class"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  struct_name  ;
    char*  __dec_obj237  ;
    char*  __result_obj__0  ;
    struct_name=(char* )come_increment_ref_count(__builtin_string(((struct sClass* )come_null_checker(obj_class, "08call.nc", 3146))->mName));
    if(string_operator_equals(((char* )come_null_checker(struct_name, "08call.nc", 3147)),"_Bool")) {
        __dec_obj237=struct_name,
        struct_name=(char*)come_increment_ref_count(xsprintf("bool"));
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s_%s",struct_name,fun_name))));
    (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v1"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    err_msg(info,"unexpected word(%s)(2)",buf);
    exit(2);
    __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
    char*  __dec_obj238  ;
    char*  __dec_obj239  ;
    _Bool no_comma;
    _Bool in_fun_param;
    struct sNode* node_280;
    struct sNode* __dec_obj240;
    struct sNode* _inf_value21;
    struct sLambdaCall* _inf_obj_value21;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    if(!((struct sNode*)come_null_checker(node, "08call.nc", 3166))->terminated(((struct sNode*)come_null_checker(node, "08call.nc", 3166))->_protocol_obj)&&*((struct sInfo* )come_null_checker(info, "08call.nc", 3166))->p==40) {
        ((struct sInfo* )come_null_checker(info, "08call.nc", 3167))->p++;
        skip_spaces_and_lf(info);
        skip_spaces_and_lf(info);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 3172, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "08call.nc", 3172)))));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while((_Bool)1) {
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 3175))->p==41) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 3176))->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p=((struct sInfo* )come_null_checker(info, "08call.nc", 3181))->p;
            sline=((struct sInfo* )come_null_checker(info, "08call.nc", 3182))->sline;
            err_flag=(_Bool)0;
            label=(char* )come_increment_ref_count(__builtin_string(""));
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "08call.nc", 3186))->p)||*((struct sInfo* )come_null_checker(info, "08call.nc", 3186))->p==95) {
                __dec_obj238=label,
                label=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0,0, (void*)0);
                err_flag=(_Bool)1;
            }
            if(err_flag==(_Bool)1&&*((struct sInfo* )come_null_checker(info, "08call.nc", 3191))->p==58) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 3192))->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj239=label,
                label=((void*)0);
                __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0,0, (void*)0);
                ((struct sInfo* )come_null_checker(info, "08call.nc", 3198))->p=p;
                ((struct sInfo* )come_null_checker(info, "08call.nc", 3199))->sline=sline;
            }
            no_comma=((struct sInfo* )come_null_checker(info, "08call.nc", 3202))->no_comma;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 3203))->no_comma=(_Bool)1;
            in_fun_param=((struct sInfo* )come_null_checker(info, "08call.nc", 3205))->in_fun_param;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 3206))->in_fun_param=(_Bool)1;
            node_280=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            __dec_obj240=node_280,
            node_280=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_280),info));
            (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sInfo* )come_null_checker(info, "08call.nc", 3212))->no_comma=no_comma;
            ((struct sInfo* )come_null_checker(info, "08call.nc", 3213))->in_fun_param=in_fun_param;
            list$1tuple2$2char$phsNode$ph$ph_push_back(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "08call.nc", 3215)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "08call.nc", 3215, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count(label),(struct sNode*)come_increment_ref_count(node_280))));
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "08call.nc", 3219))->p==44) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 3220))->p++;
                skip_spaces_and_lf(info);
            }
            else if(*((struct sInfo* )come_null_checker(info, "08call.nc", 3223))->p==41) {
                ((struct sInfo* )come_null_checker(info, "08call.nc", 3224))->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_280) ? node_280 = come_decrement_ref_count(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node_280) ? node_280 = come_decrement_ref_count(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        skip_spaces_and_lf(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 3233, "struct sNode");
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1=sLambdaCall_initialize((struct sLambdaCall* )come_increment_ref_count(((struct sLambdaCall* )come_null_checker(((struct sLambdaCall* )(__right_value0=(struct sLambdaCall *)come_calloc(1, sizeof(struct sLambdaCall )*(1), (void*)0, 3233, "struct sLambdaCall* "))), "08call.nc", 3233))),(struct sNode*)come_increment_ref_count(node),params,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sLambdaCall_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaCall_clone"; neo_current_frame = &fr;
    struct sLambdaCall* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLambdaCall*  result  ;
    char*  __dec_obj241  ;
    struct sNode* __dec_obj242;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj243;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLambdaCall* )come_increment_ref_count((struct sLambdaCall *)come_calloc(1, sizeof(struct sLambdaCall )*(1), (void*)0, 5, "struct sLambdaCall* "));
    if(self!=((void*)0)) {
        ((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 6))->sline=((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 7))->sname!=((void*)0)) {
        __dec_obj241=((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 7))->sname,
        ((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 7))->sname, "sLambdaCall_clone", 7, "char* "));
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 8))->sline_real=((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 9))->node!=((void*)0)) {
        __dec_obj242=((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 9))->node,
        ((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 9))->node=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 9))->node));
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 10))->params!=((void*)0)) {
        __dec_obj243=((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 10))->params,
        ((struct sLambdaCall* )come_null_checker(result, "sLambdaCall_clone", 10))->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(((struct sLambdaCall*)come_null_checker(self, "sLambdaCall_clone", 10))->params));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj243,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sLambdaCall_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

