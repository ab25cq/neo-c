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
    char**  type_name  ;
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
    char**  attribute_before  ;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  union_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_68  ;
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
    struct sType**  type_69  ;
    char**  var_name_70  ;
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
    char**  type_name  ;
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
    char**  attribute_before  ;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  union_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_68  ;
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
    struct sType**  type_69  ;
    char**  var_name_70  ;
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
    char**  type_name  ;
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
    char**  attribute_before  ;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  union_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_68  ;
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
    struct sType**  type_69  ;
    char**  var_name_70  ;
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
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended);
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
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, struct sInfo*  info  );
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
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  );
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char*  v1  , char*  v2  );
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
void parse_struct_attribute_skip_paren(struct sInfo*  info  );
_Bool parse_attribute_keyword(struct buffer*  result  , const char* keyword, _Bool allow_end, struct sInfo*  info  );
_Bool parse_common_attribute_keyword(struct buffer*  result  , struct sInfo*  info  , _Bool allow_end);
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
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
struct sType*  parse_pointer_attribute(struct sType*  type  , struct sInfo*  info  );
void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool for_variable, struct sInfo*  info  );
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
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
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
    klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 5))->classes, "06type.nc", 5)), "06type.nc", 5)),buf)));
    type=((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 6))->types, "06type.nc", 6)), "06type.nc", 6)),buf)));
    generics_class=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 7))->generics_classes, "06type.nc", 7)), "06type.nc", 7)),((char* )(__right_value1=__builtin_string(buf))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    generics_type_name=list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 8))->generics_type_names, "06type.nc", 8)),((char* )(__right_value0=__builtin_string(buf))),(_Bool)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    mgenerics_type_name=list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 9))->method_generics_type_names, "06type.nc", 9)),((char* )(__right_value0=__builtin_string(buf))),(_Bool)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    if(gComeC) {
        neo_current_frame = fr.prev;
        return (type&&((struct sType* )come_null_checker(type, "06type.nc", 12))->mTypedef)||(klass&&((struct sClass* )come_null_checker(klass, "06type.nc", 13))->mNumber)||(klass&&((struct sClass* )come_null_checker(klass, "06type.nc", 14))->mFloat)||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 16)),"_Thread_local")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 17)),"__thread")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"_Complex")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"const")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"register")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"static")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"volatile")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"unsigned")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"__volatile__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"signed")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"struct")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"enum")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"union")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"extern")||((struct sInfo* )come_null_checker(info, "06type.nc", 20))->in_top_level&&(charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__always_inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__inline__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__forceinline"))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 22)),"__extension__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 23)),"_Noreturn")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 24)),"restrict")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 25)),"__noreturn")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 26)),"_noreturn")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 27)),"__typeof__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 28)),"typeof")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 29)),"_Nullable")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 30)),"_Alignas")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 31)),"_Atomic")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 32)),"__type__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 32)),"__attribute__")&&*((struct sInfo* )come_null_checker(info, "06type.nc", 32))->p==40||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 33)),"void");
    }
    else {
        neo_current_frame = fr.prev;
        return generics_class||generics_type_name||mgenerics_type_name||klass||type||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 37)),"const")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 37)),"register")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 37)),"static")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 37)),"volatile")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 37)),"__volatile__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"unsigned")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"signed")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"struct")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"enum")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"union")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"extern")||((struct sInfo* )come_null_checker(info, "06type.nc", 39))->in_top_level&&(charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"__inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"__always_inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"__inline__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"__forceinline"))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 41)),"__extension__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 42)),"_Thread_local")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 43)),"__thread")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 44)),"_Complex")||(((struct sInfo* )come_null_checker(info, "06type.nc", 44))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 44)),"_Noreturn"))||(((struct sInfo* )come_null_checker(info, "06type.nc", 45))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 45)),"__noreturn"))||(((struct sInfo* )come_null_checker(info, "06type.nc", 46))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 46)),"_noreturn"))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 48)),"__typeof__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 49)),"typeof")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 50)),"_Nullable")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 51)),"_Alignas")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 52)),"_Atomic")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 53)),"restrict")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 54)),"__type__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 54)),"__attribute__")&&*((struct sInfo* )come_null_checker(info, "06type.nc", 54))->p==40||(charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 55)),"tup")&&(*((struct sInfo* )come_null_checker(info, "06type.nc", 55))->p==58||*((struct sInfo* )come_null_checker(info, "06type.nc", 55))->p==40))||(((struct sInfo* )come_null_checker(info, "06type.nc", 56))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 56)),"uniq"));
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

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 0))->mName!=((void*)0)) {
        (((struct sClass* )come_null_checker(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass* )come_null_checker(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 1))->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, ((struct sClass* )come_null_checker(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 2))->mParentClassName!=((void*)0)) {
        (((struct sClass* )come_null_checker(self, "sClass_finalize", 2))->mParentClassName = come_decrement_ref_count(((struct sClass* )come_null_checker(self, "sClass_finalize", 2))->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass* )come_null_checker(self, "sClass_finalize", 3))->mAttribute!=((void*)0)) {
        (((struct sClass* )come_null_checker(self, "sClass_finalize", 3))->mAttribute = come_decrement_ref_count(((struct sClass* )come_null_checker(self, "sClass_finalize", 3))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2896)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2896))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2900))->item_existance, "/usr/local/include/neo-c.h", 2900))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2902))->keys, "/usr/local/include/neo-c.h", 2902))[it], "/usr/local/include/neo-c.h", 2902)),key)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2904))->items, "/usr/local/include/neo-c.h", 2904))[it]);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2909))->size) {
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

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    for(it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2108)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2108)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2108)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it, "/usr/local/include/neo-c.h", 2109)),item))||(by_pointer&&it==item)) {
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
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->head;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1562))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1563))->it, "/usr/local/include/neo-c.h", 1563))->item;
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
    return self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1590))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_1  ;
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
    memset(&result_1,0,sizeof(char* ));
    __result_obj__0 = result_1;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_contained_generics_class"; neo_current_frame = &fr;
    struct sType*  type2  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj34  ;
    struct sType*  __dec_obj35  ;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    _Bool __result_obj__0;
    memset(&type2, 0, sizeof(type2));
    if(((struct sType* )come_null_checker(type, "06type.nc", 63))->mNoSolvedGenericsType) {
        __dec_obj34=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(type, "06type.nc", 64))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj35=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "06type.nc", 69))->mGenericsTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 69)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 69)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 69)))){
        if(is_contained_generics_class(it,info)) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "06type.nc", 75))->mClass, "06type.nc", 75))->mGenerics) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "06type.nc", 78))->mClass, "06type.nc", 78))->mMethodGenerics) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct list_item$1sType$ph* litem_2;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_3;
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
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1417, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj4=((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1421))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_2;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1427, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj5=((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1431))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_3;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_3;
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
    struct list_item$1sNode$ph* litem_4;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_5;
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
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1417, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj19=((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1421))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_4;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1427, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj20=((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1431))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_5;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_5;
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
    struct list_item$1int$* litem_6;
    struct list_item$1int$* litem_7;
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
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1417, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1int$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1421))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_6;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1427, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1431))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_7;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_7;
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
    struct list_item$1char$ph* litem_8;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_9;
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
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1417, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj29=((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1421))->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_8;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1427, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj30=((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1431))->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_9;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_9;
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1562))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1563))->it, "/usr/local/include/neo-c.h", 1563))->item;
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
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1590))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_11  ;
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
    memset(&result_11,0,sizeof(struct sType* ));
    __result_obj__0 = result_11;
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
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 87, "struct list$1sType$ph*"))), "06type.nc", 87)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 88, "struct list$1char$ph*"))), "06type.nc", 88)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 89, "struct list$1char$ph*"))), "06type.nc", 89)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    var_args=(_Bool)0;
    if(in_constructor_) {
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_names, "06type.nc", 93)),(char*)come_increment_ref_count(xsprintf("self")));
        type_=(struct sType* )come_increment_ref_count(sType_clone(((struct sInfo* )come_null_checker(info, "06type.nc", 94))->class_type));
        ((struct sType* )come_null_checker(type_, "06type.nc", 95))->mHeap=(_Bool)1;
        list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(param_types, "06type.nc", 96)),(struct sType* )come_increment_ref_count(type_));
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 97)),((void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(((struct sInfo* )come_null_checker(info, "06type.nc", 99))->in_class) {
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_names, "06type.nc", 100)),(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(param_types, "06type.nc", 101)),(struct sType* )come_increment_ref_count(sType_clone(((struct sInfo* )come_null_checker(info, "06type.nc", 101))->class_type)));
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 102)),((void*)0));
    }
    expected_next_character(40,info);
    void_param=(_Bool)0;
    {
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 110))->p;
        sline=((struct sInfo* )come_null_checker(info, "06type.nc", 111))->sline;
        if(parsecmp("void",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 114))->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 117))->p==41) {
                void_param=(_Bool)1;
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 122))->p=p;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 123))->sline=sline;
    }
    if(void_param) {
        if(parsecmp("void",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 128))->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 131))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 132))->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 139))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 140))->p++;
                skip_spaces_and_lf(info);
                break;
            }
            skip_spaces_and_lf(info);
            multiple_assign_var1=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1);
            param_name=(char* )come_increment_ref_count(multiple_assign_var1->v2);
            err=multiple_assign_var1->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err) {
                printf("%s %d: failed to function parametor\n",((struct sInfo* )come_null_checker(info, "06type.nc", 150))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 150))->sline);
                __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "06type.nc", 151, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            param_type2=(struct sType* )come_increment_ref_count(solve_generics(param_type,((struct sInfo* )come_null_checker(info, "06type.nc", 154))->generics_type,info));
            list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(param_types, "06type.nc", 156)),(struct sType* )come_increment_ref_count(sType_clone(param_type2)));
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(param_names, "06type.nc", 157)),(char* )come_increment_ref_count((char* )come_memdup(param_name, "06type.nc", 157, "char* ")));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 159))->p==61&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 159))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 159))->p+1)!=62) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 160))->p++;
                skip_spaces_and_lf(info);
                p_16=((struct sInfo* )come_null_checker(info, "06type.nc", 164))->p;
                no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 166))->no_comma;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 167))->no_comma=(_Bool)1;
                node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                ((struct sInfo* )come_null_checker(info, "06type.nc", 171))->no_comma=no_comma;
                p2=((struct sInfo* )come_null_checker(info, "06type.nc", 173))->p;
                char buf[p2-p_16+1];
                memset(&buf, 0, sizeof(buf));
                memcpy(buf,p_16,p2-p_16);
                buf[p2-p_16]=0;
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 179)),(char* )come_increment_ref_count(__builtin_string(buf)));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 182)),((void*)0));
            }
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 187))->p==44) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 188))->p++;
                skip_spaces_and_lf(info);
                if(parsecmp("...",info)) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 192))->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 200))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 201))->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "06type.nc", 208, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args))));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 0))->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 1))->v2!=((void*)0)) {
        (((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __dec_obj36;
    struct list$1char$ph* __dec_obj37;
    struct list$1char$ph* __dec_obj38;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__0;
    __dec_obj36=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3394))->v1,
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3394))->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj37=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3395))->v2,
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3395))->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj38=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3396))->v3,
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3396))->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3397))->v4=v4;
    __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 0))->v1!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 1))->v2!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 2))->v3!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj39  ;
    struct list_item$1sType$ph* litem_12;
    struct sType*  __dec_obj40  ;
    struct list_item$1sType$ph* litem_13;
    struct sType*  __dec_obj41  ;
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
        __dec_obj39=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1502, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj40=((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1506))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_12;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1512, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj41=((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1516))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_13;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_13;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj42  ;
    struct list_item$1char$ph* litem_14;
    char*  __dec_obj43  ;
    struct list_item$1char$ph* litem_15;
    char*  __dec_obj44  ;
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
        __dec_obj42=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(char* )come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1502, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj43=((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1506))->item=(char* )come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_14;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1512, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj44=((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1516))->item=(char* )come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_15;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_15;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
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
    int nest_17;
    int nest_18;
    int nest_19;
    int nest_20;
    char*  attr  ;
    int len;
    _Bool in_dquort;
    int brace_num;
    int brace_num_21;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    asm_fun_name=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 220, "struct buffer* "))), "06type.nc", 220)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    attribute=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 221, "struct buffer* "))), "06type.nc", 221)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while((_Bool)1) {
        if(parsecmp("__attribute_pure__",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 225))->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__malloc_like",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 229))->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__result_use_check",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 233))->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__alloc_size2",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 237))->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 240))->p==40) {
                nest=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 243))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 244))->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 248))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 249))->p++;
                        skip_spaces_and_lf(info);
                        nest--;
                        if(nest==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 257))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 261))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_size",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 267))->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 270))->p==40) {
                nest_17=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 273))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 274))->p++;
                        skip_spaces_and_lf(info);
                        nest_17++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 278))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 279))->p++;
                        skip_spaces_and_lf(info);
                        nest_17--;
                        if(nest_17==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 287))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 291))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__nonnull",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 297))->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 300))->p==40) {
                nest_18=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 303))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 304))->p++;
                        skip_spaces_and_lf(info);
                        nest_18++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 308))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 309))->p++;
                        skip_spaces_and_lf(info);
                        nest_18--;
                        if(nest_18==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 317))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 321))->p++;
                    }
                }
            }
        }
        else if(parsecmp("_Nonnull",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 327))->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 330))->p==40) {
                nest_19=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 333))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 334))->p++;
                        skip_spaces_and_lf(info);
                        nest_19++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 338))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 339))->p++;
                        skip_spaces_and_lf(info);
                        nest_19--;
                        if(nest_19==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 347))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 351))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_align",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 357))->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 360))->p==40) {
                nest_20=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 363))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 364))->p++;
                        skip_spaces_and_lf(info);
                        nest_20++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 368))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 369))->p++;
                        skip_spaces_and_lf(info);
                        nest_20--;
                        if(nest_20==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 377))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 381))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__attribute_malloc__",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 387))->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attr_dealloc_fclose",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 391))->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__wur",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 395))->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure2",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 399))->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 403))->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__noreturn",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 407))->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attribute__",info)) {
            attr=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            if(string_operator_not_equals(((char* )come_null_checker(attr, "06type.nc", 412)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(attribute, "06type.nc", 413)),attr);
            }
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(parsecmp("__asm__",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 417))->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if((((struct sInfo* )come_null_checker(info, "06type.nc", 420))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 420))->p)>=strlen("__ASMNAME")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 420))->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 421))->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 427))->p==40) {
                in_dquort=(_Bool)0;
                brace_num=0;
                while(*((struct sInfo* )come_null_checker(info, "06type.nc", 430))->p) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 431))->p==34) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 432))->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(in_dquort) {
                        buffer_append_char(((struct buffer* )come_null_checker(asm_fun_name, "06type.nc", 437)),*((struct sInfo* )come_null_checker(info, "06type.nc", 437))->p);
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 438))->p++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 440))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 441))->p++;
                        brace_num++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 444))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 445))->p++;
                        brace_num--;
                        if(brace_num==0) {
                            break;
                        }
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 453))->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__asm",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 461))->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 464))->p==40) {
                brace_num_21=0;
                while(*((struct sInfo* )come_null_checker(info, "06type.nc", 466))->p) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 467))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 468))->p++;
                        brace_num_21++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 471))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 472))->p++;
                        brace_num_21--;
                        if(brace_num_21==0) {
                            break;
                        }
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 480))->p++;
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
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value3=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "06type.nc", 494, "struct tuple2$2char$phchar$ph")),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(asm_fun_name, "06type.nc", 494)))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(attribute, "06type.nc", 494))))))));
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj45  ;
    char*  __dec_obj46  ;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    __dec_obj45=((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1,
    ((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj46=((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2,
    ((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2=(char* )come_increment_ref_count(v2);
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 0))->v1!=((void*)0)) {
        (((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 1))->v2!=((void*)0)) {
        (((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

void parse_struct_attribute_skip_paren(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_struct_attribute_skip_paren"; neo_current_frame = &fr;
    int nest;
    skip_spaces_and_lf(info);
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 500))->p==40) {
        nest=0;
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 503))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 504))->p++;
                skip_spaces_and_lf(info);
                nest++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 508))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 509))->p++;
                skip_spaces_and_lf(info);
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 517))->p==0) {
                break;
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 521))->p++;
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
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 531))->p+strlen(keyword);
        while(*p==32||*p==9||*p==10||*p==13) {
            p++;
        }
        if(!allow_end&&*p!=40) {
            if(*p==59||*p==44||*p==41||*p==93||*p==61||*p==58) {
                neo_current_frame = fr.prev;
                return (_Bool)0;
            }
        }
        head=((struct sInfo* )come_null_checker(info, "06type.nc", 541))->p;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 542))->p+=strlen(keyword);
        parse_struct_attribute_skip_paren(info);
        tail=((struct sInfo* )come_null_checker(info, "06type.nc", 546))->p;
        buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 547)),head,tail-head);
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
    char*  __result_obj__0  ;
    skip_spaces_and_lf(info);
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 741, "struct buffer* "))), "06type.nc", 741)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        if(parsecmp("__attribute__",info)) {
            head=((struct sInfo* )come_null_checker(info, "06type.nc", 744))->p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 746))->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail=((struct sInfo* )come_null_checker(info, "06type.nc", 750))->p;
            buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 752)),head,tail-head);
        }
        else if(parse_common_attribute_keyword(result,info,allow_end)) {
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "06type.nc", 762))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    char* p_22;
    int sline_23;
    char*  word_24  ;
    _Bool lambda_;
    char* p_25;
    int sline_26;
    char*  word_27  ;
    char*  __dec_obj47  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  result_type2  ;
    struct sNode* node;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var2
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj48  ;
    struct list$1sType$ph* __dec_obj49;
    struct list$1char$ph* __dec_obj50;
    struct sType*  __dec_obj51  ;
    char*  __dec_obj52  ;
    char*  __dec_obj53  ;
    _Bool no_comma;
    struct sNode* node_28;
    struct sNode* __dec_obj54;
    char* p_29;
    int sline_30;
    char*  word_31  ;
    struct sNode* node_32;
    char*  attribute  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(base_type_name));
    if(!first) {
        if(((struct sType* )come_null_checker(result_type, "06type.nc", 771))->mTypedefOriginalType) {
            ((struct sType* )come_null_checker(result_type, "06type.nc", 772))->mPointerNum=((struct sType* )come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 772))->mTypedefOriginalType, "06type.nc", 772))->mPointerNum;
        }
    }
    var_name=((void*)0);
    {
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 778))->p;
        sline=((struct sInfo* )come_null_checker(info, "06type.nc", 779))->sline;
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 781))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 781))->p==95) {
            word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"const")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"__restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"volatile")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 784)),"_Addr")) {
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 787))->p=p;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 788))->sline=sline;
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 792))->p=p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 793))->sline=sline;
        }
    }
    between_brace=(_Bool)0;
    {
        p_22=((struct sInfo* )come_null_checker(info, "06type.nc", 799))->p;
        sline_23=((struct sInfo* )come_null_checker(info, "06type.nc", 800))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 802))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 803))->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 806))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 806))->p==95) {
                word_24=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_24,info)) {
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 811))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 812))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 815))->p!=40) {
                        between_brace=(_Bool)1;
                    }
                }
                (word_24 = come_decrement_ref_count(word_24, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 822))->p=p_22;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 823))->sline=sline_23;
    }
    lambda_=(_Bool)0;
    {
        p_25=((struct sInfo* )come_null_checker(info, "06type.nc", 827))->p;
        sline_26=((struct sInfo* )come_null_checker(info, "06type.nc", 828))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 830))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 831))->p++;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 834))->p==42) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 835))->p++;
                skip_spaces_and_lf(info);
                if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 838))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 838))->p==95) {
                    word_27=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                    if(is_type_name(word_27,info)) {
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 843))->p==91) {
                        lambda_=(_Bool)1;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 846))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 847))->p++;
                        skip_spaces_and_lf(info);
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 850))->p==40) {
                            lambda_=(_Bool)1;
                        }
                    }
                    (word_27 = come_decrement_ref_count(word_27, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 858))->p=p_25;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 859))->sline=sline_26;
    }
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 863))->p==42) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 864))->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        ((struct sType* )come_null_checker(result_type, "06type.nc", 869))->mPointerNum++;
    }
    skip_spaces_and_lf(info);
    if(between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 873))->p==40) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 874))->p++;
        skip_spaces_and_lf(info);
    }
    if(lambda_) {
        expected_next_character(40,info);
        expected_next_character(42,info);
        __dec_obj47=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
        result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 884, "struct sType* "))), "06type.nc", 884))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 886))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 887))->p++;
            skip_spaces_and_lf(info);
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type2, "06type.nc", 892))->mArrayNum, "06type.nc", 892)),(struct sNode*)come_increment_ref_count(node));
            expected_next_character(93,info);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        expected_next_character(41,info);
        multiple_assign_var2=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var2->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var2->v3);
        var_args=multiple_assign_var2->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj48=((struct sType* )come_null_checker(result_type2, "06type.nc", 901))->mResultType,
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 901))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj49=((struct sType* )come_null_checker(result_type2, "06type.nc", 902))->mParamTypes,
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 902))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj50=((struct sType* )come_null_checker(result_type2, "06type.nc", 903))->mParamNames,
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 903))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 904))->mVarArgs=var_args;
        __dec_obj51=result_type,
        result_type=(struct sType* )come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 908))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 908))->p==95) {
        __dec_obj52=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __dec_obj53=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 917))->p==41) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 918))->p++;
        skip_spaces_and_lf(info);
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 922))->p==58) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 923))->p++;
        skip_spaces_and_lf(info);
        no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 926))->no_comma;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 927))->no_comma=(_Bool)1;
        node_28=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "06type.nc", 929))->no_comma=no_comma;
        __dec_obj54=((struct sType* )come_null_checker(result_type, "06type.nc", 931))->mSizeNum,
        ((struct sType* )come_null_checker(result_type, "06type.nc", 931))->mSizeNum=(struct sNode*)come_increment_ref_count(node_28);
        (__dec_obj54 ? __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0, (void*)0) :0);
        ((node_28) ? node_28 = come_decrement_ref_count(node_28, ((struct sNode*)node_28)->finalize, ((struct sNode*)node_28)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 934))->p==91) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 935))->p++;
        skip_spaces_and_lf(info);
        {
            p_29=((struct sInfo* )come_null_checker(info, "06type.nc", 939))->p;
            sline_30=((struct sInfo* )come_null_checker(info, "06type.nc", 940))->sline;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 942))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 942))->p==95) {
                word_31=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"const")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"__restrict")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"restrict")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"__user")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"volatile")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"__user")||string_operator_equals(((char* )come_null_checker(word_31, "06type.nc", 945)),"_Addr")) {
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 948))->p=p_29;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 949))->sline=sline_30;
                }
                (word_31 = come_decrement_ref_count(word_31, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 953))->p=p_29;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 954))->sline=sline_30;
            }
        }
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 958))->p==93) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 959))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(result_type, "06type.nc", 962))->mArrayPointerType=(_Bool)1;
            break;
        }
        skip_spaces_and_lf(info);
        node_32=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 969))->mArrayNum, "06type.nc", 969)),(struct sNode*)come_increment_ref_count(node_32));
        expected_next_character(93,info);
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
    append_attribute_to_type(result_type,(char* )come_increment_ref_count(attribute),(_Bool)1,info);
    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "06type.nc", 979, "struct tuple2$2sType$phchar$ph")),(struct sType* )come_increment_ref_count(result_type),(char* )come_increment_ref_count(var_name)))));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj55;
    struct list_item$1sNode$ph* litem_33;
    struct sNode* __dec_obj56;
    struct list_item$1sNode$ph* litem_34;
    struct sNode* __dec_obj57;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1492, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        __dec_obj55=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_33=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1502, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj56=((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1506))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_33;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1512, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj57=((struct list_item$1sNode$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1516))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_34;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_34;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj58  ;
    char*  __dec_obj59  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    __dec_obj58=((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1,
    ((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1=(struct sType* )come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj59=((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2,
    ((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2=(char* )come_increment_ref_count(v2);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
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
    if(self!=((void*)0)&&((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 0))->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 1))->v2!=((void*)0)) {
        (((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
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
    p=((struct sInfo* )come_null_checker(info, "06type.nc", 984))->p;
    sline=((struct sInfo* )come_null_checker(info, "06type.nc", 985))->sline;
    if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 987))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 987))->p==95) {
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        if((string_operator_equals(((char* )come_null_checker(word, "06type.nc", 990)),"__attribute")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 990)),"__attribute__"))&&*((struct sInfo* )come_null_checker(info, "06type.nc", 990))->p==40) {
            nest=0;
            while(1) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 993))->p==40) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 994))->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 998))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 999))->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1007))->p==0) {
                    break;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1011))->p++;
                }
            }
            __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"const")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"__restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"volatile")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"__nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"_Addr")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"__noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"_noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1017)),"_Noreturn")) {
            __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1021))->p=p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1022))->sline=sline;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1026))->p=p;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1027))->sline=sline;
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1035, "struct buffer* "))), "06type.nc", 1035)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        if(!(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1038))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1038))->p==95)) {
            break;
        }
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 1042))->p;
        sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1043))->sline;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        if((string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1047)),"__attribute")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1047)),"__attribute__"))&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1047))->p==40) {
            nest=0;
            while(1) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1050))->p==40) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1051))->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1055))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1056))->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1064))->p==0) {
                    break;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1068))->p++;
                }
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            continue;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1073)),"const")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1073)),"volatile")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1073)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1073)),"restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1073)),"__restrict")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 1074)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1075))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1077)),word);
            skip_spaces_and_lf(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            continue;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"__nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"_Addr")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"__noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"_noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1081)),"_Noreturn")) {
            skip_spaces_and_lf(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            continue;
        }
        else {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1086))->p=p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1087))->sline=sline;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "06type.nc", 1092))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "backtrace_parse_type"; neo_current_frame = &fr;
    _Bool no_output_come_code;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    void* __right_value1 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    no_output_come_code=((struct sInfo* )come_null_checker(info, "06type.nc", 1097))->no_output_come_code;
    ((struct sInfo* )come_null_checker(info, "06type.nc", 1098))->no_output_come_code=(_Bool)1;
    multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1);
    name=(char* )come_increment_ref_count(multiple_assign_var3->v2);
    err=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sInfo* )come_null_checker(info, "06type.nc", 1100))->no_output_come_code=no_output_come_code;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1102, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(type),(char* )come_increment_ref_count(name),err))));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType*  v1  , char*  v2  , _Bool v3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj60  ;
    char*  __dec_obj61  ;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    __dec_obj60=((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3323))->v1,
    ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3323))->v1=(struct sType* )come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj61=((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3324))->v2,
    ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3324))->v2=(char* )come_increment_ref_count(v2);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3325))->v3=v3;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        head=((struct sInfo* )come_null_checker(info, "06type.nc", 1114))->p;
        head_sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1115))->sline;
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1119))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1119))->p==95) {
            declare_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            if(string_operator_equals(((char* )come_null_checker(declare_name, "06type.nc", 1122)),"struct")) {
                struct_=(_Bool)1;
            }
            else if(string_operator_equals(((char* )come_null_checker(declare_name, "06type.nc", 1125)),"union")) {
                union_=(_Bool)1;
            }
            else if(string_operator_equals(((char* )come_null_checker(declare_name, "06type.nc", 1128)),"enum")) {
                enum_=(_Bool)1;
            }
            else {
                __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)(__right_value1=tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_calloc(1, sizeof(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$)*(1), "06type.nc", 1132, "struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
                (declare_name = come_decrement_ref_count(declare_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            (declare_name = come_decrement_ref_count(declare_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1137))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1137))->p==95) {
            struct_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            anonymous_name=(_Bool)1;
        }
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1146))->p==60) {
            nest=0;
            while((_Bool)1) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1149))->p==60) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1150))->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1154))->p==62) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1155))->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1163))->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(1);
                }
                else {
                    *((struct sInfo* )come_null_checker(info, "06type.nc", 1168))->p++;
                    skip_spaces_and_lf(info);
                }
            }
        }
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1176))->p==123) {
            ((char* )(__right_value0=skip_block(info,(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1181))->p==59) {
                define_only=(_Bool)1;
            }
            else {
                define_only=(_Bool)0;
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1189))->p=head;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1190))->sline=head_sline;
    }
    __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)(__right_value1=tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_calloc(1, sizeof(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$)*(1), "06type.nc", 1193, "struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$")),define_only,anonymous_name,struct_,union_,enum_))));
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self, _Bool v1, _Bool v2, _Bool v3, _Bool v4, _Bool v5)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize"; neo_current_frame = &fr;
    struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* __result_obj__0;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3473))->v1=v1;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3474))->v2=v2;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3475))->v3=v3;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3476))->v4=v4;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3477))->v5=v5;
    __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(self);
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct sType*  parse_pointer_attribute(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_pointer_attribute"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  pointer_attr  ;
    char*  __dec_obj62  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj63  ;
    char* p;
    int sline;
    char*  pointer_attr_35  ;
    char*  __dec_obj64  ;
    char*  __dec_obj65  ;
    struct sType*  __result_obj__0  ;
    while(1) {
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1199))->p==42) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1200))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1203))->mPointerNum++;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1204))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1205))->mNoSolvedGenericsType, "06type.nc", 1205))->mPointerNum++;
            }
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(string_operator_not_equals(((char* )come_null_checker(pointer_attr, "06type.nc", 1208)),"")) {
                if(((struct sType* )come_null_checker(type, "06type.nc", 1209))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1209))->mPointerAttribute, "06type.nc", 1209)),"")) {
                    __dec_obj62=((struct sType* )come_null_checker(type, "06type.nc", 1210))->mPointerAttribute,
                    ((struct sType* )come_null_checker(type, "06type.nc", 1210))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attr);
                    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj63=((struct sType* )come_null_checker(type, "06type.nc", 1213))->mPointerAttribute,
                    ((struct sType* )come_null_checker(type, "06type.nc", 1213))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1213))->mPointerAttribute, "06type.nc", 1213))," "))), "06type.nc", 1213)),pointer_attr));
                    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1217))->p==37) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1218))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1221))->mHeap=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1222))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1223))->mNoSolvedGenericsType, "06type.nc", 1223))->mHeap=(_Bool)1;
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1226))->p==64) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1227))->p++;
            while(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 1228))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1228))->p==95) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1229))->p++;
            }
            skip_spaces_and_lf(info);
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1233))->p==38) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1234))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1237))->mNoHeap=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1239))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1240))->mNoSolvedGenericsType, "06type.nc", 1240))->mNoHeap=(_Bool)0;
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1243))->p==96) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1244))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1247))->mNoCallingDestructor=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1248))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1249))->mNoSolvedGenericsType, "06type.nc", 1249))->mNoCallingDestructor=(_Bool)1;
            }
        }
        else if(gComePthread&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1252))->p==124) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1253))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1256))->mChannel=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1257))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1258))->mNoSolvedGenericsType, "06type.nc", 1258))->mChannel=(_Bool)1;
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1261))->p==126) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1262))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1265))->mDefferRightValue=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1266))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1267))->mNoSolvedGenericsType, "06type.nc", 1267))->mDefferRightValue=(_Bool)1;
            }
        }
        else if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1270))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1270))->p==95) {
            p=((struct sInfo* )come_null_checker(info, "06type.nc", 1271))->p;
            sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1272))->sline;
            pointer_attr_35=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(((struct sInfo* )come_null_checker(info, "06type.nc", 1274))->p!=p) {
                if(string_operator_not_equals(((char* )come_null_checker(pointer_attr_35, "06type.nc", 1275)),"")) {
                    if(((struct sType* )come_null_checker(type, "06type.nc", 1276))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1276))->mPointerAttribute, "06type.nc", 1276)),"")) {
                        __dec_obj64=((struct sType* )come_null_checker(type, "06type.nc", 1277))->mPointerAttribute,
                        ((struct sType* )come_null_checker(type, "06type.nc", 1277))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attr_35);
                        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    else {
                        __dec_obj65=((struct sType* )come_null_checker(type, "06type.nc", 1280))->mPointerAttribute,
                        ((struct sType* )come_null_checker(type, "06type.nc", 1280))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1280))->mPointerAttribute, "06type.nc", 1280))," "))), "06type.nc", 1280)),pointer_attr_35));
                        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                }
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1285))->p=p;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1286))->sline=sline;
                (pointer_attr_35 = come_decrement_ref_count(pointer_attr_35, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (pointer_attr_35 = come_decrement_ref_count(pointer_attr_35, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType* )(__right_value0=sType_clone(type))));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool for_variable, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_attribute_to_type"; neo_current_frame = &fr;
    char*  __dec_obj66  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj67  ;
    char*  __dec_obj68  ;
    char*  __dec_obj69  ;
    if(attribute==((void*)0)||string_operator_equals(((char* )come_null_checker(attribute, "06type.nc", 1300)),"")) {
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    if(for_variable&&!((struct sInfo* )come_null_checker(info, "06type.nc", 1304))->in_typedef) {
        if(((struct sType* )come_null_checker(type, "06type.nc", 1305))->mVarAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1305))->mVarAttribute, "06type.nc", 1305)),"")) {
            __dec_obj66=((struct sType* )come_null_checker(type, "06type.nc", 1306))->mVarAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1306))->mVarAttribute=(char* )come_increment_ref_count(attribute);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj67=((struct sType* )come_null_checker(type, "06type.nc", 1309))->mVarAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1309))->mVarAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1309))->mVarAttribute, "06type.nc", 1309))," "))), "06type.nc", 1309)),attribute));
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    else {
        if(((struct sType* )come_null_checker(type, "06type.nc", 1313))->mAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1313))->mAttribute, "06type.nc", 1313)),"")) {
            __dec_obj68=((struct sType* )come_null_checker(type, "06type.nc", 1314))->mAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1314))->mAttribute=(char* )come_increment_ref_count(attribute);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj69=((struct sType* )come_null_checker(type, "06type.nc", 1317))->mAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1317))->mAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1317))->mAttribute, "06type.nc", 1317))," "))), "06type.nc", 1317)),attribute));
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

char*  parse_variable_name_fun(struct sType*  type  , _Bool anonymous_name, _Bool var_name_between_brace, char*  attribute  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_variable_name_fun"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  var_name  ;
    char*  __dec_obj70  ;
    char*  __dec_obj71  ;
    char*  __dec_obj72  ;
    char*  __dec_obj73  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj74;
    char*  attribute2  ;
    char*  __result_obj__0  ;
    var_name=(char*)come_increment_ref_count(xsprintf(""));
    if(var_name_between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1325))->p==40) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1326))->p++;
        skip_spaces_and_lf(info);
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1330))->p==58) {
        __dec_obj70=var_name,
        var_name=(char* )come_increment_ref_count(__builtin_string(""));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(anonymous_name) {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __dec_obj71=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type, "06type.nc", 1337))->mAnonymousVarName=(_Bool)1;
    }
    else if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 1339))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1339))->p==95) {
        __dec_obj72=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_36=0;
        num_anonymous_var_name_36++;
        __dec_obj73=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_36));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type, "06type.nc", 1346))->mAnonymousVarName=(_Bool)1;
    }
    if(var_name_between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1349))->p==41) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1350))->p++;
        skip_spaces_and_lf(info);
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1354))->p==58) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1355))->p++;
        skip_spaces_and_lf(info);
        no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 1358))->no_comma;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1359))->no_comma=(_Bool)1;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1361))->no_comma=no_comma;
        __dec_obj74=((struct sType* )come_null_checker(type, "06type.nc", 1363))->mSizeNum,
        ((struct sType* )come_null_checker(type, "06type.nc", 1363))->mSizeNum=(struct sNode*)come_increment_ref_count(node);
        (__dec_obj74 ? __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0, (void*)0) :0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    attribute2=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
    append_attribute_to_type(type,(char* )come_increment_ref_count(attribute),(_Bool)1,info);
    append_attribute_to_type(type,(char* )come_increment_ref_count(attribute2),(_Bool)1,info);
    __result_obj__0 = (char* )come_increment_ref_count(var_name);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 1, (void*)0));
    (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_type"; neo_current_frame = &fr;
    char* head;
    int head_sline;
    void* __right_value0 = (void*)0;
    char*  type_name  ;
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
    char*  attribute_before  ;
    struct sNode* alignas_;
    _Bool alignas_double;
    char*  union_attribute  ;
    _Bool struct_define_parsed;
    _Bool anonymous_type;
    _Bool anonymous_name;
    _Bool atomic_;
    _Bool thread_local;
    _Bool thread_;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj75  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    char*  __dec_obj79  ;
    struct buffer*  attr  ;
    char* p;
    char* tail;
    char*  attr_str  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj80  ;
    char*  __dec_obj81  ;
    char*  __dec_obj82  ;
    char*  __dec_obj83  ;
    char*  __dec_obj84  ;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    struct sNode* __dec_obj87;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    char*  __dec_obj93  ;
    char*  __dec_obj94  ;
    char*  __dec_obj95  ;
    char*  __dec_obj96  ;
    char* p_37;
    int sline;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    char*  __dec_obj99  ;
    char*  struct_attribute_after_name  ;
    char*  __dec_obj100  ;
    char*  __dec_obj101  ;
    char* p_38;
    int sline_39;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    char*  struct_attribute_after_generics  ;
    char*  __dec_obj102  ;
    char*  __dec_obj103  ;
    char* p_40;
    int sline_41;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj104  ;
    char* p_42;
    int sline_43;
    char*  __dec_obj105  ;
    char*  __dec_obj106  ;
    char*  __dec_obj107  ;
    char* p_44;
    int sline_45;
    struct tuple2$2char$phchar$ph* multiple_assign_var4
;    char*  asm_name  =0;
    char*  enum_attribute  =0;
    char*  __dec_obj108  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char* p_46;
    int sline_47;
    char*  __dec_obj109  ;
    char*  __dec_obj110  ;
    char*  enum_attribute_after_name  ;
    char*  __dec_obj111  ;
    char*  __dec_obj112  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType*  type_48  =0;
    char*  name_49  =0;
    _Bool err_50=0;
    char*  enum_attribute_after_type  ;
    char*  __dec_obj113  ;
    char*  __dec_obj114  ;
    char* p_51;
    int sline_52;
    char* p_53;
    int sline_54;
    char*  __dec_obj115  ;
    char* p2;
    int sline2;
    char*  __dec_obj116  ;
    char*  __dec_obj117  ;
    char*  __dec_obj118  ;
    char*  __dec_obj119  ;
    char*  __dec_obj120  ;
    char*  __dec_obj121  ;
    char*  __dec_obj122  ;
    char* p_55;
    int sline_56;
    char*  __dec_obj123  ;
    char*  __dec_obj124  ;
    char*  __dec_obj125  ;
    char* p_57;
    int sline_58;
    char*  __dec_obj126  ;
    char* p_59;
    int sline_60;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    char* p_61;
    int sline_62;
    char*  __dec_obj130  ;
    char*  __dec_obj131  ;
    char*  __dec_obj132  ;
    char*  __dec_obj133  ;
    char*  __dec_obj134  ;
    char* p_63;
    int sline_64;
    char*  __dec_obj135  ;
    char*  __dec_obj136  ;
    char*  __dec_obj137  ;
    char*  __dec_obj138  ;
    char*  __dec_obj139  ;
    char*  __dec_obj140  ;
    char*  __dec_obj141  ;
    char* p_65;
    int sline_66;
    char*  __dec_obj142  ;
    char*  __dec_obj143  ;
    char*  __dec_obj144  ;
    _Bool no_comma;
    struct sNode* exp;
    struct sType*  type_67  ;
    struct sNode* __dec_obj145;
    char*  var_name  ;
    struct sType*  __dec_obj146  ;
    char*  attribute  ;
    char*  __dec_obj147  ;
    char*  attribute_68  ;
    char*  __dec_obj148  ;
    char*  __dec_obj149  ;
    char*  __dec_obj150  ;
    char*  __dec_obj151  ;
    char*  __dec_obj152  ;
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
    char*  __dec_obj153  ;
    char*  __dec_obj154  ;
    char*  tuple_name  ;
    char*  __dec_obj155  ;
    _Bool lambda_flag;
    char* pX;
    int slineX;
    struct sType*  type_69  ;
    char*  var_name_70  ;
    _Bool function_pointer_flag;
    _Bool pointer_to_array_flag;
    char* p_71;
    int sline_72;
    char*  word  ;
    char*  __dec_obj156  ;
    _Bool no_output_come_code;
    struct sNode* exp_73;
    char*  word_74  ;
    _Bool var_name_between_brace;
    char* p_75;
    int sline_76;
    char*  word_77  ;
    _Bool anonymous;
    char*  __dec_obj157  ;
    struct sNode* node_78;
    _Bool Value_79;
    int pointer_num_80;
    struct sType*  __dec_obj158  ;
    struct sType*  __dec_obj159  ;
    struct sClass*  klass  ;
    char*  __dec_obj160  ;
    char*  __dec_obj161  ;
    char*  __dec_obj162  ;
    struct sNode* node_81;
    _Bool Value_82;
    struct sType*  __dec_obj163  ;
    struct sType*  __dec_obj164  ;
    _Bool anonymous_83;
    char*  __dec_obj165  ;
    struct sNode* node_84;
    _Bool Value_85;
    int pointer_num_86;
    struct sType*  __dec_obj166  ;
    struct sType*  __dec_obj167  ;
    struct sClass*  klass_87  ;
    char*  __dec_obj168  ;
    char*  attribute_88  ;
    char*  __dec_obj169  ;
    struct sType*  result_type  ;
    _Bool _conditional_value_X0;
    struct sType*  __dec_obj170  ;
    int i;
    _Bool _conditional_value_X1;
    struct sType*  __dec_obj171  ;
    int i_91;
    _Bool _conditional_value_X2;
    struct sType*  __dec_obj172  ;
    struct sType*  __dec_obj173  ;
    struct sType*  __dec_obj174  ;
    struct sNode* __dec_obj175;
    char*  __dec_obj176  ;
    char*  __dec_obj177  ;
    char*  __dec_obj178  ;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var7
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj179  ;
    struct sType*  __dec_obj180  ;
    struct list$1sType$ph* __dec_obj181;
    struct list$1char$ph* __dec_obj182;
    _Bool pointer_paren;
    int paren_num;
    int array_pointer_num;
    struct sType*  __dec_obj183  ;
    struct sType*  __dec_obj184  ;
    struct sNode* __dec_obj185;
    char*  __dec_obj186  ;
    char*  __dec_obj187  ;
    char*  __dec_obj188  ;
    char*  __dec_obj189  ;
    char*  __dec_obj190  ;
    struct list$1sNode$ph* array;
    struct sNode* node_92;
    struct list$1sNode$ph* __dec_obj191;
    struct __current_stack1__ __current_stack1__;
    struct sNode* node_93;
    char*  function_pointer_attribute  ;
    int function_pointer_num;
    char*  pointer_attr_94  ;
    char*  __dec_obj192  ;
    char*  __dec_obj193  ;
    char*  pointer_attr2  ;
    char*  __dec_obj194  ;
    char*  __dec_obj195  ;
    struct sType*  result_type_95  ;
    _Bool _conditional_value_X3;
    struct sType*  __dec_obj196  ;
    int i_96;
    _Bool _conditional_value_X4;
    struct sType*  __dec_obj197  ;
    int i_97;
    _Bool _conditional_value_X5;
    struct sType*  __dec_obj198  ;
    struct sType*  __dec_obj199  ;
    struct sType*  __dec_obj200  ;
    struct sNode* __dec_obj201;
    char*  __dec_obj202  ;
    char*  __dec_obj203  ;
    int paren_flag;
    int array_pointer;
    char*  __dec_obj204  ;
    char*  __dec_obj205  ;
    struct sType*  __dec_obj206  ;
    struct sNode* node_98;
    struct sNode* node_99;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var8
;    struct list$1sType$ph* param_types_100=0;
    struct list$1char$ph* param_names_101=0;
    struct list$1char$ph* param_default_parametors_102=0;
    _Bool var_args_103=0;
    struct sType*  __dec_obj207  ;
    struct list$1sType$ph* __dec_obj208;
    struct list$1char$ph* __dec_obj209;
    char*  __dec_obj210  ;
    _Bool _conditional_value_X6;
    struct sType*  __dec_obj211  ;
    struct buffer*  t  ;
    struct sType*  type_  ;
    char*  __dec_obj212  ;
    struct sType*  __dec_obj213  ;
    char*  __dec_obj214  ;
    char*  __dec_obj215  ;
    struct sNode* __dec_obj216;
    char*  __dec_obj217  ;
    struct sType*  __dec_obj218  ;
    int i_104;
    _Bool _conditional_value_X7;
    struct sType*  __dec_obj219  ;
    struct sNode* __dec_obj220;
    char*  __dec_obj221  ;
    struct sType*  __dec_obj222  ;
    int i_105;
    _Bool _conditional_value_X8;
    struct sType*  __dec_obj223  ;
    struct sNode* __dec_obj224;
    char*  __dec_obj225  ;
    struct sType*  __dec_obj226  ;
    _Bool _conditional_value_X9;
    struct sType*  __dec_obj227  ;
    struct sType*  __dec_obj228  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  generics_type  =0;
    char*  var_name_106  =0;
    _Bool err_107=0;
    struct sType*  __dec_obj229  ;
    char*  new_name  ;
    struct sNode* __dec_obj230;
    char*  __dec_obj231  ;
    char*  __dec_obj232  ;
    struct sType*  __dec_obj233  ;
    struct sClass*  klass_108  ;
    void* __right_value3 = (void*)0;
    struct sClass*  klass_118  ;
    struct sType*  __dec_obj234  ;
    struct sType*  __dec_obj235  ;
    struct sNode* __dec_obj236;
    char*  __dec_obj237  ;
    char*  __dec_obj238  ;
    char*  __dec_obj239  ;
    struct sType*  __dec_obj240  ;
    struct list$1sType$ph* types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  type2  =0;
    char*  name_119  =0;
    _Bool err_120=0;
    int num_tuples;
    struct sType*  __dec_obj241  ;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    struct sType*  __dec_obj242  ;
    struct sType*  __dec_obj243  ;
    char*  new_name_121  ;
    char*  __dec_obj244  ;
    char*  attribute_122  ;
    char*  __dec_obj245  ;
    char*  __dec_obj246  ;
    char*  __dec_obj247  ;
    char*  __dec_obj248  ;
    struct list$1sNode$ph* array_num_typedef;
    struct list$1sNode$ph* __dec_obj249;
    _Bool array_static;
    _Bool array_restrict;
    struct sNode* node_123;
    struct __current_stack2__ __current_stack2__;
    struct __current_stack3__ __current_stack3__;
    struct tuple2$2char$phchar$ph* multiple_assign_var11
;    char*  asm_name_126  =0;
    char*  attribute2  =0;
    char*  __dec_obj250  ;
    struct sType*  type_before  ;
    struct sType*  __dec_obj251  ;
    struct sNode* __list_values1__[1];
    struct list$1sNode$ph* __dec_obj252;
    struct sType*  __dec_obj253  ;
    char*  __dec_obj254  ;
    char*  __dec_obj255  ;
    char*  __dec_obj256  ;
    memset(&type_69, 0, sizeof(type_69));
    memset(&var_name_70, 0, sizeof(var_name_70));
    memset(&result_type, 0, sizeof(result_type));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&result_type_95, 0, sizeof(result_type_95));
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    head=((struct sInfo* )come_null_checker(info, "06type.nc", 1376))->p;
    head_sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1377))->sline;
    ((struct sInfo* )come_null_checker(info, "06type.nc", 1378))->define_struct=(_Bool)0;
    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
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
    attribute_before=(char*)come_increment_ref_count(xsprintf(""));
    alignas_=((void*)0);
    alignas_double=(_Bool)0;
    union_attribute=(char*)come_increment_ref_count(xsprintf(""));
    struct_define_parsed=(_Bool)0;
    anonymous_type=(_Bool)0;
    anonymous_name=(_Bool)0;
    atomic_=(_Bool)0;
    thread_local=(_Bool)0;
    thread_=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1417)),"__type__")) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1418))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1419))->p++;
                skip_spaces_and_lf(info);
            }
            buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1423, "struct buffer* "))), "06type.nc", 1423)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 1424))->p) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1425))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1426))->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    buffer_append_char(((struct buffer* )come_null_checker(buf, "06type.nc", 1431)),*((struct sInfo* )come_null_checker(info, "06type.nc", 1431))->p);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1432))->p++;
                }
            }
            __dec_obj75=type_name,
            type_name=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "06type.nc", 1435))));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
            type_name_=(_Bool)1;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1439)),"_Thread_local")) {
            __dec_obj76=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
            thread_local=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1443)),"__thread")) {
            __dec_obj77=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
            thread_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1447)),"_Atomic")) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1448))->p==40) {
                expected_next_character(40,info);
            }
            __dec_obj78=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
            atomic_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1454)),"__extension__")) {
            __dec_obj79=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1457)),"__attribute__")) {
            attr=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1458, "struct buffer* "))), "06type.nc", 1458)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            buffer_append_str(((struct buffer* )come_null_checker(attr, "06type.nc", 1459)),"__attribute__");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1463))->p==40) {
                p=((struct sInfo* )come_null_checker(info, "06type.nc", 1464))->p;
                skip_paren(info);
                tail=((struct sInfo* )come_null_checker(info, "06type.nc", 1466))->p;
                buffer_append(((struct buffer* )come_null_checker(attr, "06type.nc", 1468)),p,tail-p);
            }
            attr_str=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(attr, "06type.nc", 1471))));
            if(string_operator_not_equals(((char* )come_null_checker(attribute_before, "06type.nc", 1472)),"")) {
                __dec_obj80=attribute_before,
                attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(attribute_before, "06type.nc", 1473))," "))), "06type.nc", 1473)),attr_str));
                __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                __dec_obj81=attribute_before,
                attribute_before=(char* )come_increment_ref_count(attr_str);
                __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __dec_obj82=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(buffer_finalize, attr, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (attr_str = come_decrement_ref_count(attr_str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1481)),"_Noreturn")) {
            __dec_obj83=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1485)),"__noreturn")) {
            __dec_obj84=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1489)),"_Nullable")) {
            __dec_obj85=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1492)),"_noreturn")) {
            __dec_obj86=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1496)),"_Alignas")) {
            expected_next_character(40,info);
            if((((struct sInfo* )come_null_checker(info, "06type.nc", 1499))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 1499))->p)>strlen("double")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 1499))->p,"double",strlen("double"))==0) {
                (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                alignas_double=(_Bool)1;
            }
            else {
                __dec_obj87=alignas_,
                alignas_=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0) :0);
            }
            expected_next_character(41,info);
            __dec_obj88=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1512)),"const")) {
            constant=(_Bool)1;
            __dec_obj89=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1517)),"_Complex")) {
            complex_=(_Bool)1;
            __dec_obj90=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1522)),"static")) {
            static_=(_Bool)1;
            __dec_obj91=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1527)),"uniq")) {
            uniq_=(_Bool)1;
            __dec_obj92=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1532)),"extern")) {
            extern_=(_Bool)1;
            __dec_obj93=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1537)),"inline")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1537)),"__inline")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1537)),"__inline__")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1537)),"__always_inline")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1537)),"__forceinline")) {
            inline_=(_Bool)1;
            __dec_obj94=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1543)),"volatile")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1543)),"__volatile__")) {
            volatile_=(_Bool)1;
            __dec_obj95=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1548)),"struct")) {
            struct_=(_Bool)1;
            __dec_obj96=union_attribute,
            union_attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1552))->p==123) {
                p_37=((struct sInfo* )come_null_checker(info, "06type.nc", 1553))->p;
                sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1554))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1558))->p==59) {
                    anonymous_name=(_Bool)1;
                    anonymous_type=(_Bool)1;
                    __dec_obj97=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1562))->p=p_37;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1563))->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __dec_obj98=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1570))->p=p_37;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1571))->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1579))->p!=62) {
                __dec_obj99=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
                skip_spaces_and_lf(info);
                struct_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
                if(string_operator_not_equals(((char* )come_null_checker(struct_attribute_after_name, "06type.nc", 1585)),"")) {
                    if(string_operator_equals(((char* )come_null_checker(union_attribute, "06type.nc", 1586)),"")) {
                        __dec_obj100=union_attribute,
                        union_attribute=(char* )come_increment_ref_count(struct_attribute_after_name);
                        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    else {
                        __dec_obj101=union_attribute,
                        union_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(union_attribute, "06type.nc", 1590))," "))), "06type.nc", 1590)),struct_attribute_after_name));
                        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1594))->p==60) {
                    p_38=((struct sInfo* )come_null_checker(info, "06type.nc", 1595))->p;
                    sline_39=((struct sInfo* )come_null_checker(info, "06type.nc", 1596))->sline;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1598))->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1602))->p==62) {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1603))->p++;
                            skip_spaces_and_lf(info);
                            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1606))->p==123) {
                            }
                            else {
                                ((struct sInfo* )come_null_checker(info, "06type.nc", 1609))->p=p_38;
                                ((struct sInfo* )come_null_checker(info, "06type.nc", 1610))->sline=sline_39;
                            }
                            break;
                        }
                        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1614))->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1616, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__0;
                        }
                        else {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1619))->p++;
                        }
                    }
                }
                struct_attribute_after_generics=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
                if(string_operator_not_equals(((char* )come_null_checker(struct_attribute_after_generics, "06type.nc", 1625)),"")) {
                    if(string_operator_equals(((char* )come_null_checker(union_attribute, "06type.nc", 1626)),"")) {
                        __dec_obj102=union_attribute,
                        union_attribute=(char* )come_increment_ref_count(struct_attribute_after_generics);
                        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    else {
                        __dec_obj103=union_attribute,
                        union_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(union_attribute, "06type.nc", 1630))," "))), "06type.nc", 1630)),struct_attribute_after_generics));
                        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1634))->p==123) {
                    p_40=((struct sInfo* )come_null_checker(info, "06type.nc", 1635))->p;
                    sline_41=((struct sInfo* )come_null_checker(info, "06type.nc", 1636))->sline;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1642))->p==59) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1643))->p=head;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1644))->sline=head_sline;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1645))->define_struct=(_Bool)1;
                        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1646, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                        return __result_obj__0;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1649))->p=p_40;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1650))->sline=sline_41;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(union_attribute),info,(_Bool)0));
                        Value=node_compile(node,info);
                        if(!Value) {
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1655, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__0;
                        }
                        struct_define_parsed=(_Bool)1;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0));
                        break;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                }
                (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1663)),"union")) {
            union_=(_Bool)1;
            __dec_obj104=union_attribute,
            union_attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1667))->p==123) {
                p_42=((struct sInfo* )come_null_checker(info, "06type.nc", 1668))->p;
                sline_43=((struct sInfo* )come_null_checker(info, "06type.nc", 1669))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if((((struct sInfo* )come_null_checker(info, "06type.nc", 1673))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 1673))->p)>=strlen("__attribute__")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 1673))->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1677))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1678))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1679))->sline=head_sline;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1681))->define_struct=(_Bool)0;
                    anonymous_type=(_Bool)1;
                    __dec_obj105=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1684))->p=p_42;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1685))->sline=sline_43;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __dec_obj106=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1691))->p=p_42;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1692))->sline=sline_43;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj107=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1703))->p==123) {
                p_44=((struct sInfo* )come_null_checker(info, "06type.nc", 1704))->p;
                sline_45=((struct sInfo* )come_null_checker(info, "06type.nc", 1705))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1709))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1710))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1711))->sline=head_sline;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1712))->define_struct=(_Bool)1;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1713, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1717))->p=p_44;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1718))->sline=sline_45;
                    break;
                }
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1723)),"enum")) {
            enum_=(_Bool)1;
            skip_spaces_and_lf(info);
            multiple_assign_var4=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            asm_name=(char* )come_increment_ref_count(multiple_assign_var4->v1);
            enum_attribute=(char* )come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(string_operator_not_equals(((char* )come_null_checker(enum_attribute, "06type.nc", 1729)),"")) {
                __dec_obj108=union_attribute,
                union_attribute=(char* )come_increment_ref_count(enum_attribute);
                __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
            }
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1733))->p==58) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1734))->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var5->v1);
                name=(char* )come_increment_ref_count(multiple_assign_var5->v2);
                err=multiple_assign_var5->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1742))->p==123) {
                p_46=((struct sInfo* )come_null_checker(info, "06type.nc", 1743))->p;
                sline_47=((struct sInfo* )come_null_checker(info, "06type.nc", 1744))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if((((struct sInfo* )come_null_checker(info, "06type.nc", 1748))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 1748))->p)>=strlen("__attribute__")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 1748))->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1752))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1753))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1754))->sline=head_sline;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1755))->define_struct=(_Bool)1;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1756, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __dec_obj109=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1761))->p=p_46;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1762))->sline=sline_47;
                    struct_define_parsed=(_Bool)1;
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj110=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
            skip_spaces_and_lf(info);
            enum_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            if(string_operator_not_equals(((char* )come_null_checker(enum_attribute_after_name, "06type.nc", 1775)),"")) {
                if(string_operator_equals(((char* )come_null_checker(union_attribute, "06type.nc", 1776)),"")) {
                    __dec_obj111=union_attribute,
                    union_attribute=(char* )come_increment_ref_count(enum_attribute_after_name);
                    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj112=union_attribute,
                    union_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(union_attribute, "06type.nc", 1780))," "))), "06type.nc", 1780)),enum_attribute_after_name));
                    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1784))->p==58) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1785))->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_48=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1);
                name_49=(char* )come_increment_ref_count(multiple_assign_var6->v2);
                err_50=multiple_assign_var6->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_48, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_49 = come_decrement_ref_count(name_49, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            skip_spaces_and_lf(info);
            enum_attribute_after_type=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            if(string_operator_not_equals(((char* )come_null_checker(enum_attribute_after_type, "06type.nc", 1794)),"")) {
                if(string_operator_equals(((char* )come_null_checker(union_attribute, "06type.nc", 1795)),"")) {
                    __dec_obj113=union_attribute,
                    union_attribute=(char* )come_increment_ref_count(enum_attribute_after_type);
                    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj114=union_attribute,
                    union_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(union_attribute, "06type.nc", 1799))," "))), "06type.nc", 1799)),enum_attribute_after_type));
                    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1803))->p==123) {
                p_51=((struct sInfo* )come_null_checker(info, "06type.nc", 1804))->p;
                sline_52=((struct sInfo* )come_null_checker(info, "06type.nc", 1805))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1809))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1810))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1811))->sline=head_sline;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1812))->define_struct=(_Bool)1;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1813, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1817))->p=p_51;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1818))->sline=sline_52;
                    struct_define_parsed=(_Bool)1;
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
            }
            (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1824)),"long")) {
            {
                p_53=((struct sInfo* )come_null_checker(info, "06type.nc", 1827))->p;
                sline_54=((struct sInfo* )come_null_checker(info, "06type.nc", 1828))->sline;
                if(!(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1830))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1830))->p==95)) {
                    __dec_obj115=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
                    break;
                }
                else {
                    p2=((struct sInfo* )come_null_checker(info, "06type.nc", 1835))->p;
                    sline2=((struct sInfo* )come_null_checker(info, "06type.nc", 1836))->sline;
                    __dec_obj116=type_name,
                    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
                    if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1840)),"double")) {
                        long_=(_Bool)1;
                        break;
                    }
                    else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1844)),"unsigned")) {
                        __dec_obj117=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
                        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1847)),"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)1;
                            break;
                        }
                    }
                    else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1853)),"signed")) {
                        __dec_obj118=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
                        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1856)),"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)0;
                            break;
                        }
                    }
                    else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1862)),"long")) {
                        p_53=((struct sInfo* )come_null_checker(info, "06type.nc", 1863))->p;
                        sline_54=((struct sInfo* )come_null_checker(info, "06type.nc", 1864))->sline;
                        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1865))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1865))->p==95) {
                            long_long=(_Bool)1;
                            __dec_obj119=type_name,
                            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1869))->p==58) {
                            __dec_obj120=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1871))->p=p2;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1872))->sline=sline2;
                            break;
                        }
                        else {
                            long_=(_Bool)1;
                            break;
                        }
                        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1880)),"int")) {
                            long_long=(_Bool)1;
                            break;
                        }
                        else if(!is_type_name(type_name,info)) {
                            __dec_obj121=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
                            long_long=(_Bool)1;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1887))->p=p_53;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1888))->sline=sline_54;
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
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1903))->p=p_53;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1904))->sline=sline_54;
                        __dec_obj122=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1912)),"signed")) {
            unsigned_=(_Bool)0;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1915))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1915))->p==95) {
                p_55=((struct sInfo* )come_null_checker(info, "06type.nc", 1916))->p;
                sline_56=((struct sInfo* )come_null_checker(info, "06type.nc", 1917))->sline;
                __dec_obj123=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
                if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1921)),"char")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1921)),"short")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1921)),"long")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1921)),"int")) {
                }
                else {
                    __dec_obj124=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("int"));
                    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1925))->p=p_55;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1926))->sline=sline_56;
                    break;
                }
            }
            else {
                __dec_obj125=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("int"));
                __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1935)),"unsigned")) {
            unsigned_=(_Bool)1;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1938))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1938))->p==95) {
                p_57=((struct sInfo* )come_null_checker(info, "06type.nc", 1939))->p;
                sline_58=((struct sInfo* )come_null_checker(info, "06type.nc", 1940))->sline;
                __dec_obj126=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
                if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1944)),"short")) {
                    if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1945))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1945))->p==95) {
                        p_59=((struct sInfo* )come_null_checker(info, "06type.nc", 1946))->p;
                        sline_60=((struct sInfo* )come_null_checker(info, "06type.nc", 1947))->sline;
                        __dec_obj127=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
                        if(is_type_name(type_name,info)) {
                            short_=(_Bool)1;
                        }
                        else {
                            short_=(_Bool)1;
                            __dec_obj128=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1958))->p=p_59;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1959))->sline=sline_60;
                        }
                    }
                    else {
                        short_=(_Bool)1;
                        __dec_obj129=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1968)),"long")) {
                    if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1969))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1969))->p==95) {
                        p_61=((struct sInfo* )come_null_checker(info, "06type.nc", 1970))->p;
                        sline_62=((struct sInfo* )come_null_checker(info, "06type.nc", 1971))->sline;
                        __dec_obj130=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
                        if(is_type_name(type_name,info)) {
                            long_=(_Bool)1;
                        }
                        else {
                            long_=(_Bool)1;
                            __dec_obj131=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                            __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1982))->p=p_61;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 1983))->sline=sline_62;
                        }
                    }
                    else {
                        long_=(_Bool)1;
                        __dec_obj132=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(!is_type_name(type_name,info)) {
                    __dec_obj133=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1994))->p=p_57;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1995))->sline=sline_58;
                    break;
                }
            }
            else {
                __dec_obj134=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2004)),"signed")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2004)),"__signed__")) {
            unsigned_=(_Bool)0;
            p_63=((struct sInfo* )come_null_checker(info, "06type.nc", 2007))->p;
            sline_64=((struct sInfo* )come_null_checker(info, "06type.nc", 2008))->sline;
            __dec_obj135=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2012))->p==58&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 2012))->p+1)==58) {
                __dec_obj136=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2014))->p=p_63;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2015))->sline=sline_64;
                break;
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2019)),"register")) {
            register_=(_Bool)1;
            __dec_obj137=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2024)),"restrict")) {
            restrict_=(_Bool)1;
            __dec_obj138=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2029)),"_Addr")) {
            __dec_obj139=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2032)),"__restrict")) {
            restrict_=(_Bool)1;
            __dec_obj140=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2037)),"tup")) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2038))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2039))->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj141=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2051)),"short")) {
            short_=(_Bool)0;
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2054))->p==58) {
                break;
            }
            else if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 2057))->p)) {
                p_65=((struct sInfo* )come_null_checker(info, "06type.nc", 2058))->p;
                sline_66=((struct sInfo* )come_null_checker(info, "06type.nc", 2059))->sline;
                __dec_obj142=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2062))->p==58&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 2062))->p+1)==58) {
                    __dec_obj143=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short"));
                    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2064))->p=p_65;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2065))->sline=sline_66;
                    break;
                }
                if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2069)),"int")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2073)),"short")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(is_type_name(type_name,info)) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2078))->p=p_65;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2079))->sline=sline_66;
                }
                else {
                    __dec_obj144=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short"));
                    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2083))->p=p_65;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2084))->sline=sline_66;
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
    if((string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2097)),"typeof")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2097)),"__typeof__"))&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2097))->p==40) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2098))->p++;
        skip_spaces_and_lf(info);
        no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 2101))->no_comma;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2102))->no_comma=(_Bool)0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2104))->no_comma=no_comma;
        expected_next_character(41,info);
        type_67=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2108, "struct sType* "))), "06type.nc", 2108))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj145=((struct sType* )come_null_checker(type_67, "06type.nc", 2109))->mTypeOfNode,
        ((struct sType* )come_null_checker(type_67, "06type.nc", 2109))->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp);
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0) :0);
        var_name=((void*)0);
        __dec_obj146=type_67,
        type_67=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_67,info));
        come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute=((void*)0);
        if(parse_variable_name) {
            __dec_obj147=var_name,
            var_name=(char* )come_increment_ref_count(parse_variable_name_fun(type_67,anonymous_name,(_Bool)0,(char* )come_increment_ref_count(attribute),info));
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2120, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(type_67),(char* )come_increment_ref_count(var_name),(_Bool)1))));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    attribute_68=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0));
    if(string_operator_not_equals(((char* )come_null_checker(attribute_before, "06type.nc", 2124)),"")) {
        if(string_operator_equals(((char* )come_null_checker(attribute_68, "06type.nc", 2125)),"")) {
            __dec_obj148=attribute_68,
            attribute_68=(char* )come_increment_ref_count(attribute_before);
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj149=attribute_68,
            attribute_68=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(attribute_before, "06type.nc", 2129))," "))), "06type.nc", 2129)),attribute_68));
            __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        __dec_obj150=attribute_before,
        attribute_before=(char*)come_increment_ref_count(xsprintf(""));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(!struct_define_parsed&&(struct_||enum_)&&string_operator_not_equals(((char* )come_null_checker(union_attribute, "06type.nc", 2133)),"")) {
        if(string_operator_equals(((char* )come_null_checker(attribute_68, "06type.nc", 2134)),"")) {
            __dec_obj151=attribute_68,
            attribute_68=(char* )come_increment_ref_count(union_attribute);
            __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj152=attribute_68,
            attribute_68=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(union_attribute, "06type.nc", 2138))," "))), "06type.nc", 2138)),attribute_68));
            __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    skip_pointer_attribute(info);
    pointer_num=0;
    pointer_attribute=(char*)come_increment_ref_count(xsprintf(""));
    heap=(_Bool)0;
    refference=(_Bool)0;
    no_refference=(_Bool)0;
    channel=(_Bool)0;
    deffer_=(_Bool)0;
    any_class=(_Bool)0;
    vtable=(_Bool)0;
    while(1) {
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2154))->p==42) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2155))->p++;
            skip_spaces_and_lf(info);
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(string_operator_not_equals(((char* )come_null_checker(pointer_attr, "06type.nc", 2158)),"")) {
                if(string_operator_not_equals(((char* )come_null_checker(pointer_attribute, "06type.nc", 2159)),"")) {
                    __dec_obj153=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(pointer_attribute, "06type.nc", 2160))," "))), "06type.nc", 2160)),pointer_attr));
                    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    __dec_obj154=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(pointer_attr);
                    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            pointer_num++;
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2169))->p==37) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2170))->p++;
            skip_spaces_and_lf(info);
            heap=(_Bool)1;
        }
        else if(gComePthread&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2175))->p==124) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2176))->p++;
            skip_spaces_and_lf(info);
            channel=(_Bool)1;
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2181))->p==64) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2182))->p++;
            while(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 2183))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2183))->p==95) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2184))->p++;
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name=((void*)0);
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2196))->p==58&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 2196))->p+1)!=58&&tuple_) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2197))->p++;
        skip_spaces_and_lf(info);
        __dec_obj155=tuple_name,
        tuple_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(atomic_&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2203))->p==41) {
        expected_next_character(41,info);
    }
    lambda_flag=(_Bool)0;
    {
        pX=((struct sInfo* )come_null_checker(info, "06type.nc", 2209))->p;
        slineX=((struct sInfo* )come_null_checker(info, "06type.nc", 2210))->sline;
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2212))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2212))->p==95) {
            (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2215))->p==40&&((struct sInfo* )come_null_checker(info, "06type.nc", 2215))->in_typedef) {
                lambda_flag=(_Bool)1;
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2220))->p=pX;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2221))->sline=slineX;
    }
    function_pointer_flag=(_Bool)0;
    pointer_to_array_flag=(_Bool)0;
    {
        p_71=((struct sInfo* )come_null_checker(info, "06type.nc", 2230))->p;
        sline_72=((struct sInfo* )come_null_checker(info, "06type.nc", 2231))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2233))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2234))->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2239))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2240))->p++;
                skip_spaces_and_lf(info);
            }
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2244))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 2244))->p==94) {
                while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2245))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 2245))->p==94) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2246))->p++;
                    skip_spaces_and_lf(info);
                }
                function_pointer_flag=(_Bool)1;
                word=((void*)0);
                if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2253))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2253))->p==95) {
                    __dec_obj156=word,
                    word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0);
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2257))->p==91) {
                    pointer_to_array_flag=(_Bool)1;
                    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2259))->p==91) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2260))->p++;
                        skip_spaces_and_lf(info);
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2263))->p==93) {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2264))->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        no_output_come_code=((struct sInfo* )come_null_checker(info, "06type.nc", 2269))->no_output_come_code;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2269))->no_output_come_code=(_Bool)1;
                        exp_73=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2271))->no_output_come_code=no_output_come_code;
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2273))->p==93) {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2274))->p++;
                            skip_spaces_and_lf(info);
                        }
                        ((exp_73) ? exp_73 = come_decrement_ref_count(exp_73, ((struct sNode*)exp_73)->finalize, ((struct sNode*)exp_73)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2279))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2280))->p++;
                        skip_spaces_and_lf(info);
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2283))->p==40) {
                            function_pointer_flag=(_Bool)1;
                            pointer_to_array_flag=(_Bool)0;
                        }
                        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2287))->p==91) {
                            function_pointer_flag=(_Bool)0;
                            pointer_to_array_flag=(_Bool)1;
                        }
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2293))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2294))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2297))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2298))->p++;
                        skip_spaces_and_lf(info);
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2304))->p==91) {
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2308))->p==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2313))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2313))->p==95) {
                word_74=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2316))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2317))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2320))->p==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word_74 = come_decrement_ref_count(word_74, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2327))->p=p_71;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2328))->sline=sline_72;
    }
    var_name_between_brace=(_Bool)0;
    {
        p_75=((struct sInfo* )come_null_checker(info, "06type.nc", 2333))->p;
        sline_76=((struct sInfo* )come_null_checker(info, "06type.nc", 2334))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2336))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2337))->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2342))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2342))->p==95) {
                word_77=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_77,info)) {
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2347))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2348))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2351))->p!=40) {
                        var_name_between_brace=(_Bool)1;
                    }
                }
                (word_77 = come_decrement_ref_count(word_77, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2358))->p=p_75;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2359))->sline=sline_76;
    }
    if(anonymous_type&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2363))->p==123) {
        static int anonymous_num=0;
        if(struct_) {
            anonymous=(_Bool)0;
            if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2367)),"")) {
                anonymous=(_Bool)1;
                __dec_obj157=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num));
                __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
            }
            node_78=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(union_attribute),info,anonymous));
            Value_79=node_compile(node_78,info);
            if(!Value_79) {
                err_msg(info,"parse_struct is failed");
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2376, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            pointer_num_80=0;
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2380))->p==42) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2381))->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_80++;
            }
            __dec_obj158=type_69,
            type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2390))->types, "06type.nc", 2390)), "06type.nc", 2390)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_69==((void*)0)) {
                __dec_obj159=type_69,
                type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2393, "struct sType* "))), "06type.nc", 2393))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            klass=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2395))->classes, "06type.nc", 2395)), "06type.nc", 2395)),type_name));
            ((struct sClass* )come_null_checker(klass, "06type.nc", 2396))->mAnonymous=(_Bool)1;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2397))->mAnonymous=anonymous;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2398))->mAnonymous=anonymous;
            __dec_obj160=((struct sType* )come_null_checker(type_69, "06type.nc", 2399))->mAnonymousName,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2399))->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name));
            __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2401))->mPointerNum=pointer_num_80;
            ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(enum_) {
            if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2404)),"")) {
                if(!((struct sInfo* )come_null_checker(info, "06type.nc", 2405))->no_output_err) {
                    __dec_obj161=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num));
                    __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj162=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num));
                    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            node_81=(struct sNode*)come_increment_ref_count(parse_enum((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(union_attribute),info));
            if(!((struct sInfo* )come_null_checker(info, "06type.nc", 2415))->no_output_err) {
                Value_82=node_compile(node_81,info);
                if(!Value_82) {
                    printf("%s %d: compiling is failed(X)\n",((struct sInfo* )come_null_checker(info, "06type.nc", 2417))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 2417))->sline);
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2418, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
            }
            __dec_obj163=type_69,
            type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2422))->types, "06type.nc", 2422)), "06type.nc", 2422)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj163,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_69==((void*)0)) {
                __dec_obj164=type_69,
                type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2425, "struct sType* "))), "06type.nc", 2425))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(union_) {
            anonymous_83=(_Bool)0;
            if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2430)),"")) {
                __dec_obj165=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num));
                __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
                anonymous_83=(_Bool)1;
            }
            node_84=(struct sNode*)come_increment_ref_count(parse_union((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(union_attribute),info,(_Bool)1));
            Value_85=node_compile(node_84,info);
            if(!Value_85) {
                printf("%s %d: compiling is failed(X)\n",((struct sInfo* )come_null_checker(info, "06type.nc", 2438))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 2438))->sline);
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2439, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            pointer_num_86=0;
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2443))->p==42) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2444))->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_86++;
            }
            __dec_obj166=type_69,
            type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2453))->types, "06type.nc", 2453)), "06type.nc", 2453)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_69==((void*)0)) {
                __dec_obj167=type_69,
                type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2456, "struct sType* "))), "06type.nc", 2456))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            klass_87=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2460))->classes, "06type.nc", 2460)), "06type.nc", 2460)),type_name));
            ((struct sClass* )come_null_checker(klass_87, "06type.nc", 2461))->mAnonymous=(_Bool)1;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2463))->mPointerNum=pointer_num_86;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2464))->mAnonymous=anonymous_83;
            __dec_obj168=((struct sType* )come_null_checker(type_69, "06type.nc", 2465))->mAnonymousName,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2465))->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name));
            __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0);
            ((node_84) ? node_84 = come_decrement_ref_count(node_84, ((struct sNode*)node_84)->finalize, ((struct sNode*)node_84)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sClass_finalize, klass_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            err_msg(info,"unexpected { character");
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2469, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
            (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        attribute_88=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0));
        if(!parse_variable_name) {
            append_attribute_to_type(type_69,(char* )come_increment_ref_count(attribute_88),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __dec_obj169=var_name_70,
            var_name_70=(char* )come_increment_ref_count(parse_variable_name_fun(type_69,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_88),info));
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
        }
        (attribute_88 = come_decrement_ref_count(attribute_88, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(lambda_flag) {
        if(({(_conditional_value_X0=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2484))->types, "06type.nc", 2484)), "06type.nc", 2484)),type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            __dec_obj170=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2485))->types, "06type.nc", 2485)), "06type.nc", 2485)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(result_type, "06type.nc", 2486))->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2486))->classes, "06type.nc", 2486)), "06type.nc", 2486)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 2486))->mClass, "06type.nc", 2486))->mName)));
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2488))->generics_type_names, "06type.nc", 2488)),type_name,(_Bool)0)) {
            for(i=0;i<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2489))->generics_type_names, "06type.nc", 2489)));i++){
                if(({(_conditional_value_X1=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2490))->generics_type_names, "06type.nc", 2490)), "06type.nc", 2490)),i))), "06type.nc", 2490)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X1;})) {
                    __dec_obj171=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2491, "struct sType* "))), "06type.nc", 2491))),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2495))->method_generics_type_names, "06type.nc", 2495)),type_name,(_Bool)0)) {
            for(i_91=0;i_91<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2496))->method_generics_type_names, "06type.nc", 2496)));i_91++){
                if(({(_conditional_value_X2=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2497))->method_generics_type_names, "06type.nc", 2497)), "06type.nc", 2497)),i_91))), "06type.nc", 2497)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X2;})) {
                    __dec_obj172=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2498, "struct sType* "))), "06type.nc", 2498))),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_91)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else {
            __dec_obj173=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2504))->types, "06type.nc", 2504)), "06type.nc", 2504)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(result_type==((void*)0)) {
                __dec_obj174=result_type,
                result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2507, "struct sType* "))), "06type.nc", 2507))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2511))->mAtomic=((struct sType* )come_null_checker(result_type, "06type.nc", 2511))->mAtomic||atomic_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2512))->mThreadLocal=((struct sType* )come_null_checker(result_type, "06type.nc", 2512))->mThreadLocal||thread_local;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2513))->mThread=((struct sType* )come_null_checker(result_type, "06type.nc", 2513))->mThread||thread_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2514))->mConstant=((struct sType* )come_null_checker(result_type, "06type.nc", 2514))->mConstant||constant;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2515))->mComplex=((struct sType* )come_null_checker(result_type, "06type.nc", 2515))->mComplex||complex_;
        __dec_obj175=((struct sType* )come_null_checker(result_type, "06type.nc", 2516))->mAlignas,
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2516))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2517))->mAlignasDouble=alignas_double;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2518))->mRegister=register_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2519))->mUnsigned=((struct sType* )come_null_checker(result_type, "06type.nc", 2519))->mUnsigned||unsigned_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2520))->mNoreturn=((struct sType* )come_null_checker(result_type, "06type.nc", 2520))->mNoreturn||noreturn_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2521))->mVolatile=volatile_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2522))->mUniq=((struct sType* )come_null_checker(result_type, "06type.nc", 2522))->mUniq||uniq_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2523))->mStatic=(((struct sType* )come_null_checker(result_type, "06type.nc", 2523))->mStatic||static_)&&!((struct sType* )come_null_checker(result_type, "06type.nc", 2523))->mUniq;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2524))->mExtern=((struct sType* )come_null_checker(result_type, "06type.nc", 2524))->mExtern||extern_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2525))->mInline=((struct sType* )come_null_checker(result_type, "06type.nc", 2525))->mInline||inline_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2526))->mRestrict=((struct sType* )come_null_checker(result_type, "06type.nc", 2526))->mRestrict||restrict_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2527))->mLongLong=((struct sType* )come_null_checker(result_type, "06type.nc", 2527))->mLongLong||long_long;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2528))->mLong=((struct sType* )come_null_checker(result_type, "06type.nc", 2528))->mLong||long_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2529))->mShort=((struct sType* )come_null_checker(result_type, "06type.nc", 2529))->mShort||short_;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2530))->mPointerNum=pointer_num;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2531))->mHeap=((struct sType* )come_null_checker(result_type, "06type.nc", 2531))->mHeap||heap;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2532))->mChannel=((struct sType* )come_null_checker(result_type, "06type.nc", 2532))->mChannel||channel;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2533))->mDefferRightValue=((struct sType* )come_null_checker(result_type, "06type.nc", 2533))->mDefferRightValue||deffer_;
        if(string_operator_not_equals(((char* )come_null_checker(pointer_attribute, "06type.nc", 2534)),"")) {
            if(((struct sType* )come_null_checker(result_type, "06type.nc", 2535))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 2535))->mPointerAttribute, "06type.nc", 2535)),"")) {
                __dec_obj176=((struct sType* )come_null_checker(result_type, "06type.nc", 2536))->mPointerAttribute,
                ((struct sType* )come_null_checker(result_type, "06type.nc", 2536))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attribute);
                __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj177=((struct sType* )come_null_checker(result_type, "06type.nc", 2539))->mPointerAttribute,
                ((struct sType* )come_null_checker(result_type, "06type.nc", 2539))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 2539))->mPointerAttribute, "06type.nc", 2539))," "))), "06type.nc", 2539)),pointer_attribute));
                __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        __dec_obj178=var_name_70,
        var_name_70=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0, (void*)0);
        multiple_assign_var7=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var7->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v3);
        var_args=multiple_assign_var7->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj179=type_69,
        type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2547, "struct sType* "))), "06type.nc", 2547))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj180=((struct sType* )come_null_checker(type_69, "06type.nc", 2549))->mResultType,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2549))->mResultType=(struct sType* )come_increment_ref_count(result_type);
        come_call_finalizer(sType_finalize, __dec_obj180,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj181=((struct sType* )come_null_checker(type_69, "06type.nc", 2550))->mParamTypes,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2550))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj182=((struct sType* )come_null_checker(type_69, "06type.nc", 2551))->mParamNames,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2551))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2552))->mVarArgs=var_args;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2553))->mExtern=extern_;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(pointer_to_array_flag) {
        expected_next_character(40,info);
        skip_pointer_attribute(info);
        pointer_paren=(_Bool)0;
        paren_num=1;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2562))->p==40) {
            pointer_paren=(_Bool)1;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2564))->p++;
            skip_spaces_and_lf(info);
            paren_num++;
        }
        array_pointer_num=0;
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2570))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 2570))->p==94) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2571))->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            array_pointer_num++;
        }
        skip_pointer_attribute(info);
        __dec_obj183=type_69,
        type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2579))->types, "06type.nc", 2579)), "06type.nc", 2579)),type_name)))));
        come_call_finalizer(sType_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(type_69==((void*)0)) {
            __dec_obj184=type_69,
            type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2582, "struct sType* "))), "06type.nc", 2582))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2585))->mConstant=((struct sType* )come_null_checker(type_69, "06type.nc", 2585))->mConstant||constant;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2586))->mComplex=((struct sType* )come_null_checker(type_69, "06type.nc", 2586))->mComplex||complex_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2587))->mAtomic=((struct sType* )come_null_checker(type_69, "06type.nc", 2587))->mAtomic||atomic_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2588))->mThreadLocal=((struct sType* )come_null_checker(type_69, "06type.nc", 2588))->mThreadLocal||thread_local;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2589))->mThread=((struct sType* )come_null_checker(type_69, "06type.nc", 2589))->mThread||thread_;
        __dec_obj185=((struct sType* )come_null_checker(type_69, "06type.nc", 2590))->mAlignas,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2590))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2591))->mAlignasDouble=alignas_double;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2592))->mRegister=register_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2593))->mUnsigned=((struct sType* )come_null_checker(type_69, "06type.nc", 2593))->mUnsigned||unsigned_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2594))->mNoreturn=((struct sType* )come_null_checker(type_69, "06type.nc", 2594))->mNoreturn||noreturn_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2595))->mVolatile=volatile_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2596))->mUniq=((struct sType* )come_null_checker(type_69, "06type.nc", 2596))->mUniq||uniq_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2597))->mStatic=(((struct sType* )come_null_checker(type_69, "06type.nc", 2597))->mStatic||static_)&&!((struct sType* )come_null_checker(type_69, "06type.nc", 2597))->mUniq;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2598))->mExtern=((struct sType* )come_null_checker(type_69, "06type.nc", 2598))->mExtern||extern_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2599))->mInline=((struct sType* )come_null_checker(type_69, "06type.nc", 2599))->mInline||inline_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2600))->mRestrict=((struct sType* )come_null_checker(type_69, "06type.nc", 2600))->mRestrict||restrict_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2601))->mLongLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2601))->mLongLong||long_long;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2602))->mLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2602))->mLong||long_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2603))->mShort=((struct sType* )come_null_checker(type_69, "06type.nc", 2603))->mShort||short_;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2604))->mPointerNum+=pointer_num;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2605))->mHeap=((struct sType* )come_null_checker(type_69, "06type.nc", 2605))->mHeap||heap;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2606))->mChannel=((struct sType* )come_null_checker(type_69, "06type.nc", 2606))->mChannel||channel;
        __dec_obj186=((struct sType* )come_null_checker(type_69, "06type.nc", 2607))->mTupleName,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2607))->mTupleName=(char* )come_increment_ref_count(tuple_name);
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2608))->mDefferRightValue=((struct sType* )come_null_checker(type_69, "06type.nc", 2608))->mDefferRightValue||deffer_;
        if(string_operator_not_equals(((char* )come_null_checker(pointer_attribute, "06type.nc", 2609)),"")) {
            if(((struct sType* )come_null_checker(type_69, "06type.nc", 2610))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2610))->mPointerAttribute, "06type.nc", 2610)),"")) {
                __dec_obj187=((struct sType* )come_null_checker(type_69, "06type.nc", 2611))->mPointerAttribute,
                ((struct sType* )come_null_checker(type_69, "06type.nc", 2611))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attribute);
                __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj188=((struct sType* )come_null_checker(type_69, "06type.nc", 2614))->mPointerAttribute,
                ((struct sType* )come_null_checker(type_69, "06type.nc", 2614))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2614))->mPointerAttribute, "06type.nc", 2614))," "))), "06type.nc", 2614)),pointer_attribute));
                __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2618))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2618))->p==95) {
            __dec_obj189=var_name_70,
            var_name_70=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj190=var_name_70,
            var_name_70=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2625))->p==41) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2626))->p++;
            skip_spaces_and_lf(info);
            paren_num--;
        }
        array=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 2630, "struct list$1sNode$ph*"))), "06type.nc", 2630)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2631))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2632))->p++;
            skip_spaces_and_lf(info);
            node_92=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(array, "06type.nc", 2637)),(struct sNode*)come_increment_ref_count(node_92));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2639))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2640))->p++;
                skip_spaces_and_lf(info);
            }
            ((node_92) ? node_92 = come_decrement_ref_count(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        if(paren_num>0&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2644))->p==41) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2645))->p++;
            skip_spaces_and_lf(info);
            __dec_obj191=((struct sType* )come_null_checker(type_69, "06type.nc", 2648))->mVarNameArrayNum,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2648))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            __current_stack1__.type_name = &type_name;
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
            __current_stack1__.attribute_before = &attribute_before;
            __current_stack1__.alignas_ = &alignas_;
            __current_stack1__.alignas_double = &alignas_double;
            __current_stack1__.union_attribute = &union_attribute;
            __current_stack1__.struct_define_parsed = &struct_define_parsed;
            __current_stack1__.anonymous_type = &anonymous_type;
            __current_stack1__.anonymous_name = &anonymous_name;
            __current_stack1__.atomic_ = &atomic_;
            __current_stack1__.thread_local = &thread_local;
            __current_stack1__.thread_ = &thread_;
            __current_stack1__.attribute_68 = &attribute_68;
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
            __current_stack1__.type_69 = &type_69;
            __current_stack1__.var_name_70 = &var_name_70;
            __current_stack1__.function_pointer_flag = &function_pointer_flag;
            __current_stack1__.pointer_to_array_flag = &pointer_to_array_flag;
            __current_stack1__.var_name_between_brace = &var_name_between_brace;
            })            ,            list$1sNode$ph_each(((struct list$1sNode$ph*)come_null_checker(array, "06type.nc", 2654)),&__current_stack1__,(void*)method_block1_06typenc);
        }
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2656))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2657))->p++;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2660))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2661))->p++;
                skip_spaces_and_lf(info);
                ((struct sType* )come_null_checker(type_69, "06type.nc", 2663))->mArrayPointerType=(_Bool)1;
                break;
            }
            node_93=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2669))->mArrayNum, "06type.nc", 2669)),(struct sNode*)come_increment_ref_count(node_93));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2671))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2672))->p++;
                skip_spaces_and_lf(info);
            }
            ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2677))->mArrayPointerNum=array_pointer_num;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2678))->mPointerParen=pointer_paren;
        come_call_finalizer(list$1sNode$ph$p_finalize, array, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(function_pointer_flag) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2681))->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_attribute=(char*)come_increment_ref_count(xsprintf(""));
        function_pointer_num=0;
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2688))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 2688))->p==94) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2689))->p++;
            skip_spaces_and_lf(info);
            pointer_attr_94=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(string_operator_not_equals(((char* )come_null_checker(pointer_attr_94, "06type.nc", 2692)),"")) {
                if(string_operator_not_equals(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 2693)),"")) {
                    __dec_obj192=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 2694))," "))), "06type.nc", 2694)),pointer_attr_94));
                    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    __dec_obj193=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr_94);
                    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            function_pointer_num++;
            (pointer_attr_94 = come_decrement_ref_count(pointer_attr_94, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        pointer_attr2=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
        if(string_operator_not_equals(((char* )come_null_checker(pointer_attr2, "06type.nc", 2704)),"")) {
            if(string_operator_not_equals(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 2705)),"")) {
                __dec_obj194=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 2706))," "))), "06type.nc", 2706)),pointer_attr2));
                __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                __dec_obj195=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr2);
                __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
        if(({(_conditional_value_X3=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2714))->types, "06type.nc", 2714)), "06type.nc", 2714)),type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X3;})) {
            __dec_obj196=result_type_95,
            result_type_95=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2715))->types, "06type.nc", 2715)), "06type.nc", 2715)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj196,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2716))->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2716))->classes, "06type.nc", 2716)), "06type.nc", 2716)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type_95, "06type.nc", 2716))->mClass, "06type.nc", 2716))->mName)));
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2718))->generics_type_names, "06type.nc", 2718)),type_name,(_Bool)0)) {
            for(i_96=0;i_96<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2719))->generics_type_names, "06type.nc", 2719)));i_96++){
                if(({(_conditional_value_X4=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2720))->generics_type_names, "06type.nc", 2720)), "06type.nc", 2720)),i_96))), "06type.nc", 2720)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X4;})) {
                    __dec_obj197=result_type_95,
                    result_type_95=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2721, "struct sType* "))), "06type.nc", 2721))),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_96)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2725))->method_generics_type_names, "06type.nc", 2725)),type_name,(_Bool)0)) {
            for(i_97=0;i_97<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2726))->method_generics_type_names, "06type.nc", 2726)));i_97++){
                if(({(_conditional_value_X5=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2727))->method_generics_type_names, "06type.nc", 2727)), "06type.nc", 2727)),i_97))), "06type.nc", 2727)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X5;})) {
                    __dec_obj198=result_type_95,
                    result_type_95=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2728, "struct sType* "))), "06type.nc", 2728))),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_97)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj198,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else {
            __dec_obj199=result_type_95,
            result_type_95=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2733))->types, "06type.nc", 2733)), "06type.nc", 2733)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(result_type_95==((void*)0)) {
                __dec_obj200=result_type_95,
                result_type_95=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2736, "struct sType* "))), "06type.nc", 2736))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2740))->mConstant=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2740))->mConstant||constant;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2741))->mComplex=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2741))->mComplex||complex_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2742))->mAtomic=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2742))->mAtomic||atomic_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2743))->mThreadLocal=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2743))->mThreadLocal||thread_local;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2744))->mThread=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2744))->mThread||thread_;
        __dec_obj201=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2745))->mAlignas,
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2745))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2746))->mAlignasDouble=alignas_double;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2747))->mRegister=register_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2748))->mUnsigned=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2748))->mUnsigned||unsigned_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2749))->mNoreturn=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2749))->mNoreturn||noreturn_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2750))->mVolatile=volatile_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2751))->mUniq=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2751))->mUniq||uniq_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2752))->mStatic=(((struct sType* )come_null_checker(result_type_95, "06type.nc", 2752))->mStatic||static_)&&!((struct sType* )come_null_checker(result_type_95, "06type.nc", 2752))->mUniq;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2753))->mExtern=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2753))->mExtern||extern_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2754))->mInline=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2754))->mInline||inline_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2755))->mRestrict=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2755))->mRestrict||restrict_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2756))->mLongLong=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2756))->mLongLong||long_long;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2757))->mLong=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2757))->mLong||long_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2758))->mShort=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2758))->mShort||short_;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2759))->mPointerNum+=pointer_num;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2760))->mHeap=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2760))->mHeap||heap;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2761))->mChannel=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2761))->mChannel||channel;
        ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2762))->mDefferRightValue=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2762))->mDefferRightValue||deffer_;
        if(string_operator_not_equals(((char* )come_null_checker(pointer_attribute, "06type.nc", 2763)),"")) {
            if(((struct sType* )come_null_checker(result_type_95, "06type.nc", 2764))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(result_type_95, "06type.nc", 2764))->mPointerAttribute, "06type.nc", 2764)),"")) {
                __dec_obj202=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2765))->mPointerAttribute,
                ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2765))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attribute);
                __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj203=((struct sType* )come_null_checker(result_type_95, "06type.nc", 2768))->mPointerAttribute,
                ((struct sType* )come_null_checker(result_type_95, "06type.nc", 2768))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(result_type_95, "06type.nc", 2768))->mPointerAttribute, "06type.nc", 2768))," "))), "06type.nc", 2768)),pointer_attribute));
                __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        paren_flag=(_Bool)0;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2773))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2774))->p++;
            skip_spaces_and_lf(info);
            paren_flag=(_Bool)1;
        }
        array_pointer=0;
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2780))->p==42) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2781))->p++;
            skip_spaces_and_lf(info);
            array_pointer++;
        }
        if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 2786))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2786))->p==95) {
            __dec_obj204=var_name_70,
            var_name_70=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0);
            if(!paren_flag&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2788))->p==40) {
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2789, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(result_type_95),(char* )come_increment_ref_count(var_name_70),(_Bool)0))));
                (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            static int num_anonymous_var_name=0;
            num_anonymous_var_name++;
            __dec_obj205=var_name_70,
            var_name_70=(char* )come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name));
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj206=type_69,
        type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2798, "struct sType* "))), "06type.nc", 2798))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj206,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2799))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2800))->p++;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2803))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2804))->p++;
                skip_spaces_and_lf(info);
                ((struct sType* )come_null_checker(type_69, "06type.nc", 2807))->mArrayPointerType=(_Bool)1;
                break;
            }
            else {
                node_98=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2813))->mArrayNum, "06type.nc", 2813)),(struct sNode*)come_increment_ref_count(node_98));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2815))->p==93) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2816))->p++;
                    skip_spaces_and_lf(info);
                }
                ((node_98) ? node_98 = come_decrement_ref_count(node_98, ((struct sNode*)node_98)->finalize, ((struct sNode*)node_98)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        if(paren_flag&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2822))->p==41) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2823))->p++;
            skip_spaces_and_lf(info);
        }
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2827))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2828))->p++;
            skip_spaces_and_lf(info);
            node_99=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2833))->mArrayNum, "06type.nc", 2833)),(struct sNode*)come_increment_ref_count(node_99));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2835))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2836))->p++;
                skip_spaces_and_lf(info);
            }
            ((node_99) ? node_99 = come_decrement_ref_count(node_99, ((struct sNode*)node_99)->finalize, ((struct sNode*)node_99)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        expected_next_character(41,info);
        multiple_assign_var8=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types_100=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var8->v1);
        param_names_101=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var8->v2);
        param_default_parametors_102=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var8->v3);
        var_args_103=multiple_assign_var8->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj207=((struct sType* )come_null_checker(type_69, "06type.nc", 2844))->mResultType,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2844))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type_95));
        come_call_finalizer(sType_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj208=((struct sType* )come_null_checker(type_69, "06type.nc", 2845))->mParamTypes,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2845))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_100);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj209=((struct sType* )come_null_checker(type_69, "06type.nc", 2846))->mParamNames,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2846))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_101);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj209,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2847))->mVarArgs=var_args_103;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2848))->mExtern=extern_;
        __dec_obj210=((struct sType* )come_null_checker(type_69, "06type.nc", 2849))->mPointerAttribute,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2849))->mPointerAttribute=(char* )come_increment_ref_count(function_pointer_attribute);
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2851))->mFunctionPointerNum=function_pointer_num;
        ((struct sType* )come_null_checker(type_69, "06type.nc", 2852))->mArrayPointerNum=array_pointer;
        (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(({(_conditional_value_X6=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2855))->types, "06type.nc", 2855)), "06type.nc", 2855)),type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X6;})) {
            __dec_obj211=type_69,
            type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2856))->types, "06type.nc", 2856)), "06type.nc", 2856)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj211,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2857))->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2857))->classes, "06type.nc", 2857)), "06type.nc", 2857)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2857))->mClass, "06type.nc", 2857))->mName)));
            t=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2859))->typedef_definition, "06type.nc", 2859)), "06type.nc", 2859)),type_name)));
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2861))->mOriginalTypePointerNum=pointer_num;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2862))->mOriginalTypePointerHeap=heap;
            if(((struct sType* )come_null_checker(type_69, "06type.nc", 2863))->mTypedef||t) {
                type_=(struct sType* )come_increment_ref_count(sType_clone(type_69));
                __dec_obj212=((struct sType* )come_null_checker(type_, "06type.nc", 2865))->mAttribute,
                ((struct sType* )come_null_checker(type_, "06type.nc", 2865))->mAttribute=(char*)come_increment_ref_count(xsprintf(""));
                __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj213=((struct sType* )come_null_checker(type_69, "06type.nc", 2866))->mTypedefOriginalType,
                ((struct sType* )come_null_checker(type_69, "06type.nc", 2866))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(type_));
                come_call_finalizer(sType_finalize, __dec_obj213,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __dec_obj214=((struct sType* )come_null_checker(type_69, "06type.nc", 2869))->mAttribute,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2869))->mAttribute=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj215=((struct sType* )come_null_checker(type_69, "06type.nc", 2870))->mVarAttribute,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2870))->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2872))->mConstant=((struct sType* )come_null_checker(type_69, "06type.nc", 2872))->mConstant||constant;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2873))->mComplex=((struct sType* )come_null_checker(type_69, "06type.nc", 2873))->mComplex||complex_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2874))->mAtomic=((struct sType* )come_null_checker(type_69, "06type.nc", 2874))->mAtomic||atomic_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2875))->mThreadLocal=((struct sType* )come_null_checker(type_69, "06type.nc", 2875))->mThreadLocal||thread_local;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2876))->mThread=((struct sType* )come_null_checker(type_69, "06type.nc", 2876))->mThread||thread_;
            __dec_obj216=((struct sType* )come_null_checker(type_69, "06type.nc", 2877))->mAlignas,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2877))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj216 ? __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2878))->mAlignasDouble=alignas_double;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2879))->mRegister=register_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2880))->mUnsigned=((struct sType* )come_null_checker(type_69, "06type.nc", 2880))->mUnsigned||unsigned_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2881))->mNoreturn=((struct sType* )come_null_checker(type_69, "06type.nc", 2881))->mNoreturn||noreturn_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2882))->mVolatile=volatile_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2883))->mUniq=((struct sType* )come_null_checker(type_69, "06type.nc", 2883))->mUniq||uniq_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2884))->mStatic=(((struct sType* )come_null_checker(type_69, "06type.nc", 2884))->mStatic||static_)&&!((struct sType* )come_null_checker(type_69, "06type.nc", 2884))->mUniq;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2885))->mExtern=((struct sType* )come_null_checker(type_69, "06type.nc", 2885))->mExtern||extern_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2886))->mInline=((struct sType* )come_null_checker(type_69, "06type.nc", 2886))->mInline||inline_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2887))->mRestrict=((struct sType* )come_null_checker(type_69, "06type.nc", 2887))->mRestrict||restrict_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2888))->mLongLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2888))->mLongLong||long_long;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2889))->mLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2889))->mLong||long_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2890))->mShort=((struct sType* )come_null_checker(type_69, "06type.nc", 2890))->mShort||short_;
            if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2891))->mClass, "06type.nc", 2891))->mName, "06type.nc", 2891)),"lambda")||list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2891))->mArrayNum, "06type.nc", 2891)))>0) {
                ((struct sType* )come_null_checker(type_69, "06type.nc", 2892))->mArrayPointerNum+=pointer_num;
            }
            else {
                ((struct sType* )come_null_checker(type_69, "06type.nc", 2895))->mPointerNum+=pointer_num;
            }
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2897))->mHeap=((struct sType* )come_null_checker(type_69, "06type.nc", 2897))->mHeap||heap;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2898))->mChannel=((struct sType* )come_null_checker(type_69, "06type.nc", 2898))->mChannel||channel;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2899))->mDefferRightValue=((struct sType* )come_null_checker(type_69, "06type.nc", 2899))->mDefferRightValue||deffer_;
            __dec_obj217=((struct sType* )come_null_checker(type_69, "06type.nc", 2900))->mTupleName,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2900))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj218=type_69,
            type_69=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_69,info));
            come_call_finalizer(sType_finalize, __dec_obj218,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2904))->generics_type_names, "06type.nc", 2904)),type_name,(_Bool)0)) {
            for(i_104=0;i_104<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2905))->generics_type_names, "06type.nc", 2905)));i_104++){
                if(({(_conditional_value_X7=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2906))->generics_type_names, "06type.nc", 2906)), "06type.nc", 2906)),i_104))), "06type.nc", 2906)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X7;})) {
                    __dec_obj219=type_69,
                    type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2907, "struct sType* "))), "06type.nc", 2907))),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_104)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj219,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2911))->mConstant=((struct sType* )come_null_checker(type_69, "06type.nc", 2911))->mConstant||constant;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2912))->mComplex=((struct sType* )come_null_checker(type_69, "06type.nc", 2912))->mComplex||complex_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2913))->mAtomic=((struct sType* )come_null_checker(type_69, "06type.nc", 2913))->mAtomic||atomic_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2914))->mThreadLocal=((struct sType* )come_null_checker(type_69, "06type.nc", 2914))->mThreadLocal||thread_local;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2915))->mThread=((struct sType* )come_null_checker(type_69, "06type.nc", 2915))->mThread||thread_;
            __dec_obj220=((struct sType* )come_null_checker(type_69, "06type.nc", 2916))->mAlignas,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2916))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj220 ? __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2917))->mAlignasDouble=alignas_double;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2918))->mRegister=register_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2919))->mUnsigned=((struct sType* )come_null_checker(type_69, "06type.nc", 2919))->mUnsigned||unsigned_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2920))->mNoreturn=((struct sType* )come_null_checker(type_69, "06type.nc", 2920))->mNoreturn||noreturn_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2921))->mVolatile=volatile_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2922))->mUniq=((struct sType* )come_null_checker(type_69, "06type.nc", 2922))->mUniq||uniq_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2923))->mStatic=(((struct sType* )come_null_checker(type_69, "06type.nc", 2923))->mStatic||static_)&&!((struct sType* )come_null_checker(type_69, "06type.nc", 2923))->mUniq;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2924))->mExtern=((struct sType* )come_null_checker(type_69, "06type.nc", 2924))->mExtern||extern_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2925))->mInline=((struct sType* )come_null_checker(type_69, "06type.nc", 2925))->mInline||inline_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2926))->mRestrict=((struct sType* )come_null_checker(type_69, "06type.nc", 2926))->mRestrict||restrict_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2927))->mLongLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2927))->mLongLong||long_long;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2928))->mLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2928))->mLong||long_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2929))->mShort=((struct sType* )come_null_checker(type_69, "06type.nc", 2929))->mShort||short_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2930))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2931))->mHeap=((struct sType* )come_null_checker(type_69, "06type.nc", 2931))->mHeap||heap;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2932))->mChannel=((struct sType* )come_null_checker(type_69, "06type.nc", 2932))->mChannel||channel;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2933))->mDefferRightValue=((struct sType* )come_null_checker(type_69, "06type.nc", 2933))->mDefferRightValue||deffer_;
            __dec_obj221=((struct sType* )come_null_checker(type_69, "06type.nc", 2934))->mTupleName,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2934))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj222=type_69,
            type_69=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_69,info));
            come_call_finalizer(sType_finalize, __dec_obj222,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2938))->method_generics_type_names, "06type.nc", 2938)),type_name,(_Bool)0)) {
            for(i_105=0;i_105<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2939))->method_generics_type_names, "06type.nc", 2939)));i_105++){
                if(({(_conditional_value_X8=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2940))->method_generics_type_names, "06type.nc", 2940)), "06type.nc", 2940)),i_105))), "06type.nc", 2940)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X8;})) {
                    __dec_obj223=type_69,
                    type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2941, "struct sType* "))), "06type.nc", 2941))),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_105)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj223,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2945))->mConstant=((struct sType* )come_null_checker(type_69, "06type.nc", 2945))->mConstant||constant;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2946))->mComplex=((struct sType* )come_null_checker(type_69, "06type.nc", 2946))->mComplex||complex_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2947))->mAtomic=((struct sType* )come_null_checker(type_69, "06type.nc", 2947))->mAtomic||atomic_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2948))->mThreadLocal=((struct sType* )come_null_checker(type_69, "06type.nc", 2948))->mThreadLocal||thread_local;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2949))->mThread=((struct sType* )come_null_checker(type_69, "06type.nc", 2949))->mThread||thread_;
            __dec_obj224=((struct sType* )come_null_checker(type_69, "06type.nc", 2950))->mAlignas,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2950))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2951))->mAlignasDouble=alignas_double;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2952))->mRegister=register_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2953))->mUnsigned=((struct sType* )come_null_checker(type_69, "06type.nc", 2953))->mUnsigned||unsigned_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2954))->mNoreturn=((struct sType* )come_null_checker(type_69, "06type.nc", 2954))->mNoreturn||noreturn_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2955))->mVolatile=volatile_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2956))->mUniq=((struct sType* )come_null_checker(type_69, "06type.nc", 2956))->mUniq||uniq_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2957))->mStatic=(((struct sType* )come_null_checker(type_69, "06type.nc", 2957))->mStatic||static_)&&!((struct sType* )come_null_checker(type_69, "06type.nc", 2957))->mUniq;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2958))->mExtern=((struct sType* )come_null_checker(type_69, "06type.nc", 2958))->mExtern||extern_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2959))->mInline=((struct sType* )come_null_checker(type_69, "06type.nc", 2959))->mInline||inline_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2960))->mRestrict=((struct sType* )come_null_checker(type_69, "06type.nc", 2960))->mRestrict||restrict_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2961))->mLongLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2961))->mLongLong||long_long;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2962))->mLong=((struct sType* )come_null_checker(type_69, "06type.nc", 2962))->mLong||long_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2963))->mShort=((struct sType* )come_null_checker(type_69, "06type.nc", 2963))->mShort||short_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2964))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2965))->mHeap=((struct sType* )come_null_checker(type_69, "06type.nc", 2965))->mHeap||heap;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2966))->mChannel=((struct sType* )come_null_checker(type_69, "06type.nc", 2966))->mChannel||channel;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2967))->mDefferRightValue=((struct sType* )come_null_checker(type_69, "06type.nc", 2967))->mDefferRightValue||deffer_;
            __dec_obj225=((struct sType* )come_null_checker(type_69, "06type.nc", 2968))->mTupleName,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 2968))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj226=type_69,
            type_69=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_69,info));
            come_call_finalizer(sType_finalize, __dec_obj226,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2972))->p==60) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2973))->p++;
            skip_spaces_and_lf(info);
            if(({(_conditional_value_X9=(((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2976))->generics_classes, "06type.nc", 2976)), "06type.nc", 2976)),((char* )(__right_value1=__builtin_string(type_name))))))==((void*)0)));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X9;})) {
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2978, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            __dec_obj227=type_69,
            type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2983))->types, "06type.nc", 2983)), "06type.nc", 2983)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj227,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_69==((void*)0)) {
                __dec_obj228=type_69,
                type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2986, "struct sType* "))), "06type.nc", 2986))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj228,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            while((_Bool)1) {
                multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1);
                var_name_106=(char* )come_increment_ref_count(multiple_assign_var9->v2);
                err_107=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err_107) {
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2993, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_106 = come_decrement_ref_count(var_name_106, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 2996))->mGenericsTypes, "06type.nc", 2996)),(struct sType* )come_increment_ref_count(generics_type));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2998))->p==44) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2999))->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3002))->p==62) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 3003))->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_106 = come_decrement_ref_count(var_name_106, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",*((struct sInfo* )come_null_checker(info, "06type.nc", 3009))->p,*(((struct sInfo* )come_null_checker(info, "06type.nc", 3009))->p+1),*(((struct sInfo* )come_null_checker(info, "06type.nc", 3009))->p+2));
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3010, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_106 = come_decrement_ref_count(var_name_106, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_106 = come_decrement_ref_count(var_name_106, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(is_contained_generics_class(type_69,info)) {
                __dec_obj229=type_69,
                type_69=(struct sType* )come_increment_ref_count(solve_generics(type_69,((struct sInfo* )come_null_checker(info, "06type.nc", 3015))->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj229,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!output_generics_struct(type_69,type_69,info)) {
                    new_name=(char* )come_increment_ref_count(create_generics_name(type_69,info));
                    printf("%s %d: output generics is failed(%s)\n",((struct sInfo* )come_null_checker(info, "06type.nc", 3021))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 3021))->sline,new_name);
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3026))->mConstant=((struct sType* )come_null_checker(type_69, "06type.nc", 3026))->mConstant||constant;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3027))->mComplex=((struct sType* )come_null_checker(type_69, "06type.nc", 3027))->mComplex||complex_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3028))->mAtomic=((struct sType* )come_null_checker(type_69, "06type.nc", 3028))->mAtomic||atomic_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3029))->mThreadLocal=((struct sType* )come_null_checker(type_69, "06type.nc", 3029))->mThreadLocal||thread_local;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3030))->mThread=((struct sType* )come_null_checker(type_69, "06type.nc", 3030))->mThread||thread_;
            __dec_obj230=((struct sType* )come_null_checker(type_69, "06type.nc", 3031))->mAlignas,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3031))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3032))->mAlignasDouble=alignas_double;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3033))->mRegister=register_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3034))->mUnsigned=((struct sType* )come_null_checker(type_69, "06type.nc", 3034))->mUnsigned||unsigned_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3035))->mNoreturn=((struct sType* )come_null_checker(type_69, "06type.nc", 3035))->mNoreturn||noreturn_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3036))->mVolatile=volatile_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3037))->mUniq=((struct sType* )come_null_checker(type_69, "06type.nc", 3037))->mUniq||uniq_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3038))->mStatic=(((struct sType* )come_null_checker(type_69, "06type.nc", 3038))->mStatic||static_)&&!((struct sType* )come_null_checker(type_69, "06type.nc", 3038))->mUniq;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3039))->mExtern=((struct sType* )come_null_checker(type_69, "06type.nc", 3039))->mExtern||extern_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3040))->mInline=((struct sType* )come_null_checker(type_69, "06type.nc", 3040))->mInline||inline_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3041))->mRestrict=((struct sType* )come_null_checker(type_69, "06type.nc", 3041))->mRestrict||restrict_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3042))->mLongLong=((struct sType* )come_null_checker(type_69, "06type.nc", 3042))->mLongLong||long_long;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3043))->mLong=((struct sType* )come_null_checker(type_69, "06type.nc", 3043))->mLong||long_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3044))->mShort=((struct sType* )come_null_checker(type_69, "06type.nc", 3044))->mShort||short_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3045))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3046))->mHeap=((struct sType* )come_null_checker(type_69, "06type.nc", 3046))->mHeap||heap;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3047))->mChannel=((struct sType* )come_null_checker(type_69, "06type.nc", 3047))->mChannel||channel;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3048))->mDefferRightValue=((struct sType* )come_null_checker(type_69, "06type.nc", 3048))->mDefferRightValue||deffer_;
            __dec_obj231=((struct sType* )come_null_checker(type_69, "06type.nc", 3049))->mTupleName,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3049))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj232=type_name,
            type_name=(char* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3051))->mClass, "06type.nc", 3051))->mName);
            __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj233=type_69,
            type_69=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_69,info));
            come_call_finalizer(sType_finalize, __dec_obj233,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(struct_) {
                klass_108=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3057))->classes, "06type.nc", 3057)), "06type.nc", 3057)),type_name)));
                if(klass_108==((void*)0)&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3059))->p!=60) {
                    map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3060))->classes, "06type.nc", 3060)),(char* )come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value1=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 3060, "struct sClass* "))), "06type.nc", 3060))),((char* )(__right_value2=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info)),(_Bool)0);
                    come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            if(union_) {
                klass_118=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3064))->classes, "06type.nc", 3064)), "06type.nc", 3064)),type_name)));
                if(klass_118==((void*)0)&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3066))->p!=60) {
                    map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3067))->classes, "06type.nc", 3067)),(char* )come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value1=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 3067, "struct sClass* "))), "06type.nc", 3067))),((char* )(__right_value2=__builtin_string(type_name))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info)),(_Bool)0);
                    come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            __dec_obj234=type_69,
            type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3073))->types, "06type.nc", 3073)), "06type.nc", 3073)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj234,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_69==((void*)0)) {
                __dec_obj235=type_69,
                type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3076, "struct sType* "))), "06type.nc", 3076))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj235,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3079))->mConstant=((struct sType* )come_null_checker(type_69, "06type.nc", 3079))->mConstant||constant;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3080))->mComplex=((struct sType* )come_null_checker(type_69, "06type.nc", 3080))->mComplex||complex_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3081))->mAtomic=((struct sType* )come_null_checker(type_69, "06type.nc", 3081))->mAtomic||atomic_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3082))->mThreadLocal=((struct sType* )come_null_checker(type_69, "06type.nc", 3082))->mThreadLocal||thread_local;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3083))->mThread=((struct sType* )come_null_checker(type_69, "06type.nc", 3083))->mThread||thread_;
            __dec_obj236=((struct sType* )come_null_checker(type_69, "06type.nc", 3084))->mAlignas,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3084))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj236 ? __dec_obj236 = come_decrement_ref_count(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3085))->mAlignasDouble=alignas_double;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3086))->mRegister=register_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3087))->mUnsigned=((struct sType* )come_null_checker(type_69, "06type.nc", 3087))->mUnsigned||unsigned_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3088))->mNoreturn=((struct sType* )come_null_checker(type_69, "06type.nc", 3088))->mNoreturn||noreturn_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3089))->mVolatile=volatile_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3090))->mUniq=((struct sType* )come_null_checker(type_69, "06type.nc", 3090))->mUniq||uniq_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3091))->mStatic=(((struct sType* )come_null_checker(type_69, "06type.nc", 3091))->mStatic||static_)&&!((struct sType* )come_null_checker(type_69, "06type.nc", 3091))->mUniq;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3092))->mExtern=((struct sType* )come_null_checker(type_69, "06type.nc", 3092))->mExtern||extern_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3093))->mInline=((struct sType* )come_null_checker(type_69, "06type.nc", 3093))->mInline||inline_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3094))->mRestrict=((struct sType* )come_null_checker(type_69, "06type.nc", 3094))->mRestrict||restrict_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3095))->mLongLong=((struct sType* )come_null_checker(type_69, "06type.nc", 3095))->mLongLong||long_long;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3096))->mLong=((struct sType* )come_null_checker(type_69, "06type.nc", 3096))->mLong||long_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3097))->mShort=((struct sType* )come_null_checker(type_69, "06type.nc", 3097))->mShort||short_;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3098))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3099))->mHeap=((struct sType* )come_null_checker(type_69, "06type.nc", 3099))->mHeap||heap;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3100))->mChannel=((struct sType* )come_null_checker(type_69, "06type.nc", 3100))->mChannel||channel;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3101))->mDefferRightValue=((struct sType* )come_null_checker(type_69, "06type.nc", 3101))->mDefferRightValue||deffer_;
            __dec_obj237=((struct sType* )come_null_checker(type_69, "06type.nc", 3102))->mTupleName,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3102))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(string_operator_not_equals(((char* )come_null_checker(pointer_attribute, "06type.nc", 3105)),"")) {
            if(((struct sType* )come_null_checker(type_69, "06type.nc", 3106))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3106))->mPointerAttribute, "06type.nc", 3106)),"")) {
                __dec_obj238=((struct sType* )come_null_checker(type_69, "06type.nc", 3107))->mPointerAttribute,
                ((struct sType* )come_null_checker(type_69, "06type.nc", 3107))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attribute);
                __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                __dec_obj239=((struct sType* )come_null_checker(type_69, "06type.nc", 3110))->mPointerAttribute,
                ((struct sType* )come_null_checker(type_69, "06type.nc", 3110))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3110))->mPointerAttribute, "06type.nc", 3110))," "))), "06type.nc", 3110)),pointer_attribute));
                __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        __dec_obj240=type_69,
        type_69=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_69,info));
        come_call_finalizer(sType_finalize, __dec_obj240,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(parse_multiple_type&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3116))->p==44&&!((struct sInfo* )come_null_checker(info, "06type.nc", 3116))->in_offsetof) {
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 3117, "struct list$1sType$ph*"))), "06type.nc", 3117)))));
            come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(types, "06type.nc", 3119)),(struct sType* )come_increment_ref_count(sType_clone(type_69)));
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3121))->p==44) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3122))->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1);
                name_119=(char* )come_increment_ref_count(multiple_assign_var10->v2);
                err_120=multiple_assign_var10->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err_120) {
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3128, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_119 = come_decrement_ref_count(name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(types, "06type.nc", 3131)),(struct sType* )come_increment_ref_count(sType_clone(type2)));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_119 = come_decrement_ref_count(name_119, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3134))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3135))->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(types, "06type.nc", 3139)));
            __dec_obj241=type_69,
            type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3141, "struct sType* "))), "06type.nc", 3141))),(char* )come_increment_ref_count(xsprintf("tuple%d",num_tuples)),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj241,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3142))->mPointerNum++;
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3143))->mHeap=(_Bool)1;
            for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(types),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 3145)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 3145)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 3145)))){
                list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3146))->mGenericsTypes, "06type.nc", 3146)),(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it))))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __dec_obj242=type_69,
            type_69=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_69,info));
            come_call_finalizer(sType_finalize, __dec_obj242,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(is_contained_generics_class(type_69,info)) {
                __dec_obj243=type_69,
                type_69=(struct sType* )come_increment_ref_count(solve_generics(type_69,((struct sInfo* )come_null_checker(info, "06type.nc", 3153))->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj243,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!output_generics_struct(type_69,type_69,info)) {
                    new_name_121=(char* )come_increment_ref_count(create_generics_name(type_69,info));
                    printf("output generics is failed(%s)\n",new_name_121);
                    exit(9);
                    (new_name_121 = come_decrement_ref_count(new_name_121, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3163))->mMultipleTypes=(_Bool)1;
            __dec_obj244=type_name,
            type_name=(char* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3165))->mClass, "06type.nc", 3165))->mName);
            __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_122=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0));
        if(type_69&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3170))->mClass, "06type.nc", 3170))->mName, "06type.nc", 3170)),"lambda")&&string_operator_not_equals(((char* )come_null_checker(attribute_122, "06type.nc", 3170)),"")) {
            if(((struct sType* )come_null_checker(type_69, "06type.nc", 3171))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3171))->mMiddleAttribute, "06type.nc", 3171)),"")) {
                __dec_obj245=((struct sType* )come_null_checker(type_69, "06type.nc", 3172))->mMiddleAttribute,
                ((struct sType* )come_null_checker(type_69, "06type.nc", 3172))->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3172))->mMiddleAttribute, "06type.nc", 3172))," "))), "06type.nc", 3172)),attribute_122));
                __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                __dec_obj246=((struct sType* )come_null_checker(type_69, "06type.nc", 3175))->mMiddleAttribute,
                ((struct sType* )come_null_checker(type_69, "06type.nc", 3175))->mMiddleAttribute=(char* )come_increment_ref_count(attribute_122);
                __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __dec_obj247=attribute_122,
            attribute_122=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(!parse_variable_name) {
            append_attribute_to_type(type_69,(char* )come_increment_ref_count(attribute_122),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __dec_obj248=var_name_70,
            var_name_70=(char* )come_increment_ref_count(parse_variable_name_fun(type_69,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_122),info));
            __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0, (void*)0);
        }
        (attribute_122 = come_decrement_ref_count(attribute_122, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    array_num_typedef=((void*)0);
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3190))->mArrayNum, "06type.nc", 3190)))>0) {
        __dec_obj249=array_num_typedef,
        array_num_typedef=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(type_69, "06type.nc", 3191))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj249,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3192))->mArrayNum, "06type.nc", 3192)));
    }
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3195))->p==91) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 3196))->p++;
        skip_spaces_and_lf(info);
        array_static=(_Bool)0;
        array_restrict=(_Bool)0;
        while(1) {
            if(parsecmp("static",info)) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3203))->p+=strlen("static");
                skip_spaces_and_lf(info);
                array_static=(_Bool)1;
            }
            else if(parsecmp("restrict",info)) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3209))->p+=strlen("restrict");
                skip_spaces_and_lf(info);
                array_restrict=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3221))->p==93) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3222))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3225))->mArrayPointerType=(_Bool)1;
            break;
        }
        skip_spaces_and_lf(info);
        node_123=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3232))->mArrayNum, "06type.nc", 3232)),(struct sNode*)come_increment_ref_count(node_123));
        list$1int$_push_back(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3233))->mArrayStatic, "06type.nc", 3233)),array_static);
        list$1int$_push_back(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3234))->mArrayRestrict, "06type.nc", 3234)),array_restrict);
        expected_next_character(93,info);
        ((node_123) ? node_123 = come_decrement_ref_count(node_123, ((struct sNode*)node_123)->finalize, ((struct sNode*)node_123)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(array_num_typedef) {
        ({        __current_stack2__.info = &info;
        __current_stack2__.parse_variable_name = &parse_variable_name;
        __current_stack2__.parse_multiple_type = &parse_multiple_type;
        __current_stack2__.in_function_parametor = &in_function_parametor;
        __current_stack2__.head = &head;
        __current_stack2__.head_sline = &head_sline;
        __current_stack2__.type_name = &type_name;
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
        __current_stack2__.attribute_before = &attribute_before;
        __current_stack2__.alignas_ = &alignas_;
        __current_stack2__.alignas_double = &alignas_double;
        __current_stack2__.union_attribute = &union_attribute;
        __current_stack2__.struct_define_parsed = &struct_define_parsed;
        __current_stack2__.anonymous_type = &anonymous_type;
        __current_stack2__.anonymous_name = &anonymous_name;
        __current_stack2__.atomic_ = &atomic_;
        __current_stack2__.thread_local = &thread_local;
        __current_stack2__.thread_ = &thread_;
        __current_stack2__.attribute_68 = &attribute_68;
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
        __current_stack2__.type_69 = &type_69;
        __current_stack2__.var_name_70 = &var_name_70;
        __current_stack2__.function_pointer_flag = &function_pointer_flag;
        __current_stack2__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack2__.var_name_between_brace = &var_name_between_brace;
        __current_stack2__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3240))->mArrayNum, "06type.nc", 3243)),&__current_stack2__,(void*)method_block2_06typenc);
        list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3243))->mArrayNum, "06type.nc", 3243)));
        ({        __current_stack3__.info = &info;
        __current_stack3__.parse_variable_name = &parse_variable_name;
        __current_stack3__.parse_multiple_type = &parse_multiple_type;
        __current_stack3__.in_function_parametor = &in_function_parametor;
        __current_stack3__.head = &head;
        __current_stack3__.head_sline = &head_sline;
        __current_stack3__.type_name = &type_name;
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
        __current_stack3__.attribute_before = &attribute_before;
        __current_stack3__.alignas_ = &alignas_;
        __current_stack3__.alignas_double = &alignas_double;
        __current_stack3__.union_attribute = &union_attribute;
        __current_stack3__.struct_define_parsed = &struct_define_parsed;
        __current_stack3__.anonymous_type = &anonymous_type;
        __current_stack3__.anonymous_name = &anonymous_name;
        __current_stack3__.atomic_ = &atomic_;
        __current_stack3__.thread_local = &thread_local;
        __current_stack3__.thread_ = &thread_;
        __current_stack3__.attribute_68 = &attribute_68;
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
        __current_stack3__.type_69 = &type_69;
        __current_stack3__.var_name_70 = &var_name_70;
        __current_stack3__.function_pointer_flag = &function_pointer_flag;
        __current_stack3__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack3__.var_name_between_brace = &var_name_between_brace;
        __current_stack3__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(((struct list$1sNode$ph*)come_null_checker(array_num_typedef, "06type.nc", 3247)),&__current_stack3__,(void*)method_block3_06typenc);
    }
    multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name_126=(char* )come_increment_ref_count(multiple_assign_var11->v1);
    attribute2=(char* )come_increment_ref_count(multiple_assign_var11->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    append_attribute_to_type(type_69,(char* )come_increment_ref_count(attribute2),parse_variable_name,info);
    __dec_obj250=((struct sType* )come_null_checker(type_69, "06type.nc", 3252))->mAsmName,
    ((struct sType* )come_null_checker(type_69, "06type.nc", 3252))->mAsmName=(char* )come_increment_ref_count(asm_name_126);
    __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0, (void*)0);
    skip_spaces_and_lf(info);
    if(((struct sType* )come_null_checker(type_69, "06type.nc", 3256))->mChannel) {
        type_before=(struct sType* )come_increment_ref_count(sType_clone(type_69));
        __dec_obj251=type_69,
        type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3258, "struct sType* "))), "06type.nc", 3258))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj251,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj252=((struct sType* )come_null_checker(type_69, "06type.nc", 3259))->mArrayNum,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 3259))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2")),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06type.nc", 3259, "struct list$1sNode$ph")),1,__list_values1__)));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj252,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj253=((struct sType* )come_null_checker(type_69, "06type.nc", 3260))->mChannelType,
        ((struct sType* )come_null_checker(type_69, "06type.nc", 3260))->mChannelType=(struct sType* )come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj253,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(type_69, "06type.nc", 3261))->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(type_69&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3264))->mClass, "06type.nc", 3264))->mName, "06type.nc", 3264)),"lambda")&&string_operator_not_equals(((char* )come_null_checker(attribute_68, "06type.nc", 3264)),"")) {
        if(((struct sType* )come_null_checker(type_69, "06type.nc", 3265))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3265))->mMiddleAttribute, "06type.nc", 3265)),"")) {
            __dec_obj254=((struct sType* )come_null_checker(type_69, "06type.nc", 3266))->mMiddleAttribute,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3266))->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type_69, "06type.nc", 3266))->mMiddleAttribute, "06type.nc", 3266))," "))), "06type.nc", 3266)),attribute_68));
            __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj255=((struct sType* )come_null_checker(type_69, "06type.nc", 3269))->mMiddleAttribute,
            ((struct sType* )come_null_checker(type_69, "06type.nc", 3269))->mMiddleAttribute=(char* )come_increment_ref_count(attribute_68);
            __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj256=attribute_68,
        attribute_68=(char*)come_increment_ref_count(xsprintf(""));
        __dec_obj256 = come_decrement_ref_count(__dec_obj256, (void*)0, (void*)0, 0,0, (void*)0);
    }
    append_attribute_to_type(type_69,(char* )come_increment_ref_count(attribute_68),parse_variable_name,info);
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3275, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(type_69),(char* )come_increment_ref_count(var_name_70),(_Bool)1))));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (union_attribute = come_decrement_ref_count(union_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute_68 = come_decrement_ref_count(attribute_68, (void*)0, (void*)0, 0, 0, (void*)0));
    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_typedef, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (asm_name_126 = come_decrement_ref_count(asm_name_126, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    return ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->len;
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_89  ;
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
    memset(&default_value_89,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_89);
    (default_value_89 = come_decrement_ref_count(default_value_89, (void*)0, (void*)0, 0, 1, (void*)0));
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
    char*  default_value_90  ;
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
    memset(&default_value_90,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_90);
    (default_value_90 = come_decrement_ref_count(default_value_90, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1598))->head;
    i=0;
    while(it!=((void*)0)) {
        end_flag=(_Bool)0;
        block(parent,(struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1602))->item),i,&end_flag);
        if(end_flag==(_Bool)1) {
            break;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1607))->next;
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
    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker((*(parent->type_69)), "06type.nc", 2653))->mArrayNum, "06type.nc", 2653)),(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    struct sClass*  default_value_111  ;
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
                memset(&default_value_111,0,sizeof(struct sClass* ));
                ((struct sClass** )come_null_checker(items, "/usr/local/include/neo-c.h", 2690))[n]=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2690)),it,(struct sClass* )come_increment_ref_count(default_value_111),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    char*  result_109  ;
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
    memset(&result_109,0,sizeof(char* ));
    __result_obj__0 = result_109;
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
    char*  result_110  ;
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
    memset(&result_110,0,sizeof(char* ));
    __result_obj__0 = result_110;
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
    struct list_item$1char$ph* it_112;
    int i_113;
    struct list_item$1char$ph* prev_it_114;
    struct list_item$1char$ph* it_115;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_116;
    struct list_item$1char$ph* prev_it_117;
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
        it_112=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1817))->head;
        i_113=0;
        while(it_112!=((void*)0)) {
            if(i_113==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1821))->tail=((struct list_item$1char$ph*)come_null_checker(it_112, "/usr/local/include/neo-c.h", 1821))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1822))->tail, "/usr/local/include/neo-c.h", 1822))->next=((void*)0);
            }
            if(i_113>=head) {
                prev_it_114=it_112;
                it_112=((struct list_item$1char$ph*)come_null_checker(it_112, "/usr/local/include/neo-c.h", 1828))->next;
                i_113++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1833))->len--;
            }
            else {
                it_112=((struct list_item$1char$ph*)come_null_checker(it_112, "/usr/local/include/neo-c.h", 1836))->next;
                i_113++;
            }
        }
    }
    else {
        it_115=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_116=0;
        while(it_115!=((void*)0)) {
            if(i_116==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_115, "/usr/local/include/neo-c.h", 1851))->prev;
            }
            if(i_116==tail) {
                tail_it=it_115;
            }
            if(i_116>=head&&i_116<tail) {
                prev_it_117=it_115;
                it_115=((struct list_item$1char$ph*)come_null_checker(it_115, "/usr/local/include/neo-c.h", 1861))->next;
                i_116++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1866))->len--;
            }
            else {
                it_115=((struct list_item$1char$ph*)come_null_checker(it_115, "/usr/local/include/neo-c.h", 1869))->next;
                i_116++;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1719))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1722))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1726))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1727))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1729))->len=0;
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
    struct list_item$1int$* litem_124;
    struct list_item$1int$* litem_125;
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
        litem_124=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1502, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_124, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1int$*)come_null_checker(litem_124, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_124, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_124;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_124;
    }
    else {
        litem_125=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1512, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_125, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_125, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_125, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_125;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_125;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block2_06typenc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_06typenc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker((*(parent->type_69)), "06type.nc", 3242))->mVarNameArrayNum, "06type.nc", 3242)),(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
}

void method_block3_06typenc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block3_06typenc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker((*(parent->type_69)), "06type.nc", 3246))->mArrayNum, "06type.nc", 3246)),(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sNode$ph* __result_obj__0;
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),(struct sNode*)come_increment_ref_count(((struct sNode**)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]));
    }
    __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void show_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "show_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    puts(((char* )(__right_value0=make_come_type_name_string(type,info))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
}

_Bool is_pointer_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_pointer_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((struct sType* )come_null_checker(type, "06type.nc", 3285))->mPointerNum>0||((struct sType* )come_null_checker(type, "06type.nc", 3285))->mArrayPointerNum>0||((struct sType* )come_null_checker(type, "06type.nc", 3285))->mArrayPointerNum>0;
    neo_current_frame = fr.prev;
}

_Bool is_arithmetic_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_arithmetic_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3290))->mClass, "06type.nc", 3290))->mNumber||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3290))->mClass, "06type.nc", 3290))->mFloat||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3290))->mClass, "06type.nc", 3290))->mEnum;
    neo_current_frame = fr.prev;
}

_Bool is_integer_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_integer_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3295))->mClass, "06type.nc", 3295))->mNumber&&!((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3295))->mClass, "06type.nc", 3295))->mFloat)||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3295))->mClass, "06type.nc", 3295))->mEnum;
    neo_current_frame = fr.prev;
}

_Bool is_null_pointer_constant(struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_null_pointer_constant"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  s  ;
    _Bool __result_obj__0;
    if(come_value==((void*)0)||((struct CVALUE* )come_null_checker(come_value, "06type.nc", 3300))->c_value==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    s=(char* )come_increment_ref_count(__builtin_string(((struct CVALUE* )come_null_checker(come_value, "06type.nc", 3303))->c_value));
    if(string_operator_equals(((char* )come_null_checker(s, "06type.nc", 3304)),"0")||string_operator_equals(((char* )come_null_checker(s, "06type.nc", 3304)),"NULL")||string_operator_equals(((char* )come_null_checker(s, "06type.nc", 3304)),"nullptr")) {
        __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(((char* )come_null_checker(s, "06type.nc", 3307)),"(void*)0",-1)!=-1||string_index(((char* )come_null_checker(s, "06type.nc", 3307)),"((void*)0)",-1)!=-1) {
        __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(((char* )come_null_checker(s, "06type.nc", 3310)),"NULL",-1)!=-1) {
        __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(((char* )come_null_checker(s, "06type.nc", 3313)),"0x0",-1)!=-1) {
        __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (_Bool)0;
    (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool pointer_attr_has_word(struct sType*  type  , const char* word, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_attr_has_word"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  s  ;
    _Bool __result_obj__0;
    if(type==((void*)0)||((struct sType* )come_null_checker(type, "06type.nc", 3321))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3321))->mPointerAttribute, "06type.nc", 3321)),"")) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    s=(char* )come_increment_ref_count(__builtin_string(((struct sType* )come_null_checker(type, "06type.nc", 3324))->mPointerAttribute));
    __result_obj__0 = string_index(((char* )come_null_checker(s, "06type.nc", 3325)),word,-1)!=-1;
    (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
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
    __result_obj__0 = attr==((void*)0)||string_operator_equals(((char* )come_null_checker(attr, "06type.nc", 3345)),"");
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_same_attribute(char*  left_attr  , char*  right_attr  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_same_attribute"; neo_current_frame = &fr;
    _Bool __result_obj__0;
    if(is_empty_attribute((char* )come_increment_ref_count(left_attr),info)&&is_empty_attribute((char* )come_increment_ref_count(right_attr),info)) {
        __result_obj__0 = (_Bool)1;
        (left_attr = come_decrement_ref_count(left_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        (right_attr = come_decrement_ref_count(right_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(is_empty_attribute((char* )come_increment_ref_count(left_attr),info)||is_empty_attribute((char* )come_increment_ref_count(right_attr),info)) {
        __result_obj__0 = (_Bool)0;
        (left_attr = come_decrement_ref_count(left_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        (right_attr = come_decrement_ref_count(right_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = string_operator_equals(((char* )come_null_checker(left_attr, "06type.nc", 3356)),right_attr);
    (left_attr = come_decrement_ref_count(left_attr, (void*)0, (void*)0, 0, 0, (void*)0));
    (right_attr = come_decrement_ref_count(right_attr, (void*)0, (void*)0, 0, 0, (void*)0));
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
    int array_ptr;
    struct list$1sNode$ph* __dec_obj257;
    char*  __dec_obj258  ;
    char*  __dec_obj259  ;
    char*  __dec_obj260  ;
    struct list$1sType$ph* __dec_obj261;
    struct sType*  __dec_obj262  ;
    struct sType*  __dec_obj263  ;
    struct sType*  __result_obj__0  ;
    result=(struct sType* )come_increment_ref_count(sType_clone(type));
    guard=0;
    while(((struct sType* )come_null_checker(result, "06type.nc", 3363))->mTypedefOriginalType&&guard<16) {
        orig=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result, "06type.nc", 3364))->mTypedefOriginalType));
        ptr=((struct sType* )come_null_checker(result, "06type.nc", 3366))->mPointerNum;
        suppress_ptr_restore=((struct sType* )come_null_checker(result, "06type.nc", 3367))->mOriginalLoadVarType!=((void*)0)&&((struct sType* )come_null_checker(result, "06type.nc", 3367))->mPointerNum==0;
        if(!suppress_ptr_restore&&ptr==0&&((struct sType* )come_null_checker(orig, "06type.nc", 3368))->mPointerNum>0) {
            ptr=((struct sType* )come_null_checker(orig, "06type.nc", 3369))->mPointerNum;
        }
        ((struct sType* )come_null_checker(orig, "06type.nc", 3371))->mPointerNum=ptr;
        array_ptr=((struct sType* )come_null_checker(result, "06type.nc", 3373))->mArrayPointerNum;
        if(array_ptr==0&&((struct sType* )come_null_checker(orig, "06type.nc", 3374))->mArrayPointerNum>0) {
            array_ptr=((struct sType* )come_null_checker(orig, "06type.nc", 3375))->mArrayPointerNum;
        }
        ((struct sType* )come_null_checker(orig, "06type.nc", 3377))->mArrayPointerNum=array_ptr;
        if(((struct sType* )come_null_checker(result, "06type.nc", 3379))->mArrayPointerType) {
            ((struct sType* )come_null_checker(orig, "06type.nc", 3380))->mArrayPointerType=(_Bool)1;
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result, "06type.nc", 3382))->mArrayNum, "06type.nc", 3382)))>0) {
            __dec_obj257=((struct sType* )come_null_checker(orig, "06type.nc", 3383))->mArrayNum,
            ((struct sType* )come_null_checker(orig, "06type.nc", 3383))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(result, "06type.nc", 3383))->mArrayNum));
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj257,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        ((struct sType* )come_null_checker(orig, "06type.nc", 3386))->mConstant=((struct sType* )come_null_checker(result, "06type.nc", 3386))->mConstant;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3387))->mVolatile=((struct sType* )come_null_checker(result, "06type.nc", 3387))->mVolatile;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3388))->mRestrict=((struct sType* )come_null_checker(result, "06type.nc", 3388))->mRestrict;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3389))->mUnsigned=((struct sType* )come_null_checker(result, "06type.nc", 3389))->mUnsigned;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3390))->mShort=((struct sType* )come_null_checker(result, "06type.nc", 3390))->mShort;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3391))->mLong=((struct sType* )come_null_checker(result, "06type.nc", 3391))->mLong;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3392))->mLongLong=((struct sType* )come_null_checker(result, "06type.nc", 3392))->mLongLong;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3393))->mComplex=((struct sType* )come_null_checker(result, "06type.nc", 3393))->mComplex;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3394))->mAtomic=((struct sType* )come_null_checker(result, "06type.nc", 3394))->mAtomic;
        __dec_obj258=((struct sType* )come_null_checker(orig, "06type.nc", 3396))->mPointerAttribute,
        ((struct sType* )come_null_checker(orig, "06type.nc", 3396))->mPointerAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "06type.nc", 3396))->mPointerAttribute);
        __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj259=((struct sType* )come_null_checker(orig, "06type.nc", 3397))->mAttribute,
        ((struct sType* )come_null_checker(orig, "06type.nc", 3397))->mAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "06type.nc", 3397))->mAttribute);
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj260=((struct sType* )come_null_checker(orig, "06type.nc", 3398))->mVarAttribute,
        ((struct sType* )come_null_checker(orig, "06type.nc", 3398))->mVarAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "06type.nc", 3398))->mVarAttribute);
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0,0, (void*)0);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(result, "06type.nc", 3400))->mGenericsTypes, "06type.nc", 3400)))>0) {
            __dec_obj261=((struct sType* )come_null_checker(orig, "06type.nc", 3401))->mGenericsTypes,
            ((struct sType* )come_null_checker(orig, "06type.nc", 3401))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(result, "06type.nc", 3401))->mGenericsTypes));
            come_call_finalizer(list$1sType$ph_finalize, __dec_obj261,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(result, "06type.nc", 3403))->mNoSolvedGenericsType) {
            __dec_obj262=((struct sType* )come_null_checker(orig, "06type.nc", 3404))->mNoSolvedGenericsType,
            ((struct sType* )come_null_checker(orig, "06type.nc", 3404))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result, "06type.nc", 3404))->mNoSolvedGenericsType));
            come_call_finalizer(sType_finalize, __dec_obj262,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj263=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(orig));
        come_call_finalizer(sType_finalize, __dec_obj263,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        guard++;
        come_call_finalizer(sType_finalize, orig, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(result);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(klass, "06type.nc", 3421))->mName, "06type.nc", 3421)),((struct sClass* )come_null_checker(parent, "06type.nc", 3421))->mName)) {
            neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        if(((struct sClass* )come_null_checker(klass, "06type.nc", 3424))->mParentClassName) {
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3425))->classes, "06type.nc", 3425)), "06type.nc", 3425)),((struct sClass* )come_null_checker(klass, "06type.nc", 3425))->mParentClassName)));
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
    struct sType*  __dec_obj264  ;
    _Bool use_original_127;
    struct sType*  __dec_obj265  ;
    _Bool __result_obj__0;
    int i;
    struct sType*  left_g  ;
    struct sType*  right_g  ;
    int i_130;
    struct sType*  lparam  ;
    struct sType*  rparam  ;
    if(left_type==((void*)0)||right_type==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type));
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type));
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3443))->mOriginalLoadVarType) {
        use_original=((struct sType* )come_null_checker(left_type2, "06type.nc", 3444))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3445))->mArrayNum, "06type.nc", 3445)))==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3446))->mPointerNum==0;
        if(use_original) {
            __dec_obj264=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(left_type2, "06type.nc", 3448))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj264,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(((struct sType* )come_null_checker(right_type2, "06type.nc", 3451))->mOriginalLoadVarType) {
        use_original_127=((struct sType* )come_null_checker(right_type2, "06type.nc", 3452))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3453))->mArrayNum, "06type.nc", 3453)))==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3454))->mPointerNum==0;
        if(use_original_127) {
            __dec_obj265=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(right_type2, "06type.nc", 3456))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj265,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3460))->mClass, "06type.nc", 3460))->mName, "06type.nc", 3460)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3460))->mClass, "06type.nc", 3460))->mName)) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3464))->mPointerNum!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3464))->mPointerNum) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3467))->mArrayPointerNum!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3467))->mArrayPointerNum) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3470))->mArrayPointerType!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3470))->mArrayPointerType) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3474))->mUnsigned!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3474))->mUnsigned) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3477))->mShort!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3477))->mShort) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3480))->mLong!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3480))->mLong) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3483))->mLongLong!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3483))->mLongLong) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3486))->mComplex!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3486))->mComplex) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3489))->mAtomic!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3489))->mAtomic) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3493))->mGenericsTypes, "06type.nc", 3493)))!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3493))->mGenericsTypes, "06type.nc", 3493)))) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(i=0;i<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3496))->mGenericsTypes, "06type.nc", 3496)));i++){
        left_g=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3497))->mGenericsTypes, "06type.nc", 3497)), "06type.nc", 3497)),i)));
        right_g=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3498))->mGenericsTypes, "06type.nc", 3498)), "06type.nc", 3498)),i)));
        if(!is_same_type_ignoring_qualifier(left_g,right_g,info)) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3504))->mClass, "06type.nc", 3504))->mName, "06type.nc", 3504)),"lambda")) {
        if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3505))->mVarArgs!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3505))->mVarArgs) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3508))->mParamTypes, "06type.nc", 3508)))!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3508))->mParamTypes, "06type.nc", 3508)))) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(!is_same_type_ignoring_qualifier(((struct sType* )come_null_checker(left_type2, "06type.nc", 3511))->mResultType,((struct sType* )come_null_checker(right_type2, "06type.nc", 3511))->mResultType,info)) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        for(i_130=0;i_130<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3514))->mParamTypes, "06type.nc", 3514)));i_130++){
            lparam=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3515))->mParamTypes, "06type.nc", 3515)), "06type.nc", 3515)),i_130)));
            rparam=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3516))->mParamTypes, "06type.nc", 3516)), "06type.nc", 3516)),i_130)));
            if(!is_same_type_ignoring_qualifier(lparam,rparam,info)) {
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3521))->mFunctionPointerNum!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3521))->mFunctionPointerNum) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sType*  default_value_128  ;
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
    memset(&default_value_128,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_128);
    come_call_finalizer(sType_finalize, default_value_128, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    struct sType*  default_value_129  ;
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
    memset(&default_value_129,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_129);
    come_call_finalizer(sType_finalize, default_value_129, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool is_same_base_type_ignoring_qualifier(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_same_base_type_ignoring_qualifier"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  left_type2  ;
    struct sType*  right_type2  ;
    _Bool use_original;
    struct sType*  __dec_obj266  ;
    _Bool use_original_131;
    struct sType*  __dec_obj267  ;
    _Bool __result_obj__0;
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type));
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type));
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3534))->mOriginalLoadVarType) {
        use_original=((struct sType* )come_null_checker(left_type2, "06type.nc", 3535))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3536))->mArrayNum, "06type.nc", 3536)))==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3537))->mPointerNum==0;
        if(use_original) {
            __dec_obj266=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(left_type2, "06type.nc", 3539))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj266,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(((struct sType* )come_null_checker(right_type2, "06type.nc", 3542))->mOriginalLoadVarType) {
        use_original_131=((struct sType* )come_null_checker(right_type2, "06type.nc", 3543))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3544))->mArrayNum, "06type.nc", 3544)))==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3545))->mPointerNum==0;
        if(use_original_131) {
            __dec_obj267=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(right_type2, "06type.nc", 3547))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj267,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3551))->mPointerNum=0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3552))->mArrayPointerNum=0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3553))->mArrayPointerType=(_Bool)0;
    list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3554))->mArrayNum, "06type.nc", 3554)));
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3555))->mConstant=(_Bool)0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3556))->mVolatile=(_Bool)0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3557))->mRestrict=(_Bool)0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3559))->mPointerNum=0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3560))->mArrayPointerNum=0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3561))->mArrayPointerType=(_Bool)0;
    list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3562))->mArrayNum, "06type.nc", 3562)));
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3563))->mConstant=(_Bool)0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3564))->mVolatile=(_Bool)0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3565))->mRestrict=(_Bool)0;
    __result_obj__0 = is_same_type_ignoring_qualifier(left_type2,right_type2,info);
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sType*  __dec_obj268  ;
    struct sType*  right_type2  ;
    _Bool use_original_132;
    struct sType*  tmp_133  ;
    struct sType*  __dec_obj269  ;
    struct sType*  __dec_obj270  ;
    struct sType*  __dec_obj271  ;
    _Bool left_lambda;
    _Bool right_lambda;
    _Bool __result_obj__0;
    _Bool left_ptr;
    _Bool right_ptr;
    _Bool left_array;
    _Bool right_array;
    int left_ptr_num;
    int right_ptr_num;
    _Bool left_void;
    _Bool right_void;
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
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type));
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3573))->mOriginalLoadVarType) {
        use_original=((struct sType* )come_null_checker(left_type2, "06type.nc", 3574))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3575))->mArrayNum, "06type.nc", 3575)))==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3576))->mPointerNum==0;
        if(use_original) {
            tmp=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(left_type2, "06type.nc", 3578))->mOriginalLoadVarType);
            __dec_obj268=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(tmp));
            come_call_finalizer(sType_finalize, __dec_obj268,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, tmp, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type));
    if(((struct sType* )come_null_checker(right_type2, "06type.nc", 3583))->mOriginalLoadVarType) {
        use_original_132=((struct sType* )come_null_checker(right_type2, "06type.nc", 3584))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3585))->mArrayNum, "06type.nc", 3585)))==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3586))->mPointerNum==0;
        if(use_original_132) {
            tmp_133=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(right_type2, "06type.nc", 3588))->mOriginalLoadVarType);
            __dec_obj269=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(tmp_133));
            come_call_finalizer(sType_finalize, __dec_obj269,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, tmp_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj270=left_type2,
    left_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(left_type2,info));
    come_call_finalizer(sType_finalize, __dec_obj270,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj271=right_type2,
    right_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(right_type2,info));
    come_call_finalizer(sType_finalize, __dec_obj271,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    left_lambda=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3596))->mClass, "06type.nc", 3596))->mName, "06type.nc", 3596)),"lambda");
    right_lambda=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3597))->mClass, "06type.nc", 3597))->mName, "06type.nc", 3597)),"lambda");
    if(left_lambda||right_lambda) {
        if(!(left_lambda&&right_lambda)) {
            warning_msg(info,"invalid lambda type assign. %s",msg);
            show_type(left_type2,info);
            show_type(right_type2,info);
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(!is_same_type_ignoring_qualifier(left_type2,right_type2,info)) {
            warning_msg(info,"invalid lambda type assign. %s",msg);
            show_type(left_type2,info);
            show_type(right_type2,info);
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_ptr=is_pointer_type(left_type2,info);
    right_ptr=is_pointer_type(right_type2,info);
    left_array=list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3618))->mArrayNum, "06type.nc", 3618)))>0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3619))->mPointerNum==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3620))->mArrayPointerNum==0;
    right_array=list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3621))->mArrayNum, "06type.nc", 3621)))>0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3622))->mPointerNum==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3623))->mArrayPointerNum==0;
    if(left_array&&right_array) {
        if(is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        warning_msg(info,"invalid array base type. %s",msg);
        show_type(left_type2,info);
        show_type(right_type2,info);
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(left_ptr||right_ptr||right_array) {
        if(left_ptr&&(right_ptr||right_array)) {
            left_ptr_num=((struct sType* )come_null_checker(left_type2, "06type.nc", 3638))->mPointerNum+(((((struct sType* )come_null_checker(left_type2, "06type.nc", 3638))->mPointerNum==0)?(((struct sType* )come_null_checker(left_type2, "06type.nc", 3638))->mArrayPointerNum):(0)));
            right_ptr_num=((struct sType* )come_null_checker(right_type2, "06type.nc", 3640))->mPointerNum+(((((struct sType* )come_null_checker(right_type2, "06type.nc", 3640))->mPointerNum==0)?(((struct sType* )come_null_checker(right_type2, "06type.nc", 3640))->mArrayPointerNum):(0)))+(((right_array)?(1):(0)));
            left_void=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3643))->mClass, "06type.nc", 3643))->mName, "06type.nc", 3643)),"void");
            right_void=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3644))->mClass, "06type.nc", 3644))->mName, "06type.nc", 3644)),"void");
            left_void_ptr=left_void&&left_ptr_num==1;
            right_void_ptr=right_void&&right_ptr_num==1;
            if(left_ptr_num!=right_ptr_num&&!(left_void_ptr||right_void_ptr)) {
                warning_msg(info,"invalid pointer level. %s",msg);
                show_type(left_type2,info);
                show_type(right_type2,info);
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            right_const=((struct sType* )come_null_checker(right_type2, "06type.nc", 3655))->mConstant||pointer_attr_has_const(right_type2,info);
            left_const=((struct sType* )come_null_checker(left_type2, "06type.nc", 3656))->mConstant||pointer_attr_has_const(left_type2,info);
            if(right_const&&!left_const) {
                warning_msg(info,"invalid const pointer assign. %s",msg);
                show_type(left_type2,info);
                show_type(right_type2,info);
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            right_volatile=((struct sType* )come_null_checker(right_type2, "06type.nc", 3663))->mVolatile||pointer_attr_has_volatile(right_type2,info);
            left_volatile=((struct sType* )come_null_checker(left_type2, "06type.nc", 3664))->mVolatile||pointer_attr_has_volatile(left_type2,info);
            if(right_volatile&&!left_volatile) {
                warning_msg(info,"invalid volatile pointer assign. %s",msg);
                show_type(left_type2,info);
                show_type(right_type2,info);
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            right_restrict=((struct sType* )come_null_checker(right_type2, "06type.nc", 3671))->mRestrict||pointer_attr_has_restrict(right_type2,info);
            left_restrict=((struct sType* )come_null_checker(left_type2, "06type.nc", 3672))->mRestrict||pointer_attr_has_restrict(left_type2,info);
            if(right_restrict&&!left_restrict) {
                warning_msg(info,"invalid restrict pointer assign. %s",msg);
                show_type(left_type2,info);
                show_type(right_type2,info);
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(left_void||right_void) {
                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            parent_class=(_Bool)0;
            if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3705))->mClass, "06type.nc", 3705))->mName, "06type.nc", 3705)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3705))->mClass, "06type.nc", 3705))->mName)) {
                klass=((struct sType* )come_null_checker(right_type2, "06type.nc", 3706))->mClass;
                while(klass) {
                    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(klass, "06type.nc", 3708))->mName, "06type.nc", 3708)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3708))->mClass, "06type.nc", 3708))->mName)) {
                        parent_class=(_Bool)1;
                        break;
                    }
                    if(((struct sClass* )come_null_checker(klass, "06type.nc", 3712))->mParentClassName) {
                        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3713))->classes, "06type.nc", 3713)), "06type.nc", 3713)),((struct sClass* )come_null_checker(klass, "06type.nc", 3713))->mParentClassName)));
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
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(!is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
                warning_msg(info,"invalid pointer base type. %s",msg);
                show_type(left_type2,info);
                show_type(right_type2,info);
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(left_ptr&&!(right_ptr||right_array)) {
            if(is_integer_type(right_type2,info)&&is_null_pointer_constant(come_value,info)) {
                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            warning_msg(info,"invalid assign pointer from non-pointer. %s",msg);
            show_type(left_type2,info);
            show_type(right_type2,info);
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(!left_ptr&&(right_ptr||right_array)) {
            if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3749))->mArrayNum, "06type.nc", 3749)))>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3749))->mArrayNum, "06type.nc", 3749)))>0) {
                if(is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
                    __result_obj__0 = (_Bool)1;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            warning_msg(info,"invalid assign non-pointer from pointer. %s",msg);
            show_type(left_type2,info);
            show_type(right_type2,info);
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(is_arithmetic_type(left_type2,info)&&is_arithmetic_type(right_type2,info)) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!left_ptr&&!right_ptr&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3786))->mArrayNum, "06type.nc", 3786)))==0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3786))->mArrayNum, "06type.nc", 3786)))==0) {
        if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3787))->mClass, "06type.nc", 3787))->mStruct&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3787))->mClass, "06type.nc", 3787))->mStruct) {
            if(is_parent_class_of(((struct sType* )come_null_checker(left_type2, "06type.nc", 3788))->mClass,((struct sType* )come_null_checker(right_type2, "06type.nc", 3788))->mClass,info)) {
                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
    }
    if(is_same_type_ignoring_qualifier(left_type2,right_type2,info)) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    warning_msg(info,"invalid assign type. %s",msg);
    show_type(left_type2,info);
    show_type(right_type2,info);
    __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "check_assign_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  left_type2  ;
    struct sType*  right_type2  ;
    struct sType*  left_no_solved_generics_type  ;
    struct sType*  right_no_solved_generics_type  ;
    struct sType*  __dec_obj272  ;
    struct sType*  __dec_obj273  ;
    struct sClass*  left_class  ;
    struct sClass*  right_class  ;
    _Bool parent_class;
    struct sClass*  klass  ;
    _Bool flag_;
    _Bool check_;
    int i;
    struct sType*  left  ;
    struct sType*  right  ;
    _Bool __result_obj__0;
    if(((struct sInfo* )come_null_checker(info, "06type.nc", 3806))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type, "06type.nc", 3809))->mClass, "06type.nc", 3809))->mMethodGenerics) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(gComeSafe) {
        neo_current_frame = fr.prev;
        return check_assign_type_safe(msg,left_type,right_type,come_value,info);
    }
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type));
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type=((void*)0);
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3820))->mNoSolvedGenericsType) {
        left_no_solved_generics_type=((struct sType* )come_null_checker(left_type2, "06type.nc", 3821))->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type=((void*)0);
    if(((struct sType* )come_null_checker(right_type2, "06type.nc", 3824))->mNoSolvedGenericsType) {
        right_no_solved_generics_type=((struct sType* )come_null_checker(right_type2, "06type.nc", 3825))->mNoSolvedGenericsType;
    }
    __dec_obj272=left_type2,
    left_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(left_type2,info));
    come_call_finalizer(sType_finalize, __dec_obj272,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj273=right_type2,
    right_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(right_type2,info));
    come_call_finalizer(sType_finalize, __dec_obj273,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    left_class=((struct sType* )come_null_checker(left_type2, "06type.nc", 3832))->mClass;
    right_class=((struct sType* )come_null_checker(right_type2, "06type.nc", 3833))->mClass;
    parent_class=(_Bool)0;
    if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(left_class, "06type.nc", 3836))->mName, "06type.nc", 3836)),((struct sClass* )come_null_checker(right_class, "06type.nc", 3836))->mName)) {
        while(left_class&&right_class) {
            if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(left_class, "06type.nc", 3838))->mName, "06type.nc", 3838)),((struct sClass* )come_null_checker(right_class, "06type.nc", 3838))->mName)) {
                parent_class=(_Bool)1;
            }
            if(((struct sClass* )come_null_checker(right_class, "06type.nc", 3841))->mParentClassName) {
                right_class=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3842))->classes, "06type.nc", 3842)), "06type.nc", 3842)),((struct sClass* )come_null_checker(right_class, "06type.nc", 3842))->mParentClassName)));
            }
            else {
                right_class=((void*)0);
            }
        }
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3850))->mPointerNum>0&&(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3850))->mArrayNum, "06type.nc", 3850)))>0||((struct sType* )come_null_checker(right_type, "06type.nc", 3850))->mArrayPointerNum>0)) {
        if(!((struct sType* )come_null_checker(left_type2, "06type.nc", 3851))->mConstant&&((struct sType* )come_null_checker(right_type, "06type.nc", 3851))->mConstant) {
            warning_msg(info,"type check warning(1).%s %s %d <- const %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3852))->mClass, "06type.nc", 3852))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3852))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3852))->mClass, "06type.nc", 3852))->mName,((struct sType* )come_null_checker(right_type, "06type.nc", 3852))->mPointerNum);
            show_type(left_type2,info);
            show_type(right_type2,info);
        }
        else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3856))->mClass, "06type.nc", 3856))->mName, "06type.nc", 3856)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3856))->mClass, "06type.nc", 3856))->mName)) {
        }
        else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3858))->mClass, "06type.nc", 3858))->mName, "06type.nc", 3858)),"void")) {
        }
        else {
            warning_msg(info,"type check warning(1).%s %s %d <- %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3861))->mClass, "06type.nc", 3861))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3861))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3861))->mClass, "06type.nc", 3861))->mName,((struct sType* )come_null_checker(right_type, "06type.nc", 3861))->mPointerNum);
            show_type(left_type2,info);
            show_type(right_type2,info);
        }
    }
    else if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3866))->mPointerNum>0&&((struct sType* )come_null_checker(right_type, "06type.nc", 3866))->mPointerNum==0) {
        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3867))->mClass, "06type.nc", 3867))->mName, "06type.nc", 3867)),"lambda")) {
        }
        else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3869))->mArrayNum, "06type.nc", 3869)))>0) {
        }
        else if(((struct sType* )come_null_checker(right_type, "06type.nc", 3871))->mArrayPointerNum>0) {
        }
        else {
            warning_msg(info,"type check warning(2).%s. %s %d <- %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3874))->mClass, "06type.nc", 3874))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3874))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3874))->mClass, "06type.nc", 3874))->mName,((struct sType* )come_null_checker(right_type, "06type.nc", 3874))->mPointerNum);
            show_type(left_type2,info);
            show_type(right_type2,info);
        }
    }
    else if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3879))->mPointerNum==0&&((struct sType* )come_null_checker(right_type, "06type.nc", 3879))->mPointerNum>0) {
        if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3880))->mArrayPointerNum>0) {
        }
        else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3882))->mArrayNum, "06type.nc", 3882)))>0) {
        }
        else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3884))->mClass, "06type.nc", 3884))->mName, "06type.nc", 3884)),"lambda")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3884))->mClass, "06type.nc", 3884))->mName, "06type.nc", 3884)),"void")) {
        }
        else {
            warning_msg(info,"type check warning(3).%s. %s %d <- %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3887))->mClass, "06type.nc", 3887))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3887))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3887))->mClass, "06type.nc", 3887))->mName,((struct sType* )come_null_checker(right_type, "06type.nc", 3887))->mPointerNum);
            show_type(left_type2,info);
            show_type(right_type2,info);
        }
    }
    else if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3892))->mPointerNum>0&&((struct sType* )come_null_checker(right_type, "06type.nc", 3892))->mPointerNum>0) {
        klass=((struct sType* )come_null_checker(right_type, "06type.nc", 3893))->mClass;
        flag_=(_Bool)0;
        while(klass) {
            if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(klass, "06type.nc", 3896))->mName, "06type.nc", 3896)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3896))->mClass, "06type.nc", 3896))->mName)) {
                flag_=(_Bool)1;
            }
            if(((struct sClass* )come_null_checker(klass, "06type.nc", 3899))->mParentClassName) {
                klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3900))->classes, "06type.nc", 3900)), "06type.nc", 3900)),((struct sClass* )come_null_checker(klass, "06type.nc", 3900))->mParentClassName)));
            }
            else {
                klass=((void*)0);
            }
        }
        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3906))->mClass, "06type.nc", 3906))->mName, "06type.nc", 3906)),"void")) {
        }
        else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3908))->mClass, "06type.nc", 3908))->mName, "06type.nc", 3908)),"lambda")) {
        }
        else if(left_no_solved_generics_type&&right_no_solved_generics_type&&(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_no_solved_generics_type, "06type.nc", 3910))->mGenericsTypes, "06type.nc", 3910)))>0||list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_no_solved_generics_type, "06type.nc", 3910))->mGenericsTypes, "06type.nc", 3910)))>0)) {
            check_=(_Bool)1;
            if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_no_solved_generics_type, "06type.nc", 3913))->mClass, "06type.nc", 3913))->mName, "06type.nc", 3913)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_no_solved_generics_type, "06type.nc", 3913))->mClass, "06type.nc", 3913))->mName)) {
                check_=(_Bool)0;
            }
            if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_no_solved_generics_type, "06type.nc", 3917))->mGenericsTypes, "06type.nc", 3917)))!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_no_solved_generics_type, "06type.nc", 3917))->mGenericsTypes, "06type.nc", 3917)))) {
                check_=(_Bool)0;
            }
            else {
                for(i=0;i<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_no_solved_generics_type, "06type.nc", 3921))->mGenericsTypes, "06type.nc", 3921)));i++){
                    left=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_no_solved_generics_type, "06type.nc", 3922))->mGenericsTypes, "06type.nc", 3922)), "06type.nc", 3922)),i)));
                    right=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_no_solved_generics_type, "06type.nc", 3923))->mGenericsTypes, "06type.nc", 3923)), "06type.nc", 3923)),i)));
                    if((string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left, "06type.nc", 3925))->mClass, "06type.nc", 3925))->mName, "06type.nc", 3925)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right, "06type.nc", 3925))->mClass, "06type.nc", 3925))->mName))||(((struct sType* )come_null_checker(left, "06type.nc", 3925))->mPointerNum!=((struct sType* )come_null_checker(right, "06type.nc", 3925))->mPointerNum)) {
                        check_=(_Bool)0;
                        warning_msg(info,"left child generics %s right child generics %s",((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left, "06type.nc", 3927))->mClass, "06type.nc", 3927))->mName,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right, "06type.nc", 3927))->mClass, "06type.nc", 3927))->mName);
                        show_type(left_type2,info);
                        show_type(right_type2,info);
                    }
                }
            }
            if(!check_) {
                warning_msg(info,"type check warning(4).%s. %s %d <- %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_no_solved_generics_type, "06type.nc", 3936))->mClass, "06type.nc", 3936))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3936))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_no_solved_generics_type, "06type.nc", 3936))->mClass, "06type.nc", 3936))->mName,((struct sType* )come_null_checker(right_type2, "06type.nc", 3936))->mPointerNum);
                show_type(left_type2,info);
                show_type(right_type2,info);
            }
        }
        else if(strlen(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3941))->mClass, "06type.nc", 3941))->mName)>=strlen("tuple")&&memcmp(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3942))->mClass, "06type.nc", 3942))->mName,"tuple",strlen("tuple"))==0&&(strlen(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3943))->mClass, "06type.nc", 3943))->mName)>=strlen("tuple"))) {
        }
        else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3946))->mClass, "06type.nc", 3946))->mName, "06type.nc", 3946)),"void")) {
        }
        else if(!((struct sType* )come_null_checker(left_type2, "06type.nc", 3948))->mConstant&&((struct sType* )come_null_checker(right_type, "06type.nc", 3948))->mConstant) {
            warning_msg(info,"type check warning(1).%s %s %d <- const %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3949))->mClass, "06type.nc", 3949))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3949))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3949))->mClass, "06type.nc", 3949))->mName,((struct sType* )come_null_checker(right_type, "06type.nc", 3949))->mPointerNum);
            show_type(left_type2,info);
            show_type(right_type2,info);
        }
        else if(parent_class) {
            if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3954))->mPointerNum>1) {
                warning_msg(info,"invalid pointer level. %s",msg);
                show_type(left_type2,info);
                show_type(right_type2,info);
            }
        }
        else if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3960))->mClass, "06type.nc", 3960))->mName, "06type.nc", 3960)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3960))->mClass, "06type.nc", 3960))->mName)&&!flag_) {
            warning_msg(info,"type check warning(5).%s. %s %d <- %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3961))->mClass, "06type.nc", 3961))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3961))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3961))->mClass, "06type.nc", 3961))->mName,((struct sType* )come_null_checker(right_type, "06type.nc", 3961))->mPointerNum);
            show_type(left_type2,info);
            show_type(right_type2,info);
        }
    }
    else if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3967))->mPointerNum==0&&((struct sType* )come_null_checker(right_type, "06type.nc", 3967))->mPointerNum==0) {
        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3968))->mClass, "06type.nc", 3968))->mName, "06type.nc", 3968)),"lambda")) {
        }
        else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3970))->mClass, "06type.nc", 3970))->mNumber&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3970))->mClass, "06type.nc", 3970))->mNumber) {
        }
        else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3972))->mClass, "06type.nc", 3972))->mName, "06type.nc", 3972)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3972))->mClass, "06type.nc", 3972))->mName)) {
        }
        else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3974))->mClass, "06type.nc", 3974))->mStruct&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3974))->mClass, "06type.nc", 3974))->mStruct&&parent_class) {
        }
        else {
            warning_msg(info,"type check warning(6).%s. %s %d <- %s %d",msg,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3977))->mClass, "06type.nc", 3977))->mName,((struct sType* )come_null_checker(left_type2, "06type.nc", 3977))->mPointerNum,((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3977))->mClass, "06type.nc", 3977))->mName,((struct sType* )come_null_checker(right_type, "06type.nc", 3977))->mPointerNum);
            show_type(left_type2,info);
            show_type(right_type2,info);
        }
    }
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cast_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

