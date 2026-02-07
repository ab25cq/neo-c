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
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, const char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, const char* sname, int sline, const char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(const char* msg, _Bool test);
char*  __builtin_string(const char* str);
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
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
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
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
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
static struct sGeneric* sGeneric_clone(struct sGeneric* self);
static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj34  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj35;
    struct sNode* __dec_obj36;
    struct sNewNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNewNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj34=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj35=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj36=self->initializer_num,
    self->initializer_num=(struct sNode*)come_increment_ref_count(initializer_num);
    (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0, (void*)0) :0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_compile"; neo_current_frame = &fr;
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
    char*  type_name  ;
    char*  type_name2  ;
    char*  var_name  ;
    struct sType*  type3  ;
    char*  type_name3  ;
    struct buffer*  buf  ;
    char*  obj  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj37  ;
    char*  __dec_obj38  ;
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
    char*  __dec_obj39  ;
    struct sType*  __dec_obj40  ;
    char*  var_name_15  ;
    struct sType*  type3_16  ;
    char*  type_name3_17  ;
    struct buffer*  buf_18  ;
    char*  obj_19  ;
    _Bool _conditional_value_X1;
    char*  __dec_obj44  ;
    char*  __dec_obj45  ;
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
    struct sType*  __dec_obj46  ;
    struct sType*  right_type  ;
    struct sType*  __dec_obj47  ;
    char*  c_value  ;
    char*  __dec_obj48  ;
    struct sType*  __dec_obj49  ;
    struct sType*  type3_30  ;
    char*  type_name3_31  ;
    _Bool _conditional_value_X2;
    char*  __dec_obj50  ;
    char*  __dec_obj51  ;
    struct sType*  __dec_obj52  ;
    memset(&obj, 0, sizeof(obj));
    memset(&obj_19, 0, sizeof(obj_19));
    type=(struct sType* )come_increment_ref_count(self->type);
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    initializer_num=(struct sNode*)come_increment_ref_count(self->initializer_num);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 25, "struct CVALUE* "))));
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 27, "struct buffer* "))));
    buffer_append_str(num_string,"1");
    for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum),it=list$1sNode$ph_begin(o2_saved);!list$1sNode$ph_end(o2_saved);it=list$1sNode$ph_next(o2_saved)){
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
        buffer_append_format(num_string,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    list$1sNode$ph_reset(type2->mArrayNum);
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)1,(_Bool)0));
    type_name2=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
    if(initializer_num) {
        static int var_num=1;
        var_num++;
        var_name=(char* )come_increment_ref_count(xsprintf("__new_num__%d",var_num));
        type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
        type3->mPointerNum++;
        if(type3->mNoSolvedGenericsType) {
            type3->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3=(char* )come_increment_ref_count(make_type_name_string(type3,info,(_Bool)0,(_Bool)0,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3,var_name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 66, "struct buffer* "))));
        buffer_append_str(buf,"({");
        if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            __dec_obj37=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sline,type_name3));
            __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj38=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sline,type_name3));
            __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(buf,obj);
        buffer_append_str(buf,";");
        klass=type3->mClass;
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
        buffer_append_str(buf,((char* )(__right_value14=string_operator_add(((char* )(__right_value13=string_operator_add(((char* )(__right_value12=string_operator_add(((char* )(__right_value11=charp_operator_add("*",var_name))),"= "))),come_value2->c_value))),";"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0));
        buffer_append_str(buf,var_name);
        buffer_append_str(buf,"; })");
        come_value_11=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 94, "struct CVALUE* "))));
        __dec_obj39=come_value_11->c_value,
        come_value_11->c_value=(char* )come_increment_ref_count(buffer_to_string(buf));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj40=come_value_11->type,
        come_value_11->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_11->var=((void*)0);
        append_object_to_right_values(come_value_11,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_11->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_11));
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
        type3_16->mPointerNum++;
        if(type3_16->mNoSolvedGenericsType) {
            type3_16->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3_17=(char* )come_increment_ref_count(make_type_name_string(type3_16,info,(_Bool)0,(_Bool)0,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3_16,var_name_15,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        buf_18=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 131, "struct buffer* "))));
        buffer_append_str(buf_18,"({");
        if(({(_conditional_value_X1=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X1;})) {
            __dec_obj44=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sline,type_name3_17));
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj45=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sline,type_name3_17));
            __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(buf_18,obj_19);
        buffer_append_str(buf_18,";");
        klass_20=type3_16->mClass;
        i=0;
        for(o2_saved_21=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),it_23=list$1tuple2$2char$phsNode$ph$ph_begin(o2_saved_21);!list$1tuple2$2char$phsNode$ph$ph_end(o2_saved_21);it_23=list$1tuple2$2char$phsNode$ph$ph_next(o2_saved_21)){
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
            for(o2_saved_27=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_20->mFields),it2=list$1tuple2$2char$phsType$ph$ph_begin(o2_saved_27);!list$1tuple2$2char$phsType$ph$ph_end(o2_saved_27);it2=list$1tuple2$2char$phsType$ph$ph_next(o2_saved_27)){
                multiple_assign_var2=it2;
                field_name=(char* )come_increment_ref_count(multiple_assign_var2->v1);
                field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2);
                if(string_operator_equals(name,field_name)) {
                    __dec_obj46=left_type,
                    left_type=(struct sType* )come_increment_ref_count(sType_clone(field_type));
                    come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            right_type=(struct sType* )come_increment_ref_count(come_value2_26->type);
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char* )(__right_value0=string_to_string(name)))))),left_type,right_type,come_value2_26,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            __dec_obj47=right_type,
            right_type=(struct sType* )come_increment_ref_count(come_value2_26->type);
            come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(left_type->mHeap&&right_type->mHeap&&left_type->mPointerNum>0&&right_type->mPointerNum>0) {
                c_value=(char* )come_increment_ref_count(increment_ref_count_object(left_type,come_value2_26->c_value,info));
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,c_value);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,come_value2_26->c_value);
            }
            buffer_append_str(buf_18,";");
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_26, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_18,var_name_15);
        buffer_append_str(buf_18,"; })");
        __dec_obj48=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_18));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj49=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
        (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        type3_30=(struct sType* )come_increment_ref_count(sType_clone(type2));
        type3_30->mPointerNum++;
        type3_30->mHeap=(_Bool)1;
        if(type3_30->mNoSolvedGenericsType) {
            type3_30->mNoSolvedGenericsType->mPointerNum++;
            type3_30->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_31=(char* )come_increment_ref_count(make_type_name_string(type3_30,info,(_Bool)0,(_Bool)0,(_Bool)0));
        if(({(_conditional_value_X2=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X2;})) {
            __dec_obj50=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sline,type_name3_31));
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj51=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), (void*)0, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sline,type_name3_31));
            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj52=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
        come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
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
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3, "struct sType* "));
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 12, "char* "));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 13, "char* "));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 14, "char* "));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __dec_obj13=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 15, "char* "));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __dec_obj14=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 16, "char* "));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
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
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result->mTypeName=self->mTypeName;
    }
    if(self!=((void*)0)) {
        result->mAnonymous=self->mAnonymous;
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        __dec_obj15=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 41, "char* "));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 43, "char* "));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj17=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 46, "char* "));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj21=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __dec_obj25=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 58, "char* "));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj27=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; neo_current_frame = &fr;
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
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1217, "struct list$1sType$ph*"))));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
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
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1238, "struct list_item$1sType$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1248, "struct list_item$1sType$ph*"))));
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1258, "struct list_item$1sType$ph*"))));
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_clone"; neo_current_frame = &fr;
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
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1217, "struct list$1sNode$ph*"))));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
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
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1238, "struct list_item$1sNode$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1248, "struct list_item$1sNode$ph*"))));
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj19=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1258, "struct list_item$1sNode$ph*"))));
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj20=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_clone"; neo_current_frame = &fr;
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
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 1217, "struct list$1int$*"))));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1238, "struct list_item$1int$*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1248, "struct list_item$1int$*"))));
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1258, "struct list_item$1int$*"))));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_clone"; neo_current_frame = &fr;
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1217, "struct list$1char$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1222, "char* ")));
        }
        else {
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1225, "char* ")));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
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
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1238, "struct list_item$1char$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char* )come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1248, "struct list_item$1char$ph*"))));
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1258, "struct list_item$1char$ph*"))));
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
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

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sNewNode_finalize(struct sNewNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        ((self->initializer_num) ? self->initializer_num = come_decrement_ref_count(self->initializer_num, ((struct sNode*)self->initializer_num)->finalize, ((struct sNode*)self->initializer_num)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_8;
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
    memset(&result_8,0,sizeof(struct sNode*));
    __result_obj__0 = result_8;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_9;
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
    memset(&result_9,0,sizeof(struct sNode*));
    __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
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

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
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

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
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
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
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
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj41  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj42  ;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj43  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1323, "struct list_item$1CVALUE$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj41=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1333, "struct list_item$1CVALUE$ph*"))));
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj42=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1343, "struct list_item$1CVALUE$ph*"))));
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj43=litem_13->item,
        litem_13->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_22;
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
    memset(&result_22,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_22;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_24;
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
    memset(&result_24,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_24;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_28;
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
    memset(&result_28,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_28;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_29;
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
    memset(&result_29,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = result_29;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType*  inf_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj53;
    struct sType*  __dec_obj54  ;
    struct sImplementsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sImplementsNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj53=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj54=self->inf_type,
    self->inf_type=(struct sType* )come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sImplementsNode*)come_increment_ref_count(self);
    come_call_finalizer(sImplementsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sImplementsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sImplementsNode_kind(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_compile"; neo_current_frame = &fr;
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
    struct sType*  type2_34  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var4
;    struct sFun*  fun2  =0;
    char*  real_fun_name  =0;
    char*  __dec_obj55  ;
    struct sType*  type2_35  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun2_36  =0;
    char*  real_fun_name_37  =0;
    char*  __dec_obj56  ;
    struct sClass*  klass2  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj59  ;
    obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type=(struct sType* )come_increment_ref_count(sType_clone(self->inf_type));
    Value=node_compile(obj_exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type));
    type->mPointerNum--;
    type->mHeap=(_Bool)0;
    klass=inf_type->mClass;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 287, "struct CVALUE* "))));
    type2=(struct sType* )come_increment_ref_count(sType_clone(inf_type));
    type_name=(char* )come_increment_ref_count(make_type_name_string(inf_type,info,(_Bool)0,(_Bool)1,(_Bool)0));
    type_name2=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)1,(_Bool)0));
    static int inf_num=0;
    ++inf_num;
    inf_num_stack=inf_num;
    buf=(char* )come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name,inf_num_stack));
    add_come_code_at_function_head(info,buf);
    buf2=(char* )come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2,inf_num_stack));
    add_come_code_at_function_head(info,buf2);
    if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), (void*)0, %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sline,type_name);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), (void*)0, %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sline,type_name);
    }
    c_value=(char* )come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack,c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack,inf_num_stack);
    typeX=(struct sType* )come_increment_ref_count(sType_clone(type));
    typeX->mPointerNum++;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically(typeX,"finalize",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically(typeX,"clone",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=1;i<list$1tuple2$2char$phsType$ph$ph_length(klass->mFields);i++){
        multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass->mFields,i)));
        name=(char* )come_increment_ref_count(multiple_assign_var3->v1);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        method_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,name,info,(_Bool)1));
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,method_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)&&string_operator_equals(name,"to_string")) {
            type2_34=(struct sType* )come_increment_ref_count(sType_clone(type));
            type2_34->mPointerNum++;
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically(type2_34,name,info)));
            fun2=multiple_assign_var4->v1;
            real_fun_name=(char* )come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2;
            __dec_obj55=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_34, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(fun==((void*)0)&&string_operator_equals(name,"equals")) {
            type2_35=(struct sType* )come_increment_ref_count(sType_clone(type));
            type2_35->mPointerNum++;
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(type2_35,name,info)));
            fun2_36=multiple_assign_var5->v1;
            real_fun_name_37=(char* )come_increment_ref_count(multiple_assign_var5->v2);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            fun=fun2_36;
            __dec_obj56=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name_37);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(sType_finalize, type2_35, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (real_fun_name_37 = come_decrement_ref_count(real_fun_name_37, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        if(fun==((void*)0)) {
            klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type->mClass->mName)));
            while(({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)))));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
                klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)));
                __dec_obj57=method_name,
                method_name=(char* )come_increment_ref_count(create_method_name_using_class(klass2,name,info));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(method_name))),((void*)0),(_Bool)0)));
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
    __dec_obj58=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack));
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    type3=(struct sType* )come_increment_ref_count(sType_clone(inf_type));
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __dec_obj59=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mPointerNum++;
    come_value2->var=((void*)0);
    append_object_to_right_values(come_value2,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_32;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_32,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_32);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_33;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_33,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_33);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_33, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
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
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
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
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; neo_current_frame = &fr;
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
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
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

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sTrueNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTrueNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sTrueNode*)come_increment_ref_count(self);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTrueNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTrueNode_kind(struct sTrueNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj60  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj61  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 402, "struct CVALUE* "))));
    __dec_obj60=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj61=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 405, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTrueNode_finalize(struct sTrueNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNode* create_true_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_true_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sTrueNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 418, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), (void*)0, 418, "struct sTrueNode* ")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)));
    come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_clone"; neo_current_frame = &fr;
    struct sTrueNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTrueNode*  result  ;
    char*  __dec_obj62  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), (void*)0, 3, "struct sTrueNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj62=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTrueNode_clone", 5, "char* "));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sTrueNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFalseNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFalseNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct sFalseNode*)come_increment_ref_count(self);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFalseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sFalseNode_kind(struct sFalseNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj63  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj64  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 435, "struct CVALUE* "))));
    __dec_obj63=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj64=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 438, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("_Bool")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFalseNode_finalize(struct sFalseNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNode* create_false_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_false_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sFalseNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 451, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), (void*)0, 451, "struct sFalseNode* ")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)));
    come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_clone"; neo_current_frame = &fr;
    struct sFalseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFalseNode*  result  ;
    char*  __dec_obj65  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), (void*)0, 3, "struct sFalseNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj65=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFalseNode_clone", 5, "char* "));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    __result_obj__0 = result;
    come_call_finalizer(sFalseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj66;
    struct list$1sType$ph* __dec_obj67;
    struct list$1sNode$ph* __dec_obj68;
    struct sNode* __dec_obj69;
    struct sGeneric* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGeneric*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj66=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj67=self->types,
    self->types=(struct list$1sType$ph*)come_increment_ref_count(types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj68=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj69=self->default_exp,
    self->default_exp=(struct sNode*)come_increment_ref_count(default_exp);
    (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0) :0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_compile"; neo_current_frame = &fr;
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
    _Bool Value_40;
    struct CVALUE*  come_value_41  ;
    struct sType*  __dec_obj70  ;
    _Bool Value_42;
    struct CVALUE*  come_value_43  ;
    int n_44;
    struct list$1sNode$ph* o2_saved_45;
    struct sNode* it_46;
    struct sType*  type_47  ;
    _Bool Value_48;
    struct CVALUE*  come_value_49  ;
    struct sType*  __dec_obj71  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj72  ;
    struct sType*  __dec_obj73  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    exps=(struct list$1sNode$ph*)come_increment_ref_count(self->exps);
    types=(struct list$1sType$ph*)come_increment_ref_count(self->types);
    default_exp=(struct sNode*)come_increment_ref_count(self->default_exp);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 478, "struct buffer* "))));
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
    buffer_append_format(buf,"_Generic((%s), ",come_value->c_value);
    result_type=((void*)0);
    if(default_exp) {
        n=0;
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(exps),it=list$1sNode$ph_begin(o2_saved);!list$1sNode$ph_end(o2_saved);it=list$1sNode$ph_next(o2_saved)){
            type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n));
            Value_40=node_compile(it,info);
            if(!Value_40) {
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
            come_value_41=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj70=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_41->type);
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_41->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            buffer_append_format(buf,",");
            n++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_42=node_compile(default_exp,info);
        if(!Value_42) {
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
        come_value_43=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf,"default: %s",come_value_43->c_value);
        buffer_append_format(buf,")");
        come_call_finalizer(CVALUE_finalize, come_value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        n_44=0;
        for(o2_saved_45=(struct list$1sNode$ph*)come_increment_ref_count(exps),it_46=list$1sNode$ph_begin(o2_saved_45);!list$1sNode$ph_end(o2_saved_45);it_46=list$1sNode$ph_next(o2_saved_45)){
            type_47=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n_44));
            Value_48=node_compile(it_46,info);
            if(!Value_48) {
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            come_value_49=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            __dec_obj71=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_49->type);
            come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type_47,info,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_49->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(n_44==list$1sNode$ph_length(exps)-1) {
                buffer_append_format(buf,")");
            }
            else {
                buffer_append_format(buf,",");
            }
            n_44++;
            come_call_finalizer(sType_finalize, type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 545, "struct CVALUE* "))));
    __dec_obj72=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf));
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj73=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        ((self->default_exp) ? self->default_exp = come_decrement_ref_count(self->default_exp, ((struct sNode*)self->default_exp)->finalize, ((struct sNode*)self->default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_38  ;
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
    memset(&default_value_38,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_38);
    come_call_finalizer(sType_finalize, default_value_38, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
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
    memset(&default_value_39,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_39);
    come_call_finalizer(sType_finalize, default_value_39, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj74  ;
    struct sSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj74=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sSizeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sSizeOfNode_kind(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj75  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj76  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 577, "struct CVALUE* "))));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1));
    __dec_obj75=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",type_name));
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj76=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 585, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj77  ;
    char*  __dec_obj78  ;
    struct sOffsetOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOffsetOf*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj77=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj78=self->name,
    self->name=(char* )come_increment_ref_count((char* )come_memdup(name, "25obj.nc", 604, "char* "));
    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sOffsetOf*)come_increment_ref_count(self);
    come_call_finalizer(sOffsetOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sOffsetOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sOffsetOf_kind(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    char*  name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj79  ;
    struct sType*  __dec_obj80  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type);
    name=(char* )come_increment_ref_count(self->name);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 617, "struct CVALUE* "))));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)0));
    __dec_obj79=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_offsetof(%s, %s)",type_name,name));
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj80=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type2);
    come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj81;
    struct sSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfExpNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj81=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0) :0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj82  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj83  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 662, "struct CVALUE* "))));
    __dec_obj82=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",come_value->c_value));
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj83=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 665, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj84  ;
    struct sTypeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj84=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sTypeOfNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTypeOfNode_kind(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj85  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj86  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 695, "struct CVALUE* "))));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj85=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj86=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 703, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj87;
    struct sTypeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfExpNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj87=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sTypeOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj88  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj89  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj88=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj89=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 746, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj90;
    struct sDynamicTypeOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicTypeOf*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj90=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDynamicTypeOf*)come_increment_ref_count(self);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj91  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj92  ;
    struct CVALUE*  come_value2_50  ;
    char*  __dec_obj93  ;
    struct sType*  __dec_obj94  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(come_value->type->mPointerNum>0&&come_value->type->mHeap) {
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 782, "struct CVALUE* "))));
        __dec_obj91=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value->c_value));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj92=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 785, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2->var=((void*)0);
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_50=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 793, "struct CVALUE* "))));
        __dec_obj93=come_value2_50->c_value,
        come_value2_50->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj94=come_value2_50->type,
        come_value2_50->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 796, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value2_50->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_50->c_value);
        append_object_to_right_values(come_value2_50,come_value2_50->type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_50));
        come_call_finalizer(CVALUE_finalize, come_value2_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj95  ;
    struct sAlignOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj95=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj96  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj97  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 830, "struct CVALUE* "))));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj96=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignof(%s)",type_name));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj97=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 838, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj98;
    struct sAlignOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj98=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignOfExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_compile"; neo_current_frame = &fr;
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
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 874, "struct CVALUE* "))));
    __dec_obj99=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value->c_value));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj100=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 877, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj101  ;
    struct sAlignOfNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode2*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj101=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignOfNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignOfNode2_kind(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_compile"; neo_current_frame = &fr;
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
    type=(struct sType* )come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 907, "struct CVALUE* "))));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj102=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",type_name));
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj103=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 915, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj104;
    struct sAlignOfExpNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj104=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignOfExpNode2*)come_increment_ref_count(self);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj105  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj106  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 951, "struct CVALUE* "))));
    __dec_obj105=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",come_value->c_value));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 954, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj107  ;
    struct sAlignAsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj107=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sAlignAsNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignAsNode_kind(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj108  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj109  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 984, "struct CVALUE* "))));
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj108=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",type_name));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj109=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 992, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj110;
    struct sAlignAsExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsExpNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj110=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sAlignAsExpNode*)come_increment_ref_count(self);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj111  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj112  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp);
    Value=node_compile(exp,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1028, "struct CVALUE* "))));
    __dec_obj111=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",come_value->c_value));
    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj112=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1031, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj113;
    struct sDeleteNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDeleteNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj113=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDeleteNode*)come_increment_ref_count(self);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDeleteNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDeleteNode_kind(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(come_value->type->mPointerNum>0) {
        free_object(((struct sType* )(__right_value0=sType_clone(come_value->type))),come_value->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj114;
    struct sBorrowNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBorrowNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj114=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0, (void*)0) :0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  __dec_obj115  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    remove_value_from_right_value_objects(come_value,info);
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type));
    type->mHeap=(_Bool)0;
    __dec_obj115=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type);
    come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBorrowNode_finalize(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj116;
    struct sCloneNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCloneNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj116=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sCloneNode*)come_increment_ref_count(self);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCloneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sCloneNode_kind(struct sCloneNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_compile"; neo_current_frame = &fr;
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
    char*  __dec_obj117  ;
    struct sType*  __dec_obj118  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type));
    if(left_type->mPointerNum==1&&string_operator_equals(left_type->mClass->mName,"void")&&left_type->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1146, "struct CVALUE* "))));
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1);
        c_value=(char* )come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj117=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value);
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj118=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj119;
    struct sDupeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDupeNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj119=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDupeNode*)come_increment_ref_count(self);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDupeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDupeNode_kind(struct sDupeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_compile"; neo_current_frame = &fr;
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
    char*  __dec_obj120  ;
    struct sType*  __dec_obj121  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type));
    if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum>0&&left_type->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value));
    }
    else if(left_type->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1196, "struct CVALUE* "))));
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1);
        c_value=(char* )come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj120=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value);
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj121=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj122;
    struct sDummyHeapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDummyHeapNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj122=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sDummyHeapNode*)come_increment_ref_count(self);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sDummyHeapNode_kind(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    if(come_value->type->mPointerNum>0) {
        come_value->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sGCIncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCIncNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj123=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCIncNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCIncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGCIncNode_kind(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  type_name  ;
    char*  __dec_obj124  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=come_value->type;
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0));
        __dec_obj124=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCIncNode_finalize(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj125;
    struct sGCDecNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj125=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCDecNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGCDecNode_kind(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(come_value->type);
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNode_finalize(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj126  ;
    struct sIsHeap* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsHeap*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj126=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sIsHeap*)come_increment_ref_count(self);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsHeap_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sIsHeap_kind(struct sIsHeap* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj127  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj128  ;
    struct CVALUE*  come_value_51  ;
    char*  __dec_obj129  ;
    struct sType*  __dec_obj130  ;
    if(self->type->mHeap) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1337, "struct CVALUE* "))));
        __dec_obj127=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("1"));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj128=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1340, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_51=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1348, "struct CVALUE* "))));
        __dec_obj129=come_value_51->c_value,
        come_value_51->c_value=(char* )come_increment_ref_count(xsprintf("0"));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj130=come_value_51->type,
        come_value_51->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1351, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_51->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_51));
        add_come_last_code(info,"%s",come_value_51->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_51, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsHeap_finalize(struct sIsHeap* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj131  ;
    struct sIsPointer* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsPointer*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj131=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type));
    come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sIsPointer*)come_increment_ref_count(self);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsPointer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sIsPointer_kind(struct sIsPointer* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj132  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj133  ;
    struct CVALUE*  come_value_52  ;
    char*  __dec_obj134  ;
    struct sType*  __dec_obj135  ;
    if(self->type->mPointerNum>0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1380, "struct CVALUE* "))));
        __dec_obj132=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("1"));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj133=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1383, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_52=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1391, "struct CVALUE* "))));
        __dec_obj134=come_value_52->c_value,
        come_value_52->c_value=(char* )come_increment_ref_count(xsprintf("0"));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj135=come_value_52->type,
        come_value_52->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1394, "struct sType* ")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_value_52->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_52));
        add_come_last_code(info,"%s",come_value_52->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsPointer_finalize(struct sIsPointer* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj136;
    struct sGCDecNoFreeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count(self),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj136=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_kind"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(self->node);
    Value=node_compile(node,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type=(struct sType* )come_increment_ref_count(come_value->type);
    if(type->mHeap&&type->mPointerNum>0) {
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value));
    __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct sNode* exp;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sNewNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value4;
    struct sNewNode* _inf_obj_value4;
    struct sNode* obj;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    char*  word  ;
    _Bool no_comma;
    struct sNode* exp_55;
    struct sNode* exp_56;
    struct sNode* _inf_value5;
    struct sNewNode* _inf_obj_value5;
    struct sNode* _inf_value6;
    struct sNewNode* _inf_obj_value6;
    struct sNode* _inf_value7;
    struct sTrueNode* _inf_obj_value7;
    struct sNode* _inf_value8;
    struct sFalseNode* _inf_obj_value8;
    struct sNode* node;
    struct sNode* _inf_value9;
    struct sDeleteNode* _inf_obj_value9;
    struct sNode* node_57;
    struct sNode* _inf_value10;
    struct sBorrowNode* _inf_obj_value10;
    struct sNode* node_58;
    struct sNode* _inf_value11;
    struct sCloneNode* _inf_obj_value11;
    struct sNode* node_59;
    struct sNode* _inf_value12;
    struct sDupeNode* _inf_obj_value12;
    struct sNode* node_60;
    struct sNode* _inf_value13;
    struct sDummyHeapNode* _inf_obj_value13;
    struct sNode* node_61;
    struct sNode* _inf_value14;
    struct sGCIncNode* _inf_obj_value14;
    struct sNode* node_62;
    struct sNode* _inf_value15;
    struct sGCDecNode* _inf_obj_value15;
    struct sNode* node_63;
    struct sNode* _inf_value16;
    struct sGCDecNoFreeNode* _inf_obj_value16;
    struct sNode* node_64;
    struct sNode* _inf_value17;
    struct sGCDecNoFreeNode* _inf_obj_value17;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  param_type  =0;
    char*  param_name  =0;
    _Bool err_65=0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    struct sNode* _inf_value18;
    struct sIsHeap* _inf_obj_value18;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  param_type_66  =0;
    char*  param_name_67  =0;
    _Bool err_68=0;
    struct sType*  type2__69  ;
    struct sType*  type2_70  ;
    struct sNode* _inf_value19;
    struct sIsPointer* _inf_obj_value19;
    _Bool come_c;
    struct sNode* node_71;
    _Bool come_safe;
    struct sNode* node_72;
    _Bool come_safe_73;
    struct sNode* node_74;
    _Bool no_comma_75;
    struct sNode* exp_76;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
    _Bool no_comma_77;
    struct sNode* __dec_obj168;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType*  type_78  =0;
    char*  name_79  =0;
    _Bool err_80=0;
    _Bool no_comma_81;
    struct sNode* node_82;
    struct sNode* _inf_value20;
    struct sGeneric* _inf_obj_value20;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var12
;    struct sType*  type_83  =0;
    char*  name_84  =0;
    _Bool err_85=0;
    char*  word_86  ;
    struct sNode* _inf_value21;
    struct sOffsetOf* _inf_obj_value21;
    _Bool paren;
    _Bool is_type_name_flag;
    char* p;
    int sline;
    char*  word_87  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var13
;    struct sType*  type_88  =0;
    char*  name_89  =0;
    _Bool err_90=0;
    struct sNode* _inf_value22;
    struct sSizeOfNode* _inf_obj_value22;
    struct sNode* exp_91;
    _Bool no_comma_92;
    struct sNode* __dec_obj179;
    struct sNode* __dec_obj180;
    struct sNode* _inf_value23;
    struct sSizeOfExpNode* _inf_obj_value23;
    _Bool paren_93;
    struct sNode* exp_94;
    _Bool no_comma_95;
    struct sNode* __dec_obj183;
    struct sNode* __dec_obj184;
    struct sNode* _inf_value24;
    struct sDynamicTypeOf* _inf_obj_value24;
    _Bool paren_96;
    _Bool is_type_name_flag_97;
    char* p_98;
    int sline_99;
    char*  word_100  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var14
;    struct sType*  type_101  =0;
    char*  name_102  =0;
    _Bool err_103=0;
    struct sNode* _inf_value25;
    struct sAlignOfNode* _inf_obj_value25;
    struct sNode* exp_104;
    _Bool no_comma_105;
    struct sNode* __dec_obj189;
    struct sNode* __dec_obj190;
    struct sNode* _inf_value26;
    struct sAlignOfExpNode* _inf_obj_value26;
    _Bool paren_106;
    _Bool is_type_name_flag_107;
    char* p_108;
    int sline_109;
    char*  word_110  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;    struct sType*  type_111  =0;
    char*  name_112  =0;
    _Bool err_113=0;
    struct sNode* _inf_value27;
    struct sAlignOfNode2* _inf_obj_value27;
    struct sNode* exp_114;
    _Bool no_comma_115;
    struct sNode* __dec_obj195;
    struct sNode* __dec_obj196;
    struct sNode* _inf_value28;
    struct sAlignOfExpNode2* _inf_obj_value28;
    memset(&exp_91, 0, sizeof(exp_91));
    memset(&exp_94, 0, sizeof(exp_94));
    memset(&exp_104, 0, sizeof(exp_104));
    memset(&exp_114, 0, sizeof(exp_114));
    if(!gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type=(struct sType* )come_increment_ref_count(multiple_assign_var8->v1);
        name=(char* )come_increment_ref_count(multiple_assign_var8->v2);
        err=multiple_assign_var8->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(*info->p==40) {
            if(type->mClass->mNumber) {
                info->p++;
                skip_spaces_and_lf(info);
                exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                expected_next_character(41,info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1459, "struct sNode");
                _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1459, "struct sNewNode* ")),type,((void*)0),(struct sNode*)come_increment_ref_count(exp),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sNewNode_finalize;
                _inf_value3->clone=(void*)sNewNode_clone;
                _inf_value3->compile=(void*)sNewNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sline_real=(void*)sNodeBase_sline_real;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sNewNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1462, "struct sNode");
                _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1462, "struct sNewNode* ")),type,((void*)0),((void*)0),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sNewNode_finalize;
                _inf_value4->clone=(void*)sNewNode_clone;
                _inf_value4->compile=(void*)sNewNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sline_real=(void*)sNodeBase_sline_real;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sNewNode_kind;
                obj=(struct sNode*)come_increment_ref_count(_inf_value4);
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
        else if(*info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1472, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            while((_Bool)1) {
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(*info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_55=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    info->no_comma=no_comma;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1486, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp_55))));
                    ((exp_55) ? exp_55 = come_decrement_ref_count(exp_55, ((struct sNode*)exp_55)->finalize, ((struct sNode*)exp_55)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else if(*info->p==44) {
                    exp_56=(struct sNode*)come_increment_ref_count(create_load_var(word,info));
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "25obj.nc", 1491, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count(word),(struct sNode*)come_increment_ref_count(exp_56))));
                    ((exp_56) ? exp_56 = come_decrement_ref_count(exp_56, ((struct sNode*)exp_56)->finalize, ((struct sNode*)exp_56)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",*info->p);
                    exit(2);
                }
                if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    exit(2);
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1512, "struct sNode");
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1512, "struct sNewNode* ")),type,(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1515, "struct sNode");
            _inf_obj_value6=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 1515, "struct sNewNode* ")),type,((void*)0),((void*)0),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"true")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1519, "struct sNode");
        _inf_obj_value7=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), (void*)0, 1519, "struct sTrueNode* ")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sTrueNode_finalize;
        _inf_value7->clone=(void*)sTrueNode_clone;
        _inf_value7->compile=(void*)sTrueNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sTrueNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
        come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(charp_operator_equals(buf,"false")) {
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1522, "struct sNode");
        _inf_obj_value8=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), (void*)0, 1522, "struct sFalseNode* ")),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFalseNode_finalize;
        _inf_value8->clone=(void*)sFalseNode_clone;
        _inf_value8->compile=(void*)sFalseNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sFalseNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
        come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    else if(!gComeC&&charp_operator_equals(buf,"delete")) {
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1527, "struct sNode");
        _inf_obj_value9=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value1=sDeleteNode_initialize((struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), (void*)0, 1527, "struct sDeleteNode* ")),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sDeleteNode_finalize;
        _inf_value9->clone=(void*)sDeleteNode_clone;
        _inf_value9->compile=(void*)sDeleteNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sDeleteNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"borrow")) {
        node_57=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1532, "struct sNode");
        _inf_obj_value10=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value1=sBorrowNode_initialize((struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), (void*)0, 1532, "struct sBorrowNode* ")),(struct sNode*)come_increment_ref_count(node_57),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sBorrowNode_finalize;
        _inf_value10->clone=(void*)sBorrowNode_clone;
        _inf_value10->compile=(void*)sBorrowNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sBorrowNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
        ((node_57) ? node_57 = come_decrement_ref_count(node_57, ((struct sNode*)node_57)->finalize, ((struct sNode*)node_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_57) ? node_57 = come_decrement_ref_count(node_57, ((struct sNode*)node_57)->finalize, ((struct sNode*)node_57)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"clone")) {
        node_58=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1537, "struct sNode");
        _inf_obj_value11=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value1=sCloneNode_initialize((struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), (void*)0, 1537, "struct sCloneNode* ")),(struct sNode*)come_increment_ref_count(node_58),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sCloneNode_finalize;
        _inf_value11->clone=(void*)sCloneNode_clone;
        _inf_value11->compile=(void*)sCloneNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sCloneNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
        ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_58) ? node_58 = come_decrement_ref_count(node_58, ((struct sNode*)node_58)->finalize, ((struct sNode*)node_58)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dupe")) {
        node_59=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1542, "struct sNode");
        _inf_obj_value12=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value1=sDupeNode_initialize((struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), (void*)0, 1542, "struct sDupeNode* ")),(struct sNode*)come_increment_ref_count(node_59),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDupeNode_finalize;
        _inf_value12->clone=(void*)sDupeNode_clone;
        _inf_value12->compile=(void*)sDupeNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDupeNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
        ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_59) ? node_59 = come_decrement_ref_count(node_59, ((struct sNode*)node_59)->finalize, ((struct sNode*)node_59)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_60=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1547, "struct sNode");
        _inf_obj_value13=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value1=sDummyHeapNode_initialize((struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), (void*)0, 1547, "struct sDummyHeapNode* ")),(struct sNode*)come_increment_ref_count(node_60),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value13->clone=(void*)sDummyHeapNode_clone;
        _inf_value13->compile=(void*)sDummyHeapNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sDummyHeapNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
        ((node_60) ? node_60 = come_decrement_ref_count(node_60, ((struct sNode*)node_60)->finalize, ((struct sNode*)node_60)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_60) ? node_60 = come_decrement_ref_count(node_60, ((struct sNode*)node_60)->finalize, ((struct sNode*)node_60)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_61=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1557, "struct sNode");
        _inf_obj_value14=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value1=sGCIncNode_initialize((struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), (void*)0, 1557, "struct sGCIncNode* ")),(struct sNode*)come_increment_ref_count(node_61),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCIncNode_finalize;
        _inf_value14->clone=(void*)sGCIncNode_clone;
        _inf_value14->compile=(void*)sGCIncNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCIncNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)));
        ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_62=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1567, "struct sNode");
        _inf_obj_value15=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value1=sGCDecNode_initialize((struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), (void*)0, 1567, "struct sGCDecNode* ")),(struct sNode*)come_increment_ref_count(node_62),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNode_finalize;
        _inf_value15->clone=(void*)sGCDecNode_clone;
        _inf_value15->compile=(void*)sGCDecNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)));
        ((node_62) ? node_62 = come_decrement_ref_count(node_62, ((struct sNode*)node_62)->finalize, ((struct sNode*)node_62)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_62) ? node_62 = come_decrement_ref_count(node_62, ((struct sNode*)node_62)->finalize, ((struct sNode*)node_62)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_63=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1577, "struct sNode");
        _inf_obj_value16=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), (void*)0, 1577, "struct sGCDecNoFreeNode* ")),(struct sNode*)come_increment_ref_count(node_63),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value16->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value16->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)));
        ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_63) ? node_63 = come_decrement_ref_count(node_63, ((struct sNode*)node_63)->finalize, ((struct sNode*)node_63)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"lock")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_64=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1587, "struct sNode");
        _inf_obj_value17=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), (void*)0, 1587, "struct sGCDecNoFreeNode* ")),(struct sNode*)come_increment_ref_count(node_64),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value17->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value17->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)));
        ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_64) ? node_64 = come_decrement_ref_count(node_64, ((struct sNode*)node_64)->finalize, ((struct sNode*)node_64)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1);
        param_name=(char* )come_increment_ref_count(multiple_assign_var9->v2);
        err_65=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err_65) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info));
        type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
        expected_next_character(41,info);
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1604, "struct sNode");
        _inf_obj_value18=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value1=sIsHeap_initialize((struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), (void*)0, 1604, "struct sIsHeap* ")),type2,info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sIsHeap_finalize;
        _inf_value18->clone=(void*)sIsHeap_clone;
        _inf_value18->compile=(void*)sIsHeap_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sIsHeap_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)));
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    else if(charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_66=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1);
        param_name_67=(char* )come_increment_ref_count(multiple_assign_var10->v2);
        err_68=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err_68) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2__69=(struct sType* )come_increment_ref_count(solve_generics(param_type_66,info->generics_type,info));
        type2_70=(struct sType* )come_increment_ref_count(solve_method_generics(type2__69,info));
        expected_next_character(41,info);
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1621, "struct sNode");
        _inf_obj_value19=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value1=sIsPointer_initialize((struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), (void*)0, 1621, "struct sIsPointer* ")),type2_70,info))));
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sIsPointer_finalize;
        _inf_value19->clone=(void*)sIsPointer_clone;
        _inf_value19->compile=(void*)sIsPointer_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sline_real=(void*)sNodeBase_sline_real;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sIsPointer_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)));
        come_call_finalizer(sType_finalize, param_type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_67 = come_decrement_ref_count(param_name_67, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2__69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sIsPointer_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (param_name_67 = come_decrement_ref_count(param_name_67, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, type2__69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2_70, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c=gComeC;
            gComeC=(_Bool)1;
            if(*info->p==123) {
                node_71=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,info));
                gComeC=come_c;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_71);
                ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            come_safe=gComeSafe;
            gComeSafe=(_Bool)0;
            if(*info->p==123) {
                node_72=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,info));
                gComeSafe=come_safe;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_72);
                ((node_72) ? node_72 = come_decrement_ref_count(node_72, ((struct sNode*)node_72)->finalize, ((struct sNode*)node_72)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_72) ? node_72 = come_decrement_ref_count(node_72, ((struct sNode*)node_72)->finalize, ((struct sNode*)node_72)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
            info->p+=strlen("safe");
            skip_spaces_and_lf(info);
            come_safe_73=gComeSafe;
            gComeSafe=(_Bool)1;
            if(*info->p==123) {
                node_74=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,info));
                gComeSafe=come_safe_73;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_74);
                ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
                ((node_74) ? node_74 = come_decrement_ref_count(node_74, ((struct sNode*)node_74)->finalize, ((struct sNode*)node_74)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    else if(charp_operator_equals(buf,"_Generic")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_75=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_76=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        info->no_comma=no_comma_75;
        expected_next_character(44,info);
        types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1724, "struct list$1sType$ph*"))));
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1725, "struct list$1sNode$ph*"))));
        default_exp=((void*)0);
        while(1) {
            if(strncmp(info->p,"default",strlen("default"))==0) {
                info->p+=strlen("default");
                skip_spaces_and_lf(info);
                expected_next_character(58,info);
                no_comma_77=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj168=default_exp,
                default_exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_77;
            }
            else {
                multiple_assign_var11=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_78=(struct sType* )come_increment_ref_count(multiple_assign_var11->v1);
                name_79=(char* )come_increment_ref_count(multiple_assign_var11->v2);
                err_80=multiple_assign_var11->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1sType$ph_add(types,(struct sType* )come_increment_ref_count(type_78));
                expected_next_character(58,info);
                no_comma_81=info->no_comma;
                info->no_comma=(_Bool)1;
                node_82=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                info->no_comma=no_comma_81;
                list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(node_82));
                come_call_finalizer(sType_finalize, type_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_79 = come_decrement_ref_count(name_79, (void*)0, (void*)0, 0, 0, (void*)0));
                ((node_82) ? node_82 = come_decrement_ref_count(node_82, ((struct sNode*)node_82)->finalize, ((struct sNode*)node_82)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1770, "struct sNode");
        _inf_obj_value20=(struct sGeneric*)come_increment_ref_count(((struct sGeneric*)(__right_value1=sGeneric_initialize((struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), (void*)0, 1770, "struct sGeneric* ")),(struct sNode*)come_increment_ref_count(exp_76),(struct list$1sType$ph*)come_increment_ref_count(types),(struct list$1sNode$ph*)come_increment_ref_count(exps),(struct sNode*)come_increment_ref_count(default_exp),info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sGeneric_finalize;
        _inf_value20->clone=(void*)sGeneric_clone;
        _inf_value20->compile=(void*)sGeneric_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sGeneric_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)));
        ((exp_76) ? exp_76 = come_decrement_ref_count(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sGeneric_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp_76) ? exp_76 = come_decrement_ref_count(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(buf,"offsetof")||charp_operator_equals(buf,"__builtin_offsetof")) {
        expected_next_character(40,info);
        info->in_offsetof=(_Bool)1;
        multiple_assign_var12=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type_83=(struct sType* )come_increment_ref_count(multiple_assign_var12->v1);
        name_84=(char* )come_increment_ref_count(multiple_assign_var12->v2);
        err_85=multiple_assign_var12->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        info->in_offsetof=(_Bool)0;
        if(!err_85) {
            err_msg(info,"parse type");
            exit(2);
        }
        expected_next_character(44,info);
        word_86=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        expected_next_character(41,info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1790, "struct sNode");
        _inf_obj_value21=(struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)(__right_value1=sOffsetOf_initialize((struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), (void*)0, 1790, "struct sOffsetOf* ")),type_83,(char* )come_increment_ref_count(word_86),info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sOffsetOf_finalize;
        _inf_value21->clone=(void*)sOffsetOf_clone;
        _inf_value21->compile=(void*)sOffsetOf_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sOffsetOf_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)));
        come_call_finalizer(sType_finalize, type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_84 = come_decrement_ref_count(name_84, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_86 = come_decrement_ref_count(word_86, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sOffsetOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name_84 = come_decrement_ref_count(name_84, (void*)0, (void*)0, 0, 0, (void*)0));
        (word_86 = come_decrement_ref_count(word_86, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(charp_operator_equals(buf,"sizeof")) {
        paren=(_Bool)0;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren=(_Bool)1;
        }
        is_type_name_flag=(_Bool)0;
        {
            p=info->p;
            sline=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_87=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_87,info)) {
                    is_type_name_flag=(_Bool)1;
                }
                (word_87 = come_decrement_ref_count(word_87, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p;
            info->sline=sline;
        }
        if(is_type_name_flag) {
            multiple_assign_var13=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_88=(struct sType* )come_increment_ref_count(multiple_assign_var13->v1);
            name_89=(char* )come_increment_ref_count(multiple_assign_var13->v2);
            err_90=multiple_assign_var13->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_90) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1833, "struct sNode");
            _inf_obj_value22=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value1=sSizeOfNode_initialize((struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), (void*)0, 1833, "struct sSizeOfNode* ")),type_88,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sSizeOfNode_finalize;
            _inf_value22->clone=(void*)sSizeOfNode_clone;
            _inf_value22->compile=(void*)sSizeOfNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sSizeOfNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value22)));
            come_call_finalizer(sType_finalize, type_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_89 = come_decrement_ref_count(name_89, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_89 = come_decrement_ref_count(name_89, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren) {
                no_comma_92=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj179=exp_91,
                exp_91=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_92;
            }
            else {
                __dec_obj180=exp_91,
                exp_91=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0) :0);
            }
            if(paren&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1854, "struct sNode");
            _inf_obj_value23=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), (void*)0, 1854, "struct sSizeOfExpNode* ")),(struct sNode*)come_increment_ref_count(exp_91),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value23->clone=(void*)sSizeOfExpNode_clone;
            _inf_value23->compile=(void*)sSizeOfExpNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sSizeOfExpNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value23)));
            ((exp_91) ? exp_91 = come_decrement_ref_count(exp_91, ((struct sNode*)exp_91)->finalize, ((struct sNode*)exp_91)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_91) ? exp_91 = come_decrement_ref_count(exp_91, ((struct sNode*)exp_91)->finalize, ((struct sNode*)exp_91)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"dynamic_typeof")) {
        paren_93=(_Bool)0;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_93=(_Bool)1;
        }
        if(!paren_93) {
            no_comma_95=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj183=exp_94,
            exp_94=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0) :0);
            info->no_comma=no_comma_95;
        }
        else {
            __dec_obj184=exp_94,
            exp_94=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0) :0);
        }
        if(paren_93&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1953, "struct sNode");
        _inf_obj_value24=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value1=sDynamicTypeOf_initialize((struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), (void*)0, 1953, "struct sDynamicTypeOf* ")),(struct sNode*)come_increment_ref_count(exp_94),info))));
        _inf_value24->_protocol_obj=_inf_obj_value24;
        _inf_value24->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value24->clone=(void*)sDynamicTypeOf_clone;
        _inf_value24->compile=(void*)sDynamicTypeOf_compile;
        _inf_value24->sline=(void*)sNodeBase_sline;
        _inf_value24->sline_real=(void*)sNodeBase_sline_real;
        _inf_value24->sname=(void*)sNodeBase_sname;
        _inf_value24->terminated=(void*)sNodeBase_terminated;
        _inf_value24->kind=(void*)sDynamicTypeOf_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value24)));
        ((exp_94) ? exp_94 = come_decrement_ref_count(exp_94, ((struct sNode*)exp_94)->finalize, ((struct sNode*)exp_94)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((exp_94) ? exp_94 = come_decrement_ref_count(exp_94, ((struct sNode*)exp_94)->finalize, ((struct sNode*)exp_94)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(charp_operator_equals(buf,"_Alignof")) {
        paren_96=(_Bool)0;
        if(*info->p==40) {
            paren_96=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_97=(_Bool)0;
        {
            p_98=info->p;
            sline_99=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_100=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_100,info)) {
                    is_type_name_flag_97=(_Bool)1;
                }
                (word_100 = come_decrement_ref_count(word_100, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_98;
            info->sline=sline_99;
        }
        if(is_type_name_flag_97) {
            multiple_assign_var14=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_101=(struct sType* )come_increment_ref_count(multiple_assign_var14->v1);
            name_102=(char* )come_increment_ref_count(multiple_assign_var14->v2);
            err_103=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_103) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_96&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1993, "struct sNode");
            _inf_obj_value25=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value1=sAlignOfNode_initialize((struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), (void*)0, 1993, "struct sAlignOfNode* ")),type_101,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode_finalize;
            _inf_value25->clone=(void*)sAlignOfNode_clone;
            _inf_value25->compile=(void*)sAlignOfNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value25)));
            come_call_finalizer(sType_finalize, type_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_102 = come_decrement_ref_count(name_102, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_102 = come_decrement_ref_count(name_102, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren_96) {
                no_comma_105=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj189=exp_104,
                exp_104=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_105;
            }
            else {
                __dec_obj190=exp_104,
                exp_104=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0) :0);
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2007, "struct sNode");
            _inf_obj_value26=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value1=sAlignOfExpNode_initialize((struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), (void*)0, 2007, "struct sAlignOfExpNode* ")),(struct sNode*)come_increment_ref_count(exp_104),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value26)));
            ((exp_104) ? exp_104 = come_decrement_ref_count(exp_104, ((struct sNode*)exp_104)->finalize, ((struct sNode*)exp_104)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_104) ? exp_104 = come_decrement_ref_count(exp_104, ((struct sNode*)exp_104)->finalize, ((struct sNode*)exp_104)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"__alignof__")) {
        paren_106=(_Bool)0;
        if(*info->p==40) {
            paren_106=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_107=(_Bool)0;
        {
            p_108=info->p;
            sline_109=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_110=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_110,info)) {
                    is_type_name_flag_107=(_Bool)1;
                }
                (word_110 = come_decrement_ref_count(word_110, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            info->p=p_108;
            info->sline=sline_109;
        }
        if(is_type_name_flag_107) {
            multiple_assign_var15=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_111=(struct sType* )come_increment_ref_count(multiple_assign_var15->v1);
            name_112=(char* )come_increment_ref_count(multiple_assign_var15->v2);
            err_113=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(!err_113) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_106&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2048, "struct sNode");
            _inf_obj_value27=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value1=sAlignOfNode2_initialize((struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), (void*)0, 2048, "struct sAlignOfNode2* ")),type_111,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value27->clone=(void*)sAlignOfNode2_clone;
            _inf_value27->compile=(void*)sAlignOfNode2_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignOfNode2_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value27)));
            come_call_finalizer(sType_finalize, type_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_112 = come_decrement_ref_count(name_112, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sAlignOfNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_112 = come_decrement_ref_count(name_112, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            if(!paren_106) {
                no_comma_115=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj195=exp_114,
                exp_114=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0, (void*)0) :0);
                info->no_comma=no_comma_115;
            }
            else {
                __dec_obj196=exp_114,
                exp_114=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0, (void*)0) :0);
            }
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2062, "struct sNode");
            _inf_obj_value28=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value1=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), (void*)0, 2062, "struct sAlignOfExpNode2* ")),(struct sNode*)come_increment_ref_count(exp_114),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value28->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value28->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignOfExpNode2_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value28)));
            ((exp_114) ? exp_114 = come_decrement_ref_count(exp_114, ((struct sNode*)exp_114)->finalize, ((struct sNode*)exp_114)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
            ((exp_114) ? exp_114 = come_decrement_ref_count(exp_114, ((struct sNode*)exp_114)->finalize, ((struct sNode*)exp_114)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_clone"; neo_current_frame = &fr;
    struct sNewNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewNode*  result  ;
    char*  __dec_obj137  ;
    struct sType*  __dec_obj138  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj144;
    struct sNode* __dec_obj145;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), (void*)0, 3, "struct sNewNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNewNode_clone", 5, "char* "));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj138=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj144=result->initializer,
        result->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        __dec_obj145=result->initializer_num,
        result->initializer_num=(struct sNode*)come_increment_ref_count(sNode_clone(self->initializer_num));
        (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sNewNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_clone"; neo_current_frame = &fr;
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
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1217, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item)));
        }
        it=it->next;
    }
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj139;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_53;
    struct tuple2$2char$phsNode$ph* __dec_obj140;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_54;
    struct tuple2$2char$phsNode$ph* __dec_obj141;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1238, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj139=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        litem_53=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1248, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        __dec_obj140=litem_53->item,
        litem_53->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1258, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        __dec_obj141=litem_54->item,
        litem_54->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj142  ;
    struct sNode* __dec_obj143;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), (void*)0, 3, "struct tuple2$2char$phsNode$ph*"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj142=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char* "));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj143=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj146  ;
    struct sNode* __dec_obj147;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj146=self->v1,
    self->v1=(char* )come_increment_ref_count(v1);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj147=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_clone"; neo_current_frame = &fr;
    struct sDeleteNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeleteNode*  result  ;
    char*  __dec_obj148  ;
    struct sNode* __dec_obj149;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), (void*)0, 3, "struct sDeleteNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj148=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDeleteNode_clone", 5, "char* "));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj149=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDeleteNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_clone"; neo_current_frame = &fr;
    struct sBorrowNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBorrowNode*  result  ;
    char*  __dec_obj150  ;
    struct sNode* __dec_obj151;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), (void*)0, 3, "struct sBorrowNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sBorrowNode_clone", 5, "char* "));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj151=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sBorrowNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_clone"; neo_current_frame = &fr;
    struct sCloneNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCloneNode*  result  ;
    char*  __dec_obj152  ;
    struct sNode* __dec_obj153;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), (void*)0, 3, "struct sCloneNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCloneNode_clone", 5, "char* "));
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj153=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sCloneNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_clone"; neo_current_frame = &fr;
    struct sDupeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDupeNode*  result  ;
    char*  __dec_obj154  ;
    struct sNode* __dec_obj155;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), (void*)0, 3, "struct sDupeNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDupeNode_clone", 5, "char* "));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj155=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDupeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_clone"; neo_current_frame = &fr;
    struct sDummyHeapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDummyHeapNode*  result  ;
    char*  __dec_obj156  ;
    struct sNode* __dec_obj157;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), (void*)0, 3, "struct sDummyHeapNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj156=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDummyHeapNode_clone", 5, "char* "));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj157=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDummyHeapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_clone"; neo_current_frame = &fr;
    struct sGCIncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCIncNode*  result  ;
    char*  __dec_obj158  ;
    struct sNode* __dec_obj159;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), (void*)0, 3, "struct sGCIncNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj158=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCIncNode_clone", 5, "char* "));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj159=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCIncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_clone"; neo_current_frame = &fr;
    struct sGCDecNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNode*  result  ;
    char*  __dec_obj160  ;
    struct sNode* __dec_obj161;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), (void*)0, 3, "struct sGCDecNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj160=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNode_clone", 5, "char* "));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj161=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCDecNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_clone"; neo_current_frame = &fr;
    struct sGCDecNoFreeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNoFreeNode*  result  ;
    char*  __dec_obj162  ;
    struct sNode* __dec_obj163;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), (void*)0, 3, "struct sGCDecNoFreeNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNoFreeNode_clone", 5, "char* "));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj163=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_clone"; neo_current_frame = &fr;
    struct sIsHeap* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsHeap*  result  ;
    char*  __dec_obj164  ;
    struct sType*  __dec_obj165  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), (void*)0, 3, "struct sIsHeap* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsHeap_clone", 5, "char* "));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj165=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sIsHeap_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_clone"; neo_current_frame = &fr;
    struct sIsPointer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsPointer*  result  ;
    char*  __dec_obj166  ;
    struct sType*  __dec_obj167  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), (void*)0, 3, "struct sIsPointer* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj166=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsPointer_clone", 5, "char* "));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj167=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj167,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sIsPointer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGeneric* sGeneric_clone(struct sGeneric* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_clone"; neo_current_frame = &fr;
    struct sGeneric* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGeneric*  result  ;
    char*  __dec_obj169  ;
    struct sNode* __dec_obj170;
    struct list$1sType$ph* __dec_obj171;
    struct list$1sNode$ph* __dec_obj172;
    struct sNode* __dec_obj173;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), (void*)0, 3, "struct sGeneric* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj169=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGeneric_clone", 5, "char* "));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj170=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        __dec_obj171=result->types,
        result->types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->types));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj172=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj172,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        __dec_obj173=result->default_exp,
        result->default_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->default_exp));
        (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sGeneric_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_clone"; neo_current_frame = &fr;
    struct sOffsetOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOffsetOf*  result  ;
    char*  __dec_obj174  ;
    struct sType*  __dec_obj175  ;
    char*  __dec_obj176  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), (void*)0, 3, "struct sOffsetOf* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj174=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOffsetOf_clone", 5, "char* "));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj175=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj175,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj176=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sOffsetOf_clone", 8, "char* "));
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sOffsetOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_clone"; neo_current_frame = &fr;
    struct sSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfNode*  result  ;
    char*  __dec_obj177  ;
    struct sType*  __dec_obj178  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), (void*)0, 3, "struct sSizeOfNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj177=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfNode_clone", 5, "char* "));
        __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj178=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfExpNode*  result  ;
    char*  __dec_obj181  ;
    struct sNode* __dec_obj182;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), (void*)0, 3, "struct sSizeOfExpNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfExpNode_clone", 5, "char* "));
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj182=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_clone"; neo_current_frame = &fr;
    struct sDynamicTypeOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicTypeOf*  result  ;
    char*  __dec_obj185  ;
    struct sNode* __dec_obj186;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), (void*)0, 3, "struct sDynamicTypeOf* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj185=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDynamicTypeOf_clone", 5, "char* "));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj186=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sDynamicTypeOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_clone"; neo_current_frame = &fr;
    struct sAlignOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode*  result  ;
    char*  __dec_obj187  ;
    struct sType*  __dec_obj188  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), (void*)0, 3, "struct sAlignOfNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj187=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode_clone", 5, "char* "));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj188=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode*  result  ;
    char*  __dec_obj191  ;
    struct sNode* __dec_obj192;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), (void*)0, 3, "struct sAlignOfExpNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode_clone", 5, "char* "));
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj192=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode2*  result  ;
    char*  __dec_obj193  ;
    struct sType*  __dec_obj194  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), (void*)0, 3, "struct sAlignOfNode2* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj193=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode2_clone", 5, "char* "));
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj194=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer(sType_finalize, __dec_obj194,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode2*  result  ;
    char*  __dec_obj197  ;
    struct sNode* __dec_obj198;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), (void*)0, 3, "struct sAlignOfExpNode2* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode2_clone", 5, "char* "));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj198=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0) :0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v94"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    _Bool come_c;
    _Bool come_safe;
    _Bool come_safe_116;
    if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))));
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                info->p++;
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
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_safe=gComeSafe;
                gComeSafe=(_Bool)0;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_safe;
            }
            else {
                gComeSafe=(_Bool)0;
            }
        }
        else if(parsecmp("safe",info)) {
            info->p+=strlen("safe");
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_safe_116=gComeSafe;
                gComeSafe=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_safe_116;
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
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "create_implements"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value29;
    struct sImplementsNode* _inf_obj_value29;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2212, "struct sNode");
    _inf_obj_value29=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), (void*)0, 2212, "struct sImplementsNode* ")),(struct sNode*)come_increment_ref_count(node),inf_type,info))));
    _inf_value29->_protocol_obj=_inf_obj_value29;
    _inf_value29->finalize=(void*)sImplementsNode_finalize;
    _inf_value29->clone=(void*)sImplementsNode_clone;
    _inf_value29->compile=(void*)sImplementsNode_compile;
    _inf_value29->sline=(void*)sNodeBase_sline;
    _inf_value29->sline_real=(void*)sNodeBase_sline_real;
    _inf_value29->sname=(void*)sNodeBase_sname;
    _inf_value29->terminated=(void*)sNodeBase_terminated;
    _inf_value29->kind=(void*)sImplementsNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value29)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_clone"; neo_current_frame = &fr;
    struct sImplementsNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sImplementsNode*  result  ;
    char*  __dec_obj199  ;
    struct sNode* __dec_obj200;
    struct sType*  __dec_obj201  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), (void*)0, 3, "struct sImplementsNode* "));
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj199=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sImplementsNode_clone", 5, "char* "));
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj200=result->obj_exp,
        result->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj201=result->inf_type,
        result->inf_type=(struct sType* )come_increment_ref_count(sType_clone(self->inf_type));
        come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sImplementsNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;    struct sType*  type3  =0;
    char*  name2  =0;
    _Bool err=0;
    struct sType*  inf_type  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value30;
    struct sImplementsNode* _inf_obj_value30;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!node->terminated(node->_protocol_obj)&&!gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var16=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3=(struct sType* )come_increment_ref_count(multiple_assign_var16->v1);
        name2=(char* )come_increment_ref_count(multiple_assign_var16->v2);
        err=multiple_assign_var16->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(!err) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type=(struct sType* )come_increment_ref_count(sType_clone(type3));
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2229, "struct sNode");
        _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), (void*)0, 2229, "struct sImplementsNode* ")),(struct sNode*)come_increment_ref_count(node),inf_type,info))));
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sImplementsNode_finalize;
        _inf_value30->clone=(void*)sImplementsNode_clone;
        _inf_value30->compile=(void*)sImplementsNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sImplementsNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value30)));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
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

