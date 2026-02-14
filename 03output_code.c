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
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker);
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
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_type_name_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  class_name  ;
    _Bool no_output_come_code;
    char*  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    _Bool eval_pointer_num;
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
    struct list$1sNode$ph* o2_saved_19;
    struct sNode* it_20;
    struct CVALUE*  cvalue_21  ;
    struct list$1sNode$ph* o2_saved_22;
    struct sNode* it_23;
    struct CVALUE*  cvalue_24  ;
    int i_25;
    int i_26;
    struct sNode* node_27;
    _Bool Value_28;
    struct CVALUE*  cvalue_29  ;
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
    eval_pointer_num=(_Bool)0;
    if(string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 61))->mOriginalTypeName, "03output_code.nc", 61)),"va_list")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 62)),"va_list");
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 64))->mOriginalTypeName, "03output_code.nc", 64)),"__builtin_va_list")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 65)),"__builtin_va_list");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 67)),"__builtin_va_list")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 68)),"__builtin_va_list");
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 70))->mClass, "03output_code.nc", 70))->mStruct) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 71)),"struct ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 72)),class_name);
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 74))->mClass, "03output_code.nc", 74))->mUnion) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 75)),"union ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 76)),class_name);
    }
    else if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 78))->mClass, "03output_code.nc", 78))->mEnum) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 79)),"enum ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 80)),class_name);
    }
    else if(((struct sType* )come_null_checker(type, "03output_code.nc", 82))->mLongLong) {
        if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 83)),"int")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 84)),"long long int");
        }
        else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 86)),"long")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 87)),"long long");
        }
    }
    else if(((struct sType* )come_null_checker(type, "03output_code.nc", 90))->mLong) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 91)),"long ");
        if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 93)),"int")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 94))," int");
        }
        else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 96)),"long")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 97))," long");
        }
        else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 99)),"double")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 100))," double");
        }
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 103)),"long")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 104)),"long");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 106)),"__uint128_t")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 107)),"__uint128_t");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 109)),"bool")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 110)),"_Bool");
    }
    else if(string_operator_equals(((char* )come_null_checker(class_name, "03output_code.nc", 112)),"lambda")) {
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 113))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 114)),result_type_str);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 115))," ");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 117))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 117))->mMiddleAttribute, "03output_code.nc", 117)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 118)),((struct sType* )come_null_checker(type, "03output_code.nc", 118))->mMiddleAttribute);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 119))," ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 122))->mArrayPointerNum>0) {
            for(i=0;i<((struct sType* )come_null_checker(type, "03output_code.nc", 123))->mArrayPointerNum+1;i++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 124)),"(");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 125)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 127))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 127))->mPointerAttribute, "03output_code.nc", 127)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 128))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 129)),((struct sType* )come_null_checker(type, "03output_code.nc", 129))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 131))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 132)),"[]");
            }
            for(i_0=0;i_0<((struct sType* )come_null_checker(type, "03output_code.nc", 134))->mArrayPointerNum;i_0++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 135)),")");
            }
        }
        else if(((struct sType* )come_null_checker(type, "03output_code.nc", 138))->mFunctionPointerNum>1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 139)),"(");
            for(i_1=0;i_1<((struct sType* )come_null_checker(type, "03output_code.nc", 140))->mFunctionPointerNum;i_1++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 141)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 143))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 143))->mPointerAttribute, "03output_code.nc", 143)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 144))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 145)),((struct sType* )come_null_checker(type, "03output_code.nc", 145))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 147))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 148)),"[]");
            }
            eval_pointer_num=(_Bool)1;
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 153)),"(*");
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 154))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 154))->mPointerAttribute, "03output_code.nc", 154)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 155))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 156)),((struct sType* )come_null_checker(type, "03output_code.nc", 156))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 158))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 159)),"[]");
            }
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 163))->mArrayNum, "03output_code.nc", 163)))>0) {
            for(i_2=0;i_2<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 164))->mArrayNum, "03output_code.nc", 164)));i_2++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 165)),"[");
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 166))->mArrayNum, "03output_code.nc", 166)), "03output_code.nc", 166)),i_2));
                Value=node_compile(node,info);
                if(!Value) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 175)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 175))->c_value);
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 176)),"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 179))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 180)),"[]");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 182)),")(");
        j=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 185))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 185)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 185)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 185)))){
            param_type_str=(char* )come_increment_ref_count(make_type_name_string(it,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 188)),param_type_str);
            if(j!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 190))->mParamTypes, "03output_code.nc", 190)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 191)),",");
            }
            j++;
            (param_type_str = come_decrement_ref_count(param_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 195)),")");
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
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 202)),class_name);
        if(cast_type) {
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 204))->mArrayPointerNum>0) {
                if(!nullchecker) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 205)),"(");
                }
                for(i_7=0;i_7<((struct sType* )come_null_checker(type, "03output_code.nc", 206))->mArrayPointerNum;i_7++){
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 207)),"*");
                }
                if(((struct sType* )come_null_checker(type, "03output_code.nc", 209))->mTypedefOriginalType) {
                    for(i_8=0;i_8<((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 210))->mTypedefOriginalType, "03output_code.nc", 210))->mPointerNum;i_8++){
                        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 211)),"*");
                    }
                }
                for(o2_saved_9=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 214))->mVarNameArrayNum),it_11=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_9, "03output_code.nc", 214)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_9, "03output_code.nc", 214)));it_11=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_9, "03output_code.nc", 214)))){
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
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 221)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_13, "03output_code.nc", 221))->c_value);
                    come_call_finalizer(CVALUE_finalize, cvalue_13, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(!nullchecker) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 223)),")");
                }
                for(o2_saved_14=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 224))->mArrayNum),it_15=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_14, "03output_code.nc", 224)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_14, "03output_code.nc", 224)));it_15=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_14, "03output_code.nc", 224)))){
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
                    if(nullchecker) {
                        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 232)),"*");
                    }
                    else {
                        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 235)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_16, "03output_code.nc", 235))->c_value);
                    }
                    come_call_finalizer(CVALUE_finalize, cvalue_16, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                eval_pointer_num=(_Bool)1;
            }
            else if(((struct sType* )come_null_checker(type, "03output_code.nc", 240))->mPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 240))->mArrayNum, "03output_code.nc", 240)))>0) {
                if(!nullchecker) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 241)),"(");
                }
                for(i_17=0;i_17<((struct sType* )come_null_checker(type, "03output_code.nc", 242))->mPointerNum;i_17++){
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 243)),"*");
                }
                if(((struct sType* )come_null_checker(type, "03output_code.nc", 245))->mTypedefOriginalType) {
                    for(i_18=0;i_18<((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 246))->mTypedefOriginalType, "03output_code.nc", 246))->mPointerNum;i_18++){
                        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 247)),"*");
                    }
                }
                for(o2_saved_19=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 250))->mVarNameArrayNum),it_20=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_19, "03output_code.nc", 250)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_19, "03output_code.nc", 250)));it_20=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_19, "03output_code.nc", 250)))){
                    if(!node_compile(it_20,info)) {
                        err_msg(info,"invalid array number");
                        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        neo_current_frame = fr.prev;
                        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                        return __result_obj__0;
                    }
                    cvalue_21=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 257)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_21, "03output_code.nc", 257))->c_value);
                    come_call_finalizer(CVALUE_finalize, cvalue_21, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(!nullchecker) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 259)),")");
                }
                for(o2_saved_22=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 260))->mArrayNum),it_23=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_22, "03output_code.nc", 260)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_22, "03output_code.nc", 260)));it_23=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_22, "03output_code.nc", 260)))){
                    if(!node_compile(it_23,info)) {
                        err_msg(info,"invalid array number");
                        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                        neo_current_frame = fr.prev;
                        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                        return __result_obj__0;
                    }
                    cvalue_24=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    if(nullchecker) {
                        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 268)),"*");
                    }
                    else {
                        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 271)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_24, "03output_code.nc", 271))->c_value);
                    }
                    come_call_finalizer(CVALUE_finalize, cvalue_24, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                eval_pointer_num=(_Bool)1;
            }
        }
    }
    if(!eval_pointer_num&&string_operator_not_equals(((char* )come_null_checker(class_name, "03output_code.nc", 279)),"lambda")&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 279))->mOriginalTypeName, "03output_code.nc", 279)),"va_list")&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 279))->mOriginalTypeName, "03output_code.nc", 279)),"__builtin_va_list")) {
        for(i_25=0;i_25<((struct sType* )come_null_checker(type, "03output_code.nc", 280))->mPointerNum;i_25++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 281)),"*");
        }
    }
    if(string_operator_not_equals(((char* )come_null_checker(class_name, "03output_code.nc", 285)),"lambda")&&((struct sType* )come_null_checker(type, "03output_code.nc", 285))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 285))->mPointerAttribute, "03output_code.nc", 285)),"")) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 286))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 287)),((struct sType* )come_null_checker(type, "03output_code.nc", 287))->mPointerAttribute);
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 290))->mRestrict) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 291))," restrict");
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 294))->mAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 295)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 295)),((struct sType* )come_null_checker(type, "03output_code.nc", 295))->mAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 298))->mArrayNum, "03output_code.nc", 298)))>0&&typedef_extended) {
        for(i_26=0;i_26<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 299))->mArrayNum, "03output_code.nc", 299)));i_26++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 300)),"[");
            node_27=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 301))->mArrayNum, "03output_code.nc", 301)), "03output_code.nc", 301)),i_26));
            Value_28=node_compile(node_27,info);
            if(!Value_28) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            cvalue_29=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 310)),"%s",((struct CVALUE* )come_null_checker(cvalue_29, "03output_code.nc", 310))->c_value);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 311)),"]");
            ((node_27) ? node_27 = come_decrement_ref_count(node_27, ((struct sNode*)node_27)->finalize, ((struct sNode*)node_27)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue_29, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 314))->mAtomic) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 315)),")");
    }
    if(cast_type&&((struct sType* )come_null_checker(type, "03output_code.nc", 318))->mArrayPointerType) {
        if(nullchecker) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 320)),"*");
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 323)),"[]");
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 327))))));
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
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_3,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_3);
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
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_4,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_4);
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
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
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_6  ;
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
    return ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1924))->len;
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
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
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
    return self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_12;
    if(self==((void*)0)||((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1855))->it==((void*)0)) {
        memset(&result,0,sizeof(struct sNode*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it=((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it, "/usr/local/include/neo-c.h", 1861))->next;
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1863))->it) {
        __result_obj__0 = ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1864))->it, "/usr/local/include/neo-c.h", 1864))->item;
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
    struct sType*  __dec_obj35  ;
    struct sType*  __dec_obj36  ;
    int i;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    void* __right_value1 = (void*)0;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 333))->mNoSolvedGenericsType) {
        __dec_obj35=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(type, "03output_code.nc", 334))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj36=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    i=0;
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 341))->mGenericsTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 341)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 341)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 341)))){
        list$1sType$ph_operator_store_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(result, "03output_code.nc", 342))->mGenericsTypes, "03output_code.nc", 342)), "03output_code.nc", 342)),i,(struct sType* )come_increment_ref_count(get_no_solved_type(it)));
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
    struct list$1sNode$ph* __dec_obj34;
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

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj3  ;
    struct list_item$1sType$ph* litem_30;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_31;
    struct sType*  __dec_obj5  ;
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
        __dec_obj3=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_30=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1696, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj4=((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1700))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_30;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_30;
    }
    else {
        litem_31=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1706, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj5=((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1710))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_31;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_31;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_32;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_33;
    struct sNode* __dec_obj20;
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
        __dec_obj18=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_32=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1696, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj19=((struct list_item$1sNode$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1700))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_32;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_32;
    }
    else {
        litem_33=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1706, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj20=((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_33, "/usr/local/include/neo-c.h", 1710))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_33;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_33;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_34;
    struct list_item$1int$* litem_35;
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
        litem_34=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1696, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1int$*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_34, "/usr/local/include/neo-c.h", 1700))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_34;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1706, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_35, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_35, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_35, "/usr/local/include/neo-c.h", 1710))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_35;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_35;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj28  ;
    struct list_item$1char$ph* litem_36;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_37;
    char*  __dec_obj30  ;
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
        __dec_obj28=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(char* )come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_36=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1696, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_36, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_36, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj29=((struct list_item$1char$ph*)come_null_checker(litem_36, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_36, "/usr/local/include/neo-c.h", 1700))->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_36;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_36;
    }
    else {
        litem_37=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1706, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_37, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_37, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj30=((struct list_item$1char$ph*)come_null_checker(litem_37, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_37, "/usr/local/include/neo-c.h", 1710))->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_37;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_37;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
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
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2294)),position,(struct sType* )come_increment_ref_count(item));
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
    int i_40;
    struct sType*  __dec_obj40  ;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2178))->len;
    }
    if(position<0) {
        position=0;
    }
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2184))->len==0||position>=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2184))->len) {
        len=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2185))->len;
        for(i=0;i<position-len;i++){
            memset(&default_value,0,sizeof(struct sType* ));
            list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2189)),default_value);
        }
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2191)),(struct sType* )come_increment_ref_count(item));
        __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2195))->head;
    i_40=0;
    while(it!=((void*)0)) {
        if(position==i_40) {
            __dec_obj40=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2199))->item,
            ((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2199))->item=(struct sType* )come_increment_ref_count(item);
            come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2202))->next;
        i_40++;
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
    struct sType*  __dec_obj37  ;
    struct list_item$1sType$ph* litem_38;
    struct sType*  __dec_obj38  ;
    struct list_item$1sType$ph* litem_39;
    struct sType*  __dec_obj39  ;
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
        __dec_obj37=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_38=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1781, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj38=((struct list_item$1sType$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1785))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_38;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_38;
    }
    else {
        litem_39=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1791, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj39=((struct list_item$1sType$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1795))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_39;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_39;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    struct sType*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    struct sType*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 352))->mNoSolvedGenericsType) {
        __dec_obj41=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(type, "03output_code.nc", 353))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj42=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct buffer*  buf_41  ;
    int i;
    char*  __result_obj__0  ;
    char*  result_type_str  ;
    int i_42;
    int i_43;
    int i_44;
    int i_45;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    int j;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char*  param_type_str  ;
    int i_46;
    struct sType*  gtype  ;
    int i_49;
    int i_50;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 364, "struct buffer* "))), "03output_code.nc", 364)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(get_no_solved_type(type));
    class_name=((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 368))->mClass, "03output_code.nc", 368))->mName;
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 370))->mOriginalTypeName&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 370))->mOriginalTypeName, "03output_code.nc", 370)),"")) {
        buf_41=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 371, "struct buffer* "))), "03output_code.nc", 371)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf_41, "03output_code.nc", 373)),((struct sType* )come_null_checker(type, "03output_code.nc", 373))->mOriginalTypeName);
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 374))->mTypedefOriginalType) {
            for(i=0;i<((struct sType* )come_null_checker(type, "03output_code.nc", 375))->mOriginalTypePointerNum;i++){
                buffer_append_str(((struct buffer* )come_null_checker(buf_41, "03output_code.nc", 376)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 378))->mOriginalTypePointerHeap) {
                buffer_append_str(((struct buffer* )come_null_checker(buf_41, "03output_code.nc", 379)),"%");
            }
        }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_41, "03output_code.nc", 383))))));
        come_call_finalizer(buffer_finalize, buf_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(charp_operator_equals(((char*)come_null_checker(class_name, "03output_code.nc", 385)),"lambda")) {
        result_type_str=(char* )come_increment_ref_count(make_come_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 386))->mResultType,info));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 387)),result_type_str);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 388))," ");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 390))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 390))->mMiddleAttribute, "03output_code.nc", 390)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 391)),((struct sType* )come_null_checker(type, "03output_code.nc", 391))->mMiddleAttribute);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 392))," ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 395))->mArrayPointerNum>0) {
            for(i_42=0;i_42<((struct sType* )come_null_checker(type, "03output_code.nc", 396))->mArrayPointerNum+1;i_42++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 397)),"(");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 398)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 400))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 400))->mPointerAttribute, "03output_code.nc", 400)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 401))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 402)),((struct sType* )come_null_checker(type, "03output_code.nc", 402))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 404))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 405)),"[]");
            }
            for(i_43=0;i_43<((struct sType* )come_null_checker(type, "03output_code.nc", 407))->mArrayPointerNum;i_43++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 408)),")");
            }
        }
        else if(((struct sType* )come_null_checker(type, "03output_code.nc", 411))->mFunctionPointerNum>1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 412)),"(");
            for(i_44=0;i_44<((struct sType* )come_null_checker(type, "03output_code.nc", 413))->mFunctionPointerNum;i_44++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 414)),"*");
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 416))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 416))->mPointerAttribute, "03output_code.nc", 416)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 417))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 418)),((struct sType* )come_null_checker(type, "03output_code.nc", 418))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 420))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 421)),"[]");
            }
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 425)),"(*");
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 426))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 426))->mPointerAttribute, "03output_code.nc", 426)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 427))," ");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 428)),((struct sType* )come_null_checker(type, "03output_code.nc", 428))->mPointerAttribute);
            }
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 430))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 431)),"[]");
            }
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 435))->mArrayNum, "03output_code.nc", 435)))>0) {
            for(i_45=0;i_45<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 436))->mArrayNum, "03output_code.nc", 436)));i_45++){
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 437))->mArrayNum, "03output_code.nc", 437)), "03output_code.nc", 437)),i_45));
                Value=node_compile(node,info);
                if(Value) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 440)),"[");
                    cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 444)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 444))->c_value);
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 445)),"]");
                    come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 449))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 450)),"[]");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 452)),")(");
        j=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 455))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 455)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 455)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 455)))){
            param_type_str=(char* )come_increment_ref_count(make_come_type_name_string(it,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 458)),param_type_str);
            if(j!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 460))->mParamTypes, "03output_code.nc", 460)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 461)),",");
            }
            j++;
            (param_type_str = come_decrement_ref_count(param_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 465)),")");
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 468))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 469)),"static ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 471))->mAtomic) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 472)),"_Atomic(");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 474))->mThreadLocal) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 475)),"_Thread_local ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 477))->mNoreturn) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 478)),"_Noreturn ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 481))->mConstant) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 482)),"const ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 484))->mVolatile) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 485)),"volatile ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 487))->mComplex) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 488)),"_Complex ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 490))->mRegister) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 491)),"register ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 493))->mUniq) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 494)),"uniq ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 497))->mUnsigned) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 498)),"unsigned ");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 501))->mShort) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 502)),"short ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 505)),class_name);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 507))->mGenericsTypes, "03output_code.nc", 507)))>0) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 508)),"<");
            for(i_46=0;i_46<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 509))->mGenericsTypes, "03output_code.nc", 509)));i_46++){
                gtype=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 510))->mGenericsTypes, "03output_code.nc", 510)), "03output_code.nc", 510)),i_46)));
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 512)),((char* )(__right_value0=make_come_type_name_string(gtype,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(i_46!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 514))->mGenericsTypes, "03output_code.nc", 514)))-1) {
                    buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 515)),",");
                }
            }
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 519)),">");
        }
        if(charp_operator_not_equals(((char*)come_null_checker(class_name, "03output_code.nc", 522)),"lambda")) {
            for(i_49=0;i_49<((struct sType* )come_null_checker(type2, "03output_code.nc", 523))->mPointerNum;i_49++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 524)),"*");
            }
        }
        if(charp_operator_not_equals(((char*)come_null_checker(class_name, "03output_code.nc", 527)),"lambda")&&((struct sType* )come_null_checker(type, "03output_code.nc", 527))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 527))->mPointerAttribute, "03output_code.nc", 527)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 528))," ");
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 529)),((struct sType* )come_null_checker(type, "03output_code.nc", 529))->mPointerAttribute);
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 531))->mRestrict) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 532))," restrict");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 535))->mAtomic) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 536)),")");
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 539))->mArrayNum, "03output_code.nc", 539)))>0) {
            for(i_50=0;i_50<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 540))->mArrayNum, "03output_code.nc", 540)));i_50++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 541)),"[]");
            }
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 545))->mHeap) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 546)),"%");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 548))->mNoHeap) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 549)),"&");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 552))->mAttribute) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 553)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 553)),((struct sType* )come_null_checker(type2, "03output_code.nc", 553))->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 557))))));
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
    struct sType*  default_value_47  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_47,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_47);
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
    struct sType*  default_value_48  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct sType* )come_increment_ref_count(((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1sType$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_48,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_48);
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
    int i_51;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char*  pointer_attr  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char*  __dec_obj43  ;
    int i_52;
    int i_53;
    int i_54;
    int i_55;
    struct sNode* node_56;
    _Bool Value_57;
    struct CVALUE*  cvalue_58  ;
    int i_59;
    struct list$1sType$ph* o2_saved_60;
    struct sType*  it_61  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 562, "struct buffer* "))), "03output_code.nc", 562)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 563))->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(type, "03output_code.nc", 568))->mResultType&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 568))->mResultType, "03output_code.nc", 568))->mClass, "03output_code.nc", 568))->mName, "03output_code.nc", 568)),"lambda")) {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 570)),"(*%s",var_name);
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 572))->mResultType, "03output_code.nc", 572))->mArrayNum, "03output_code.nc", 572)))>0) {
            for(i=0;i<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 573))->mResultType, "03output_code.nc", 573))->mArrayNum, "03output_code.nc", 573)));i++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 574)),"[");
                node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 575))->mArrayNum, "03output_code.nc", 575)), "03output_code.nc", 575)),i));
                Value=node_compile(node,info);
                if(!Value) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 584)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 584))->c_value);
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 585)),"]");
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 588)),")(",var_name);
        i_51=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 591))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 591)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 591)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 591)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 592)),((char* )(__right_value0=make_come_type_name_string(it,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(i_51!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 593))->mParamTypes, "03output_code.nc", 593)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 594)),",");
            }
            i_51++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 600)),")");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 602))->mAttribute) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 603)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 603)),((struct sType* )come_null_checker(type, "03output_code.nc", 603))->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=make_lambda_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 606))->mResultType,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 606))))),info))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 609)),"%s ",((char* )(__right_value0=make_type_name_string(((struct sType* )come_null_checker(type, "03output_code.nc", 609))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 610))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 610))->mMiddleAttribute, "03output_code.nc", 610)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 611)),((struct sType* )come_null_checker(type, "03output_code.nc", 611))->mMiddleAttribute);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 612))," ");
        }
        pointer_attr=(char*)come_increment_ref_count(xsprintf(""));
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 615))->mPointerAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 615))->mPointerAttribute, "03output_code.nc", 615)),"")) {
            __dec_obj43=pointer_attr,
            pointer_attr=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value5=charp_operator_add(((char*)come_null_checker(((char*)(__right_value4=xsprintf(" "))), "03output_code.nc", 616)),((struct sType* )come_null_checker(type, "03output_code.nc", 616))->mPointerAttribute))), "03output_code.nc", 616))," "));
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 618))->mArrayPointerNum>0) {
            for(i_52=0;i_52<((struct sType* )come_null_checker(type, "03output_code.nc", 619))->mArrayPointerNum+1;i_52++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 620)),"(");
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 621)),"*");
            }
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 623)),pointer_attr);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 624)),var_name);
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 625))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 626)),"[]");
            }
            for(i_53=0;i_53<((struct sType* )come_null_checker(type, "03output_code.nc", 628))->mArrayPointerNum;i_53++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 629)),")");
            }
        }
        else if(((struct sType* )come_null_checker(type, "03output_code.nc", 632))->mFunctionPointerNum>1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 633)),"(");
            for(i_54=0;i_54<((struct sType* )come_null_checker(type, "03output_code.nc", 634))->mFunctionPointerNum;i_54++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 635)),"*");
            }
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 637)),pointer_attr);
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 638)),var_name);
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 639))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 640)),"[]");
            }
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 644)),"(*");
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 645)),pointer_attr);
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 646)),"%s",var_name);
            if(((struct sType* )come_null_checker(type, "03output_code.nc", 647))->mArrayPointerType) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 648)),"[]");
            }
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 651))->mArrayNum, "03output_code.nc", 651)))>0) {
            for(i_55=0;i_55<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 652))->mArrayNum, "03output_code.nc", 652)));i_55++){
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 653)),"[");
                node_56=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 654))->mArrayNum, "03output_code.nc", 654)), "03output_code.nc", 654)),i_55));
                Value_57=node_compile(node_56,info);
                if(!Value_57) {
                    err_msg(info,"invalid array num");
                    exit(2);
                }
                cvalue_58=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 663)),"%s",((struct CVALUE* )come_null_checker(cvalue_58, "03output_code.nc", 663))->c_value);
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 664)),"]");
                ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(CVALUE_finalize, cvalue_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 667)),")(");
        i_59=0;
        for(o2_saved_60=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type, "03output_code.nc", 670))->mParamTypes),it_61=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_60, "03output_code.nc", 670)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_60, "03output_code.nc", 670)));it_61=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_60, "03output_code.nc", 670)))){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 671)),((char* )(__right_value0=make_type_name_string(it_61,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(i_59!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 672))->mParamTypes, "03output_code.nc", 672)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 673)),",");
            }
            i_59++;
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_60, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 679)),")");
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 681))->mAttribute) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 682)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 682)),((struct sType* )come_null_checker(type, "03output_code.nc", 682))->mAttribute))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 685))))));
        (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
        (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 688))))));
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
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 695, "struct buffer* "))), "03output_code.nc", 695)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 697))->mArrayPointerType) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 698)),((struct sType* )come_null_checker(type2, "03output_code.nc", 698))->mOriginalTypeName);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 699))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 700)),name);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 701)),"[]");
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 703))->mArrayNum, "03output_code.nc", 703)))>0) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 704)),((struct sType* )come_null_checker(type2, "03output_code.nc", 704))->mOriginalTypeName);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 706))," ");
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 708))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 709)),"(");
            ({            __current_stack1__.type2 = &type2;
            __current_stack1__.name = &name;
            __current_stack1__.info = &info;
            __current_stack1__.buf = &buf;
            })            ,            int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 710))->mArrayPointerNum,&__current_stack1__,(void*)method_block1_03outputcodenc);
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 715)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 717))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 718)),")");
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 721))->mArrayNum, "03output_code.nc", 721)))>0) {
            n=0;
            for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 724))->mArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 724)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 724)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 724)))){
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
                if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 731))->mArrayRestrict, "03output_code.nc", 731)), "03output_code.nc", 731)),n)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 731))->mArrayStatic, "03output_code.nc", 731)), "03output_code.nc", 731)),n)) {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 732)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 732))->c_value);
                }
                else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 734))->mArrayStatic, "03output_code.nc", 734)), "03output_code.nc", 734)),n)) {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 735)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 735))->c_value);
                }
                else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 737))->mArrayRestrict, "03output_code.nc", 737)), "03output_code.nc", 737)),n)) {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 738)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 738))->c_value);
                }
                else {
                    buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 741)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 741))->c_value);
                }
                n++;
                come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 748))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 749)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 752))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 752))->mAsmName, "03output_code.nc", 752)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 753))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 753))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 756))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 757))," %s",((struct sType* )come_null_checker(type2, "03output_code.nc", 757))->mAttribute);
        }
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 761)),((struct sType* )come_null_checker(type2, "03output_code.nc", 761))->mOriginalTypeName);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 762))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 763)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 765))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 766)),"[]");
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 770))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void method_block1_03outputcodenc(struct __current_stack1__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_03outputcodenc"; neo_current_frame = &fr;
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 712)),"*");
    neo_current_frame = fr.prev;
}

static int list$1int$$p_operator_load_element(struct list$1int$* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_operator_load_element"; neo_current_frame = &fr;
    int default_value;
    struct list_item$1int$* it;
    int i;
    int default_value_62;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(int));
        neo_current_frame = fr.prev;
        return default_value;
    }
    if(position<0) {
        position+=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            neo_current_frame = fr.prev;
            return ((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item;
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_62,0,sizeof(int));
    neo_current_frame = fr.prev;
    return default_value_62;
    neo_current_frame = fr.prev;
}

static int list$1int$_operator_load_element(struct list$1int$* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_operator_load_element"; neo_current_frame = &fr;
    int default_value;
    struct list_item$1int$* it;
    int i;
    int default_value_63;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(int));
        neo_current_frame = fr.prev;
        return default_value;
    }
    if(position<0) {
        position+=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            neo_current_frame = fr.prev;
            return ((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item;
        }
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_63,0,sizeof(int));
    neo_current_frame = fr.prev;
    return default_value_63;
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
    char*  str_64  ;
    char*  str_65  ;
    char*  str_66  ;
    char*  type_name  ;
    struct __current_stack2__ __current_stack2__;
    char*  __result_obj__0  ;
    struct CVALUE*  come_value  ;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    struct CVALUE*  cvalue  ;
    int n;
    struct list$1sNode$ph* o2_saved_67;
    struct sNode* it_68;
    struct CVALUE*  cvalue_69  ;
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 775, "struct buffer* "))), "03output_code.nc", 775)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(sType_clone(type));
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 779))->mClass, "03output_code.nc", 779))->mName, "03output_code.nc", 779)),"lambda")&&((struct sType* )come_null_checker(type2, "03output_code.nc", 779))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 779))->mAsmName, "03output_code.nc", 779)),"")) {
        if(!in_typedef&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 780))->mOriginalTypeName, "03output_code.nc", 780)),"")&&(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 780))->mArrayNum, "03output_code.nc", 780)))>0||((struct sType* )come_null_checker(type2, "03output_code.nc", 780))->mArrayPointerType)) {
            str=(char* )come_increment_ref_count(output_lambda_original_type(type2,name,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 783)),str);
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_64=(char* )come_increment_ref_count(header_lambda(type2,(char* )come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 786))->mAsmName),info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 788)),str_64);
            (str_64 = come_decrement_ref_count(str_64, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 791))->mClass, "03output_code.nc", 791))->mName, "03output_code.nc", 791)),"lambda")) {
        if(!in_typedef&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 792))->mOriginalTypeName, "03output_code.nc", 792)),"")&&(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 792))->mArrayNum, "03output_code.nc", 792)))>0||((struct sType* )come_null_checker(type2, "03output_code.nc", 792))->mArrayPointerType)) {
            str_65=(char* )come_increment_ref_count(output_lambda_original_type(type2,name,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 795)),str_65);
            (str_65 = come_decrement_ref_count(str_65, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_66=(char* )come_increment_ref_count(make_lambda_type_name_string(type2,name,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 800)),str_66);
            (str_66 = come_decrement_ref_count(str_66, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    else {
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,no_static,(_Bool)0,(_Bool)0,(_Bool)0));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 806)),"%s ",type_name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 808))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 809)),"(");
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 811))->mPointerParen) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 812)),"(");
        }
        ({        __current_stack2__.type_name = &type_name;
        __current_stack2__.type = &type;
        __current_stack2__.name = &name;
        __current_stack2__.info = &info;
        __current_stack2__.no_static = &no_static;
        __current_stack2__.in_typedef = &in_typedef;
        __current_stack2__.buf = &buf;
        __current_stack2__.type2 = &type2;
        })        ,        int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 815))->mArrayPointerNum,&__current_stack2__,(void*)method_block2_03outputcodenc);
        if(!((struct sType* )come_null_checker(type2, "03output_code.nc", 819))->mAnonymousVarName) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 820)),"%s",name);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 823))->mSizeNum!=((void*)0)) {
            if(!node_compile(((struct sType* )come_null_checker(type2, "03output_code.nc", 824))->mSizeNum,info)) {
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
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 830)),":%s",((struct CVALUE* )come_null_checker(come_value, "03output_code.nc", 830))->c_value);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(type, "03output_code.nc", 833))->mPointerParen) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 834)),")");
        }
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 837))->mVarNameArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 837)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 837)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 837)))){
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
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 844)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 844))->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 847))->mArrayPointerNum>0) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 848)),")");
        }
        n=0;
        for(o2_saved_67=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 852))->mArrayNum),it_68=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_67, "03output_code.nc", 852)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_67, "03output_code.nc", 852)));it_68=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_67, "03output_code.nc", 852)))){
            if(!node_compile(it_68,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue_69=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 859))->mArrayRestrict, "03output_code.nc", 859)), "03output_code.nc", 859)),n)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 859))->mArrayStatic, "03output_code.nc", 859)), "03output_code.nc", 859)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 860)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue_69, "03output_code.nc", 860))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 862))->mArrayStatic, "03output_code.nc", 862)), "03output_code.nc", 862)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 863)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue_69, "03output_code.nc", 863))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 865))->mArrayRestrict, "03output_code.nc", 865)), "03output_code.nc", 865)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 866)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue_69, "03output_code.nc", 866))->c_value);
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 869)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_69, "03output_code.nc", 869))->c_value);
            }
            n++;
            come_call_finalizer(CVALUE_finalize, cvalue_69, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_67, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 875))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 876)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 879))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 879))->mAsmName, "03output_code.nc", 879)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 880))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 880))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 883))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 884))," ");
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 885)),((struct sType* )come_null_checker(type, "03output_code.nc", 885))->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 889))->mVarAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 890)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 890)),((struct sType* )come_null_checker(type, "03output_code.nc", 890))->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 893))))));
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
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 817)),"*");
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
    int i_70;
    int n_71;
    struct list$1sNode$ph* o2_saved_72;
    struct sNode* it_73;
    struct CVALUE*  cvalue_74  ;
    int i_75;
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 898, "struct buffer* "))), "03output_code.nc", 898)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(sType_clone(type));
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 901))->mArrayPointerType) {
        ((struct sType* )come_null_checker(type2, "03output_code.nc", 902))->mPointerNum--;
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 905))->mClass, "03output_code.nc", 905))->mName, "03output_code.nc", 905)),"lambda")&&((struct sType* )come_null_checker(type2, "03output_code.nc", 905))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 905))->mAsmName, "03output_code.nc", 905)),"")) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(name))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 908))->mClass, "03output_code.nc", 908))->mName, "03output_code.nc", 908)),"lambda")) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(name))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 911))->mArrayPointerNum>0) {
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,no_static,(_Bool)0,(_Bool)0,(_Bool)0));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 914)),"(");
        ({        __current_stack3__.type_name = &type_name;
        __current_stack3__.type = &type;
        __current_stack3__.name = &name;
        __current_stack3__.info = &info;
        __current_stack3__.no_static = &no_static;
        __current_stack3__.buf = &buf;
        __current_stack3__.type2 = &type2;
        })        ,        int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 915))->mArrayPointerNum,&__current_stack3__,(void*)method_block3_03outputcodenc);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 918)),"%s)",name);
        n=0;
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 921))->mArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 921)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 921)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 921)))){
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
            if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 928))->mArrayRestrict, "03output_code.nc", 928)), "03output_code.nc", 928)),n)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 928))->mArrayStatic, "03output_code.nc", 928)), "03output_code.nc", 928)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 929)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 929))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 931))->mArrayStatic, "03output_code.nc", 931)), "03output_code.nc", 931)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 932)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 932))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 934))->mArrayRestrict, "03output_code.nc", 934)), "03output_code.nc", 934)),n)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 935)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 935))->c_value);
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 938)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 938))->c_value);
            }
            n++;
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 944))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 944))->mAsmName, "03output_code.nc", 944)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 945))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 945))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 948))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 949))," ");
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 950)),((struct sType* )come_null_checker(type, "03output_code.nc", 950))->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 953))->mSizeNum!=((void*)0)) {
        if(!node_compile(((struct sType* )come_null_checker(type2, "03output_code.nc", 954))->mSizeNum,info)) {
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
        for(i=0;i<((struct sType* )come_null_checker(type2, "03output_code.nc", 961))->mPointerNum;i++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 962)),"*");
        }
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 964)),"%s:%s",name,((struct CVALUE* )come_null_checker(come_value, "03output_code.nc", 964))->c_value);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 966))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 966))->mAsmName, "03output_code.nc", 966)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 967))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 967))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 970))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 971))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 971))->mAttribute);
        }
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 974))->mArrayNum, "03output_code.nc", 974)))>0) {
        for(i_70=0;i_70<((struct sType* )come_null_checker(type2, "03output_code.nc", 975))->mPointerNum;i_70++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 976)),"*");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 978)),name);
        n_71=0;
        for(o2_saved_72=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 981))->mArrayNum),it_73=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_72, "03output_code.nc", 981)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_72, "03output_code.nc", 981)));it_73=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_72, "03output_code.nc", 981)))){
            if(!node_compile(it_73,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue_74=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 988))->mArrayRestrict, "03output_code.nc", 988)), "03output_code.nc", 988)),n_71)&&list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 988))->mArrayStatic, "03output_code.nc", 988)), "03output_code.nc", 988)),n_71)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 989)),"[restrict static %s]",((struct CVALUE* )come_null_checker(cvalue_74, "03output_code.nc", 989))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 991))->mArrayStatic, "03output_code.nc", 991)), "03output_code.nc", 991)),n_71)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 992)),"[static %s]",((struct CVALUE* )come_null_checker(cvalue_74, "03output_code.nc", 992))->c_value);
            }
            else if(list$1int$_operator_load_element(((struct list$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 994))->mArrayRestrict, "03output_code.nc", 994)), "03output_code.nc", 994)),n_71)) {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 995)),"[restrict %s]",((struct CVALUE* )come_null_checker(cvalue_74, "03output_code.nc", 995))->c_value);
            }
            else {
                buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 998)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_74, "03output_code.nc", 998))->c_value);
            }
            n_71++;
            come_call_finalizer(CVALUE_finalize, cvalue_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1004))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1005)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1008))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1008))->mAsmName, "03output_code.nc", 1008)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1009))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1009))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1012))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1013))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1013))->mAttribute);
        }
    }
    else {
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1017))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1018)),((struct sType* )come_null_checker(type, "03output_code.nc", 1018))->mAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1020))," ");
        for(i_75=0;i_75<((struct sType* )come_null_checker(type2, "03output_code.nc", 1021))->mPointerNum;i_75++){
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1022)),"*");
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1024)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1026))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1027)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1030))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1030))->mAsmName, "03output_code.nc", 1030)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1031))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1031))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1034))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1035))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1035))->mAttribute);
        }
    }
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1039))->mVarAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1040)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 1040)),((struct sType* )come_null_checker(type, "03output_code.nc", 1040))->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1043))))));
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
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 917)),"*");
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
    char*  str_76  ;
    char*  type_name  ;
    struct __current_stack4__ __current_stack4__;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    struct CVALUE*  come_value  ;
    char*  type_str  ;
    char*  __dec_obj44  ;
    char*  type_str_77  ;
    char*  __dec_obj45  ;
    struct list$1sNode$ph* o2_saved_78;
    struct sNode* it_79;
    struct CVALUE*  cvalue_80  ;
    char*  type_str_81  ;
    char*  __dec_obj46  ;
    memset(&__current_stack4__, 0, sizeof(struct __current_stack4__));
    memset(&type_str, 0, sizeof(type_str));
    memset(&type_str_77, 0, sizeof(type_str_77));
    memset(&type_str_81, 0, sizeof(type_str_81));
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1048, "struct buffer* "))), "03output_code.nc", 1048)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType* )come_increment_ref_count(sType_clone(type));
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1051))->mArrayPointerType) {
        ((struct sType* )come_null_checker(type2, "03output_code.nc", 1052))->mPointerNum--;
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1055))->mClass, "03output_code.nc", 1055))->mName, "03output_code.nc", 1055)),"lambda")&&((struct sType* )come_null_checker(type2, "03output_code.nc", 1055))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1055))->mAsmName, "03output_code.nc", 1055)),"")) {
        str=(char* )come_increment_ref_count(header_lambda(type2,(char* )come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 1056))->mAsmName),info));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1058)),str);
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1060))->mClass, "03output_code.nc", 1060))->mName, "03output_code.nc", 1060)),"lambda")) {
        str_76=(char* )come_increment_ref_count(make_lambda_type_name_string(type2,name,info));
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1063)),str_76);
        (str_76 = come_decrement_ref_count(str_76, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1065))->mArrayPointerNum>0) {
        type_name=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1068)),"%s (",type_name);
        ({        __current_stack4__.type_name = &type_name;
        __current_stack4__.type = &type;
        __current_stack4__.name = &name;
        __current_stack4__.info = &info;
        __current_stack4__.buf = &buf;
        __current_stack4__.type2 = &type2;
        })        ,        int_times(((struct sType* )come_null_checker(type2, "03output_code.nc", 1069))->mArrayPointerNum,&__current_stack4__,(void*)method_block4_03outputcodenc);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1072)),"%s)",name);
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 1074))->mArrayNum),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 1074)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 1074)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "03output_code.nc", 1074)))){
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
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1081)),"[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1081))->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1084))->mArrayPointerType) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1085)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1088))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1088))->mAsmName, "03output_code.nc", 1088)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1089))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1089))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1092))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1093))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1093))->mAttribute);
        }
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1096))->mSizeNum!=((void*)0)) {
        if(!node_compile(((struct sType* )come_null_checker(type2, "03output_code.nc", 1097))->mSizeNum,info)) {
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
        __dec_obj44=type_str,
        type_str=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1106)),"%s ",type_str);
        buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1107)),"%s:%s",name,((struct CVALUE* )come_null_checker(come_value, "03output_code.nc", 1107))->c_value);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1109))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1109))->mAsmName, "03output_code.nc", 1109)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1110))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1110))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1113))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1114))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1114))->mAttribute);
        }
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (type_str = come_decrement_ref_count(type_str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1117))->mArrayNum, "03output_code.nc", 1117)))>0) {
        __dec_obj45=type_str_77,
        type_str_77=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1121)),type_str_77);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1123))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1124)),name);
        for(o2_saved_78=(struct list$1sNode$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "03output_code.nc", 1126))->mArrayNum),it_79=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved_78, "03output_code.nc", 1126)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved_78, "03output_code.nc", 1126)));it_79=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved_78, "03output_code.nc", 1126)))){
            if(!node_compile(it_79,info)) {
                err_msg(info,"invalid array number");
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (type_str_77 = come_decrement_ref_count(type_str_77, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            cvalue_80=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1133)),"[%s]",((struct CVALUE* )come_null_checker(cvalue_80, "03output_code.nc", 1133))->c_value);
            come_call_finalizer(CVALUE_finalize, cvalue_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1136))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1137)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1140))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1140))->mAsmName, "03output_code.nc", 1140)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1141))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1141))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1144))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1145))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1145))->mAttribute);
        }
        (type_str_77 = come_decrement_ref_count(type_str_77, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        __dec_obj46=type_str_81,
        type_str_81=(char* )come_increment_ref_count(make_come_type_name_string(type2,info));
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
        if(string_operator_equals(((char* )come_null_checker(type_str_81, "03output_code.nc", 1152)),"")) {
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
            (type_str_81 = come_decrement_ref_count(type_str_81, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1156)),type_str_81);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1158))," ");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1159)),name);
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1161))->mArrayPointerType) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1162)),"[]");
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1165))->mAsmName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type2, "03output_code.nc", 1165))->mAsmName, "03output_code.nc", 1165)),"")) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1166))," __asm__(\"%s\")",((struct sType* )come_null_checker(type2, "03output_code.nc", 1166))->mAsmName);
        }
        if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1169))->mAttribute!=((void*)0)) {
            buffer_append_format(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1170))," %s",((struct sType* )come_null_checker(type, "03output_code.nc", 1170))->mAttribute);
        }
        (type_str_81 = come_decrement_ref_count(type_str_81, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(((struct sType* )come_null_checker(type2, "03output_code.nc", 1174))->mVarAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1175)),((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 1175)),((struct sType* )come_null_checker(type, "03output_code.nc", 1175))->mVarAttribute))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1178))))));
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
    buffer_append_format(((struct buffer* )come_null_checker((*(parent->buf)), "03output_code.nc", 1071)),"*");
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
    char*  str_84  ;
    struct sType*  base_result_type  ;
    struct list$1sNode$ph* __dec_obj47;
    char*  result_type_str  ;
    int i_85;
    struct list$1sType$ph* o2_saved_86;
    struct sType*  it_87  ;
    char* name_88;
    char*  str_89  ;
    struct sNode* node;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    char*  result_type_str_90  ;
    int i_91;
    struct list$1sType$ph* o2_saved_92;
    struct sType*  it_93  ;
    char* name_94;
    char*  str_95  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1183, "struct buffer* "))), "03output_code.nc", 1183)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1184))->mResultType, "03output_code.nc", 1184))->mResultType) {
        output2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1185, "struct buffer* "))), "03output_code.nc", 1185)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1187)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1187))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1188)),"(");
        i=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1191))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1191)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1191)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1191)))){
            name=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1192))->mParamNames, "03output_code.nc", 1192)), "03output_code.nc", 1192)),i)));
            str=(char* )come_increment_ref_count(make_define_var(it,name,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1195)),str);
            if(i==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1197))->mParamTypes, "03output_code.nc", 1197)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1198))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1199)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1203)),", ");
            }
            i++;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1208)),")");
        str_84=(char* )come_increment_ref_count(make_lambda_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1210))->mResultType,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1210))))),info));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1212))->mAttribute, "03output_code.nc", 1212)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1213)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1213))->mAttribute, "03output_code.nc", 1213)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1215))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1216)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1218))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1219)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1222)),str_84);
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1224))->module, "03output_code.nc", 1224))->mSourceHead, "03output_code.nc", 1224)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1224))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1226))->mFunAttribute, "03output_code.nc", 1226)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1227))->module, "03output_code.nc", 1227))->mSourceHead, "03output_code.nc", 1227)),((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1227))->mFunAttribute, "03output_code.nc", 1227)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1230))->module, "03output_code.nc", 1230))->mSourceHead, "03output_code.nc", 1230)),";\n");
        }
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (str_84 = come_decrement_ref_count(str_84, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1233))->mResultType, "03output_code.nc", 1233))->mArrayNum, "03output_code.nc", 1233)))>0) {
        base_result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1234))->mResultType));
        __dec_obj47=((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1235))->mArrayNum,
        ((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1235))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1235, "struct list$1sNode$ph*"))), "03output_code.nc", 1235)))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(base_result_type,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1239))->mAttribute, "03output_code.nc", 1239)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1240)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1240))->mAttribute, "03output_code.nc", 1240)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1242))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1243)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1245))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1246)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1249)),result_type_str);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1250))->mMiddleAttribute, "03output_code.nc", 1250)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1251))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1252)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1252))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1254))," (*");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1256)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1256))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1257)),"(");
        i_85=0;
        for(o2_saved_86=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1260))->mParamTypes),it_87=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_86, "03output_code.nc", 1260)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_86, "03output_code.nc", 1260)));it_87=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_86, "03output_code.nc", 1260)))){
            name_88=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1261))->mParamNames, "03output_code.nc", 1261)), "03output_code.nc", 1261)),i_85)));
            str_89=(char* )come_increment_ref_count(make_define_var(it_87,name_88,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1264)),str_89);
            if(i_85==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1266))->mParamTypes, "03output_code.nc", 1266)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1267))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1268)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1272)),", ");
            }
            i_85++;
            (str_89 = come_decrement_ref_count(str_89, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        node=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1278))->mResultType, "03output_code.nc", 1278))->mArrayNum, "03output_code.nc", 1278)), "03output_code.nc", 1278)),0)));
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
        buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1286)),"))[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1286))->c_value);
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1288))->module, "03output_code.nc", 1288))->mSourceHead, "03output_code.nc", 1288)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1288))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1289))->mFunAttribute, "03output_code.nc", 1289)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1290))->module, "03output_code.nc", 1290))->mSourceHead, "03output_code.nc", 1290)),((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1290))->mFunAttribute, "03output_code.nc", 1290)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1293))->module, "03output_code.nc", 1293))->mSourceHead, "03output_code.nc", 1293)),";\n");
        }
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        result_type_str_90=(char* )come_increment_ref_count(make_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1297))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1299))->mAttribute, "03output_code.nc", 1299)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1300)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1300))->mAttribute, "03output_code.nc", 1300)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1302))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1303)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1305))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1306)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1309)),result_type_str_90);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1310))->mMiddleAttribute, "03output_code.nc", 1310)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1311))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1312)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1312))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1314))," ");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1316)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1316))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1317)),"(");
        i_91=0;
        for(o2_saved_92=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1320))->mParamTypes),it_93=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_92, "03output_code.nc", 1320)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_92, "03output_code.nc", 1320)));it_93=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_92, "03output_code.nc", 1320)))){
            name_94=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1321))->mParamNames, "03output_code.nc", 1321)), "03output_code.nc", 1321)),i_91)));
            str_95=(char* )come_increment_ref_count(make_define_var(it_93,name_94,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1324)),str_95);
            if(i_91==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1326))->mParamTypes, "03output_code.nc", 1326)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1327))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1328)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1332)),", ");
            }
            i_91++;
            (str_95 = come_decrement_ref_count(str_95, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1337)),")");
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1339))->module, "03output_code.nc", 1339))->mSourceHead, "03output_code.nc", 1339)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1339))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1340))->mFunAttribute, "03output_code.nc", 1340)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1341))->module, "03output_code.nc", 1341))->mSourceHead, "03output_code.nc", 1341)),((char*)(__right_value1=xsprintf(" \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1341))->mFunAttribute, "03output_code.nc", 1341)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1344))->module, "03output_code.nc", 1344))->mSourceHead, "03output_code.nc", 1344)),";\n");
        }
        (result_type_str_90 = come_decrement_ref_count(result_type_str_90, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1348)),"\n{\n");
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1350)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1350))->mSourceHead, "03output_code.nc", 1350))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1351)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1351))->mSourceHead2, "03output_code.nc", 1351))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1352)),((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1352))->mSource, "03output_code.nc", 1352))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1354)),"}\n");
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1356))))));
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
    char*  default_value_82  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_82,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_82);
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
    char*  default_value_83  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_83,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_83);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool is_gcc_builtin_float_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_gcc_builtin_float_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 1361))->mClass, "03output_code.nc", 1361))->mName, "03output_code.nc", 1362)),"_Float128")||string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "03output_code.nc", 1362))->mClass, "03output_code.nc", 1362))->mName, "03output_code.nc", 1362)),"__float128");
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
    char*  str_96  ;
    struct sType*  base_result_type  ;
    struct list$1sNode$ph* __dec_obj48;
    char*  result_type_str  ;
    int i_97;
    struct list$1sType$ph* o2_saved_98;
    struct sType*  it_99  ;
    char* name_100;
    char*  str_101  ;
    struct sNode* node;
    char*  __result_obj__0  ;
    struct CVALUE*  cvalue  ;
    char*  result_type_str_102  ;
    int i_103;
    struct list$1sType$ph* o2_saved_104;
    struct sType*  it_105  ;
    char* name_106;
    char*  str_107  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1367, "struct buffer* "))), "03output_code.nc", 1367)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1369))->mResultType, "03output_code.nc", 1369))->mResultType) {
        output2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1370, "struct buffer* "))), "03output_code.nc", 1370)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1372)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1372))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1373)),"(");
        i=0;
        for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1376))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1376)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1376)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1376)))){
            name=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1377))->mParamNames, "03output_code.nc", 1377)), "03output_code.nc", 1377)),i)));
            str=(char* )come_increment_ref_count(make_define_var(it,name,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1380)),str);
            if(i!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1382))->mParamTypes, "03output_code.nc", 1382)))-1) {
                buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1383)),", ");
            }
            i++;
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        buffer_append_str(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1387)),")");
        str_96=(char* )come_increment_ref_count(make_lambda_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1389))->mResultType,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output2, "03output_code.nc", 1389))))),info));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1391))->mAttribute, "03output_code.nc", 1391)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1392)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1392))->mAttribute, "03output_code.nc", 1392)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1394))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1395)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1397))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1398)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1400)),str_96);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1402))->mFunAttribute, "03output_code.nc", 1402)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1403)),((char*)(__right_value1=xsprintf(" \%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1403))->mFunAttribute, "03output_code.nc", 1403)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1406)),";\n");
        come_call_finalizer(buffer_finalize, output2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (str_96 = come_decrement_ref_count(str_96, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1408))->mResultType, "03output_code.nc", 1408))->mArrayNum, "03output_code.nc", 1408)))>0) {
        base_result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1409))->mResultType));
        __dec_obj48=((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1410))->mArrayNum,
        ((struct sType* )come_null_checker(base_result_type, "03output_code.nc", 1410))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1410, "struct list$1sNode$ph*"))), "03output_code.nc", 1410)))));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        result_type_str=(char* )come_increment_ref_count(make_type_name_string(base_result_type,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1414))->mAttribute, "03output_code.nc", 1414)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1415)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1415))->mAttribute, "03output_code.nc", 1415)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1417))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1418)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1420))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1421)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1424)),result_type_str);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1425))->mMiddleAttribute, "03output_code.nc", 1425)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1426))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1427)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1427))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1429))," (*");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1431)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1431))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1432)),"(");
        i_97=0;
        for(o2_saved_98=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1435))->mParamTypes),it_99=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_98, "03output_code.nc", 1435)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_98, "03output_code.nc", 1435)));it_99=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_98, "03output_code.nc", 1435)))){
            name_100=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1436))->mParamNames, "03output_code.nc", 1436)), "03output_code.nc", 1436)),i_97)));
            str_101=(char* )come_increment_ref_count(make_define_var(it_99,name_100,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1439)),str_101);
            if(i_97==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1441))->mParamTypes, "03output_code.nc", 1441)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1442))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1443)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1447)),", ");
            }
            i_97++;
            (str_101 = come_decrement_ref_count(str_101, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        node=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1452))->mResultType, "03output_code.nc", 1452))->mArrayNum, "03output_code.nc", 1452)), "03output_code.nc", 1452)),0)));
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
        buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1459)),"))[%s]",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1459))->c_value);
        buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1460)),";\n");
        come_call_finalizer(sType_finalize, base_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result_type_str = come_decrement_ref_count(result_type_str, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(is_gcc_builtin_float_type(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1463))->mResultType,info)) {
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
            come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        result_type_str_102=(char* )come_increment_ref_count(make_type_name_string(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1466))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1468))->mAttribute, "03output_code.nc", 1468)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1469)),((char*)(__right_value1=xsprintf("\%s ",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1469))->mAttribute, "03output_code.nc", 1469)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1471))->mStatic) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1472)),"static ");
        }
        if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1474))->mInline) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1475)),"inline ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1478)),result_type_str_102);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1479))->mMiddleAttribute, "03output_code.nc", 1479)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1480))," ");
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1481)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1481))->mMiddleAttribute);
        }
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1483))," ");
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1485)),((struct sFun* )come_null_checker(fun, "03output_code.nc", 1485))->mName);
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1486)),"(");
        i_103=0;
        for(o2_saved_104=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1489))->mParamTypes),it_105=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_104, "03output_code.nc", 1489)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_104, "03output_code.nc", 1489)));it_105=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_104, "03output_code.nc", 1489)))){
            name_106=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1490))->mParamNames, "03output_code.nc", 1490)), "03output_code.nc", 1490)),i_103)));
            if(is_gcc_builtin_float_type(it_105,info)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
                come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (result_type_str_102 = come_decrement_ref_count(result_type_str_102, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(buffer_finalize, output, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            str_107=(char* )come_increment_ref_count(make_define_var(it_105,name_106,info,(_Bool)1,(_Bool)0));
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1497)),str_107);
            if(i_103==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1499))->mParamTypes, "03output_code.nc", 1499)))-1) {
                if(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1500))->mVarArgs) {
                    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1501)),", ...");
                }
            }
            else {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1505)),", ");
            }
            i_103++;
            (str_107 = come_decrement_ref_count(str_107, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(string_operator_not_equals(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1510))->mFunAttribute, "03output_code.nc", 1510)),"")) {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1511)),((char*)(__right_value1=xsprintf(") \%s;\n",((char* )(__right_value0=string_to_string(((char* )come_null_checker(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1511))->mFunAttribute, "03output_code.nc", 1511)))))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1514)),");\n");
        }
        (result_type_str_102 = come_decrement_ref_count(result_type_str_102, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1518))))));
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
    int i_108;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    char* name_109;
    char*  str  ;
    void* __right_value2 = (void*)0;
    char*  __result_obj__0  ;
    output=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1523, "struct buffer* "))), "03output_code.nc", 1523)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    result_type_str=(char* )come_increment_ref_count(make_type_name_string(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1525))->mResultType,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0));
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1527)),result_type_str);
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1528))," ");
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1530)),name);
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1531))->mArrayNum, "03output_code.nc", 1531)))>0) {
        for(i=0;i<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1532))->mArrayNum, "03output_code.nc", 1532)));i++){
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1533)),"[");
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1534))->mArrayNum, "03output_code.nc", 1534)), "03output_code.nc", 1534)),i));
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(((struct buffer* )come_null_checker(output, "03output_code.nc", 1543)),"%s",((struct CVALUE* )come_null_checker(cvalue, "03output_code.nc", 1543))->c_value);
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1544)),"]");
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1547)),"(");
    i_108=0;
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1550))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1550)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1550)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1550)))){
        name_109=((char* )(__right_value0=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1551))->mParamNames, "03output_code.nc", 1551)), "03output_code.nc", 1551)),i_108)));
        str=(char* )come_increment_ref_count(make_define_var(it,name_109,info,(_Bool)1,(_Bool)0));
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1554)),str);
        if(i_108==list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1556))->mParamTypes, "03output_code.nc", 1556)))-1) {
            if(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1557))->mVarArgs) {
                buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1558)),", ...");
            }
        }
        else {
            buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1562)),", ");
        }
        i_108++;
        (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1567))->mAttribute) {
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1568)),((char* )(__right_value2=string_operator_add(((char* )come_null_checker(((char* )(__right_value1=charp_operator_add(((char*)come_null_checker(" ", "03output_code.nc", 1568)),((struct sType* )come_null_checker(lambda_type, "03output_code.nc", 1568))->mAttribute))), "03output_code.nc", 1568)),");\n"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(output, "03output_code.nc", 1571)),");\n");
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(output, "03output_code.nc", 1574))))));
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
    int i_110;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    memset(&i, 0, sizeof(i));
    memset(&i_110, 0, sizeof(i_110));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1579))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1589))->if_expression_buffer) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1590))->in_conditional) {
            for(i=0;i<((struct sInfo* )come_null_checker(info, "03output_code.nc", 1592))->block_level;i++){
                buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1593))->if_expression_buffer, "03output_code.nc", 1593)),"    ");
            }
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1597))->if_expression_buffer, "03output_code.nc", 1597)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1599))->paren_block_buffer) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1600))->paren_block_buffer, "03output_code.nc", 1600)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1602))->come_fun) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1603))->in_conditional) {
            for(i_110=0;i_110<((struct sInfo* )come_null_checker(info, "03output_code.nc", 1605))->block_level;i_110++){
                buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1606))->come_fun, "03output_code.nc", 1606))->mSource, "03output_code.nc", 1606)),"    ");
            }
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1610))->come_fun, "03output_code.nc", 1610))->mSource, "03output_code.nc", 1610)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1613))->module, "03output_code.nc", 1613))->mSourceHead, "03output_code.nc", 1613)),((char* )(__right_value0=xsprintf("%s",msg2))));
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
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1621))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1631))->if_expression_buffer) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1632))->in_conditional) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1633))->if_expression_buffer, "03output_code.nc", 1633)),"    ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1636))->if_expression_buffer, "03output_code.nc", 1636)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1638))->paren_block_buffer) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1639))->paren_block_buffer, "03output_code.nc", 1639)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1641))->come_fun) {
        if(!((struct sInfo* )come_null_checker(info, "03output_code.nc", 1642))->in_conditional) {
            buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1643))->come_fun, "03output_code.nc", 1643))->mSource, "03output_code.nc", 1643)),"    ");
        }
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1646))->come_fun, "03output_code.nc", 1646))->mSource, "03output_code.nc", 1646)),((char* )(__right_value0=xsprintf("%s",msg2))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1649))->module, "03output_code.nc", 1649))->mSourceHead, "03output_code.nc", 1649)),((char* )(__right_value0=xsprintf("%s",msg2))));
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
    struct sType*  __dec_obj49  ;
    struct sType*  __dec_obj50  ;
    memset(&type_, 0, sizeof(type_));
    memset(&result_type2, 0, sizeof(result_type2));
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1657))->mParamTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1657)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1657)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "03output_code.nc", 1657)))){
        if(((struct sType* )come_null_checker(it, "03output_code.nc", 1659))->mNoSolvedGenericsType) {
            type_=((struct sType* )come_null_checker(it, "03output_code.nc", 1660))->mNoSolvedGenericsType;
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
    result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "03output_code.nc", 1669))->mResultType));
    if(((struct sType* )come_null_checker(result_type, "03output_code.nc", 1672))->mNoSolvedGenericsType) {
        __dec_obj49=result_type2,
        result_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result_type, "03output_code.nc", 1673))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj50=result_type2,
        result_type2=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct map$2char$phbuffer$ph* o2_saved_125;
    char*  it_127  ;
    struct buffer*  buf  ;
    struct map$2char$phbuffer$ph* o2_saved_130;
    char*  it_131  ;
    struct buffer*  buf_132  ;
    struct map$2char$phbuffer$ph* o2_saved_133;
    char*  it_134  ;
    struct buffer*  buf_135  ;
    struct map$2char$phbuffer$ph* o2_saved_136;
    char*  it_137  ;
    struct buffer*  buf_138  ;
    struct map$2char$phbuffer$ph* o2_saved_139;
    char*  it_140  ;
    struct buffer*  buf_141  ;
    struct map$2char$phsFun$ph* o2_saved_142;
    char*  it_143  ;
    struct sFun*  it2_144  ;
    _Bool contained_generics;
    char*  header  ;
    struct map$2char$phchar$ph* o2_saved_145;
    char*  it_147  ;
    char* str;
    struct map$2char$phsFun$ph* o2_saved_150;
    char*  it_151  ;
    struct sFun*  it2_152  ;
    _Bool contained_generics_153;
    char*  output  ;
    struct map$2char$phsFun$ph* o2_saved_154;
    char*  it_155  ;
    struct sFun*  it2_156  ;
    _Bool contained_generics_157;
    char*  output_158  ;
    _Bool __result_obj__0;
    main_fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1688))->funcs, "03output_code.nc", 1688)), "03output_code.nc", 1688)),((char*)(__right_value1=xsprintf("main"))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    main_module=(_Bool)0;
    if(main_fun) {
        if(!((struct sFun* )come_null_checker(main_fun, "03output_code.nc", 1691))->mExternal) {
            main_module=(_Bool)1;
        }
    }
    if(gComeUniq) {
        main_module=(_Bool)1;
    }
    if(main_module) {
        for(o2_saved=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1701))->uniq_funcs),it=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved, "03output_code.nc", 1701)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved, "03output_code.nc", 1701)));it=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved, "03output_code.nc", 1701)))){
            it2=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1702))->uniq_funcs, "03output_code.nc", 1702)), "03output_code.nc", 1702)),((char* )(__right_value1=__builtin_string(it))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            new_fun=(struct sFun* )come_increment_ref_count(compile_uniq_function(it2,info));
            if(new_fun==((void*)0)) {
                err_msg(info,"compile %s failed");
                exit(3);
            }
            map$2char$phsFun$ph_put(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1710))->funcs, "03output_code.nc", 1710)),(char* )come_increment_ref_count(__builtin_string(it)),(struct sFun* )come_increment_ref_count(new_fun),(_Bool)0);
            come_call_finalizer(sFun_finalize, new_fun, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    output_file_name=(char* )come_increment_ref_count(xsprintf("%s.c",((char* )(__right_value0=xnoextname(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1715))->sname)))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    f=fopen(output_file_name,"w");
    if(f==((void*)0)) {
        die("fopen");
    }
    fprintf(f,"/// c_include definition ///\n");
    for(o2_saved_125=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1721))->c_include_definition),it_127=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_125, "03output_code.nc", 1721)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_125, "03output_code.nc", 1721)));it_127=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_125, "03output_code.nc", 1721)))){
        buf=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1722))->c_include_definition, "03output_code.nc", 1722)), "03output_code.nc", 1722)),((char* )(__right_value1=__builtin_string(it_127))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "03output_code.nc", 1723))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// typedef definition ///\n");
    for(o2_saved_130=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1727))->typedef_definition),it_131=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_130, "03output_code.nc", 1727)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_130, "03output_code.nc", 1727)));it_131=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_130, "03output_code.nc", 1727)))){
        buf_132=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1728))->typedef_definition, "03output_code.nc", 1728)), "03output_code.nc", 1728)),((char* )(__right_value1=__builtin_string(it_131))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_132, "03output_code.nc", 1729))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// previous struct definition ///\n");
    for(o2_saved_133=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1733))->previous_struct_definition),it_134=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_133, "03output_code.nc", 1733)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_133, "03output_code.nc", 1733)));it_134=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_133, "03output_code.nc", 1733)))){
        buf_135=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1734))->previous_struct_definition, "03output_code.nc", 1734)), "03output_code.nc", 1734)),((char* )(__right_value1=__builtin_string(it_134))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_135, "03output_code.nc", 1735))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// struct definition ///\n");
    for(o2_saved_136=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1739))->struct_definition),it_137=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_136, "03output_code.nc", 1739)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_136, "03output_code.nc", 1739)));it_137=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_136, "03output_code.nc", 1739)))){
        buf_138=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1740))->struct_definition, "03output_code.nc", 1740)), "03output_code.nc", 1740)),((char* )(__right_value1=__builtin_string(it_137))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_138, "03output_code.nc", 1741))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"/// variable definition ///\n");
    for(o2_saved_139=(struct map$2char$phbuffer$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1745))->var_definition),it_140=map$2char$phbuffer$ph_begin(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_139, "03output_code.nc", 1745)));!map$2char$phbuffer$ph_end(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_139, "03output_code.nc", 1745)));it_140=map$2char$phbuffer$ph_next(((struct map$2char$phbuffer$ph*)come_null_checker(o2_saved_139, "03output_code.nc", 1745)))){
        buf_141=((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1746))->var_definition, "03output_code.nc", 1746)), "03output_code.nc", 1746)),((char* )(__right_value1=__builtin_string(it_140))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf_141, "03output_code.nc", 1747))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(map$2char$phbuffer$ph$p_finalize, o2_saved_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"// source head\n");
    fprintf(f,"%s\n",((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1751))->module, "03output_code.nc", 1751))->mSourceHead, "03output_code.nc", 1751))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    fprintf(f,"// header function\n");
    for(o2_saved_142=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1754))->funcs),it_143=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_142, "03output_code.nc", 1754)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_142, "03output_code.nc", 1754)));it_143=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_142, "03output_code.nc", 1754)))){
        it2_144=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1755))->funcs, "03output_code.nc", 1755)), "03output_code.nc", 1755)),((char* )(__right_value1=__builtin_string(it_143))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        contained_generics=is_contained_generics_funcstion(it2_144,info);
        if(!contained_generics) {
            header=(char* )come_increment_ref_count(header_function(it2_144,info));
            if(((struct sFun* )come_null_checker(it2_144, "03output_code.nc", 1762))->mInline) {
            }
            else if(string_operator_not_equals(((char* )come_null_checker(it_143, "03output_code.nc", 1764)),"__builtin_va_start")&&string_operator_not_equals(((char* )come_null_checker(it_143, "03output_code.nc", 1764)),"__builtin_va_end")) {
                fprintf(f,"%s",header);
            }
            (header = come_decrement_ref_count(header, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"// uniq global variable\n");
    if(main_module) {
        for(o2_saved_145=(struct map$2char$phchar$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1772))->uniq_definition),it_147=map$2char$phchar$ph_begin(((struct map$2char$phchar$ph*)come_null_checker(o2_saved_145, "03output_code.nc", 1772)));!map$2char$phchar$ph_end(((struct map$2char$phchar$ph*)come_null_checker(o2_saved_145, "03output_code.nc", 1772)));it_147=map$2char$phchar$ph_next(((struct map$2char$phchar$ph*)come_null_checker(o2_saved_145, "03output_code.nc", 1772)))){
            str=((char* )(__right_value2=map$2char$phchar$ph_operator_load_element(((struct map$2char$phchar$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1773))->uniq_definition, "03output_code.nc", 1773)), "03output_code.nc", 1773)),((char* )(__right_value1=__builtin_string(it_147))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            fprintf(f,"%s\n",str);
        }
        come_call_finalizer(map$2char$phchar$ph$p_finalize, o2_saved_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    fprintf(f,"// inline function\n");
    for(o2_saved_150=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1779))->funcs),it_151=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_150, "03output_code.nc", 1779)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_150, "03output_code.nc", 1779)));it_151=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_150, "03output_code.nc", 1779)))){
        it2_152=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1780))->funcs, "03output_code.nc", 1780)), "03output_code.nc", 1780)),((char* )(__right_value1=__builtin_string(it_151))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        contained_generics_153=is_contained_generics_funcstion(it2_152,info);
        if(contained_generics_153) {
        }
        else if(((struct sFun* )come_null_checker(it2_152, "03output_code.nc", 1785))->mInline) {
            output=(char* )come_increment_ref_count(output_function(it2_152,info));
            fprintf(f,"%s",output);
            (output = come_decrement_ref_count(output, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fprintf(f,"\n");
    fprintf(f,"// body function\n");
    for(o2_saved_154=(struct map$2char$phsFun$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1794))->funcs),it_155=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_154, "03output_code.nc", 1794)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_154, "03output_code.nc", 1794)));it_155=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(o2_saved_154, "03output_code.nc", 1794)))){
        it2_156=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1795))->funcs, "03output_code.nc", 1795)), "03output_code.nc", 1795)),((char* )(__right_value1=__builtin_string(it_155))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        contained_generics_157=is_contained_generics_funcstion(it2_156,info);
        if(contained_generics_157) {
        }
        else if(((struct sFun* )come_null_checker(it2_156, "03output_code.nc", 1801))->mExternal) {
        }
        else if(!main_module&&((struct sFun* )come_null_checker(it2_156, "03output_code.nc", 1803))->mUniq) {
        }
        else if(((struct sFun* )come_null_checker(it2_156, "03output_code.nc", 1805))->mInline) {
        }
        else {
            output_158=(char* )come_increment_ref_count(output_function(it2_156,info));
            fprintf(f,"%s",output_158);
            fprintf(f,"\n");
            (output_158 = come_decrement_ref_count(output_158, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    come_call_finalizer(map$2char$phsFun$ph$p_finalize, o2_saved_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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

static char*  map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_111  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2931))->key_list, "/usr/local/include/neo-c.h", 2931))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2932))->key_list, "/usr/local/include/neo-c.h", 2932))->it, "/usr/local/include/neo-c.h", 2932))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_111,0,sizeof(char* ));
    __result_obj__0 = result_111;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list, "/usr/local/include/neo-c.h", 2960))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_112  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2943))->key_list, "/usr/local/include/neo-c.h", 2943))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it, "/usr/local/include/neo-c.h", 2948))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2950))->key_list, "/usr/local/include/neo-c.h", 2950))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2951))->key_list, "/usr/local/include/neo-c.h", 2951))->it, "/usr/local/include/neo-c.h", 2951))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_112,0,sizeof(char* ));
    __result_obj__0 = result_112;
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
    if(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3128))->len*2>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3128))->size) {
        map$2char$phsFun$ph_rehash(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3129)));
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3131)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3131))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3135))->item_existance, "/usr/local/include/neo-c.h", 3135))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3137))->keys, "/usr/local/include/neo-c.h", 3137))[it], "/usr/local/include/neo-c.h", 3137)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3137))->keys, "/usr/local/include/neo-c.h", 3137))[it]==key)) {
                if(1) {
                    (((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3140))->keys, "/usr/local/include/neo-c.h", 3140))[it] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3140))->keys, "/usr/local/include/neo-c.h", 3140))[it], (void*)0, (void*)0, 0, 0, (void*)0));
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3141))->key_list, "/usr/local/include/neo-c.h", 3141)),((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3141))->keys, "/usr/local/include/neo-c.h", 3141))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3142))->keys, "/usr/local/include/neo-c.h", 3142))[it]=(char* )come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3145))->key_list, "/usr/local/include/neo-c.h", 3145)),((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3145))->keys, "/usr/local/include/neo-c.h", 3145))[it],(_Bool)0);
                    ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3146))->keys, "/usr/local/include/neo-c.h", 3146))[it]=key;
                }
                if(1) {
                    come_call_finalizer(sFun_finalize, ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3149))->items, "/usr/local/include/neo-c.h", 3149))[it], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3150))->items, "/usr/local/include/neo-c.h", 3150))[it]=(struct sFun* )come_increment_ref_count(item);
                }
                else {
                    ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3153))->items, "/usr/local/include/neo-c.h", 3153))[it]=item;
                }
                break;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3160))->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            ((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3170))->item_existance, "/usr/local/include/neo-c.h", 3170))[it]=(_Bool)1;
            if(1) {
                ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3172))->keys, "/usr/local/include/neo-c.h", 3172))[it]=(char* )come_increment_ref_count(key);
            }
            else {
                ((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3175))->keys, "/usr/local/include/neo-c.h", 3175))[it]=key;
            }
            if(1) {
                ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3178))->items, "/usr/local/include/neo-c.h", 3178))[it]=(struct sFun* )come_increment_ref_count(item);
            }
            else {
                ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3181))->items, "/usr/local/include/neo-c.h", 3181))[it]=item;
            }
            ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3184))->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3191))->key_list, "/usr/local/include/neo-c.h", 3191)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3191))->key_list, "/usr/local/include/neo-c.h", 3191)));it2=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3191))->key_list, "/usr/local/include/neo-c.h", 3191)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it2, "/usr/local/include/neo-c.h", 3192)),key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3198))->key_list, "/usr/local/include/neo-c.h", 3198)),(char* )come_increment_ref_count(key));
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
    struct sFun*  default_value_113  ;
    size=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2966))->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), (void*)0, 2967, "char** "))));
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), (void*)0, 2968, "struct sFun** "))));
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), (void*)0, 2969, "_Bool*"))));
    len=0;
    for(it=map$2char$phsFun$ph_begin(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2973)));!map$2char$phsFun$ph_end(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2973)));it=map$2char$phsFun$ph_next(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2973)))){
        memset(&default_value,0,sizeof(struct sFun* ));
        it2=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2976)),it,default_value,(_Bool)0)));
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
                memset(&default_value_113,0,sizeof(struct sFun* ));
                ((struct sFun** )come_null_checker(items, "/usr/local/include/neo-c.h", 2999))[n]=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2999)),it,(struct sFun* )come_increment_ref_count(default_value_113),(_Bool)0)));
                len++;
                come_call_finalizer(sFun_finalize, default_value_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sFun_finalize, default_value_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3007))->items);
    (((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3008))->item_existance = come_decrement_ref_count(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3008))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3009))->keys);
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3011))->keys=keys;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3012))->items=items;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3013))->item_existance=item_existance;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3015))->size=size;
    ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3016))->len=len;
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 2839)))%((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2839))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2843))->item_existance, "/usr/local/include/neo-c.h", 2843))[it]) {
            if((!by_pointer&&string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2845))->keys, "/usr/local/include/neo-c.h", 2845))[it], "/usr/local/include/neo-c.h", 2845)),key))||(by_pointer&&((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2845))->keys, "/usr/local/include/neo-c.h", 2845))[it]==key)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2847))->items, "/usr/local/include/neo-c.h", 2847))[it]);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2852))->size) {
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
    struct list_item$1char$ph* it_114;
    int i_115;
    struct list_item$1char$ph* prev_it_116;
    struct list_item$1char$ph* it_117;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_118;
    struct list_item$1char$ph* prev_it_119;
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
        it_114=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2102))->head;
        i_115=0;
        while(it_114!=((void*)0)) {
            if(i_115==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2106))->tail=((struct list_item$1char$ph*)come_null_checker(it_114, "/usr/local/include/neo-c.h", 2106))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2107))->tail, "/usr/local/include/neo-c.h", 2107))->next=((void*)0);
            }
            if(i_115>=head) {
                prev_it_116=it_114;
                it_114=((struct list_item$1char$ph*)come_null_checker(it_114, "/usr/local/include/neo-c.h", 2113))->next;
                i_115++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2118))->len--;
            }
            else {
                it_114=((struct list_item$1char$ph*)come_null_checker(it_114, "/usr/local/include/neo-c.h", 2121))->next;
                i_115++;
            }
        }
    }
    else {
        it_117=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2127))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_118=0;
        while(it_117!=((void*)0)) {
            if(i_118==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_117, "/usr/local/include/neo-c.h", 2136))->prev;
            }
            if(i_118==tail) {
                tail_it=it_117;
            }
            if(i_118>=head&&i_118<tail) {
                prev_it_119=it_117;
                it_117=((struct list_item$1char$ph*)come_null_checker(it_117, "/usr/local/include/neo-c.h", 2146))->next;
                i_118++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2151))->len--;
            }
            else {
                it_117=((struct list_item$1char$ph*)come_null_checker(it_117, "/usr/local/include/neo-c.h", 2154))->next;
                i_118++;
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
    char*  result_120  ;
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
    memset(&result_120,0,sizeof(char* ));
    __result_obj__0 = result_120;
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
    char*  result_121  ;
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
    memset(&result_121,0,sizeof(char* ));
    __result_obj__0 = result_121;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj51  ;
    struct list_item$1char$ph* litem_122;
    char*  __dec_obj52  ;
    struct list_item$1char$ph* litem_123;
    char*  __dec_obj53  ;
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
        __dec_obj51=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(char* )come_increment_ref_count(item);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_122=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1781, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_122, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_122, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj52=((struct list_item$1char$ph*)come_null_checker(litem_122, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_122, "/usr/local/include/neo-c.h", 1785))->item=(char* )come_increment_ref_count(item);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_122;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_122;
    }
    else {
        litem_123=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1791, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_123, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_123, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj53=((struct list_item$1char$ph*)come_null_checker(litem_123, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_123, "/usr/local/include/neo-c.h", 1795))->item=(char* )come_increment_ref_count(item);
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_123;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_123;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_124;
    for(i=0;i<((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2741))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->item_existance, "/usr/local/include/neo-c.h", 2742))[i]) {
            if(1) {
                come_call_finalizer(sFun_finalize, ((struct sFun** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2748))->items);
    for(i_124=0;i_124<((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->size;i_124++){
        if(((_Bool*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->item_existance, "/usr/local/include/neo-c.h", 2751))[i_124]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_124] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_124], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2757))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2759))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance = come_decrement_ref_count(((struct map$2char$phsFun$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_126  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2931))->key_list, "/usr/local/include/neo-c.h", 2931))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2932))->key_list, "/usr/local/include/neo-c.h", 2932))->it, "/usr/local/include/neo-c.h", 2932))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_126,0,sizeof(char* ));
    __result_obj__0 = result_126;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list, "/usr/local/include/neo-c.h", 2960))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_128  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2943))->key_list, "/usr/local/include/neo-c.h", 2943))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it, "/usr/local/include/neo-c.h", 2948))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2950))->key_list, "/usr/local/include/neo-c.h", 2950))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2951))->key_list, "/usr/local/include/neo-c.h", 2951))->it, "/usr/local/include/neo-c.h", 2951))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_128,0,sizeof(char* ));
    __result_obj__0 = result_128;
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
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_129;
    for(i=0;i<((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2741))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->item_existance, "/usr/local/include/neo-c.h", 2742))[i]) {
            if(1) {
                come_call_finalizer(buffer_finalize, ((struct buffer** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2748))->items);
    for(i_129=0;i_129<((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->size;i_129++){
        if(((_Bool*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->item_existance, "/usr/local/include/neo-c.h", 2751))[i_129]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_129] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_129], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2757))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2759))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance = come_decrement_ref_count(((struct map$2char$phbuffer$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static char*  map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_146  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->it=((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2929))->key_list, "/usr/local/include/neo-c.h", 2929))->head;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2931))->key_list, "/usr/local/include/neo-c.h", 2931))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2932))->key_list, "/usr/local/include/neo-c.h", 2932))->it, "/usr/local/include/neo-c.h", 2932))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_146,0,sizeof(char* ));
    __result_obj__0 = result_146;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2960))->key_list, "/usr/local/include/neo-c.h", 2960))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phchar$ph_next(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_148  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2943))->key_list, "/usr/local/include/neo-c.h", 2943))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2948))->key_list, "/usr/local/include/neo-c.h", 2948))->it, "/usr/local/include/neo-c.h", 2948))->next;
    if(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2950))->key_list, "/usr/local/include/neo-c.h", 2950))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2951))->key_list, "/usr/local/include/neo-c.h", 2951))->it, "/usr/local/include/neo-c.h", 2951))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_148,0,sizeof(char* ));
    __result_obj__0 = result_148;
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(default_value);
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
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
                it=0;
            }
            else if(it==hash) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value);
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
                return __result_obj__0;
            }
        }
        else {
            __result_obj__0 = (char* )come_increment_ref_count(default_value);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_149;
    for(i=0;i<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2741))->size;i++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2742))->item_existance, "/usr/local/include/neo-c.h", 2742))[i]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2744))->items, "/usr/local/include/neo-c.h", 2744))[i], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2748))->items);
    for(i_149=0;i_149<((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2750))->size;i_149++){
        if(((_Bool*)come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2751))->item_existance, "/usr/local/include/neo-c.h", 2751))[i_149]) {
            if(1) {
                (((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_149] = come_decrement_ref_count(((char** )come_null_checker(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2753))->keys, "/usr/local/include/neo-c.h", 2753))[i_149], (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
    }
    come_free((char*)((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2757))->keys);
    come_call_finalizer(list$1char$ph$p_finalize, ((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2759))->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance = come_decrement_ref_count(((struct map$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2761))->item_existance, (void*)0, (void*)0, 0, 0, (void*)0));
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
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1823))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1833))->come_fun) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1834))->come_fun, "03output_code.nc", 1834))->mSourceHead, "03output_code.nc", 1834)),"    ");
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1835))->come_fun, "03output_code.nc", 1835))->mSourceHead, "03output_code.nc", 1835)),msg2);
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
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1843))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,code);
    len=vasprintf(&msg2,code,args);
    __builtin_va_end(args);
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1853))->come_fun) {
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1854))->come_fun, "03output_code.nc", 1854))->mSourceHead2, "03output_code.nc", 1854)),"    ");
        buffer_append_str(((struct buffer* )come_null_checker(((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1855))->come_fun, "03output_code.nc", 1855))->mSourceHead2, "03output_code.nc", 1855)),msg2);
    }
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void add_last_code_to_source(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_last_code_to_source"; neo_current_frame = &fr;
    char*  __dec_obj54  ;
    char*  __dec_obj55  ;
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1863))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    if(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1866))->module, "03output_code.nc", 1866))->mLastCode) {
        add_come_code(info,"%s;\n",((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1867))->module, "03output_code.nc", 1867))->mLastCode);
        __dec_obj54=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1868))->module, "03output_code.nc", 1868))->mLastCode,
        ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1868))->module, "03output_code.nc", 1868))->mLastCode=((void*)0);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1870))->module, "03output_code.nc", 1870))->mLastCode2) {
        add_come_code(info,"%s;\n",((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1871))->module, "03output_code.nc", 1871))->mLastCode2);
        __dec_obj55=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1872))->module, "03output_code.nc", 1872))->mLastCode2,
        ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1872))->module, "03output_code.nc", 1872))->mLastCode2=((void*)0);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
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
    char*  __dec_obj56  ;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1878))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj56=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1888))->module, "03output_code.nc", 1888))->mLastCode,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1888))->module, "03output_code.nc", 1888))->mLastCode=(char* )come_increment_ref_count(__builtin_string(msg2));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
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
    char*  __dec_obj57  ;
    memset(&msg2, 0, sizeof(msg2));
    memset(&args, 0, sizeof(args));
    if(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1895))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&msg2,msg,args);
    __builtin_va_end(args);
    __dec_obj57=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1905))->module, "03output_code.nc", 1905))->mLastCode2,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1905))->module, "03output_code.nc", 1905))->mLastCode2=(char* )come_increment_ref_count(__builtin_string(msg2));
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0);
    free(msg2);
    come_call_finalizer(__builtin_va_list_finalize, (&args), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void dec_stack_ptr(int value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dec_stack_ptr"; neo_current_frame = &fr;
    list$1CVALUE$ph_delete(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1912))->stack, "03output_code.nc", 1912)),-value,-1);
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
    struct list_item$1CVALUE$ph* it_159;
    int i_160;
    struct list_item$1CVALUE$ph* prev_it_161;
    struct list_item$1CVALUE$ph* it_162;
    struct list_item$1CVALUE$ph* head_prev_it;
    struct list_item$1CVALUE$ph* tail_it;
    int i_163;
    struct list_item$1CVALUE$ph* prev_it_164;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2044))->len;
    }
    if(tail<0) {
        tail+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2047))->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2060))->len) {
        tail=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2061))->len;
    }
    if(head>=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2064))->len) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2072))->len) {
        list$1CVALUE$ph_reset(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2074)));
    }
    else if(head==0) {
        it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2077))->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2083))->next;
                i++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2088))->len--;
            }
            else if(i==tail) {
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2091))->head=it;
                ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2092))->head, "/usr/local/include/neo-c.h", 2092))->prev=((void*)0);
                break;
            }
            else {
                it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2096))->next;
                i++;
            }
        }
    }
    else if(tail==((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2101))->len) {
        it_159=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2102))->head;
        i_160=0;
        while(it_159!=((void*)0)) {
            if(i_160==head) {
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2106))->tail=((struct list_item$1CVALUE$ph*)come_null_checker(it_159, "/usr/local/include/neo-c.h", 2106))->prev;
                ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2107))->tail, "/usr/local/include/neo-c.h", 2107))->next=((void*)0);
            }
            if(i_160>=head) {
                prev_it_161=it_159;
                it_159=((struct list_item$1CVALUE$ph*)come_null_checker(it_159, "/usr/local/include/neo-c.h", 2113))->next;
                i_160++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2118))->len--;
            }
            else {
                it_159=((struct list_item$1CVALUE$ph*)come_null_checker(it_159, "/usr/local/include/neo-c.h", 2121))->next;
                i_160++;
            }
        }
    }
    else {
        it_162=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2127))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_163=0;
        while(it_162!=((void*)0)) {
            if(i_163==head) {
                head_prev_it=((struct list_item$1CVALUE$ph*)come_null_checker(it_162, "/usr/local/include/neo-c.h", 2136))->prev;
            }
            if(i_163==tail) {
                tail_it=it_162;
            }
            if(i_163>=head&&i_163<tail) {
                prev_it_164=it_162;
                it_162=((struct list_item$1CVALUE$ph*)come_null_checker(it_162, "/usr/local/include/neo-c.h", 2146))->next;
                i_163++;
                come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2151))->len--;
            }
            else {
                it_162=((struct list_item$1CVALUE$ph*)come_null_checker(it_162, "/usr/local/include/neo-c.h", 2154))->next;
                i_163++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            ((struct list_item$1CVALUE$ph*)come_null_checker(head_prev_it, "/usr/local/include/neo-c.h", 2160))->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            ((struct list_item$1CVALUE$ph*)come_null_checker(tail_it, "/usr/local/include/neo-c.h", 2163))->prev=head_prev_it;
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
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2004))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2007))->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2011))->head=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2012))->tail=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2014))->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1CVALUE$ph*)come_null_checker(self, "list_item$1CVALUE$ph$p_finalize", 2))->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, ((struct list_item$1CVALUE$ph*)come_null_checker(self, "list_item$1CVALUE$ph$p_finalize", 2))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct CVALUE*  get_value_from_stack(int offset, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_value_from_stack"; neo_current_frame = &fr;
    char*  __dec_obj58  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    __dec_obj58=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1917))->module, "03output_code.nc", 1917))->mLastCode,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1917))->module, "03output_code.nc", 1917))->mLastCode=((void*)0);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    result=(struct CVALUE* )come_increment_ref_count(CVALUE_clone(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1919))->stack, "03output_code.nc", 1919)), "03output_code.nc", 1919)),offset)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(result==((void*)0)) {
        err_msg(info,"invalid stack value");
        exit(2);
    }
    list$1CVALUE$ph_delete(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1926))->stack, "03output_code.nc", 1926)),-1,-1);
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
    struct CVALUE*  default_value_165  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_165,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_165);
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
    struct CVALUE*  default_value_166  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2306))->len;
    }
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2309))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (struct CVALUE* )come_increment_ref_count(((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2313))->item);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2315))->next;
        i++;
    }
    memset(&default_value_166,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_166);
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
    char*  __dec_obj59  ;
    struct sType*  __dec_obj60  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 5, "struct CVALUE* "));
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 6))->c_value!=((void*)0)) {
        __dec_obj59=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 6))->c_value,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 6))->c_value=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 6))->c_value, "CVALUE_clone", 6, "char* "));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 7))->type!=((void*)0)) {
        __dec_obj60=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 7))->type,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 7))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 7))->type));
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 8))->var=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 8))->var;
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 9))->right_value_objects=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 9))->right_value_objects;
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 10))->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj61=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 10))->c_value_without_right_value_objects,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 10))->c_value_without_right_value_objects=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 10))->c_value_without_right_value_objects, "CVALUE_clone", 10, "char* "));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 11))->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj62=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 11))->c_value_without_cast_object_value,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 11))->c_value_without_cast_object_value=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 11))->c_value_without_cast_object_value, "CVALUE_clone", 11, "char* "));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 12))->mLoadField=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 12))->mLoadField;
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 13))->mCastValue=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 13))->mCastValue;
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
    char*  __dec_obj63  ;
    char*  __dec_obj64  ;
    __dec_obj63=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1933))->module, "03output_code.nc", 1933))->mLastCode,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1933))->module, "03output_code.nc", 1933))->mLastCode=((void*)0);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj64=((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1934))->module, "03output_code.nc", 1934))->mLastCode2,
    ((struct sModule* )come_null_checker(((struct sInfo* )come_null_checker(info, "03output_code.nc", 1934))->module, "03output_code.nc", 1934))->mLastCode2=((void*)0);
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
    neo_current_frame = fr.prev;
}

