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

struct slice$1char$
{
    char* memory;
    char* p;
    unsigned long  len  ;
};

struct smart_pointer$1char$
{
    struct buffer*  memory  ;
    char* p;
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
void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo*  info  );
void free_objects_on_break(struct sInfo*  info  );
void free_object(struct sType*  type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo*  info  , _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void free_right_value_objects(struct sInfo*  info  );
void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  );
void append_object_to_right_values(struct CVALUE*  come_value  , struct sType*  type  , struct sInfo*  info  , _Bool decrement_ref_count, struct sType*  obj_type  , char* obj_value, struct sVar*  obj_var  );
void remove_object_from_right_values(int right_value_num, struct sInfo*  info  );
void remove_value_from_right_value_objects(struct CVALUE*  come_value  , struct sInfo*  info  );
char*  increment_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void decrement_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  , _Bool no_free);
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
void child_output_struct(struct sType*  type  , char*  struct_name  , struct buffer*  buf  , _Bool* existance_generics, char*  name  , int indent, struct sInfo*  info  , _Bool* named_child);
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
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
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
int main(int argc, char** argv);
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
static struct slice$1char$* slice$1char$_initialize(struct slice$1char$* self, char* p, unsigned long  len  );
static void slice$1char$$p_finalize(struct slice$1char$* self);
struct slice$1char$* string_to_slice(char* self);
struct slice$1char$* charp_to_slice(char* self);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_pointer(struct buffer*  self  );
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  );
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  );
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer*  self  );
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
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
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
static void match_context_finalize(struct anonymous_typeX25*  self  );
int re_matchp_ex(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures, _Bool ignore_case);
int re_matchp(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
static void regex_program_t_finalize(struct re_program*  self  );
static void compiler_state_finalize(struct anonymous_typeX24*  self  );
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
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
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
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sClass_finalize(struct sClass* self);
struct sClass* sClass_initialize(struct sClass* self, const char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  );
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static void list$1int$_finalize(struct list$1int$* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void sBlock_finalize(struct sBlock*  self  );
static void sFun_finalize(struct sFun* self);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool const_fun);
static void CVALUE_finalize(struct CVALUE* self);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable*  parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  );
_Bool sNodeBase_terminated(struct sNodeBase* self);
char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  );
static void sCurrentNode_finalize(struct sCurrentNode* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  );
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  );
_Bool sNothingNode_terminated(struct sNothingNode* self);
char*  sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  );
static void sNullChecker_finalize(struct sNullChecker* self);
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
// uniq global variable
struct neo_frame*  neo_current_frame  =((void*)0);

struct sMemHeader*  gAllocMem  =(void*)0;

int gComeDebugLib=0;

int gNumAlloc=0;

int gNumFree=0;

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
int main(int argc, char** argv)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "main"; neo_current_frame = &fr;
    int __result_obj__0;
    setlocale(6,"");
    __result_obj__0 = come_main(argc,argv);
    neo_current_frame = fr.prev;
    come_heap_final();
    return __result_obj__0;
}

void stackframe()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    f=neo_current_frame;
    while(f) {
        fun_name=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 169))->fun_name;
        printf("%s\n",fun_name);
        f=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 172))->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool die(const char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "die"; neo_current_frame = &fr;
    puts(msg);
    stackframe();
    exit(4);
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_heap_final()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_final"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool flag;
    int i;
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 212))->class_name) {
            printf("%p (%s): ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long )+sizeof(unsigned long ),((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 213))->class_name);
        }
        for(i=0;i<8;i++){
            if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 216))->fun_name[i]) {
                printf("%s, ",((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 217))->fun_name[i]);
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 224))->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; neo_current_frame = &fr;
    void* __result_obj__0;
    __result_obj__0 = calloc(1,size);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  size  ;
    if(mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 239))->allocated!=177783) {
            neo_current_frame = fr.prev;
            return;
        }
        ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 243))->allocated=0;
        prev_it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 245))->prev;
        next_it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 246))->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                ((struct sMemHeader* )come_null_checker(gAllocMem, "/usr/local/include/neo-c.h", 252))->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                ((struct sMemHeader* )come_null_checker(prev_it, "/usr/local/include/neo-c.h", 257))->next=next_it;
            }
            if(next_it) {
                ((struct sMemHeader* )come_null_checker(next_it, "/usr/local/include/neo-c.h", 260))->prev=prev_it;
            }
        }
        size=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 264))->size;
        free(it);
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  size  , const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; neo_current_frame = &fr;
    unsigned long  size2  ;
    void* result;
    struct sMemHeader*  it  ;
    int n;
    struct neo_frame*  f  ;
    char* fun_name;
    void* __result_obj__0;
    size2=size+sizeof(struct sMemHeader );
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 284))->allocated=177783;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 286))->size=size2;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 287))->free_next=((void*)0);
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 292))->fun_name;
        ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 294))->fun_name[n]=fun_name;
        n++;
        f=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 297))->prev;
    }
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 300))->next=gAllocMem;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 301))->prev=((void*)0);
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 303))->class_name=class_name;
    if(gAllocMem) {
        ((struct sMemHeader* )come_null_checker(gAllocMem, "/usr/local/include/neo-c.h", 306))->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
    __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 320))->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe();
        exit(2);
    }
    __result_obj__0 = (char*)((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 326))->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  size  ;
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 333))->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe();
        exit(2);
    }
    size=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 338))->size-sizeof(struct sMemHeader )-sizeof(unsigned long )-sizeof(unsigned long );
    neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; neo_current_frame = &fr;
    char* mem;
    unsigned long*  ref_count  ;
    unsigned long*  size2  ;
    void* __result_obj__0;
    mem=come_alloc_mem_from_heap_pool(sizeof(unsigned long )+sizeof(unsigned long )+count*size,sname,sline,class_name);
    ref_count=(unsigned long* )mem;
    *ref_count=0;
    size2=(unsigned long* )(mem+sizeof(unsigned long ));
    *size2=size*count+sizeof(unsigned long )+sizeof(unsigned long );
    __result_obj__0 = mem+sizeof(unsigned long )+sizeof(unsigned long );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; neo_current_frame = &fr;
    void* __result_obj__0;
    char* mem;
    unsigned long*  size_p  ;
    unsigned long  size  ;
    void* result;
    if(!block) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=(char*)block-sizeof(unsigned long )-sizeof(unsigned long );
    size_p=(unsigned long* )(mem+sizeof(unsigned long ));
    size=*size_p-sizeof(unsigned long )-sizeof(unsigned long );
    result=come_calloc(1,size,sname,sline,class_name);
    memcpy(result,block,size);
    __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    (*ref_count)++;
    __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    printf("ref_count %ld\n",*ref_count);
    __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    if(result_obj) {
        if(mem==result_obj) {
            __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(mem==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=(void (*)(void*))protocol_fun;
            finalizer(protocol_obj);
            come_free(protocol_obj);
        }
        come_free(mem);
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_0)(void*);
    void (*finalizer_1)(void*);
    long* ref_count;
    long count;
    void (*finalizer_2)(void*);
    void (*finalizer_3)(void*);
    void (*finalizer_4)(void*);
    if(result_obj) {
        if(mem==result_obj) {
            neo_current_frame = fr.prev;
            return;
        }
    }
    if(mem==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=(void (*)(void*))protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_0=(void (*)(void*))fun;
            finalizer_0(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_1=(void (*)(void*))protocol_fun;
                finalizer_1(protocol_obj);
            }
        }
    }
    else {
        ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_2=(void (*)(void*))protocol_fun;
                        finalizer_2(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        finalizer_3=(void (*)(void*))fun;
                        finalizer_3(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_4=(void (*)(void*))protocol_fun;
                        finalizer_4(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool test)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        stackframe();
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    if(mem) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    puts(((char*)(__right_value2=xsprintf("null pointer exception \%s \%s",((char* )(__right_value0=charp_to_string(((const char*)come_null_checker(sname, "/usr/local/include/neo-c.h", 554))))),((char* )(__right_value1=int_to_string(sline)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 566, "char*"));
    strncpy(result,str,len);
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct slice$1char$* slice$1char$_initialize(struct slice$1char$* self, char* p, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "slice$1char$_initialize"; neo_current_frame = &fr;
    struct slice$1char$* __result_obj__0;
    ((struct slice$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 876))->memory=(char*)p;
    ((struct slice$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 877))->p=p;
    ((struct slice$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 878))->len=len;
    __result_obj__0 = (struct slice$1char$*)come_increment_ref_count(self);
    come_call_finalizer(slice$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(slice$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void slice$1char$$p_finalize(struct slice$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "slice$1char$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct slice$1char$* string_to_slice(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_slice"; neo_current_frame = &fr;
    unsigned long  size  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct slice$1char$* __result_obj__0;
    size=string_length(self);
    __result_obj__0 = (struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)(__right_value1=slice$1char$_initialize((struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)come_null_checker(((struct slice$1char$*)(__right_value0=(struct slice$1char$*)come_calloc(1, sizeof(struct slice$1char$)*(1), (void*)0, 1085, "struct slice$1char$*"))), "/usr/local/include/neo-c.h", 1085))),self,size))));
    (self = come_decrement_ref_count(self, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(slice$1char$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(slice$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(slice$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct slice$1char$* charp_to_slice(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_slice"; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct slice$1char$* __result_obj__0;
    len=string_length(self);
    __result_obj__0 = (struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)(__right_value1=slice$1char$_initialize((struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)come_null_checker(((struct slice$1char$*)(__right_value0=(struct slice$1char$*)come_calloc(1, sizeof(struct slice$1char$)*(1), (void*)0, 1092, "struct slice$1char$*"))), "/usr/local/include/neo-c.h", 1092))),self,len))));
    (self = come_decrement_ref_count(self, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(slice$1char$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(slice$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(slice$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1char$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1char$*)come_null_checker(self, "smart_pointer$1char$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1char$*)come_null_checker(self, "smart_pointer$1char$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1char$* buffer_to_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1char$* result;
    struct buffer*  __dec_obj1  ;
    struct smart_pointer$1char$* __result_obj__0;
    result=(struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), (void*)0, 1237, "struct smart_pointer$1char$*"));
    __dec_obj1=((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1239))->memory,
    ((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1239))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1240))->p=((struct buffer* )come_null_checker(((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1240))->memory, "/usr/local/include/neo-c.h", 1240))->buf;
    __result_obj__0 = (struct smart_pointer$1char$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1char$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1int$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1int$*)come_null_checker(self, "smart_pointer$1int$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1int$*)come_null_checker(self, "smart_pointer$1int$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_int_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1int$* result;
    struct buffer*  __dec_obj2  ;
    struct smart_pointer$1int$* __result_obj__0;
    result=(struct smart_pointer$1int$*)come_increment_ref_count((struct smart_pointer$1int$*)come_calloc(1, sizeof(struct smart_pointer$1int$)*(1), (void*)0, 1247, "struct smart_pointer$1int$*"));
    __dec_obj2=((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1249))->memory,
    ((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1249))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1250))->p=(int*)((struct buffer* )come_null_checker(((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1250))->memory, "/usr/local/include/neo-c.h", 1250))->buf;
    __result_obj__0 = (struct smart_pointer$1int$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1short$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1short$*)come_null_checker(self, "smart_pointer$1short$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1short$*)come_null_checker(self, "smart_pointer$1short$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_short_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1short$* result;
    struct buffer*  __dec_obj3  ;
    struct smart_pointer$1short$* __result_obj__0;
    result=(struct smart_pointer$1short$*)come_increment_ref_count((struct smart_pointer$1short$*)come_calloc(1, sizeof(struct smart_pointer$1short$)*(1), (void*)0, 1257, "struct smart_pointer$1short$*"));
    __dec_obj3=((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1259))->memory,
    ((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1259))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1260))->p=(short*)((struct buffer* )come_null_checker(((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1260))->memory, "/usr/local/include/neo-c.h", 1260))->buf;
    __result_obj__0 = (struct smart_pointer$1short$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1short$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1long$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1long$*)come_null_checker(self, "smart_pointer$1long$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1long$*)come_null_checker(self, "smart_pointer$1long$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_long_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1long$* result;
    struct buffer*  __dec_obj4  ;
    struct smart_pointer$1long$* __result_obj__0;
    result=(struct smart_pointer$1long$*)come_increment_ref_count((struct smart_pointer$1long$*)come_calloc(1, sizeof(struct smart_pointer$1long$)*(1), (void*)0, 1267, "struct smart_pointer$1long$*"));
    __dec_obj4=((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1269))->memory,
    ((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1269))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1270))->p=(long*)((struct buffer* )come_null_checker(((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1270))->memory, "/usr/local/include/neo-c.h", 1270))->buf;
    __result_obj__0 = (struct smart_pointer$1long$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1long$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj5;
    struct buffer*  __result_obj__0  ;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3551))->size=128;
    __dec_obj5=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3552))->buf,
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3552))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3552))->size)), (void*)0, 3552, "char*"));
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3553))->buf, "/usr/local/include/neo-c.h", 3553))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3554))->len=0;
    __result_obj__0 = (struct buffer* )come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj6;
    struct buffer*  __result_obj__0  ;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3561))->size=128;
    __dec_obj6=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3562))->buf,
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3562))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3562))->size)), (void*)0, 3562, "char*"));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3563))->buf, "/usr/local/include/neo-c.h", 3563))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3564))->len=0;
    buffer_append(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3566)),mem,size);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    if(self&&((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3573))->buf) {
        (((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3573))->buf = come_decrement_ref_count(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3573))->buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj7;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3582, "struct buffer* "));
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3584))->size=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3584))->size;
    __dec_obj7=((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3585))->buf,
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3585))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3585))->size)), (void*)0, 3585, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3586))->len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3586))->len;
    memcpy(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3587))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3587))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3587))->len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    if(left==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    __result_obj__0 = string_equals(((char* )come_null_checker(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(left, "/usr/local/include/neo-c.h", 3601))))), "/usr/local/include/neo-c.h", 3601)),((char* )(__right_value1=buffer_to_string(((struct buffer* )come_null_checker(right, "/usr/local/include/neo-c.h", 3601))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3609))->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3617))->buf, "/usr/local/include/neo-c.h", 3617))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3618))->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3626))->len-=len;
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3627))->len>=0) {
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3628))->buf, "/usr/local/include/neo-c.h", 3628))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3628))->len]=0;
    }
    else {
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3631))->len=0;
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3632))->buf, "/usr/local/include/neo-c.h", 3632))[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj8;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3641))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3641))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3642))->size)), (void*)0, 3642, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3643))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3643))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3644))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3646))->size+size+1)*2;
        __dec_obj8=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3647))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3647))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3647, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3648))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3649))->buf, "/usr/local/include/neo-c.h", 3649))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3650))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3653))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3653))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3654))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3655))->buf, "/usr/local/include/neo-c.h", 3655))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3655))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj9;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3665))->len+1+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3665))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3666))->size)), (void*)0, 3666, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3667))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3667))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3668))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3670))->size+10+1)*2;
        __dec_obj9=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3671))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3671))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3671, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3672))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3673))->buf, "/usr/local/include/neo-c.h", 3673))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3674))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3677))->buf, "/usr/local/include/neo-c.h", 3677))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3677))->len]=c;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3678))->len++;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3680))->buf, "/usr/local/include/neo-c.h", 3680))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3680))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj10;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3692))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3692))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3693))->size)), (void*)0, 3693, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3694))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3694))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3695))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3696))->size+size+1)*2;
        __dec_obj10=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3697))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3697))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3697, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3698))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3699))->buf, "/usr/local/include/neo-c.h", 3699))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3700))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3703))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3703))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3704))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3705))->buf, "/usr/local/include/neo-c.h", 3705))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3705))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    void* __right_value0 = (void*)0;
    char*  mem  ;
    int size;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj11;
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||msg==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=(char* )come_increment_ref_count(__builtin_string(result));
    size=strlen(mem);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3768))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3768))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3769))->size)), (void*)0, 3769, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3770))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3770))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3771))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3772))->size+size+1)*2;
        __dec_obj11=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3773))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3773))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3773, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3774))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3775))->buf, "/usr/local/include/neo-c.h", 3775))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3776))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3779))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3779))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3780))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3781))->buf, "/usr/local/include/neo-c.h", 3781))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3781))->len]=0;
    free(result);
    __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj12;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3795))->len+size+1+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3795))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3796))->size)), (void*)0, 3796, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3797))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3797))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3798))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3799))->size+size+1)*2;
        __dec_obj12=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3800))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3800))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3800, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3801))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3802))->buf, "/usr/local/include/neo-c.h", 3802))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3803))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3806))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3806))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3807))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3808))->buf, "/usr/local/include/neo-c.h", 3808))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3808))->len]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3809))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_int(struct buffer*  self  , int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj13;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3822))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3822))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3823))->size)), (void*)0, 3823, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3824))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3824))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3825))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3826))->size+size+1)*2;
        __dec_obj13=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3827))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3827))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3827, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3828))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3829))->buf, "/usr/local/include/neo-c.h", 3829))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3830))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3833))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3833))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3834))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3835))->buf, "/usr/local/include/neo-c.h", 3835))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3835))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_long(struct buffer*  self  , long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    long* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj14;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3848))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3848))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3849))->size)), (void*)0, 3849, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3850))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3850))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3851))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3852))->size+size+1)*2;
        __dec_obj14=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3853))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3853))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3853, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3854))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3855))->buf, "/usr/local/include/neo-c.h", 3855))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3856))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3859))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3859))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3860))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3861))->buf, "/usr/local/include/neo-c.h", 3861))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3861))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_short(struct buffer*  self  , short value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    short* mem;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj15;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3875))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3875))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3876))->size)), (void*)0, 3876, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3877))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3877))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3878))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3879))->size+size+1)*2;
        __dec_obj15=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3880))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3880))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3880, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3881))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3882))->buf, "/usr/local/include/neo-c.h", 3882))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3883))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3886))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3886))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3887))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3888))->buf, "/usr/local/include/neo-c.h", 3888))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3888))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj16;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3899))->len;
    len=(len+3)&~3;
    if(len>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3902))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3903))->size)), (void*)0, 3903, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3904))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3904))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3905))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3906))->size+1+1)*2;
        __dec_obj16=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3907))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3907))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3907, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3908))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3909))->buf, "/usr/local/include/neo-c.h", 3909))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3910))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    for(i=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3913))->len;i<len;i++){
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3914))->buf, "/usr/local/include/neo-c.h", 3914))[i]=0;
    }
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3917))->len=len;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        neo_current_frame = fr.prev;
        return 1;
    }
    neo_current_frame = fr.prev;
    return strcmp(((struct buffer* )come_null_checker(left, "/usr/local/include/neo-c.h", 3934))->buf,((struct buffer* )come_null_checker(right, "/usr/local/include/neo-c.h", 3934))->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3939, "struct buffer* "))), "/usr/local/include/neo-c.h", 3939)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3945)),self);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3956))->buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (unsigned char*)((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3964))->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3969, "struct buffer* "))), "/usr/local/include/neo-c.h", 3969)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3973)),self,sizeof(char)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3979, "struct buffer* "))), "/usr/local/include/neo-c.h", 3979)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    for(i=0;i<len;i++){
        buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3984)),((char**)come_null_checker(self, "/usr/local/include/neo-c.h", 3984))[i],strlen(((char**)come_null_checker(self, "/usr/local/include/neo-c.h", 3984))[i]));
    }
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3991, "struct buffer* "))), "/usr/local/include/neo-c.h", 3991)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3995)),(char*)self,sizeof(short)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4001, "struct buffer* "))), "/usr/local/include/neo-c.h", 4001)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4005)),(char*)self,sizeof(int)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4011, "struct buffer* "))), "/usr/local/include/neo-c.h", 4011)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4015)),(char*)self,sizeof(long)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4021, "struct buffer* "))), "/usr/local/include/neo-c.h", 4021)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4025)),(char*)self,sizeof(float)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4031, "struct buffer* "))), "/usr/local/include/neo-c.h", 4031)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4035)),(char*)self,sizeof(double)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  buffer_printable(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    char*  result  ;
    char*  __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4041))->len;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 4042, "char*"));
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(result);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    n=0;
    for(i=0;i<len;i++){
        c=((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4050))->buf, "/usr/local/include/neo-c.h", 4050))[i];
        if((c>=0&&c<32)||c==127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4055))[n++]=94;
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4056))[n++]=c+65-1;
        }
        else if(c>127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4059))[n++]=63;
        }
        else {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4062))[n++]=c;
        }
    }
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4068))[n]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1char$_push_back(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((char*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_5;
    struct list_item$1char$* litem_6;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1492, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_5=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1502, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_5;
        ((struct list_item$1char$*)come_null_checker(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_5;
    }
    else {
        litem_6=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1512, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1char$*)come_null_checker(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_6;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_6;
    }
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count(((struct list$1char$*)come_null_checker(((struct list$1char$*)(__right_value0=(struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), (void*)0, 4093, "struct list$1char$*"))), "/usr/local/include/neo-c.h", 4093))),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1char$p_push_back(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((char**)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_7;
    struct list_item$1char$p* litem_8;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1492, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_7=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1502, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$p*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_7;
        ((struct list_item$1char$p*)come_null_checker(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1512, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$p*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1char$p*)come_null_checker(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_8;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_8;
    }
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$p*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)come_null_checker(((struct list$1char$p*)(__right_value0=(struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), (void*)0, 4098, "struct list$1char$p*"))), "/usr/local/include/neo-c.h", 4098))),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1short$_push_back(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((short*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_9;
    struct list_item$1short$* litem_10;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1492, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_9=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1502, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1short$*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_9;
        ((struct list_item$1short$*)come_null_checker(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1512, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1short$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1short$*)come_null_checker(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_10;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_10;
    }
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1short$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count(((struct list$1short$*)come_null_checker(((struct list$1short$*)(__right_value0=(struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), (void*)0, 4103, "struct list$1short$*"))), "/usr/local/include/neo-c.h", 4103))),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1int$_push_back(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((int*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_11;
    struct list_item$1int$* litem_12;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1492, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1502, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_11;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1512, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_12;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_12;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 4108, "struct list$1int$*"))), "/usr/local/include/neo-c.h", 4108))),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1long$_push_back(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((long*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_13;
    struct list_item$1long$* litem_14;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1492, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_13=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1502, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1long$*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_13;
        ((struct list_item$1long$*)come_null_checker(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1512, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1long$*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1long$*)come_null_checker(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_14;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_14;
    }
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1long$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count(((struct list$1long$*)come_null_checker(((struct list$1long$*)(__right_value0=(struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), (void*)0, 4113, "struct list$1long$*"))), "/usr/local/include/neo-c.h", 4113))),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1float$_push_back(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((float*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_15;
    struct list_item$1float$* litem_16;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1492, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_15=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1502, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1float$*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_15;
        ((struct list_item$1float$*)come_null_checker(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_15;
    }
    else {
        litem_16=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1512, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1float$*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1float$*)come_null_checker(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_16;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_16;
    }
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1float$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count(((struct list$1float$*)come_null_checker(((struct list$1float$*)(__right_value0=(struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), (void*)0, 4118, "struct list$1float$*"))), "/usr/local/include/neo-c.h", 4118))),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1double$_push_back(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((double*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_17;
    struct list_item$1double$* litem_18;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1492, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_17=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1502, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1double$*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_17;
        ((struct list_item$1double$*)come_null_checker(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1512, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1double$*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1double$*)come_null_checker(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_18;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_18;
    }
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1double$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count(((struct list$1double$*)come_null_checker(((struct list$1double$*)(__right_value0=(struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), (void*)0, 4123, "struct list$1double$*"))), "/usr/local/include/neo-c.h", 4123))),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  self  , unsigned long  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !charp_operator_equals(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4311)),right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

char*  charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4358, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4373, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4386, "struct buffer* "))), "/usr/local/include/neo-c.h", 4386)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<right;i++){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4389)),self);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4392))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4400, "struct buffer* "))), "/usr/local/include/neo-c.h", 4400)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<right;i++){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4403)),self);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4406))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  len  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
    _Bool result;
    int i;
    result=(_Bool)0;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return result;
    }
    for(i=0;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=(_Bool)1;
            break;
        }
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  shorta_length(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  inta_length(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  longa_length(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  floata_length(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  doublea_length(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
    int result;
    if(value==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    const char* p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; neo_current_frame = &fr;
    int result;
    char* p;
    if(value==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  size_t_clone(unsigned long  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=32&&c<=126);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char*  charp_reverse(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4654, "char*"));
    for(i=0;i<len;i++){
        ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4657))[i]=((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4657))[len-i-1];
    }
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4660))[len]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4681)),tail,head))), "/usr/local/include/neo-c.h", 4681))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 4700, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4703))[tail-head]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4724)),tail,head))), "/usr/local/include/neo-c.h", 4724))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 4743, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4746))[tail-head]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4767)),tail,head))), "/usr/local/include/neo-c.h", 4767))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 4786, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4789))[tail-head]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    char*  result2  ;
    memset(&result, 0, sizeof(result));
    if(msg==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result2=(char* )come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char* )come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), (void*)0, 4852, "char*"));
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4857))[len-(tail-head)]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 0))->item!=((void*)0)) {
        (((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 0))->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj17  ;
    struct list_item$1char$ph* litem_19;
    char*  __dec_obj18  ;
    struct list_item$1char$ph* litem_20;
    char*  __dec_obj19  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1492, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        __dec_obj17=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(char* )come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_19=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1502, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj18=((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1506))->item=(char* )come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_19;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1512, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj19=((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1516))->item=(char* )come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_20;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_20;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  str  ;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 4865, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 4865)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 4868, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 4868)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4870, "struct buffer* "))), "/usr/local/include/neo-c.h", 4870)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<charp_length(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4872)));i++){
        if(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4873))[i]==c) {
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 4874)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4874))->buf)));
            buffer_reset(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4875)));
        }
        else {
            buffer_append_char(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4878)),((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4878))[i]);
        }
    }
    if(buffer_length(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4881)))!=0) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 4882)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4882))->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    int n;
    int i;
    char c;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=charp_length(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4903)));
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 4904, "char*"));
    n=0;
    for(i=0;i<len;i++){
        c=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4908))[i];
        if((c>=0&&c<32)||c==127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4913))[n++]=94;
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4914))[n++]=c+65-1;
        }
        else {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4917))[n++]=c;
        }
    }
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4923))[n]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    char* p2;
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4937, "struct buffer* "))), "/usr/local/include/neo-c.h", 4937)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    p=self;
    while((_Bool)1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4949)),p,p2-p);
            break;
        }
        buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4953)),p,p2-p);
        buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4954)),replace);
        p=p2+strlen(str);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4959))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==47) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    path2=(char* )come_increment_ref_count(xbasename(path));
    p=path2+strlen(path2);
    while(p>=path2) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path2) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(((char* )come_null_checker(path2, "/usr/local/include/neo-c.h", 5013)),0,p-path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
    if(!left&&right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
        neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
        neo_current_frame = fr.prev;
        return 0;
    }
    else {
        neo_current_frame = fr.prev;
        return 1;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
    if(left<right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        neo_current_frame = fr.prev;
        return 1;
    }
    else {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
    if(left<right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        neo_current_frame = fr.prev;
        return 1;
    }
    else {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
    if(left<right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        neo_current_frame = fr.prev;
        return 1;
    }
    else {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
    if(left<right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        neo_current_frame = fr.prev;
        return 1;
    }
    else {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  left  , unsigned long  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
    if(left<right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        neo_current_frame = fr.prev;
        return 1;
    }
    else {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
    if(left<right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        neo_current_frame = fr.prev;
        return 1;
    }
    else {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
    if(left<right) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        neo_current_frame = fr.prev;
        return 1;
    }
    else {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        neo_current_frame = fr.prev;
        return 1;
    }
    neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        neo_current_frame = fr.prev;
        return 1;
    }
    neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    puts(self);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    printf("%s",self);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* msg2;
    __builtin_va_list  args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);
    printf("%s",msg2);
    free(msg2);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    for(i=0;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

static void match_context_finalize(struct anonymous_typeX25*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "match_context_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

int re_matchp_ex(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_matchp_ex"; neo_current_frame = &fr;
    struct re_program*  program  ;
    struct regex_t*  start  ;
    struct anonymous_typeX25  ctx  ;
    int __result_obj__0;
    memset(&ctx, 0, sizeof(ctx));
    *matchlength=0;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return -1;
    }
    program=(struct re_program* )pattern;
    start=((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5523))->start;
    if(start==0) {
        neo_current_frame = fr.prev;
        return -1;
    }
    ctx.base=text;
    ctx.captures=(((captures!=0&&max_captures>0))?(captures):(0));
    ctx.capture_capacity=(((captures!=0&&max_captures>0))?(max_captures):(0));
    if(ctx.capture_capacity>64) {
        ctx.capture_capacity=64;
    }
    ctx.total_groups=((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5537))->group_count;
    ctx.ignore_case=ignore_case;
    if(ctx.captures!=0) {
        clear_captures(&ctx);
    }
    if(((struct regex_t* )come_null_checker(start, "/usr/local/include/neo-c.h", 5545))->type==(2)) {
        const char* end=matchpattern(((struct regex_t* )come_null_checker(start, "/usr/local/include/neo-c.h", 5547))->next,text,&ctx);
        if(end!=0) {
            *matchlength=(int)(end-text);
            if(ctx.captures!=0) {
            }
            __result_obj__0 = 0;
            come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __result_obj__0 = -1;
        come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        const char* cursor=text;
        while(1) {
            if(ctx.captures!=0) {
                clear_captures(&ctx);
            }
            const char* end_21=matchpattern(start,cursor,&ctx);
            if(end_21!=0) {
                if(*cursor==0&&cursor!=text) {
                    __result_obj__0 = -1;
                    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                *matchlength=(int)(end_21-cursor);
                __result_obj__0 = (int)(cursor-text);
                come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(*cursor==0) {
                break;
            }
            cursor+=1;
        }
    }
    __result_obj__0 = -1;
    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int re_matchp(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_matchp"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return re_matchp_ex(pattern,text,matchlength,captures,max_captures,(_Bool)0);
    neo_current_frame = fr.prev;
}

int re_match(const char* pattern, const char* text, int* matchlength)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_match"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return re_matchp(re_compile(pattern),text,matchlength,(struct re_capture* )0,0);
    neo_current_frame = fr.prev;
}

static void regex_program_t_finalize(struct re_program*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "regex_program_t_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

static void compiler_state_finalize(struct anonymous_typeX24*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compiler_state_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct re_program*  re_compile(const char* pattern)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_compile"; neo_current_frame = &fr;
    static struct re_program  program  ;
    struct anonymous_typeX24  state  ;
    int pos;
    struct regex_t*  head  ;
    struct re_program*  __result_obj__0  ;
    memset(&program, 0, sizeof(program));
    memset(&state, 0, sizeof(state));
    static struct regex_t  re_compiled[64]  ;
    memset(&re_compiled, 0, sizeof(re_compiled));
    static unsigned char ccl_buf[40];
    memset(&ccl_buf, 0, sizeof(ccl_buf));
    state.pool=re_compiled;
    state.pool_capacity=64;
    state.pool_size=0;
    state.ccl_buf=ccl_buf;
    state.ccl_capacity=40;
    state.ccl_idx=1;
    state.group_count=0;
    if(state.ccl_capacity>0) {
        ((unsigned char*)come_null_checker(state.ccl_buf, "/usr/local/include/neo-c.h", 5617))[0]=0;
    }
    pos=0;
    head=compile_sequence(&state,pattern,&pos,0);
    if((head==0)||(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5622))[pos]!=0)) {
        __result_obj__0 = ((void*)0);
        come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    program.start=head;
    program.group_count=state.group_count;
    __result_obj__0 = (struct re_program* )&program;
    come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void re_print(struct re_program*  pattern  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_print"; neo_current_frame = &fr;
    struct re_program*  program  ;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return;
    }
    program=(struct re_program* )pattern;
    if(((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5641))->start==0) {
        neo_current_frame = fr.prev;
        return;
    }
    re_print_internal(((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5646))->start,0);
    neo_current_frame = fr.prev;
}

void clear_captures(struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clear_captures"; neo_current_frame = &fr;
    int i;
    if((((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5653))->captures==0)||(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5653))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    for(i=0;i<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5658))->capture_capacity;++i){
        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5660))->captures, "/usr/local/include/neo-c.h", 5660))[i].start=-1;
        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5661))->captures, "/usr/local/include/neo-c.h", 5661))[i].length=0;
    }
    neo_current_frame = fr.prev;
}

void snapshot_captures(const struct anonymous_typeX25*  ctx  , struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "snapshot_captures"; neo_current_frame = &fr;
    if((((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5667))->captures==0)||(((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5667))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(buffer_,((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5672))->captures,sizeof(struct re_capture )*((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5672))->capture_capacity);
    neo_current_frame = fr.prev;
}

void restore_captures(struct anonymous_typeX25*  ctx  , const struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "restore_captures"; neo_current_frame = &fr;
    if((((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5677))->captures==0)||(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5677))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5682))->captures,buffer_,sizeof(struct re_capture )*((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5682))->capture_capacity);
    neo_current_frame = fr.prev;
}

struct regex_t*  new_token(struct anonymous_typeX24*  st  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "new_token"; neo_current_frame = &fr;
    struct regex_t*  __result_obj__0  ;
    struct regex_t*  token  ;
    if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5688))->pool_size>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5688))->pool_capacity) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    token=&((struct regex_t* )come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5693))->pool, "/usr/local/include/neo-c.h", 5693))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5693))->pool_size++];
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5694))->type=(0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5695))->u.ccl=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5696))->next=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5697))->u.group.first=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5698))->u.group.last=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5699))->u.group.id=0;
    __result_obj__0 = token;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int append_token(struct regex_t**  head  , struct regex_t**  tail  , struct regex_t*  token  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_token"; neo_current_frame = &fr;
    if(token==0) {
        neo_current_frame = fr.prev;
        return 0;
    }
    if(*head==0) {
        *head=token;
    }
    else {
        ((struct regex_t* )come_null_checker((*tail), "/usr/local/include/neo-c.h", 5716))->next=token;
    }
    *tail=token;
    neo_current_frame = fr.prev;
    return 1;
    neo_current_frame = fr.prev;
}

struct regex_t*  compile_sequence(struct anonymous_typeX24*  st  , const char* pattern, int* pos, int in_group)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compile_sequence"; neo_current_frame = &fr;
    struct regex_t*  head  ;
    struct regex_t*  tail  ;
    char c;
    struct regex_t*  token  ;
    struct regex_t*  __result_obj__0  ;
    int buf_begin;
    int negated;
    struct regex_t*  inner  ;
    struct regex_t*  tail_22  ;
    struct regex_t*  sentinel  ;
    head=(struct regex_t* )0;
    tail=(struct regex_t* )0;
    while(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5727))[*pos]!=0) {
        c=((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5729))[*pos];
        if(in_group&&(c==41)) {
            break;
        }
        token=(struct regex_t* )0;
        switch (        c) {
            case 94:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5744))->type=(2);
                (*pos)++;
            }
            break;
            case 36:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5752))->type=(3);
                (*pos)++;
            }
            break;
            case 46:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5760))->type=(1);
                (*pos)++;
            }
            break;
            case 42:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5768))->type=(5);
                (*pos)++;
            }
            break;
            case 43:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5776))->type=(6);
                (*pos)++;
            }
            break;
            case 63:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5784))->type=(4);
                (*pos)++;
            }
            break;
            case 92:
            {
                (*pos)++;
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5791))[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                switch (                ((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5799))[*pos]) {
                    case 100:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5801))->type=(10);
                    break;
                    case 68:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5802))->type=(11);
                    break;
                    case 119:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5803))->type=(12);
                    break;
                    case 87:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5804))->type=(13);
                    break;
                    case 115:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5805))->type=(14);
                    break;
                    case 83:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5806))->type=(15);
                    break;
                    default:
                    {
                        ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5809))->type=(7);
                        ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5810))->u.ch=(unsigned char)((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5810))[*pos];
                    }
                    break;
                }
                (*pos)++;
            }
            break;
            case 91:
            {
                buf_begin=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5818))->ccl_idx;
                negated=0;
                (*pos)++;
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5822))[*pos]==94) {
                    negated=1;
                    (*pos)++;
                    if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5826))[*pos]==0) {
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5832))[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                while((((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5837))[*pos]!=0)&&(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5837))[*pos]!=93)) {
                    if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5839))[*pos]==92) {
                        if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5841))->ccl_idx>=(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5841))->ccl_capacity-1)) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                        ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5845))->ccl_buf, "/usr/local/include/neo-c.h", 5845))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5845))->ccl_idx++]=92;
                        (*pos)++;
                        if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5847))[*pos]==0) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                    }
                    if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5853))->ccl_idx>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5853))->ccl_capacity) {
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5857))->ccl_buf, "/usr/local/include/neo-c.h", 5857))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5857))->ccl_idx++]=(unsigned char)((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5857))[*pos];
                    (*pos)++;
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5861))[*pos]!=93) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5866))->ccl_idx>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5866))->ccl_capacity) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5870))->ccl_buf, "/usr/local/include/neo-c.h", 5870))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5870))->ccl_idx++]=0;
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5874))->type=((negated)?((9)):((8)));
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5875))->u.ccl=&((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5875))->ccl_buf, "/usr/local/include/neo-c.h", 5875))[buf_begin];
                (*pos)++;
            }
            break;
            case 40:
            {
                (*pos)++;
                inner=compile_sequence(st,pattern,pos,1);
                if(inner==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5888))[*pos]!=41) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                tail_22=inner;
                while((tail_22!=0)&&(((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 5894))->type!=(0))) {
                    tail_22=((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 5896))->next;
                }
                if(tail_22==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5905))->type=(16);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5906))->u.group.first=inner;
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5907))->u.group.last=tail_22;
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5908))->u.group.id=++((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5908))->group_count;
                ((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 5910))->type=(17);
                ((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 5911))->u.group.first=token;
                (*pos)++;
            }
            break;
            case 41:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5920))->type=(7);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5921))->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
            default:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5929))->type=(7);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5930))->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
        }
        if(!append_token(&head,&tail,token)) {
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    sentinel=new_token(st);
    if(sentinel==0) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct regex_t* )come_null_checker(sentinel, "/usr/local/include/neo-c.h", 5946))->type=(0);
    ((struct regex_t* )come_null_checker(sentinel, "/usr/local/include/neo-c.h", 5947))->next=((void*)0);
    if(head==0) {
        head=sentinel;
    }
    else {
        ((struct regex_t* )come_null_checker(tail, "/usr/local/include/neo-c.h", 5955))->next=sentinel;
    }
    __result_obj__0 = head;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchpattern(struct regex_t*  pattern  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchpattern"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct regex_t*  current  ;
    struct regex_t*  next  ;
    struct regex_t*  owner  ;
    int idx;
    int start;
    if(pattern==0) {
        __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 5968))->type==(0)) {
        __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    struct re_capture  snapshot[64]  ;
    memset(&snapshot, 0, sizeof(snapshot));
    snapshot_captures(ctx,snapshot);
    current=pattern;
    const char* cursor=text;
    while(current!=0&&((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5979))->type!=(0)) {
        next=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5981))->next;
        if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5983))->type==(17)) {
            owner=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5985))->u.group.first;
            if((owner!=0)&&(((struct regex_t* )come_null_checker(owner, "/usr/local/include/neo-c.h", 5986))->u.group.id>0)&&(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5986))->captures!=0)) {
                idx=((struct regex_t* )come_null_checker(owner, "/usr/local/include/neo-c.h", 5988))->u.group.id-1;
                if(idx<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5989))->capture_capacity) {
                    start=((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5991))->captures, "/usr/local/include/neo-c.h", 5991))[idx].start;
                    if(start>=0) {
                        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5994))->captures, "/usr/local/include/neo-c.h", 5994))[idx].length=(int)(cursor-((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5994))->base)-start;
                        if(((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5995))->captures, "/usr/local/include/neo-c.h", 5995))[idx].length<0) {
                            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5997))->captures, "/usr/local/include/neo-c.h", 5997))[idx].length=0;
                        }
                    }
                }
            }
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6002))->next;
            continue;
        }
        if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6006))->type==(4))) {
            const char* result=matchquestion(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6008))->next,cursor,ctx);
            if(result!=0) {
                __result_obj__0 = result;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6016))->type==(5))) {
            const char* result_23=matchstar(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6018))->next,cursor,ctx);
            if(result_23!=0) {
                __result_obj__0 = result_23;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6026))->type==(6))) {
            const char* result_24=matchplus(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6028))->next,cursor,ctx);
            if(result_24!=0) {
                __result_obj__0 = result_24;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6036))->type==(16)) {
            const char* result_25=matchgroup(current,next,cursor,ctx);
            if(result_25!=0) {
                __result_obj__0 = result_25;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6046))->type==(3)) {
            if(*cursor!=0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6053))->next;
        }
        else {
            const char* after=matchtoken(current,cursor,ctx);
            if(after==0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            cursor=after;
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6064))->next;
        }
    }
    __result_obj__0 = cursor;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchgroup(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchgroup"; neo_current_frame = &fr;
    struct regex_t*  end_token  ;
    struct regex_t*  saved_next  ;
    int idx;
    const char* __result_obj__0;
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    end_token=((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6076))->u.group.last;
    saved_next=((end_token!=0)?(((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6077))->next):(0));
    if(end_token!=0) {
        ((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6080))->next=rest;
    }
    if(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6083))->u.group.id>0&&((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6083))->captures!=0) {
        idx=((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6085))->u.group.id-1;
        if(idx<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6086))->capture_capacity) {
            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6088))->captures, "/usr/local/include/neo-c.h", 6088))[idx].start=(int)(text-((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6088))->base);
            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6089))->captures, "/usr/local/include/neo-c.h", 6089))[idx].length=0;
        }
    }
    const char* result=matchpattern(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6093))->u.group.first,text,ctx);
    if(end_token!=0) {
        ((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6097))->next=saved_next;
    }
    if(result==0) {
        restore_captures(ctx,snapshot_entry);
    }
    __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchstar(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchstar"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* consume=matchtoken(token,text,ctx);
    while((consume!=0)&&(consume!=text)) {
        struct re_capture  snapshot_after_token[64]  ;
        memset(&snapshot_after_token, 0, sizeof(snapshot_after_token));
        snapshot_captures(ctx,snapshot_after_token);
        const char* recursive=matchstar(token,rest,consume,ctx);
        if(recursive!=0) {
            __result_obj__0 = recursive;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        restore_captures(ctx,snapshot_after_token);
        consume=matchtoken(token,consume,ctx);
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = matchpattern(rest,text,ctx);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchplus(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchplus"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* first=matchtoken(token,text,ctx);
    if((first==0)||(first==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    const char* result=matchstar(token,rest,first,ctx);
    if(result!=0) {
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchquestion(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchquestion"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* skipped=matchpattern(rest,text,ctx);
    if(skipped!=0) {
        __result_obj__0 = skipped;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    const char* consumed=matchtoken(token,text,ctx);
    if((consumed==0)||(consumed==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    const char* with=matchpattern(rest,consumed,ctx);
    if(with!=0) {
        __result_obj__0 = with;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned char re_fold_char(unsigned char c, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_fold_char"; neo_current_frame = &fr;
    if(ignore_case&&c>=65&&c<=90) {
        neo_current_frame = fr.prev;
        return (unsigned char)(c-65+97);
    }
    neo_current_frame = fr.prev;
    return c;
    neo_current_frame = fr.prev;
}

const char* matchtoken(struct regex_t*  token  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchtoken"; neo_current_frame = &fr;
    const char* __result_obj__0;
    switch (    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6196))->type) {
        case (1):
        __result_obj__0 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (7):
        __result_obj__0 = (((*text!=0&&re_fold_char(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6203))->u.ch,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6203))->ignore_case)==re_fold_char((unsigned char)*text,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6203))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (8):
        __result_obj__0 = (((*text!=0&&matchcharclass(*text,(const char*)((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6207))->u.ccl,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6207))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (9):
        __result_obj__0 = (((*text!=0&&!matchcharclass(*text,(const char*)((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6210))->u.ccl,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6210))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (10):
        __result_obj__0 = (((*text!=0&&matchdigit(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (11):
        __result_obj__0 = (((*text!=0&&!matchdigit(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (12):
        __result_obj__0 = (((*text!=0&&matchalphanum(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (13):
        __result_obj__0 = (((*text!=0&&!matchalphanum(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (14):
        __result_obj__0 = (((*text!=0&&matchwhitespace(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (15):
        __result_obj__0 = (((*text!=0&&!matchwhitespace(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (16):
        __result_obj__0 = matchgroup(token,(struct regex_t* )0,text,ctx);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (2):
        __result_obj__0 = (((text==((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6234))->base))?(text):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (3):
        __result_obj__0 = (((*text==0))?(text):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        default:
        break;
    }
    __result_obj__0 = (const char*)0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int matchdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisdigit((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchalpha"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisalpha((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchwhitespace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchwhitespace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisspace((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalphanum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchalphanum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((c==95)||matchalpha(c)||matchdigit(c));
    neo_current_frame = fr.prev;
}

int matchrange(char c, const char* str, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchrange"; neo_current_frame = &fr;
    unsigned char needle;
    unsigned char start;
    unsigned char end;
    needle=(unsigned char)c;
    start=(unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6266))[0];
    end=(unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6267))[2];
    if(ignore_case) {
        needle=re_fold_char(needle,(_Bool)1);
        start=re_fold_char(start,(_Bool)1);
        end=re_fold_char(end,(_Bool)1);
    }
    neo_current_frame = fr.prev;
    return ((needle!=45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6275))[0]!=0)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6276))[0]!=45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6277))[1]==45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6278))[2]!=0)&&((needle>=start)&&(needle<=end)));
    neo_current_frame = fr.prev;
}

int matchdot(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchdot"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c!=10&&c!=13;
    neo_current_frame = fr.prev;
}

int ismetachar(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ismetachar"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
    neo_current_frame = fr.prev;
}

int matchmetachar(char c, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchmetachar"; neo_current_frame = &fr;
    switch (    ((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6297))[0]) {
        case 100:
        neo_current_frame = fr.prev;
        return matchdigit(c);
        case 68:
        neo_current_frame = fr.prev;
        return !matchdigit(c);
        case 119:
        neo_current_frame = fr.prev;
        return matchalphanum(c);
        case 87:
        neo_current_frame = fr.prev;
        return !matchalphanum(c);
        case 115:
        neo_current_frame = fr.prev;
        return matchwhitespace(c);
        case 83:
        neo_current_frame = fr.prev;
        return !matchwhitespace(c);
        default:
        neo_current_frame = fr.prev;
        return (c==((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6305))[0]);
    }
    neo_current_frame = fr.prev;
}

int matchcharclass(char c, const char* str, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchcharclass"; neo_current_frame = &fr;
    unsigned char needle;
    needle=re_fold_char((unsigned char)c,ignore_case);
    do {
        if(matchrange((char)needle,str,ignore_case)) {
            neo_current_frame = fr.prev;
            return 1;
        }
        else if(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6318))[0]==92) {
            str+=1;
            if(matchmetachar((char)needle,str)) {
                neo_current_frame = fr.prev;
                return 1;
            }
            else if((needle==re_fold_char((unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6325))[0],ignore_case))&&!ismetachar((char)needle)) {
                neo_current_frame = fr.prev;
                return 1;
            }
        }
        else if(needle==re_fold_char((unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6330))[0],ignore_case)) {
            if(needle==45) {
                neo_current_frame = fr.prev;
                return ((((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6334))[-1]==0)||(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6334))[1]==0));
            }
            else {
                neo_current_frame = fr.prev;
                return 1;
            }
        }
    } while(*str++!=0);
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void re_print_internal(struct regex_t*  pattern  , int depth)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_print_internal"; neo_current_frame = &fr;
    int i;
    const char* types[]={
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };
    while(pattern!=0&&((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6356))->type!=(0)) {
        for(i=0;i<depth;++i){
            putchar(32);
        }
        printf("type: %s",types[((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6362))->type]);
        if((((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6364))->type==(8))||(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6364))->type==(9))) {
            printf(" [");
            const unsigned char* ccl=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6367))->u.ccl;
            while(*ccl!=0&&*ccl!=93) {
                printf("%c",*ccl);
                ++ccl;
            }
            printf("]");
        }
        else if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6375))->type==(7)) {
            printf(" '%c'",((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6377))->u.ch);
        }
        else if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6379))->type==(16)) {
            printf(" id=%d\n",((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6381))->u.group.id);
            re_print_internal(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6382))->u.group.first,depth+2);
            pattern=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6383))->next;
            continue;
        }
        printf("\n");
        pattern=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6388))->next;
    }
    neo_current_frame = fr.prev;
}

int re_get_group_count(struct re_program*  pattern  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_get_group_count"; neo_current_frame = &fr;
    struct re_program*  program  ;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return 0;
    }
    program=(struct re_program* )pattern;
    neo_current_frame = fr.prev;
    return ((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 6400))->group_count;
    neo_current_frame = fr.prev;
}

int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_regex"; neo_current_frame = &fr;
    struct re_program*  re  ;
    int result;
    int offset;
    int n;
    int result_26;
    int matchlength;
    int max_captures;
    int regex_result;
    if(self==((void*)0)||reg==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    result_26=default_value;
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_26=regex_result;
            break;
        }
        {
            break;
        }
    }
    neo_current_frame = fr.prev;
    return result_26;
    neo_current_frame = fr.prev;
}

int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex_regex"; neo_current_frame = &fr;
    struct re_program*  re  ;
    int result;
    int offset;
    int n;
    void* __right_value0 = (void*)0;
    char*  self2  ;
    int result_27;
    int matchlength;
    int max_captures;
    int regex_result;
    int __result_obj__0;
    if(self==((void*)0)||reg==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    self2=(char* )come_increment_ref_count(charp_reverse(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6518))));
    result_27=default_value;
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self2,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_27=strlen(self)-matchlength;
            break;
        }
        {
            break;
        }
    }
    __result_obj__0 = result_27;
    (self2 = come_decrement_ref_count(self2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  string_chomp(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(str));
    if(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6587))[string_length(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6587)))-1]==10) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6588)),0,-2))));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_regex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex_regex(self,reg,default_value,ignore_case);
    neo_current_frame = fr.prev;
}

int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_regex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index_regex(self,reg,default_value,ignore_case);
    neo_current_frame = fr.prev;
}

_Bool charp_match(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_match"; neo_current_frame = &fr;
    struct re_program*  re  ;
    int offset;
    int n;
    int matchlength;
    int max_captures;
    int regex_result;
    _Bool __result_obj__0;
    if(self==((void*)0)||reg==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    offset=0;
    n=0;
    matchlength=0;
    max_captures=8;
    struct re_capture  captures[max_captures]  ;
    memset(&captures, 0, sizeof(captures));
    regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
    if(regex_result>=0) {
        __result_obj__0 = (_Bool)1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (_Bool)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj20  ;
    struct list_item$1char$ph* litem_28;
    char*  __dec_obj21  ;
    struct list_item$1char$ph* litem_29;
    char*  __dec_obj22  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1406))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1407, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1409))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1410))->next=((void*)0);
        __dec_obj20=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(char* )come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1417, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj21=((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1421))->item=(char* )come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_28;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1427, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj22=((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1431))->item=(char* )come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_29;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_29;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_scan"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    int i;
    struct re_capture*  cp  ;
    char*  match_string  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6756, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6756)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6758, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6758)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6763, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6763)))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6781)),offset+regex_result,offset+regex_result+matchlength));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6783)),(char* )come_increment_ref_count(str));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 6796)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 6796))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 6796))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 6796))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6797)),(char* )come_increment_ref_count(match_string));
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    char*  str_30  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6819, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6819)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6822, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6822)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6827, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6827)))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6845)),offset,offset+regex_result));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6847)),(char* )come_increment_ref_count(str));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    if(offset<charp_length(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6863)))) {
        str_30=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6864)),offset,-1));
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6865)),(char* )come_increment_ref_count(str_30));
        (str_30 = come_decrement_ref_count(str_30, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_sub(self,reg,replace,(_Bool)1,ignore_case))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_scan"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_scan(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_split"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool string_match(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_match"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_match(self,reg,ignore_case);
    neo_current_frame = fr.prev;
}

char*  charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    struct re_program*  re  ;
    int offset;
    int n;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    char*  str_31  ;
    char*  str_32  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 6912, "struct buffer* "))), "/usr/local/include/neo-c.h", 6912)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6925)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6927)),str);
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6928)),replace);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_31=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6938)),offset,-1));
                buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6939)),str_31);
                (str_31 = come_decrement_ref_count(str_31, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_31 = come_decrement_ref_count(str_31, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_32=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6945)),offset,-1));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6946)),str_32);
            (str_32 = come_decrement_ref_count(str_32, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_32 = come_decrement_ref_count(str_32, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6951))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    struct list$1char$ph* group_strings;
    char*  match_string  ;
    char*  block_result  ;
    char*  str_33  ;
    char*  str_34  ;
    struct list$1char$ph* group_strings_35;
    int i;
    struct re_capture*  cp  ;
    char*  match_string_36  ;
    char*  match_string_37  ;
    char*  block_result_38  ;
    char*  str_39  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 6960, "struct buffer* "))), "/usr/local/include/neo-c.h", 6960)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6983)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6985)),str);
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6987, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6987)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            match_string=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6989)),offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6993)),block_result);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_33=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7003)),offset,-1));
                buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7004)),str_33);
                (str_33 = come_decrement_ref_count(str_33, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
                (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_33 = come_decrement_ref_count(str_33, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            str_34=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7011)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7013)),str_34);
            group_strings_35=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7015, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7015)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string_36=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 7019)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7019))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7019))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7019))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(group_strings_35, "/usr/local/include/neo-c.h", 7020)),(char* )come_increment_ref_count(match_string_36));
                (match_string_36 = come_decrement_ref_count(match_string_36, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_37=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7023)),offset+regex_result,offset+regex_result+matchlength));
            block_result_38=(char*)come_increment_ref_count(block(parent,match_string_37,group_strings_35));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7027)),block_result_38);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str_34 = come_decrement_ref_count(str_34, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_37 = come_decrement_ref_count(match_string_37, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_38 = come_decrement_ref_count(block_result_38, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_39=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7038)),offset,-1));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7039)),str_39);
            (str_39 = come_decrement_ref_count(str_39, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_39 = come_decrement_ref_count(str_39, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7043))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_scan_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    struct list$1char$ph* group_strings;
    char*  match_string  ;
    char*  block_result  ;
    struct list$1char$ph* group_strings_40;
    int i;
    struct re_capture*  cp  ;
    char*  match_string_41  ;
    char*  match_string_42  ;
    char*  block_result_43  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7049, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7049)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7051, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7051)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7056, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7056)))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7074, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7074)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            match_string=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7076)),offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7080)),(char* )come_increment_ref_count(block_result));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            group_strings_40=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7091, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7091)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string_41=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 7095)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7095))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7095))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7095))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(group_strings_40, "/usr/local/include/neo-c.h", 7096)),(char* )come_increment_ref_count(match_string_41));
                (match_string_41 = come_decrement_ref_count(match_string_41, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_42=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7099)),offset+regex_result,offset+regex_result+matchlength));
            block_result_43=(char*)come_increment_ref_count(block(parent,match_string_42,group_strings_40));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7103)),(char* )come_increment_ref_count(block_result_43));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_42 = come_decrement_ref_count(match_string_42, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_43 = come_decrement_ref_count(block_result_43, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_sub_block(self,reg,global,ignore_case,parent,block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  __builtin_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_wstring"; neo_current_frame = &fr;
    int*  __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    int*  wstr  ;
    int ret;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    wstr=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len+1)), (void*)0, 7143, "int* "));
    ret=mbstowcs(wstr,str,len+1);
    ((int* )come_null_checker(wstr, "/usr/local/include/neo-c.h", 7146))[ret]=0;
    if(ret<0) {
        ((int* )come_null_checker(wstr, "/usr/local/include/neo-c.h", 7149))[0]=0;
    }
    __result_obj__0 = (int* )come_increment_ref_count(wstr);
    (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wchar_ta_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wstring_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_length(str);
    neo_current_frame = fr.prev;
}

char*  string_lower_case(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_lower_case"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7183))[i]>=65&&((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7183))[i]<=90) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7184))[i]=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7184))[i]-65+97;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_upper_case(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_upper_case"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7198))[i]>=97&&((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7198))[i]<=122) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7199))[i]=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7199))[i]-97+65;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wchar_tp_substring(const int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head>=len) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(tail-head+1)), (void*)0, 7245, "int* "));
    memcpy(result,str+head,sizeof(int )*(tail-head));
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7248))[tail-head]=0;
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_count"; neo_current_frame = &fr;
    int n;
    int len;
    int i;
    int len2;
    int j;
    memset(&j, 0, sizeof(j));
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    n=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        len2=strlen(search_str);
        for(j=0;j<len2;j++){
            if(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7265))[i+j]!=((const char*)come_null_checker(search_str, "/usr/local/include/neo-c.h", 7265))[j]) {
                break;
            }
        }
        if(j==len2) {
            n++;
            if(n==count) {
                neo_current_frame = fr.prev;
                return i;
            }
        }
    }
    neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int charp_rindex(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex"; neo_current_frame = &fr;
    int len;
    char* p;
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    len=strlen(search_str);
    p=(char*)(str+strlen(str)-len);
    while(p>=str) {
        if(strncmp(p,search_str,len)==0) {
            neo_current_frame = fr.prev;
            return p-str;
        }
        p--;
    }
    neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int charp_rindex_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex_count"; neo_current_frame = &fr;
    int len;
    int n;
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    len=strlen(search_str);
    const char* p=(char*)str+strlen(str)-len;
    n=0;
    while(p>=str) {
        if(strncmp(p,search_str,len)==0) {
            n++;
            if(n==count) {
                neo_current_frame = fr.prev;
                return p-str;
            }
        }
        p--;
    }
    neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

char*  charp_strip(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_strip"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(self));
    len=strlen(self);
    if(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7337))[len-1]==10) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7338))[len-1]=0;
    }
    else if(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7340))[len-1]==13) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7341))[len-1]=0;
    }
    else if(len>2&&((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7343))[len-2]==13&&((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7343))[len-1]==10) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7344))[len-2]=0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  wchar_tp_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=16*(wcslen(wstr)+1);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 7358, "char*"));
    if(wcstombs(result,wstr,len)<0) {
        strncpy(result,"",len);
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  wchar_ta_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  charp_to_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  chara_to_wstring(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wchar_tp_delete(int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    int*  sub_str  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    if(len==0) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7400))))), "/usr/local/include/neo-c.h", 7400))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7416))))), "/usr/local/include/neo-c.h", 7416))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    sub_str=(int* )come_increment_ref_count(wchar_tp_substring(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7423)),tail,-1));
    memcpy(str+head,sub_str,sizeof(int )*(wstring_length(((int* )come_null_checker(sub_str, "/usr/local/include/neo-c.h", 7425)))+1));
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7427))))), "/usr/local/include/neo-c.h", 7427))))));
    (sub_str = come_decrement_ref_count(sub_str, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_index"; neo_current_frame = &fr;
    int*  head  ;
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    head=wcsstr(str,search_str);
    if(head==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

int wchar_tp_rindex(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_rindex"; neo_current_frame = &fr;
    int len;
    int*  p  ;
    int len2;
    _Bool result;
    int i;
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    len=wcslen(search_str);
    p=(int* )str+wcslen(str)-len;
    while(p>=str) {
        len2=wcslen(p);
        result=(_Bool)1;
        for(i=0;i<len&&i<len2;i++){
            if(((int* )come_null_checker(p, "/usr/local/include/neo-c.h", 7460))[i]!=((const int* )come_null_checker(search_str, "/usr/local/include/neo-c.h", 7460))[i]) {
                result=(_Bool)0;
            }
        }
        if(result) {
            neo_current_frame = fr.prev;
            return (p-str);
        }
        p--;
    }
    neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int*  wchar_tp_reverse(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len+1)), (void*)0, 7481, "int* "));
    for(i=0;i<len;i++){
        ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7484))[i]=((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7484))[len-i-1];
    }
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7487))[len]=0;
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wchar_tp_multiply(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str)*n+1;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len)), (void*)0, 7500, "int* "));
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7502))[0]=0;
    for(i=0;i<n;i++){
        wcscat(result,str);
    }
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wchar_tp_printable(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    int n;
    int i;
    int  c  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wchar_tp_length(((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7516)));
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len*2+1)), (void*)0, 7517, "int* "));
    n=0;
    for(i=0;i<len;i++){
        c=((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7521))[i];
        if((c>=0&&c<32)||c==127) {
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7526))[n++]=94;
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7527))[n++]=c+65-1;
        }
        else {
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7530))[n++]=c;
        }
    }
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7536))[n]=0;
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_compare(const int*  left  , int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_compare"; neo_current_frame = &fr;
    if(left==((void*)0)) {
        if(right==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return 1;
        }
    }
    else if(right==((void*)0)) {
        if(left==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return -1;
        }
    }
    neo_current_frame = fr.prev;
    return wcscmp(left,right);
    neo_current_frame = fr.prev;
}

int wstring_compare(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_compare"; neo_current_frame = &fr;
    if(left==((void*)0)) {
        if(right==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return 1;
        }
    }
    else if(right==((void*)0)) {
        if(left==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return -1;
        }
    }
    neo_current_frame = fr.prev;
    return wcscmp(left,right);
    neo_current_frame = fr.prev;
}

int*  wchar_tp_operator_mult(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_operator_mult(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wstring_operator_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wstring_operator_not_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)!=0;
    neo_current_frame = fr.prev;
}

int*  wchar_tp_operator_add(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int*  result  ;
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 7625, "int* "));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_operator_add(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int*  result  ;
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 7638, "int* "));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
    char* head;
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

char*  charp_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self);
    if(strcmp(self,"")==0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(index<0) {
        index+=len;
    }
    if(index>=len) {
        index=len-1;
    }
    if(index<0) {
        index=0;
    }
    ((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7683))[index]=c;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_multiply(const char* str, int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)*n+1;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 7695, "char*"));
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 7697))[0]=0;
    for(i=0;i<n;i++){
        strcat(result,str);
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_str(const char* self, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_str"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  buf  ;
    int i;
    if(self==((void*)0)||str==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7709, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7709)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7711, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7711)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 7713, "struct buffer* "))), "/usr/local/include/neo-c.h", 7713)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<charp_length(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7715)));i++){
        if(strstr(self+i,str)==self+i) {
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7717)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7717))->buf)));
            buffer_reset(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7718)));
            i+=strlen(str)-1;
        }
        else {
            buffer_append_char(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7722)),((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7722))[i]);
        }
    }
    if(buffer_length(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7725)))!=0) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7726)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7726))->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

unsigned int wchar_tp_get_hash_key(const int*  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_get_hash_key"; neo_current_frame = &fr;
    int result;
    int*  p  ;
    if(value==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=(int* )value;
    while(*p) {
        result+=(*p);
        p++;
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool wstring_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_equals"; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_operator_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_operator_not_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left!=right;
    neo_current_frame = fr.prev;
}

unsigned int wchar_t_get_hash_key(int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

char*  wchar_t_to_string(int  wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ls",wc))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xrealpath(const char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xrealpath"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* result;
    char*  result2  ;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=realpath(path,((void*)0));
    result2=(char* )come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char* )come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xdirname(const char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xdirname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=__builtin_string(dirname(((char* )(__right_value0=__builtin_string(path))))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned long  xwcslen(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xwcslen"; neo_current_frame = &fr;
    int*  p  ;
    unsigned long  len  ;
    if(wstr==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    p=(int* )wstr;
    len=0;
    while(*p) {
        p++;
        len++;
    }
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

int*  wstring_substring(const int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_substring(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_count"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_count"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

char*  string_strip(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_strip"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_strip(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  wstring_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  int_to_wstring(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 7870))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_delete(int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_delete(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wstring_index(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_index"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int wstring_rindex(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_rindex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int*  wstring_reverse(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_reverse(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_multiply(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_printable(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned int wstring_get_hash_key(const int*  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_get_hash_key(value);
    neo_current_frame = fr.prev;
}

int string_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

char*  string_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_replace(self,index,c))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_multiply(const char* str, int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_split_str(const char* self, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_split_str"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split_str(self,str))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int*  string_to_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=charp_to_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_chomp(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=string_chomp(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wchar_tp_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)!=0;
    neo_current_frame = fr.prev;
}

char*  FILE_read(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    if(f==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 7964, "struct buffer* "))), "/usr/local/include/neo-c.h", 7964)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7971)),buf2,size);
        if(size<8192) {
            break;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7978))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
    if(f==((void*)0)||str==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
    int result;
    if(f==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    result=fclose(f);
    if(result<0) {
        neo_current_frame = fr.prev;
        return result;
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

struct _IO_FILE*  FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fprintf"; neo_current_frame = &fr;
    struct _IO_FILE*  __result_obj__0  ;
    __builtin_va_list  args  ;
    int result;
    if(f==((void*)0)||msg==((void*)0)) {
        __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    __builtin_va_start(args,msg);
    vsnprintf(msg2,1024*2*2*2,msg,args);
    __builtin_va_end(args);
    result=fprintf(f,"%s",msg2);
    if(result<0) {
        __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = f;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int charp_write(const char* self, const char* file_name, _Bool append)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_write"; neo_current_frame = &fr;
    struct _IO_FILE*  f  ;
    int result;
    int result2;
    memset(&f, 0, sizeof(f));
    if(self==((void*)0)||file_name==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    if(append) {
        f=fopen(file_name,"a");
    }
    else {
        f=fopen(file_name,"w");
    }
    if(f==((void*)0)) {
        neo_current_frame = fr.prev;
        return -1;
    }
    result=fwrite(self,strlen(self),1,f);
    if(result!=1) {
        neo_current_frame = fr.prev;
        return result;
    }
    result2=fclose(f);
    if(result2<0) {
        neo_current_frame = fr.prev;
        return result2;
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

char*  charp_read(const char* file_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    struct _IO_FILE*  f  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    char*  result  ;
    int result2;
    if(file_name==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    f=fopen(file_name,"r");
    if(f==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 8071, "struct buffer* "))), "/usr/local/include/neo-c.h", 8071)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8078)),buf2,size);
        if(size<8192) {
            break;
        }
    }
    result=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8085))));
    result2=fclose(f);
    if(result2<0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 8098, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 8098)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(f==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    while(1) {
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        if(fgets(buf,8192,f)==((void*)0)) {
            break;
        }
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 8111)),(char* )come_increment_ref_count(__builtin_string(buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=32&&c<=126);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize", 0))->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 0))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 1))->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph$p_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 0))->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 0))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 1))->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 1))->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 2))->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 2))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 3))->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 3))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 4))->mSizeNum!=((void*)0)) {
        ((((struct sType* )come_null_checker(self, "sType_finalize", 4))->mSizeNum) ? ((struct sType* )come_null_checker(self, "sType_finalize", 4))->mSizeNum = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 4))->mSizeNum, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 4))->mSizeNum)->finalize, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 4))->mSizeNum)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 5))->mAlignas!=((void*)0)) {
        ((((struct sType* )come_null_checker(self, "sType_finalize", 5))->mAlignas) ? ((struct sType* )come_null_checker(self, "sType_finalize", 5))->mAlignas = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 5))->mAlignas, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 5))->mAlignas)->finalize, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 5))->mAlignas)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 6))->mTupleName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 6))->mTupleName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 6))->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 7))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 8))->mVarAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 8))->mVarAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 8))->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 9))->mMiddleAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 9))->mMiddleAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 9))->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 10))->mPointerAttribute!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 10))->mPointerAttribute = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 10))->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 11))->mAnonymousName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 11))->mAnonymousName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 11))->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 12))->mInnerStructName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 12))->mInnerStructName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 12))->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 13))->mAsmName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 13))->mAsmName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 13))->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 14))->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 14))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 15))->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 15))->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 16))->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 16))->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 17))->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 17))->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 18))->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 18))->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 19))->mOriginalTypeName!=((void*)0)) {
        (((struct sType* )come_null_checker(self, "sType_finalize", 19))->mOriginalTypeName = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 19))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 20))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 20))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 21))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 21))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 22))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sType* )come_null_checker(self, "sType_finalize", 22))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_finalize", 23))->mTypeOfNode!=((void*)0)) {
        ((((struct sType* )come_null_checker(self, "sType_finalize", 23))->mTypeOfNode) ? ((struct sType* )come_null_checker(self, "sType_finalize", 23))->mTypeOfNode = come_decrement_ref_count(((struct sType* )come_null_checker(self, "sType_finalize", 23))->mTypeOfNode, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 23))->mTypeOfNode)->finalize, ((struct sNode*)((struct sType* )come_null_checker(self, "sType_finalize", 23))->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1sType$ph*)come_null_checker(self, "list_item$1sType$ph$p_finalize", 0))->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct list_item$1sType$ph*)come_null_checker(self, "list_item$1sType$ph$p_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 0))->item!=((void*)0)) {
        ((((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 0))->item) ? ((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNode$ph*)come_null_checker(self, "list_item$1sNode$ph$p_finalize", 0))->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sClass_finalize(struct sClass* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 0))->mName!=((void*)0)) {
        (((struct sClass*)come_null_checker(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_checker(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 1))->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, ((struct sClass*)come_null_checker(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 2))->mParentClassName!=((void*)0)) {
        (((struct sClass*)come_null_checker(self, "sClass_finalize", 2))->mParentClassName = come_decrement_ref_count(((struct sClass*)come_null_checker(self, "sClass_finalize", 2))->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 3))->mAttribute!=((void*)0)) {
        (((struct sClass*)come_null_checker(self, "sClass_finalize", 3))->mAttribute = come_decrement_ref_count(((struct sClass*)come_null_checker(self, "sClass_finalize", 3))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sClass* sClass_initialize(struct sClass* self, const char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj23  ;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsType$ph$ph* __dec_obj24;
    struct sClass* __result_obj__0;
    ((struct sClass*)come_null_checker(self, "./common.h", 66))->mNumber=number;
    ((struct sClass*)come_null_checker(self, "./common.h", 67))->mStruct=struct_;
    ((struct sClass*)come_null_checker(self, "./common.h", 68))->mUnion=union_;
    ((struct sClass*)come_null_checker(self, "./common.h", 69))->mGenerics=generics;
    ((struct sClass*)come_null_checker(self, "./common.h", 70))->mMethodGenerics=method_generics;
    ((struct sClass*)come_null_checker(self, "./common.h", 71))->mEnum=(_Bool)0;
    ((struct sClass*)come_null_checker(self, "./common.h", 72))->mProtocol=protocol_;
    ((struct sClass*)come_null_checker(self, "./common.h", 73))->mFloat=float_;
    ((struct sClass*)come_null_checker(self, "./common.h", 74))->mEnum=enum_;
    ((struct sClass*)come_null_checker(self, "./common.h", 75))->mTypeName=typename;
    ((struct sClass*)come_null_checker(self, "./common.h", 76))->mUniq=uniq_;
    __dec_obj23=((struct sClass*)come_null_checker(self, "./common.h", 78))->mName,
    ((struct sClass*)come_null_checker(self, "./common.h", 78))->mName=(char* )come_increment_ref_count(__builtin_string(name));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sClass*)come_null_checker(self, "./common.h", 80))->mGenericsNum=generics_num;
    ((struct sClass*)come_null_checker(self, "./common.h", 81))->mMethodGenericsNum=method_generics_num;
    __dec_obj24=((struct sClass*)come_null_checker(self, "./common.h", 83))->mFields,
    ((struct sClass*)come_null_checker(self, "./common.h", 83))->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 83, "struct list$1tuple2$2char$phsType$ph$ph*"))), "./common.h", 83)))));
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sClass*)come_increment_ref_count(self);
    come_call_finalizer(sClass_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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
    if(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2733))->len*10>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2733))->size) {
        map$2char$phsClass$ph_rehash(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2734)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2736)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2736))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2740))->item_existance, "/usr/local/include/neo-c.h", 2740))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->keys, "/usr/local/include/neo-c.h", 2742))[it], "/usr/local/include/neo-c.h", 2742)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->keys, "/usr/local/include/neo-c.h", 2742))[it]==key)) {
                if(1) {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2745))->key_list, "/usr/local/include/neo-c.h", 2745)),((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2745))->keys, "/usr/local/include/neo-c.h", 2745))[it],(_Bool)0);
                    (((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2746))->keys, "/usr/local/include/neo-c.h", 2746))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2746))->keys, "/usr/local/include/neo-c.h", 2746))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2747))->keys, "/usr/local/include/neo-c.h", 2747))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->key_list, "/usr/local/include/neo-c.h", 2750)),((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->keys, "/usr/local/include/neo-c.h", 2750))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->keys, "/usr/local/include/neo-c.h", 2751))[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2754))->items, "/usr/local/include/neo-c.h", 2754))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2755))->items, "/usr/local/include/neo-c.h", 2755))[it]=(struct sClass* )come_increment_ref_count(item);
                }
                else {
                    ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2758))->items, "/usr/local/include/neo-c.h", 2758))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2765))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2775))->item_existance, "/usr/local/include/neo-c.h", 2775))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2777))->keys, "/usr/local/include/neo-c.h", 2777))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2780))->keys, "/usr/local/include/neo-c.h", 2780))[it]=key;
            }
            if(1) {
                ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2783))->items, "/usr/local/include/neo-c.h", 2783))[it]=(struct sClass* )come_increment_ref_count(item);
            }
            else {
                ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2786))->items, "/usr/local/include/neo-c.h", 2786))[it]=item;
            }
            ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2789))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2796))->key_list, "/usr/local/include/neo-c.h", 2796)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2796))->key_list, "/usr/local/include/neo-c.h", 2796)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2796))->key_list, "/usr/local/include/neo-c.h", 2796)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 2797)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2803))->key_list, "/usr/local/include/neo-c.h", 2803)),(char* )come_increment_ref_count(key));
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
    struct sClass*  default_value_46  ;
    size=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2657))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2658, "char** "))));
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), (void*)0, 2659, "struct sClass** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2660, "_Bool*"))));
    len=0;
    for(it=map$2char$phsClass$ph_begin(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2664)));!map$2char$phsClass$ph_end(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2664)));it=map$2char$phsClass$ph_next(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2664)))){
        memset(&default_value,0,sizeof(struct sClass* ));
        it2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2667)),it,(struct sClass* )come_increment_ref_count(default_value),(_Bool)0)));
        hash=string_get_hash_key(((char* )come_null_checker(((char* )it), "/usr/local/include/neo-c.h", 2668)))%size;
        n=hash;
        while((_Bool)1) {
            if(((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2672))[n]) {
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
                ((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2686))[n]=(_Bool)1;
                ((char** )come_null_checker(keys, "/usr/local/include/neo-c.h", 2687))[n]=it;
                memset(&default_value_46,0,sizeof(struct sClass* ));
                ((struct sClass** )come_null_checker(items, "/usr/local/include/neo-c.h", 2690))[n]=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2690)),it,(struct sClass* )come_increment_ref_count(default_value_46),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free((char*)((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2698))->items);
    (((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2699))->item_existance = come_decrement_ref_count(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2699))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2700))->keys);
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2702))->keys=keys;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2703))->items=items;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2704))->item_existance=item_existance;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->size=size;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2707))->len=len;
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_44  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2626))->key_list, "/usr/local/include/neo-c.h", 2626))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2627))->key_list, "/usr/local/include/neo-c.h", 2627))->it, "/usr/local/include/neo-c.h", 2627))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_44,0,sizeof(char* ));
    __result_obj__0 = result_44;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list, "/usr/local/include/neo-c.h", 2653))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_45  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2636))->key_list, "/usr/local/include/neo-c.h", 2636))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it, "/usr/local/include/neo-c.h", 2641))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2643))->key_list, "/usr/local/include/neo-c.h", 2643))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2644))->key_list, "/usr/local/include/neo-c.h", 2644))->it, "/usr/local/include/neo-c.h", 2644))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_45,0,sizeof(char* ));
    __result_obj__0 = result_45;
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2538)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2538))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2542))->item_existance, "/usr/local/include/neo-c.h", 2542))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2544))->keys, "/usr/local/include/neo-c.h", 2544))[it], "/usr/local/include/neo-c.h", 2544)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2544))->keys, "/usr/local/include/neo-c.h", 2544))[it]==key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2546))->items, "/usr/local/include/neo-c.h", 2546))[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2551))->size) {
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1739))->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(((char* )come_null_checker(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1741))->item, "/usr/local/include/neo-c.h", 1741)),item))||(by_pointer&&((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1741))->item==item)) {
            list$1char$ph_delete(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1742)),it2,it2+1);
            break;
        }
        it2++;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1747))->next;
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
    struct list_item$1char$ph* it_47;
    int i_48;
    struct list_item$1char$ph* prev_it_49;
    struct list_item$1char$ph* it_50;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_51;
    struct list_item$1char$ph* prev_it_52;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1759))->len;
    }
    if(tail<0) {
        tail+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1762))->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1775))->len) {
        tail=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1776))->len;
    }
    if(head>=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1779))->len) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->len) {
        list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1789)));
    }
    else if(head==0) {
        it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1792))->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1798))->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1803))->len--;
            }
            else if(i==tail) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1806))->head=it;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1807))->head, "/usr/local/include/neo-c.h", 1807))->prev=((void*)0);
                break;
            }
            else {
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1811))->next;
                i++;
            }
        }
    }
    else if(tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1816))->len) {
        it_47=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1817))->head;
        i_48=0;
        while(it_47!=((void*)0)) {
            if(i_48==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1821))->tail=((struct list_item$1char$ph*)come_null_checker(it_47, "/usr/local/include/neo-c.h", 1821))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1822))->tail, "/usr/local/include/neo-c.h", 1822))->next=((void*)0);
            }
            if(i_48>=head) {
                prev_it_49=it_47;
                it_47=((struct list_item$1char$ph*)come_null_checker(it_47, "/usr/local/include/neo-c.h", 1828))->next;
                i_48++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1833))->len--;
            }
            else {
                it_47=((struct list_item$1char$ph*)come_null_checker(it_47, "/usr/local/include/neo-c.h", 1836))->next;
                i_48++;
            }
        }
    }
    else {
        it_50=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_51=0;
        while(it_50!=((void*)0)) {
            if(i_51==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_50, "/usr/local/include/neo-c.h", 1851))->prev;
            }
            if(i_51==tail) {
                tail_it=it_50;
            }
            if(i_51>=head&&i_51<tail) {
                prev_it_52=it_50;
                it_50=((struct list_item$1char$ph*)come_null_checker(it_50, "/usr/local/include/neo-c.h", 1861))->next;
                i_51++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1866))->len--;
            }
            else {
                it_50=((struct list_item$1char$ph*)come_null_checker(it_50, "/usr/local/include/neo-c.h", 1869))->next;
                i_51++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(head_prev_it, "/usr/local/include/neo-c.h", 1875))->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(tail_it, "/usr/local/include/neo-c.h", 1878))->prev=head_prev_it;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1719))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1722))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1726))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1727))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1729))->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_53  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->head;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1562))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1563))->it, "/usr/local/include/neo-c.h", 1563))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_53,0,sizeof(char* ));
    __result_obj__0 = result_53;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1590))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_54  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1572))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it, "/usr/local/include/neo-c.h", 1578))->next;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1580))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1581))->it, "/usr/local/include/neo-c.h", 1581))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_54,0,sizeof(char* ));
    __result_obj__0 = result_54;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_initialize"; neo_current_frame = &fr;
    int pointer_num;
    char* p;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  name2  ;
    void* __right_value2 = (void*)0;
    struct sClass*  klass  ;
    struct sClass*  generics_class  ;
    struct sClass*  klass2  ;
    char*  __dec_obj25  ;
    struct sType*  __dec_obj26  ;
    struct sType*  __dec_obj27  ;
    struct list$1sType$ph* __dec_obj28;
    struct list$1sNode$ph* __dec_obj29;
    struct list$1sNode$ph* __dec_obj30;
    struct list$1int$* __dec_obj31;
    struct list$1int$* __dec_obj32;
    struct list$1sType$ph* __dec_obj33;
    struct list$1char$ph* __dec_obj34;
    char*  __dec_obj35  ;
    struct sType*  __dec_obj36  ;
    struct sNode* __dec_obj37;
    struct sNode* __dec_obj38;
    char*  __dec_obj39  ;
    char*  __dec_obj40  ;
    struct sType* __result_obj__0;
    pointer_num=pointer_num_;
    p=name;
    while(*p) {
        if(xisalpha(*p)||*p==95) {
            p++;
        }
        else {
            break;
        }
    }
    while(*p==42) {
        pointer_num++;
        p++;
    }
    name2=(char* )come_increment_ref_count(charp_substring(((char* )come_null_checker(((char* )(__right_value0=__builtin_string(name))), "./common.h", 187)),0,-pointer_num+pointer_num_-1));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    klass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 188))->classes, "./common.h", 188)), "./common.h", 188)),((char* )(__right_value1=__builtin_string(name2))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    generics_class=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 189))->generics_classes, "./common.h", 189)), "./common.h", 189)),name2)));
    if(klass==((void*)0)&&generics_class==((void*)0)) {
        warning_msg(info,"class not found(%s)(1)\n",name2);
    }
    if(klass) {
        ((struct sType*)come_null_checker(self, "./common.h", 196))->mClass=klass;
    }
    else {
        klass2=(struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 199, "struct sClass* "));
        __dec_obj25=((struct sClass* )come_null_checker(klass2, "./common.h", 200))->mName,
        ((struct sClass* )come_null_checker(klass2, "./common.h", 200))->mName=(char* )come_increment_ref_count(__builtin_string(name));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
        map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 202))->classes, "./common.h", 202)),(char* )come_increment_ref_count(__builtin_string(name)),(struct sClass* )come_increment_ref_count(klass2),(_Bool)0);
        ((struct sType*)come_null_checker(self, "./common.h", 204))->mClass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 204))->classes, "./common.h", 204)), "./common.h", 204)),((char* )(__right_value1=__builtin_string(name))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj26=((struct sType*)come_null_checker(self, "./common.h", 207))->mNoSolvedGenericsType,
    ((struct sType*)come_null_checker(self, "./common.h", 207))->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj27=((struct sType*)come_null_checker(self, "./common.h", 208))->mOriginalLoadVarType,
    ((struct sType*)come_null_checker(self, "./common.h", 208))->mOriginalLoadVarType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj28=((struct sType*)come_null_checker(self, "./common.h", 209))->mGenericsTypes,
    ((struct sType*)come_null_checker(self, "./common.h", 209))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 209, "struct list$1sType$ph*"))), "./common.h", 209)))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj29=((struct sType*)come_null_checker(self, "./common.h", 210))->mArrayNum,
    ((struct sType*)come_null_checker(self, "./common.h", 210))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 210, "struct list$1sNode$ph*"))), "./common.h", 210)))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj30=((struct sType*)come_null_checker(self, "./common.h", 211))->mVarNameArrayNum,
    ((struct sType*)come_null_checker(self, "./common.h", 211))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 211, "struct list$1sNode$ph*"))), "./common.h", 211)))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj31=((struct sType*)come_null_checker(self, "./common.h", 212))->mArrayStatic,
    ((struct sType*)come_null_checker(self, "./common.h", 212))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 212, "struct list$1int$*"))), "./common.h", 212)))));
    come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj32=((struct sType*)come_null_checker(self, "./common.h", 213))->mArrayRestrict,
    ((struct sType*)come_null_checker(self, "./common.h", 213))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 213, "struct list$1int$*"))), "./common.h", 213)))));
    come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj33=((struct sType*)come_null_checker(self, "./common.h", 214))->mParamTypes,
    ((struct sType*)come_null_checker(self, "./common.h", 214))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 214, "struct list$1sType$ph*"))), "./common.h", 214)))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj34=((struct sType*)come_null_checker(self, "./common.h", 215))->mParamNames,
    ((struct sType*)come_null_checker(self, "./common.h", 215))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 215, "struct list$1char$ph*"))), "./common.h", 215)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj35=((struct sType*)come_null_checker(self, "./common.h", 216))->mOriginalTypeName,
    ((struct sType*)come_null_checker(self, "./common.h", 216))->mOriginalTypeName=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sType*)come_null_checker(self, "./common.h", 217))->mVarArgs=(_Bool)0;
    __dec_obj36=((struct sType*)come_null_checker(self, "./common.h", 218))->mResultType,
    ((struct sType*)come_null_checker(self, "./common.h", 218))->mResultType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType*)come_null_checker(self, "./common.h", 219))->mUnsigned=unsigned_;
    ((struct sType*)come_null_checker(self, "./common.h", 220))->mConstant=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 221))->mRegister=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 222))->mVolatile=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 223))->mStatic=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 224))->mRestrict=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 225))->mLongLong=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 226))->mHeap=heap;
    ((struct sType*)come_null_checker(self, "./common.h", 227))->mNoHeap=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 229))->mPointerNum=pointer_num;
    __dec_obj37=((struct sType*)come_null_checker(self, "./common.h", 230))->mSizeNum,
    ((struct sType*)come_null_checker(self, "./common.h", 230))->mSizeNum=((void*)0);
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj38=((struct sType*)come_null_checker(self, "./common.h", 232))->mTypeOfNode,
    ((struct sType*)come_null_checker(self, "./common.h", 232))->mTypeOfNode=((void*)0);
    (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj39=((struct sType*)come_null_checker(self, "./common.h", 233))->mMiddleAttribute,
    ((struct sType*)come_null_checker(self, "./common.h", 233))->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj40=((struct sType*)come_null_checker(self, "./common.h", 234))->mPointerAttribute,
    ((struct sType*)come_null_checker(self, "./common.h", 234))->mPointerAttribute=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sType*)come_increment_ref_count(self);
    come_call_finalizer(sType_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
    __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    it=((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sVar$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1sVar$ph*)come_null_checker(self, "list_item$1sVar$ph$p_finalize", 0))->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, ((struct list_item$1sVar$ph*)come_null_checker(self, "list_item$1sVar$ph$p_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 0))->mName!=((void*)0)) {
        (((struct sVar* )come_null_checker(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar* )come_null_checker(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 1))->mCValueName!=((void*)0)) {
        (((struct sVar* )come_null_checker(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar* )come_null_checker(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 2))->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sVar* )come_null_checker(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sVar* )come_null_checker(self, "sVar_finalize", 3))->mFunName!=((void*)0)) {
        (((struct sVar* )come_null_checker(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar* )come_null_checker(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, (void*)0));
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
    it=((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sVar$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_55  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1562))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1563))->it, "/usr/local/include/neo-c.h", 1563))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_55,0,sizeof(struct sType* ));
    __result_obj__0 = result_55;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1590))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_56  ;
    if(self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1572))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it=((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it, "/usr/local/include/neo-c.h", 1578))->next;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1580))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1581))->it, "/usr/local/include/neo-c.h", 1581))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_56,0,sizeof(struct sType* ));
    __result_obj__0 = result_56;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj48  ;
    struct list_item$1sType$ph* litem_57;
    struct sType*  __dec_obj49  ;
    struct list_item$1sType$ph* litem_58;
    struct sType*  __dec_obj50  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1492, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        __dec_obj48=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_57=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1502, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj49=((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1506))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_57;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_57;
    }
    else {
        litem_58=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1512, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj50=((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1516))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_58;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_58;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj51  ;
    struct sType*  __dec_obj52  ;
    struct list$1sType$ph* __dec_obj56;
    struct sType*  __dec_obj57  ;
    struct sNode* __dec_obj58;
    struct sNode* __dec_obj59;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    char*  __dec_obj63  ;
    char*  __dec_obj64  ;
    char*  __dec_obj65  ;
    char*  __dec_obj66  ;
    char*  __dec_obj67  ;
    struct list$1sNode$ph* __dec_obj71;
    struct list$1sNode$ph* __dec_obj72;
    struct list$1int$* __dec_obj73;
    struct list$1int$* __dec_obj74;
    struct sType*  __dec_obj75  ;
    char*  __dec_obj76  ;
    struct list$1sType$ph* __dec_obj77;
    struct list$1char$ph* __dec_obj78;
    struct sType*  __dec_obj79  ;
    struct sNode* __dec_obj80;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3, "struct sType* "));
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 4))->mClass=((struct sType* )come_null_checker(self, "sType_clone", 4))->mClass;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 5))->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj51=((struct sType* )come_null_checker(result, "sType_clone", 5))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 5))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 5))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 6))->mChannelType!=((void*)0)) {
        __dec_obj52=((struct sType* )come_null_checker(result, "sType_clone", 6))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 6))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 6))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 7))->mGenericsTypes!=((void*)0)) {
        __dec_obj56=((struct sType* )come_null_checker(result, "sType_clone", 7))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=((struct sType* )come_null_checker(result, "sType_clone", 8))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mSizeNum!=((void*)0)) {
        __dec_obj58=((struct sType* )come_null_checker(result, "sType_clone", 9))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mSizeNum));
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mAlignas!=((void*)0)) {
        __dec_obj59=((struct sType* )come_null_checker(result, "sType_clone", 10))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mAlignas));
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 11))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mTupleName!=((void*)0)) {
        __dec_obj60=((struct sType* )come_null_checker(result, "sType_clone", 12))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 12))->mTupleName, "sType_clone", 12, "char* "));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 13))->mAttribute!=((void*)0)) {
        __dec_obj61=((struct sType* )come_null_checker(result, "sType_clone", 13))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 13))->mAttribute, "sType_clone", 13, "char* "));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mVarAttribute!=((void*)0)) {
        __dec_obj62=((struct sType* )come_null_checker(result, "sType_clone", 14))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mVarAttribute, "sType_clone", 14, "char* "));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mMiddleAttribute!=((void*)0)) {
        __dec_obj63=((struct sType* )come_null_checker(result, "sType_clone", 15))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mMiddleAttribute, "sType_clone", 15, "char* "));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mPointerAttribute!=((void*)0)) {
        __dec_obj64=((struct sType* )come_null_checker(result, "sType_clone", 16))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mPointerAttribute, "sType_clone", 16, "char* "));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 17))->mAllocaValue=((struct sType* )come_null_checker(self, "sType_clone", 17))->mAllocaValue;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 18))->mUnsigned=((struct sType* )come_null_checker(self, "sType_clone", 18))->mUnsigned;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 19))->mShort=((struct sType* )come_null_checker(self, "sType_clone", 19))->mShort;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 20))->mLong=((struct sType* )come_null_checker(self, "sType_clone", 20))->mLong;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 21))->mLongLong=((struct sType* )come_null_checker(self, "sType_clone", 21))->mLongLong;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 22))->mConstant=((struct sType* )come_null_checker(self, "sType_clone", 22))->mConstant;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 23))->mAtomic=((struct sType* )come_null_checker(self, "sType_clone", 23))->mAtomic;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 24))->mThreadLocal=((struct sType* )come_null_checker(self, "sType_clone", 24))->mThreadLocal;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 25))->mThread=((struct sType* )come_null_checker(self, "sType_clone", 25))->mThread;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 26))->mComplex=((struct sType* )come_null_checker(self, "sType_clone", 26))->mComplex;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 27))->mRegister=((struct sType* )come_null_checker(self, "sType_clone", 27))->mRegister;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 28))->mVolatile=((struct sType* )come_null_checker(self, "sType_clone", 28))->mVolatile;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 29))->mNoreturn=((struct sType* )come_null_checker(self, "sType_clone", 29))->mNoreturn;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 30))->mStatic=((struct sType* )come_null_checker(self, "sType_clone", 30))->mStatic;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 31))->mUniq=((struct sType* )come_null_checker(self, "sType_clone", 31))->mUniq;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 32))->mExtern=((struct sType* )come_null_checker(self, "sType_clone", 32))->mExtern;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 33))->mRestrict=((struct sType* )come_null_checker(self, "sType_clone", 33))->mRestrict;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 34))->mHeap=((struct sType* )come_null_checker(self, "sType_clone", 34))->mHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 35))->mChannel=((struct sType* )come_null_checker(self, "sType_clone", 35))->mChannel;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 36))->mDefferRightValue=((struct sType* )come_null_checker(self, "sType_clone", 36))->mDefferRightValue;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 37))->mNoHeap=((struct sType* )come_null_checker(self, "sType_clone", 37))->mNoHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 38))->mNoCallingDestructor=((struct sType* )come_null_checker(self, "sType_clone", 38))->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 39))->mTypeName=((struct sType* )come_null_checker(self, "sType_clone", 39))->mTypeName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 40))->mAnonymous=((struct sType* )come_null_checker(self, "sType_clone", 40))->mAnonymous;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 41))->mAnonymousName!=((void*)0)) {
        __dec_obj65=((struct sType* )come_null_checker(result, "sType_clone", 41))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 41))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 41))->mAnonymousName, "sType_clone", 41, "char* "));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 42))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 42))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 43))->mInnerStructName!=((void*)0)) {
        __dec_obj66=((struct sType* )come_null_checker(result, "sType_clone", 43))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 43))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 43))->mInnerStructName, "sType_clone", 43, "char* "));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 44))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 44))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 45))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 45))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 46))->mAsmName!=((void*)0)) {
        __dec_obj67=((struct sType* )come_null_checker(result, "sType_clone", 46))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 46))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 46))->mAsmName, "sType_clone", 46, "char* "));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 47))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 47))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 48))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 49))->mArrayNum!=((void*)0)) {
        __dec_obj71=((struct sType* )come_null_checker(result, "sType_clone", 49))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 49))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj72=((struct sType* )come_null_checker(result, "sType_clone", 50))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 50))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 51))->mArrayStatic!=((void*)0)) {
        __dec_obj73=((struct sType* )come_null_checker(result, "sType_clone", 51))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 51))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 52))->mArrayRestrict!=((void*)0)) {
        __dec_obj74=((struct sType* )come_null_checker(result, "sType_clone", 52))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 52))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 53))->mPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 53))->mPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 54))->mFunctionPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 54))->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 55))->mArrayPointerNum=((struct sType* )come_null_checker(self, "sType_clone", 55))->mArrayPointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 56))->mPointerParen=((struct sType* )come_null_checker(self, "sType_clone", 56))->mPointerParen;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 57))->mTypedefOriginalType!=((void*)0)) {
        __dec_obj75=((struct sType* )come_null_checker(result, "sType_clone", 57))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mOriginalTypeName!=((void*)0)) {
        __dec_obj76=((struct sType* )come_null_checker(result, "sType_clone", 58))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 58))->mOriginalTypeName, "sType_clone", 58, "char* "));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 59))->mOriginalTypePointerNum=((struct sType* )come_null_checker(self, "sType_clone", 59))->mOriginalTypePointerNum;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 60))->mOriginalTypePointerHeap=((struct sType* )come_null_checker(self, "sType_clone", 60))->mOriginalTypePointerHeap;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 61))->mArrayPointerType=((struct sType* )come_null_checker(self, "sType_clone", 61))->mArrayPointerType;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 62))->mParamTypes!=((void*)0)) {
        __dec_obj77=((struct sType* )come_null_checker(result, "sType_clone", 62))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 62))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 62))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 63))->mParamNames!=((void*)0)) {
        __dec_obj78=((struct sType* )come_null_checker(result, "sType_clone", 63))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 63))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 63))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 64))->mResultType!=((void*)0)) {
        __dec_obj79=((struct sType* )come_null_checker(result, "sType_clone", 64))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 64))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 64))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 65))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mTypeOfNode!=((void*)0)) {
        __dec_obj80=((struct sType* )come_null_checker(result, "sType_clone", 66))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 66))->mTypeOfNode));
        (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0) :0);
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
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1386, "struct list$1sType$ph*"))), "/usr/local/include/neo-c.h", 1386)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1388))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1391)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1391))->item)));
        }
        else {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1394)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1394))->item)));
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1397))->next;
    }
    __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct sType*  __dec_obj53  ;
    struct list_item$1sType$ph* litem_59;
    struct sType*  __dec_obj54  ;
    struct list_item$1sType$ph* litem_60;
    struct sType*  __dec_obj55  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1406))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1407, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1409))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1410))->next=((void*)0);
        __dec_obj53=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_59=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1417, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj54=((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1421))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_59;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_59;
    }
    else {
        litem_60=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1427, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj55=((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1431))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_60;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_60;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    if(self!=((void*)0)&&((struct sNode*)come_null_checker(self, "sNode_clone", 4))->clone!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_checker(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_checker(self, "sNode_clone", 4))->_protocol_obj);
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 5))->finalize=((struct sNode*)come_null_checker(self, "sNode_clone", 5))->finalize;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 6))->clone=((struct sNode*)come_null_checker(self, "sNode_clone", 6))->clone;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 7))->compile=((struct sNode*)come_null_checker(self, "sNode_clone", 7))->compile;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 8))->sline=((struct sNode*)come_null_checker(self, "sNode_clone", 8))->sline;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 9))->sline_real=((struct sNode*)come_null_checker(self, "sNode_clone", 9))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 10))->sname=((struct sNode*)come_null_checker(self, "sNode_clone", 10))->sname;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 11))->terminated=((struct sNode*)come_null_checker(self, "sNode_clone", 11))->terminated;
    }
    if(self!=((void*)0)) {
        ((struct sNode*)come_null_checker(result, "sNode_clone", 12))->kind=((struct sNode*)come_null_checker(self, "sNode_clone", 12))->kind;
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
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1386, "struct list$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1386)))));
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1388))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1391)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1391))->item)));
        }
        else {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1394)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1394))->item)));
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1397))->next;
    }
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct sNode* __dec_obj68;
    struct list_item$1sNode$ph* litem_61;
    struct sNode* __dec_obj69;
    struct list_item$1sNode$ph* litem_62;
    struct sNode* __dec_obj70;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1406))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1407, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1409))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1410))->next=((void*)0);
        __dec_obj68=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_61=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1417, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj69=((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1421))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_61;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_61;
    }
    else {
        litem_62=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1427, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj70=((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1431))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_62;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_62;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 1386, "struct list$1int$*"))), "/usr/local/include/neo-c.h", 1386)))));
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1388))->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1391)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1391))->item);
        }
        else {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1394)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1394))->item);
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1397))->next;
    }
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct list_item$1int$* litem_63;
    struct list_item$1int$* litem_64;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1406))->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1407, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1409))->prev=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1410))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_63=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1417, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_63, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1int$*)come_null_checker(litem_63, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_63, "/usr/local/include/neo-c.h", 1421))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_63;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_63;
    }
    else {
        litem_64=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1427, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_64, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_64, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_64, "/usr/local/include/neo-c.h", 1431))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_64;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_64;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1386, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1386)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1388))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1391)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1391))->item, "/usr/local/include/neo-c.h", 1391, "char* ")));
        }
        else {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1394)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1394))->item, "/usr/local/include/neo-c.h", 1394, "char* ")));
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1397))->next;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_finalize", 0))->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sBlock* )come_null_checker(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_finalize", 1))->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, ((struct sBlock* )come_null_checker(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sFun_finalize(struct sFun* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 0))->mName!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 1))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 2))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 3))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 4))->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 5))->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 6))->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 6))->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 7))->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 8))->mTextBlock!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 8))->mTextBlock = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 8))->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 9))->mTextBlockSName!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 9))->mTextBlockSName = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 9))->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 10))->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 10))->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 11))->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 11))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 12))->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 12))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 13))->mAttribute!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 13))->mAttribute = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 13))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 14))->mMiddleAttribute!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 14))->mMiddleAttribute = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 14))->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 15))->mFunAttribute!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 15))->mFunAttribute = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 15))->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_initialize"; neo_current_frame = &fr;
    char*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    struct list$1sType$ph* __dec_obj43;
    struct list$1char$ph* __dec_obj44;
    struct list$1char$ph* __dec_obj45;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sVar$ph* __dec_obj46;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj47  ;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    struct list$1char$ph* o2_saved_65;
    char*  it_66  ;
    struct sType*  __dec_obj81  ;
    struct buffer*  __dec_obj82  ;
    struct buffer*  __dec_obj83  ;
    struct buffer*  __dec_obj84  ;
    struct sBlock*  __dec_obj85  ;
    char*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    struct sFun* __result_obj__0;
    __dec_obj41=((struct sFun*)come_null_checker(self, "./common.h", 292))->mName,
    ((struct sFun*)come_null_checker(self, "./common.h", 292))->mName=(char* )come_increment_ref_count(name);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj42=((struct sFun*)come_null_checker(self, "./common.h", 293))->mResultType,
    ((struct sFun*)come_null_checker(self, "./common.h", 293))->mResultType=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj43=((struct sFun*)come_null_checker(self, "./common.h", 294))->mParamTypes,
    ((struct sFun*)come_null_checker(self, "./common.h", 294))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj44=((struct sFun*)come_null_checker(self, "./common.h", 295))->mParamNames,
    ((struct sFun*)come_null_checker(self, "./common.h", 295))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj45=((struct sFun*)come_null_checker(self, "./common.h", 296))->mParamDefaultParametors,
    ((struct sFun*)come_null_checker(self, "./common.h", 296))->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sFun*)come_null_checker(self, "./common.h", 297))->mExternal=external;
    ((struct sFun*)come_null_checker(self, "./common.h", 298))->mVarArgs=var_args;
    ((struct sFun*)come_null_checker(self, "./common.h", 299))->mStatic=static_;
    ((struct sFun*)come_null_checker(self, "./common.h", 300))->mInline=inline_;
    ((struct sFun*)come_null_checker(self, "./common.h", 301))->mUniq=uniq_;
    ((struct sFun*)come_null_checker(self, "./common.h", 302))->mConstFun=const_fun;
    __dec_obj46=((struct sFun*)come_null_checker(self, "./common.h", 303))->mAllVar,
    ((struct sFun*)come_null_checker(self, "./common.h", 303))->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count(((struct list$1sVar$ph*)come_null_checker(((struct list$1sVar$ph*)(__right_value0=(struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), (void*)0, 303, "struct list$1sVar$ph*"))), "./common.h", 303)))));
    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj47=((struct sFun*)come_null_checker(self, "./common.h", 305))->mLambdaType,
    ((struct sFun*)come_null_checker(self, "./common.h", 305))->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 305, "struct sType* "))), "./common.h", 305))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(param_types),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "./common.h", 307)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "./common.h", 307)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "./common.h", 307)))){
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 308))->mLambdaType, "./common.h", 308))->mParamTypes, "./common.h", 308)),(struct sType* )come_increment_ref_count(sType_clone(it)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(o2_saved_65=(struct list$1char$ph*)come_increment_ref_count(param_names),it_66=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved_65, "./common.h", 311)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved_65, "./common.h", 311)));it_66=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved_65, "./common.h", 311)))){
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 312))->mLambdaType, "./common.h", 312))->mParamNames, "./common.h", 312)),(char* )come_increment_ref_count((char* )come_memdup(it_66, "./common.h", 312, "char* ")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj81=((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 315))->mLambdaType, "./common.h", 315))->mResultType,
    ((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 315))->mLambdaType, "./common.h", 315))->mResultType=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 316))->mLambdaType, "./common.h", 316))->mVarArgs=var_args;
    __dec_obj82=((struct sFun*)come_null_checker(self, "./common.h", 318))->mSource,
    ((struct sFun*)come_null_checker(self, "./common.h", 318))->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 318, "struct buffer* "))), "./common.h", 318)))));
    come_call_finalizer(buffer_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj83=((struct sFun*)come_null_checker(self, "./common.h", 319))->mSourceHead,
    ((struct sFun*)come_null_checker(self, "./common.h", 319))->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 319, "struct buffer* "))), "./common.h", 319)))));
    come_call_finalizer(buffer_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj84=((struct sFun*)come_null_checker(self, "./common.h", 320))->mSourceHead2,
    ((struct sFun*)come_null_checker(self, "./common.h", 320))->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 320, "struct buffer* "))), "./common.h", 320)))));
    come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj85=((struct sFun*)come_null_checker(self, "./common.h", 322))->mBlock,
    ((struct sFun*)come_null_checker(self, "./common.h", 322))->mBlock=(struct sBlock* )come_increment_ref_count(block);
    come_call_finalizer(sBlock_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj86=((struct sFun*)come_null_checker(self, "./common.h", 323))->mTextBlock,
    ((struct sFun*)come_null_checker(self, "./common.h", 323))->mTextBlock=(char* )come_increment_ref_count(text_block);
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj87=((struct sFun*)come_null_checker(self, "./common.h", 325))->mTextBlockSName,
    ((struct sFun*)come_null_checker(self, "./common.h", 325))->mTextBlockSName=(char* )come_increment_ref_count(generics_sname);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sFun*)come_null_checker(self, "./common.h", 326))->mTextBlockSline=generics_sline;
    if((((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 328))->mClass, "./common.h", 328))->mNumber||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 328))->mClass, "./common.h", 328))->mName, "./common.h", 328)),"double")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 328))->mClass, "./common.h", 328))->mName, "./common.h", 328)),"float")||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 328))->mClass, "./common.h", 328))->mStruct)&&((struct sType* )come_null_checker(result_type, "./common.h", 328))->mPointerNum==0) {
        ((struct sFun*)come_null_checker(self, "./common.h", 329))->mNoResultType=(_Bool)1;
    }
    __dec_obj88=((struct sFun*)come_null_checker(self, "./common.h", 332))->mAttribute,
    ((struct sFun*)come_null_checker(self, "./common.h", 332))->mAttribute=(char* )come_increment_ref_count(attribute);
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj89=((struct sFun*)come_null_checker(self, "./common.h", 333))->mMiddleAttribute,
    ((struct sFun*)come_null_checker(self, "./common.h", 333))->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj90=((struct sFun*)come_null_checker(self, "./common.h", 334))->mFunAttribute,
    ((struct sFun*)come_null_checker(self, "./common.h", 334))->mFunAttribute=(char* )come_increment_ref_count(fun_attribute);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sFun*)come_increment_ref_count(self);
    come_call_finalizer(sFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (text_block = come_decrement_ref_count(text_block, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 0))->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 2))->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 2))->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 3))->mName!=((void*)0)) {
        (((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 3))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 3))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 4))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0)) {
        (((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 8))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 8))->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0)) {
        (((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 9))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 9))->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool const_fun)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __dec_obj91;
    struct list$1char$ph* __dec_obj92;
    char*  __dec_obj93  ;
    struct sType*  __dec_obj94  ;
    struct list$1sType$ph* __dec_obj95;
    struct list$1char$ph* __dec_obj96;
    struct list$1char$ph* __dec_obj97;
    char*  __dec_obj98  ;
    char*  __dec_obj99  ;
    struct sGenericsFun* __result_obj__0;
    __dec_obj91=((struct sGenericsFun*)come_null_checker(self, "./common.h", 363))->mGenericsTypeNames,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 363))->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj92=((struct sGenericsFun*)come_null_checker(self, "./common.h", 364))->mMethodGenericsTypeNames,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 364))->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(method_generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj93=((struct sGenericsFun*)come_null_checker(self, "./common.h", 366))->mName,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 366))->mName=(char* )come_increment_ref_count(name);
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj94=((struct sGenericsFun*)come_null_checker(self, "./common.h", 367))->mResultType,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 367))->mResultType=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj95=((struct sGenericsFun*)come_null_checker(self, "./common.h", 368))->mParamTypes,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 368))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj96=((struct sGenericsFun*)come_null_checker(self, "./common.h", 369))->mParamNames,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 369))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj97=((struct sGenericsFun*)come_null_checker(self, "./common.h", 370))->mParamDefaultParametors,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 370))->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 371))->mVarArgs=var_args;
    __dec_obj98=((struct sGenericsFun*)come_null_checker(self, "./common.h", 373))->mBlock,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 373))->mBlock=(char* )come_increment_ref_count(block);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 374))->mSLine=((struct sInfo* )come_null_checker(info, "./common.h", 374))->sline;
    __dec_obj99=((struct sGenericsFun*)come_null_checker(self, "./common.h", 376))->mGenericsSName,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 376))->mGenericsSName=(char* )come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 377))->mGenericsSLine=generics_sline;
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 378))->mConstFun=const_fun;
    __result_obj__0 = (struct sGenericsFun*)come_increment_ref_count(self);
    come_call_finalizer(sGenericsFun_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 0))->c_value!=((void*)0)) {
        (((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 1))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 2))->c_value_without_right_value_objects!=((void*)0)) {
        (((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 2))->c_value_without_right_value_objects = come_decrement_ref_count(((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 2))->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 3))->c_value_without_cast_object_value!=((void*)0)) {
        (((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 3))->c_value_without_cast_object_value = come_decrement_ref_count(((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 3))->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct CVALUE* CVALUE_initialize(struct CVALUE* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_initialize"; neo_current_frame = &fr;
    struct CVALUE* __result_obj__0;
    __result_obj__0 = (struct CVALUE*)come_increment_ref_count(self);
    come_call_finalizer(CVALUE_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj104;
    struct map$2char$phchar$ph* __result_obj__0;
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2403))->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), (void*)0, 2403, "char** "))));
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2404))->items=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), (void*)0, 2404, "char** "))));
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2405))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 2405, "_Bool*"))));
    for(i=0;i<128;i++){
        ((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2409))->item_existance, "/usr/local/include/neo-c.h", 2409))[i]=(_Bool)0;
    }
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2412))->size=128;
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2413))->len=0;
    __dec_obj104=((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->key_list,
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2415, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2415)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2417))->it=0;
    __result_obj__0 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_67;
    for(i=0;i<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2446))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2447))->item_existance, "/usr/local/include/neo-c.h", 2447))[i]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2453))->items);
    for(i_67=0;i_67<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2455))->size;i_67++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2456))->item_existance, "/usr/local/include/neo-c.h", 2456))[i_67]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_67] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_67], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2462))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2464))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance = come_decrement_ref_count(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_68;
    for(i=0;i<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2446))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2447))->item_existance, "/usr/local/include/neo-c.h", 2447))[i]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2453))->items);
    for(i_68=0;i_68<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2455))->size;i_68++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2456))->item_existance, "/usr/local/include/neo-c.h", 2456))[i_68]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_68] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_68], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2462))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2464))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance = come_decrement_ref_count(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void sModule_finalize(struct sModule* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 0))->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sModule*)come_null_checker(self, "sModule_finalize", 0))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 1))->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sModule*)come_null_checker(self, "sModule_finalize", 1))->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 2))->mLastCode!=((void*)0)) {
        (((struct sModule*)come_null_checker(self, "sModule_finalize", 2))->mLastCode = come_decrement_ref_count(((struct sModule*)come_null_checker(self, "sModule_finalize", 2))->mLastCode, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 3))->mLastCode2!=((void*)0)) {
        (((struct sModule*)come_null_checker(self, "sModule_finalize", 3))->mLastCode2 = come_decrement_ref_count(((struct sModule*)come_null_checker(self, "sModule_finalize", 3))->mLastCode2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 4))->mHeader!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, ((struct sModule*)come_null_checker(self, "sModule_finalize", 4))->mHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sModule* sModule_initialize(struct sModule* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  __dec_obj100  ;
    struct buffer*  __dec_obj101  ;
    char*  __dec_obj102  ;
    char*  __dec_obj103  ;
    struct map$2char$phchar$ph* __dec_obj105;
    struct sModule* __result_obj__0;
    __dec_obj100=((struct sModule*)come_null_checker(self, "./common.h", 405))->mSourceHead,
    ((struct sModule*)come_null_checker(self, "./common.h", 405))->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 405, "struct buffer* "))), "./common.h", 405)))));
    come_call_finalizer(buffer_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj101=((struct sModule*)come_null_checker(self, "./common.h", 406))->mSource,
    ((struct sModule*)come_null_checker(self, "./common.h", 406))->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 406, "struct buffer* "))), "./common.h", 406)))));
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj102=((struct sModule*)come_null_checker(self, "./common.h", 407))->mLastCode,
    ((struct sModule*)come_null_checker(self, "./common.h", 407))->mLastCode=((void*)0);
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj103=((struct sModule*)come_null_checker(self, "./common.h", 408))->mLastCode2,
    ((struct sModule*)come_null_checker(self, "./common.h", 408))->mLastCode2=((void*)0);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj105=((struct sModule*)come_null_checker(self, "./common.h", 409))->mHeader,
    ((struct sModule*)come_null_checker(self, "./common.h", 409))->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count(((struct map$2char$phchar$ph*)come_null_checker(((struct map$2char$phchar$ph*)(__right_value0=(struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), (void*)0, 409, "struct map$2char$phchar$ph*"))), "./common.h", 409)))));
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(map$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sModule*)come_increment_ref_count(self);
    come_call_finalizer(sModule_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModule_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj106;
    struct map$2char$phsVar$ph* __result_obj__0;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2403))->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), (void*)0, 2403, "char** "))));
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2404))->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), (void*)0, 2404, "struct sVar** "))));
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2405))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 2405, "_Bool*"))));
    for(i=0;i<128;i++){
        ((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2409))->item_existance, "/usr/local/include/neo-c.h", 2409))[i]=(_Bool)0;
    }
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2412))->size=128;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2413))->len=0;
    __dec_obj106=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->key_list,
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2415))->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2415, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2415)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2417))->it=0;
    __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_69;
    for(i=0;i<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2446))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2447))->item_existance, "/usr/local/include/neo-c.h", 2447))[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2453))->items);
    for(i_69=0;i_69<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2455))->size;i_69++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2456))->item_existance, "/usr/local/include/neo-c.h", 2456))[i_69]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_69] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_69], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2462))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2464))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance = come_decrement_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_70;
    for(i=0;i<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2446))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2447))->item_existance, "/usr/local/include/neo-c.h", 2447))[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2453))->items);
    for(i_70=0;i_70<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2455))->size;i_70++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2456))->item_existance, "/usr/local/include/neo-c.h", 2456))[i_70]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_70] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_70], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2462))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2464))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance = come_decrement_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable*  parent  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* __dec_obj107;
    struct sVarTable* __result_obj__0;
    __dec_obj107=((struct sVarTable*)come_null_checker(self, "./common.h", 421))->mVars,
    ((struct sVarTable*)come_null_checker(self, "./common.h", 421))->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)(__right_value0=(struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), (void*)0, 421, "struct map$2char$phsVar$ph*"))), "./common.h", 421)))));
    come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sVarTable*)come_null_checker(self, "./common.h", 422))->mGlobal=global;
    ((struct sVarTable*)come_null_checker(self, "./common.h", 423))->mParent=parent;
    __result_obj__0 = (struct sVarTable*)come_increment_ref_count(self);
    come_call_finalizer(sVarTable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void sVarTable_finalize(struct sVarTable* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_finalize"; neo_current_frame = &fr;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, ((struct sVarTable*)come_null_checker(self, "./common.h", 428))->mVars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

struct sBlock* sBlock_initialize(struct sBlock* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* __dec_obj108;
    struct sBlock* __result_obj__0;
    __dec_obj108=((struct sBlock*)come_null_checker(self, "./common.h", 439))->mNodes,
    ((struct sBlock*)come_null_checker(self, "./common.h", 439))->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 439, "struct list$1sNode$ph*"))), "./common.h", 439)))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sBlock*)come_increment_ref_count(self);
    come_call_finalizer(sBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 0))->sname!=((void*)0)) {
        (((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 0))->sname = come_decrement_ref_count(((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj109  ;
    struct sNodeBase* __result_obj__0;
    ((struct sNodeBase*)come_null_checker(self, "./common.h", 613))->sline=((struct sInfo* )come_null_checker(info, "./common.h", 613))->sline;
    __dec_obj109=((struct sNodeBase*)come_null_checker(self, "./common.h", 614))->sname,
    ((struct sNodeBase*)come_null_checker(self, "./common.h", 614))->sname=(char* )come_increment_ref_count(__builtin_string(((struct sInfo* )come_null_checker(info, "./common.h", 614))->sname));
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sNodeBase*)come_null_checker(self, "./common.h", 615))->sline_real=((struct sInfo* )come_null_checker(info, "./common.h", 615))->sline_real;
    __result_obj__0 = (struct sNodeBase*)come_increment_ref_count(self);
    come_call_finalizer(sNodeBase_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNodeBase_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((struct sNodeBase*)come_null_checker(self, "./common.h", 618))->sline;
    neo_current_frame = fr.prev;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline_real"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((struct sNodeBase*)come_null_checker(self, "./common.h", 622))->sline_real;
    neo_current_frame = fr.prev;
}

_Bool sNodeBase_terminated(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(((struct sNodeBase*)come_null_checker(self, "./common.h", 630))->sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCurrentNode*)come_null_checker(self, "sCurrentNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCurrentNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)come_null_checker(self, "./common.h", 638))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sCurrentNode*)come_increment_ref_count(self);
    come_call_finalizer(sCurrentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCurrentNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sline"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((struct sCurrentNode*)come_null_checker(self, "./common.h", 643))->sline;
    neo_current_frame = fr.prev;
}

char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(((struct sCurrentNode*)come_null_checker(self, "./common.h", 648))->sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  sCurrentNode_kind(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCurrentNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_71  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2626))->key_list, "/usr/local/include/neo-c.h", 2626))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2627))->key_list, "/usr/local/include/neo-c.h", 2627))->it, "/usr/local/include/neo-c.h", 2627))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_71,0,sizeof(char* ));
    __result_obj__0 = result_71;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list, "/usr/local/include/neo-c.h", 2653))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_72  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2636))->key_list, "/usr/local/include/neo-c.h", 2636))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it, "/usr/local/include/neo-c.h", 2641))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2643))->key_list, "/usr/local/include/neo-c.h", 2643))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2644))->key_list, "/usr/local/include/neo-c.h", 2644))->it, "/usr/local/include/neo-c.h", 2644))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_72,0,sizeof(char* ));
    __result_obj__0 = result_72;
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
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj110  ;
    struct sType*  __dec_obj111  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj110=((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1,
    ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj111=((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2,
    ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2=(struct sType* )come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj112;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_73;
    struct tuple2$2char$phsType$ph* __dec_obj113;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_74;
    struct tuple2$2char$phsType$ph* __dec_obj114;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1492, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        __dec_obj112=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_73=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1502, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj113=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1506))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_73;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_73;
    }
    else {
        litem_74=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1512, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj114=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1516))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_74;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_74;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
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
    char*  __dec_obj115  ;
    struct sType*  __dec_obj116  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), (void*)0, 3, "struct tuple2$2char$phsType$ph*"));
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 4))->v1!=((void*)0)) {
        __dec_obj115=((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 4))->v1,
        ((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 4))->v1=(char* )come_increment_ref_count((char* )come_memdup(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 4))->v1, "tuple2$2char$phsType$ph_clone", 4, "char* "));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 5))->v2!=((void*)0)) {
        __dec_obj116=((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 5))->v2,
        ((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 5))->v2=(struct sType* )come_increment_ref_count(sType_clone(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 5))->v2));
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 0))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 1))->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    return ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->len;
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj119  ;
    struct list_item$1CVALUE$ph* litem_83;
    struct CVALUE*  __dec_obj120  ;
    struct list_item$1CVALUE$ph* litem_84;
    struct CVALUE*  __dec_obj121  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1492, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        __dec_obj119=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_83=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1502, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj120=((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1506))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_83;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_83;
    }
    else {
        litem_84=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1512, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj121=((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1516))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_84;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_84;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  class_name  ;
    void* __right_value1 = (void*)0;
    struct sClass*  current_stack  ;
    struct sVarTable*  vtable  ;
    struct map$2char$phsVar$ph* o2_saved;
    char*  it  ;
    char* key;
    void* __right_value2 = (void*)0;
    struct sVar*  value  ;
    struct sType*  type2  ;
    struct tuple2$2char$phsType$ph* item;
    struct sType*  type3  ;
    struct tuple2$2char$phsType$ph* item2;
    struct sType*  type3_75  ;
    struct tuple2$2char$phsType$ph* item2_76;
    struct map$2char$phsVar$ph* o2_saved_77;
    char*  it_78  ;
    char* key_79;
    struct sVar*  value_80  ;
    struct sType*  type2_81  ;
    struct tuple2$2char$phsType$ph* item_82;
    struct CVALUE*  come_value  ;
    char*  __dec_obj117  ;
    struct sType*  __dec_obj118  ;
    _Bool __result_obj__0;
    ((struct sInfo* )come_null_checker(info, "./common.h", 658))->current_stack_num++;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",((struct sInfo* )come_null_checker(info, "./common.h", 659))->current_stack_num));
    current_stack=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 660, "struct sClass* "))), "./common.h", 660))),class_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    vtable=((struct sInfo* )come_null_checker(info, "./common.h", 662))->lv_table;
    while(vtable) {
        for(o2_saved=(struct map$2char$phsVar$ph*)come_increment_ref_count(((struct sVarTable* )come_null_checker(vtable, "./common.h", 665))->mVars),it=map$2char$phsVar$ph_begin(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved, "./common.h", 665)));!map$2char$phsVar$ph_end(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved, "./common.h", 665)));it=map$2char$phsVar$ph_next(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved, "./common.h", 665)))){
            key=it;
            value=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(((struct sVarTable* )come_null_checker(vtable, "./common.h", 667))->mVars, "./common.h", 667)), "./common.h", 667)),((char* )(__right_value1=__builtin_string(key))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sVar* )come_null_checker(value, "./common.h", 669))->mType));
            ((struct sType* )come_null_checker(type2, "./common.h", 671))->mPointerNum++;
            item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 673, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(__builtin_string(((struct sVar* )come_null_checker(value, "./common.h", 673))->mCValueName)),(struct sType* )come_increment_ref_count(type2)));
            if(((struct sVar* )come_null_checker(value, "./common.h", 675))->mCValueName!=((void*)0)) {
                if(strcmp(((struct sVar* )come_null_checker(value, "./common.h", 676))->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value, "./common.h", 679))->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value, "./common.h", 682))->mCValueName,"__map_element")==0) {
                }
                else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value, "./common.h", 685))->mType, "./common.h", 685))->mClass, "./common.h", 685))->mName, "./common.h", 685)),"va_list")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value, "./common.h", 685))->mType, "./common.h", 685))->mClass, "./common.h", 685))->mName, "./common.h", 685)),"__builtin_va_list")) {
                }
                else if(((struct sType* )come_null_checker(type2, "./common.h", 688))->mArrayPointerType) {
                    type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
                    ((struct sType* )come_null_checker(type3, "./common.h", 690))->mPointerNum--;
                    ((struct sType* )come_null_checker(type3, "./common.h", 692))->mArrayPointerNum++;
                    item2=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 693, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(__builtin_string(((struct sVar* )come_null_checker(value, "./common.h", 693))->mCValueName)),(struct sType* )come_increment_ref_count(type3)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(current_stack, "./common.h", 694))->mFields, "./common.h", 694)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2)));
                    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "./common.h", 696))->mArrayNum, "./common.h", 696)))>0) {
                    type3_75=(struct sType* )come_increment_ref_count(sType_clone(type2));
                    ((struct sType* )come_null_checker(type3_75, "./common.h", 698))->mPointerNum--;
                    ((struct sType* )come_null_checker(type3_75, "./common.h", 699))->mArrayPointerNum++;
                    item2_76=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 700, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(__builtin_string(((struct sVar* )come_null_checker(value, "./common.h", 700))->mCValueName)),(struct sType* )come_increment_ref_count(type3_75)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(current_stack, "./common.h", 701))->mFields, "./common.h", 701)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_76)));
                    come_call_finalizer(sType_finalize, type3_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(current_stack, "./common.h", 704))->mFields, "./common.h", 704)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item)));
                }
            }
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=((struct sVarTable* )come_null_checker(vtable, "./common.h", 709))->mParent;
    }
    output_struct(current_stack,((void*)0),info,(_Bool)0);
    map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 714))->classes, "./common.h", 714)),(char* )come_increment_ref_count(class_name),(struct sClass* )come_increment_ref_count(current_stack),(_Bool)0);
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name,((struct sInfo* )come_null_checker(info, "./common.h", 716))->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",((struct sInfo* )come_null_checker(info, "./common.h", 717))->current_stack_num,class_name);
    vtable=((struct sInfo* )come_null_checker(info, "./common.h", 719))->lv_table;
    add_come_code(info,"({");
    while(vtable) {
        for(o2_saved_77=(struct map$2char$phsVar$ph*)come_increment_ref_count(((struct sVarTable* )come_null_checker(vtable, "./common.h", 724))->mVars),it_78=map$2char$phsVar$ph_begin(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved_77, "./common.h", 724)));!map$2char$phsVar$ph_end(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved_77, "./common.h", 724)));it_78=map$2char$phsVar$ph_next(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved_77, "./common.h", 724)))){
            key_79=it_78;
            value_80=((struct sVar* )(__right_value0=map$2char$phsVar$ph_operator_load_element(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(((struct sVarTable* )come_null_checker(vtable, "./common.h", 726))->mVars, "./common.h", 726)), "./common.h", 726)),key_79)));
            type2_81=(struct sType* )come_increment_ref_count(sType_clone(((struct sVar* )come_null_checker(value_80, "./common.h", 728))->mType));
            item_82=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 730, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(((struct sVar* )come_null_checker(value_80, "./common.h", 730))->mCValueName),(struct sType* )come_increment_ref_count(type2_81)));
            if(((struct sVar* )come_null_checker(value_80, "./common.h", 732))->mCValueName!=((void*)0)) {
                if(strcmp(((struct sVar* )come_null_checker(value_80, "./common.h", 733))->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value_80, "./common.h", 736))->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value_80, "./common.h", 739))->mCValueName,"__map_element")==0) {
                }
                else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value_80, "./common.h", 742))->mType, "./common.h", 742))->mClass, "./common.h", 742))->mName, "./common.h", 742)),"va_list")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value_80, "./common.h", 742))->mType, "./common.h", 742))->mClass, "./common.h", 742))->mName, "./common.h", 742)),"__builtin_va_list")) {
                }
                else {
                    if(string_operator_equals(((char* )come_null_checker(((struct sVar* )come_null_checker(value_80, "./common.h", 746))->mFunName, "./common.h", 746)),((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 746))->come_fun, "./common.h", 746))->mName)) {
                        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2_81, "./common.h", 747))->mClass, "./common.h", 747))->mName, "./common.h", 747)),"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 748))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 748))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 748))->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 751))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 751))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 751))->mCValueName);
                        }
                    }
                    else {
                        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2_81, "./common.h", 755))->mClass, "./common.h", 755))->mName, "./common.h", 755)),"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 756))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 756))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 756))->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 759))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 759))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 759))->mCValueName);
                        }
                    }
                }
            }
            come_call_finalizer(sType_finalize, type2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=((struct sVarTable* )come_null_checker(vtable, "./common.h", 766))->mParent;
    }
    add_come_code(info,"})");
    add_come_code(info,",");
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 778, "struct CVALUE* "))), "./common.h", 778)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj117=((struct CVALUE* )come_null_checker(come_value, "./common.h", 780))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "./common.h", 780))->c_value=(char* )come_increment_ref_count(xsprintf("&__current_stack%d__",((struct sInfo* )come_null_checker(info, "./common.h", 780))->current_stack_num));
    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj118=((struct CVALUE* )come_null_checker(come_value, "./common.h", 781))->type,
    ((struct CVALUE* )come_null_checker(come_value, "./common.h", 781))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 781, "struct sType* "))), "./common.h", 781))),(char* )come_increment_ref_count(class_name),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "./common.h", 782))->var=((void*)0);
    add_come_last_code(info,"%s;\n",((struct CVALUE* )come_null_checker(come_value, "./common.h", 784))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 786))->stack, "./common.h", 786)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sClass_finalize, current_stack, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 0))->sname = come_decrement_ref_count(((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNothingNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_checker(self, "./common.h", 1100))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sNothingNode*)come_increment_ref_count(self);
    come_call_finalizer(sNothingNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNothingNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool sNothingNode_terminated(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_terminated"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sNothingNode_kind(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNothingNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_compile"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNullChecker_finalize(struct sNullChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 0))->sname!=((void*)0)) {
        (((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 0))->sname = come_decrement_ref_count(((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 1))->value!=((void*)0)) {
        ((((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 1))->value) ? ((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 1))->value = come_decrement_ref_count(((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 1))->value, ((struct sNode*)((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 1))->value)->finalize, ((struct sNode*)((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 1))->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj122;
    struct sNullChecker* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNullChecker*)come_increment_ref_count(((struct sNullChecker*)come_null_checker(self, "./common.h", 1152))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj122=((struct sNullChecker*)come_null_checker(self, "./common.h", 1154))->value,
    ((struct sNullChecker*)come_null_checker(self, "./common.h", 1154))->value=(struct sNode*)come_increment_ref_count(sNode_clone(value));
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sNullChecker*)come_increment_ref_count(self);
    come_call_finalizer(sNullChecker_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNullChecker_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sNullChecker_kind(struct sNullChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNullChecker"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_compile"; neo_current_frame = &fr;
    struct sNode* value;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type__  ;
    struct sType*  type_  ;
    struct sType*  type  ;
    struct sType*  original_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj123  ;
    struct sType*  __dec_obj124  ;
    value=(struct sNode*)come_increment_ref_count(((struct sNullChecker*)come_null_checker(self, "./common.h", 1164))->value);
    Value=node_compile(value,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type__=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "./common.h", 1172))->type));
    type_=(struct sType* )come_increment_ref_count(solve_generics(type__,((struct sInfo* )come_null_checker(info, "./common.h", 1173))->generics_type,info));
    type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info));
    original_type=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(type__, "./common.h", 1176))->mOriginalLoadVarType);
    if(!gComeC&&((struct sType* )come_null_checker(type, "./common.h", 1178))->mPointerNum>0&&(original_type==((void*)0)||list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(original_type, "./common.h", 1178))->mArrayNum, "./common.h", 1178)))==0)&&!((struct sType* )come_null_checker(type, "./common.h", 1178))->mArrayPointerType&&((struct sType* )come_null_checker(type, "./common.h", 1178))->mArrayPointerNum==0) {
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1179, "struct CVALUE* "))), "./common.h", 1179)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj123=((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1181))->c_value,
        ((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1181))->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_null_checker(%s, \"%s\", %d))",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)1,(_Bool)0,(_Bool)0))),((struct CVALUE* )come_null_checker(come_value, "./common.h", 1181))->c_value,((struct sInfo* )come_null_checker(info, "./common.h", 1181))->sname,((struct sInfo* )come_null_checker(info, "./common.h", 1181))->sline));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        __dec_obj124=((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1182))->type,
        ((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1182))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1183))->var=((struct CVALUE* )come_null_checker(come_value, "./common.h", 1183))->var;
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 1185))->stack, "./common.h", 1185)),(struct CVALUE* )come_increment_ref_count(come_value2));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 1188))->stack, "./common.h", 1188)),(struct CVALUE* )come_increment_ref_count(come_value));
    }
    __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type__, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, original_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

