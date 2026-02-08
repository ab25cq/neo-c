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
struct slice$1char$* string_to_slice(char* self);
struct slice$1char$* charp_to_slice(char* self);
struct smart_pointer$1char$* buffer_to_pointer(struct buffer*  self  );
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  );
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  );
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
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended);
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
static void __builtin_va_list_finalize(__builtin_va_list*  self  );
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
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static char*  map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char*  map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char*  map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
static char*  map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
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
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_type_name_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  class_name  ;
    _Bool no_output_come_code;
    char*  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    char*  result_type_str  ;
    int i;
    int i_0;
    int i_1;
    int i_2;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    int j;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char*  param_type_str  ;
    int i_7;
    int i_8;
    struct list$1sNode$ph* o2_saved_9;
    struct sNode* it_11;
    struct CVALUE*  cvalue_13  ;
    struct list$1sNode$ph* o2_saved_14;
    struct sNode* it_15;
    struct CVALUE*  cvalue_16  ;
    int i_17;
    int i_18;
    struct sNode* node_19;
    _Bool Value_20;
    struct CVALUE*  cvalue_21  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 5, "struct buffer* "))), "03output_code.nc", 5)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    class_name=(char* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 7))->mClass, "03output_code.nc", 7))->mName);
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 9))->mAlignasDouble&&!no_static) {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 10)),"_Alignas(double) ");
    }
    else if(((struct sType* )come_null_checker(type, "03output_code.nc", 12))->mAlignas&&!no_static) {
        no_output_come_code=((struct sInfo* )come_null_checker(info, "03output_code.nc", 13))->no_output_come_code;
        ((struct sInfo* )come_null_checker(info, "03output_code.nc", 14))->no_output_come_code=(_Bool)1;
        if(!node_compile(((struct sType* )come_null_checker(type, "03output_code.nc", 15))->mAlignas,info)) {
            printf("_Alignas error\n");
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        ((struct sInfo* )come_null_checker(info, "03output_code.nc", 19))->no_output_come_code=no_output_come_code;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 23)),"_Alignas(%s) ",((struct CVALUE* )come_null_checker(come_value, "03output_code.nc", 23))->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 26))->mStatic&&!no_static) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 27)),"static ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 29))->mAtomic) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 30)),"_Atomic(");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 32))->mThreadLocal) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 33)),"_Thread_local ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 35))->mNoreturn) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 36)),"_Noreturn ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 39))->mConstant) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 40)),"const ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 42))->mVolatile) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 43)),"volatile ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 45))->mComplex) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 46)),"_Complex ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 48))->mRegister) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 49)),"register ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 52))->mUnsigned) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 53)),"unsigned ");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 56))->mShort) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 57)),"short ");
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 60))->mOriginalTypeName, "03output_code.nc", 60)),"va_list")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 61)),"va_list");
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 63))->mOriginalTypeName, "03output_code.nc", 63)),"__builtin_va_list")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 64)),"__builtin_va_list");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 66)),"__builtin_va_list")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 67)),"__builtin_va_list");
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 69))->mClass, "03output_code.nc", 69))->mStruct) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 70)),"struct ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 71)),class_name);
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 73))->mClass, "03output_code.nc", 73))->mUnion) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 74)),"union ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 75)),class_name);
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 77))->mClass, "03output_code.nc", 77))->mEnum) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 78)),"enum ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 79)),class_name);
    }
    else if(((struct sType* )come_null_checker(type, "03output_code.nc", 81))->mLongLong) {
        if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 82)),"int")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 83)),"long long int");
        }
        else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 85)),"long")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 86)),"long long");
        }
    }
    else if(((struct sType* )come_null_checker(type, "03output_code.nc", 89))->mLong) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 90)),"long ");
        if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 92)),"int")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 93))," int");
        }
        else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 95)),"long")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 96))," long");
        }
        else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 98)),"double")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 99))," double");
        }
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 102)),"long")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 103)),"long");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 105)),"__uint128_t")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 106)),"__uint128_t");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 108)),"bool")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 109)),"_Bool");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 111)),"lambda")) {
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 112))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 113)),result_type_str);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 114))," ");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 116))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 116))->mMiddleAttribute, "03output_code.nc", 116)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 117)),((struct sType* )come_null_checker(type, "03output_code.nc", 117))->mMiddleAttribute);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 118))," ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 121))->mArrayPointerNum>0) {
            for(i=0;i<((struct sType* )come_null_checker(type, "03output_code.nc", 122))->mArrayPointerNum+1;i++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 123)),"(");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 124)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 126))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 126))->mPointerAttribute, "03output_code.nc", 126)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 127))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 128)),((struct sType* )come_null_checker(type, "03output_code.nc", 128))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 130))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 131)),"[]");
            }
            for(i_0=0;i_0<((struct sType* )come_null_checker(type, "03output_code.nc", 133))->mArrayPointerNum;i_0++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 134)),")");
            }
        }
        else if(((struct sType* )come_null_checker(type, "03output_code.nc", 137))->mFunctionPointerNum>1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 138)),"(");
            for(i_1=0;i_1<((struct sType* )come_null_checker(type, "03output_code.nc", 139))->mFunctionPointerNum;i_1++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 140)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 142))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 142))->mPointerAttribute, "03output_code.nc", 142)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 143))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 144)),((struct sType* )come_null_checker(type, "03output_code.nc", 144))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 146))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 147)),"[]");
            }
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 151)),"(*");
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 152))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 152))->mPointerAttribute, "03output_code.nc", 152)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 153))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 154)),((struct sType* )come_null_checker(type, "03output_code.nc", 154))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 156))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 157)),"[]");
            }
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 161))->mArrayNum, "03output_code.nc", 161)))>0) {
            for(i_2=0;i_2<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 162))->mArrayNum, "03output_code.nc", 162)));i_2++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 163)),"[");
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 164))->mArrayNum, "03output_code.nc", 164)), "03output_code.nc", 164)),i_2));
                Value=node_compile(node,info);
                if(!Value) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 173)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 173))->c_value);
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 174)),"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 177))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 178)),"[]");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 180)),")(");
        j=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 183))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 183)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 183)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 183)))){
            param_type_str=(char* )come_increment_ref_count(make_type_name_string(it,info,(_Bool)1,(_Bool)0,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 186)),param_type_str);
            if(j!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 188))->mParamTypes, "03output_code.nc", 188)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 189)),",");
            }
            j++;
            (param_type_str = come_decrement_ref_count(param_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 193)),")");
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        if(class_name==((void*)0)) {
            err_msg(info,"class name is null");
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 200)),class_name);
        if(cast_type) {
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 202))->mArrayPointerNum>0) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 203)),"(");
                for(i_7=0;i_7<((struct sType* )come_null_checker(type, "03output_code.nc", 204))->mArrayPointerNum;i_7++){
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 205)),"*");
                }
                if(((struct sType* )come_null_checker(type, "03output_code.nc", 207))->mTypedefOriginalType) {
                    for(i_8=0;i_8<((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 208))->mTypedefOriginalType, "03output_code.nc", 208))->mPointerNum;i_8++){
                        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 209)),"*");
                    }
                }
                for(o2_saved_9=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 212))->mVarNameArrayNum),it_11=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_9, "03output_code.nc", 212)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_9, "03output_code.nc", 212)));it_11=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_9, "03output_code.nc", 212)))){
                    if(!node_compile(it_11,info)) {
                        err_msg(info,"invalid array number");
                        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        neo_current_frame = fr.prev;
                        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                        return __result_obj__0;
                    }
                    cvalue_13=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 219)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_13, "03output_code.nc", 219))->c_value);
                    come_call_finalizer(CVALUE_finalize, cvalue_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 221)),")");
                for(o2_saved_14=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 222))->mArrayNum),it_15=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_14, "03output_code.nc", 222)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_14, "03output_code.nc", 222)));it_15=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_14, "03output_code.nc", 222)))){
                    if(!node_compile(it_15,info)) {
                        err_msg(info,"invalid array number");
                        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        neo_current_frame = fr.prev;
                        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                        return __result_obj__0;
                    }
                    cvalue_16=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 229)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_16, "03output_code.nc", 229))->c_value);
                    come_call_finalizer(CVALUE_finalize, cvalue_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    if(string_operator_not_equals(((char* )come_null_checker(class_name, "03output_code.nc", 235)),"lambda")&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 235))->mOriginalTypeName, "03output_code.nc", 235)),"va_list")&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 235))->mOriginalTypeName, "03output_code.nc", 235)),"__builtin_va_list")) {
        for(i_17=0;i_17<((struct sType* )come_null_checker(type, "03output_code.nc", 236))->mPointerNum;i_17++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 237)),"*");
        }
    }
    if(string_operator_not_equals(((char* )come_null_checker(class_name, "03output_code.nc", 241)),"lambda")&&((struct sType* )come_null_checker(type, "03output_code.nc", 241))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 241))->mPointerAttribute, "03output_code.nc", 241)),"")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 242))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 243)),((struct sType* )come_null_checker(type, "03output_code.nc", 243))->mPointerAttribute);
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 246))->mRestrict) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 247))," restrict");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 250))->mAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 251)),((char* )(__right_value0=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 251)),((struct sType* )come_null_checker(type, "03output_code.nc", 251))->mAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 254))->mArrayNum, "03output_code.nc", 254)))>0&&typedef_extended) {
        for(i_18=0;i_18<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 255))->mArrayNum, "03output_code.nc", 255)));i_18++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 256)),"[");
            node_19=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 257))->mArrayNum, "03output_code.nc", 257)), "03output_code.nc", 257)),i_18));
            Value_20=node_compile(node_19,info);
            if(!Value_20) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            cvalue_21=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 266)),"%s",((struct CVALUE* )come_null_checker(cvalue_21, "03output_code.nc", 266))->c_value);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 267)),"]");
            ((node_19) ? node_19 = come_decrement_ref_count(node_19, ((struct sNode*)node_19)->finalize, ((struct sNode*)node_19)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 270))->mAtomic) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 271)),")");
    }
    if(cast_type&&((struct sType* )come_null_checker(type, "03output_code.nc", 274))->mArrayPointerType) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 275)),"[]");
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 278))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 0))->c_value!=((void*)0)) {
        (((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 1))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 2))->c_value_without_right_value_objects!=((void*)0)) {
        (((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 2))->c_value_without_right_value_objects = come_decrement_ref_count(((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 2))->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 3))->c_value_without_cast_object_value!=((void*)0)) {
        (((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 3))->c_value_without_cast_object_value = come_decrement_ref_count(((struct CVALUE* )come_null_checker(self, "CVALUE_finalize", 3))->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(position<0) {
        position+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_3,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_3);
    ((default_value_3) ? default_value_3 = come_decrement_ref_count(default_value_3, ((struct sNode*)default_value_3)->finalize, ((struct sNode*)default_value_3)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
    struct sNode* default_value_4;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(position<0) {
        position+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_4,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_4);
    ((default_value_4) ? default_value_4 = come_decrement_ref_count(default_value_4, ((struct sNode*)default_value_4)->finalize, ((struct sNode*)default_value_4)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1562))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1563))->it, "/usr/local/include/neo-c.h", 1563))->item;
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
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1590))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_6  ;
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
    return ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->len;
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_10;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->head;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1562))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1563))->it, "/usr/local/include/neo-c.h", 1563))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_10,0,sizeof(struct sNode*));
    __result_obj__0 = result_10;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1590))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_12;
    if(self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1572))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it=((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it, "/usr/local/include/neo-c.h", 1578))->next;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1580))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1581))->it, "/usr/local/include/neo-c.h", 1581))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_12,0,sizeof(struct sNode*));
    __result_obj__0 = result_12;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sType*  get_no_solved_type(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_no_solved_type"; neo_current_frame = &fr;
    struct sType*  result  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj34  ;
    struct sType*  __dec_obj35  ;
    int i;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    void* __right_value1 = (void*)0;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 284))->mNoSolvedGenericsType) {
        __dec_obj34=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(type, "03output_code.nc", 285))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj35=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    i=0;
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 292))->mGenericsTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 292)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 292)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 292)))){
        list$1sType$ph_operator_store_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(result, "03output_code.nc", 293))->mGenericsTypes, "03output_code.nc", 293)), "03output_code.nc", 293)),i,(struct sType* )come_increment_ref_count(get_no_solved_type(it)));
        i++;
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3, "struct sType* "));
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 4))->mClass=((struct sType* )come_null_checker(self, "sType_clone", 4))->mClass;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 5))->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj1=((struct sType* )come_null_checker(result, "sType_clone", 5))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 5))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 5))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 6))->mChannelType!=((void*)0)) {
        __dec_obj2=((struct sType* )come_null_checker(result, "sType_clone", 6))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 6))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 6))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 7))->mGenericsTypes!=((void*)0)) {
        __dec_obj6=((struct sType* )come_null_checker(result, "sType_clone", 7))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=((struct sType* )come_null_checker(result, "sType_clone", 8))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mSizeNum!=((void*)0)) {
        __dec_obj8=((struct sType* )come_null_checker(result, "sType_clone", 9))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mAlignas!=((void*)0)) {
        __dec_obj9=((struct sType* )come_null_checker(result, "sType_clone", 10))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 11))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mTupleName!=((void*)0)) {
        __dec_obj10=((struct sType* )come_null_checker(result, "sType_clone", 12))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 12))->mTupleName, "sType_clone", 12, "char* "));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 13))->mAttribute!=((void*)0)) {
        __dec_obj11=((struct sType* )come_null_checker(result, "sType_clone", 13))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 13))->mAttribute, "sType_clone", 13, "char* "));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mVarAttribute!=((void*)0)) {
        __dec_obj12=((struct sType* )come_null_checker(result, "sType_clone", 14))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mVarAttribute, "sType_clone", 14, "char* "));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mMiddleAttribute!=((void*)0)) {
        __dec_obj13=((struct sType* )come_null_checker(result, "sType_clone", 15))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mMiddleAttribute, "sType_clone", 15, "char* "));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mPointerAttribute!=((void*)0)) {
        __dec_obj14=((struct sType* )come_null_checker(result, "sType_clone", 16))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mPointerAttribute, "sType_clone", 16, "char* "));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj15=((struct sType* )come_null_checker(result, "sType_clone", 41))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 41))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 41))->mAnonymousName, "sType_clone", 41, "char* "));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 42))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 42))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 43))->mInnerStructName!=((void*)0)) {
        __dec_obj16=((struct sType* )come_null_checker(result, "sType_clone", 43))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 43))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 43))->mInnerStructName, "sType_clone", 43, "char* "));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 44))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 44))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 45))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 45))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 46))->mAsmName!=((void*)0)) {
        __dec_obj17=((struct sType* )come_null_checker(result, "sType_clone", 46))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 46))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 46))->mAsmName, "sType_clone", 46, "char* "));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 47))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 47))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 48))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 49))->mArrayNum!=((void*)0)) {
        __dec_obj21=((struct sType* )come_null_checker(result, "sType_clone", 49))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 49))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj22=((struct sType* )come_null_checker(result, "sType_clone", 50))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 50))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 51))->mArrayStatic!=((void*)0)) {
        __dec_obj23=((struct sType* )come_null_checker(result, "sType_clone", 51))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 51))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 52))->mArrayRestrict!=((void*)0)) {
        __dec_obj24=((struct sType* )come_null_checker(result, "sType_clone", 52))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 52))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj25=((struct sType* )come_null_checker(result, "sType_clone", 57))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mOriginalTypeName!=((void*)0)) {
        __dec_obj26=((struct sType* )come_null_checker(result, "sType_clone", 58))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 58))->mOriginalTypeName, "sType_clone", 58, "char* "));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj27=((struct sType* )come_null_checker(result, "sType_clone", 62))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 62))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 62))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 63))->mParamNames!=((void*)0)) {
        __dec_obj31=((struct sType* )come_null_checker(result, "sType_clone", 63))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 63))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 63))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 64))->mResultType!=((void*)0)) {
        __dec_obj32=((struct sType* )come_null_checker(result, "sType_clone", 64))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 64))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 64))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 65))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mTypeOfNode!=((void*)0)) {
        __dec_obj33=((struct sType* )come_null_checker(result, "sType_clone", 66))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 66))->mTypeOfNode));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
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

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj3  ;
    struct list_item$1sType$ph* litem_22;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_23;
    struct sType*  __dec_obj5  ;
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
        __dec_obj3=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_22=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1417, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj4=((struct list_item$1sType$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1421))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_22;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_22;
    }
    else {
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1427, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj5=((struct list_item$1sType$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1431))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_23;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_23;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
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

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_24;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_25;
    struct sNode* __dec_obj20;
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
        __dec_obj18=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_24=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1417, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj19=((struct list_item$1sNode$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1421))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_24;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_24;
    }
    else {
        litem_25=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1427, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj20=((struct list_item$1sNode$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1431))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_25;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_25;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
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

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_26;
    struct list_item$1int$* litem_27;
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
        litem_26=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1417, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_26, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1int$*)come_null_checker(litem_26, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_26, "/usr/local/include/neo-c.h", 1421))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_26;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_26;
    }
    else {
        litem_27=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1427, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_27, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_27, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_27, "/usr/local/include/neo-c.h", 1431))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_27;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_27;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
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

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj28  ;
    struct list_item$1char$ph* litem_28;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_29;
    char*  __dec_obj30  ;
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
        __dec_obj28=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(char* )come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1417, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj29=((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1421))->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_28;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1427, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj30=((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1431))->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_29;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_29;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2007)),position,(struct sType* )come_increment_ref_count(item));
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
    struct sType*  __dec_obj39  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1891))->len;
    }
    if(position<0) {
        position=0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1897))->len==0||position>=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1897))->len) {
        len=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1898))->len;
        for(i=0;i<position-len;i++){
            memset(&default_value,0,sizeof(struct sType* ));
            list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1902)),(struct sType* )come_increment_ref_count(default_value));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1904)),(struct sType* )come_increment_ref_count(item));
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1908))->head;
    i_32=0;
    while(it!=((void*)0)) {
        if(position==i_32) {
            __dec_obj39=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1912))->item,
            ((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1912))->item=(struct sType* )come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1915))->next;
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
    struct sType*  __dec_obj36  ;
    struct list_item$1sType$ph* litem_30;
    struct sType*  __dec_obj37  ;
    struct list_item$1sType$ph* litem_31;
    struct sType*  __dec_obj38  ;
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
        __dec_obj36=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_30=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1502, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj37=((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1506))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_30;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_30;
    }
    else {
        litem_31=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1512, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj38=((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1516))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_31;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_31;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sType*  get_no_solved_type2(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_no_solved_type2"; neo_current_frame = &fr;
    struct sType*  result  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj40  ;
    struct sType*  __dec_obj41  ;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 303))->mNoSolvedGenericsType) {
        __dec_obj40=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(type, "03output_code.nc", 304))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj41=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct buffer*  buf_33  ;
    int i;
    char*  __result_obj__0  ;
    char*  result_type_str  ;
    int i_34;
    int i_35;
    int i_36;
    int i_37;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    int j;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char*  param_type_str  ;
    int i_38;
    struct sType*  gtype  ;
    int i_41;
    int i_42;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 315, "struct buffer* "))), "03output_code.nc", 315)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(get_no_solved_type(type));
    class_name=((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 319))->mClass, "03output_code.nc", 319))->mName;
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 321))->mOriginalTypeName&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 321))->mOriginalTypeName, "03output_code.nc", 321)),"")) {
        buf_33=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 322, "struct buffer* "))), "03output_code.nc", 322)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_33, "03output_code.nc", 324)),((struct sType* )come_null_checker(type, "03output_code.nc", 324))->mOriginalTypeName);
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 325))->mTypedefOriginalType) {
            for(i=0;i<((struct sType* )come_null_checker(type, "03output_code.nc", 326))->mOriginalTypePointerNum;i++){
                buffer_append_str(((struct buffer* )come_null_checker(buf_33, "03output_code.nc", 327)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 329))->mOriginalTypePointerHeap) {
                buffer_append_str(((struct buffer* )come_null_checker(buf_33, "03output_code.nc", 330)),"%");
            }
        }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_33, "03output_code.nc", 334))))));
        come_call_finalizer(buffer_finalize, buf_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(charp_operator_equals(((char*)come_null_checker(class_name, "03output_code.nc", 336)),"lambda")) {
        result_type_str=(char* )come_increment_ref_count(make_come_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 337))->mResultType,info));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 338)),result_type_str);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 339))," ");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 341))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 341))->mMiddleAttribute, "03output_code.nc", 341)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 342)),((struct sType* )come_null_checker(type, "03output_code.nc", 342))->mMiddleAttribute);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 343))," ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 346))->mArrayPointerNum>0) {
            for(i_34=0;i_34<((struct sType* )come_null_checker(type, "03output_code.nc", 347))->mArrayPointerNum+1;i_34++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 348)),"(");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 349)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 351))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 351))->mPointerAttribute, "03output_code.nc", 351)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 352))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 353)),((struct sType* )come_null_checker(type, "03output_code.nc", 353))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 355))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 356)),"[]");
            }
            for(i_35=0;i_35<((struct sType* )come_null_checker(type, "03output_code.nc", 358))->mArrayPointerNum;i_35++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 359)),")");
            }
        }
        else if(((struct sType* )come_null_checker(type, "03output_code.nc", 362))->mFunctionPointerNum>1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 363)),"(");
            for(i_36=0;i_36<((struct sType* )come_null_checker(type, "03output_code.nc", 364))->mFunctionPointerNum;i_36++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 365)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 367))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 367))->mPointerAttribute, "03output_code.nc", 367)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 368))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 369)),((struct sType* )come_null_checker(type, "03output_code.nc", 369))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 371))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 372)),"[]");
            }
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 376)),"(*");
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 377))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 377))->mPointerAttribute, "03output_code.nc", 377)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 378))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 379)),((struct sType* )come_null_checker(type, "03output_code.nc", 379))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 381))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 382)),"[]");
            }
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 386))->mArrayNum, "03output_code.nc", 386)))>0) {
            for(i_37=0;i_37<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 387))->mArrayNum, "03output_code.nc", 387)));i_37++){
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 388))->mArrayNum, "03output_code.nc", 388)), "03output_code.nc", 388)),i_37));
                Value=node_compile(node,info);
                if(Value) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 391)),"[");
                    cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 395)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 395))->c_value);
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 396)),"]");
                    come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 400))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 401)),"[]");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 403)),")(");
        j=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 406))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 406)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 406)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 406)))){
            param_type_str=(char* )come_increment_ref_count(make_come_type_name_string(it,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 409)),param_type_str);
            if(j!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 411))->mParamTypes, "03output_code.nc", 411)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 412)),",");
            }
            j++;
            (param_type_str = come_decrement_ref_count(param_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 416)),")");
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 419))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 420)),"static ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 422))->mAtomic) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 423)),"_Atomic(");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 425))->mThreadLocal) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 426)),"_Thread_local ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 428))->mNoreturn) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 429)),"_Noreturn ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 432))->mConstant) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 433)),"const ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 435))->mVolatile) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 436)),"volatile ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 438))->mComplex) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 439)),"_Complex ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 441))->mRegister) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 442)),"register ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 444))->mUniq) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 445)),"uniq ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 448))->mUnsigned) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 449)),"unsigned ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 452))->mShort) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 453)),"short ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 456)),class_name);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 458))->mGenericsTypes, "03output_code.nc", 458)))>0) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 459)),"<");
            for(i_38=0;i_38<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 460))->mGenericsTypes, "03output_code.nc", 460)));i_38++){
                gtype=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 461))->mGenericsTypes, "03output_code.nc", 461)), "03output_code.nc", 461)),i_38)));
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 463)),((char* )(__right_value0=make_come_type_name_string(gtype,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(i_38!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 465))->mGenericsTypes, "03output_code.nc", 465)))-1) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 466)),",");
                }
            }
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 470)),">");
        }
        if(charp_operator_not_equals(((char*)come_null_checker(class_name, "03output_code.nc", 473)),"lambda")) {
            for(i_41=0;i_41<((struct sType* )come_null_checker(type2, "03output_code.nc", 474))->mPointerNum;i_41++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 475)),"*");
            }
        }
        if(charp_operator_not_equals(((char*)come_null_checker(class_name, "03output_code.nc", 478)),"lambda")&&((struct sType* )come_null_checker(type, "03output_code.nc", 478))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 478))->mPointerAttribute, "03output_code.nc", 478)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 479))," ");
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 480)),((struct sType* )come_null_checker(type, "03output_code.nc", 480))->mPointerAttribute);
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 482))->mRestrict) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 483))," restrict");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 486))->mAtomic) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 487)),")");
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 490))->mArrayNum, "03output_code.nc", 490)))>0) {
            for(i_42=0;i_42<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 491))->mArrayNum, "03output_code.nc", 491)));i_42++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 492)),"[]");
            }
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 496))->mHeap) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 497)),"%");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 499))->mNoHeap) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 500)),"&");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 503))->mAttribute) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 504)),((char* )(__right_value0=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 504)),((struct sType* )come_null_checker(type2, "03output_code.nc", 504))->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 508))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_39  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_39,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_39);
    come_call_finalizer(sType_finalize, default_value_39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct sType*  default_value_40  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_40,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_40);
    come_call_finalizer(sType_finalize, default_value_40, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    int i_43;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char*  pointer_attr  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char*  __dec_obj42  ;
    int i_44;
    int i_45;
    int i_46;
    int i_47;
    struct sNode* node_48;
    _Bool Value_49;
    struct CVALUE*  cvalue_50  ;
    int i_51;
    struct list$1sType$ph* o2_saved_52;
    struct sType*  it_53  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 513, "struct buffer* "))), "03output_code.nc", 513)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 514))->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 519))->mResultType&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 519))->mResultType, "03output_code.nc", 519))->mClass, "03output_code.nc", 519))->mName, "03output_code.nc", 519)),"lambda")) {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 521)),"(*%s",var_name);
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 523))->mResultType, "03output_code.nc", 523))->mArrayNum, "03output_code.nc", 523)))>0) {
            for(i=0;i<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 524))->mResultType, "03output_code.nc", 524))->mArrayNum, "03output_code.nc", 524)));i++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 525)),"[");
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 526))->mArrayNum, "03output_code.nc", 526)), "03output_code.nc", 526)),i));
                Value=node_compile(node,info);
                if(!Value) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 535)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 535))->c_value);
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 536)),"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 539)),")(",var_name);
        i_43=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 542))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 542)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 542)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 542)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 543)),((char* )(__right_value0=make_come_type_name_string(it,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(i_43!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 544))->mParamTypes, "03output_code.nc", 544)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 545)),",");
            }
            i_43++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 551)),")");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 553))->mAttribute) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 554)),((char* )(__right_value0=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 554)),((struct sType* )come_null_checker(type, "03output_code.nc", 554))->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=make_lambda_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 557))->mResultType,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 557))))),info))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 560)),"%s ",((char* )(__right_value0=make_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 560))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 561))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 561))->mMiddleAttribute, "03output_code.nc", 561)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 562)),((struct sType* )come_null_checker(type, "03output_code.nc", 562))->mMiddleAttribute);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 563))," ");
        }
        pointer_attr=(char*)come_increment_ref_count(xsprintf(""));
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 566))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 566))->mPointerAttribute, "03output_code.nc", 566)),"")) {
            __dec_obj42=pointer_attr,
            pointer_attr=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value5=charp_operator_add(((char*)come_null_checker(((char*)(__right_value4=xsprintf(" "))), "03output_code.nc", 567)),((struct sType* )come_null_checker(type, "03output_code.nc", 567))->mPointerAttribute))), "03output_code.nc", 567))," "));
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 569))->mArrayPointerNum>0) {
            for(i_44=0;i_44<((struct sType* )come_null_checker(type, "03output_code.nc", 570))->mArrayPointerNum+1;i_44++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 571)),"(");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 572)),"*");
            }
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 574)),pointer_attr);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 575)),var_name);
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 576))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 577)),"[]");
            }
            for(i_45=0;i_45<((struct sType* )come_null_checker(type, "03output_code.nc", 579))->mArrayPointerNum;i_45++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 580)),")");
            }
        }
        else if(((struct sType* )come_null_checker(type, "03output_code.nc", 583))->mFunctionPointerNum>1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 584)),"(");
            for(i_46=0;i_46<((struct sType* )come_null_checker(type, "03output_code.nc", 585))->mFunctionPointerNum;i_46++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 586)),"*");
            }
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 588)),pointer_attr);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 589)),var_name);
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 590))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 591)),"[]");
            }
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 595)),"(*");
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 596)),pointer_attr);
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 597)),"%s",var_name);
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 598))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 599)),"[]");
            }
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 602))->mArrayNum, "03output_code.nc", 602)))>0) {
            for(i_47=0;i_47<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 603))->mArrayNum, "03output_code.nc", 603)));i_47++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 604)),"[");
                node_48=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 605))->mArrayNum, "03output_code.nc", 605)), "03output_code.nc", 605)),i_47));
                Value_49=node_compile(node_48,info);
                if(!Value_49) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                cvalue_50=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 614)),"%s",((struct CVALUE* )come_null_checker(cvalue_50, "03output_code.nc", 614))->c_value);
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 615)),"]");
                ((node_48) ? node_48 = come_decrement_ref_count(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 618)),")(");
        i_51=0;
        for(o2_saved_52=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 621))->mParamTypes),it_53=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_52, "03output_code.nc", 621)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_52, "03output_code.nc", 621)));it_53=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_52, "03output_code.nc", 621)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 622)),((char* )(__right_value0=make_type_name_string(it_53,info,(_Bool)1,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(i_51!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 623))->mParamTypes, "03output_code.nc", 623)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 624)),",");
            }
            i_51++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 630)),")");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 632))->mAttribute) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 633)),((char* )(__right_value0=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 633)),((struct sType* )come_null_checker(type, "03output_code.nc", 633))->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 636))))));
        (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 639))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 646, "struct buffer* "))), "03output_code.nc", 646)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 648))->mArrayPointerType) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 649)),((struct sType* )come_null_checker(type2, "03output_code.nc", 649))->mOriginalTypeName);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 650))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 651)),name);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 652)),"[]");
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 654))->mArrayNum, "03output_code.nc", 654)))>0) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 655)),((struct sType* )come_null_checker(type2, "03output_code.nc", 655))->mOriginalTypeName);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 657))," ");
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 659))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 660)),"(");
            ({            __current_stack1__.type2 = &type2;
            __current_stack1__.name = &name;
            __current_stack1__.info = &info;
            __current_stack1__.buf = &buf;
            })            ,            int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 661))->mArrayPointerNum,&__current_stack1__,(void*)method_block1_03outputcodenc);
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 666)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 668))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 669)),")");
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 672))->mArrayNum, "03output_code.nc", 672)))>0) {
            n=0;
            for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 675))->mArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 675)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 675)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 675)))){
                if(!node_compile(it,info)) {
                    err_msg(info,"invalid array number");
                    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    neo_current_frame = fr.prev;
                    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                    return __result_obj__0;
                }
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 682))->mArrayRestrict, "03output_code.nc", 682)), "03output_code.nc", 682)),n)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 682))->mArrayStatic, "03output_code.nc", 682)), "03output_code.nc", 682)),n)) {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 683)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 683))->c_value);
                }
                else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 685))->mArrayStatic, "03output_code.nc", 685)), "03output_code.nc", 685)),n)) {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 686)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 686))->c_value);
                }
                else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 688))->mArrayRestrict, "03output_code.nc", 688)), "03output_code.nc", 688)),n)) {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 689)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 689))->c_value);
                }
                else {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 692)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 692))->c_value);
                }
                n++;
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 699))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 700)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 703))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 703))->mAsmName, "03output_code.nc", 703)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 704))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 704))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 707))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 708))," %s",((struct sType* )come_null_checker(type2, "03output_code.nc", 708))->mAttribute);
        }
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 712)),((struct sType* )come_null_checker(type2, "03output_code.nc", 712))->mOriginalTypeName);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 713))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 714)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 716))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 717)),"[]");
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 721))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void method_block1_03outputcodenc(struct __current_stack1__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 663)),"*");
    neo_current_frame = fr.prev;
}

static int list$1int$$p_operator_load_element(struct list$1int$* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_operator_load_element"; neo_current_frame = &fr;
    int default_value;
    struct list_item$1int$* it;
    int i;
    int default_value_54;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(int));
        neo_current_frame = fr.prev;
        return default_value;
    }
    if(position<0) {
        position+=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            neo_current_frame = fr.prev;
            return ((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item;
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_54,0,sizeof(int));
    neo_current_frame = fr.prev;
    return default_value_54;
    neo_current_frame = fr.prev;
}

static int list$1int$_operator_load_element(struct list$1int$* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_operator_load_element"; neo_current_frame = &fr;
    int default_value;
    struct list_item$1int$* it;
    int i;
    int default_value_55;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(int));
        neo_current_frame = fr.prev;
        return default_value;
    }
    if(position<0) {
        position+=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            neo_current_frame = fr.prev;
            return ((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item;
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_55,0,sizeof(int));
    neo_current_frame = fr.prev;
    return default_value_55;
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
    char*  str_56  ;
    char*  str_57  ;
    char*  str_58  ;
    char*  type_name  ;
    struct __current_stack2__ __current_stack2__;
    char*  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    struct CVALUE*  cvalue  ;
    int n;
    struct list$1sNode$ph* o2_saved_59;
    struct sNode* it_60;
    struct CVALUE*  cvalue_61  ;
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 726, "struct buffer* "))), "03output_code.nc", 726)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(sType_clone(type));
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 730))->mClass, "03output_code.nc", 730))->mName, "03output_code.nc", 730)),"lambda")&&((struct sType* )come_null_checker(type2, "03output_code.nc", 730))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 730))->mAsmName, "03output_code.nc", 730)),"")) {
        if(!in_typedef&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 731))->mOriginalTypeName, "03output_code.nc", 731)),"")&&(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 731))->mArrayNum, "03output_code.nc", 731)))>0||((struct sType* )come_null_checker(type2, "03output_code.nc", 731))->mArrayPointerType)) {
            str=(char* )come_increment_ref_count(output_lambda_original_type(type2,name,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 734)),str);
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_56=(char* )come_increment_ref_count(header_lambda(type2,(char* )come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 737))->mAsmName),info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 739)),str_56);
            (str_56 = come_decrement_ref_count(str_56, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 742))->mClass, "03output_code.nc", 742))->mName, "03output_code.nc", 742)),"lambda")) {
        if(!in_typedef&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 743))->mOriginalTypeName, "03output_code.nc", 743)),"")&&(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 743))->mArrayNum, "03output_code.nc", 743)))>0||((struct sType* )come_null_checker(type2, "03output_code.nc", 743))->mArrayPointerType)) {
            str_57=(char* )come_increment_ref_count(output_lambda_original_type(type2,name,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 746)),str_57);
            (str_57 = come_decrement_ref_count(str_57, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_58=(char* )come_increment_ref_count(make_lambda_type_name_string(type2,name,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 751)),str_58);
            (str_58 = come_decrement_ref_count(str_58, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,no_static,(_Bool)0,(_Bool)0));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 757)),"%s ",type_name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 759))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 760)),"(");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 762))->mPointerParen) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 763)),"(");
        }
        ({        __current_stack2__.type_name = &type_name;
        __current_stack2__.type = &type;
        __current_stack2__.name = &name;
        __current_stack2__.info = &info;
        __current_stack2__.no_static = &no_static;
        __current_stack2__.in_typedef = &in_typedef;
        __current_stack2__.buf = &buf;
        __current_stack2__.type2 = &type2;
        })        ,        int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 766))->mArrayPointerNum,&__current_stack2__,(void*)method_block2_03outputcodenc);
        if(!((struct sType* )come_null_checker(type2, "03output_code.nc", 770))->mAnonymousVarName) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 771)),"%s",name);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 774))->mSizeNum!=((void*)0)) {
            if(!node_compile(((struct sType* )come_null_checker(type2, "03output_code.nc", 775))->mSizeNum,info)) {
                err_msg(info,"invalid bit field number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 781)),":%s",((struct CVALUE* )come_null_checker(come_value, "03output_code.nc", 781))->c_value);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 784))->mPointerParen) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 785)),")");
        }
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 788))->mVarNameArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 788)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 788)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 788)))){
            if(!node_compile(it,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 795)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 795))->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 798))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 799)),")");
        }
        n=0;
        for(o2_saved_59=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 803))->mArrayNum),it_60=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_59, "03output_code.nc", 803)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_59, "03output_code.nc", 803)));it_60=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_59, "03output_code.nc", 803)))){
            if(!node_compile(it_60,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue_61=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 810))->mArrayRestrict, "03output_code.nc", 810)), "03output_code.nc", 810)),n)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 810))->mArrayStatic, "03output_code.nc", 810)), "03output_code.nc", 810)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 811)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue_61, "03output_code.nc", 811))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 813))->mArrayStatic, "03output_code.nc", 813)), "03output_code.nc", 813)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 814)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue_61, "03output_code.nc", 814))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 816))->mArrayRestrict, "03output_code.nc", 816)), "03output_code.nc", 816)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 817)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue_61, "03output_code.nc", 817))->c_value);
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 820)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_61, "03output_code.nc", 820))->c_value);
            }
            n++;
            come_call_finalizer(CVALUE_finalize, cvalue_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_59, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 826))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 827)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 830))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 830))->mAsmName, "03output_code.nc", 830)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 831))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 831))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 834))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 835))," ");
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 836)),((struct sType* )come_null_checker(type, "03output_code.nc", 836))->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 840))->mVarAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 841)),((char* )(__right_value0=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 841)),((struct sType* )come_null_checker(type, "03output_code.nc", 841))->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 844))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void method_block2_03outputcodenc(struct __current_stack2__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 768)),"*");
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
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    struct CVALUE*  cvalue  ;
    struct CVALUE*  come_value  ;
    int i;
    int i_62;
    int n_63;
    struct list$1sNode$ph* o2_saved_64;
    struct sNode* it_65;
    struct CVALUE*  cvalue_66  ;
    int i_67;
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 849, "struct buffer* "))), "03output_code.nc", 849)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(sType_clone(type));
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 852))->mArrayPointerType) {
        ((struct sType* )come_null_checker(type2, "03output_code.nc", 853))->mPointerNum--;
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 856))->mClass, "03output_code.nc", 856))->mName, "03output_code.nc", 856)),"lambda")&&((struct sType* )come_null_checker(type2, "03output_code.nc", 856))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 856))->mAsmName, "03output_code.nc", 856)),"")) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(name))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 859))->mClass, "03output_code.nc", 859))->mName, "03output_code.nc", 859)),"lambda")) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(name))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 862))->mArrayPointerNum>0) {
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,no_static,(_Bool)0,(_Bool)0));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 865)),"(");
        ({        __current_stack3__.type_name = &type_name;
        __current_stack3__.type = &type;
        __current_stack3__.name = &name;
        __current_stack3__.info = &info;
        __current_stack3__.no_static = &no_static;
        __current_stack3__.buf = &buf;
        __current_stack3__.type2 = &type2;
        })        ,        int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 866))->mArrayPointerNum,&__current_stack3__,(void*)method_block3_03outputcodenc);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 869)),"%s)",name);
        n=0;
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 872))->mArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 872)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 872)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 872)))){
            if(!node_compile(it,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 879))->mArrayRestrict, "03output_code.nc", 879)), "03output_code.nc", 879)),n)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 879))->mArrayStatic, "03output_code.nc", 879)), "03output_code.nc", 879)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 880)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 880))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 882))->mArrayStatic, "03output_code.nc", 882)), "03output_code.nc", 882)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 883)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 883))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 885))->mArrayRestrict, "03output_code.nc", 885)), "03output_code.nc", 885)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 886)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 886))->c_value);
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 889)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 889))->c_value);
            }
            n++;
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 895))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 895))->mAsmName, "03output_code.nc", 895)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 896))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 896))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 899))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 900))," ");
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 901)),((struct sType* )come_null_checker(type, "03output_code.nc", 901))->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 904))->mSizeNum!=((void*)0)) {
        if(!node_compile(((struct sType* )come_null_checker(type2, "03output_code.nc", 905))->mSizeNum,info)) {
            err_msg(info,"invalid bit field number");
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        for(i=0;i<((struct sType* )come_null_checker(type2, "03output_code.nc", 912))->mPointerNum;i++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 913)),"*");
        }
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 915)),"%s:%s",name,((struct CVALUE* )come_null_checker(come_value, "03output_code.nc", 915))->c_value);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 917))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 917))->mAsmName, "03output_code.nc", 917)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 918))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 918))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 921))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 922))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 922))->mAttribute);
        }
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 925))->mArrayNum, "03output_code.nc", 925)))>0) {
        for(i_62=0;i_62<((struct sType* )come_null_checker(type2, "03output_code.nc", 926))->mPointerNum;i_62++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 927)),"*");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 929)),name);
        n_63=0;
        for(o2_saved_64=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 932))->mArrayNum),it_65=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_64, "03output_code.nc", 932)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_64, "03output_code.nc", 932)));it_65=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_64, "03output_code.nc", 932)))){
            if(!node_compile(it_65,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue_66=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 939))->mArrayRestrict, "03output_code.nc", 939)), "03output_code.nc", 939)),n_63)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 939))->mArrayStatic, "03output_code.nc", 939)), "03output_code.nc", 939)),n_63)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 940)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue_66, "03output_code.nc", 940))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 942))->mArrayStatic, "03output_code.nc", 942)), "03output_code.nc", 942)),n_63)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 943)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue_66, "03output_code.nc", 943))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 945))->mArrayRestrict, "03output_code.nc", 945)), "03output_code.nc", 945)),n_63)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 946)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue_66, "03output_code.nc", 946))->c_value);
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 949)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_66, "03output_code.nc", 949))->c_value);
            }
            n_63++;
            come_call_finalizer(CVALUE_finalize, cvalue_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 955))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 956)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 959))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 959))->mAsmName, "03output_code.nc", 959)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 960))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 960))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 963))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 964))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 964))->mAttribute);
        }
    }
    else {
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 968))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 969)),((struct sType* )come_null_checker(type, "03output_code.nc", 969))->mAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 971))," ");
        for(i_67=0;i_67<((struct sType* )come_null_checker(type2, "03output_code.nc", 972))->mPointerNum;i_67++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 973)),"*");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 975)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 977))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 978)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 981))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 981))->mAsmName, "03output_code.nc", 981)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 982))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 982))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 985))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 986))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 986))->mAttribute);
        }
    }
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 990))->mVarAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 991)),((char* )(__right_value0=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 991)),((struct sType* )come_null_checker(type, "03output_code.nc", 991))->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 994))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void method_block3_03outputcodenc(struct __current_stack3__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block3_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 868)),"*");
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
    char*  str_68  ;
    char*  type_name  ;
    struct __current_stack4__ __current_stack4__;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    struct CVALUE*  come_value  ;
    char*  type_str  ;
    char*  __dec_obj43  ;
    char*  type_str_69  ;
    char*  __dec_obj44  ;
    struct list$1sNode$ph* o2_saved_70;
    struct sNode* it_71;
    struct CVALUE*  cvalue_72  ;
    char*  type_str_73  ;
    char*  __dec_obj45  ;
    memset(&__current_stack4__, 0, sizeof(struct __current_stack4__));
    memset(&type_str, 0, sizeof(type_str));
    memset(&type_str_69, 0, sizeof(type_str_69));
    memset(&type_str_73, 0, sizeof(type_str_73));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 999, "struct buffer* "))), "03output_code.nc", 999)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(sType_clone(type));
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1002))->mArrayPointerType) {
        ((struct sType* )come_null_checker(type2, "03output_code.nc", 1003))->mPointerNum--;
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1006))->mClass, "03output_code.nc", 1006))->mName, "03output_code.nc", 1006)),"lambda")&&((struct sType* )come_null_checker(type2, "03output_code.nc", 1006))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1006))->mAsmName, "03output_code.nc", 1006)),"")) {
        str=(char* )come_increment_ref_count(header_lambda(type2,(char* )come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 1007))->mAsmName),info));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1009)),str);
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1011))->mClass, "03output_code.nc", 1011))->mName, "03output_code.nc", 1011)),"lambda")) {
        str_68=(char* )come_increment_ref_count(make_lambda_type_name_string(type2,name,info));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1014)),str_68);
        (str_68 = come_decrement_ref_count(str_68, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1016))->mArrayPointerNum>0) {
        type_name=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1019)),"%s (",type_name);
        ({        __current_stack4__.type_name = &type_name;
        __current_stack4__.type = &type;
        __current_stack4__.name = &name;
        __current_stack4__.info = &info;
        __current_stack4__.buf = &buf;
        __current_stack4__.type2 = &type2;
        })        ,        int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 1020))->mArrayPointerNum,&__current_stack4__,(void*)method_block4_03outputcodenc);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1023)),"%s)",name);
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 1025))->mArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 1025)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 1025)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 1025)))){
            if(!node_compile(it,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1032)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1032))->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1035))->mArrayPointerType) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1036)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1039))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1039))->mAsmName, "03output_code.nc", 1039)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1040))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1040))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1043))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1044))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1044))->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1047))->mSizeNum!=((void*)0)) {
        if(!node_compile(((struct sType* )come_null_checker(type2, "03output_code.nc", 1048))->mSizeNum,info)) {
            err_msg(info,"invalid bit field number");
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj43=type_str,
        type_str=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1057)),"%s ",type_str);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1058)),"%s:%s",name,((struct CVALUE* )come_null_checker(come_value, "03output_code.nc", 1058))->c_value);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1060))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1060))->mAsmName, "03output_code.nc", 1060)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1061))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1061))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1064))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1065))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1065))->mAttribute);
        }
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_str = come_decrement_ref_count(type_str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1068))->mArrayNum, "03output_code.nc", 1068)))>0) {
        __dec_obj44=type_str_69,
        type_str_69=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1072)),type_str_69);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1074))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1075)),name);
        for(o2_saved_70=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 1077))->mArrayNum),it_71=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_70, "03output_code.nc", 1077)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_70, "03output_code.nc", 1077)));it_71=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_70, "03output_code.nc", 1077)))){
            if(!node_compile(it_71,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_str_69 = come_decrement_ref_count(type_str_69, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue_72=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1084)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_72, "03output_code.nc", 1084))->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1087))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1088)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1091))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1091))->mAsmName, "03output_code.nc", 1091)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1092))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1092))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1095))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1096))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1096))->mAttribute);
        }
        (type_str_69 = come_decrement_ref_count(type_str_69, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj45=type_str_73,
        type_str_73=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(type_str_73, "03output_code.nc", 1103)),"")) {
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            (type_str_73 = come_decrement_ref_count(type_str_73, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1107)),type_str_73);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1109))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1110)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1112))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1113)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1116))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1116))->mAsmName, "03output_code.nc", 1116)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1117))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1117))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1120))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1121))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1121))->mAttribute);
        }
        (type_str_73 = come_decrement_ref_count(type_str_73, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1125))->mVarAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1126)),((char* )(__right_value0=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 1126)),((struct sType* )come_null_checker(type, "03output_code.nc", 1126))->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1129))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void method_block4_03outputcodenc(struct __current_stack4__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block4_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 1022)),"*");
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
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char* name;
    char*  str  ;
    char*  str_76  ;
    struct sType*  base_result_type  ;
    struct list$1sNode$ph* __dec_obj46;
    char*  result_type_str  ;
    int i_77;
    struct list$1sType$ph* o2_saved_78;
    struct sType*  it_79  ;
    char* name_80;
    char*  str_81  ;
    struct sNode* node;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    char*  result_type_str_82  ;
    int i_83;
    struct list$1sType$ph* o2_saved_84;
    struct sType*  it_85  ;
    char* name_86;
    char*  str_87  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1134, "struct buffer* "))), "03output_code.nc", 1134)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1135))->mResultType, "03output_code.nc", 1135))->mResultType) {
        output2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1136, "struct buffer* "))), "03output_code.nc", 1136)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1138)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1138))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1139)),"(");
        i=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1142))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1142)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1142)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1142)))){
            name=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1143))->mParamNames, "03output_code.nc", 1143)), "03output_code.nc", 1143)),i)));
            str=(char* )come_increment_ref_count(make_define_var(it,name,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1146)),str);
            if(i==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1148))->mParamTypes, "03output_code.nc", 1148)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1149))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1150)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1154)),", ");
            }
            i++;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1159)),")");
        str_76=(char* )come_increment_ref_count(make_lambda_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1161))->mResultType,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1161))))),info));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1163))->mAttribute, "03output_code.nc", 1163)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1164)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1164))->mAttribute, "03output_code.nc", 1164)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1166))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1167)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1169))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1170)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1173)),str_76);
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1175))->module, "03output_code.nc", 1175))->mSourceHead, "03output_code.nc", 1175)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1175))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1177))->mFunAttribute, "03output_code.nc", 1177)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1178))->module, "03output_code.nc", 1178))->mSourceHead, "03output_code.nc", 1178)),((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1178))->mFunAttribute, "03output_code.nc", 1178)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1181))->module, "03output_code.nc", 1181))->mSourceHead, "03output_code.nc", 1181)),";\n");
        }
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (str_76 = come_decrement_ref_count(str_76, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1184))->mResultType, "03output_code.nc", 1184))->mArrayNum, "03output_code.nc", 1184)))>0) {
        base_result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1185))->mResultType));
        __dec_obj46=((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1186))->mArrayNum,
        ((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1186))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1186, "struct list$1sNode$ph*"))), "03output_code.nc", 1186)))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(base_result_type,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1190))->mAttribute, "03output_code.nc", 1190)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1191)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1191))->mAttribute, "03output_code.nc", 1191)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1193))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1194)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1196))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1197)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1200)),result_type_str);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1201))->mMiddleAttribute, "03output_code.nc", 1201)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1202))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1203)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1203))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1205))," (*");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1207)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1207))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1208)),"(");
        i_77=0;
        for(o2_saved_78=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1211))->mParamTypes),it_79=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_78, "03output_code.nc", 1211)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_78, "03output_code.nc", 1211)));it_79=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_78, "03output_code.nc", 1211)))){
            name_80=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1212))->mParamNames, "03output_code.nc", 1212)), "03output_code.nc", 1212)),i_77)));
            str_81=(char* )come_increment_ref_count(make_define_var(it_79,name_80,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1215)),str_81);
            if(i_77==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1217))->mParamTypes, "03output_code.nc", 1217)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1218))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1219)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1223)),", ");
            }
            i_77++;
            (str_81 = come_decrement_ref_count(str_81, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        node=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1229))->mResultType, "03output_code.nc", 1229))->mArrayNum, "03output_code.nc", 1229)), "03output_code.nc", 1229)),0)));
        if(!node_compile(node,info)) {
            err_msg(info,"invalid array number");
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1237)),"))[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1237))->c_value);
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1239))->module, "03output_code.nc", 1239))->mSourceHead, "03output_code.nc", 1239)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1239))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1240))->mFunAttribute, "03output_code.nc", 1240)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1241))->module, "03output_code.nc", 1241))->mSourceHead, "03output_code.nc", 1241)),((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1241))->mFunAttribute, "03output_code.nc", 1241)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1244))->module, "03output_code.nc", 1244))->mSourceHead, "03output_code.nc", 1244)),";\n");
        }
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        result_type_str_82=(char* )come_increment_ref_count(make_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1248))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1250))->mAttribute, "03output_code.nc", 1250)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1251)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1251))->mAttribute, "03output_code.nc", 1251)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1253))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1254)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1256))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1257)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1260)),result_type_str_82);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1261))->mMiddleAttribute, "03output_code.nc", 1261)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1262))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1263)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1263))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1265))," ");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1267)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1267))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1268)),"(");
        i_83=0;
        for(o2_saved_84=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1271))->mParamTypes),it_85=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_84, "03output_code.nc", 1271)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_84, "03output_code.nc", 1271)));it_85=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_84, "03output_code.nc", 1271)))){
            name_86=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1272))->mParamNames, "03output_code.nc", 1272)), "03output_code.nc", 1272)),i_83)));
            str_87=(char* )come_increment_ref_count(make_define_var(it_85,name_86,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1275)),str_87);
            if(i_83==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1277))->mParamTypes, "03output_code.nc", 1277)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1278))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1279)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1283)),", ");
            }
            i_83++;
            (str_87 = come_decrement_ref_count(str_87, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1288)),")");
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1290))->module, "03output_code.nc", 1290))->mSourceHead, "03output_code.nc", 1290)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1290))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1291))->mFunAttribute, "03output_code.nc", 1291)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1292))->module, "03output_code.nc", 1292))->mSourceHead, "03output_code.nc", 1292)),((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1292))->mFunAttribute, "03output_code.nc", 1292)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1295))->module, "03output_code.nc", 1295))->mSourceHead, "03output_code.nc", 1295)),";\n");
        }
        (result_type_str_82 = come_decrement_ref_count(result_type_str_82, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1299)),"\n{\n");
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1301)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1301))->mSourceHead, "03output_code.nc", 1301))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1302)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1302))->mSourceHead2, "03output_code.nc", 1302))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1303)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1303))->mSource, "03output_code.nc", 1303))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1305)),"}\n");
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1307))))));
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_74  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(position<0) {
        position+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_74,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_74);
    (default_value_74 = come_decrement_ref_count(default_value_74, (void*)0, (void*)0, 0, 1, (void*)0));
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
    char*  default_value_75  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(position<0) {
        position+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_75,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_75);
    (default_value_75 = come_decrement_ref_count(default_value_75, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool is_gcc_builtin_float_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_gcc_builtin_float_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 1312))->mClass, "03output_code.nc", 1312))->mName, "03output_code.nc", 1313)),"_Float128")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 1313))->mClass, "03output_code.nc", 1313))->mName, "03output_code.nc", 1313)),"__float128");
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
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char* name;
    char*  str  ;
    char*  str_88  ;
    struct sType*  base_result_type  ;
    struct list$1sNode$ph* __dec_obj47;
    char*  result_type_str  ;
    int i_89;
    struct list$1sType$ph* o2_saved_90;
    struct sType*  it_91  ;
    char* name_92;
    char*  str_93  ;
    struct sNode* node;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    char*  result_type_str_94  ;
    int i_95;
    struct list$1sType$ph* o2_saved_96;
    struct sType*  it_97  ;
    char* name_98;
    char*  str_99  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1318, "struct buffer* "))), "03output_code.nc", 1318)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1320))->mResultType, "03output_code.nc", 1320))->mResultType) {
        output2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1321, "struct buffer* "))), "03output_code.nc", 1321)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1323)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1323))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1324)),"(");
        i=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1327))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1327)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1327)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1327)))){
            name=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1328))->mParamNames, "03output_code.nc", 1328)), "03output_code.nc", 1328)),i)));
            str=(char* )come_increment_ref_count(make_define_var(it,name,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1331)),str);
            if(i!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1333))->mParamTypes, "03output_code.nc", 1333)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1334)),", ");
            }
            i++;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1338)),")");
        str_88=(char* )come_increment_ref_count(make_lambda_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1340))->mResultType,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1340))))),info));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1342))->mAttribute, "03output_code.nc", 1342)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1343)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1343))->mAttribute, "03output_code.nc", 1343)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1345))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1346)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1348))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1349)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1351)),str_88);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1353))->mFunAttribute, "03output_code.nc", 1353)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1354)),((char*)(__right_value1=xsprintf(" \%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1354))->mFunAttribute, "03output_code.nc", 1354)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1357)),";\n");
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (str_88 = come_decrement_ref_count(str_88, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1359))->mResultType, "03output_code.nc", 1359))->mArrayNum, "03output_code.nc", 1359)))>0) {
        base_result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1360))->mResultType));
        __dec_obj47=((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1361))->mArrayNum,
        ((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1361))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1361, "struct list$1sNode$ph*"))), "03output_code.nc", 1361)))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(base_result_type,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1365))->mAttribute, "03output_code.nc", 1365)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1366)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1366))->mAttribute, "03output_code.nc", 1366)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1368))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1369)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1371))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1372)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1375)),result_type_str);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1376))->mMiddleAttribute, "03output_code.nc", 1376)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1377))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1378)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1378))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1380))," (*");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1382)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1382))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1383)),"(");
        i_89=0;
        for(o2_saved_90=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1386))->mParamTypes),it_91=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_90, "03output_code.nc", 1386)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_90, "03output_code.nc", 1386)));it_91=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_90, "03output_code.nc", 1386)))){
            name_92=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1387))->mParamNames, "03output_code.nc", 1387)), "03output_code.nc", 1387)),i_89)));
            str_93=(char* )come_increment_ref_count(make_define_var(it_91,name_92,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1390)),str_93);
            if(i_89==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1392))->mParamTypes, "03output_code.nc", 1392)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1393))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1394)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1398)),", ");
            }
            i_89++;
            (str_93 = come_decrement_ref_count(str_93, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        node=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1403))->mResultType, "03output_code.nc", 1403))->mArrayNum, "03output_code.nc", 1403)), "03output_code.nc", 1403)),0)));
        if(!node_compile(node,info)) {
            err_msg(info,"invalid array number");
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1410)),"))[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1410))->c_value);
        buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1411)),";\n");
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(is_gcc_builtin_float_type(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1414))->mResultType,info)) {
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        result_type_str_94=(char* )come_increment_ref_count(make_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1417))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1419))->mAttribute, "03output_code.nc", 1419)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1420)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1420))->mAttribute, "03output_code.nc", 1420)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1422))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1423)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1425))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1426)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1429)),result_type_str_94);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1430))->mMiddleAttribute, "03output_code.nc", 1430)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1431))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1432)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1432))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1434))," ");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1436)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1436))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1437)),"(");
        i_95=0;
        for(o2_saved_96=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1440))->mParamTypes),it_97=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_96, "03output_code.nc", 1440)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_96, "03output_code.nc", 1440)));it_97=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_96, "03output_code.nc", 1440)))){
            name_98=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1441))->mParamNames, "03output_code.nc", 1441)), "03output_code.nc", 1441)),i_95)));
            if(is_gcc_builtin_float_type(it_97,info)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result_type_str_94 = come_decrement_ref_count(result_type_str_94, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            str_99=(char* )come_increment_ref_count(make_define_var(it_97,name_98,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1448)),str_99);
            if(i_95==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1450))->mParamTypes, "03output_code.nc", 1450)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1451))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1452)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1456)),", ");
            }
            i_95++;
            (str_99 = come_decrement_ref_count(str_99, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1461))->mFunAttribute, "03output_code.nc", 1461)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1462)),((char*)(__right_value1=xsprintf(") \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1462))->mFunAttribute, "03output_code.nc", 1462)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1465)),");\n");
        }
        (result_type_str_94 = come_decrement_ref_count(result_type_str_94, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1469))))));
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    int i_100;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char* name_101;
    char*  str  ;
    void* __right_value2 = (void*)0;
    char*  __result_obj__0  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1474, "struct buffer* "))), "03output_code.nc", 1474)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    result_type_str=(char* )come_increment_ref_count(make_type_name_string(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1476))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1478)),result_type_str);
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1479))," ");
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1481)),name);
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1482))->mArrayNum, "03output_code.nc", 1482)))>0) {
        for(i=0;i<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1483))->mArrayNum, "03output_code.nc", 1483)));i++){
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1484)),"[");
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1485))->mArrayNum, "03output_code.nc", 1485)), "03output_code.nc", 1485)),i));
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1494)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1494))->c_value);
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1495)),"]");
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1498)),"(");
    i_100=0;
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1501))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1501)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1501)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1501)))){
        name_101=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1502))->mParamNames, "03output_code.nc", 1502)), "03output_code.nc", 1502)),i_100)));
        str=(char* )come_increment_ref_count(make_define_var(it,name_101,info,(_Bool)1,(_Bool)0));
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1505)),str);
        if(i_100==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1507))->mParamTypes, "03output_code.nc", 1507)))-1) {
            if(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1508))->mVarArgs) {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1509)),", ...");
            }
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1513)),", ");
        }
        i_100++;
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1518))->mAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1519)),((char* )(__right_value2=string_operator_add(((char* )come_null_checker(((char* )(__right_value1=charp_operator_add(((const char*)come_null_checker(" ", "03output_code.nc", 1519)),((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1519))->mAttribute))), "03output_code.nc", 1519)),");\n"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1522)),");\n");
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1525))))));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    int i_102;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    memset(&i, 0, sizeof(i));
    memset(&i_102, 0, sizeof(i_102));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1530))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1540))->if_expression_buffer) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1541))->in_conditional) {
            for(i=0;i<((struct sInfo* )come_null_checker(info, "03output_code.nc", 1543))->block_level;i++){
                buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1544))->if_expression_buffer, "03output_code.nc", 1544)),"    ");
            }
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1548))->if_expression_buffer, "03output_code.nc", 1548)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1550))->paren_block_buffer) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1551))->paren_block_buffer, "03output_code.nc", 1551)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1553))->come_fun) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1554))->in_conditional) {
            for(i_102=0;i_102<((struct sInfo* )come_null_checker(info, "03output_code.nc", 1556))->block_level;i_102++){
                buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1557))->come_fun, "03output_code.nc", 1557))->mSource, "03output_code.nc", 1557)),"    ");
            }
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1561))->come_fun, "03output_code.nc", 1561))->mSource, "03output_code.nc", 1561)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1564))->module, "03output_code.nc", 1564))->mSourceHead, "03output_code.nc", 1564)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

static void __builtin_va_list_finalize(__builtin_va_list*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_va_list_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

void add_come_code_no_indent(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_code_no_indent"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    void* __right_value0 = (void*)0;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1572))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1582))->if_expression_buffer) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1583))->in_conditional) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1584))->if_expression_buffer, "03output_code.nc", 1584)),"    ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1587))->if_expression_buffer, "03output_code.nc", 1587)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1589))->paren_block_buffer) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1590))->paren_block_buffer, "03output_code.nc", 1590)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1592))->come_fun) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1593))->in_conditional) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1594))->come_fun, "03output_code.nc", 1594))->mSource, "03output_code.nc", 1594)),"    ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1597))->come_fun, "03output_code.nc", 1597))->mSource, "03output_code.nc", 1597)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1600))->module, "03output_code.nc", 1600))->mSourceHead, "03output_code.nc", 1600)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

_Bool is_contained_generics_funcstion(struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_contained_generics_funcstion"; neo_current_frame = &fr;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    struct sType*  type_  ;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sType*  result_type  ;
    struct sType*  result_type2  ;
    struct sType*  __dec_obj48  ;
    struct sType*  __dec_obj49  ;
    memset(&type_, 0, sizeof(type_));
    memset(&result_type2, 0, sizeof(result_type2));
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1608))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1608)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1608)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1608)))){
        if(((struct sType* )come_null_checker(it, "03output_code.nc", 1610))->mNoSolvedGenericsType) {
            type_=((struct sType* )come_null_checker(it, "03output_code.nc", 1611))->mNoSolvedGenericsType;
        }
        else {
            type_=it;
        }
        if(is_contained_generics_class(type_,info)) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1620))->mResultType));
    if(((struct sType* )come_null_checker(result_type, "03output_code.nc", 1623))->mNoSolvedGenericsType) {
        __dec_obj48=result_type2,
        result_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result_type, "03output_code.nc", 1624))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj49=result_type2,
        result_type2=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(is_contained_generics_class(result_type2,info)) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct map$2char$phsFun$ph* o2_saved;
    char*  it  ;
    struct sFun*  it2  ;
    struct sFun*  new_fun  ;
    char*  output_file_name  ;
    struct _IO_FILE*  f  ;
    struct map$2char$phbuffer$ph* o2_saved_117;
    char*  it_119  ;
    struct buffer*  buf  ;
    struct map$2char$phbuffer$ph* o2_saved_122;
    char*  it_123  ;
    struct buffer*  buf_124  ;
    struct map$2char$phbuffer$ph* o2_saved_125;
    char*  it_126  ;
    struct buffer*  buf_127  ;
    struct map$2char$phbuffer$ph* o2_saved_128;
    char*  it_129  ;
    struct buffer*  buf_130  ;
    struct map$2char$phbuffer$ph* o2_saved_131;
    char*  it_132  ;
    struct buffer*  buf_133  ;
    struct map$2char$phsFun$ph* o2_saved_134;
    char*  it_135  ;
    struct sFun*  it2_136  ;
    _Bool contained_generics;
    char*  header  ;
    struct map$2char$phchar$ph* o2_saved_137;
    char*  it_139  ;
    char* str;
    struct map$2char$phsFun$ph* o2_saved_142;
    char*  it_143  ;
    struct sFun*  it2_144  ;
    _Bool contained_generics_145;
    char*  output  ;
    struct map$2char$phsFun$ph* o2_saved_146;
    char*  it_147  ;
    struct sFun*  it2_148  ;
    _Bool contained_generics_149;
    char*  output_150  ;
    _Bool __result_obj__0;
    main_fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1639))->funcs, "03output_code.nc", 1639)), "03output_code.nc", 1639)),((char*)(__right_value1=xsprintf("main"))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    main_module=(_Bool)0;
    if(main_fun) {
        if(!((struct sFun* )come_null_checker(main_fun, "03output_code.nc", 1642))->mExternal) {
            main_module=(_Bool)1;
        }
    }
    if(gComeUniq) {
        main_module=(_Bool)1;
    }
    if(main_module) {
        for(o2_saved=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1652))->uniq_funcs),it=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved, "03output_code.nc", 1652)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved, "03output_code.nc", 1652)));it=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved, "03output_code.nc", 1652)))){
            it2=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1653))->uniq_funcs, "03output_code.nc", 1653)), "03output_code.nc", 1653)),((char* )(__right_value1=__builtin_string(it))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            new_fun=(struct sFun* )come_increment_ref_count(compile_uniq_function(it2,info));
            if(new_fun==((void*)0)) {
                err_msg(info,"compile %s failed");
                exit(3);
            }
            map$2char$phsFun$ph_put(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1661))->funcs, "03output_code.nc", 1661)),(char* )come_increment_ref_count(__builtin_string(it)),(struct sFun* )come_increment_ref_count(new_fun),(_Bool)0);
            come_call_finalizer(sFun_finalize, new_fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    output_file_name=(char* )come_increment_ref_count(xsprintf("%s.c",((char* )(__right_value0=xnoextname(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1666))->sname)))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    f=fopen(output_file_name,"w");
    if(f==((void*)0)) {
        die("fopen");
    }
    fprintf(f,"/// c_include definition ///\n");
    for(o2_saved_117=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1672))->c_include_definition),it_119=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_117, "03output_code.nc", 1672)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_117, "03output_code.nc", 1672)));it_119=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_117, "03output_code.nc", 1672)))){
        buf=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1673))->c_include_definition, "03output_code.nc", 1673)), "03output_code.nc", 1673)),((char* )(__right_value1=__builtin_string(it_119))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1674))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// typedef definition ///\n");
    for(o2_saved_122=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1678))->typedef_definition),it_123=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_122, "03output_code.nc", 1678)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_122, "03output_code.nc", 1678)));it_123=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_122, "03output_code.nc", 1678)))){
        buf_124=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1679))->typedef_definition, "03output_code.nc", 1679)), "03output_code.nc", 1679)),((char* )(__right_value1=__builtin_string(it_123))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_124, "03output_code.nc", 1680))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// previous struct definition ///\n");
    for(o2_saved_125=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1684))->previous_struct_definition),it_126=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_125, "03output_code.nc", 1684)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_125, "03output_code.nc", 1684)));it_126=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_125, "03output_code.nc", 1684)))){
        buf_127=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1685))->previous_struct_definition, "03output_code.nc", 1685)), "03output_code.nc", 1685)),((char* )(__right_value1=__builtin_string(it_126))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_127, "03output_code.nc", 1686))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// struct definition ///\n");
    for(o2_saved_128=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1690))->struct_definition),it_129=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_128, "03output_code.nc", 1690)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_128, "03output_code.nc", 1690)));it_129=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_128, "03output_code.nc", 1690)))){
        buf_130=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1691))->struct_definition, "03output_code.nc", 1691)), "03output_code.nc", 1691)),((char* )(__right_value1=__builtin_string(it_129))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_130, "03output_code.nc", 1692))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// variable definition ///\n");
    for(o2_saved_131=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1696))->var_definition),it_132=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_131, "03output_code.nc", 1696)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_131, "03output_code.nc", 1696)));it_132=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_131, "03output_code.nc", 1696)))){
        buf_133=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1697))->var_definition, "03output_code.nc", 1697)), "03output_code.nc", 1697)),((char* )(__right_value1=__builtin_string(it_132))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_133, "03output_code.nc", 1698))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"// source head\n");
    fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1702))->module, "03output_code.nc", 1702))->mSourceHead, "03output_code.nc", 1702))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    fprintf(f,"// header function\n");
    for(o2_saved_134=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1705))->funcs),it_135=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_134, "03output_code.nc", 1705)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_134, "03output_code.nc", 1705)));it_135=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_134, "03output_code.nc", 1705)))){
        it2_136=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1706))->funcs, "03output_code.nc", 1706)), "03output_code.nc", 1706)),((char* )(__right_value1=__builtin_string(it_135))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        contained_generics=is_contained_generics_funcstion(it2_136,info);
        if(!contained_generics) {
            header=(char* )come_increment_ref_count(header_function(it2_136,info));
            if(((struct sFun* )come_null_checker(it2_136, "03output_code.nc", 1713))->mInline) {
            }
            else if(string_operator_not_equals(((char* )come_null_checker(it_135, "03output_code.nc", 1715)),"__builtin_va_start")&&string_operator_not_equals(((char* )come_null_checker(it_135, "03output_code.nc", 1715)),"__builtin_va_end")) {
                fprintf(f,"%s",header);
            }
            (header = come_decrement_ref_count(header, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"// uniq global variable\n");
    if(main_module) {
        for(o2_saved_137=(struct map$2char$phchar$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1723))->uniq_definition),it_139=map$2char$phchar$ph_begin(((struct map$2char$phchar$ph*)come_null_checker(o2_saved_137, "03output_code.nc", 1723)));!map$2char$phchar$ph_end(((struct map$2char$phchar$ph*)come_null_checker(o2_saved_137, "03output_code.nc", 1723)));it_139=map$2char$phchar$ph_next(((struct map$2char$phchar$ph*)come_null_checker(o2_saved_137, "03output_code.nc", 1723)))){
            str=((char* )(__right_value2=map$2char$phchar$ph_operator_load_element(((struct map$2char$phchar$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1724))->uniq_definition, "03output_code.nc", 1724)), "03output_code.nc", 1724)),((char* )(__right_value1=__builtin_string(it_139))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            fprintf(f,"%s\n",str);
        }
        come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    fprintf(f,"// inline function\n");
    for(o2_saved_142=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1730))->funcs),it_143=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_142, "03output_code.nc", 1730)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_142, "03output_code.nc", 1730)));it_143=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_142, "03output_code.nc", 1730)))){
        it2_144=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1731))->funcs, "03output_code.nc", 1731)), "03output_code.nc", 1731)),((char* )(__right_value1=__builtin_string(it_143))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        contained_generics_145=is_contained_generics_funcstion(it2_144,info);
        if(contained_generics_145) {
        }
        else if(((struct sFun* )come_null_checker(it2_144, "03output_code.nc", 1736))->mInline) {
            output=(char* )come_increment_ref_count(output_function(it2_144,info));
            fprintf(f,"%s",output);
            (output = come_decrement_ref_count(output, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"\n");
    fprintf(f,"// body function\n");
    for(o2_saved_146=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1745))->funcs),it_147=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_146, "03output_code.nc", 1745)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_146, "03output_code.nc", 1745)));it_147=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_146, "03output_code.nc", 1745)))){
        it2_148=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1746))->funcs, "03output_code.nc", 1746)), "03output_code.nc", 1746)),((char* )(__right_value1=__builtin_string(it_147))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        contained_generics_149=is_contained_generics_funcstion(it2_148,info);
        if(contained_generics_149) {
        }
        else if(((struct sFun* )come_null_checker(it2_148, "03output_code.nc", 1752))->mExternal) {
        }
        else if(!main_module&&((struct sFun* )come_null_checker(it2_148, "03output_code.nc", 1754))->mUniq) {
        }
        else if(((struct sFun* )come_null_checker(it2_148, "03output_code.nc", 1756))->mInline) {
        }
        else {
            output_150=(char* )come_increment_ref_count(output_function(it2_148,info));
            fprintf(f,"%s",output_150);
            fprintf(f,"\n");
            (output_150 = come_decrement_ref_count(output_150, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fclose(f);
    __result_obj__0 = (_Bool)1;
    (output_file_name = come_decrement_ref_count(output_file_name, (void*)0, (void*)0, 0, 0, (void*)0));
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
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 0))->mName!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 1))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 2))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 3))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 4))->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 5))->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 6))->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 6))->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 7))->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 8))->mTextBlock!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 8))->mTextBlock = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 8))->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 9))->mTextBlockSName!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 9))->mTextBlockSName = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 9))->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 10))->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 10))->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 11))->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 11))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 12))->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun* )come_null_checker(self, "sFun_finalize", 12))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 13))->mAttribute!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 13))->mAttribute = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 13))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 14))->mMiddleAttribute!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 14))->mMiddleAttribute = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 14))->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun* )come_null_checker(self, "sFun_finalize", 15))->mFunAttribute!=((void*)0)) {
        (((struct sFun* )come_null_checker(self, "sFun_finalize", 15))->mFunAttribute = come_decrement_ref_count(((struct sFun* )come_null_checker(self, "sFun_finalize", 15))->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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

static char*  map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_103  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2626))->key_list, "/usr/local/include/neo-c.h", 2626))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2627))->key_list, "/usr/local/include/neo-c.h", 2627))->it, "/usr/local/include/neo-c.h", 2627))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_103,0,sizeof(char* ));
    __result_obj__0 = result_103;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list, "/usr/local/include/neo-c.h", 2653))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_104  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2636))->key_list, "/usr/local/include/neo-c.h", 2636))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it, "/usr/local/include/neo-c.h", 2641))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2643))->key_list, "/usr/local/include/neo-c.h", 2643))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2644))->key_list, "/usr/local/include/neo-c.h", 2644))->it, "/usr/local/include/neo-c.h", 2644))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_104,0,sizeof(char* ));
    __result_obj__0 = result_104;
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2813))->len*2>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2813))->size) {
        map$2char$phsFun$ph_rehash(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2814)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2816)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2816))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2820))->item_existance, "/usr/local/include/neo-c.h", 2820))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2822))->keys, "/usr/local/include/neo-c.h", 2822))[it], "/usr/local/include/neo-c.h", 2822)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2822))->keys, "/usr/local/include/neo-c.h", 2822))[it]==key)) {
                if(1) {
                    (((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2825))->keys, "/usr/local/include/neo-c.h", 2825))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2825))->keys, "/usr/local/include/neo-c.h", 2825))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2826))->key_list, "/usr/local/include/neo-c.h", 2826)),((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2826))->keys, "/usr/local/include/neo-c.h", 2826))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2827))->keys, "/usr/local/include/neo-c.h", 2827))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2830))->key_list, "/usr/local/include/neo-c.h", 2830)),((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2830))->keys, "/usr/local/include/neo-c.h", 2830))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2831))->keys, "/usr/local/include/neo-c.h", 2831))[it]=key;
                }
                if(1) {
                    come_call_finalizer(sFun_finalize, ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2834))->items, "/usr/local/include/neo-c.h", 2834))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2835))->items, "/usr/local/include/neo-c.h", 2835))[it]=(struct sFun* )come_increment_ref_count(item);
                }
                else {
                    ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2838))->items, "/usr/local/include/neo-c.h", 2838))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2845))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2855))->item_existance, "/usr/local/include/neo-c.h", 2855))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2857))->keys, "/usr/local/include/neo-c.h", 2857))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2860))->keys, "/usr/local/include/neo-c.h", 2860))[it]=key;
            }
            if(1) {
                ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2863))->items, "/usr/local/include/neo-c.h", 2863))[it]=(struct sFun* )come_increment_ref_count(item);
            }
            else {
                ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2866))->items, "/usr/local/include/neo-c.h", 2866))[it]=item;
            }
            ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2869))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2876))->key_list, "/usr/local/include/neo-c.h", 2876)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2876))->key_list, "/usr/local/include/neo-c.h", 2876)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2876))->key_list, "/usr/local/include/neo-c.h", 2876)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 2877)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2883))->key_list, "/usr/local/include/neo-c.h", 2883)),(char* )come_increment_ref_count(key));
    }
    __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sFun*  default_value_105  ;
    size=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2657))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2658, "char** "))));
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), (void*)0, 2659, "struct sFun** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2660, "_Bool*"))));
    len=0;
    for(it=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2664)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2664)));it=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2664)))){
        memset(&default_value,0,sizeof(struct sFun* ));
        it2=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2667)),it,(struct sFun* )come_increment_ref_count(default_value),(_Bool)0)));
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
                memset(&default_value_105,0,sizeof(struct sFun* ));
                ((struct sFun** )come_null_checker(items, "/usr/local/include/neo-c.h", 2690))[n]=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2690)),it,(struct sFun* )come_increment_ref_count(default_value_105),(_Bool)0)));
                len++;
                come_call_finalizer(sFun_finalize, default_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2698))->items);
    (((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2699))->item_existance = come_decrement_ref_count(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2699))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2700))->keys);
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2702))->keys=keys;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2703))->items=items;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2704))->item_existance=item_existance;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->size=size;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2707))->len=len;
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2538)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2538))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2542))->item_existance, "/usr/local/include/neo-c.h", 2542))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2544))->keys, "/usr/local/include/neo-c.h", 2544))[it], "/usr/local/include/neo-c.h", 2544)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2544))->keys, "/usr/local/include/neo-c.h", 2544))[it]==key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2546))->items, "/usr/local/include/neo-c.h", 2546))[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2551))->size) {
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
    struct list_item$1char$ph* it_106;
    int i_107;
    struct list_item$1char$ph* prev_it_108;
    struct list_item$1char$ph* it_109;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_110;
    struct list_item$1char$ph* prev_it_111;
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
        it_106=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1817))->head;
        i_107=0;
        while(it_106!=((void*)0)) {
            if(i_107==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1821))->tail=((struct list_item$1char$ph*)come_null_checker(it_106, "/usr/local/include/neo-c.h", 1821))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1822))->tail, "/usr/local/include/neo-c.h", 1822))->next=((void*)0);
            }
            if(i_107>=head) {
                prev_it_108=it_106;
                it_106=((struct list_item$1char$ph*)come_null_checker(it_106, "/usr/local/include/neo-c.h", 1828))->next;
                i_107++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1833))->len--;
            }
            else {
                it_106=((struct list_item$1char$ph*)come_null_checker(it_106, "/usr/local/include/neo-c.h", 1836))->next;
                i_107++;
            }
        }
    }
    else {
        it_109=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_110=0;
        while(it_109!=((void*)0)) {
            if(i_110==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_109, "/usr/local/include/neo-c.h", 1851))->prev;
            }
            if(i_110==tail) {
                tail_it=it_109;
            }
            if(i_110>=head&&i_110<tail) {
                prev_it_111=it_109;
                it_109=((struct list_item$1char$ph*)come_null_checker(it_109, "/usr/local/include/neo-c.h", 1861))->next;
                i_110++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1866))->len--;
            }
            else {
                it_109=((struct list_item$1char$ph*)come_null_checker(it_109, "/usr/local/include/neo-c.h", 1869))->next;
                i_110++;
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
    char*  result_112  ;
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
    memset(&result_112,0,sizeof(char* ));
    __result_obj__0 = result_112;
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
    char*  result_113  ;
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
    memset(&result_113,0,sizeof(char* ));
    __result_obj__0 = result_113;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj50  ;
    struct list_item$1char$ph* litem_114;
    char*  __dec_obj51  ;
    struct list_item$1char$ph* litem_115;
    char*  __dec_obj52  ;
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
        __dec_obj50=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(char* )come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_114=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1502, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_114, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_114, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj51=((struct list_item$1char$ph*)come_null_checker(litem_114, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_114, "/usr/local/include/neo-c.h", 1506))->item=(char* )come_increment_ref_count(item);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_114;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_114;
    }
    else {
        litem_115=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1512, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_115, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_115, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj52=((struct list_item$1char$ph*)come_null_checker(litem_115, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_115, "/usr/local/include/neo-c.h", 1516))->item=(char* )come_increment_ref_count(item);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_115;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_115;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_116;
    for(i=0;i<((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2446))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2447))->item_existance, "/usr/local/include/neo-c.h", 2447))[i]) {
            if(1) {
                come_call_finalizer(sFun_finalize, ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2453))->items);
    for(i_116=0;i_116<((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2455))->size;i_116++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2456))->item_existance, "/usr/local/include/neo-c.h", 2456))[i_116]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_116] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_116], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2462))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2464))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance = come_decrement_ref_count(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_118  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2626))->key_list, "/usr/local/include/neo-c.h", 2626))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2627))->key_list, "/usr/local/include/neo-c.h", 2627))->it, "/usr/local/include/neo-c.h", 2627))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_118,0,sizeof(char* ));
    __result_obj__0 = result_118;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list, "/usr/local/include/neo-c.h", 2653))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_120  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2636))->key_list, "/usr/local/include/neo-c.h", 2636))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it, "/usr/local/include/neo-c.h", 2641))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2643))->key_list, "/usr/local/include/neo-c.h", 2643))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2644))->key_list, "/usr/local/include/neo-c.h", 2644))->it, "/usr/local/include/neo-c.h", 2644))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_120,0,sizeof(char* ));
    __result_obj__0 = result_120;
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
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_121;
    for(i=0;i<((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2446))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2447))->item_existance, "/usr/local/include/neo-c.h", 2447))[i]) {
            if(1) {
                come_call_finalizer(buffer_finalize, ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2453))->items);
    for(i_121=0;i_121<((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2455))->size;i_121++){
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2456))->item_existance, "/usr/local/include/neo-c.h", 2456))[i_121]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_121] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_121], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2462))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2464))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance = come_decrement_ref_count(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static char*  map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_138  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2624))->key_list, "/usr/local/include/neo-c.h", 2624))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2626))->key_list, "/usr/local/include/neo-c.h", 2626))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2627))->key_list, "/usr/local/include/neo-c.h", 2627))->it, "/usr/local/include/neo-c.h", 2627))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_138,0,sizeof(char* ));
    __result_obj__0 = result_138;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2653))->key_list, "/usr/local/include/neo-c.h", 2653))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phchar$ph_next(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_140  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2636))->key_list, "/usr/local/include/neo-c.h", 2636))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2641))->key_list, "/usr/local/include/neo-c.h", 2641))->it, "/usr/local/include/neo-c.h", 2641))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2643))->key_list, "/usr/local/include/neo-c.h", 2643))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2644))->key_list, "/usr/local/include/neo-c.h", 2644))->it, "/usr/local/include/neo-c.h", 2644))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_140,0,sizeof(char* ));
    __result_obj__0 = result_140;
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
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char* )come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char* )come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_141;
    for(i=0;i<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2446))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2447))->item_existance, "/usr/local/include/neo-c.h", 2447))[i]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2449))->items, "/usr/local/include/neo-c.h", 2449))[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2453))->items);
    for(i_141=0;i_141<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2455))->size;i_141++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2456))->item_existance, "/usr/local/include/neo-c.h", 2456))[i_141]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_141] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2458))->keys, "/usr/local/include/neo-c.h", 2458))[i_141], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2462))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2464))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance = come_decrement_ref_count(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2466))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

void add_come_code_at_function_head(struct sInfo*  info  , const char* code, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_code_at_function_head"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1774))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1784))->come_fun) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1785))->come_fun, "03output_code.nc", 1785))->mSourceHead, "03output_code.nc", 1785)),"    ");
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1786))->come_fun, "03output_code.nc", 1786))->mSourceHead, "03output_code.nc", 1786)),msg2);
    }
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void add_come_code_at_function_head2(struct sInfo*  info  , const char* code, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_code_at_function_head2"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1794))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1804))->come_fun) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1805))->come_fun, "03output_code.nc", 1805))->mSourceHead2, "03output_code.nc", 1805)),"    ");
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1806))->come_fun, "03output_code.nc", 1806))->mSourceHead2, "03output_code.nc", 1806)),msg2);
    }
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void add_last_code_to_source(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_last_code_to_source"; neo_current_frame = &fr;
    char*  __dec_obj53  ;
    char*  __dec_obj54  ;
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1814))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    if(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1817))->module, "03output_code.nc", 1817))->mLastCode) {
        add_come_code(info,"%s;\n",((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1818))->module, "03output_code.nc", 1818))->mLastCode);
        __dec_obj53=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1819))->module, "03output_code.nc", 1819))->mLastCode,
        ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1819))->module, "03output_code.nc", 1819))->mLastCode=((void*)0);
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1821))->module, "03output_code.nc", 1821))->mLastCode2) {
        add_come_code(info,"%s;\n",((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1822))->module, "03output_code.nc", 1822))->mLastCode2);
        __dec_obj54=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1823))->module, "03output_code.nc", 1823))->mLastCode2,
        ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1823))->module, "03output_code.nc", 1823))->mLastCode2=((void*)0);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
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
    char*  __dec_obj55  ;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1829))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj55=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1839))->module, "03output_code.nc", 1839))->mLastCode,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1839))->module, "03output_code.nc", 1839))->mLastCode=(char* )come_increment_ref_count(__builtin_string(msg2));
    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void add_come_last_code2(struct sInfo*  info  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_come_last_code2"; neo_current_frame = &fr;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    void* __right_value0 = (void*)0;
    char*  __dec_obj56  ;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1846))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj56=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1856))->module, "03output_code.nc", 1856))->mLastCode2,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1856))->module, "03output_code.nc", 1856))->mLastCode2=(char* )come_increment_ref_count(__builtin_string(msg2));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void dec_stack_ptr(int value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dec_stack_ptr"; neo_current_frame = &fr;
    list$1CVALUE$ph_delete(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1863))->stack, "03output_code.nc", 1863)),-value,-1);
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
    struct list_item$1CVALUE$ph* it_151;
    int i_152;
    struct list_item$1CVALUE$ph* prev_it_153;
    struct list_item$1CVALUE$ph* it_154;
    struct list_item$1CVALUE$ph* head_prev_it;
    struct list_item$1CVALUE$ph* tail_it;
    int i_155;
    struct list_item$1CVALUE$ph* prev_it_156;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1759))->len;
    }
    if(tail<0) {
        tail+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1762))->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1775))->len) {
        tail=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1776))->len;
    }
    if(head>=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1779))->len) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->len) {
        list$1CVALUE$ph_reset(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1789)));
    }
    else if(head==0) {
        it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1792))->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1798))->next;
                i++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1803))->len--;
            }
            else if(i==tail) {
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1806))->head=it;
                ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1807))->head, "/usr/local/include/neo-c.h", 1807))->prev=((void*)0);
                break;
            }
            else {
                it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1811))->next;
                i++;
            }
        }
    }
    else if(tail==((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1816))->len) {
        it_151=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1817))->head;
        i_152=0;
        while(it_151!=((void*)0)) {
            if(i_152==head) {
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1821))->tail=((struct list_item$1CVALUE$ph*)come_null_checker(it_151, "/usr/local/include/neo-c.h", 1821))->prev;
                ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1822))->tail, "/usr/local/include/neo-c.h", 1822))->next=((void*)0);
            }
            if(i_152>=head) {
                prev_it_153=it_151;
                it_151=((struct list_item$1CVALUE$ph*)come_null_checker(it_151, "/usr/local/include/neo-c.h", 1828))->next;
                i_152++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1833))->len--;
            }
            else {
                it_151=((struct list_item$1CVALUE$ph*)come_null_checker(it_151, "/usr/local/include/neo-c.h", 1836))->next;
                i_152++;
            }
        }
    }
    else {
        it_154=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_155=0;
        while(it_154!=((void*)0)) {
            if(i_155==head) {
                head_prev_it=((struct list_item$1CVALUE$ph*)come_null_checker(it_154, "/usr/local/include/neo-c.h", 1851))->prev;
            }
            if(i_155==tail) {
                tail_it=it_154;
            }
            if(i_155>=head&&i_155<tail) {
                prev_it_156=it_154;
                it_154=((struct list_item$1CVALUE$ph*)come_null_checker(it_154, "/usr/local/include/neo-c.h", 1861))->next;
                i_155++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1866))->len--;
            }
            else {
                it_154=((struct list_item$1CVALUE$ph*)come_null_checker(it_154, "/usr/local/include/neo-c.h", 1869))->next;
                i_155++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            ((struct list_item$1CVALUE$ph*)come_null_checker(head_prev_it, "/usr/local/include/neo-c.h", 1875))->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            ((struct list_item$1CVALUE$ph*)come_null_checker(tail_it, "/usr/local/include/neo-c.h", 1878))->prev=head_prev_it;
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
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1719))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1722))->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1726))->head=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1727))->tail=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1729))->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1CVALUE$ph*)come_null_checker(self, "list_item$1CVALUE$ph$p_finalize", 0))->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, ((struct list_item$1CVALUE$ph*)come_null_checker(self, "list_item$1CVALUE$ph$p_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct CVALUE*  get_value_from_stack(int offset, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_value_from_stack"; neo_current_frame = &fr;
    char*  __dec_obj57  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    __dec_obj57=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1868))->module, "03output_code.nc", 1868))->mLastCode,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1868))->module, "03output_code.nc", 1868))->mLastCode=((void*)0);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    result=(struct CVALUE* )come_increment_ref_count(CVALUE_clone(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1870))->stack, "03output_code.nc", 1870)), "03output_code.nc", 1870)),offset)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(result==((void*)0)) {
        err_msg(info,"invalid stack value");
        exit(2);
    }
    list$1CVALUE$ph_delete(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1877))->stack, "03output_code.nc", 1877)),-1,-1);
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(result);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_157  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_157,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_157);
    come_call_finalizer(CVALUE_finalize, default_value_157, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct CVALUE*  default_value_158  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2017))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2020))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2024))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->next;
        i++;
    }
    memset(&default_value_158,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_158);
    come_call_finalizer(CVALUE_finalize, default_value_158, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_clone"; neo_current_frame = &fr;
    struct CVALUE*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  result  ;
    char*  __dec_obj58  ;
    struct sType*  __dec_obj59  ;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 3, "struct CVALUE* "));
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 4))->c_value!=((void*)0)) {
        __dec_obj58=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 4))->c_value,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 4))->c_value=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 4))->c_value, "CVALUE_clone", 4, "char* "));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 5))->type!=((void*)0)) {
        __dec_obj59=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 5))->type,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 5))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 5))->type));
        come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 6))->var=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 6))->var;
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 7))->right_value_objects=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 7))->right_value_objects;
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 8))->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj60=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 8))->c_value_without_right_value_objects,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 8))->c_value_without_right_value_objects=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 8))->c_value_without_right_value_objects, "CVALUE_clone", 8, "char* "));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 9))->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj61=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 9))->c_value_without_cast_object_value,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 9))->c_value_without_cast_object_value=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 9))->c_value_without_cast_object_value, "CVALUE_clone", 9, "char* "));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(result);
    come_call_finalizer(CVALUE_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void transpiler_clear_last_code(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "transpiler_clear_last_code"; neo_current_frame = &fr;
    char*  __dec_obj62  ;
    char*  __dec_obj63  ;
    __dec_obj62=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1884))->module, "03output_code.nc", 1884))->mLastCode,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1884))->module, "03output_code.nc", 1884))->mLastCode=((void*)0);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj63=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1885))->module, "03output_code.nc", 1885))->mLastCode2,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1885))->module, "03output_code.nc", 1885))->mLastCode2=((void*)0);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    neo_current_frame = fr.prev;
}

