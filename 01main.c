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
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
int main(int argc, char** argv);
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
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  );
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  );
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer*  self  );
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
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
struct neo_frame*  neo_current_frame  =(void*)0;

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
        fun_name=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 170))->fun_name;
        printf("%s\n",fun_name);
        f=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 173))->prev;
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
        if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 218))->class_name) {
            printf("%p (%s): ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long )+sizeof(unsigned long ),((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 219))->class_name);
        }
        for(i=0;i<8;i++){
            if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 222))->fun_name[i]) {
                printf("%s, ",((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 223))->fun_name[i]);
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 230))->next;
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
        if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 249))->allocated!=177783) {
            neo_current_frame = fr.prev;
            return;
        }
        ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 253))->allocated=0;
        prev_it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 255))->prev;
        next_it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 256))->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                ((struct sMemHeader* )come_null_checker(gAllocMem, "/usr/local/include/neo-c.h", 262))->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                ((struct sMemHeader* )come_null_checker(prev_it, "/usr/local/include/neo-c.h", 267))->next=next_it;
            }
            if(next_it) {
                ((struct sMemHeader* )come_null_checker(next_it, "/usr/local/include/neo-c.h", 270))->prev=prev_it;
            }
        }
        size=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 274))->size;
        free(it);
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, const char* class_name)
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
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 296))->allocated=177783;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 298))->compiletime_size=compiletime_size;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 299))->size=size2;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 300))->free_next=((void*)0);
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 305))->fun_name;
        ((char**)come_null_checker(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 307))->fun_name, "/usr/local/include/neo-c.h", 307))[n]=fun_name;
        n++;
        f=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 310))->prev;
    }
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 313))->next=gAllocMem;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 314))->prev=((void*)0);
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 316))->class_name=class_name;
    if(gAllocMem) {
        ((struct sMemHeader* )come_null_checker(gAllocMem, "/usr/local/include/neo-c.h", 319))->prev=it;
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
    if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 335))->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe();
        exit(2);
    }
    __result_obj__0 = (char*)((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 341))->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  size  ;
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 350))->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe();
        exit(2);
    }
    size=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 355))->compiletime_size;
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
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long )+sizeof(unsigned long )+count*size,sname,sline,class_name);
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
    puts(((char*)(__right_value2=xsprintf("null pointer exception \%s \%s",((char* )(__right_value0=charp_to_string(((const char*)come_null_checker(sname, "/usr/local/include/neo-c.h", 573))))),((char* )(__right_value1=int_to_string(sline)))))));
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 585, "char*"));
    strncpy(result,str,len);
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1int$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1int$*)come_null_checker(self, "smart_pointer$1int$$p_finalize", 2))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1int$*)come_null_checker(self, "smart_pointer$1int$$p_finalize", 2))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_int_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1int$* result;
    struct buffer*  __dec_obj1  ;
    struct smart_pointer$1int$* __result_obj__0;
    result=(struct smart_pointer$1int$*)come_increment_ref_count((struct smart_pointer$1int$*)come_calloc(1, sizeof(struct smart_pointer$1int$)*(1), (void*)0, 1572, "struct smart_pointer$1int$*"));
    __dec_obj1=((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1574))->memory,
    ((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1574))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1575))->p=(int*)((struct buffer* )come_null_checker(((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1575))->memory, "/usr/local/include/neo-c.h", 1575))->buf;
    __result_obj__0 = (struct smart_pointer$1int$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1short$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1short$*)come_null_checker(self, "smart_pointer$1short$$p_finalize", 2))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1short$*)come_null_checker(self, "smart_pointer$1short$$p_finalize", 2))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_short_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1short$* result;
    struct buffer*  __dec_obj2  ;
    struct smart_pointer$1short$* __result_obj__0;
    result=(struct smart_pointer$1short$*)come_increment_ref_count((struct smart_pointer$1short$*)come_calloc(1, sizeof(struct smart_pointer$1short$)*(1), (void*)0, 1582, "struct smart_pointer$1short$*"));
    __dec_obj2=((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1584))->memory,
    ((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1584))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1585))->p=(short*)((struct buffer* )come_null_checker(((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1585))->memory, "/usr/local/include/neo-c.h", 1585))->buf;
    __result_obj__0 = (struct smart_pointer$1short$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1short$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1long$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1long$*)come_null_checker(self, "smart_pointer$1long$$p_finalize", 2))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1long$*)come_null_checker(self, "smart_pointer$1long$$p_finalize", 2))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_long_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1long$* result;
    struct buffer*  __dec_obj3  ;
    struct smart_pointer$1long$* __result_obj__0;
    result=(struct smart_pointer$1long$*)come_increment_ref_count((struct smart_pointer$1long$*)come_calloc(1, sizeof(struct smart_pointer$1long$)*(1), (void*)0, 1592, "struct smart_pointer$1long$*"));
    __dec_obj3=((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1594))->memory,
    ((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1594))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1595))->p=(long*)((struct buffer* )come_null_checker(((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1595))->memory, "/usr/local/include/neo-c.h", 1595))->buf;
    __result_obj__0 = (struct smart_pointer$1long$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1long$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1char$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1char$*)come_null_checker(self, "smart_pointer$1char$$p_finalize", 2))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1char$*)come_null_checker(self, "smart_pointer$1char$$p_finalize", 2))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1char$* buffer_to_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1char$* result;
    struct buffer*  __dec_obj4  ;
    struct smart_pointer$1char$* __result_obj__0;
    result=(struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), (void*)0, 1602, "struct smart_pointer$1char$*"));
    __dec_obj4=((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1604))->memory,
    ((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1604))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1605))->p=((struct buffer* )come_null_checker(((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1605))->memory, "/usr/local/include/neo-c.h", 1605))->buf;
    __result_obj__0 = (struct smart_pointer$1char$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1char$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj5;
    struct buffer*  __result_obj__0  ;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3880))->size=128;
    __dec_obj5=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3881))->buf,
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3881))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3881))->size)), (void*)0, 3881, "char*"));
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3882))->buf, "/usr/local/include/neo-c.h", 3882))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3883))->len=0;
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
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3890))->size=128;
    __dec_obj6=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3891))->buf,
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3891))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3891))->size)), (void*)0, 3891, "char*"));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3892))->buf, "/usr/local/include/neo-c.h", 3892))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3893))->len=0;
    buffer_append(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3895)),mem,size);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    if(self&&((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3902))->buf) {
        (((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3902))->buf = come_decrement_ref_count(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3902))->buf, (void*)0, (void*)0, 0, 0, (void*)0));
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
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3911, "struct buffer* "));
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3913))->size=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3913))->size;
    __dec_obj7=((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3914))->buf,
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3914))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3914))->size)), (void*)0, 3914, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3915))->len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3915))->len;
    memcpy(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3916))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3916))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3916))->len);
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
    __result_obj__0 = string_equals(((char* )come_null_checker(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(left, "/usr/local/include/neo-c.h", 3930))))), "/usr/local/include/neo-c.h", 3930)),((char* )(__right_value1=buffer_to_string(((struct buffer* )come_null_checker(right, "/usr/local/include/neo-c.h", 3930))))));
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
    return ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3938))->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3946))->buf, "/usr/local/include/neo-c.h", 3946))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3947))->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3955))->len-=len;
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3956))->len>=0) {
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3957))->buf, "/usr/local/include/neo-c.h", 3957))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3957))->len]=0;
    }
    else {
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3960))->len=0;
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3961))->buf, "/usr/local/include/neo-c.h", 3961))[0]=0;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3970))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3970))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3971))->size)), (void*)0, 3971, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3972))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3972))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3973))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3975))->size+size+1)*2;
        __dec_obj8=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3976))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3976))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3976, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3977))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3978))->buf, "/usr/local/include/neo-c.h", 3978))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3979))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3982))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3982))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3983))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3984))->buf, "/usr/local/include/neo-c.h", 3984))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3984))->len]=0;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3994))->len+1+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3994))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3995))->size)), (void*)0, 3995, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3996))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3996))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3997))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3999))->size+10+1)*2;
        __dec_obj9=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4000))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4000))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4000, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4001))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4002))->buf, "/usr/local/include/neo-c.h", 4002))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4003))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4006))->buf, "/usr/local/include/neo-c.h", 4006))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4006))->len]=c;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4007))->len++;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4009))->buf, "/usr/local/include/neo-c.h", 4009))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4009))->len]=0;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4021))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4021))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4022))->size)), (void*)0, 4022, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4023))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4023))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4024))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4025))->size+size+1)*2;
        __dec_obj10=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4026))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4026))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4026, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4027))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4028))->buf, "/usr/local/include/neo-c.h", 4028))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4029))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4032))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4032))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4033))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4034))->buf, "/usr/local/include/neo-c.h", 4034))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4034))->len]=0;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4097))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4097))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4098))->size)), (void*)0, 4098, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4099))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4099))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4100))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4101))->size+size+1)*2;
        __dec_obj11=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4102))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4102))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4102, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4103))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4104))->buf, "/usr/local/include/neo-c.h", 4104))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4105))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4108))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4108))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4109))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4110))->buf, "/usr/local/include/neo-c.h", 4110))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4110))->len]=0;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4124))->len+size+1+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4124))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4125))->size)), (void*)0, 4125, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4126))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4126))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4127))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4128))->size+size+1)*2;
        __dec_obj12=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4129))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4129))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4129, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4130))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4131))->buf, "/usr/local/include/neo-c.h", 4131))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4132))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4135))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4135))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4136))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4137))->buf, "/usr/local/include/neo-c.h", 4137))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4137))->len]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4138))->len++;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4151))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4151))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4152))->size)), (void*)0, 4152, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4153))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4153))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4154))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4155))->size+size+1)*2;
        __dec_obj13=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4156))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4156))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4156, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4157))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4158))->buf, "/usr/local/include/neo-c.h", 4158))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4159))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4162))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4162))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4163))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4164))->buf, "/usr/local/include/neo-c.h", 4164))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4164))->len]=0;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4177))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4177))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4178))->size)), (void*)0, 4178, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4179))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4179))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4180))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4181))->size+size+1)*2;
        __dec_obj14=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4182))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4182))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4182, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4183))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4184))->buf, "/usr/local/include/neo-c.h", 4184))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4185))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4188))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4188))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4189))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4190))->buf, "/usr/local/include/neo-c.h", 4190))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4190))->len]=0;
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
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4204))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4204))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4205))->size)), (void*)0, 4205, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4206))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4206))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4207))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4208))->size+size+1)*2;
        __dec_obj15=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4209))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4209))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4209, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4210))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4211))->buf, "/usr/local/include/neo-c.h", 4211))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4212))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4215))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4215))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4216))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4217))->buf, "/usr/local/include/neo-c.h", 4217))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4217))->len]=0;
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
    len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4228))->len;
    len=(len+3)&~3;
    if(len>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4231))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4232))->size)), (void*)0, 4232, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4233))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4233))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4234))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4235))->size+1+1)*2;
        __dec_obj16=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4236))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4236))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 4236, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4237))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4238))->buf, "/usr/local/include/neo-c.h", 4238))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4239))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    for(i=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4242))->len;i<len;i++){
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4243))->buf, "/usr/local/include/neo-c.h", 4243))[i]=0;
    }
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4246))->len=len;
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
    return strcmp(((struct buffer* )come_null_checker(left, "/usr/local/include/neo-c.h", 4263))->buf,((struct buffer* )come_null_checker(right, "/usr/local/include/neo-c.h", 4263))->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4268, "struct buffer* "))), "/usr/local/include/neo-c.h", 4268)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4274)),self);
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
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4285))->buf))));
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
    __result_obj__0 = (unsigned char*)((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4293))->buf;
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4298, "struct buffer* "))), "/usr/local/include/neo-c.h", 4298)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4302)),self,sizeof(char)*len);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4308, "struct buffer* "))), "/usr/local/include/neo-c.h", 4308)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    for(i=0;i<len;i++){
        buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4313)),((char**)come_null_checker(self, "/usr/local/include/neo-c.h", 4313))[i],strlen(((char**)come_null_checker(self, "/usr/local/include/neo-c.h", 4313))[i]));
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4320, "struct buffer* "))), "/usr/local/include/neo-c.h", 4320)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4324)),(char*)self,sizeof(short)*len);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4330, "struct buffer* "))), "/usr/local/include/neo-c.h", 4330)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4334)),(char*)self,sizeof(int)*len);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4340, "struct buffer* "))), "/usr/local/include/neo-c.h", 4340)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4344)),(char*)self,sizeof(long)*len);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4350, "struct buffer* "))), "/usr/local/include/neo-c.h", 4350)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4354)),(char*)self,sizeof(float)*len);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4360, "struct buffer* "))), "/usr/local/include/neo-c.h", 4360)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4364)),(char*)self,sizeof(double)*len);
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
    len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4370))->len;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 4371, "char*"));
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(result);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    n=0;
    for(i=0;i<len;i++){
        c=((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4379))->buf, "/usr/local/include/neo-c.h", 4379))[i];
        if((c>=0&&c<32)||c==127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4384))[n++]=94;
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4385))[n++]=c+65-1;
        }
        else if(c>127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4388))[n++]=63;
        }
        else {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4391))[n++]=c;
        }
    }
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4397))[n]=0;
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
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1char$_push_back(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),((char*)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]);
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
    if(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1771, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=item;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_5=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1781, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1char$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_5;
        ((struct list_item$1char$*)come_null_checker(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_5;
    }
    else {
        litem_6=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1791, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1char$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1char$*)come_null_checker(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_6;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_6;
    }
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    it=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count(((struct list$1char$*)come_null_checker(((struct list$1char$*)(__right_value0=(struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), (void*)0, 4422, "struct list$1char$*"))), "/usr/local/include/neo-c.h", 4422))),len,self))));
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
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1char$p_push_back(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),((char**)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]);
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
    if(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1771, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=item;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_7=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1781, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1char$p*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_7;
        ((struct list_item$1char$p*)come_null_checker(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1791, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1char$p*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1char$p*)come_null_checker(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_8;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_8;
    }
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    it=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$p*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)come_null_checker(((struct list$1char$p*)(__right_value0=(struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), (void*)0, 4427, "struct list$1char$p*"))), "/usr/local/include/neo-c.h", 4427))),len,self))));
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
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1short$_push_back(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),((short*)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]);
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
    if(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1771, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=item;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_9=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1781, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1short$*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_9;
        ((struct list_item$1short$*)come_null_checker(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1791, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1short$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1short$*)come_null_checker(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_10;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_10;
    }
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    it=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1short$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count(((struct list$1short$*)come_null_checker(((struct list$1short$*)(__right_value0=(struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), (void*)0, 4432, "struct list$1short$*"))), "/usr/local/include/neo-c.h", 4432))),len,self))));
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
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1int$_push_back(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),((int*)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]);
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
    if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1771, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1781, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_11, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_11;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_11;
    }
    else {
        litem_12=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1791, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_12;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_12;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 4437, "struct list$1int$*"))), "/usr/local/include/neo-c.h", 4437))),len,self))));
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
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1long$_push_back(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),((long*)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]);
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
    if(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1771, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=item;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_13=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1781, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1long$*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_13;
        ((struct list_item$1long$*)come_null_checker(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1791, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1long$*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1long$*)come_null_checker(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_14;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_14;
    }
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    it=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1long$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count(((struct list$1long$*)come_null_checker(((struct list$1long$*)(__right_value0=(struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), (void*)0, 4442, "struct list$1long$*"))), "/usr/local/include/neo-c.h", 4442))),len,self))));
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
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1float$_push_back(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),((float*)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]);
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
    if(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1771, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=item;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_15=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1781, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1float$*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_15;
        ((struct list_item$1float$*)come_null_checker(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_15;
    }
    else {
        litem_16=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1791, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1float$*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1float$*)come_null_checker(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_16;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_16;
    }
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    it=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1float$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count(((struct list$1float$*)come_null_checker(((struct list$1float$*)(__right_value0=(struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), (void*)0, 4447, "struct list$1float$*"))), "/usr/local/include/neo-c.h", 4447))),len,self))));
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
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1double$_push_back(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),((double*)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]);
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
    if(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1771, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=item;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_17=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1781, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1double$*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_17;
        ((struct list_item$1double$*)come_null_checker(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1791, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1double$*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem_18, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1double$*)come_null_checker(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_18;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_18;
    }
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    it=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1double$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count(((struct list$1double$*)come_null_checker(((struct list$1double$*)(__right_value0=(struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), (void*)0, 4452, "struct list$1double$*"))), "/usr/local/include/neo-c.h", 4452))),len,self))));
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
    return !charp_operator_equals(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4640)),right);
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4687, "char*"));
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4702, "char*"));
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
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4715, "struct buffer* "))), "/usr/local/include/neo-c.h", 4715)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<right;i++){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4718)),self);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4721))))));
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
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4729, "struct buffer* "))), "/usr/local/include/neo-c.h", 4729)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<right;i++){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4732)),self);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4735))))));
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
        if(strncmp(((const char**)come_null_checker(self, "/usr/local/include/neo-c.h", 4750))[i],str,strlen(((const char**)come_null_checker(self, "/usr/local/include/neo-c.h", 4750))[i]))==0) {
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4983, "char*"));
    for(i=0;i<len;i++){
        ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4986))[i]=((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4986))[len-i-1];
    }
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4989))[len]=0;
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 5010)),tail,head))), "/usr/local/include/neo-c.h", 5010))))));
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 5029, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 5032))[tail-head]=0;
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 5053)),tail,head))), "/usr/local/include/neo-c.h", 5053))))));
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 5072, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 5075))[tail-head]=0;
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 5096)),tail,head))), "/usr/local/include/neo-c.h", 5096))))));
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 5115, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 5118))[tail-head]=0;
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), (void*)0, 5181, "char*"));
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 5186))[len-(tail-head)]=0;
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
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1771, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        __dec_obj17=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(char* )come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_19=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1781, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj18=((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1785))->item=(char* )come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_19;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1791, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj19=((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1795))->item=(char* )come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_20;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_20;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 5194, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 5194)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 5197, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 5197)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 5199, "struct buffer* "))), "/usr/local/include/neo-c.h", 5199)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<charp_length(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 5201)));i++){
        if(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 5202))[i]==c) {
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 5203)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 5203))->buf)));
            buffer_reset(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 5204)));
        }
        else {
            buffer_append_char(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 5207)),((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 5207))[i]);
        }
    }
    if(buffer_length(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 5210)))!=0) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 5211)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 5211))->buf)));
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
    len=charp_length(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 5232)));
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 5233, "char*"));
    n=0;
    for(i=0;i<len;i++){
        c=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 5237))[i];
        if((c>=0&&c<32)||c==127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 5242))[n++]=94;
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 5243))[n++]=c+65-1;
        }
        else {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 5246))[n++]=c;
        }
    }
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 5252))[n]=0;
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 5266, "struct buffer* "))), "/usr/local/include/neo-c.h", 5266)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    p=self;
    while((_Bool)1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 5278)),p,p2-p);
            break;
        }
        buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 5282)),p,p2-p);
        buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 5283)),replace);
        p=p2+strlen(str);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 5288))))));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(((char* )come_null_checker(path2, "/usr/local/include/neo-c.h", 5342)),0,p-path2))));
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
    start=((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5852))->start;
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
    ctx.total_groups=((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5866))->group_count;
    ctx.ignore_case=ignore_case;
    if(ctx.captures!=0) {
        clear_captures(&ctx);
    }
    if(((struct regex_t* )come_null_checker(start, "/usr/local/include/neo-c.h", 5874))->type==(2)) {
        const char* end=matchpattern(((struct regex_t* )come_null_checker(start, "/usr/local/include/neo-c.h", 5876))->next,text,&ctx);
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
        ((unsigned char*)come_null_checker(state.ccl_buf, "/usr/local/include/neo-c.h", 5946))[0]=0;
    }
    pos=0;
    head=compile_sequence(&state,pattern,&pos,0);
    if((head==0)||(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5951))[pos]!=0)) {
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
    if(((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5970))->start==0) {
        neo_current_frame = fr.prev;
        return;
    }
    re_print_internal(((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5975))->start,0);
    neo_current_frame = fr.prev;
}

void clear_captures(struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clear_captures"; neo_current_frame = &fr;
    int i;
    if((((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5982))->captures==0)||(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5982))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    for(i=0;i<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5987))->capture_capacity;++i){
        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5989))->captures, "/usr/local/include/neo-c.h", 5989))[i].start=-1;
        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5990))->captures, "/usr/local/include/neo-c.h", 5990))[i].length=0;
    }
    neo_current_frame = fr.prev;
}

void snapshot_captures(const struct anonymous_typeX25*  ctx  , struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "snapshot_captures"; neo_current_frame = &fr;
    if((((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5996))->captures==0)||(((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5996))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(buffer_,((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6001))->captures,sizeof(struct re_capture )*((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6001))->capture_capacity);
    neo_current_frame = fr.prev;
}

void restore_captures(struct anonymous_typeX25*  ctx  , const struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "restore_captures"; neo_current_frame = &fr;
    if((((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6006))->captures==0)||(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6006))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6011))->captures,buffer_,sizeof(struct re_capture )*((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6011))->capture_capacity);
    neo_current_frame = fr.prev;
}

struct regex_t*  new_token(struct anonymous_typeX24*  st  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "new_token"; neo_current_frame = &fr;
    struct regex_t*  __result_obj__0  ;
    struct regex_t*  token  ;
    if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6017))->pool_size>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6017))->pool_capacity) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    token=&((struct regex_t* )come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6022))->pool, "/usr/local/include/neo-c.h", 6022))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6022))->pool_size++];
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6023))->type=(0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6024))->u.ccl=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6025))->next=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6026))->u.group.first=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6027))->u.group.last=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6028))->u.group.id=0;
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
        ((struct regex_t* )come_null_checker((*tail), "/usr/local/include/neo-c.h", 6045))->next=token;
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
    while(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6056))[*pos]!=0) {
        c=((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6058))[*pos];
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6073))->type=(2);
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6081))->type=(3);
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6089))->type=(1);
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6097))->type=(5);
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6105))->type=(6);
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6113))->type=(4);
                (*pos)++;
            }
            break;
            case 92:
            {
                (*pos)++;
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6120))[*pos]==0) {
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
                switch (                ((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6128))[*pos]) {
                    case 100:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6130))->type=(10);
                    break;
                    case 68:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6131))->type=(11);
                    break;
                    case 119:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6132))->type=(12);
                    break;
                    case 87:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6133))->type=(13);
                    break;
                    case 115:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6134))->type=(14);
                    break;
                    case 83:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6135))->type=(15);
                    break;
                    default:
                    {
                        ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6138))->type=(7);
                        ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6139))->u.ch=(unsigned char)((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6139))[*pos];
                    }
                    break;
                }
                (*pos)++;
            }
            break;
            case 91:
            {
                buf_begin=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6147))->ccl_idx;
                negated=0;
                (*pos)++;
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6151))[*pos]==94) {
                    negated=1;
                    (*pos)++;
                    if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6155))[*pos]==0) {
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6161))[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                while((((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6166))[*pos]!=0)&&(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6166))[*pos]!=93)) {
                    if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6168))[*pos]==92) {
                        if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6170))->ccl_idx>=(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6170))->ccl_capacity-1)) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                        ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6174))->ccl_buf, "/usr/local/include/neo-c.h", 6174))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6174))->ccl_idx++]=92;
                        (*pos)++;
                        if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6176))[*pos]==0) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                    }
                    if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6182))->ccl_idx>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6182))->ccl_capacity) {
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6186))->ccl_buf, "/usr/local/include/neo-c.h", 6186))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6186))->ccl_idx++]=(unsigned char)((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6186))[*pos];
                    (*pos)++;
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6190))[*pos]!=93) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6195))->ccl_idx>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6195))->ccl_capacity) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6199))->ccl_buf, "/usr/local/include/neo-c.h", 6199))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6199))->ccl_idx++]=0;
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6203))->type=((negated)?((9)):((8)));
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6204))->u.ccl=&((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6204))->ccl_buf, "/usr/local/include/neo-c.h", 6204))[buf_begin];
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
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 6217))[*pos]!=41) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                tail_22=inner;
                while((tail_22!=0)&&(((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 6223))->type!=(0))) {
                    tail_22=((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 6225))->next;
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6234))->type=(16);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6235))->u.group.first=inner;
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6236))->u.group.last=tail_22;
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6237))->u.group.id=++((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 6237))->group_count;
                ((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 6239))->type=(17);
                ((struct regex_t* )come_null_checker(tail_22, "/usr/local/include/neo-c.h", 6240))->u.group.first=token;
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6249))->type=(7);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6250))->u.ch=(unsigned char)c;
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
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6258))->type=(7);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6259))->u.ch=(unsigned char)c;
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
    ((struct regex_t* )come_null_checker(sentinel, "/usr/local/include/neo-c.h", 6275))->type=(0);
    ((struct regex_t* )come_null_checker(sentinel, "/usr/local/include/neo-c.h", 6276))->next=((void*)0);
    if(head==0) {
        head=sentinel;
    }
    else {
        ((struct regex_t* )come_null_checker(tail, "/usr/local/include/neo-c.h", 6284))->next=sentinel;
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
    if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6297))->type==(0)) {
        __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    struct re_capture  snapshot[64]  ;
    memset(&snapshot, 0, sizeof(snapshot));
    snapshot_captures(ctx,snapshot);
    current=pattern;
    const char* cursor=text;
    while(current!=0&&((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6308))->type!=(0)) {
        next=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6310))->next;
        if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6312))->type==(17)) {
            owner=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6314))->u.group.first;
            if((owner!=0)&&(((struct regex_t* )come_null_checker(owner, "/usr/local/include/neo-c.h", 6315))->u.group.id>0)&&(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6315))->captures!=0)) {
                idx=((struct regex_t* )come_null_checker(owner, "/usr/local/include/neo-c.h", 6317))->u.group.id-1;
                if(idx<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6318))->capture_capacity) {
                    start=((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6320))->captures, "/usr/local/include/neo-c.h", 6320))[idx].start;
                    if(start>=0) {
                        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6323))->captures, "/usr/local/include/neo-c.h", 6323))[idx].length=(int)(cursor-((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6323))->base)-start;
                        if(((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6324))->captures, "/usr/local/include/neo-c.h", 6324))[idx].length<0) {
                            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6326))->captures, "/usr/local/include/neo-c.h", 6326))[idx].length=0;
                        }
                    }
                }
            }
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6331))->next;
            continue;
        }
        if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6335))->type==(4))) {
            const char* result=matchquestion(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6337))->next,cursor,ctx);
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
        else if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6345))->type==(5))) {
            const char* result_23=matchstar(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6347))->next,cursor,ctx);
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
        else if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6355))->type==(6))) {
            const char* result_24=matchplus(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6357))->next,cursor,ctx);
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
        else if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6365))->type==(16)) {
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
        else if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6375))->type==(3)) {
            if(*cursor!=0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6382))->next;
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
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6393))->next;
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
    end_token=((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6405))->u.group.last;
    saved_next=((end_token!=0)?(((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6406))->next):(0));
    if(end_token!=0) {
        ((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6409))->next=rest;
    }
    if(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6412))->u.group.id>0&&((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6412))->captures!=0) {
        idx=((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6414))->u.group.id-1;
        if(idx<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6415))->capture_capacity) {
            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6417))->captures, "/usr/local/include/neo-c.h", 6417))[idx].start=(int)(text-((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6417))->base);
            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6418))->captures, "/usr/local/include/neo-c.h", 6418))[idx].length=0;
        }
    }
    const char* result=matchpattern(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6422))->u.group.first,text,ctx);
    if(end_token!=0) {
        ((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6426))->next=saved_next;
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
    switch (    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6525))->type) {
        case (1):
        __result_obj__0 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (7):
        __result_obj__0 = (((*text!=0&&re_fold_char(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6532))->u.ch,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6532))->ignore_case)==re_fold_char((unsigned char)*text,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6532))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (8):
        __result_obj__0 = (((*text!=0&&matchcharclass(*text,(const char*)((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6536))->u.ccl,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6536))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (9):
        __result_obj__0 = (((*text!=0&&!matchcharclass(*text,(const char*)((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6539))->u.ccl,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6539))->ignore_case)))?(text+1):(0));
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
        __result_obj__0 = (((text==((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6563))->base))?(text):(0));
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
    start=(unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6595))[0];
    end=(unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6596))[2];
    if(ignore_case) {
        needle=re_fold_char(needle,(_Bool)1);
        start=re_fold_char(start,(_Bool)1);
        end=re_fold_char(end,(_Bool)1);
    }
    neo_current_frame = fr.prev;
    return ((needle!=45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6604))[0]!=0)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6605))[0]!=45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6606))[1]==45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6607))[2]!=0)&&((needle>=start)&&(needle<=end)));
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
    switch (    ((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6626))[0]) {
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
        return (c==((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6634))[0]);
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
        else if(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6647))[0]==92) {
            str+=1;
            if(matchmetachar((char)needle,str)) {
                neo_current_frame = fr.prev;
                return 1;
            }
            else if((needle==re_fold_char((unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6654))[0],ignore_case))&&!ismetachar((char)needle)) {
                neo_current_frame = fr.prev;
                return 1;
            }
        }
        else if(needle==re_fold_char((unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6659))[0],ignore_case)) {
            if(needle==45) {
                neo_current_frame = fr.prev;
                return ((((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6663))[-1]==0)||(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6663))[1]==0));
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
    while(pattern!=0&&((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6685))->type!=(0)) {
        for(i=0;i<depth;++i){
            putchar(32);
        }
        printf("type: %s",((const char**)come_null_checker(types, "/usr/local/include/neo-c.h", 6691))[((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6691))->type]);
        if((((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6693))->type==(8))||(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6693))->type==(9))) {
            printf(" [");
            const unsigned char* ccl=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6696))->u.ccl;
            while(*ccl!=0&&*ccl!=93) {
                printf("%c",*ccl);
                ++ccl;
            }
            printf("]");
        }
        else if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6704))->type==(7)) {
            printf(" '%c'",((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6706))->u.ch);
        }
        else if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6708))->type==(16)) {
            printf(" id=%d\n",((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6710))->u.group.id);
            re_print_internal(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6711))->u.group.first,depth+2);
            pattern=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6712))->next;
            continue;
        }
        printf("\n");
        pattern=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6717))->next;
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
    return ((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 6729))->group_count;
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
    self2=(char* )come_increment_ref_count(charp_reverse(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6847))));
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
    if(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6916))[string_length(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6916)))-1]==10) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6917)),0,-2))));
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
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1685))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1686, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1689))->next=((void*)0);
        __dec_obj20=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(char* )come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_28=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1696, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj21=((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1700))->item=(char* )come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_28;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_28;
    }
    else {
        litem_29=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1706, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj22=((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1710))->item=(char* )come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_29;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_29;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7085, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7085)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7087, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7087)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7092, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7092)))))));
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
            str=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7110)),offset+regex_result,offset+regex_result+matchlength));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7112)),(char* )come_increment_ref_count(str));
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
                match_string=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 7125)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7125))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7125))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7125))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7126)),(char* )come_increment_ref_count(match_string));
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7148, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7148)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7151, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7151)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7156, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7156)))))));
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
            str=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7174)),offset,offset+regex_result));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7176)),(char* )come_increment_ref_count(str));
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
    if(offset<charp_length(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7192)))) {
        str_30=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7193)),offset,-1));
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7194)),(char* )come_increment_ref_count(str_30));
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 7241, "struct buffer* "))), "/usr/local/include/neo-c.h", 7241)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7254)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7256)),str);
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7257)),replace);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_31=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7267)),offset,-1));
                buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7268)),str_31);
                (str_31 = come_decrement_ref_count(str_31, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_31 = come_decrement_ref_count(str_31, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_32=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7274)),offset,-1));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7275)),str_32);
            (str_32 = come_decrement_ref_count(str_32, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_32 = come_decrement_ref_count(str_32, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7280))))));
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 7289, "struct buffer* "))), "/usr/local/include/neo-c.h", 7289)))));
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
            str=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7312)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7314)),str);
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7316, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7316)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            match_string=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7318)),offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7322)),block_result);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_33=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7332)),offset,-1));
                buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7333)),str_33);
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
            str_34=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7340)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7342)),str_34);
            group_strings_35=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7344, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7344)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string_36=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 7348)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7348))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7348))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7348))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(group_strings_35, "/usr/local/include/neo-c.h", 7349)),(char* )come_increment_ref_count(match_string_36));
                (match_string_36 = come_decrement_ref_count(match_string_36, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_37=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7352)),offset+regex_result,offset+regex_result+matchlength));
            block_result_38=(char*)come_increment_ref_count(block(parent,match_string_37,group_strings_35));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7356)),block_result_38);
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
            str_39=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7367)),offset,-1));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7368)),str_39);
            (str_39 = come_decrement_ref_count(str_39, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_39 = come_decrement_ref_count(str_39, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7372))))));
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7378, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7378)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7380, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7380)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7385, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7385)))))));
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
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7403, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7403)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            match_string=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7405)),offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7409)),(char* )come_increment_ref_count(block_result));
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
            group_strings_40=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7420, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7420)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string_41=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 7424)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7424))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7424))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7424))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(group_strings_40, "/usr/local/include/neo-c.h", 7425)),(char* )come_increment_ref_count(match_string_41));
                (match_string_41 = come_decrement_ref_count(match_string_41, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_42=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7428)),offset+regex_result,offset+regex_result+matchlength));
            block_result_43=(char*)come_increment_ref_count(block(parent,match_string_42,group_strings_40));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7432)),(char* )come_increment_ref_count(block_result_43));
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
    wstr=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len+1)), (void*)0, 7472, "int* "));
    ret=mbstowcs(wstr,str,len+1);
    ((int* )come_null_checker(wstr, "/usr/local/include/neo-c.h", 7475))[ret]=0;
    if(ret<0) {
        ((int* )come_null_checker(wstr, "/usr/local/include/neo-c.h", 7478))[0]=0;
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
        if(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7512))[i]>=65&&((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7512))[i]<=90) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7513))[i]=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7513))[i]-65+97;
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
        if(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7527))[i]>=97&&((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7527))[i]<=122) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7528))[i]=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7528))[i]-97+65;
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
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(tail-head+1)), (void*)0, 7574, "int* "));
    memcpy(result,str+head,sizeof(int )*(tail-head));
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7577))[tail-head]=0;
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
            if(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7594))[i+j]!=((const char*)come_null_checker(search_str, "/usr/local/include/neo-c.h", 7594))[j]) {
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
    if(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7666))[len-1]==10) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7667))[len-1]=0;
    }
    else if(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7669))[len-1]==13) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7670))[len-1]=0;
    }
    else if(len>2&&((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7672))[len-2]==13&&((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7672))[len-1]==10) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7673))[len-2]=0;
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 7687, "char*"));
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
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7729))))), "/usr/local/include/neo-c.h", 7729))))));
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
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7745))))), "/usr/local/include/neo-c.h", 7745))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    sub_str=(int* )come_increment_ref_count(wchar_tp_substring(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7752)),tail,-1));
    memcpy(str+head,sub_str,sizeof(int )*(wstring_length(((int* )come_null_checker(sub_str, "/usr/local/include/neo-c.h", 7754)))+1));
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7756))))), "/usr/local/include/neo-c.h", 7756))))));
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
            if(((int* )come_null_checker(p, "/usr/local/include/neo-c.h", 7789))[i]!=((const int* )come_null_checker(search_str, "/usr/local/include/neo-c.h", 7789))[i]) {
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
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len+1)), (void*)0, 7810, "int* "));
    for(i=0;i<len;i++){
        ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7813))[i]=((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7813))[len-i-1];
    }
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7816))[len]=0;
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
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len)), (void*)0, 7829, "int* "));
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7831))[0]=0;
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
    len=wchar_tp_length(((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7845)));
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len*2+1)), (void*)0, 7846, "int* "));
    n=0;
    for(i=0;i<len;i++){
        c=((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7850))[i];
        if((c>=0&&c<32)||c==127) {
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7855))[n++]=94;
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7856))[n++]=c+65-1;
        }
        else {
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7859))[n++]=c;
        }
    }
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7865))[n]=0;
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
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 7954, "int* "));
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
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 7967, "int* "));
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
    ((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 8012))[index]=c;
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 8024, "char*"));
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 8026))[0]=0;
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 8038, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 8038)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 8040, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 8040)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 8042, "struct buffer* "))), "/usr/local/include/neo-c.h", 8042)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<charp_length(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 8044)));i++){
        if(strstr(self+i,str)==self+i) {
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 8046)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8046))->buf)));
            buffer_reset(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8047)));
            i+=strlen(str)-1;
        }
        else {
            buffer_append_char(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8051)),((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 8051))[i]);
        }
    }
    if(buffer_length(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8054)))!=0) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 8055)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8055))->buf)));
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
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 8199))))));
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

struct buffer*  FILE_read(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    if(f==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 8291, "buffer")), "", 0))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 8293, "struct buffer* "))), "/usr/local/include/neo-c.h", 8293)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8300)),buf2,size);
        if(size<8192) {
            break;
        }
    }
    __result_obj__0 = (struct buffer* )come_increment_ref_count(buf);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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

struct buffer*  charp_read(const char* file_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __result_obj__0  ;
    struct _IO_FILE*  f  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    int result2;
    if(file_name==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 8391, "buffer")), "", 0))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    f=fopen(file_name,"r");
    if(f==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 8397, "buffer")), "", 0))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 8400, "struct buffer* "))), "/usr/local/include/neo-c.h", 8400)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8407)),buf2,size);
        if(size<8192) {
            break;
        }
    }
    result2=fclose(f);
    if(result2<0) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 8417, "buffer")), "", 0))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = (struct buffer* )come_increment_ref_count(buf);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 8425, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 8425)))));
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
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 8438)),(char* )come_increment_ref_count(__builtin_string(buf)));
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
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sClass_finalize(struct sClass* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 2))->mName!=((void*)0)) {
        (((struct sClass*)come_null_checker(self, "sClass_finalize", 2))->mName = come_decrement_ref_count(((struct sClass*)come_null_checker(self, "sClass_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 3))->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, ((struct sClass*)come_null_checker(self, "sClass_finalize", 3))->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 4))->mParentClassName!=((void*)0)) {
        (((struct sClass*)come_null_checker(self, "sClass_finalize", 4))->mParentClassName = come_decrement_ref_count(((struct sClass*)come_null_checker(self, "sClass_finalize", 4))->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sClass*)come_null_checker(self, "sClass_finalize", 5))->mAttribute!=((void*)0)) {
        (((struct sClass*)come_null_checker(self, "sClass_finalize", 5))->mAttribute = come_decrement_ref_count(((struct sClass*)come_null_checker(self, "sClass_finalize", 5))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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
    if(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3046))->len*10>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3046))->size) {
        map$2char$phsClass$ph_rehash(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3047)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3049)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3049))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3053))->item_existance, "/usr/local/include/neo-c.h", 3053))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3055))->keys, "/usr/local/include/neo-c.h", 3055))[it], "/usr/local/include/neo-c.h", 3055)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3055))->keys, "/usr/local/include/neo-c.h", 3055))[it]==key)) {
                if(1) {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3058))->key_list, "/usr/local/include/neo-c.h", 3058)),((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3058))->keys, "/usr/local/include/neo-c.h", 3058))[it],(_Bool)0);
                    (((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3059))->keys, "/usr/local/include/neo-c.h", 3059))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3059))->keys, "/usr/local/include/neo-c.h", 3059))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3060))->keys, "/usr/local/include/neo-c.h", 3060))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3063))->key_list, "/usr/local/include/neo-c.h", 3063)),((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3063))->keys, "/usr/local/include/neo-c.h", 3063))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3064))->keys, "/usr/local/include/neo-c.h", 3064))[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3067))->items, "/usr/local/include/neo-c.h", 3067))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3068))->items, "/usr/local/include/neo-c.h", 3068))[it]=(struct sClass* )come_increment_ref_count(item);
                }
                else {
                    ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3071))->items, "/usr/local/include/neo-c.h", 3071))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3078))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3088))->item_existance, "/usr/local/include/neo-c.h", 3088))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3090))->keys, "/usr/local/include/neo-c.h", 3090))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3093))->keys, "/usr/local/include/neo-c.h", 3093))[it]=key;
            }
            if(1) {
                ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3096))->items, "/usr/local/include/neo-c.h", 3096))[it]=(struct sClass* )come_increment_ref_count(item);
            }
            else {
                ((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3099))->items, "/usr/local/include/neo-c.h", 3099))[it]=item;
            }
            ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3102))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3109))->key_list, "/usr/local/include/neo-c.h", 3109)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3109))->key_list, "/usr/local/include/neo-c.h", 3109)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3109))->key_list, "/usr/local/include/neo-c.h", 3109)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 3110)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3116))->key_list, "/usr/local/include/neo-c.h", 3116)),(char* )come_increment_ref_count(key));
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
    size=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2966))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2967, "char** "))));
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), (void*)0, 2968, "struct sClass** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2969, "_Bool*"))));
    len=0;
    for(it=map$2char$phsClass$ph_begin(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2973)));!map$2char$phsClass$ph_end(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2973)));it=map$2char$phsClass$ph_next(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2973)))){
        memset(&default_value,0,sizeof(struct sClass* ));
        it2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2976)),it,default_value,(_Bool)0)));
        hash=string_get_hash_key(((char* )come_null_checker(((char* )it), "/usr/local/include/neo-c.h", 2977)))%size;
        n=hash;
        while((_Bool)1) {
            if(((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2981))[n]) {
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
                ((_Bool*)come_null_checker(item_existance, "/usr/local/include/neo-c.h", 2995))[n]=(_Bool)1;
                ((char** )come_null_checker(keys, "/usr/local/include/neo-c.h", 2996))[n]=it;
                memset(&default_value_46,0,sizeof(struct sClass* ));
                ((struct sClass** )come_null_checker(items, "/usr/local/include/neo-c.h", 2999))[n]=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2999)),it,(struct sClass* )come_increment_ref_count(default_value_46),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3007))->items);
    (((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3008))->item_existance = come_decrement_ref_count(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3008))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3009))->keys);
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3011))->keys=keys;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3012))->items=items;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3013))->item_existance=item_existance;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3015))->size=size;
    ((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3016))->len=len;
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
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2931))->key_list, "/usr/local/include/neo-c.h", 2931))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2932))->key_list, "/usr/local/include/neo-c.h", 2932))->it, "/usr/local/include/neo-c.h", 2932))->item;
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
    return self==((void*)0)||((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list, "/usr/local/include/neo-c.h", 2960))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_45  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2943))->key_list, "/usr/local/include/neo-c.h", 2943))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it, "/usr/local/include/neo-c.h", 2948))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2950))->key_list, "/usr/local/include/neo-c.h", 2950))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2951))->key_list, "/usr/local/include/neo-c.h", 2951))->it, "/usr/local/include/neo-c.h", 2951))->item;
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2839)))%((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2839))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2843))->item_existance, "/usr/local/include/neo-c.h", 2843))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2845))->keys, "/usr/local/include/neo-c.h", 2845))[it], "/usr/local/include/neo-c.h", 2845)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2845))->keys, "/usr/local/include/neo-c.h", 2845))[it]==key)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(((struct sClass** )come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2847))->items, "/usr/local/include/neo-c.h", 2847))[it]);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2852))->size) {
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2024))->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(((char* )come_null_checker(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->item, "/usr/local/include/neo-c.h", 2026)),item))||(by_pointer&&((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2026))->item==item)) {
            list$1char$ph_delete(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2027)),it2,it2+1);
            break;
        }
        it2++;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2032))->next;
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
        head+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2044))->len;
    }
    if(tail<0) {
        tail+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2047))->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2060))->len) {
        tail=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2061))->len;
    }
    if(head>=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2064))->len) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2072))->len) {
        list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2074)));
    }
    else if(head==0) {
        it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2077))->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2083))->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2088))->len--;
            }
            else if(i==tail) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2091))->head=it;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2092))->head, "/usr/local/include/neo-c.h", 2092))->prev=((void*)0);
                break;
            }
            else {
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2096))->next;
                i++;
            }
        }
    }
    else if(tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2101))->len) {
        it_47=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2102))->head;
        i_48=0;
        while(it_47!=((void*)0)) {
            if(i_48==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2106))->tail=((struct list_item$1char$ph*)come_null_checker(it_47, "/usr/local/include/neo-c.h", 2106))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2107))->tail, "/usr/local/include/neo-c.h", 2107))->next=((void*)0);
            }
            if(i_48>=head) {
                prev_it_49=it_47;
                it_47=((struct list_item$1char$ph*)come_null_checker(it_47, "/usr/local/include/neo-c.h", 2113))->next;
                i_48++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_49, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2118))->len--;
            }
            else {
                it_47=((struct list_item$1char$ph*)come_null_checker(it_47, "/usr/local/include/neo-c.h", 2121))->next;
                i_48++;
            }
        }
    }
    else {
        it_50=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2127))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_51=0;
        while(it_50!=((void*)0)) {
            if(i_51==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_50, "/usr/local/include/neo-c.h", 2136))->prev;
            }
            if(i_51==tail) {
                tail_it=it_50;
            }
            if(i_51>=head&&i_51<tail) {
                prev_it_52=it_50;
                it_50=((struct list_item$1char$ph*)come_null_checker(it_50, "/usr/local/include/neo-c.h", 2146))->next;
                i_51++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2151))->len--;
            }
            else {
                it_50=((struct list_item$1char$ph*)come_null_checker(it_50, "/usr/local/include/neo-c.h", 2154))->next;
                i_51++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(head_prev_it, "/usr/local/include/neo-c.h", 2160))->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(tail_it, "/usr/local/include/neo-c.h", 2163))->prev=head_prev_it;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2004))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2007))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2011))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2012))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2014))->len=0;
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
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
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
    return self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_54  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1855))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it, "/usr/local/include/neo-c.h", 1861))->next;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1863))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1864))->it, "/usr/local/include/neo-c.h", 1864))->item;
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    name2=(char* )come_increment_ref_count(charp_substring(((char* )come_null_checker(((char* )(__right_value0=__builtin_string(name))), "./common.h", 195)),0,-pointer_num+pointer_num_-1));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    klass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 196))->classes, "./common.h", 196)), "./common.h", 196)),((char* )(__right_value1=__builtin_string(name2))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    generics_class=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 197))->generics_classes, "./common.h", 197)), "./common.h", 197)),name2)));
    if(klass==((void*)0)&&generics_class==((void*)0)) {
        warning_msg(info,"class not found(%s)(1)\n",name2);
    }
    if(klass) {
        ((struct sType*)come_null_checker(self, "./common.h", 204))->mClass=klass;
    }
    else {
        klass2=(struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 207, "struct sClass* "));
        __dec_obj25=((struct sClass* )come_null_checker(klass2, "./common.h", 208))->mName,
        ((struct sClass* )come_null_checker(klass2, "./common.h", 208))->mName=(char* )come_increment_ref_count(__builtin_string(name));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
        map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 210))->classes, "./common.h", 210)),(char* )come_increment_ref_count(__builtin_string(name)),(struct sClass* )come_increment_ref_count(klass2),(_Bool)0);
        ((struct sType*)come_null_checker(self, "./common.h", 212))->mClass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 212))->classes, "./common.h", 212)), "./common.h", 212)),((char* )(__right_value1=__builtin_string(name))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        come_call_finalizer(sClass_finalize, klass2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj26=((struct sType*)come_null_checker(self, "./common.h", 215))->mNoSolvedGenericsType,
    ((struct sType*)come_null_checker(self, "./common.h", 215))->mNoSolvedGenericsType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj27=((struct sType*)come_null_checker(self, "./common.h", 216))->mOriginalLoadVarType,
    ((struct sType*)come_null_checker(self, "./common.h", 216))->mOriginalLoadVarType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj28=((struct sType*)come_null_checker(self, "./common.h", 217))->mGenericsTypes,
    ((struct sType*)come_null_checker(self, "./common.h", 217))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 217, "struct list$1sType$ph*"))), "./common.h", 217)))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj29=((struct sType*)come_null_checker(self, "./common.h", 218))->mArrayNum,
    ((struct sType*)come_null_checker(self, "./common.h", 218))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 218, "struct list$1sNode$ph*"))), "./common.h", 218)))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj30=((struct sType*)come_null_checker(self, "./common.h", 219))->mVarNameArrayNum,
    ((struct sType*)come_null_checker(self, "./common.h", 219))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 219, "struct list$1sNode$ph*"))), "./common.h", 219)))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj31=((struct sType*)come_null_checker(self, "./common.h", 220))->mArrayStatic,
    ((struct sType*)come_null_checker(self, "./common.h", 220))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 220, "struct list$1int$*"))), "./common.h", 220)))));
    come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj32=((struct sType*)come_null_checker(self, "./common.h", 221))->mArrayRestrict,
    ((struct sType*)come_null_checker(self, "./common.h", 221))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 221, "struct list$1int$*"))), "./common.h", 221)))));
    come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj33=((struct sType*)come_null_checker(self, "./common.h", 222))->mParamTypes,
    ((struct sType*)come_null_checker(self, "./common.h", 222))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 222, "struct list$1sType$ph*"))), "./common.h", 222)))));
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj34=((struct sType*)come_null_checker(self, "./common.h", 223))->mParamNames,
    ((struct sType*)come_null_checker(self, "./common.h", 223))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 223, "struct list$1char$ph*"))), "./common.h", 223)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj35=((struct sType*)come_null_checker(self, "./common.h", 224))->mOriginalTypeName,
    ((struct sType*)come_null_checker(self, "./common.h", 224))->mOriginalTypeName=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sType*)come_null_checker(self, "./common.h", 225))->mVarArgs=(_Bool)0;
    __dec_obj36=((struct sType*)come_null_checker(self, "./common.h", 226))->mResultType,
    ((struct sType*)come_null_checker(self, "./common.h", 226))->mResultType=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType*)come_null_checker(self, "./common.h", 227))->mUnsigned=unsigned_;
    ((struct sType*)come_null_checker(self, "./common.h", 228))->mConstant=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 229))->mRegister=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 230))->mVolatile=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 231))->mStatic=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 232))->mRestrict=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 233))->mLongLong=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 234))->mHeap=heap;
    ((struct sType*)come_null_checker(self, "./common.h", 235))->mNoHeap=(_Bool)0;
    ((struct sType*)come_null_checker(self, "./common.h", 237))->mPointerNum=pointer_num;
    __dec_obj37=((struct sType*)come_null_checker(self, "./common.h", 238))->mSizeNum,
    ((struct sType*)come_null_checker(self, "./common.h", 238))->mSizeNum=((void*)0);
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj38=((struct sType*)come_null_checker(self, "./common.h", 240))->mTypeOfNode,
    ((struct sType*)come_null_checker(self, "./common.h", 240))->mTypeOfNode=((void*)0);
    (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0, (void*)0) :0);
    __dec_obj39=((struct sType*)come_null_checker(self, "./common.h", 241))->mMiddleAttribute,
    ((struct sType*)come_null_checker(self, "./common.h", 241))->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj40=((struct sType*)come_null_checker(self, "./common.h", 242))->mPointerAttribute,
    ((struct sType*)come_null_checker(self, "./common.h", 242))->mPointerAttribute=(char*)come_increment_ref_count(xsprintf(""));
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
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sVar$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    it=((struct list$1sVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sVar$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
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
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_56  ;
    if(self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1855))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it=((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it, "/usr/local/include/neo-c.h", 1861))->next;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1863))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1864))->it, "/usr/local/include/neo-c.h", 1864))->item;
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
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1771, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        __dec_obj48=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_57=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1781, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj49=((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_57, "/usr/local/include/neo-c.h", 1785))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_57;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_57;
    }
    else {
        litem_58=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1791, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj50=((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_58, "/usr/local/include/neo-c.h", 1795))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_58;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_58;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    struct list$1sNode$ph* __dec_obj81;
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
        __dec_obj51=((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType!=((void*)0)) {
        __dec_obj52=((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes!=((void*)0)) {
        __dec_obj56=((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj57=((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum!=((void*)0)) {
        __dec_obj58=((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum));
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas!=((void*)0)) {
        __dec_obj59=((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas));
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 13))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName!=((void*)0)) {
        __dec_obj60=((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName, "sType_clone", 14, "char* "));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute!=((void*)0)) {
        __dec_obj61=((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute, "sType_clone", 15, "char* "));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute!=((void*)0)) {
        __dec_obj62=((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute, "sType_clone", 16, "char* "));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute!=((void*)0)) {
        __dec_obj63=((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute, "sType_clone", 17, "char* "));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute!=((void*)0)) {
        __dec_obj64=((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute, "sType_clone", 18, "char* "));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj65=((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 48))->mAnonymousName, "sType_clone", 48, "char* "));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 49))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName!=((void*)0)) {
        __dec_obj66=((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName, "sType_clone", 50, "char* "));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 51))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 52))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName!=((void*)0)) {
        __dec_obj67=((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName, "sType_clone", 53, "char* "));
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 54))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 54))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 55))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 55))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum!=((void*)0)) {
        __dec_obj71=((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj72=((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic!=((void*)0)) {
        __dec_obj73=((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict!=((void*)0)) {
        __dec_obj74=((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj75=((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 65))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName!=((void*)0)) {
        __dec_obj76=((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName, "sType_clone", 66, "char* "));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj77=((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames!=((void*)0)) {
        __dec_obj78=((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType!=((void*)0)) {
        __dec_obj79=((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 73))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 73))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode!=((void*)0)) {
        __dec_obj80=((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode));
        (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum!=((void*)0)) {
        __dec_obj81=((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1665, "struct list$1sType$ph*"))), "/usr/local/include/neo-c.h", 1665)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1667))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1670)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1670))->item)));
        }
        else {
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1673)),(struct sType* )come_increment_ref_count(sType_clone(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1673))->item)));
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1676))->next;
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
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1685))->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1686, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->prev=((void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1689))->next=((void*)0);
        __dec_obj53=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_59=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1696, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj54=((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_59, "/usr/local/include/neo-c.h", 1700))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_59;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_59;
    }
    else {
        litem_60=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1706, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj55=((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_60, "/usr/local/include/neo-c.h", 1710))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_60;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_60;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1665, "struct list$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1665)))));
    come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1667))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1670)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1670))->item)));
        }
        else {
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1673)),(struct sNode*)come_increment_ref_count(sNode_clone(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1673))->item)));
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1676))->next;
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
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1685))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1686, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1689))->next=((void*)0);
        __dec_obj68=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_61=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1696, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj69=((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_61, "/usr/local/include/neo-c.h", 1700))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_61;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_61;
    }
    else {
        litem_62=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1706, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj70=((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_62, "/usr/local/include/neo-c.h", 1710))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_62;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_62;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 1665, "struct list$1int$*"))), "/usr/local/include/neo-c.h", 1665)))));
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1667))->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1670)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1670))->item);
        }
        else {
            list$1int$_add(((struct list$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1673)),((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1673))->item);
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1676))->next;
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
    if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1685))->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1686, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->prev=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1689))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_63=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1696, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_63, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1int$*)come_null_checker(litem_63, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_63, "/usr/local/include/neo-c.h", 1700))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_63;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_63;
    }
    else {
        litem_64=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1706, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_64, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_64, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_64, "/usr/local/include/neo-c.h", 1710))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_64;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_64;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1665, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1665)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1667))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1670)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1670))->item, "/usr/local/include/neo-c.h", 1670, "char* ")));
        }
        else {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1673)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1673))->item, "/usr/local/include/neo-c.h", 1673, "char* ")));
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1676))->next;
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
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_finalize", 2))->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sBlock* )come_null_checker(self, "sBlock_finalize", 2))->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sBlock* )come_null_checker(self, "sBlock_finalize", 3))->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, ((struct sBlock* )come_null_checker(self, "sBlock_finalize", 3))->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sFun_finalize(struct sFun* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 2))->mName!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 2))->mName = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 3))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 4))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 5))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 6))->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 7))->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 7))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 8))->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 8))->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 9))->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 9))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 10))->mTextBlock!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 10))->mTextBlock = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 10))->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 11))->mTextBlockSName!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 11))->mTextBlockSName = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 11))->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 12))->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 12))->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 13))->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 13))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 14))->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sFun*)come_null_checker(self, "sFun_finalize", 14))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 15))->mAttribute!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 15))->mAttribute = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 15))->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 16))->mMiddleAttribute!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 16))->mMiddleAttribute = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 16))->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sFun*)come_null_checker(self, "sFun_finalize", 17))->mFunAttribute!=((void*)0)) {
        (((struct sFun*)come_null_checker(self, "sFun_finalize", 17))->mFunAttribute = come_decrement_ref_count(((struct sFun*)come_null_checker(self, "sFun_finalize", 17))->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
    struct sType*  __dec_obj82  ;
    struct buffer*  __dec_obj83  ;
    struct buffer*  __dec_obj84  ;
    struct buffer*  __dec_obj85  ;
    struct sBlock*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    struct sFun* __result_obj__0;
    __dec_obj41=((struct sFun*)come_null_checker(self, "./common.h", 300))->mName,
    ((struct sFun*)come_null_checker(self, "./common.h", 300))->mName=(char* )come_increment_ref_count(name);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj42=((struct sFun*)come_null_checker(self, "./common.h", 301))->mResultType,
    ((struct sFun*)come_null_checker(self, "./common.h", 301))->mResultType=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj43=((struct sFun*)come_null_checker(self, "./common.h", 302))->mParamTypes,
    ((struct sFun*)come_null_checker(self, "./common.h", 302))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj44=((struct sFun*)come_null_checker(self, "./common.h", 303))->mParamNames,
    ((struct sFun*)come_null_checker(self, "./common.h", 303))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj45=((struct sFun*)come_null_checker(self, "./common.h", 304))->mParamDefaultParametors,
    ((struct sFun*)come_null_checker(self, "./common.h", 304))->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sFun*)come_null_checker(self, "./common.h", 305))->mExternal=external;
    ((struct sFun*)come_null_checker(self, "./common.h", 306))->mVarArgs=var_args;
    ((struct sFun*)come_null_checker(self, "./common.h", 307))->mStatic=static_;
    ((struct sFun*)come_null_checker(self, "./common.h", 308))->mInline=inline_;
    ((struct sFun*)come_null_checker(self, "./common.h", 309))->mUniq=uniq_;
    ((struct sFun*)come_null_checker(self, "./common.h", 310))->mConstFun=const_fun;
    __dec_obj46=((struct sFun*)come_null_checker(self, "./common.h", 311))->mAllVar,
    ((struct sFun*)come_null_checker(self, "./common.h", 311))->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count(((struct list$1sVar$ph*)come_null_checker(((struct list$1sVar$ph*)(__right_value0=(struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), (void*)0, 311, "struct list$1sVar$ph*"))), "./common.h", 311)))));
    come_call_finalizer(list$1sVar$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sVar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj47=((struct sFun*)come_null_checker(self, "./common.h", 313))->mLambdaType,
    ((struct sFun*)come_null_checker(self, "./common.h", 313))->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 313, "struct sType* "))), "./common.h", 313))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(param_types),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "./common.h", 315)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "./common.h", 315)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "./common.h", 315)))){
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 316))->mLambdaType, "./common.h", 316))->mParamTypes, "./common.h", 316)),(struct sType* )come_increment_ref_count(sType_clone(it)));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    for(o2_saved_65=(struct list$1char$ph*)come_increment_ref_count(param_names),it_66=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved_65, "./common.h", 319)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved_65, "./common.h", 319)));it_66=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved_65, "./common.h", 319)))){
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 320))->mLambdaType, "./common.h", 320))->mParamNames, "./common.h", 320)),(char* )come_increment_ref_count((char* )come_memdup(it_66, "./common.h", 320, "char* ")));
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj82=((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 323))->mLambdaType, "./common.h", 323))->mResultType,
    ((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 323))->mLambdaType, "./common.h", 323))->mResultType=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct sFun*)come_null_checker(self, "./common.h", 324))->mLambdaType, "./common.h", 324))->mVarArgs=var_args;
    __dec_obj83=((struct sFun*)come_null_checker(self, "./common.h", 326))->mSource,
    ((struct sFun*)come_null_checker(self, "./common.h", 326))->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 326, "struct buffer* "))), "./common.h", 326)))));
    come_call_finalizer(buffer_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj84=((struct sFun*)come_null_checker(self, "./common.h", 327))->mSourceHead,
    ((struct sFun*)come_null_checker(self, "./common.h", 327))->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 327, "struct buffer* "))), "./common.h", 327)))));
    come_call_finalizer(buffer_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj85=((struct sFun*)come_null_checker(self, "./common.h", 328))->mSourceHead2,
    ((struct sFun*)come_null_checker(self, "./common.h", 328))->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 328, "struct buffer* "))), "./common.h", 328)))));
    come_call_finalizer(buffer_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj86=((struct sFun*)come_null_checker(self, "./common.h", 330))->mBlock,
    ((struct sFun*)come_null_checker(self, "./common.h", 330))->mBlock=(struct sBlock* )come_increment_ref_count(block);
    come_call_finalizer(sBlock_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj87=((struct sFun*)come_null_checker(self, "./common.h", 331))->mTextBlock,
    ((struct sFun*)come_null_checker(self, "./common.h", 331))->mTextBlock=(char* )come_increment_ref_count(text_block);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj88=((struct sFun*)come_null_checker(self, "./common.h", 333))->mTextBlockSName,
    ((struct sFun*)come_null_checker(self, "./common.h", 333))->mTextBlockSName=(char* )come_increment_ref_count(generics_sname);
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sFun*)come_null_checker(self, "./common.h", 334))->mTextBlockSline=generics_sline;
    if((((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 336))->mClass, "./common.h", 336))->mNumber||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 336))->mClass, "./common.h", 336))->mName, "./common.h", 336)),"double")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 336))->mClass, "./common.h", 336))->mName, "./common.h", 336)),"float")||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "./common.h", 336))->mClass, "./common.h", 336))->mStruct)&&((struct sType* )come_null_checker(result_type, "./common.h", 336))->mPointerNum==0) {
        ((struct sFun*)come_null_checker(self, "./common.h", 337))->mNoResultType=(_Bool)1;
    }
    __dec_obj89=((struct sFun*)come_null_checker(self, "./common.h", 340))->mAttribute,
    ((struct sFun*)come_null_checker(self, "./common.h", 340))->mAttribute=(char* )come_increment_ref_count(attribute);
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj90=((struct sFun*)come_null_checker(self, "./common.h", 341))->mMiddleAttribute,
    ((struct sFun*)come_null_checker(self, "./common.h", 341))->mMiddleAttribute=(char*)come_increment_ref_count(xsprintf(""));
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj91=((struct sFun*)come_null_checker(self, "./common.h", 342))->mFunAttribute,
    ((struct sFun*)come_null_checker(self, "./common.h", 342))->mFunAttribute=(char* )come_increment_ref_count(fun_attribute);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
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
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 2))->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 2))->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 3))->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 3))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 4))->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 4))->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 5))->mName!=((void*)0)) {
        (((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 5))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 5))->mName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 6))->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 6))->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 7))->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 7))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 8))->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 8))->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 9))->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 9))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 10))->mBlock!=((void*)0)) {
        (((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 10))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 10))->mBlock, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 11))->mGenericsSName!=((void*)0)) {
        (((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 11))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_checker(self, "sGenericsFun_finalize", 11))->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool const_fun)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __dec_obj92;
    struct list$1char$ph* __dec_obj93;
    char*  __dec_obj94  ;
    struct sType*  __dec_obj95  ;
    struct list$1sType$ph* __dec_obj96;
    struct list$1char$ph* __dec_obj97;
    struct list$1char$ph* __dec_obj98;
    char*  __dec_obj99  ;
    char*  __dec_obj100  ;
    struct sGenericsFun* __result_obj__0;
    __dec_obj92=((struct sGenericsFun*)come_null_checker(self, "./common.h", 371))->mGenericsTypeNames,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 371))->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj93=((struct sGenericsFun*)come_null_checker(self, "./common.h", 372))->mMethodGenericsTypeNames,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 372))->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(method_generics_type_names));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj94=((struct sGenericsFun*)come_null_checker(self, "./common.h", 374))->mName,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 374))->mName=(char* )come_increment_ref_count(name);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj95=((struct sGenericsFun*)come_null_checker(self, "./common.h", 375))->mResultType,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 375))->mResultType=(struct sType* )come_increment_ref_count(result_type);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj96=((struct sGenericsFun*)come_null_checker(self, "./common.h", 376))->mParamTypes,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 376))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj97=((struct sGenericsFun*)come_null_checker(self, "./common.h", 377))->mParamNames,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 377))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj98=((struct sGenericsFun*)come_null_checker(self, "./common.h", 378))->mParamDefaultParametors,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 378))->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 379))->mVarArgs=var_args;
    __dec_obj99=((struct sGenericsFun*)come_null_checker(self, "./common.h", 381))->mBlock,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 381))->mBlock=(char* )come_increment_ref_count(block);
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 382))->mSLine=((struct sInfo* )come_null_checker(info, "./common.h", 382))->sline;
    __dec_obj100=((struct sGenericsFun*)come_null_checker(self, "./common.h", 384))->mGenericsSName,
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 384))->mGenericsSName=(char* )come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 385))->mGenericsSLine=generics_sline;
    ((struct sGenericsFun*)come_null_checker(self, "./common.h", 386))->mConstFun=const_fun;
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
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 2))->c_value!=((void*)0)) {
        (((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 2))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 2))->c_value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 3))->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 3))->type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 4))->c_value_without_right_value_objects!=((void*)0)) {
        (((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 4))->c_value_without_right_value_objects = come_decrement_ref_count(((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 4))->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 5))->c_value_without_cast_object_value!=((void*)0)) {
        (((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 5))->c_value_without_cast_object_value = come_decrement_ref_count(((struct CVALUE*)come_null_checker(self, "CVALUE_finalize", 5))->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0));
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
    struct list$1char$ph* __dec_obj105;
    struct map$2char$phchar$ph* __result_obj__0;
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2694))->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), (void*)0, 2694, "char** "))));
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2695))->items=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), (void*)0, 2695, "char** "))));
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2696))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 2696, "_Bool*"))));
    for(i=0;i<128;i++){
        ((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2700))->item_existance, "/usr/local/include/neo-c.h", 2700))[i]=(_Bool)0;
    }
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2703))->size=128;
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2704))->len=0;
    __dec_obj105=((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->key_list,
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2706, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2706)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2708))->it=0;
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
    for(i=0;i<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2741))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->item_existance, "/usr/local/include/neo-c.h", 2742))[i]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2748))->items);
    for(i_67=0;i_67<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->size;i_67++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->item_existance, "/usr/local/include/neo-c.h", 2751))[i_67]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_67] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_67], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2757))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2759))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance = come_decrement_ref_count(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_68;
    for(i=0;i<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2741))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->item_existance, "/usr/local/include/neo-c.h", 2742))[i]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2748))->items);
    for(i_68=0;i_68<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->size;i_68++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->item_existance, "/usr/local/include/neo-c.h", 2751))[i_68]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_68] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_68], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2757))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2759))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance = come_decrement_ref_count(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void sModule_finalize(struct sModule* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 2))->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sModule*)come_null_checker(self, "sModule_finalize", 2))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 3))->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sModule*)come_null_checker(self, "sModule_finalize", 3))->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 4))->mLastCode!=((void*)0)) {
        (((struct sModule*)come_null_checker(self, "sModule_finalize", 4))->mLastCode = come_decrement_ref_count(((struct sModule*)come_null_checker(self, "sModule_finalize", 4))->mLastCode, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 5))->mLastCode2!=((void*)0)) {
        (((struct sModule*)come_null_checker(self, "sModule_finalize", 5))->mLastCode2 = come_decrement_ref_count(((struct sModule*)come_null_checker(self, "sModule_finalize", 5))->mLastCode2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sModule*)come_null_checker(self, "sModule_finalize", 6))->mHeader!=((void*)0)) {
        come_call_finalizer(map$2char$phchar$ph$p_finalize, ((struct sModule*)come_null_checker(self, "sModule_finalize", 6))->mHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sModule* sModule_initialize(struct sModule* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sModule_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  __dec_obj101  ;
    struct buffer*  __dec_obj102  ;
    char*  __dec_obj103  ;
    char*  __dec_obj104  ;
    struct map$2char$phchar$ph* __dec_obj106;
    struct sModule* __result_obj__0;
    __dec_obj101=((struct sModule*)come_null_checker(self, "./common.h", 415))->mSourceHead,
    ((struct sModule*)come_null_checker(self, "./common.h", 415))->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 415, "struct buffer* "))), "./common.h", 415)))));
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj102=((struct sModule*)come_null_checker(self, "./common.h", 416))->mSource,
    ((struct sModule*)come_null_checker(self, "./common.h", 416))->mSource=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 416, "struct buffer* "))), "./common.h", 416)))));
    come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj103=((struct sModule*)come_null_checker(self, "./common.h", 417))->mLastCode,
    ((struct sModule*)come_null_checker(self, "./common.h", 417))->mLastCode=((void*)0);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj104=((struct sModule*)come_null_checker(self, "./common.h", 418))->mLastCode2,
    ((struct sModule*)come_null_checker(self, "./common.h", 418))->mLastCode2=((void*)0);
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=((struct sModule*)come_null_checker(self, "./common.h", 419))->mHeader,
    ((struct sModule*)come_null_checker(self, "./common.h", 419))->mHeader=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count(((struct map$2char$phchar$ph*)come_null_checker(((struct map$2char$phchar$ph*)(__right_value0=(struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), (void*)0, 419, "struct map$2char$phchar$ph*"))), "./common.h", 419)))));
    come_call_finalizer(map$2char$phchar$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct list$1char$ph* __dec_obj107;
    struct map$2char$phsVar$ph* __result_obj__0;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2694))->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), (void*)0, 2694, "char** "))));
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2695))->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), (void*)0, 2695, "struct sVar** "))));
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2696))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), (void*)0, 2696, "_Bool*"))));
    for(i=0;i<128;i++){
        ((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2700))->item_existance, "/usr/local/include/neo-c.h", 2700))[i]=(_Bool)0;
    }
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2703))->size=128;
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2704))->len=0;
    __dec_obj107=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->key_list,
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2706))->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2706, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2706)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2708))->it=0;
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
    for(i=0;i<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2741))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->item_existance, "/usr/local/include/neo-c.h", 2742))[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2748))->items);
    for(i_69=0;i_69<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->size;i_69++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->item_existance, "/usr/local/include/neo-c.h", 2751))[i_69]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_69] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_69], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2757))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2759))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance = come_decrement_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_70;
    for(i=0;i<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2741))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->item_existance, "/usr/local/include/neo-c.h", 2742))[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, ((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2748))->items);
    for(i_70=0;i_70<((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->size;i_70++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->item_existance, "/usr/local/include/neo-c.h", 2751))[i_70]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_70] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_70], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2757))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2759))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance = come_decrement_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable*  parent  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* __dec_obj108;
    struct sVarTable* __result_obj__0;
    __dec_obj108=((struct sVarTable*)come_null_checker(self, "./common.h", 431))->mVars,
    ((struct sVarTable*)come_null_checker(self, "./common.h", 431))->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)(__right_value0=(struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), (void*)0, 431, "struct map$2char$phsVar$ph*"))), "./common.h", 431)))));
    come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sVarTable*)come_null_checker(self, "./common.h", 432))->mGlobal=global;
    ((struct sVarTable*)come_null_checker(self, "./common.h", 433))->mParent=parent;
    __result_obj__0 = (struct sVarTable*)come_increment_ref_count(self);
    come_call_finalizer(sVarTable_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void sVarTable_finalize(struct sVarTable* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_finalize"; neo_current_frame = &fr;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, ((struct sVarTable*)come_null_checker(self, "./common.h", 438))->mVars, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

struct sBlock* sBlock_initialize(struct sBlock* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* __dec_obj109;
    struct sBlock* __result_obj__0;
    __dec_obj109=((struct sBlock*)come_null_checker(self, "./common.h", 449))->mNodes,
    ((struct sBlock*)come_null_checker(self, "./common.h", 449))->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 449, "struct list$1sNode$ph*"))), "./common.h", 449)))));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname!=((void*)0)) {
        (((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname = come_decrement_ref_count(((struct sNodeBase*)come_null_checker(self, "sNodeBase_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj110  ;
    struct sNodeBase* __result_obj__0;
    ((struct sNodeBase*)come_null_checker(self, "./common.h", 624))->sline=((struct sInfo* )come_null_checker(info, "./common.h", 624))->sline;
    __dec_obj110=((struct sNodeBase*)come_null_checker(self, "./common.h", 625))->sname,
    ((struct sNodeBase*)come_null_checker(self, "./common.h", 625))->sname=(char* )come_increment_ref_count(__builtin_string(((struct sInfo* )come_null_checker(info, "./common.h", 625))->sname));
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct sNodeBase*)come_null_checker(self, "./common.h", 626))->sline_real=((struct sInfo* )come_null_checker(info, "./common.h", 626))->sline_real;
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
    return ((struct sNodeBase*)come_null_checker(self, "./common.h", 629))->sline;
    neo_current_frame = fr.prev;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_sline_real"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((struct sNodeBase*)come_null_checker(self, "./common.h", 633))->sline_real;
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
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(((struct sNodeBase*)come_null_checker(self, "./common.h", 641))->sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCurrentNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)come_null_checker(self, "./common.h", 649))),info)));
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
    return ((struct sCurrentNode*)come_null_checker(self, "./common.h", 654))->sline;
    neo_current_frame = fr.prev;
}

char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_sname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(((struct sCurrentNode*)come_null_checker(self, "./common.h", 659))->sname))));
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
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2931))->key_list, "/usr/local/include/neo-c.h", 2931))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2932))->key_list, "/usr/local/include/neo-c.h", 2932))->it, "/usr/local/include/neo-c.h", 2932))->item;
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
    return self==((void*)0)||((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list, "/usr/local/include/neo-c.h", 2960))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_72  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2943))->key_list, "/usr/local/include/neo-c.h", 2943))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it, "/usr/local/include/neo-c.h", 2948))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2950))->key_list, "/usr/local/include/neo-c.h", 2950))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2951))->key_list, "/usr/local/include/neo-c.h", 2951))->it, "/usr/local/include/neo-c.h", 2951))->item;
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
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(((struct sVar** )come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsVar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj111  ;
    struct sType*  __dec_obj112  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj111=((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1,
    ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj112=((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2,
    ((struct tuple2$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2=(struct sType* )come_increment_ref_count(v2);
    come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct tuple2$2char$phsType$ph* __dec_obj113;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_73;
    struct tuple2$2char$phsType$ph* __dec_obj114;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_74;
    struct tuple2$2char$phsType$ph* __dec_obj115;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1771, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        __dec_obj113=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_73=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1781, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj114=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_73, "/usr/local/include/neo-c.h", 1785))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_73;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_73;
    }
    else {
        litem_74=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), (void*)0, 1791, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj115=((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(litem_74, "/usr/local/include/neo-c.h", 1795))->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_74;
        ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_74;
    }
    ((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    char*  __dec_obj116  ;
    struct sType*  __dec_obj117  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), (void*)0, 5, "struct tuple2$2char$phsType$ph*"));
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 6))->v1!=((void*)0)) {
        __dec_obj116=((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 6))->v1,
        ((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 6))->v1=(char* )come_increment_ref_count((char* )come_memdup(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 6))->v1, "tuple2$2char$phsType$ph_clone", 6, "char* "));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 7))->v2!=((void*)0)) {
        __dec_obj117=((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 7))->v2,
        ((struct tuple2$2char$phsType$ph*)come_null_checker(result, "tuple2$2char$phsType$ph_clone", 7))->v2=(struct sType* )come_increment_ref_count(sType_clone(((struct tuple2$2char$phsType$ph*)come_null_checker(self, "tuple2$2char$phsType$ph_clone", 7))->v2));
        come_call_finalizer(sType_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1924))->len;
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj120  ;
    struct list_item$1CVALUE$ph* litem_83;
    struct CVALUE*  __dec_obj121  ;
    struct list_item$1CVALUE$ph* litem_84;
    struct CVALUE*  __dec_obj122  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1771, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        __dec_obj120=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_83=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1781, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj121=((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_83, "/usr/local/include/neo-c.h", 1785))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_83;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_83;
    }
    else {
        litem_84=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1791, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj122=((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_84, "/usr/local/include/neo-c.h", 1795))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_84;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_84;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    char*  __dec_obj118  ;
    struct sType*  __dec_obj119  ;
    _Bool __result_obj__0;
    ((struct sInfo* )come_null_checker(info, "./common.h", 669))->current_stack_num++;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",((struct sInfo* )come_null_checker(info, "./common.h", 670))->current_stack_num));
    current_stack=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value0=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 671, "struct sClass* "))), "./common.h", 671))),class_name,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info));
    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    vtable=((struct sInfo* )come_null_checker(info, "./common.h", 673))->lv_table;
    while(vtable) {
        for(o2_saved=(struct map$2char$phsVar$ph*)come_increment_ref_count(((struct sVarTable* )come_null_checker(vtable, "./common.h", 676))->mVars),it=map$2char$phsVar$ph_begin(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved, "./common.h", 676)));!map$2char$phsVar$ph_end(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved, "./common.h", 676)));it=map$2char$phsVar$ph_next(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved, "./common.h", 676)))){
            key=it;
            value=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(((struct sVarTable* )come_null_checker(vtable, "./common.h", 678))->mVars, "./common.h", 678)), "./common.h", 678)),((char* )(__right_value1=__builtin_string(key))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sVar* )come_null_checker(value, "./common.h", 680))->mType));
            ((struct sType* )come_null_checker(type2, "./common.h", 682))->mPointerNum++;
            item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 684, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(__builtin_string(((struct sVar* )come_null_checker(value, "./common.h", 684))->mCValueName)),(struct sType* )come_increment_ref_count(type2)));
            if(((struct sVar* )come_null_checker(value, "./common.h", 686))->mCValueName!=((void*)0)) {
                if(strcmp(((struct sVar* )come_null_checker(value, "./common.h", 687))->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value, "./common.h", 690))->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value, "./common.h", 693))->mCValueName,"__map_element")==0) {
                }
                else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value, "./common.h", 696))->mType, "./common.h", 696))->mClass, "./common.h", 696))->mName, "./common.h", 696)),"va_list")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value, "./common.h", 696))->mType, "./common.h", 696))->mClass, "./common.h", 696))->mName, "./common.h", 696)),"__builtin_va_list")) {
                }
                else if(((struct sType* )come_null_checker(type2, "./common.h", 699))->mArrayPointerType) {
                    type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
                    ((struct sType* )come_null_checker(type3, "./common.h", 701))->mPointerNum--;
                    ((struct sType* )come_null_checker(type3, "./common.h", 703))->mArrayPointerNum++;
                    item2=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 704, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(__builtin_string(((struct sVar* )come_null_checker(value, "./common.h", 704))->mCValueName)),(struct sType* )come_increment_ref_count(type3)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(current_stack, "./common.h", 705))->mFields, "./common.h", 705)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2)));
                    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "./common.h", 707))->mArrayNum, "./common.h", 707)))>0) {
                    type3_75=(struct sType* )come_increment_ref_count(sType_clone(type2));
                    ((struct sType* )come_null_checker(type3_75, "./common.h", 709))->mPointerNum--;
                    ((struct sType* )come_null_checker(type3_75, "./common.h", 710))->mArrayPointerNum++;
                    item2_76=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 711, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(__builtin_string(((struct sVar* )come_null_checker(value, "./common.h", 711))->mCValueName)),(struct sType* )come_increment_ref_count(type3_75)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(current_stack, "./common.h", 712))->mFields, "./common.h", 712)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item2_76)));
                    come_call_finalizer(sType_finalize, type3_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item2_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(((struct list$1tuple2$2char$phsType$ph$ph*)come_null_checker(((struct sClass* )come_null_checker(current_stack, "./common.h", 715))->mFields, "./common.h", 715)),(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_clone(item)));
                }
            }
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=((struct sVarTable* )come_null_checker(vtable, "./common.h", 720))->mParent;
    }
    output_struct(current_stack,((void*)0),info,(_Bool)0);
    map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 725))->classes, "./common.h", 725)),(char* )come_increment_ref_count(class_name),(struct sClass* )come_increment_ref_count(current_stack),(_Bool)0);
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name,((struct sInfo* )come_null_checker(info, "./common.h", 727))->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",((struct sInfo* )come_null_checker(info, "./common.h", 728))->current_stack_num,class_name);
    vtable=((struct sInfo* )come_null_checker(info, "./common.h", 730))->lv_table;
    add_come_code(info,"({");
    while(vtable) {
        for(o2_saved_77=(struct map$2char$phsVar$ph*)come_increment_ref_count(((struct sVarTable* )come_null_checker(vtable, "./common.h", 735))->mVars),it_78=map$2char$phsVar$ph_begin(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved_77, "./common.h", 735)));!map$2char$phsVar$ph_end(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved_77, "./common.h", 735)));it_78=map$2char$phsVar$ph_next(((struct map$2char$phsVar$ph*)come_null_checker(o2_saved_77, "./common.h", 735)))){
            key_79=it_78;
            value_80=((struct sVar* )(__right_value0=map$2char$phsVar$ph_operator_load_element(((struct map$2char$phsVar$ph*)come_null_checker(((struct map$2char$phsVar$ph*)come_null_checker(((struct sVarTable* )come_null_checker(vtable, "./common.h", 737))->mVars, "./common.h", 737)), "./common.h", 737)),key_79)));
            type2_81=(struct sType* )come_increment_ref_count(sType_clone(((struct sVar* )come_null_checker(value_80, "./common.h", 739))->mType));
            item_82=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "./common.h", 741, "struct tuple2$2char$phsType$ph")),(char* )come_increment_ref_count(((struct sVar* )come_null_checker(value_80, "./common.h", 741))->mCValueName),(struct sType* )come_increment_ref_count(type2_81)));
            if(((struct sVar* )come_null_checker(value_80, "./common.h", 743))->mCValueName!=((void*)0)) {
                if(strcmp(((struct sVar* )come_null_checker(value_80, "./common.h", 744))->mCValueName,"__list_values")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value_80, "./common.h", 747))->mCValueName,"__map_keys")==0) {
                }
                else if(strcmp(((struct sVar* )come_null_checker(value_80, "./common.h", 750))->mCValueName,"__map_element")==0) {
                }
                else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value_80, "./common.h", 753))->mType, "./common.h", 753))->mClass, "./common.h", 753))->mName, "./common.h", 753)),"va_list")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sVar* )come_null_checker(value_80, "./common.h", 753))->mType, "./common.h", 753))->mClass, "./common.h", 753))->mName, "./common.h", 753)),"__builtin_va_list")) {
                }
                else {
                    if(string_operator_equals(((char* )come_null_checker(((struct sVar* )come_null_checker(value_80, "./common.h", 757))->mFunName, "./common.h", 757)),((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 757))->come_fun, "./common.h", 757))->mName)) {
                        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2_81, "./common.h", 758))->mClass, "./common.h", 758))->mName, "./common.h", 758)),"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = %s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 759))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 759))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 759))->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = &%s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 762))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 762))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 762))->mCValueName);
                        }
                    }
                    else {
                        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2_81, "./common.h", 766))->mClass, "./common.h", 766))->mName, "./common.h", 766)),"lambda")) {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 767))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 767))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 767))->mCValueName);
                        }
                        else {
                            add_come_code(info,"__current_stack%d__.%s = parent->%s;\n",((struct sInfo* )come_null_checker(info, "./common.h", 770))->current_stack_num,((struct sVar* )come_null_checker(value_80, "./common.h", 770))->mCValueName,((struct sVar* )come_null_checker(value_80, "./common.h", 770))->mCValueName);
                        }
                    }
                }
            }
            come_call_finalizer(sType_finalize, type2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, o2_saved_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        vtable=((struct sVarTable* )come_null_checker(vtable, "./common.h", 777))->mParent;
    }
    add_come_code(info,"})");
    add_come_code(info,",");
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 789, "struct CVALUE* "))), "./common.h", 789)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj118=((struct CVALUE* )come_null_checker(come_value, "./common.h", 791))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "./common.h", 791))->c_value=(char* )come_increment_ref_count(xsprintf("&__current_stack%d__",((struct sInfo* )come_null_checker(info, "./common.h", 791))->current_stack_num));
    __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj119=((struct CVALUE* )come_null_checker(come_value, "./common.h", 792))->type,
    ((struct CVALUE* )come_null_checker(come_value, "./common.h", 792))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 792, "struct sType* "))), "./common.h", 792))),(char* )come_increment_ref_count(class_name),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "./common.h", 793))->var=((void*)0);
    add_come_last_code(info,"%s;\n",((struct CVALUE* )come_null_checker(come_value, "./common.h", 795))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 797))->stack, "./common.h", 797)),(struct CVALUE* )come_increment_ref_count(come_value));
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
    if(self!=((void*)0)&&((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 2))->sname = come_decrement_ref_count(((struct sNothingNode*)come_null_checker(self, "sNothingNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNothingNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)come_null_checker(self, "./common.h", 1114))),info)));
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
    if(self!=((void*)0)&&((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 2))->sname!=((void*)0)) {
        (((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 2))->sname = come_decrement_ref_count(((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 3))->value!=((void*)0)) {
        ((((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 3))->value) ? ((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 3))->value = come_decrement_ref_count(((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 3))->value, ((struct sNode*)((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 3))->value)->finalize, ((struct sNode*)((struct sNullChecker*)come_null_checker(self, "sNullChecker_finalize", 3))->value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    neo_current_frame = fr.prev;
}

struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj123;
    struct sNullChecker* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNullChecker*)come_increment_ref_count(((struct sNullChecker*)come_null_checker(self, "./common.h", 1167))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj123=((struct sNullChecker*)come_null_checker(self, "./common.h", 1169))->value,
    ((struct sNullChecker*)come_null_checker(self, "./common.h", 1169))->value=(struct sNode*)come_increment_ref_count(sNode_clone(value));
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0) :0);
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
    _Bool pointer_type;
    char*  type_name  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj124  ;
    struct sType*  __dec_obj125  ;
    value=(struct sNode*)come_increment_ref_count(((struct sNullChecker*)come_null_checker(self, "./common.h", 1179))->value);
    Value=node_compile(value,info);
    if(!Value) {
        __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
    type__=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "./common.h", 1187))->type));
    type_=(struct sType* )come_increment_ref_count(solve_generics(type__,((struct sInfo* )come_null_checker(info, "./common.h", 1188))->generics_type,info));
    type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info));
    original_type=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(type__, "./common.h", 1191))->mOriginalLoadVarType);
    pointer_type=((struct sType* )come_null_checker(type, "./common.h", 1193))->mPointerNum>0||((struct sType* )come_null_checker(type, "./common.h", 1194))->mArrayPointerNum>0||((struct sType* )come_null_checker(type, "./common.h", 1195))->mFunctionPointerNum>0;
    if(original_type) {
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(original_type, "./common.h", 1198))->mArrayNum, "./common.h", 1198)))==1&&((struct sType* )come_null_checker(type, "./common.h", 1198))->mArrayPointerNum==1) {
            pointer_type=(_Bool)0;
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(original_type, "./common.h", 1202))->mArrayNum, "./common.h", 1202)))>0&&((struct sType* )come_null_checker(original_type, "./common.h", 1202))->mPointerNum==0) {
            pointer_type=(_Bool)0;
        }
    }
    if(!gComeC&&pointer_type) {
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)1));
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 1210, "struct CVALUE* "))), "./common.h", 1210)))));
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj124=((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1212))->c_value,
        ((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1212))->c_value=(char* )come_increment_ref_count(xsprintf("((%s)come_null_checker(%s, \"%s\", %d))",type_name,((struct CVALUE* )come_null_checker(come_value, "./common.h", 1212))->c_value,((struct sInfo* )come_null_checker(info, "./common.h", 1212))->sname,((struct sInfo* )come_null_checker(info, "./common.h", 1212))->sline));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj125=((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1213))->type,
        ((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1213))->type=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct CVALUE* )come_null_checker(come_value2, "./common.h", 1214))->var=((struct CVALUE* )come_null_checker(come_value, "./common.h", 1214))->var;
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 1216))->stack, "./common.h", 1216)),(struct CVALUE* )come_increment_ref_count(come_value2));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "./common.h", 1219))->stack, "./common.h", 1219)),(struct CVALUE* )come_increment_ref_count(come_value));
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

