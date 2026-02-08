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

struct sNullNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
};

struct sTypeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo*  info  );
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
_Bool operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool break_guard, struct sInfo*  info  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo*  info  );
char*  sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
struct sNode* create_null_node(struct sInfo*  info  );
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo*  info  );
static struct sNode* sNode_clone(struct sNode* self);
static void sAddNode_finalize(struct sAddNode* self);
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
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
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo*  info  );
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo*  info  );
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo*  info  );
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo*  info  );
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo*  info  );
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo*  info  );
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo*  info  );
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo*  info  );
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo*  info  );
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo*  info  );
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo*  info  );
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo*  info  );
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo*  info  );
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo*  info  );
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo*  info  );
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo*  info  );
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo*  info  );
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo*  info  );
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  );
char*  sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo*  info  );
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo*  info  );
char*  sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo*  info  );
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
char*  sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo*  info  );
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo*  info  );
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo*  info  );
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo*  info  );
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo*  info  );
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo*  info  );
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo*  info  );
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo*  info  );
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo*  info  );
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo*  info  );
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo*  info  );
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  );
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* comma_exp(struct sInfo*  info  );
struct sNode* conditional_exp(struct sInfo*  info  );
struct sTypeNode* sTypeNode_initialize(struct sTypeNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sTypeNode_kind(struct sTypeNode* self);
_Bool sTypeNode_compile(struct sTypeNode* self, struct sInfo*  info  );
static void sTypeNode_finalize(struct sTypeNode* self);
struct sNode* expression_v13(struct sInfo*  info  , _Bool type_name_exp);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sTypeNode* sTypeNode_clone(struct sTypeNode* self);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  );
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
_Bool operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool break_guard, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun"; neo_current_frame = &fr;
    struct sType*  generics_type  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char* class_name;
    void* __right_value0 = (void*)0;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool result;
    struct sRightValueObject*  right_value_object  ;
    struct sRightValueObject*  right_value_object_0  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type2, 0, sizeof(type2));
    if(((struct sType* )come_null_checker(type, "30op.nc", 6))->mNoSolvedGenericsType) {
        generics_type=((struct sType* )come_null_checker(type, "30op.nc", 7))->mNoSolvedGenericsType;
    }
    else {
        generics_type=type;
    }
    if(((struct sType* )come_null_checker(type, "30op.nc", 14))->mNoSolvedGenericsType) {
        type2=((struct sType* )come_null_checker(type, "30op.nc", 15))->mNoSolvedGenericsType;
    }
    else {
        type2=type;
    }
    klass=((struct sType* )come_null_checker(type2, "30op.nc", 20))->mClass;
    class_name=((struct sClass* )come_null_checker(klass, "30op.nc", 21))->mName;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type2,info)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    result=(_Bool)0;
    if(operator_fun&&(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "30op.nc", 27))->mGenericsTypes, "30op.nc", 27)))>0||(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 27))->type, "30op.nc", 27))->mClass, "30op.nc", 27))->mName, "30op.nc", 27)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "30op.nc", 27))->type, "30op.nc", 27))->mClass, "30op.nc", 27))->mName)&&(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 27))->type, "30op.nc", 27))->mOriginalLoadVarType&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 27))->type, "30op.nc", 27))->mOriginalLoadVarType, "30op.nc", 27))->mArrayNum, "30op.nc", 27)))>0||((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 27))->type, "30op.nc", 27))->mPointerNum==((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "30op.nc", 27))->type, "30op.nc", 27))->mPointerNum))||charp_operator_equals(((const char*)come_null_checker(fun_name, "30op.nc", 27)),"operator_mult"))) {
        {
            right_value_object=((struct CVALUE* )come_null_checker(left_value, "30op.nc", 29))->right_value_objects;
            if(right_value_object) {
                ((struct sRightValueObject* )come_null_checker(right_value_object, "30op.nc", 32))->mFreed=(_Bool)1;
            }
        }
        {
            right_value_object_0=((struct CVALUE* )come_null_checker(right_value, "30op.nc", 36))->right_value_objects;
            if(right_value_object_0) {
                ((struct sRightValueObject* )come_null_checker(right_value_object_0, "30op.nc", 39))->mFreed=(_Bool)1;
            }
        }
        obj=(struct sNode*)come_increment_ref_count(left_node);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 44, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "30op.nc", 44)))));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "30op.nc", 46)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "30op.nc", 46, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "30op.nc", 47)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "30op.nc", 47, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )((void*)0)),(struct sNode*)come_increment_ref_count(right_node))));
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
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple3$3char$phsFun$psGenericsFun$p*)come_null_checker(self, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 0))->v1!=((void*)0)) {
        (((struct tuple3$3char$phsFun$psGenericsFun$p*)come_null_checker(self, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)come_null_checker(self, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
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
    return ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->len;
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
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
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize", 0))->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 0))->v1!=((void*)0)) {
        (((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 1))->v2!=((void*)0)) {
        ((((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 1))->v2) ? ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 1))->v2, ((struct sNode*)((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 1))->v2)->finalize, ((struct sNode*)((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph$p_finalize", 1))->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj1;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_1;
    struct tuple2$2char$phsNode$ph* __dec_obj2;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_2;
    struct tuple2$2char$phsNode$ph* __dec_obj3;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1406))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1407, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1409))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1410))->next=((void*)0);
        __dec_obj1=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_1=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1417, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj2=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1421))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_1;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_1;
    }
    else {
        litem_2=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1427, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj3=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1431))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_2;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_2;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj4  ;
    struct sNode* __dec_obj5;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj4=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3248))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj5=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3249))->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj5 ? __dec_obj5 = come_decrement_ref_count(__dec_obj5, ((struct sNode*)__dec_obj5)->finalize, ((struct sNode*)__dec_obj5)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNullNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)come_null_checker(self, "30op.nc", 63))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sNullNode*)come_increment_ref_count(self);
    come_call_finalizer(sNullNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNullNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sNullNode_kind(struct sNullNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNullNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj6  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj7  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 73, "struct CVALUE* "))), "30op.nc", 73)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj6=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 75))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 75))->c_value=(char* )come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj7=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 76))->type,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 76))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 76, "struct sType* "))), "30op.nc", 76))),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 77))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 79))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 81))->stack, "30op.nc", 81)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
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

static void sNullNode_finalize(struct sNullNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNullNode*)come_null_checker(self, "sNullNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sNullNode*)come_null_checker(self, "sNullNode_finalize", 0))->sname = come_decrement_ref_count(((struct sNullNode*)come_null_checker(self, "sNullNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj8  ;
    struct list_item$1CVALUE$ph* litem_3;
    struct CVALUE*  __dec_obj9  ;
    struct list_item$1CVALUE$ph* litem_4;
    struct CVALUE*  __dec_obj10  ;
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
        __dec_obj8=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_3=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1502, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj9=((struct list_item$1CVALUE$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1506))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_3;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_3;
    }
    else {
        litem_4=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1512, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj10=((struct list_item$1CVALUE$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1516))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_4;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_4;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_null_node(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_null_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNullNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 89, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count(((struct sNullNode* )come_null_checker(((struct sNullNode* )(__right_value0=(struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), (void*)0, 89, "struct sNullNode* "))), "30op.nc", 89))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    come_call_finalizer(sNullNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullNode_clone"; neo_current_frame = &fr;
    struct sNullNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNullNode*  result  ;
    char*  __dec_obj11  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNullNode* )come_increment_ref_count((struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), (void*)0, 3, "struct sNullNode* "));
    if(self!=((void*)0)) {
        ((struct sNullNode* )come_null_checker(result, "sNullNode_clone", 4))->sline=((struct sNullNode*)come_null_checker(self, "sNullNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sNullNode*)come_null_checker(self, "sNullNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj11=((struct sNullNode* )come_null_checker(result, "sNullNode_clone", 5))->sname,
        ((struct sNullNode* )come_null_checker(result, "sNullNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sNullNode*)come_null_checker(self, "sNullNode_clone", 5))->sname, "sNullNode_clone", 5, "char* "));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sNullNode* )come_null_checker(result, "sNullNode_clone", 6))->sline_real=((struct sNullNode*)come_null_checker(self, "sNullNode_clone", 6))->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sNullNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj12;
    struct sNode* __dec_obj13;
    struct sAddNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)come_null_checker(self, "30op.nc", 96))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj12=((struct sAddNode*)come_null_checker(self, "30op.nc", 98))->mLeft,
    ((struct sAddNode*)come_null_checker(self, "30op.nc", 98))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj13=((struct sAddNode*)come_null_checker(self, "30op.nc", 99))->mRight,
    ((struct sAddNode*)come_null_checker(self, "30op.nc", 99))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0) :0);
    ((struct sAddNode*)come_null_checker(self, "30op.nc", 100))->mQuote=quote;
    __result_obj__0 = (struct sAddNode*)come_increment_ref_count(self);
    come_call_finalizer(sAddNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAddNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAddNode_kind(struct sAddNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAddNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_5;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct sType*  result_type  ;
    struct sType*  __dec_obj47  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj48  ;
    struct sType*  __dec_obj49  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sAddNode*)come_null_checker(self, "30op.nc", 111))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sAddNode*)come_null_checker(self, "30op.nc", 119))->mRight);
    Value_5=node_compile(right_node,info);
    if(!Value_5) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 127))->type);
    const char* fun_name="operator_add";
    if(((struct sAddNode*)come_null_checker(self, "30op.nc", 131))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 139))->type));
        if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "30op.nc", 140))->type, "30op.nc", 140))->mPointerNum>0) {
            __dec_obj47=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(right_value, "30op.nc", 141))->type));
            come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 144, "struct CVALUE* "))), "30op.nc", 144)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj48=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 146))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 146))->c_value=(char* )come_increment_ref_count(xsprintf("%s+%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 146))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 146))->c_value));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj49=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 147))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 147))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 148))->type, "30op.nc", 148))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 149))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 151))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 153))->stack, "30op.nc", 153)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void sAddNode_finalize(struct sAddNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 0))->sname = come_decrement_ref_count(((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 1))->mLeft) ? ((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 1))->mLeft, ((struct sNode*)((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 2))->mRight) ? ((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 2))->mRight, ((struct sNode*)((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sAddNode*)come_null_checker(self, "sAddNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj14  ;
    struct sType*  __dec_obj15  ;
    struct list$1sType$ph* __dec_obj19;
    struct sType*  __dec_obj20  ;
    struct sNode* __dec_obj21;
    struct sNode* __dec_obj22;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    struct list$1sNode$ph* __dec_obj34;
    struct list$1sNode$ph* __dec_obj35;
    struct list$1int$* __dec_obj36;
    struct list$1int$* __dec_obj37;
    struct sType*  __dec_obj38  ;
    char*  __dec_obj39  ;
    struct list$1sType$ph* __dec_obj40;
    struct list$1char$ph* __dec_obj44;
    struct sType*  __dec_obj45  ;
    struct sNode* __dec_obj46;
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
        __dec_obj14=((struct sType* )come_null_checker(result, "sType_clone", 5))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 5))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 5))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 6))->mChannelType!=((void*)0)) {
        __dec_obj15=((struct sType* )come_null_checker(result, "sType_clone", 6))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 6))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 6))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 7))->mGenericsTypes!=((void*)0)) {
        __dec_obj19=((struct sType* )come_null_checker(result, "sType_clone", 7))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj20=((struct sType* )come_null_checker(result, "sType_clone", 8))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mSizeNum!=((void*)0)) {
        __dec_obj21=((struct sType* )come_null_checker(result, "sType_clone", 9))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mSizeNum));
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mAlignas!=((void*)0)) {
        __dec_obj22=((struct sType* )come_null_checker(result, "sType_clone", 10))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mAlignas));
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 11))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mTupleName!=((void*)0)) {
        __dec_obj23=((struct sType* )come_null_checker(result, "sType_clone", 12))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 12))->mTupleName, "sType_clone", 12, "char* "));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 13))->mAttribute!=((void*)0)) {
        __dec_obj24=((struct sType* )come_null_checker(result, "sType_clone", 13))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 13))->mAttribute, "sType_clone", 13, "char* "));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mVarAttribute!=((void*)0)) {
        __dec_obj25=((struct sType* )come_null_checker(result, "sType_clone", 14))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mVarAttribute, "sType_clone", 14, "char* "));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mMiddleAttribute!=((void*)0)) {
        __dec_obj26=((struct sType* )come_null_checker(result, "sType_clone", 15))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mMiddleAttribute, "sType_clone", 15, "char* "));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mPointerAttribute!=((void*)0)) {
        __dec_obj27=((struct sType* )come_null_checker(result, "sType_clone", 16))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mPointerAttribute, "sType_clone", 16, "char* "));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj28=((struct sType* )come_null_checker(result, "sType_clone", 41))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 41))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 41))->mAnonymousName, "sType_clone", 41, "char* "));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 42))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 42))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 43))->mInnerStructName!=((void*)0)) {
        __dec_obj29=((struct sType* )come_null_checker(result, "sType_clone", 43))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 43))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 43))->mInnerStructName, "sType_clone", 43, "char* "));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 44))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 44))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 45))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 45))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 46))->mAsmName!=((void*)0)) {
        __dec_obj30=((struct sType* )come_null_checker(result, "sType_clone", 46))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 46))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 46))->mAsmName, "sType_clone", 46, "char* "));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 47))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 47))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 48))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 49))->mArrayNum!=((void*)0)) {
        __dec_obj34=((struct sType* )come_null_checker(result, "sType_clone", 49))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 49))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj35=((struct sType* )come_null_checker(result, "sType_clone", 50))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 50))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 51))->mArrayStatic!=((void*)0)) {
        __dec_obj36=((struct sType* )come_null_checker(result, "sType_clone", 51))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 51))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 52))->mArrayRestrict!=((void*)0)) {
        __dec_obj37=((struct sType* )come_null_checker(result, "sType_clone", 52))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 52))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj38=((struct sType* )come_null_checker(result, "sType_clone", 57))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mOriginalTypeName!=((void*)0)) {
        __dec_obj39=((struct sType* )come_null_checker(result, "sType_clone", 58))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 58))->mOriginalTypeName, "sType_clone", 58, "char* "));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj40=((struct sType* )come_null_checker(result, "sType_clone", 62))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 62))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 62))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 63))->mParamNames!=((void*)0)) {
        __dec_obj44=((struct sType* )come_null_checker(result, "sType_clone", 63))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 63))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 63))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 64))->mResultType!=((void*)0)) {
        __dec_obj45=((struct sType* )come_null_checker(result, "sType_clone", 64))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 64))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 64))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 65))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mTypeOfNode!=((void*)0)) {
        __dec_obj46=((struct sType* )come_null_checker(result, "sType_clone", 66))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 66))->mTypeOfNode));
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0, (void*)0) :0);
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
    struct sType*  __dec_obj16  ;
    struct list_item$1sType$ph* litem_6;
    struct sType*  __dec_obj17  ;
    struct list_item$1sType$ph* litem_7;
    struct sType*  __dec_obj18  ;
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
        __dec_obj16=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_6=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1417, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj17=((struct list_item$1sType$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1421))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_6;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1427, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj18=((struct list_item$1sType$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1431))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_7;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_7;
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
    struct sNode* __dec_obj31;
    struct list_item$1sNode$ph* litem_8;
    struct sNode* __dec_obj32;
    struct list_item$1sNode$ph* litem_9;
    struct sNode* __dec_obj33;
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
        __dec_obj31=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_8=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1417, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj32=((struct list_item$1sNode$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1421))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_8;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1427, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj33=((struct list_item$1sNode$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1431))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_9;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_9;
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
    struct list_item$1int$* litem_10;
    struct list_item$1int$* litem_11;
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
        litem_10=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1417, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1int$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1421))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_10;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_10;
    }
    else {
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1427, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1431))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_11;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_11;
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
    char*  __dec_obj41  ;
    struct list_item$1char$ph* litem_12;
    char*  __dec_obj42  ;
    struct list_item$1char$ph* litem_13;
    char*  __dec_obj43  ;
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
        __dec_obj41=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(char* )come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_12=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1417, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj42=((struct list_item$1char$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1421))->item=(char* )come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_12;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1427, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj43=((struct list_item$1char$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1431))->item=(char* )come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_13;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_13;
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

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj50;
    struct sNode* __dec_obj51;
    struct sSubNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)come_null_checker(self, "30op.nc", 164))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj50=((struct sSubNode*)come_null_checker(self, "30op.nc", 166))->mLeft,
    ((struct sSubNode*)come_null_checker(self, "30op.nc", 166))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj51=((struct sSubNode*)come_null_checker(self, "30op.nc", 167))->mRight,
    ((struct sSubNode*)come_null_checker(self, "30op.nc", 167))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj51 ? __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0, (void*)0) :0);
    ((struct sSubNode*)come_null_checker(self, "30op.nc", 168))->mQuote=quote;
    __result_obj__0 = (struct sSubNode*)come_increment_ref_count(self);
    come_call_finalizer(sSubNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSubNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sSubNode_kind(struct sSubNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSubNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_14;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct sType*  result_type  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj52  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj53  ;
    struct sType*  __dec_obj54  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sSubNode*)come_null_checker(self, "30op.nc", 179))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sSubNode*)come_null_checker(self, "30op.nc", 187))->mRight);
    Value_14=node_compile(right_node,info);
    if(!Value_14) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 195))->type);
    const char* fun_name="operator_sub";
    if(((struct sSubNode*)come_null_checker(self, "30op.nc", 199))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 207))->type));
        if(((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 208))->type, "30op.nc", 208))->mPointerNum>0&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(right_value, "30op.nc", 208))->type, "30op.nc", 208))->mPointerNum>0) {
            __dec_obj52=result_type,
            result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 209, "struct sType* "))), "30op.nc", 209))),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 212, "struct CVALUE* "))), "30op.nc", 212)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj53=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 214))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 214))->c_value=(char* )come_increment_ref_count(xsprintf("%s-%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 214))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 214))->c_value));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj54=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 215))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 215))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 216))->type, "30op.nc", 216))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 217))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 219))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 221))->stack, "30op.nc", 221)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSubNode_finalize(struct sSubNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 0))->sname = come_decrement_ref_count(((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 1))->mLeft) ? ((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 1))->mLeft, ((struct sNode*)((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 2))->mRight) ? ((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 2))->mRight, ((struct sNode*)((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sSubNode*)come_null_checker(self, "sSubNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj55;
    struct sNode* __dec_obj56;
    struct sMultNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)come_null_checker(self, "30op.nc", 232))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sMultNode*)come_null_checker(self, "30op.nc", 234))->mQuote=quote;
    __dec_obj55=((struct sMultNode*)come_null_checker(self, "30op.nc", 235))->mLeft,
    ((struct sMultNode*)come_null_checker(self, "30op.nc", 235))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj56=((struct sMultNode*)come_null_checker(self, "30op.nc", 236))->mRight,
    ((struct sMultNode*)come_null_checker(self, "30op.nc", 236))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sMultNode*)come_increment_ref_count(self);
    come_call_finalizer(sMultNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMultNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sMultNode_kind(struct sMultNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMultNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_15;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj57  ;
    struct sType*  __dec_obj58  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sMultNode*)come_null_checker(self, "30op.nc", 247))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sMultNode*)come_null_checker(self, "30op.nc", 255))->mRight);
    Value_15=node_compile(right_node,info);
    if(!Value_15) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 263))->type);
    const char* fun_name="operator_mult";
    if(((struct sMultNode*)come_null_checker(self, "30op.nc", 267))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 275, "struct CVALUE* "))), "30op.nc", 275)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj57=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 277))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 277))->c_value=(char* )come_increment_ref_count(xsprintf("%s*%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 277))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 277))->c_value));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj58=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 278))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 278))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 278))->type));
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 279))->type, "30op.nc", 279))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 280))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 282))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 284))->stack, "30op.nc", 284)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMultNode_finalize(struct sMultNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 0))->sname = come_decrement_ref_count(((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 1))->mLeft) ? ((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 1))->mLeft, ((struct sNode*)((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 2))->mRight) ? ((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 2))->mRight, ((struct sNode*)((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sMultNode*)come_null_checker(self, "sMultNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj59;
    struct sNode* __dec_obj60;
    struct sDivNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)come_null_checker(self, "30op.nc", 295))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sDivNode*)come_null_checker(self, "30op.nc", 297))->mQuote=quote;
    __dec_obj59=((struct sDivNode*)come_null_checker(self, "30op.nc", 298))->mLeft,
    ((struct sDivNode*)come_null_checker(self, "30op.nc", 298))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj60=((struct sDivNode*)come_null_checker(self, "30op.nc", 299))->mRight,
    ((struct sDivNode*)come_null_checker(self, "30op.nc", 299))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDivNode*)come_increment_ref_count(self);
    come_call_finalizer(sDivNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDivNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDivNode_kind(struct sDivNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDivNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_16;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj61  ;
    struct sType*  __dec_obj62  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sDivNode*)come_null_checker(self, "30op.nc", 310))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sDivNode*)come_null_checker(self, "30op.nc", 318))->mRight);
    Value_16=node_compile(right_node,info);
    if(!Value_16) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 326))->type);
    const char* fun_name="operator_div";
    if(((struct sDivNode*)come_null_checker(self, "30op.nc", 330))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 338, "struct CVALUE* "))), "30op.nc", 338)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj61=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 340))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 340))->c_value=(char* )come_increment_ref_count(xsprintf("%s/%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 340))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 340))->c_value));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj62=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 341))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 341))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 341))->type));
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 342))->type, "30op.nc", 342))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 343))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 345))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 347))->stack, "30op.nc", 347)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDivNode_finalize(struct sDivNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 0))->sname = come_decrement_ref_count(((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 1))->mLeft) ? ((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 1))->mLeft, ((struct sNode*)((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 2))->mRight) ? ((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 2))->mRight, ((struct sNode*)((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sDivNode*)come_null_checker(self, "sDivNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj63;
    struct sNode* __dec_obj64;
    struct sModNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)come_null_checker(self, "30op.nc", 358))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sModNode*)come_null_checker(self, "30op.nc", 360))->mQuote=quote;
    __dec_obj63=((struct sModNode*)come_null_checker(self, "30op.nc", 361))->mLeft,
    ((struct sModNode*)come_null_checker(self, "30op.nc", 361))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj64=((struct sModNode*)come_null_checker(self, "30op.nc", 362))->mRight,
    ((struct sModNode*)come_null_checker(self, "30op.nc", 362))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sModNode*)come_increment_ref_count(self);
    come_call_finalizer(sModNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sModNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sModNode_kind(struct sModNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sModNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_17;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj65  ;
    struct sType*  __dec_obj66  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sModNode*)come_null_checker(self, "30op.nc", 373))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sModNode*)come_null_checker(self, "30op.nc", 381))->mRight);
    Value_17=node_compile(right_node,info);
    if(!Value_17) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 389))->type);
    const char* fun_name="operator_mod";
    if(((struct sModNode*)come_null_checker(self, "30op.nc", 393))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 401, "struct CVALUE* "))), "30op.nc", 401)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj65=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 403))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 403))->c_value=(char* )come_increment_ref_count(xsprintf("%s%%%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 403))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 403))->c_value));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj66=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 404))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 404))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 404))->type));
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 405))->type, "30op.nc", 405))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 406))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 408))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 410))->stack, "30op.nc", 410)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sModNode_finalize(struct sModNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sModNode*)come_null_checker(self, "sModNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sModNode*)come_null_checker(self, "sModNode_finalize", 0))->sname = come_decrement_ref_count(((struct sModNode*)come_null_checker(self, "sModNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sModNode*)come_null_checker(self, "sModNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sModNode*)come_null_checker(self, "sModNode_finalize", 1))->mLeft) ? ((struct sModNode*)come_null_checker(self, "sModNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sModNode*)come_null_checker(self, "sModNode_finalize", 1))->mLeft, ((struct sNode*)((struct sModNode*)come_null_checker(self, "sModNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sModNode*)come_null_checker(self, "sModNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sModNode*)come_null_checker(self, "sModNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sModNode*)come_null_checker(self, "sModNode_finalize", 2))->mRight) ? ((struct sModNode*)come_null_checker(self, "sModNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sModNode*)come_null_checker(self, "sModNode_finalize", 2))->mRight, ((struct sNode*)((struct sModNode*)come_null_checker(self, "sModNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sModNode*)come_null_checker(self, "sModNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj67;
    struct sNode* __dec_obj68;
    struct sLShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)come_null_checker(self, "30op.nc", 421))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sLShiftNode*)come_null_checker(self, "30op.nc", 423))->mQuote=quote;
    __dec_obj67=((struct sLShiftNode*)come_null_checker(self, "30op.nc", 425))->mLeft,
    ((struct sLShiftNode*)come_null_checker(self, "30op.nc", 425))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj67 ? __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj68=((struct sLShiftNode*)come_null_checker(self, "30op.nc", 426))->mRight,
    ((struct sLShiftNode*)come_null_checker(self, "30op.nc", 426))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sLShiftNode*)come_increment_ref_count(self);
    come_call_finalizer(sLShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLShiftNode_kind(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLShiftNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_18;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj69  ;
    struct sType*  __dec_obj70  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sLShiftNode*)come_null_checker(self, "30op.nc", 437))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sLShiftNode*)come_null_checker(self, "30op.nc", 445))->mRight);
    Value_18=node_compile(right_node,info);
    if(!Value_18) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 453))->type);
    const char* fun_name="operator_lshift";
    if(((struct sLShiftNode*)come_null_checker(self, "30op.nc", 457))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 465, "struct CVALUE* "))), "30op.nc", 465)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj69=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 467))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 467))->c_value=(char* )come_increment_ref_count(xsprintf("%s<<%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 467))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 467))->c_value));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj70=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 468))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 468))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 468))->type));
        come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 469))->type, "30op.nc", 469))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 470))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 472))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 474))->stack, "30op.nc", 474)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLShiftNode_finalize(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 0))->sname = come_decrement_ref_count(((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 1))->mLeft) ? ((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 1))->mLeft, ((struct sNode*)((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 2))->mRight) ? ((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 2))->mRight, ((struct sNode*)((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj71;
    struct sNode* __dec_obj72;
    struct sRShiftNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)come_null_checker(self, "30op.nc", 485))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sRShiftNode*)come_null_checker(self, "30op.nc", 487))->mQuote=quote;
    __dec_obj71=((struct sRShiftNode*)come_null_checker(self, "30op.nc", 488))->mLeft,
    ((struct sRShiftNode*)come_null_checker(self, "30op.nc", 488))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj72=((struct sRShiftNode*)come_null_checker(self, "30op.nc", 489))->mRight,
    ((struct sRShiftNode*)come_null_checker(self, "30op.nc", 489))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sRShiftNode*)come_increment_ref_count(self);
    come_call_finalizer(sRShiftNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRShiftNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sRShiftNode_kind(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRShiftNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_19;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sRShiftNode*)come_null_checker(self, "30op.nc", 500))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sRShiftNode*)come_null_checker(self, "30op.nc", 508))->mRight);
    Value_19=node_compile(right_node,info);
    if(!Value_19) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 516))->type);
    const char* fun_name="operator_rshift";
    if(((struct sRShiftNode*)come_null_checker(self, "30op.nc", 520))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 528, "struct CVALUE* "))), "30op.nc", 528)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj73=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 530))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 530))->c_value=(char* )come_increment_ref_count(xsprintf("%s>>%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 530))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 530))->c_value));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj74=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 531))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 531))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 531))->type));
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 532))->type, "30op.nc", 532))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 533))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 535))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 537))->stack, "30op.nc", 537)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRShiftNode_finalize(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 0))->sname = come_decrement_ref_count(((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 1))->mLeft) ? ((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 1))->mLeft, ((struct sNode*)((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 2))->mRight) ? ((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 2))->mRight, ((struct sNode*)((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj75;
    struct sNode* __dec_obj76;
    struct sGtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)come_null_checker(self, "30op.nc", 548))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sGtEqNode*)come_null_checker(self, "30op.nc", 550))->mQuote=quote;
    __dec_obj75=((struct sGtEqNode*)come_null_checker(self, "30op.nc", 551))->mLeft,
    ((struct sGtEqNode*)come_null_checker(self, "30op.nc", 551))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj76=((struct sGtEqNode*)come_null_checker(self, "30op.nc", 552))->mRight,
    ((struct sGtEqNode*)come_null_checker(self, "30op.nc", 552))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGtEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sGtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGtEqNode_kind(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtEqNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_20;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj77  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj78  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sGtEqNode*)come_null_checker(self, "30op.nc", 563))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sGtEqNode*)come_null_checker(self, "30op.nc", 571))->mRight);
    Value_20=node_compile(right_node,info);
    if(!Value_20) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 579))->type);
    const char* fun_name="operator_gteq";
    if(((struct sGtEqNode*)come_null_checker(self, "30op.nc", 583))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 591, "struct CVALUE* "))), "30op.nc", 591)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj77=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 593))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 593))->c_value=(char* )come_increment_ref_count(xsprintf("%s>=%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 593))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 593))->c_value));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj78=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 594))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 594))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 594, "struct sType* "))), "30op.nc", 594))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 595))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 597))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 599))->stack, "30op.nc", 599)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtEqNode_finalize(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 0))->sname = come_decrement_ref_count(((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 1))->mLeft) ? ((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 1))->mLeft, ((struct sNode*)((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 2))->mRight) ? ((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 2))->mRight, ((struct sNode*)((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj79;
    struct sNode* __dec_obj80;
    struct sLtEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)come_null_checker(self, "30op.nc", 610))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sLtEqNode*)come_null_checker(self, "30op.nc", 612))->mQuote=quote;
    __dec_obj79=((struct sLtEqNode*)come_null_checker(self, "30op.nc", 613))->mLeft,
    ((struct sLtEqNode*)come_null_checker(self, "30op.nc", 613))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj80=((struct sLtEqNode*)come_null_checker(self, "30op.nc", 614))->mRight,
    ((struct sLtEqNode*)come_null_checker(self, "30op.nc", 614))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sLtEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sLtEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLtEqNode_kind(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtEqNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_21;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj81  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj82  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sLtEqNode*)come_null_checker(self, "30op.nc", 625))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sLtEqNode*)come_null_checker(self, "30op.nc", 633))->mRight);
    Value_21=node_compile(right_node,info);
    if(!Value_21) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 641))->type);
    const char* fun_name="operator_lteq";
    if(((struct sLtEqNode*)come_null_checker(self, "30op.nc", 645))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 653, "struct CVALUE* "))), "30op.nc", 653)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj81=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 655))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 655))->c_value=(char* )come_increment_ref_count(xsprintf("%s<=%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 655))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 655))->c_value));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj82=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 656))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 656))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 656, "struct sType* "))), "30op.nc", 656))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 657))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 659))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 661))->stack, "30op.nc", 661)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtEqNode_finalize(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 0))->sname = come_decrement_ref_count(((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 1))->mLeft) ? ((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 1))->mLeft, ((struct sNode*)((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 2))->mRight) ? ((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 2))->mRight, ((struct sNode*)((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj83;
    struct sNode* __dec_obj84;
    struct sLtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)come_null_checker(self, "30op.nc", 672))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sLtNode*)come_null_checker(self, "30op.nc", 674))->mQuote=quote;
    __dec_obj83=((struct sLtNode*)come_null_checker(self, "30op.nc", 675))->mLeft,
    ((struct sLtNode*)come_null_checker(self, "30op.nc", 675))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj84=((struct sLtNode*)come_null_checker(self, "30op.nc", 676))->mRight,
    ((struct sLtNode*)come_null_checker(self, "30op.nc", 676))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sLtNode*)come_increment_ref_count(self);
    come_call_finalizer(sLtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sLtNode_kind(struct sLtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLtNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_22;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj85  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj86  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sLtNode*)come_null_checker(self, "30op.nc", 687))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sLtNode*)come_null_checker(self, "30op.nc", 695))->mRight);
    Value_22=node_compile(right_node,info);
    if(!Value_22) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 703))->type);
    const char* fun_name="operator_lt";
    if(((struct sLtNode*)come_null_checker(self, "30op.nc", 707))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 715, "struct CVALUE* "))), "30op.nc", 715)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj85=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 717))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 717))->c_value=(char* )come_increment_ref_count(xsprintf("%s<%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 717))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 717))->c_value));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj86=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 718))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 718))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 718, "struct sType* "))), "30op.nc", 718))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 719))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 721))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 723))->stack, "30op.nc", 723)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLtNode_finalize(struct sLtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 0))->sname = come_decrement_ref_count(((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 1))->mLeft) ? ((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 1))->mLeft, ((struct sNode*)((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 2))->mRight) ? ((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 2))->mRight, ((struct sNode*)((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sLtNode*)come_null_checker(self, "sLtNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj87;
    struct sNode* __dec_obj88;
    struct sGtNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)come_null_checker(self, "30op.nc", 734))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sGtNode*)come_null_checker(self, "30op.nc", 736))->mQuote=quote;
    __dec_obj87=((struct sGtNode*)come_null_checker(self, "30op.nc", 737))->mLeft,
    ((struct sGtNode*)come_null_checker(self, "30op.nc", 737))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj88=((struct sGtNode*)come_null_checker(self, "30op.nc", 738))->mRight,
    ((struct sGtNode*)come_null_checker(self, "30op.nc", 738))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGtNode*)come_increment_ref_count(self);
    come_call_finalizer(sGtNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGtNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGtNode_kind(struct sGtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGtNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_23;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj89  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj90  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sGtNode*)come_null_checker(self, "30op.nc", 749))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sGtNode*)come_null_checker(self, "30op.nc", 757))->mRight);
    Value_23=node_compile(right_node,info);
    if(!Value_23) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 765))->type);
    const char* fun_name="operator_gt";
    if(((struct sGtNode*)come_null_checker(self, "30op.nc", 769))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 777, "struct CVALUE* "))), "30op.nc", 777)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj89=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 779))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 779))->c_value=(char* )come_increment_ref_count(xsprintf("%s>%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 779))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 779))->c_value));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj90=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 780))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 780))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 780, "struct sType* "))), "30op.nc", 780))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 781))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 783))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 785))->stack, "30op.nc", 785)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGtNode_finalize(struct sGtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 0))->sname = come_decrement_ref_count(((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 1))->mLeft) ? ((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 1))->mLeft, ((struct sNode*)((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 2))->mRight) ? ((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 2))->mRight, ((struct sNode*)((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sGtNode*)come_null_checker(self, "sGtNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj91;
    struct sNode* __dec_obj92;
    struct sEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)come_null_checker(self, "30op.nc", 796))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sEqNode*)come_null_checker(self, "30op.nc", 798))->mQuote=quote;
    __dec_obj91=((struct sEqNode*)come_null_checker(self, "30op.nc", 799))->mLeft,
    ((struct sEqNode*)come_null_checker(self, "30op.nc", 799))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj92=((struct sEqNode*)come_null_checker(self, "30op.nc", 800))->mRight,
    ((struct sEqNode*)come_null_checker(self, "30op.nc", 800))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sEqNode_kind(struct sEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEqNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_24;
    _Bool __result_obj__0;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj93  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj94  ;
    left_node=((struct sEqNode*)come_null_checker(self, "30op.nc", 811))->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=((struct sEqNode*)come_null_checker(self, "30op.nc", 819))->mRight;
    Value_24=node_compile(right_node,info);
    if(!Value_24) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 827, "struct CVALUE* "))), "30op.nc", 827)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj93=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 829))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 829))->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 829))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 829))->c_value));
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj94=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 830))->type,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 830))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 830, "struct sType* "))), "30op.nc", 830))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 831))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 833))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 835))->stack, "30op.nc", 835)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEqNode_finalize(struct sEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 0))->sname = come_decrement_ref_count(((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 1))->mLeft) ? ((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 1))->mLeft, ((struct sNode*)((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 2))->mRight) ? ((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 2))->mRight, ((struct sNode*)((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sEqNode*)come_null_checker(self, "sEqNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj95;
    struct sNode* __dec_obj96;
    struct sNotEqNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)come_null_checker(self, "30op.nc", 845))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sNotEqNode*)come_null_checker(self, "30op.nc", 847))->mQuote=quote;
    __dec_obj95=((struct sNotEqNode*)come_null_checker(self, "30op.nc", 848))->mLeft,
    ((struct sNotEqNode*)come_null_checker(self, "30op.nc", 848))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj96=((struct sNotEqNode*)come_null_checker(self, "30op.nc", 849))->mRight,
    ((struct sNotEqNode*)come_null_checker(self, "30op.nc", 849))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sNotEqNode*)come_increment_ref_count(self);
    come_call_finalizer(sNotEqNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEqNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sNotEqNode_kind(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEqNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_25;
    _Bool __result_obj__0;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj97  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj98  ;
    left_node=((struct sNotEqNode*)come_null_checker(self, "30op.nc", 860))->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=((struct sNotEqNode*)come_null_checker(self, "30op.nc", 868))->mRight;
    Value_25=node_compile(right_node,info);
    if(!Value_25) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 876, "struct CVALUE* "))), "30op.nc", 876)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj97=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 878))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 878))->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 878))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 878))->c_value));
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj98=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 879))->type,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 879))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 879, "struct sType* "))), "30op.nc", 879))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 880))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 882))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 884))->stack, "30op.nc", 884)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEqNode_finalize(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 0))->sname = come_decrement_ref_count(((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 1))->mLeft) ? ((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 1))->mLeft, ((struct sNode*)((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 2))->mRight) ? ((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 2))->mRight, ((struct sNode*)((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sNode* __dec_obj100;
    struct sEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)come_null_checker(self, "30op.nc", 894))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sEq2Node*)come_null_checker(self, "30op.nc", 896))->mQuote=quote;
    __dec_obj99=((struct sEq2Node*)come_null_checker(self, "30op.nc", 897))->mLeft,
    ((struct sEq2Node*)come_null_checker(self, "30op.nc", 897))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj100=((struct sEq2Node*)come_null_checker(self, "30op.nc", 898))->mRight,
    ((struct sEq2Node*)come_null_checker(self, "30op.nc", 898))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sEq2Node*)come_increment_ref_count(self);
    come_call_finalizer(sEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sEq2Node_kind(struct sEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEq2Node"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_26;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj101  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj102  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sEq2Node*)come_null_checker(self, "30op.nc", 909))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sEq2Node*)come_null_checker(self, "30op.nc", 917))->mRight);
    Value_26=node_compile(right_node,info);
    if(!Value_26) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 925))->type);
    const char* fun_name="operator_equals";
    if(((struct sEq2Node*)come_null_checker(self, "30op.nc", 929))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 938, "struct CVALUE* "))), "30op.nc", 938)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj101=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 940))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 940))->c_value=(char* )come_increment_ref_count(xsprintf("%s==%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 940))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 940))->c_value));
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj102=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 941))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 941))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 941, "struct sType* "))), "30op.nc", 941))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 942))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 944))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 946))->stack, "30op.nc", 946)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sEq2Node_finalize(struct sEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 0))->sname!=((void*)0)) {
        (((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 0))->sname = come_decrement_ref_count(((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 1))->mLeft) ? ((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 1))->mLeft = come_decrement_ref_count(((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 1))->mLeft, ((struct sNode*)((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 2))->mRight) ? ((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 2))->mRight = come_decrement_ref_count(((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 2))->mRight, ((struct sNode*)((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sEq2Node*)come_null_checker(self, "sEq2Node_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj103;
    struct sNode* __dec_obj104;
    struct sNotEq2Node* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 957))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 959))->mQuote=quote;
    __dec_obj103=((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 960))->mLeft,
    ((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 960))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj104=((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 961))->mRight,
    ((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 961))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sNotEq2Node*)come_increment_ref_count(self);
    come_call_finalizer(sNotEq2Node_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNotEq2Node_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sNotEq2Node_kind(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNotEq2Node"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_27;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj105  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj106  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 972))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 980))->mRight);
    Value_27=node_compile(right_node,info);
    if(!Value_27) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 988))->type);
    const char* fun_name="operator_not_equals";
    if(((struct sNotEq2Node*)come_null_checker(self, "30op.nc", 992))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1000, "struct CVALUE* "))), "30op.nc", 1000)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj105=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1002))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1002))->c_value=(char* )come_increment_ref_count(xsprintf("%s!=%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1002))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1002))->c_value));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj106=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1003))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1003))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1003, "struct sType* "))), "30op.nc", 1003))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1004))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1006))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1008))->stack, "30op.nc", 1008)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 0))->sname!=((void*)0)) {
        (((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 0))->sname = come_decrement_ref_count(((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 1))->mLeft) ? ((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 1))->mLeft = come_decrement_ref_count(((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 1))->mLeft, ((struct sNode*)((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 2))->mRight) ? ((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 2))->mRight = come_decrement_ref_count(((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 2))->mRight, ((struct sNode*)((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj107;
    struct sNode* __dec_obj108;
    struct sAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)come_null_checker(self, "30op.nc", 1019))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sAndNode*)come_null_checker(self, "30op.nc", 1021))->mQuote=quote;
    __dec_obj107=((struct sAndNode*)come_null_checker(self, "30op.nc", 1022))->mLeft,
    ((struct sAndNode*)come_null_checker(self, "30op.nc", 1022))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj108=((struct sAndNode*)come_null_checker(self, "30op.nc", 1023))->mRight,
    ((struct sAndNode*)come_null_checker(self, "30op.nc", 1023))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAndNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAndNode_kind(struct sAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_28;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj109  ;
    struct sType*  __dec_obj110  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sAndNode*)come_null_checker(self, "30op.nc", 1034))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sAndNode*)come_null_checker(self, "30op.nc", 1042))->mRight);
    Value_28=node_compile(right_node,info);
    if(!Value_28) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1050))->type);
    const char* fun_name="operator_and";
    if(((struct sAndNode*)come_null_checker(self, "30op.nc", 1054))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1063, "struct CVALUE* "))), "30op.nc", 1063)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj109=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1065))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1065))->c_value=(char* )come_increment_ref_count(xsprintf("%s&%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1065))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1065))->c_value));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj110=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1066))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1066))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1066))->type));
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1067))->type, "30op.nc", 1067))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1068))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1070))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1072))->stack, "30op.nc", 1072)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndNode_finalize(struct sAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 0))->sname = come_decrement_ref_count(((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 1))->mLeft) ? ((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 1))->mLeft, ((struct sNode*)((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 2))->mRight) ? ((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 2))->mRight, ((struct sNode*)((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sAndNode*)come_null_checker(self, "sAndNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj111;
    struct sNode* __dec_obj112;
    struct sXOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)come_null_checker(self, "30op.nc", 1083))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sXOrNode*)come_null_checker(self, "30op.nc", 1085))->mQuote=quote;
    __dec_obj111=((struct sXOrNode*)come_null_checker(self, "30op.nc", 1086))->mLeft,
    ((struct sXOrNode*)come_null_checker(self, "30op.nc", 1086))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj112=((struct sXOrNode*)come_null_checker(self, "30op.nc", 1087))->mRight,
    ((struct sXOrNode*)come_null_checker(self, "30op.nc", 1087))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sXOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sXOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sXOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sXOrNode_kind(struct sXOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sXOrNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_29;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj113  ;
    struct sType*  __dec_obj114  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sXOrNode*)come_null_checker(self, "30op.nc", 1098))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sXOrNode*)come_null_checker(self, "30op.nc", 1106))->mRight);
    Value_29=node_compile(right_node,info);
    if(!Value_29) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1114))->type);
    const char* fun_name="operator_xor";
    if(((struct sXOrNode*)come_null_checker(self, "30op.nc", 1118))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1126, "struct CVALUE* "))), "30op.nc", 1126)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj113=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1128))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1128))->c_value=(char* )come_increment_ref_count(xsprintf("%s^%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1128))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1128))->c_value));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj114=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1129))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1129))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1129))->type));
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1130))->type, "30op.nc", 1130))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1131))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1133))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1135))->stack, "30op.nc", 1135)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sXOrNode_finalize(struct sXOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 0))->sname = come_decrement_ref_count(((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 1))->mLeft) ? ((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 1))->mLeft, ((struct sNode*)((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 2))->mRight) ? ((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 2))->mRight, ((struct sNode*)((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sXOrNode*)come_null_checker(self, "sXOrNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj115;
    struct sNode* __dec_obj116;
    struct sOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)come_null_checker(self, "30op.nc", 1146))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sOrNode*)come_null_checker(self, "30op.nc", 1148))->mQuote=quote;
    __dec_obj115=((struct sOrNode*)come_null_checker(self, "30op.nc", 1149))->mLeft,
    ((struct sOrNode*)come_null_checker(self, "30op.nc", 1149))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj116=((struct sOrNode*)come_null_checker(self, "30op.nc", 1150))->mRight,
    ((struct sOrNode*)come_null_checker(self, "30op.nc", 1150))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sOrNode_kind(struct sOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_30;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj117  ;
    struct sType*  __dec_obj118  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sOrNode*)come_null_checker(self, "30op.nc", 1161))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sOrNode*)come_null_checker(self, "30op.nc", 1169))->mRight);
    Value_30=node_compile(right_node,info);
    if(!Value_30) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1177))->type);
    const char* fun_name="operator_or";
    if(((struct sOrNode*)come_null_checker(self, "30op.nc", 1181))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1190, "struct CVALUE* "))), "30op.nc", 1190)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj117=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1192))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1192))->c_value=(char* )come_increment_ref_count(xsprintf("%s|%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1192))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1192))->c_value));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj118=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1193))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1193))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1193))->type));
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1194))->type, "30op.nc", 1194))->mHeap=(_Bool)0;
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1195))->var=((void*)0);
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1197))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1199))->stack, "30op.nc", 1199)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrNode_finalize(struct sOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 0))->sname = come_decrement_ref_count(((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 1))->mLeft) ? ((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 1))->mLeft, ((struct sNode*)((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 2))->mRight) ? ((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 2))->mRight, ((struct sNode*)((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sOrNode*)come_null_checker(self, "sOrNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj119;
    struct sNode* __dec_obj120;
    struct sAndAndNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1210))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1212))->mQuote=quote;
    __dec_obj119=((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1213))->mLeft,
    ((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1213))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj120=((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1214))->mRight,
    ((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1214))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAndAndNode*)come_increment_ref_count(self);
    come_call_finalizer(sAndAndNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndAndNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAndAndNode_kind(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndAndNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_31;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj121  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj122  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1225))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1233))->mRight);
    Value_31=node_compile(right_node,info);
    if(!Value_31) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1241))->type);
    const char* fun_name="operator_andand";
    if(((struct sAndAndNode*)come_null_checker(self, "30op.nc", 1245))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1254, "struct CVALUE* "))), "30op.nc", 1254)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj121=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1256))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1256))->c_value=(char* )come_increment_ref_count(xsprintf("%s&&%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1256))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1256))->c_value));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj122=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1257))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1257))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1257, "struct sType* "))), "30op.nc", 1257))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1258))->var=((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1258))->var;
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1260))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1262))->stack, "30op.nc", 1262)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAndAndNode_finalize(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 0))->sname = come_decrement_ref_count(((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 1))->mLeft) ? ((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 1))->mLeft, ((struct sNode*)((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 2))->mRight) ? ((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 2))->mRight, ((struct sNode*)((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sNode* __dec_obj124;
    struct sOrOrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1273))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1275))->mQuote=quote;
    __dec_obj123=((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1276))->mLeft,
    ((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1276))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj124=((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1277))->mRight,
    ((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1277))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sOrOrNode*)come_increment_ref_count(self);
    come_call_finalizer(sOrOrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrOrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sOrOrNode_kind(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrOrNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_32;
    struct CVALUE*  right_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj125  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj126  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left_node=(struct sNode*)come_increment_ref_count(((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1288))->mLeft);
    Value=node_compile(left_node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=(struct sNode*)come_increment_ref_count(((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1296))->mRight);
    Value_32=node_compile(right_node,info);
    if(!Value_32) {
        __result_obj__0 = (_Bool)0;
        ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1304))->type);
    const char* fun_name="operator_oror";
    if(((struct sOrOrNode*)come_null_checker(self, "30op.nc", 1308))->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left_node),(struct sNode*)come_increment_ref_count(right_node),left_value,right_value,(_Bool)0,info);
    }
    if(!calling_fun) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1316, "struct CVALUE* "))), "30op.nc", 1316)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj125=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1318))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1318))->c_value=(char* )come_increment_ref_count(xsprintf("%s||%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1318))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1318))->c_value));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj126=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1319))->type,
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1319))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1319, "struct sType* "))), "30op.nc", 1319))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1320))->var=((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1320))->var;
        add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1322))->c_value);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1324))->stack, "30op.nc", 1324)),(struct CVALUE* )come_increment_ref_count(come_value));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOrOrNode_finalize(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 0))->sname = come_decrement_ref_count(((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 1))->mLeft) ? ((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 1))->mLeft, ((struct sNode*)((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 2))->mRight) ? ((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 2))->mRight, ((struct sNode*)((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj127;
    struct sNode* __dec_obj128;
    struct sCommaNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)come_null_checker(self, "30op.nc", 1335))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj127=((struct sCommaNode*)come_null_checker(self, "30op.nc", 1337))->mLeft,
    ((struct sCommaNode*)come_null_checker(self, "30op.nc", 1337))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj128=((struct sCommaNode*)come_null_checker(self, "30op.nc", 1338))->mRight,
    ((struct sCommaNode*)come_null_checker(self, "30op.nc", 1338))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sCommaNode*)come_increment_ref_count(self);
    come_call_finalizer(sCommaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCommaNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sCommaNode_kind(struct sCommaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCommaNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_compile"; neo_current_frame = &fr;
    struct sNode* left_node;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sNode* right_node;
    _Bool Value_33;
    _Bool __result_obj__0;
    struct CVALUE*  right_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj129  ;
    struct sType*  __dec_obj130  ;
    left_node=((struct sCommaNode*)come_null_checker(self, "30op.nc", 1349))->mLeft;
    Value=node_compile(left_node,info);
    if(!Value) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    right_node=((struct sCommaNode*)come_null_checker(self, "30op.nc", 1357))->mRight;
    Value_33=node_compile(right_node,info);
    if(!Value_33) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1365, "struct CVALUE* "))), "30op.nc", 1365)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj129=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1367))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1367))->c_value=(char* )come_increment_ref_count(xsprintf("%s,%s",((struct CVALUE* )come_null_checker(left_value, "30op.nc", 1367))->c_value,((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1367))->c_value));
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj130=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1368))->type,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1368))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(right_value, "30op.nc", 1368))->type));
    come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1369))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1371))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1373))->stack, "30op.nc", 1373)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCommaNode_finalize(struct sCommaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 0))->sname = come_decrement_ref_count(((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 1))->mLeft!=((void*)0)) {
        ((((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 1))->mLeft) ? ((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 1))->mLeft = come_decrement_ref_count(((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 1))->mLeft, ((struct sNode*)((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 1))->mLeft)->finalize, ((struct sNode*)((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 1))->mLeft)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 2))->mRight!=((void*)0)) {
        ((((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 2))->mRight) ? ((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 2))->mRight = come_decrement_ref_count(((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 2))->mRight, ((struct sNode*)((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 2))->mRight)->finalize, ((struct sNode*)((struct sCommaNode*)come_null_checker(self, "sCommaNode_finalize", 2))->mRight)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj131;
    struct sNode* __dec_obj132;
    struct sNode* __dec_obj133;
    struct sConditionalNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1383))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj131=((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1385))->mValue1,
    ((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1385))->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj132=((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1386))->mValue2,
    ((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1386))->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj133=((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1387))->mValue3,
    ((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1387))->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sConditionalNode*)come_increment_ref_count(self);
    come_call_finalizer(sConditionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sConditionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sConditionalNode_kind(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sConditionalNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_compile"; neo_current_frame = &fr;
    _Bool in_conditional_operator;
    struct sNode* value1;
    _Bool Value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  value1_value  ;
    struct sNode* value2;
    _Bool Value_34;
    _Bool __result_obj__0;
    struct CVALUE*  value2_value  ;
    struct sNode* value3;
    _Bool Value_35;
    struct CVALUE*  value3_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj134  ;
    struct sType*  __dec_obj135  ;
    in_conditional_operator=((struct sInfo* )come_null_checker(info, "30op.nc", 1397))->in_conditional_operator;
    ((struct sInfo* )come_null_checker(info, "30op.nc", 1398))->in_conditional_operator=(_Bool)1;
    value1=((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1401))->mValue1;
    Value=node_compile(value1,info);
    if(!Value) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    value1_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    value2=((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1409))->mValue2;
    Value_34=node_compile(value2,info);
    if(!Value_34) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    value2_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    value3=((struct sConditionalNode*)come_null_checker(self, "30op.nc", 1417))->mValue3;
    Value_35=node_compile(value3,info);
    if(!Value_35) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    value3_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1425, "struct CVALUE* "))), "30op.nc", 1425)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj134=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1427))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1427))->c_value=(char* )come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",((struct CVALUE* )come_null_checker(value1_value, "30op.nc", 1427))->c_value,((struct CVALUE* )come_null_checker(value2_value, "30op.nc", 1427))->c_value,((struct CVALUE* )come_null_checker(value3_value, "30op.nc", 1427))->c_value));
    __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj135=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1428))->type,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1428))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(value2_value, "30op.nc", 1428))->type));
    come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1429))->var=((void*)0);
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "30op.nc", 1431))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 1433))->stack, "30op.nc", 1433)),(struct CVALUE* )come_increment_ref_count(come_value));
    ((struct sInfo* )come_null_checker(info, "30op.nc", 1435))->in_conditional_operator=in_conditional_operator;
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, value1_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, value2_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, value3_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sConditionalNode_finalize(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 0))->sname = come_decrement_ref_count(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 1))->mValue1!=((void*)0)) {
        ((((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 1))->mValue1) ? ((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 1))->mValue1 = come_decrement_ref_count(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 1))->mValue1, ((struct sNode*)((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 1))->mValue1)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 1))->mValue1)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 2))->mValue2!=((void*)0)) {
        ((((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 2))->mValue2) ? ((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 2))->mValue2 = come_decrement_ref_count(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 2))->mValue2, ((struct sNode*)((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 2))->mValue2)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 2))->mValue2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 3))->mValue3!=((void*)0)) {
        ((((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 3))->mValue3) ? ((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 3))->mValue3 = come_decrement_ref_count(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 3))->mValue3, ((struct sNode*)((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 3))->mValue3)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_finalize", 3))->mValue3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sConditionalNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1443, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count(((struct sConditionalNode* )come_null_checker(((struct sConditionalNode* )(__right_value0=(struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), (void*)0, 1443, "struct sConditionalNode* "))), "30op.nc", 1443))),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)));
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sConditionalNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sConditionalNode_clone"; neo_current_frame = &fr;
    struct sConditionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sConditionalNode*  result  ;
    char*  __dec_obj136  ;
    struct sNode* __dec_obj137;
    struct sNode* __dec_obj138;
    struct sNode* __dec_obj139;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sConditionalNode* )come_increment_ref_count((struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), (void*)0, 3, "struct sConditionalNode* "));
    if(self!=((void*)0)) {
        ((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 4))->sline=((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj136=((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 5))->sname,
        ((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 5))->sname, "sConditionalNode_clone", 5, "char* "));
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 6))->sline_real=((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 7))->mValue1!=((void*)0)) {
        __dec_obj137=((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 7))->mValue1,
        ((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 7))->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 7))->mValue1));
        (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 8))->mValue2!=((void*)0)) {
        __dec_obj138=((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 8))->mValue2,
        ((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 8))->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 8))->mValue2));
        (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 9))->mValue3!=((void*)0)) {
        __dec_obj139=((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 9))->mValue3,
        ((struct sConditionalNode* )come_null_checker(result, "sConditionalNode_clone", 9))->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sConditionalNode*)come_null_checker(self, "sConditionalNode_clone", 9))->mValue3));
        (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sConditionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* mult_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "mult_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* __result_obj__0;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sMultNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj143;
    int sline_real_36;
    struct sNode* right_37;
    struct sNode* _inf_value4;
    struct sDivNode* _inf_obj_value4;
    struct sNode* __dec_obj147;
    int sline_real_38;
    struct sNode* right_39;
    struct sNode* _inf_value5;
    struct sModNode* _inf_obj_value5;
    struct sNode* __dec_obj151;
    int sline_real_40;
    struct sNode* right_41;
    struct sNode* _inf_value6;
    struct sMultNode* _inf_obj_value6;
    struct sNode* __dec_obj152;
    int sline_real_42;
    struct sNode* right_43;
    struct sNode* _inf_value7;
    struct sDivNode* _inf_obj_value7;
    struct sNode* __dec_obj153;
    int sline_real_44;
    struct sNode* right_45;
    struct sNode* _inf_value8;
    struct sModNode* _inf_obj_value8;
    struct sNode* __dec_obj154;
    node=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1452))->p) {
        if(!((struct sNode*)come_null_checker(node, "30op.nc", 1453))->terminated(((struct sNode*)come_null_checker(node, "30op.nc", 1453))->_protocol_obj)&&*((struct sInfo* )come_null_checker(info, "30op.nc", 1453))->p==42&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1453))->p+1)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1454))->p++;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1455))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1456))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1456))->sline;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1459))->p==41) {
                err_msg(info,"invalid )");
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            right=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1465))->sline_real=sline_real;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1467, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count(((struct sMultNode* )come_null_checker(((struct sMultNode* )(__right_value0=(struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), (void*)0, 1467, "struct sMultNode* "))), "30op.nc", 1467))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __dec_obj143=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sMultNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1469))->p==47&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1469))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1469))->p+1)!=42&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1469))->p-1)!=42) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1470))->p++;
            sline_real_36=((struct sInfo* )come_null_checker(info, "30op.nc", 1471))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1472))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1472))->sline;
            skip_spaces_and_lf(info);
            right_37=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1476))->sline_real=sline_real_36;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1478, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count(((struct sDivNode* )come_null_checker(((struct sDivNode* )(__right_value0=(struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), (void*)0, 1478, "struct sDivNode* "))), "30op.nc", 1478))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_37),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __dec_obj147=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sDivNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_37) ? right_37 = come_decrement_ref_count(right_37, ((struct sNode*)right_37)->finalize, ((struct sNode*)right_37)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1480))->p==37&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1480))->p+1)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1481))->p++;
            sline_real_38=((struct sInfo* )come_null_checker(info, "30op.nc", 1482))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1483))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1483))->sline;
            skip_spaces_and_lf(info);
            right_39=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1487))->sline_real=sline_real_38;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1489, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count(((struct sModNode* )come_null_checker(((struct sModNode* )(__right_value0=(struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), (void*)0, 1489, "struct sModNode* "))), "30op.nc", 1489))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_39),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __dec_obj151=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value5);
            (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sModNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_39) ? right_39 = come_decrement_ref_count(right_39, ((struct sNode*)right_39)->finalize, ((struct sNode*)right_39)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(!((struct sNode*)come_null_checker(node, "30op.nc", 1491))->terminated(((struct sNode*)come_null_checker(node, "30op.nc", 1491))->_protocol_obj)&&*((struct sInfo* )come_null_checker(info, "30op.nc", 1491))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1491))->p+1)==42&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1491))->p+2)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1492))->p+=2;
            sline_real_40=((struct sInfo* )come_null_checker(info, "30op.nc", 1493))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1494))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1494))->sline;
            skip_spaces_and_lf(info);
            right_41=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1498))->sline_real=sline_real_40;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1500, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value1=sMultNode_initialize((struct sMultNode* )come_increment_ref_count(((struct sMultNode* )come_null_checker(((struct sMultNode* )(__right_value0=(struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), (void*)0, 1500, "struct sMultNode* "))), "30op.nc", 1500))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_41),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __dec_obj152=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value6);
            (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sMultNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sMultNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_41) ? right_41 = come_decrement_ref_count(right_41, ((struct sNode*)right_41)->finalize, ((struct sNode*)right_41)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1502))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1502))->p+1)==47&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1502))->p+2)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1503))->p+=2;
            sline_real_42=((struct sInfo* )come_null_checker(info, "30op.nc", 1504))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1505))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1505))->sline;
            skip_spaces_and_lf(info);
            right_43=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1509))->sline_real=sline_real_42;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1511, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value1=sDivNode_initialize((struct sDivNode* )come_increment_ref_count(((struct sDivNode* )come_null_checker(((struct sDivNode* )(__right_value0=(struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), (void*)0, 1511, "struct sDivNode* "))), "30op.nc", 1511))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_43),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __dec_obj153=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sDivNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sDivNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_43) ? right_43 = come_decrement_ref_count(right_43, ((struct sNode*)right_43)->finalize, ((struct sNode*)right_43)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1513))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1513))->p+1)==37&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1513))->p+2)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1514))->p+=2;
            sline_real_44=((struct sInfo* )come_null_checker(info, "30op.nc", 1515))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1516))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1516))->sline;
            skip_spaces_and_lf(info);
            right_45=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1520))->sline_real=sline_real_44;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1522, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value1=sModNode_initialize((struct sModNode* )come_increment_ref_count(((struct sModNode* )come_null_checker(((struct sModNode* )(__right_value0=(struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), (void*)0, 1522, "struct sModNode* "))), "30op.nc", 1522))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_45),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __dec_obj154=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sModNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sModNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_45) ? right_45 = come_decrement_ref_count(right_45, ((struct sNode*)right_45)->finalize, ((struct sNode*)right_45)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMultNode_clone"; neo_current_frame = &fr;
    struct sMultNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMultNode*  result  ;
    char*  __dec_obj140  ;
    struct sNode* __dec_obj141;
    struct sNode* __dec_obj142;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMultNode* )come_increment_ref_count((struct sMultNode *)come_calloc(1, sizeof(struct sMultNode )*(1), (void*)0, 3, "struct sMultNode* "));
    if(self!=((void*)0)) {
        ((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 4))->sline=((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj140=((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 5))->sname,
        ((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 5))->sname, "sMultNode_clone", 5, "char* "));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 6))->sline_real=((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 7))->mQuote=((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj141=((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 8))->mLeft,
        ((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 8))->mLeft));
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj142=((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 9))->mRight,
        ((struct sMultNode* )come_null_checker(result, "sMultNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sMultNode*)come_null_checker(self, "sMultNode_clone", 9))->mRight));
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sMultNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDivNode_clone"; neo_current_frame = &fr;
    struct sDivNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDivNode*  result  ;
    char*  __dec_obj144  ;
    struct sNode* __dec_obj145;
    struct sNode* __dec_obj146;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDivNode* )come_increment_ref_count((struct sDivNode *)come_calloc(1, sizeof(struct sDivNode )*(1), (void*)0, 3, "struct sDivNode* "));
    if(self!=((void*)0)) {
        ((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 4))->sline=((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj144=((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 5))->sname,
        ((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 5))->sname, "sDivNode_clone", 5, "char* "));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 6))->sline_real=((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 7))->mQuote=((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj145=((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 8))->mLeft,
        ((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 8))->mLeft));
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj146=((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 9))->mRight,
        ((struct sDivNode* )come_null_checker(result, "sDivNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sDivNode*)come_null_checker(self, "sDivNode_clone", 9))->mRight));
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDivNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sModNode* sModNode_clone(struct sModNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModNode_clone"; neo_current_frame = &fr;
    struct sModNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sModNode*  result  ;
    char*  __dec_obj148  ;
    struct sNode* __dec_obj149;
    struct sNode* __dec_obj150;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sModNode* )come_increment_ref_count((struct sModNode *)come_calloc(1, sizeof(struct sModNode )*(1), (void*)0, 3, "struct sModNode* "));
    if(self!=((void*)0)) {
        ((struct sModNode* )come_null_checker(result, "sModNode_clone", 4))->sline=((struct sModNode*)come_null_checker(self, "sModNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sModNode*)come_null_checker(self, "sModNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj148=((struct sModNode* )come_null_checker(result, "sModNode_clone", 5))->sname,
        ((struct sModNode* )come_null_checker(result, "sModNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sModNode*)come_null_checker(self, "sModNode_clone", 5))->sname, "sModNode_clone", 5, "char* "));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sModNode* )come_null_checker(result, "sModNode_clone", 6))->sline_real=((struct sModNode*)come_null_checker(self, "sModNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sModNode* )come_null_checker(result, "sModNode_clone", 7))->mQuote=((struct sModNode*)come_null_checker(self, "sModNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sModNode*)come_null_checker(self, "sModNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj149=((struct sModNode* )come_null_checker(result, "sModNode_clone", 8))->mLeft,
        ((struct sModNode* )come_null_checker(result, "sModNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sModNode*)come_null_checker(self, "sModNode_clone", 8))->mLeft));
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sModNode*)come_null_checker(self, "sModNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj150=((struct sModNode* )come_null_checker(result, "sModNode_clone", 9))->mRight,
        ((struct sModNode* )come_null_checker(result, "sModNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sModNode*)come_null_checker(self, "sModNode_clone", 9))->mRight));
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sModNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* add_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value9;
    struct sAddNode* _inf_obj_value9;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj158;
    int sline_real_46;
    struct sNode* right_47;
    struct sNode* _inf_value10;
    struct sSubNode* _inf_obj_value10;
    struct sNode* __dec_obj162;
    int sline_real_48;
    struct sNode* right_49;
    struct sNode* _inf_value11;
    struct sAddNode* _inf_obj_value11;
    struct sNode* __dec_obj163;
    int sline_real_50;
    struct sNode* right_51;
    struct sNode* _inf_value12;
    struct sSubNode* _inf_obj_value12;
    struct sNode* __dec_obj164;
    struct sNode* __result_obj__0;
    node=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1540))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1541))->p==43&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1541))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1541))->p+1)!=43) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1543))->p++;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1544))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1545))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1545))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(mult_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1549))->sline_real=sline_real;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1551, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count(((struct sAddNode* )come_null_checker(((struct sAddNode* )(__right_value0=(struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), (void*)0, 1551, "struct sAddNode* "))), "30op.nc", 1551))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __dec_obj158=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value9);
            (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sAddNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1553))->p==45&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1553))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1553))->p+1)!=45&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1553))->p+1)!=62) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1555))->p++;
            sline_real_46=((struct sInfo* )come_null_checker(info, "30op.nc", 1556))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1557))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1557))->sline;
            skip_spaces_and_lf(info);
            right_47=(struct sNode*)come_increment_ref_count(mult_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1561))->sline_real=sline_real_46;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1563, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count(((struct sSubNode* )come_null_checker(((struct sSubNode* )(__right_value0=(struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), (void*)0, 1563, "struct sSubNode* "))), "30op.nc", 1563))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_47),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __dec_obj162=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value10);
            (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sSubNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_47) ? right_47 = come_decrement_ref_count(right_47, ((struct sNode*)right_47)->finalize, ((struct sNode*)right_47)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1565))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1565))->p+1)==43&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1565))->p+2)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1565))->p+2)!=43) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1567))->p+=2;
            sline_real_48=((struct sInfo* )come_null_checker(info, "30op.nc", 1568))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1569))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1569))->sline;
            skip_spaces_and_lf(info);
            right_49=(struct sNode*)come_increment_ref_count(mult_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1573))->sline_real=sline_real_48;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1575, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value1=sAddNode_initialize((struct sAddNode* )come_increment_ref_count(((struct sAddNode* )come_null_checker(((struct sAddNode* )(__right_value0=(struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), (void*)0, 1575, "struct sAddNode* "))), "30op.nc", 1575))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_49),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __dec_obj163=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value11);
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sAddNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAddNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_49) ? right_49 = come_decrement_ref_count(right_49, ((struct sNode*)right_49)->finalize, ((struct sNode*)right_49)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1577))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1577))->p+1)==45&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1577))->p+2)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1577))->p+2)!=45&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1577))->p+2)!=62) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1579))->p+=2;
            sline_real_50=((struct sInfo* )come_null_checker(info, "30op.nc", 1580))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1581))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1581))->sline;
            skip_spaces_and_lf(info);
            right_51=(struct sNode*)come_increment_ref_count(mult_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1585))->sline_real=sline_real_50;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1587, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value1=sSubNode_initialize((struct sSubNode* )come_increment_ref_count(((struct sSubNode* )come_null_checker(((struct sSubNode* )(__right_value0=(struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), (void*)0, 1587, "struct sSubNode* "))), "30op.nc", 1587))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_51),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __dec_obj164=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value12);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sSubNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sSubNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_51) ? right_51 = come_decrement_ref_count(right_51, ((struct sNode*)right_51)->finalize, ((struct sNode*)right_51)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAddNode_clone"; neo_current_frame = &fr;
    struct sAddNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAddNode*  result  ;
    char*  __dec_obj155  ;
    struct sNode* __dec_obj156;
    struct sNode* __dec_obj157;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAddNode* )come_increment_ref_count((struct sAddNode *)come_calloc(1, sizeof(struct sAddNode )*(1), (void*)0, 3, "struct sAddNode* "));
    if(self!=((void*)0)) {
        ((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 4))->sline=((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj155=((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 5))->sname,
        ((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 5))->sname, "sAddNode_clone", 5, "char* "));
        __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 6))->sline_real=((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)&&((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 7))->mLeft!=((void*)0)) {
        __dec_obj156=((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 7))->mLeft,
        ((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 7))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 7))->mLeft));
        (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 8))->mRight!=((void*)0)) {
        __dec_obj157=((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 8))->mRight,
        ((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 8))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 8))->mRight));
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sAddNode* )come_null_checker(result, "sAddNode_clone", 9))->mQuote=((struct sAddNode*)come_null_checker(self, "sAddNode_clone", 9))->mQuote;
    }
    __result_obj__0 = result;
    come_call_finalizer(sAddNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSubNode_clone"; neo_current_frame = &fr;
    struct sSubNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSubNode*  result  ;
    char*  __dec_obj159  ;
    struct sNode* __dec_obj160;
    struct sNode* __dec_obj161;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSubNode* )come_increment_ref_count((struct sSubNode *)come_calloc(1, sizeof(struct sSubNode )*(1), (void*)0, 3, "struct sSubNode* "));
    if(self!=((void*)0)) {
        ((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 4))->sline=((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj159=((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 5))->sname,
        ((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 5))->sname, "sSubNode_clone", 5, "char* "));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 6))->sline_real=((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)&&((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 7))->mLeft!=((void*)0)) {
        __dec_obj160=((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 7))->mLeft,
        ((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 7))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 7))->mLeft));
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 8))->mRight!=((void*)0)) {
        __dec_obj161=((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 8))->mRight,
        ((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 8))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 8))->mRight));
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sSubNode* )come_null_checker(result, "sSubNode_clone", 9))->mQuote=((struct sSubNode*)come_null_checker(self, "sSubNode_clone", 9))->mQuote;
    }
    __result_obj__0 = result;
    come_call_finalizer(sSubNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* shift_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shift_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value13;
    struct sLShiftNode* _inf_obj_value13;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj168;
    int sline_real_52;
    struct sNode* right_53;
    struct sNode* _inf_value14;
    struct sRShiftNode* _inf_obj_value14;
    struct sNode* __dec_obj172;
    int sline_real_54;
    struct sNode* right_55;
    struct sNode* _inf_value15;
    struct sLShiftNode* _inf_obj_value15;
    struct sNode* __dec_obj173;
    int sline_real_56;
    struct sNode* right_57;
    struct sNode* _inf_value16;
    struct sRShiftNode* _inf_obj_value16;
    struct sNode* __dec_obj174;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1607))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1608))->p==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1608))->p+1)==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1608))->p+2)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1609))->p+=2;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1610))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1611))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1611))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(add_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1615))->sline_real=sline_real;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1617, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count(((struct sLShiftNode* )come_null_checker(((struct sLShiftNode* )(__right_value0=(struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), (void*)0, 1617, "struct sLShiftNode* "))), "30op.nc", 1617))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __dec_obj168=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value13);
            (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1619))->p==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1619))->p+1)==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1619))->p+2)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1619))->p+2)!=62) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1620))->p+=2;
            sline_real_52=((struct sInfo* )come_null_checker(info, "30op.nc", 1621))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1622))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1622))->sline;
            skip_spaces_and_lf(info);
            right_53=(struct sNode*)come_increment_ref_count(add_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1626))->sline_real=sline_real_52;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1628, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count(((struct sRShiftNode* )come_null_checker(((struct sRShiftNode* )(__right_value0=(struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), (void*)0, 1628, "struct sRShiftNode* "))), "30op.nc", 1628))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_53),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __dec_obj172=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value14);
            (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_53) ? right_53 = come_decrement_ref_count(right_53, ((struct sNode*)right_53)->finalize, ((struct sNode*)right_53)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1630))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1630))->p+1)==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1630))->p+2)==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1630))->p+3)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1631))->p+=3;
            sline_real_54=((struct sInfo* )come_null_checker(info, "30op.nc", 1632))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1633))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1633))->sline;
            skip_spaces_and_lf(info);
            right_55=(struct sNode*)come_increment_ref_count(add_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1637))->sline_real=sline_real_54;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1639, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value1=sLShiftNode_initialize((struct sLShiftNode* )come_increment_ref_count(((struct sLShiftNode* )come_null_checker(((struct sLShiftNode* )(__right_value0=(struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), (void*)0, 1639, "struct sLShiftNode* "))), "30op.nc", 1639))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_55),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __dec_obj173=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value15);
            (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sLShiftNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_55) ? right_55 = come_decrement_ref_count(right_55, ((struct sNode*)right_55)->finalize, ((struct sNode*)right_55)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1641))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1641))->p+1)==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1641))->p+2)==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1641))->p+3)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1641))->p+3)!=62) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1642))->p+=3;
            sline_real_56=((struct sInfo* )come_null_checker(info, "30op.nc", 1643))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1644))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1644))->sline;
            skip_spaces_and_lf(info);
            right_57=(struct sNode*)come_increment_ref_count(add_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1648))->sline_real=sline_real_56;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1650, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value1=sRShiftNode_initialize((struct sRShiftNode* )come_increment_ref_count(((struct sRShiftNode* )come_null_checker(((struct sRShiftNode* )(__right_value0=(struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), (void*)0, 1650, "struct sRShiftNode* "))), "30op.nc", 1650))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_57),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __dec_obj174=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sRShiftNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sRShiftNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_57) ? right_57 = come_decrement_ref_count(right_57, ((struct sNode*)right_57)->finalize, ((struct sNode*)right_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLShiftNode_clone"; neo_current_frame = &fr;
    struct sLShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLShiftNode*  result  ;
    char*  __dec_obj165  ;
    struct sNode* __dec_obj166;
    struct sNode* __dec_obj167;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLShiftNode* )come_increment_ref_count((struct sLShiftNode *)come_calloc(1, sizeof(struct sLShiftNode )*(1), (void*)0, 3, "struct sLShiftNode* "));
    if(self!=((void*)0)) {
        ((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 4))->sline=((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj165=((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 5))->sname,
        ((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 5))->sname, "sLShiftNode_clone", 5, "char* "));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 6))->sline_real=((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 7))->mQuote=((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj166=((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 8))->mLeft,
        ((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 8))->mLeft));
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj167=((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 9))->mRight,
        ((struct sLShiftNode* )come_null_checker(result, "sLShiftNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLShiftNode*)come_null_checker(self, "sLShiftNode_clone", 9))->mRight));
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sLShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRShiftNode_clone"; neo_current_frame = &fr;
    struct sRShiftNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRShiftNode*  result  ;
    char*  __dec_obj169  ;
    struct sNode* __dec_obj170;
    struct sNode* __dec_obj171;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRShiftNode* )come_increment_ref_count((struct sRShiftNode *)come_calloc(1, sizeof(struct sRShiftNode )*(1), (void*)0, 3, "struct sRShiftNode* "));
    if(self!=((void*)0)) {
        ((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 4))->sline=((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj169=((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 5))->sname,
        ((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 5))->sname, "sRShiftNode_clone", 5, "char* "));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 6))->sline_real=((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 7))->mQuote=((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj170=((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 8))->mLeft,
        ((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 8))->mLeft));
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj171=((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 9))->mRight,
        ((struct sRShiftNode* )come_null_checker(result, "sRShiftNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sRShiftNode*)come_null_checker(self, "sRShiftNode_clone", 9))->mRight));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sRShiftNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comparison_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "comparison_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value17;
    struct sGtEqNode* _inf_obj_value17;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj178;
    int sline_real_58;
    struct sNode* right_59;
    struct sNode* _inf_value18;
    struct sLtEqNode* _inf_obj_value18;
    struct sNode* __dec_obj182;
    int sline_real_60;
    struct sNode* right_61;
    struct sNode* _inf_value19;
    struct sGtNode* _inf_obj_value19;
    struct sNode* __dec_obj186;
    int sline_real_62;
    struct sNode* right_63;
    struct sNode* _inf_value20;
    struct sLtNode* _inf_obj_value20;
    struct sNode* __dec_obj190;
    int sline_real_64;
    struct sNode* right_65;
    struct sNode* _inf_value21;
    struct sGtEqNode* _inf_obj_value21;
    struct sNode* __dec_obj191;
    int sline_real_66;
    struct sNode* right_67;
    struct sNode* _inf_value22;
    struct sLtEqNode* _inf_obj_value22;
    struct sNode* __dec_obj192;
    int sline_real_68;
    struct sNode* right_69;
    struct sNode* _inf_value23;
    struct sGtNode* _inf_obj_value23;
    struct sNode* __dec_obj193;
    int sline_real_70;
    struct sNode* right_71;
    struct sNode* _inf_value24;
    struct sLtNode* _inf_obj_value24;
    struct sNode* __dec_obj194;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1670))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1671))->p==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1671))->p+1)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1672))->p+=2;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1673))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1674))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1674))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1678))->sline_real=sline_real;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1680, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count(((struct sGtEqNode* )come_null_checker(((struct sGtEqNode* )(__right_value0=(struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), (void*)0, 1680, "struct sGtEqNode* "))), "30op.nc", 1680))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __dec_obj178=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value17);
            (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1682))->p==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1682))->p+1)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1683))->p+=2;
            sline_real_58=((struct sInfo* )come_null_checker(info, "30op.nc", 1684))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1685))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1685))->sline;
            skip_spaces_and_lf(info);
            right_59=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1689))->sline_real=sline_real_58;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1691, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count(((struct sLtEqNode* )come_null_checker(((struct sLtEqNode* )(__right_value0=(struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), (void*)0, 1691, "struct sLtEqNode* "))), "30op.nc", 1691))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_59),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __dec_obj182=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value18);
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_59) ? right_59 = come_decrement_ref_count(right_59, ((struct sNode*)right_59)->finalize, ((struct sNode*)right_59)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1693))->p==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1693))->p+1)!=62) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1694))->p++;
            sline_real_60=((struct sInfo* )come_null_checker(info, "30op.nc", 1695))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1696))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1696))->sline;
            skip_spaces_and_lf(info);
            right_61=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1700))->sline_real=sline_real_60;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1702, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count(((struct sGtNode* )come_null_checker(((struct sGtNode* )(__right_value0=(struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), (void*)0, 1702, "struct sGtNode* "))), "30op.nc", 1702))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_61),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __dec_obj186=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value19);
            (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sGtNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_61) ? right_61 = come_decrement_ref_count(right_61, ((struct sNode*)right_61)->finalize, ((struct sNode*)right_61)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1704))->p==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1704))->p+1)!=60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1704))->p+1)!=45) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1705))->p++;
            sline_real_62=((struct sInfo* )come_null_checker(info, "30op.nc", 1706))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1707))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1707))->sline;
            skip_spaces_and_lf(info);
            right_63=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1711))->sline_real=sline_real_62;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1713, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count(((struct sLtNode* )come_null_checker(((struct sLtNode* )(__right_value0=(struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), (void*)0, 1713, "struct sLtNode* "))), "30op.nc", 1713))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_63),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __dec_obj190=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value20);
            (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sLtNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_63) ? right_63 = come_decrement_ref_count(right_63, ((struct sNode*)right_63)->finalize, ((struct sNode*)right_63)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1715))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1715))->p+1)==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1715))->p+2)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1716))->p+=3;
            sline_real_64=((struct sInfo* )come_null_checker(info, "30op.nc", 1717))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1718))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1718))->sline;
            skip_spaces_and_lf(info);
            right_65=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1722))->sline_real=sline_real_64;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1724, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value1=sGtEqNode_initialize((struct sGtEqNode* )come_increment_ref_count(((struct sGtEqNode* )come_null_checker(((struct sGtEqNode* )(__right_value0=(struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), (void*)0, 1724, "struct sGtEqNode* "))), "30op.nc", 1724))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_65),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __dec_obj191=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value21);
            (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sGtEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sGtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_65) ? right_65 = come_decrement_ref_count(right_65, ((struct sNode*)right_65)->finalize, ((struct sNode*)right_65)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1726))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1726))->p+1)==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1726))->p+2)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1727))->p+=3;
            sline_real_66=((struct sInfo* )come_null_checker(info, "30op.nc", 1728))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1729))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1729))->sline;
            skip_spaces_and_lf(info);
            right_67=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1733))->sline_real=sline_real_66;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1735, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value1=sLtEqNode_initialize((struct sLtEqNode* )come_increment_ref_count(((struct sLtEqNode* )come_null_checker(((struct sLtEqNode* )(__right_value0=(struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), (void*)0, 1735, "struct sLtEqNode* "))), "30op.nc", 1735))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_67),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __dec_obj192=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value22);
            (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sLtEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLtEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_67) ? right_67 = come_decrement_ref_count(right_67, ((struct sNode*)right_67)->finalize, ((struct sNode*)right_67)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1737))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1737))->p+1)==62&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1737))->p+2)!=62) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1738))->p+=2;
            sline_real_68=((struct sInfo* )come_null_checker(info, "30op.nc", 1739))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1740))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1740))->sline;
            skip_spaces_and_lf(info);
            right_69=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1744))->sline_real=sline_real_68;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1746, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value1=sGtNode_initialize((struct sGtNode* )come_increment_ref_count(((struct sGtNode* )come_null_checker(((struct sGtNode* )(__right_value0=(struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), (void*)0, 1746, "struct sGtNode* "))), "30op.nc", 1746))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_69),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __dec_obj193=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value23);
            (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sGtNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sGtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_69) ? right_69 = come_decrement_ref_count(right_69, ((struct sNode*)right_69)->finalize, ((struct sNode*)right_69)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1748))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1748))->p+1)==60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1748))->p+2)!=60&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1748))->p+2)!=45) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1749))->p+=2;
            sline_real_70=((struct sInfo* )come_null_checker(info, "30op.nc", 1750))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1751))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1751))->sline;
            skip_spaces_and_lf(info);
            right_71=(struct sNode*)come_increment_ref_count(shift_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1755))->sline_real=sline_real_70;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1757, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count(((struct sLtNode* )come_null_checker(((struct sLtNode* )(__right_value0=(struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), (void*)0, 1757, "struct sLtNode* "))), "30op.nc", 1757))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_71),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __dec_obj194=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value24);
            (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sLtNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_71) ? right_71 = come_decrement_ref_count(right_71, ((struct sNode*)right_71)->finalize, ((struct sNode*)right_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtEqNode_clone"; neo_current_frame = &fr;
    struct sGtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtEqNode*  result  ;
    char*  __dec_obj175  ;
    struct sNode* __dec_obj176;
    struct sNode* __dec_obj177;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtEqNode* )come_increment_ref_count((struct sGtEqNode *)come_calloc(1, sizeof(struct sGtEqNode )*(1), (void*)0, 3, "struct sGtEqNode* "));
    if(self!=((void*)0)) {
        ((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 4))->sline=((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj175=((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 5))->sname,
        ((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 5))->sname, "sGtEqNode_clone", 5, "char* "));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 6))->sline_real=((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 7))->mQuote=((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj176=((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 8))->mLeft,
        ((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 8))->mLeft));
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj177=((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 9))->mRight,
        ((struct sGtEqNode* )come_null_checker(result, "sGtEqNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGtEqNode*)come_null_checker(self, "sGtEqNode_clone", 9))->mRight));
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtEqNode_clone"; neo_current_frame = &fr;
    struct sLtEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtEqNode*  result  ;
    char*  __dec_obj179  ;
    struct sNode* __dec_obj180;
    struct sNode* __dec_obj181;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtEqNode* )come_increment_ref_count((struct sLtEqNode *)come_calloc(1, sizeof(struct sLtEqNode )*(1), (void*)0, 3, "struct sLtEqNode* "));
    if(self!=((void*)0)) {
        ((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 4))->sline=((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj179=((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 5))->sname,
        ((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 5))->sname, "sLtEqNode_clone", 5, "char* "));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 6))->sline_real=((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 7))->mQuote=((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj180=((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 8))->mLeft,
        ((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 8))->mLeft));
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj181=((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 9))->mRight,
        ((struct sLtEqNode* )come_null_checker(result, "sLtEqNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLtEqNode*)come_null_checker(self, "sLtEqNode_clone", 9))->mRight));
        (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sLtEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGtNode_clone"; neo_current_frame = &fr;
    struct sGtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGtNode*  result  ;
    char*  __dec_obj183  ;
    struct sNode* __dec_obj184;
    struct sNode* __dec_obj185;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGtNode* )come_increment_ref_count((struct sGtNode *)come_calloc(1, sizeof(struct sGtNode )*(1), (void*)0, 3, "struct sGtNode* "));
    if(self!=((void*)0)) {
        ((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 4))->sline=((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj183=((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 5))->sname,
        ((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 5))->sname, "sGtNode_clone", 5, "char* "));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 6))->sline_real=((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 7))->mQuote=((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj184=((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 8))->mLeft,
        ((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 8))->mLeft));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj185=((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 9))->mRight,
        ((struct sGtNode* )come_null_checker(result, "sGtNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sGtNode*)come_null_checker(self, "sGtNode_clone", 9))->mRight));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLtNode_clone"; neo_current_frame = &fr;
    struct sLtNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLtNode*  result  ;
    char*  __dec_obj187  ;
    struct sNode* __dec_obj188;
    struct sNode* __dec_obj189;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLtNode* )come_increment_ref_count((struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), (void*)0, 3, "struct sLtNode* "));
    if(self!=((void*)0)) {
        ((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 4))->sline=((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj187=((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 5))->sname,
        ((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 5))->sname, "sLtNode_clone", 5, "char* "));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 6))->sline_real=((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 7))->mQuote=((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj188=((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 8))->mLeft,
        ((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 8))->mLeft));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj189=((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 9))->mRight,
        ((struct sLtNode* )come_null_checker(result, "sLtNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sLtNode*)come_null_checker(self, "sLtNode_clone", 9))->mRight));
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sLtNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* eq_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "eq_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value25;
    struct sEq2Node* _inf_obj_value25;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj198;
    int sline_real_72;
    struct sNode* right_73;
    struct sNode* _inf_value26;
    struct sEqNode* _inf_obj_value26;
    struct sNode* __dec_obj202;
    int sline_real_74;
    struct sNode* right_75;
    struct sNode* _inf_value27;
    struct sNotEq2Node* _inf_obj_value27;
    struct sNode* __dec_obj206;
    int sline_real_76;
    struct sNode* right_77;
    struct sNode* _inf_value28;
    struct sNotEqNode* _inf_obj_value28;
    struct sNode* __dec_obj210;
    int sline_real_78;
    struct sNode* right_79;
    struct sNode* _inf_value29;
    struct sEq2Node* _inf_obj_value29;
    struct sNode* __dec_obj211;
    int sline_real_80;
    struct sNode* right_81;
    struct sNode* _inf_value30;
    struct sEqNode* _inf_obj_value30;
    struct sNode* __dec_obj212;
    int sline_real_82;
    struct sNode* right_83;
    struct sNode* _inf_value31;
    struct sNotEq2Node* _inf_obj_value31;
    struct sNode* __dec_obj213;
    int sline_real_84;
    struct sNode* right_85;
    struct sNode* _inf_value32;
    struct sNotEqNode* _inf_obj_value32;
    struct sNode* __dec_obj214;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1777))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1778))->p==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1778))->p+1)==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1778))->p+2)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1779))->p+=3;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1780))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1781))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1781))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1785))->sline_real=sline_real;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1787, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count(((struct sEq2Node* )come_null_checker(((struct sEq2Node* )(__right_value0=(struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), (void*)0, 1787, "struct sEq2Node* "))), "30op.nc", 1787))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __dec_obj198=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value25);
            (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1789))->p==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1789))->p+1)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1790))->p+=2;
            sline_real_72=((struct sInfo* )come_null_checker(info, "30op.nc", 1791))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1792))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1792))->sline;
            skip_spaces_and_lf(info);
            right_73=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1796))->sline_real=sline_real_72;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1798, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count(((struct sEqNode* )come_null_checker(((struct sEqNode* )(__right_value0=(struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), (void*)0, 1798, "struct sEqNode* "))), "30op.nc", 1798))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_73),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __dec_obj202=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value26);
            (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_73) ? right_73 = come_decrement_ref_count(right_73, ((struct sNode*)right_73)->finalize, ((struct sNode*)right_73)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1800))->p==33&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1800))->p+1)==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1800))->p+2)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1801))->p+=3;
            sline_real_74=((struct sInfo* )come_null_checker(info, "30op.nc", 1802))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1803))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1803))->sline;
            skip_spaces_and_lf(info);
            right_75=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1807))->sline_real=sline_real_74;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1809, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count(((struct sNotEq2Node* )come_null_checker(((struct sNotEq2Node* )(__right_value0=(struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), (void*)0, 1809, "struct sNotEq2Node* "))), "30op.nc", 1809))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_75),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __dec_obj206=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value27);
            (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_75) ? right_75 = come_decrement_ref_count(right_75, ((struct sNode*)right_75)->finalize, ((struct sNode*)right_75)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1811))->p==33&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1811))->p+1)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1812))->p+=2;
            sline_real_76=((struct sInfo* )come_null_checker(info, "30op.nc", 1813))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1814))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1814))->sline;
            skip_spaces_and_lf(info);
            right_77=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1818))->sline_real=sline_real_76;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1820, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count(((struct sNotEqNode* )come_null_checker(((struct sNotEqNode* )(__right_value0=(struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), (void*)0, 1820, "struct sNotEqNode* "))), "30op.nc", 1820))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_77),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __dec_obj210=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value28);
            (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_77) ? right_77 = come_decrement_ref_count(right_77, ((struct sNode*)right_77)->finalize, ((struct sNode*)right_77)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1822))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1822))->p+1)==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1822))->p+2)==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1822))->p+3)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1823))->p+=4;
            sline_real_78=((struct sInfo* )come_null_checker(info, "30op.nc", 1824))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1825))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1825))->sline;
            skip_spaces_and_lf(info);
            right_79=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1829))->sline_real=sline_real_78;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1831, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value1=sEq2Node_initialize((struct sEq2Node* )come_increment_ref_count(((struct sEq2Node* )come_null_checker(((struct sEq2Node* )(__right_value0=(struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), (void*)0, 1831, "struct sEq2Node* "))), "30op.nc", 1831))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_79),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __dec_obj211=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value29);
            (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sEq2Node_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_79) ? right_79 = come_decrement_ref_count(right_79, ((struct sNode*)right_79)->finalize, ((struct sNode*)right_79)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1833))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1833))->p+1)==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1833))->p+2)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1834))->p+=3;
            sline_real_80=((struct sInfo* )come_null_checker(info, "30op.nc", 1835))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1836))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1836))->sline;
            skip_spaces_and_lf(info);
            right_81=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1840))->sline_real=sline_real_80;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1842, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value1=sEqNode_initialize((struct sEqNode* )come_increment_ref_count(((struct sEqNode* )come_null_checker(((struct sEqNode* )(__right_value0=(struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), (void*)0, 1842, "struct sEqNode* "))), "30op.nc", 1842))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_81),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __dec_obj212=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value30);
            (__dec_obj212 ? __dec_obj212 = come_decrement_ref_count(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_81) ? right_81 = come_decrement_ref_count(right_81, ((struct sNode*)right_81)->finalize, ((struct sNode*)right_81)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1844))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1844))->p+1)==33&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1844))->p+2)==61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1844))->p+3)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1845))->p+=4;
            sline_real_82=((struct sInfo* )come_null_checker(info, "30op.nc", 1846))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1847))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1847))->sline;
            skip_spaces_and_lf(info);
            right_83=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1851))->sline_real=sline_real_82;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1853, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value1=sNotEq2Node_initialize((struct sNotEq2Node* )come_increment_ref_count(((struct sNotEq2Node* )come_null_checker(((struct sNotEq2Node* )(__right_value0=(struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), (void*)0, 1853, "struct sNotEq2Node* "))), "30op.nc", 1853))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_83),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __dec_obj213=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value31);
            (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sNotEq2Node_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_83) ? right_83 = come_decrement_ref_count(right_83, ((struct sNode*)right_83)->finalize, ((struct sNode*)right_83)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1855))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1855))->p+1)==33&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1855))->p+2)==61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1856))->p+=3;
            sline_real_84=((struct sInfo* )come_null_checker(info, "30op.nc", 1857))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1858))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1858))->sline;
            skip_spaces_and_lf(info);
            right_85=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1862))->sline_real=sline_real_84;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1864, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value1=sNotEqNode_initialize((struct sNotEqNode* )come_increment_ref_count(((struct sNotEqNode* )come_null_checker(((struct sNotEqNode* )(__right_value0=(struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), (void*)0, 1864, "struct sNotEqNode* "))), "30op.nc", 1864))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_85),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __dec_obj214=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value32);
            (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sNotEqNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sNotEqNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_85) ? right_85 = come_decrement_ref_count(right_85, ((struct sNode*)right_85)->finalize, ((struct sNode*)right_85)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEq2Node_clone"; neo_current_frame = &fr;
    struct sEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEq2Node*  result  ;
    char*  __dec_obj195  ;
    struct sNode* __dec_obj196;
    struct sNode* __dec_obj197;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEq2Node* )come_increment_ref_count((struct sEq2Node *)come_calloc(1, sizeof(struct sEq2Node )*(1), (void*)0, 3, "struct sEq2Node* "));
    if(self!=((void*)0)) {
        ((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 4))->sline=((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 5))->sname!=((void*)0)) {
        __dec_obj195=((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 5))->sname,
        ((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 5))->sname, "sEq2Node_clone", 5, "char* "));
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 6))->sline_real=((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 7))->mQuote=((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj196=((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 8))->mLeft,
        ((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 8))->mLeft));
        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 9))->mRight!=((void*)0)) {
        __dec_obj197=((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 9))->mRight,
        ((struct sEq2Node* )come_null_checker(result, "sEq2Node_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sEq2Node*)come_null_checker(self, "sEq2Node_clone", 9))->mRight));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEqNode_clone"; neo_current_frame = &fr;
    struct sEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEqNode*  result  ;
    char*  __dec_obj199  ;
    struct sNode* __dec_obj200;
    struct sNode* __dec_obj201;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEqNode* )come_increment_ref_count((struct sEqNode *)come_calloc(1, sizeof(struct sEqNode )*(1), (void*)0, 3, "struct sEqNode* "));
    if(self!=((void*)0)) {
        ((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 4))->sline=((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj199=((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 5))->sname,
        ((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 5))->sname, "sEqNode_clone", 5, "char* "));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 6))->sline_real=((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 7))->mQuote=((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj200=((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 8))->mLeft,
        ((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 8))->mLeft));
        (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj201=((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 9))->mRight,
        ((struct sEqNode* )come_null_checker(result, "sEqNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sEqNode*)come_null_checker(self, "sEqNode_clone", 9))->mRight));
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEq2Node_clone"; neo_current_frame = &fr;
    struct sNotEq2Node* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEq2Node*  result  ;
    char*  __dec_obj203  ;
    struct sNode* __dec_obj204;
    struct sNode* __dec_obj205;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEq2Node* )come_increment_ref_count((struct sNotEq2Node *)come_calloc(1, sizeof(struct sNotEq2Node )*(1), (void*)0, 3, "struct sNotEq2Node* "));
    if(self!=((void*)0)) {
        ((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 4))->sline=((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 5))->sname!=((void*)0)) {
        __dec_obj203=((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 5))->sname,
        ((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 5))->sname, "sNotEq2Node_clone", 5, "char* "));
        __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 6))->sline_real=((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 7))->mQuote=((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj204=((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 8))->mLeft,
        ((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 8))->mLeft));
        (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 9))->mRight!=((void*)0)) {
        __dec_obj205=((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 9))->mRight,
        ((struct sNotEq2Node* )come_null_checker(result, "sNotEq2Node_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sNotEq2Node*)come_null_checker(self, "sNotEq2Node_clone", 9))->mRight));
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sNotEq2Node_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNotEqNode_clone"; neo_current_frame = &fr;
    struct sNotEqNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNotEqNode*  result  ;
    char*  __dec_obj207  ;
    struct sNode* __dec_obj208;
    struct sNode* __dec_obj209;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNotEqNode* )come_increment_ref_count((struct sNotEqNode *)come_calloc(1, sizeof(struct sNotEqNode )*(1), (void*)0, 3, "struct sNotEqNode* "));
    if(self!=((void*)0)) {
        ((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 4))->sline=((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj207=((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 5))->sname,
        ((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 5))->sname, "sNotEqNode_clone", 5, "char* "));
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 6))->sline_real=((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 7))->mQuote=((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj208=((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 8))->mLeft,
        ((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 8))->mLeft));
        (__dec_obj208 ? __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj209=((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 9))->mRight,
        ((struct sNotEqNode* )come_null_checker(result, "sNotEqNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sNotEqNode*)come_null_checker(self, "sNotEqNode_clone", 9))->mRight));
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sNotEqNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* and_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "and_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value33;
    struct sAndNode* _inf_obj_value33;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj218;
    int sline_real_86;
    struct sNode* right_87;
    struct sNode* _inf_value34;
    struct sAndNode* _inf_obj_value34;
    struct sNode* __dec_obj219;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(eq_exp(info));
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1884))->p) {
        if(!((struct sNode*)come_null_checker(node, "30op.nc", 1885))->terminated(((struct sNode*)come_null_checker(node, "30op.nc", 1885))->_protocol_obj)&&*((struct sInfo* )come_null_checker(info, "30op.nc", 1885))->p==38&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1885))->p+1)!=38&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1885))->p+1)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1886))->p++;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1887))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1888))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1888))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(eq_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1892))->sline_real=sline_real;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1894, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count(((struct sAndNode* )come_null_checker(((struct sAndNode* )(__right_value0=(struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), (void*)0, 1894, "struct sAndNode* "))), "30op.nc", 1894))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __dec_obj218=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value33);
            (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sAndNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(!((struct sNode*)come_null_checker(node, "30op.nc", 1896))->terminated(((struct sNode*)come_null_checker(node, "30op.nc", 1896))->_protocol_obj)&&*((struct sInfo* )come_null_checker(info, "30op.nc", 1896))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1896))->p+1)==38&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1896))->p+2)!=38&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1896))->p+2)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1897))->p+=2;
            sline_real_86=((struct sInfo* )come_null_checker(info, "30op.nc", 1898))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1899))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1899))->sline;
            skip_spaces_and_lf(info);
            right_87=(struct sNode*)come_increment_ref_count(eq_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1903))->sline_real=sline_real_86;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1905, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value1=sAndNode_initialize((struct sAndNode* )come_increment_ref_count(((struct sAndNode* )come_null_checker(((struct sAndNode* )(__right_value0=(struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), (void*)0, 1905, "struct sAndNode* "))), "30op.nc", 1905))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_87),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __dec_obj219=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value34);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sAndNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_87) ? right_87 = come_decrement_ref_count(right_87, ((struct sNode*)right_87)->finalize, ((struct sNode*)right_87)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndNode_clone"; neo_current_frame = &fr;
    struct sAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndNode*  result  ;
    char*  __dec_obj215  ;
    struct sNode* __dec_obj216;
    struct sNode* __dec_obj217;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndNode* )come_increment_ref_count((struct sAndNode *)come_calloc(1, sizeof(struct sAndNode )*(1), (void*)0, 3, "struct sAndNode* "));
    if(self!=((void*)0)) {
        ((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 4))->sline=((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj215=((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 5))->sname,
        ((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 5))->sname, "sAndNode_clone", 5, "char* "));
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 6))->sline_real=((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 7))->mQuote=((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj216=((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 8))->mLeft,
        ((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 8))->mLeft));
        (__dec_obj216 ? __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj217=((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 9))->mRight,
        ((struct sAndNode* )come_null_checker(result, "sAndNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAndNode*)come_null_checker(self, "sAndNode_clone", 9))->mRight));
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* xor_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xor_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value35;
    struct sXOrNode* _inf_obj_value35;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj223;
    int sline_real_88;
    struct sNode* right_89;
    struct sNode* _inf_value36;
    struct sXOrNode* _inf_obj_value36;
    struct sNode* __dec_obj224;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(and_exp(info));
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1925))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1926))->p==94&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1926))->p+1)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1927))->p++;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1928))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1929))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1929))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(and_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1933))->sline_real=sline_real;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1935, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count(((struct sXOrNode* )come_null_checker(((struct sXOrNode* )(__right_value0=(struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), (void*)0, 1935, "struct sXOrNode* "))), "30op.nc", 1935))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __dec_obj223=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value35);
            (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1937))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1937))->p+1)==94&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1937))->p+2)!=61) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1938))->p+=2;
            sline_real_88=((struct sInfo* )come_null_checker(info, "30op.nc", 1939))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1940))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1940))->sline;
            skip_spaces_and_lf(info);
            right_89=(struct sNode*)come_increment_ref_count(and_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1944))->sline_real=sline_real_88;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1946, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value1=sXOrNode_initialize((struct sXOrNode* )come_increment_ref_count(((struct sXOrNode* )come_null_checker(((struct sXOrNode* )(__right_value0=(struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), (void*)0, 1946, "struct sXOrNode* "))), "30op.nc", 1946))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_89),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __dec_obj224=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value36);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sXOrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sXOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_89) ? right_89 = come_decrement_ref_count(right_89, ((struct sNode*)right_89)->finalize, ((struct sNode*)right_89)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sXOrNode_clone"; neo_current_frame = &fr;
    struct sXOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sXOrNode*  result  ;
    char*  __dec_obj220  ;
    struct sNode* __dec_obj221;
    struct sNode* __dec_obj222;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sXOrNode* )come_increment_ref_count((struct sXOrNode *)come_calloc(1, sizeof(struct sXOrNode )*(1), (void*)0, 3, "struct sXOrNode* "));
    if(self!=((void*)0)) {
        ((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 4))->sline=((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj220=((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 5))->sname,
        ((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 5))->sname, "sXOrNode_clone", 5, "char* "));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 6))->sline_real=((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 7))->mQuote=((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj221=((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 8))->mLeft,
        ((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 8))->mLeft));
        (__dec_obj221 ? __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj222=((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 9))->mRight,
        ((struct sXOrNode* )come_null_checker(result, "sXOrNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sXOrNode*)come_null_checker(self, "sXOrNode_clone", 9))->mRight));
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sXOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* or_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "or_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value37;
    struct sOrNode* _inf_obj_value37;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj228;
    int sline_real_90;
    struct sNode* right_91;
    struct sNode* _inf_value38;
    struct sOrNode* _inf_obj_value38;
    struct sNode* __dec_obj229;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(xor_exp(info));
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 1966))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1967))->p==124&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1967))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1967))->p+1)!=124) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1968))->p++;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1969))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1970))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1970))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(xor_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1974))->sline_real=sline_real;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1976, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count(((struct sOrNode* )come_null_checker(((struct sOrNode* )(__right_value0=(struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), (void*)0, 1976, "struct sOrNode* "))), "30op.nc", 1976))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __dec_obj228=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value37);
            (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sOrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 1978))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1978))->p+1)==124&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1978))->p+2)!=61&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 1978))->p+2)!=124) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1979))->p+=2;
            sline_real_90=((struct sInfo* )come_null_checker(info, "30op.nc", 1980))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1981))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 1981))->sline;
            skip_spaces_and_lf(info);
            right_91=(struct sNode*)come_increment_ref_count(xor_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 1985))->sline_real=sline_real_90;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1987, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value1=sOrNode_initialize((struct sOrNode* )come_increment_ref_count(((struct sOrNode* )come_null_checker(((struct sOrNode* )(__right_value0=(struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), (void*)0, 1987, "struct sOrNode* "))), "30op.nc", 1987))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_91),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __dec_obj229=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value38);
            (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sOrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_91) ? right_91 = come_decrement_ref_count(right_91, ((struct sNode*)right_91)->finalize, ((struct sNode*)right_91)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrNode_clone"; neo_current_frame = &fr;
    struct sOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrNode*  result  ;
    char*  __dec_obj225  ;
    struct sNode* __dec_obj226;
    struct sNode* __dec_obj227;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrNode* )come_increment_ref_count((struct sOrNode *)come_calloc(1, sizeof(struct sOrNode )*(1), (void*)0, 3, "struct sOrNode* "));
    if(self!=((void*)0)) {
        ((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 4))->sline=((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj225=((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 5))->sname,
        ((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 5))->sname, "sOrNode_clone", 5, "char* "));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 6))->sline_real=((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 7))->mQuote=((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj226=((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 8))->mLeft,
        ((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 8))->mLeft));
        (__dec_obj226 ? __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj227=((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 9))->mRight,
        ((struct sOrNode* )come_null_checker(result, "sOrNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sOrNode*)come_null_checker(self, "sOrNode_clone", 9))->mRight));
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* andand_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "andand_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value39;
    struct sAndAndNode* _inf_obj_value39;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj233;
    int sline_real_92;
    struct sNode* right_93;
    struct sNode* _inf_value40;
    struct sAndAndNode* _inf_obj_value40;
    struct sNode* __dec_obj234;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(or_exp(info));
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 2007))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 2008))->p==38&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 2008))->p+1)==38) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2009))->p+=2;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2010))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2011))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2011))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(or_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2015))->sline_real=sline_real;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2017, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count(((struct sAndAndNode* )come_null_checker(((struct sAndAndNode* )(__right_value0=(struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), (void*)0, 2017, "struct sAndAndNode* "))), "30op.nc", 2017))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __dec_obj233=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value39);
            (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 2019))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 2019))->p+1)==38&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 2019))->p+2)==38) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2020))->p+=3;
            sline_real_92=((struct sInfo* )come_null_checker(info, "30op.nc", 2021))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2022))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2022))->sline;
            skip_spaces_and_lf(info);
            right_93=(struct sNode*)come_increment_ref_count(or_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2026))->sline_real=sline_real_92;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2028, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value1=sAndAndNode_initialize((struct sAndAndNode* )come_increment_ref_count(((struct sAndAndNode* )come_null_checker(((struct sAndAndNode* )(__right_value0=(struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), (void*)0, 2028, "struct sAndAndNode* "))), "30op.nc", 2028))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_93),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __dec_obj234=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value40);
            (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sAndAndNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sAndAndNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_93) ? right_93 = come_decrement_ref_count(right_93, ((struct sNode*)right_93)->finalize, ((struct sNode*)right_93)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndAndNode_clone"; neo_current_frame = &fr;
    struct sAndAndNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndAndNode*  result  ;
    char*  __dec_obj230  ;
    struct sNode* __dec_obj231;
    struct sNode* __dec_obj232;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAndAndNode* )come_increment_ref_count((struct sAndAndNode *)come_calloc(1, sizeof(struct sAndAndNode )*(1), (void*)0, 3, "struct sAndAndNode* "));
    if(self!=((void*)0)) {
        ((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 4))->sline=((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj230=((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 5))->sname,
        ((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 5))->sname, "sAndAndNode_clone", 5, "char* "));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 6))->sline_real=((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 7))->mQuote=((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj231=((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 8))->mLeft,
        ((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 8))->mLeft));
        (__dec_obj231 ? __dec_obj231 = come_decrement_ref_count(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj232=((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 9))->mRight,
        ((struct sAndAndNode* )come_null_checker(result, "sAndAndNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sAndAndNode*)come_null_checker(self, "sAndAndNode_clone", 9))->mRight));
        (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAndAndNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* oror_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "oror_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* right;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value41;
    struct sOrOrNode* _inf_obj_value41;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj238;
    int sline_real_94;
    struct sNode* right_95;
    struct sNode* _inf_value42;
    struct sOrOrNode* _inf_obj_value42;
    struct sNode* __dec_obj239;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(andand_exp(info));
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 2048))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 2049))->p==124&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 2049))->p+1)==124) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2050))->p+=2;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2051))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2052))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2052))->sline;
            skip_spaces_and_lf(info);
            right=(struct sNode*)come_increment_ref_count(andand_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2056))->sline_real=sline_real;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2058, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count(((struct sOrOrNode* )come_null_checker(((struct sOrOrNode* )(__right_value0=(struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), (void*)0, 2058, "struct sOrOrNode* "))), "30op.nc", 2058))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __dec_obj238=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value41);
            (__dec_obj238 ? __dec_obj238 = come_decrement_ref_count(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "30op.nc", 2060))->p==92&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 2060))->p+1)==124&&*(((struct sInfo* )come_null_checker(info, "30op.nc", 2060))->p+2)==124) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2061))->p+=3;
            sline_real_94=((struct sInfo* )come_null_checker(info, "30op.nc", 2062))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2063))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2063))->sline;
            skip_spaces_and_lf(info);
            right_95=(struct sNode*)come_increment_ref_count(andand_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2067))->sline_real=sline_real_94;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2069, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value1=sOrOrNode_initialize((struct sOrOrNode* )come_increment_ref_count(((struct sOrOrNode* )come_null_checker(((struct sOrOrNode* )(__right_value0=(struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), (void*)0, 2069, "struct sOrOrNode* "))), "30op.nc", 2069))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_95),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __dec_obj239=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value42);
            (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sOrOrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sOrOrNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((right_95) ? right_95 = come_decrement_ref_count(right_95, ((struct sNode*)right_95)->finalize, ((struct sNode*)right_95)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrOrNode_clone"; neo_current_frame = &fr;
    struct sOrOrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrOrNode*  result  ;
    char*  __dec_obj235  ;
    struct sNode* __dec_obj236;
    struct sNode* __dec_obj237;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOrOrNode* )come_increment_ref_count((struct sOrOrNode *)come_calloc(1, sizeof(struct sOrOrNode )*(1), (void*)0, 3, "struct sOrOrNode* "));
    if(self!=((void*)0)) {
        ((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 4))->sline=((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj235=((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 5))->sname,
        ((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 5))->sname, "sOrOrNode_clone", 5, "char* "));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 6))->sline_real=((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 7))->mQuote=((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 7))->mQuote;
    }
    if(self!=((void*)0)&&((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 8))->mLeft!=((void*)0)) {
        __dec_obj236=((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 8))->mLeft,
        ((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 8))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 8))->mLeft));
        (__dec_obj236 ? __dec_obj236 = come_decrement_ref_count(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 9))->mRight!=((void*)0)) {
        __dec_obj237=((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 9))->mRight,
        ((struct sOrOrNode* )come_null_checker(result, "sOrOrNode_clone", 9))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sOrOrNode*)come_null_checker(self, "sOrOrNode_clone", 9))->mRight));
        (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sOrOrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_comma_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value43;
    struct sCommaNode* _inf_obj_value43;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2083, "struct sNode");
    _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count(((struct sCommaNode* )come_null_checker(((struct sCommaNode* )(__right_value0=(struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), (void*)0, 2083, "struct sCommaNode* "))), "30op.nc", 2083))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(node2),info))));
    _inf_value43->_protocol_obj=_inf_obj_value43;
    _inf_value43->finalize=(void*)sCommaNode_finalize;
    _inf_value43->clone=(void*)sCommaNode_clone;
    _inf_value43->compile=(void*)sCommaNode_compile;
    _inf_value43->sline=(void*)sNodeBase_sline;
    _inf_value43->sline_real=(void*)sNodeBase_sline_real;
    _inf_value43->sname=(void*)sNodeBase_sname;
    _inf_value43->terminated=(void*)sNodeBase_terminated;
    _inf_value43->kind=(void*)sCommaNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value43)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sCommaNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCommaNode_clone"; neo_current_frame = &fr;
    struct sCommaNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCommaNode*  result  ;
    char*  __dec_obj240  ;
    struct sNode* __dec_obj241;
    struct sNode* __dec_obj242;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCommaNode* )come_increment_ref_count((struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), (void*)0, 3, "struct sCommaNode* "));
    if(self!=((void*)0)) {
        ((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 4))->sline=((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj240=((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 5))->sname,
        ((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 5))->sname, "sCommaNode_clone", 5, "char* "));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 6))->sline_real=((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)&&((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 7))->mLeft!=((void*)0)) {
        __dec_obj241=((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 7))->mLeft,
        ((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 7))->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 7))->mLeft));
        (__dec_obj241 ? __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 8))->mRight!=((void*)0)) {
        __dec_obj242=((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 8))->mRight,
        ((struct sCommaNode* )come_null_checker(result, "sCommaNode_clone", 8))->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sCommaNode*)come_null_checker(self, "sCommaNode_clone", 8))->mRight));
        (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sCommaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* comma_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "comma_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* node2;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value44;
    struct sCommaNode* _inf_obj_value44;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj243;
    struct sNode* __result_obj__0;
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(oror_exp(info));
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 2094))->p) {
        if(!((struct sInfo* )come_null_checker(info, "30op.nc", 2095))->no_comma&&*((struct sInfo* )come_null_checker(info, "30op.nc", 2095))->p==44) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2096))->p++;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2097))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2098))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2098))->sline;
            skip_spaces_and_lf(info);
            node2=(struct sNode*)come_increment_ref_count(comma_exp(info));
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2102))->sline_real=sline_real;
            _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2104, "struct sNode");
            _inf_obj_value44=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value1=sCommaNode_initialize((struct sCommaNode* )come_increment_ref_count(((struct sCommaNode* )come_null_checker(((struct sCommaNode* )(__right_value0=(struct sCommaNode *)come_calloc(1, sizeof(struct sCommaNode )*(1), (void*)0, 2104, "struct sCommaNode* "))), "30op.nc", 2104))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(node2),info))));
            _inf_value44->_protocol_obj=_inf_obj_value44;
            _inf_value44->finalize=(void*)sCommaNode_finalize;
            _inf_value44->clone=(void*)sCommaNode_clone;
            _inf_value44->compile=(void*)sCommaNode_compile;
            _inf_value44->sline=(void*)sNodeBase_sline;
            _inf_value44->sline_real=(void*)sNodeBase_sline_real;
            _inf_value44->sname=(void*)sNodeBase_sname;
            _inf_value44->terminated=(void*)sNodeBase_terminated;
            _inf_value44->kind=(void*)sCommaNode_kind;
            __dec_obj243=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value44);
            (__dec_obj243 ? __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sCommaNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sCommaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* conditional_exp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "conditional_exp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    int sline_real;
    struct sNode* value1;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value45;
    struct sNullNode* _inf_obj_value45;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj244;
    _Bool no_label;
    struct sNode* __dec_obj245;
    struct sNode* value2;
    struct sNode* _inf_value46;
    struct sConditionalNode* _inf_obj_value46;
    struct sNode* __dec_obj246;
    struct sNode* __result_obj__0;
    memset(&value1, 0, sizeof(value1));
    skip_spaces_and_lf(info);
    node=(struct sNode*)come_increment_ref_count(comma_exp(info));
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "30op.nc", 2124))->p) {
        if(*((struct sInfo* )come_null_checker(info, "30op.nc", 2125))->p==63) {
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2126))->p++;
            sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2127))->sline_real;
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2128))->sline_real=((struct sInfo* )come_null_checker(info, "30op.nc", 2128))->sline;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "30op.nc", 2132))->p==58) {
                _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2133, "struct sNode");
                _inf_obj_value45=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count(((struct sNullNode* )come_null_checker(((struct sNullNode* )(__right_value0=(struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), (void*)0, 2133, "struct sNullNode* "))), "30op.nc", 2133))),info))));
                _inf_value45->_protocol_obj=_inf_obj_value45;
                _inf_value45->finalize=(void*)sNullNode_finalize;
                _inf_value45->clone=(void*)sNullNode_clone;
                _inf_value45->compile=(void*)sNullNode_compile;
                _inf_value45->sline=(void*)sNodeBase_sline;
                _inf_value45->sline_real=(void*)sNodeBase_sline_real;
                _inf_value45->sname=(void*)sNodeBase_sname;
                _inf_value45->terminated=(void*)sNodeBase_terminated;
                _inf_value45->kind=(void*)sNullNode_kind;
                __dec_obj244=value1,
                value1=(struct sNode*)come_increment_ref_count(_inf_value45);
                (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0, (void*)0) :0);
                come_call_finalizer(sNullNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            else {
                no_label=((struct sInfo* )come_null_checker(info, "30op.nc", 2136))->no_label;
                ((struct sInfo* )come_null_checker(info, "30op.nc", 2137))->no_label=(_Bool)1;
                __dec_obj245=value1,
                value1=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0, (void*)0) :0);
                ((struct sInfo* )come_null_checker(info, "30op.nc", 2139))->no_label=no_label;
            }
            expected_next_character(58,info);
            value2=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            skip_spaces_and_lf(info);
            ((struct sInfo* )come_null_checker(info, "30op.nc", 2148))->sline_real=sline_real;
            _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2150, "struct sNode");
            _inf_obj_value46=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value1=sConditionalNode_initialize((struct sConditionalNode* )come_increment_ref_count(((struct sConditionalNode* )come_null_checker(((struct sConditionalNode* )(__right_value0=(struct sConditionalNode *)come_calloc(1, sizeof(struct sConditionalNode )*(1), (void*)0, 2150, "struct sConditionalNode* "))), "30op.nc", 2150))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),info))));
            _inf_value46->_protocol_obj=_inf_obj_value46;
            _inf_value46->finalize=(void*)sConditionalNode_finalize;
            _inf_value46->clone=(void*)sConditionalNode_clone;
            _inf_value46->compile=(void*)sConditionalNode_compile;
            _inf_value46->sline=(void*)sNodeBase_sline;
            _inf_value46->sline_real=(void*)sNodeBase_sline_real;
            _inf_value46->sname=(void*)sNodeBase_sname;
            _inf_value46->terminated=(void*)sNodeBase_terminated;
            _inf_value46->kind=(void*)sConditionalNode_kind;
            __dec_obj246=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value46);
            (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sConditionalNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sConditionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sTypeNode* sTypeNode_initialize(struct sTypeNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj247  ;
    struct sTypeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeNode*)come_increment_ref_count(((struct sTypeNode*)come_null_checker(self, "30op.nc", 2166))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj247=((struct sTypeNode*)come_null_checker(self, "30op.nc", 2168))->type,
    ((struct sTypeNode*)come_null_checker(self, "30op.nc", 2168))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj247,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sTypeNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTypeNode_kind(struct sTypeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTypeNode_compile(struct sTypeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj248  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj249  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 2178, "struct CVALUE* "))), "30op.nc", 2178)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj248=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 2180))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 2180))->c_value=(char* )come_increment_ref_count(make_type_name_string(((struct sTypeNode*)come_null_checker(self, "30op.nc", 2180))->type,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj249=((struct CVALUE* )come_null_checker(come_value, "30op.nc", 2181))->type,
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 2181))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2181, "struct sType* "))), "30op.nc", 2181))),(char*)come_increment_ref_count(xsprintf("__typename")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj249,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "30op.nc", 2182))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "30op.nc", 2184))->stack, "30op.nc", 2184)),(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeNode_finalize(struct sTypeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sTypeNode*)come_null_checker(self, "sTypeNode_finalize", 0))->sname!=((void*)0)) {
        (((struct sTypeNode*)come_null_checker(self, "sTypeNode_finalize", 0))->sname = come_decrement_ref_count(((struct sTypeNode*)come_null_checker(self, "sTypeNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sTypeNode*)come_null_checker(self, "sTypeNode_finalize", 1))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sTypeNode*)come_null_checker(self, "sTypeNode_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNode* expression_v13(struct sInfo*  info  , _Bool type_name_exp)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_v13"; neo_current_frame = &fr;
    struct sNode* node;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    char*  word  ;
    _Bool fun_call;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type1  =0;
    char*  name  =0;
    _Bool err=0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value47;
    struct sTypeNode* _inf_obj_value47;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj252;
    struct sNode* __dec_obj253;
    struct sNode* __dec_obj254;
    struct sNode* __result_obj__0;
    node=((void*)0);
    skip_spaces_and_lf(info);
    if(type_name_exp&&(*((struct sInfo* )come_null_checker(info, "30op.nc", 2196))->p==95||xisalpha(*((struct sInfo* )come_null_checker(info, "30op.nc", 2196))->p))) {
        p=((struct sInfo* )come_null_checker(info, "30op.nc", 2197))->p;
        sline=((struct sInfo* )come_null_checker(info, "30op.nc", 2198))->sline;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        fun_call=*((struct sInfo* )come_null_checker(info, "30op.nc", 2202))->p==40;
        ((struct sInfo* )come_null_checker(info, "30op.nc", 2204))->p=p;
        ((struct sInfo* )come_null_checker(info, "30op.nc", 2205))->sline=sline;
        if(is_type_name(word,info)&&!fun_call) {
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type1=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1);
            name=(char* )come_increment_ref_count(multiple_assign_var2->v2);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type1,((struct sInfo* )come_null_checker(info, "30op.nc", 2209))->generics_type,info));
            type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2212, "struct sNode");
            _inf_obj_value47=(struct sTypeNode*)come_increment_ref_count(((struct sTypeNode*)(__right_value1=sTypeNode_initialize((struct sTypeNode* )come_increment_ref_count(((struct sTypeNode* )come_null_checker(((struct sTypeNode* )(__right_value0=(struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), (void*)0, 2212, "struct sTypeNode* "))), "30op.nc", 2212))),type2,info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sTypeNode_finalize;
            _inf_value47->clone=(void*)sTypeNode_clone;
            _inf_value47->compile=(void*)sTypeNode_compile;
            _inf_value47->sline=(void*)sNodeBase_sline;
            _inf_value47->sline_real=(void*)sNodeBase_sline_real;
            _inf_value47->sname=(void*)sNodeBase_sname;
            _inf_value47->terminated=(void*)sNodeBase_terminated;
            _inf_value47->kind=(void*)sTypeNode_kind;
            __dec_obj252=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value47);
            (__dec_obj252 ? __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0, (void*)0) :0);
            come_call_finalizer(sTypeNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sTypeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sType_finalize, type1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj253=node,
            node=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            (__dec_obj253 ? __dec_obj253 = come_decrement_ref_count(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0, (void*)0) :0);
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj254=node,
        node=(struct sNode*)come_increment_ref_count(conditional_exp(info));
        (__dec_obj254 ? __dec_obj254 = come_decrement_ref_count(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
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

static struct sTypeNode* sTypeNode_clone(struct sTypeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeNode_clone"; neo_current_frame = &fr;
    struct sTypeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTypeNode*  result  ;
    char*  __dec_obj250  ;
    struct sType*  __dec_obj251  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTypeNode* )come_increment_ref_count((struct sTypeNode *)come_calloc(1, sizeof(struct sTypeNode )*(1), (void*)0, 3, "struct sTypeNode* "));
    if(self!=((void*)0)) {
        ((struct sTypeNode* )come_null_checker(result, "sTypeNode_clone", 4))->sline=((struct sTypeNode*)come_null_checker(self, "sTypeNode_clone", 4))->sline;
    }
    if(self!=((void*)0)&&((struct sTypeNode*)come_null_checker(self, "sTypeNode_clone", 5))->sname!=((void*)0)) {
        __dec_obj250=((struct sTypeNode* )come_null_checker(result, "sTypeNode_clone", 5))->sname,
        ((struct sTypeNode* )come_null_checker(result, "sTypeNode_clone", 5))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sTypeNode*)come_null_checker(self, "sTypeNode_clone", 5))->sname, "sTypeNode_clone", 5, "char* "));
        __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sTypeNode* )come_null_checker(result, "sTypeNode_clone", 6))->sline_real=((struct sTypeNode*)come_null_checker(self, "sTypeNode_clone", 6))->sline_real;
    }
    if(self!=((void*)0)&&((struct sTypeNode*)come_null_checker(self, "sTypeNode_clone", 7))->type!=((void*)0)) {
        __dec_obj251=((struct sTypeNode* )come_null_checker(result, "sTypeNode_clone", 7))->type,
        ((struct sTypeNode* )come_null_checker(result, "sTypeNode_clone", 7))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct sTypeNode*)come_null_checker(self, "sTypeNode_clone", 7))->type));
        come_call_finalizer(sType_finalize, __dec_obj251,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sTypeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v13"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value48;
    struct sNullNode* _inf_obj_value48;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!gComeC&&charp_operator_equals(((char*)come_null_checker(buf, "30op.nc", 2227)),"null")) {
        _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2228, "struct sNode");
        _inf_obj_value48=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value1=sNullNode_initialize((struct sNullNode* )come_increment_ref_count(((struct sNullNode* )come_null_checker(((struct sNullNode* )(__right_value0=(struct sNullNode *)come_calloc(1, sizeof(struct sNullNode )*(1), (void*)0, 2228, "struct sNullNode* "))), "30op.nc", 2228))),info))));
        _inf_value48->_protocol_obj=_inf_obj_value48;
        _inf_value48->finalize=(void*)sNullNode_finalize;
        _inf_value48->clone=(void*)sNullNode_clone;
        _inf_value48->compile=(void*)sNullNode_compile;
        _inf_value48->sline=(void*)sNodeBase_sline;
        _inf_value48->sline_real=(void*)sNodeBase_sline_real;
        _inf_value48->sname=(void*)sNodeBase_sname;
        _inf_value48->terminated=(void*)sNodeBase_terminated;
        _inf_value48->kind=(void*)sNullNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value48)));
        come_call_finalizer(sNullNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sNullNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v12(buf,head,head_sline,info))));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_less"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value49;
    struct sLtNode* _inf_obj_value49;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value49=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2236, "struct sNode");
    _inf_obj_value49=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value1=sLtNode_initialize((struct sLtNode* )come_increment_ref_count(((struct sLtNode* )come_null_checker(((struct sLtNode* )(__right_value0=(struct sLtNode *)come_calloc(1, sizeof(struct sLtNode )*(1), (void*)0, 2236, "struct sLtNode* "))), "30op.nc", 2236))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value49->_protocol_obj=_inf_obj_value49;
    _inf_value49->finalize=(void*)sLtNode_finalize;
    _inf_value49->clone=(void*)sLtNode_clone;
    _inf_value49->compile=(void*)sLtNode_compile;
    _inf_value49->sline=(void*)sNodeBase_sline;
    _inf_value49->sline_real=(void*)sNodeBase_sline_real;
    _inf_value49->sname=(void*)sNodeBase_sname;
    _inf_value49->terminated=(void*)sNodeBase_terminated;
    _inf_value49->kind=(void*)sLtNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value49)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sLtNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sLtNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

