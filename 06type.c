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
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
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
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_81  ;
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
    struct sType**  type_82  ;
    char**  var_name_83  ;
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
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
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
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_81  ;
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
    struct sType**  type_82  ;
    char**  var_name_83  ;
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
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
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
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_81  ;
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
    struct sType**  type_82  ;
    char**  var_name_83  ;
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
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker);
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
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
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
void output_aggregate_field(struct sType*  type  , char*  tag_name  , struct buffer*  buf  , _Bool* existance_generics, char*  field_name  , int indent, struct sInfo*  info  , _Bool* named_child);
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
char*  parse_square_attribute(struct sInfo*  info  );
char*  parse_declspec_attribute(struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  );
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char*  v1  , char*  v2  );
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
void parse_struct_attribute_skip_paren(struct sInfo*  info  );
_Bool parse_attribute_keyword(struct buffer*  result  , const char* keyword, _Bool allow_end, struct sInfo*  info  );
_Bool parse_common_attribute_keyword(struct buffer*  result  , struct sInfo*  info  , _Bool allow_end);
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  merge_tag_attribute(char*  current  , char*  attribute  );
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
void apply_type_qualifiers(struct sType*  type  , _Bool constant, _Bool complex_, _Bool atomic_, _Bool thread_local, _Bool thread_, _Bool alignas_double, _Bool register_, _Bool unsigned_, _Bool noreturn_, _Bool volatile_, _Bool uniq_, _Bool static_, _Bool extern_, _Bool inline_, _Bool restrict_, _Bool long_long, _Bool long_, _Bool short_, _Bool norecord);
void merge_pointer_attribute_to_type(struct sType*  type  , char*  pointer_attribute  );
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
_Bool is_generic_void_pointer_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_span_class_name(const char* class_name, struct sInfo*  info  );
_Bool is_span_wrapper_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_transparent_union_type(struct sType*  type  , struct sInfo*  info  );
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
        return (type&&((struct sType* )come_null_checker(type, "06type.nc", 12))->mTypedef)||(klass&&((struct sClass* )come_null_checker(klass, "06type.nc", 13))->mNumber)||(klass&&((struct sClass* )come_null_checker(klass, "06type.nc", 14))->mFloat)||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 16)),"_Thread_local")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 17)),"__thread")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"_Complex")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"const")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"register")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"static")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"volatile")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 18)),"unsigned")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"__volatile__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"signed")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"struct")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"enum")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 19)),"union")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"extern")||((struct sInfo* )come_null_checker(info, "06type.nc", 20))->in_top_level&&(charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__always_inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__inline__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 20)),"__forceinline"))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 22)),"__extension__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 23)),"_Noreturn")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 24)),"restrict")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 25)),"__noreturn")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 26)),"_noreturn")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 27)),"__typeof__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 28)),"typeof")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 29)),"_Nullable")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 30)),"_Alignas")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 31)),"_Atomic")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 32)),"__type__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 32)),"__attribute__")&&(*((struct sInfo* )come_null_checker(info, "06type.nc", 32))->p==40||(*((struct sInfo* )come_null_checker(info, "06type.nc", 32))->p==91&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 32))->p+1)==91))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 33)),"__declspec")&&*((struct sInfo* )come_null_checker(info, "06type.nc", 33))->p==40||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 34)),"void");
    }
    else {
        neo_current_frame = fr.prev;
        return generics_class||generics_type_name||mgenerics_type_name||klass||type||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"const")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"register")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"static")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"volatile")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 38)),"__volatile__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"unsigned")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"signed")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"struct")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"enum")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 39)),"union")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 40)),"extern")||((struct sInfo* )come_null_checker(info, "06type.nc", 40))->in_top_level&&(charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 40)),"inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 40)),"__inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 40)),"__always_inline")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 40)),"__inline__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 40)),"__forceinline"))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 42)),"__extension__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 43)),"_Thread_local")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 44)),"_norecord")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 45)),"__thread")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 46)),"_Complex")||(((struct sInfo* )come_null_checker(info, "06type.nc", 46))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 46)),"_Noreturn"))||(((struct sInfo* )come_null_checker(info, "06type.nc", 47))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 47)),"__noreturn"))||(((struct sInfo* )come_null_checker(info, "06type.nc", 48))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 48)),"_noreturn"))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 50)),"__typeof__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 51)),"typeof")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 52)),"_Nullable")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 53)),"_Alignas")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 54)),"_Atomic")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 55)),"restrict")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 56)),"__type__")||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 56)),"__attribute__")&&(*((struct sInfo* )come_null_checker(info, "06type.nc", 56))->p==40||(*((struct sInfo* )come_null_checker(info, "06type.nc", 56))->p==91&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 56))->p+1)==91))||charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 57)),"__declspec")&&*((struct sInfo* )come_null_checker(info, "06type.nc", 57))->p==40||(charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 58)),"tup")&&(*((struct sInfo* )come_null_checker(info, "06type.nc", 58))->p==58||*((struct sInfo* )come_null_checker(info, "06type.nc", 58))->p==40))||(((struct sInfo* )come_null_checker(info, "06type.nc", 59))->in_top_level&&charp_operator_equals(((char*)come_null_checker(buf, "06type.nc", 59)),"uniq"));
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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
    hash=string_get_hash_key(((char* )come_null_checker(((char* )key), "/usr/local/include/neo-c.h", 3213)))%((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3213))->size;
    it=hash;
    while((_Bool)1) {
        if(((_Bool*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3217))->item_existance, "/usr/local/include/neo-c.h", 3217))[it]) {
            if(string_equals(((char* )come_null_checker(((char** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3219))->keys, "/usr/local/include/neo-c.h", 3219))[it], "/usr/local/include/neo-c.h", 3219)),key)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType** )come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3221))->items, "/usr/local/include/neo-c.h", 3221))[it]);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            it++;
            if(it>=((struct map$2char$phsType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3226))->size) {
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

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    for(it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2397)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2397)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2397)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it, "/usr/local/include/neo-c.h", 2398)),item))||(by_pointer&&it==item)) {
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
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
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
    return self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_1  ;
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
    struct sType*  __dec_obj35  ;
    struct sType*  __dec_obj36  ;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    _Bool __result_obj__0;
    memset(&type2, 0, sizeof(type2));
    if(((struct sType* )come_null_checker(type, "06type.nc", 66))->mNoSolvedGenericsType) {
        __dec_obj35=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(type, "06type.nc", 67))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj36=type2,
        type2=(struct sType* )come_increment_ref_count(sType_clone(type));
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(((struct sType* )come_null_checker(type2, "06type.nc", 72))->mGenericsTypes),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 72)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 72)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 72)))){
        if(is_contained_generics_class(it,info)) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "06type.nc", 78))->mClass, "06type.nc", 78))->mGenerics) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type2, "06type.nc", 81))->mClass, "06type.nc", 81))->mMethodGenerics) {
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
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1696, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj4=((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1700))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_2;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1706, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj5=((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1710))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_3;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_3;
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
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1696, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj19=((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1700))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_4;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_4;
    }
    else {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1706, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj20=((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1710))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_5;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_5;
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
    struct list_item$1int$* litem_6;
    struct list_item$1int$* litem_7;
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
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1696, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1int$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1700))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_6;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_6;
    }
    else {
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1706, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1710))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_7;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_7;
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
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1696, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj29=((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1700))->item=(char* )come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_8;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_8;
    }
    else {
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1706, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj30=((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1710))->item=(char* )come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_9;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_9;
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
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
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_11  ;
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
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 90, "struct list$1sType$ph*"))), "06type.nc", 90)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 91, "struct list$1char$ph*"))), "06type.nc", 91)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 92, "struct list$1char$ph*"))), "06type.nc", 92)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    var_args=(_Bool)0;
    if(in_constructor_) {
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_names, "06type.nc", 96)),(char*)come_increment_ref_count(xsprintf("self")));
        type_=(struct sType* )come_increment_ref_count(sType_clone(((struct sInfo* )come_null_checker(info, "06type.nc", 97))->class_type));
        ((struct sType* )come_null_checker(type_, "06type.nc", 98))->mHeap=(_Bool)1;
        list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(param_types, "06type.nc", 99)),(struct sType* )come_increment_ref_count(type_));
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 100)),((void*)0));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(((struct sInfo* )come_null_checker(info, "06type.nc", 102))->in_class) {
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_names, "06type.nc", 103)),(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(param_types, "06type.nc", 104)),(struct sType* )come_increment_ref_count(sType_clone(((struct sInfo* )come_null_checker(info, "06type.nc", 104))->class_type)));
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 105)),((void*)0));
    }
    expected_next_character(40,info);
    void_param=(_Bool)0;
    {
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 113))->p;
        sline=((struct sInfo* )come_null_checker(info, "06type.nc", 114))->sline;
        if(parsecmp("void",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 117))->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 120))->p==41) {
                void_param=(_Bool)1;
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 125))->p=p;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 126))->sline=sline;
    }
    if(void_param) {
        if(parsecmp("void",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 131))->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 134))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 135))->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 142))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 143))->p++;
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
                printf("%s %d: failed to function parametor\n",((struct sInfo* )come_null_checker(info, "06type.nc", 153))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 153))->sline);
                __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "06type.nc", 154, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$")),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
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
            param_type2=(struct sType* )come_increment_ref_count(solve_generics(param_type,((struct sInfo* )come_null_checker(info, "06type.nc", 157))->generics_type,info));
            list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(param_types, "06type.nc", 159)),(struct sType* )come_increment_ref_count(sType_clone(param_type2)));
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(param_names, "06type.nc", 160)),(char* )come_increment_ref_count((char* )come_memdup(param_name, "06type.nc", 160, "char* ")));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 162))->p==61&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 162))->p+1)!=61&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 162))->p+1)!=62) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 163))->p++;
                skip_spaces_and_lf(info);
                p_16=((struct sInfo* )come_null_checker(info, "06type.nc", 167))->p;
                no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 169))->no_comma;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 170))->no_comma=(_Bool)1;
                node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                ((struct sInfo* )come_null_checker(info, "06type.nc", 174))->no_comma=no_comma;
                p2=((struct sInfo* )come_null_checker(info, "06type.nc", 176))->p;
                char buf[p2-p_16+1];
                memset(&buf, 0, sizeof(buf));
                memcpy(buf,p_16,p2-p_16);
                buf[p2-p_16]=0;
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 182)),(char* )come_increment_ref_count(__builtin_string(buf)));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
            else {
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(param_default_parametors, "06type.nc", 185)),((void*)0));
            }
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 190))->p==44) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 191))->p++;
                skip_spaces_and_lf(info);
                if(parsecmp("...",info)) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 195))->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 203))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 204))->p++;
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
    __result_obj__0 = (struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value1=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$)*(1), "06type.nc", 211, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$")),(struct list$1sType$ph*)come_increment_ref_count(param_types),(struct list$1char$ph*)come_increment_ref_count(param_names),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors),var_args))));
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
    if(self!=((void*)0)&&((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 2))->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3))->v2!=((void*)0)) {
        (((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __dec_obj37;
    struct list$1char$ph* __dec_obj38;
    struct list$1char$ph* __dec_obj39;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* __result_obj__0;
    __dec_obj37=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3723))->v1,
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3723))->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj38=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3724))->v2,
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3724))->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj39=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3725))->v3,
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3725))->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3726))->v4=v4;
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
    if(self!=((void*)0)&&((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 2))->v1!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 3))->v2!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 4))->v3!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)come_null_checker(self, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize", 4))->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj40  ;
    struct list_item$1sType$ph* litem_12;
    struct sType*  __dec_obj41  ;
    struct list_item$1sType$ph* litem_13;
    struct sType*  __dec_obj42  ;
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
        __dec_obj40=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1781, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj41=((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_12, "/usr/local/include/neo-c.h", 1785))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_12;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_12;
    }
    else {
        litem_13=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1791, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj42=((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1795))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_13;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_13;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
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
    char*  __dec_obj43  ;
    struct list_item$1char$ph* litem_14;
    char*  __dec_obj44  ;
    struct list_item$1char$ph* litem_15;
    char*  __dec_obj45  ;
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
        __dec_obj43=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(char* )come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_14=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1781, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj44=((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1785))->item=(char* )come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_14;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_14;
    }
    else {
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1791, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj45=((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_15, "/usr/local/include/neo-c.h", 1795))->item=(char* )come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_15;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_15;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  parse_square_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_square_attribute"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char*  ns  ;
    char*  keyword  ;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    char* arg_head;
    char* arg_tail;
    _Bool gnu_ns;
    _Bool mapped;
    skip_spaces_and_lf(info);
    if(!(*((struct sInfo* )come_null_checker(info, "06type.nc", 224))->p==91&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 224))->p+1)==91)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "06type.nc", 228))->p+=2;
    skip_spaces_and_lf(info);
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 231, "struct buffer* "))), "06type.nc", 231)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 233))->p) {
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 234))->p==93&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 234))->p+1)==93) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 235))->p+=2;
            skip_spaces_and_lf(info);
            break;
        }
        if(!(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 240))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 240))->p==95)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 241))->p++;
            continue;
        }
        ns=(char*)come_increment_ref_count(xsprintf(""));
        keyword=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 248))->p==58&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 248))->p+1)==58) {
            __dec_obj46=ns,
            ns=(char* )come_increment_ref_count(keyword);
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0);
            ((struct sInfo* )come_null_checker(info, "06type.nc", 250))->p+=2;
            skip_spaces_and_lf(info);
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 253))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 253))->p==95) {
                __dec_obj47=keyword,
                keyword=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0);
            }
            else {
                (ns = come_decrement_ref_count(ns, (void*)0, (void*)0, 0, 0, (void*)0));
                (keyword = come_decrement_ref_count(keyword, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
        }
        arg_head=((void*)0);
        arg_tail=((void*)0);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 263))->p==40) {
            arg_head=((struct sInfo* )come_null_checker(info, "06type.nc", 264))->p;
            skip_paren(info);
            arg_tail=((struct sInfo* )come_null_checker(info, "06type.nc", 266))->p;
        }
        gnu_ns=string_operator_equals(((char* )come_null_checker(ns, "06type.nc", 269)),"gnu")||string_operator_equals(((char* )come_null_checker(ns, "06type.nc", 269)),"__gnu__");
        mapped=(_Bool)0;
        if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 272)),"maybe_unused")||string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 272)),"unused")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 273)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 274))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 276)),"__attribute__((unused))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 279)),"deprecated")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 280)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 281))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 283)),"__attribute__((deprecated");
            if(arg_head&&arg_tail&&arg_tail>arg_head) {
                buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 285)),arg_head,arg_tail-arg_head);
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 287)),"))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 290)),"nodiscard")||string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 290)),"warn_unused_result")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 291)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 292))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 294)),"__attribute__((warn_unused_result))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 297)),"noreturn")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 298)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 299))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 301)),"__attribute__((noreturn))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 304)),"fallthrough")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 305)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 306))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 308)),"__attribute__((fallthrough))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 311)),"aligned")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 312)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 313))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 315)),"__attribute__((aligned");
            if(arg_head&&arg_tail&&arg_tail>arg_head) {
                buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 317)),arg_head,arg_tail-arg_head);
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 319)),"))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 322)),"packed")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 323)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 324))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 326)),"__attribute__((packed))");
            mapped=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 329)),"noinline")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 330)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 331))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 333)),"__attribute__((noinline))");
            mapped=(_Bool)1;
        }
        else if(gnu_ns) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 337)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 338))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 340)),"__attribute__((");
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 341)),keyword);
            if(arg_head&&arg_tail&&arg_tail>arg_head) {
                buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 343)),arg_head,arg_tail-arg_head);
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 345)),"))");
            mapped=(_Bool)1;
        }
        if(!mapped) {
        }
        skip_spaces_and_lf(info);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 354))->p==44) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 355))->p++;
            skip_spaces_and_lf(info);
        }
        (ns = come_decrement_ref_count(ns, (void*)0, (void*)0, 0, 0, (void*)0));
        (keyword = come_decrement_ref_count(keyword, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "06type.nc", 360))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  parse_declspec_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_declspec_attribute"; neo_current_frame = &fr;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char*  keyword  ;
    char* arg_head;
    char* arg_tail;
    char* arg_head_17;
    char* arg_tail_18;
    p=((struct sInfo* )come_null_checker(info, "06type.nc", 365))->p;
    sline=((struct sInfo* )come_null_checker(info, "06type.nc", 366))->sline;
    if(parsecmp("__declspec",info)) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 369))->p+=strlen("__declspec");
        skip_spaces_and_lf(info);
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 373))->p!=40) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 374))->p=p;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 375))->sline=sline;
        __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "06type.nc", 379))->p++;
    skip_spaces_and_lf(info);
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 382, "struct buffer* "))), "06type.nc", 382)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 384))->p&&*((struct sInfo* )come_null_checker(info, "06type.nc", 384))->p!=41) {
        if(!(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 385))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 385))->p==95)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 386))->p++;
            continue;
        }
        keyword=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        skip_spaces_and_lf(info);
        if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 393)),"align")) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 394))->p==40) {
                arg_head=((struct sInfo* )come_null_checker(info, "06type.nc", 395))->p;
                skip_paren(info);
                arg_tail=((struct sInfo* )come_null_checker(info, "06type.nc", 397))->p;
                if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 399)))>0) {
                    buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 400))," ");
                }
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 402)),"__attribute__((aligned");
                buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 403)),arg_head,arg_tail-arg_head);
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 404)),"))");
            }
            else {
                if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 407)))>0) {
                    buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 408))," ");
                }
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 410)),"__attribute__((aligned))");
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 414)),"noinline")||string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 415)),"noreturn")||string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 416)),"used")||string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 416)),"unused")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 418)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 419))," ");
            }
            buffer_append_format(((struct buffer* )come_null_checker(result, "06type.nc", 421)),"__attribute__((%s))",keyword);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 423))->p==40) {
                skip_paren(info);
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(keyword, "06type.nc", 427)),"deprecated")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 428)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 429))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 431)),"__attribute__((deprecated");
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 433))->p==40) {
                arg_head_17=((struct sInfo* )come_null_checker(info, "06type.nc", 434))->p;
                skip_paren(info);
                arg_tail_18=((struct sInfo* )come_null_checker(info, "06type.nc", 436))->p;
                buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 437)),arg_head_17,arg_tail_18-arg_head_17);
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 440)),"))");
        }
        else {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 443))->p==40) {
                skip_paren(info);
            }
        }
        skip_spaces_and_lf(info);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 450))->p==44) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 451))->p++;
            skip_spaces_and_lf(info);
        }
        (keyword = come_decrement_ref_count(keyword, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 456))->p==41) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 457))->p++;
        skip_spaces_and_lf(info);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "06type.nc", 461))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    int nest_19;
    int nest_20;
    int nest_21;
    int nest_22;
    char*  attr  ;
    char*  attr_23  ;
    char*  attr_24  ;
    int len;
    _Bool in_dquort;
    int brace_num;
    int brace_num_25;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    asm_fun_name=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 466, "struct buffer* "))), "06type.nc", 466)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    attribute=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 467, "struct buffer* "))), "06type.nc", 467)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while((_Bool)1) {
        if(parsecmp("__attribute_pure__",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 471))->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__malloc_like",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 475))->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__result_use_check",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 479))->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__alloc_size2",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 483))->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 486))->p==40) {
                nest=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 489))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 490))->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 494))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 495))->p++;
                        skip_spaces_and_lf(info);
                        nest--;
                        if(nest==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 503))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 507))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_size",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 513))->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 516))->p==40) {
                nest_19=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 519))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 520))->p++;
                        skip_spaces_and_lf(info);
                        nest_19++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 524))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 525))->p++;
                        skip_spaces_and_lf(info);
                        nest_19--;
                        if(nest_19==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 533))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 537))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__nonnull",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 543))->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 546))->p==40) {
                nest_20=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 549))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 550))->p++;
                        skip_spaces_and_lf(info);
                        nest_20++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 554))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 555))->p++;
                        skip_spaces_and_lf(info);
                        nest_20--;
                        if(nest_20==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 563))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 567))->p++;
                    }
                }
            }
        }
        else if(parsecmp("_Nonnull",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 573))->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 576))->p==40) {
                nest_21=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 579))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 580))->p++;
                        skip_spaces_and_lf(info);
                        nest_21++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 584))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 585))->p++;
                        skip_spaces_and_lf(info);
                        nest_21--;
                        if(nest_21==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 593))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 597))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__alloc_align",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 603))->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 606))->p==40) {
                nest_22=0;
                while(1) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 609))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 610))->p++;
                        skip_spaces_and_lf(info);
                        nest_22++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 614))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 615))->p++;
                        skip_spaces_and_lf(info);
                        nest_22--;
                        if(nest_22==0) {
                            break;
                        }
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 623))->p==0) {
                        break;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 627))->p++;
                    }
                }
            }
        }
        else if(parsecmp("__attribute_malloc__",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 633))->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attr_dealloc_fclose",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 637))->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__wur",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 641))->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure2",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 645))->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__pure",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 649))->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__noreturn",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 653))->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__attribute__",info)) {
            attr=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            if(string_operator_not_equals(((char* )come_null_checker(attr, "06type.nc", 658)),"")) {
                buffer_append_str(((struct buffer* )come_null_checker(attribute, "06type.nc", 659)),attr);
            }
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(parsecmp("__declspec",info)) {
            attr_23=(char* )come_increment_ref_count(parse_declspec_attribute(info));
            if(string_operator_not_equals(((char* )come_null_checker(attr_23, "06type.nc", 664)),"")) {
                if(buffer_length(((struct buffer* )come_null_checker(attribute, "06type.nc", 665)))>0) {
                    buffer_append_str(((struct buffer* )come_null_checker(attribute, "06type.nc", 666))," ");
                }
                buffer_append_str(((struct buffer* )come_null_checker(attribute, "06type.nc", 668)),attr_23);
            }
            (attr_23 = come_decrement_ref_count(attr_23, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 671))->p==91&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 671))->p+1)==91) {
            attr_24=(char* )come_increment_ref_count(parse_square_attribute(info));
            if(string_operator_not_equals(((char* )come_null_checker(attr_24, "06type.nc", 673)),"")) {
                if(buffer_length(((struct buffer* )come_null_checker(attribute, "06type.nc", 674)))>0) {
                    buffer_append_str(((struct buffer* )come_null_checker(attribute, "06type.nc", 675))," ");
                }
                buffer_append_str(((struct buffer* )come_null_checker(attribute, "06type.nc", 677)),attr_24);
            }
            (attr_24 = come_decrement_ref_count(attr_24, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(parsecmp("__asm__",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 681))->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if((((struct sInfo* )come_null_checker(info, "06type.nc", 684))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 684))->p)>=strlen("__ASMNAME")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 684))->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 685))->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len=0;
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 691))->p==40) {
                in_dquort=(_Bool)0;
                brace_num=0;
                while(*((struct sInfo* )come_null_checker(info, "06type.nc", 694))->p) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 695))->p==34) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 696))->p++;
                        in_dquort=!in_dquort;
                    }
                    else if(in_dquort) {
                        buffer_append_char(((struct buffer* )come_null_checker(asm_fun_name, "06type.nc", 701)),*((struct sInfo* )come_null_checker(info, "06type.nc", 701))->p);
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 702))->p++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 704))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 705))->p++;
                        brace_num++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 708))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 709))->p++;
                        brace_num--;
                        if(brace_num==0) {
                            break;
                        }
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 717))->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(parsecmp("__asm",info)) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 725))->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 728))->p==40) {
                brace_num_25=0;
                while(*((struct sInfo* )come_null_checker(info, "06type.nc", 730))->p) {
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 731))->p==40) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 732))->p++;
                        brace_num_25++;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 735))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 736))->p++;
                        brace_num_25--;
                        if(brace_num_25==0) {
                            break;
                        }
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 744))->p++;
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
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value3=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "06type.nc", 758, "struct tuple2$2char$phchar$ph")),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(asm_fun_name, "06type.nc", 758)))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(attribute, "06type.nc", 758))))))));
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
    char*  __dec_obj48  ;
    char*  __dec_obj49  ;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    __dec_obj48=((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1,
    ((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1=(char* )come_increment_ref_count(v1);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj49=((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2,
    ((struct tuple2$2char$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2=(char* )come_increment_ref_count(v2);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
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
    if(self!=((void*)0)&&((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 2))->v1!=((void*)0)) {
        (((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 2))->v1 = come_decrement_ref_count(((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 3))->v2!=((void*)0)) {
        (((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple2$2char$phchar$ph*)come_null_checker(self, "tuple2$2char$phchar$ph$p_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

void parse_struct_attribute_skip_paren(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_struct_attribute_skip_paren"; neo_current_frame = &fr;
    int nest;
    skip_spaces_and_lf(info);
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 764))->p==40) {
        nest=0;
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 767))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 768))->p++;
                skip_spaces_and_lf(info);
                nest++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 772))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 773))->p++;
                skip_spaces_and_lf(info);
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 781))->p==0) {
                break;
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 785))->p++;
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
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 795))->p+strlen(keyword);
        while(*p==32||*p==9||*p==10||*p==13) {
            p++;
        }
        if(!allow_end&&*p!=40) {
            if(*p==59||*p==44||*p==41||*p==93||*p==61||*p==58) {
                neo_current_frame = fr.prev;
                return (_Bool)0;
            }
        }
        head=((struct sInfo* )come_null_checker(info, "06type.nc", 805))->p;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 806))->p+=strlen(keyword);
        parse_struct_attribute_skip_paren(info);
        tail=((struct sInfo* )come_null_checker(info, "06type.nc", 810))->p;
        buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 811)),head,tail-head);
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
    char*  attr  ;
    char*  attr_26  ;
    char*  __result_obj__0  ;
    skip_spaces_and_lf(info);
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1005, "struct buffer* "))), "06type.nc", 1005)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        if(parsecmp("__attribute__",info)) {
            head=((struct sInfo* )come_null_checker(info, "06type.nc", 1008))->p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1010))->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail=((struct sInfo* )come_null_checker(info, "06type.nc", 1014))->p;
            buffer_append(((struct buffer* )come_null_checker(result, "06type.nc", 1016)),head,tail-head);
        }
        else if(parsecmp("__declspec",info)) {
            attr=(char* )come_increment_ref_count(parse_declspec_attribute(info));
            if(string_operator_not_equals(((char* )come_null_checker(attr, "06type.nc", 1021)),"")) {
                if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 1022)))>0) {
                    buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1023))," ");
                }
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1025)),attr);
            }
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1028))->p==91&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 1028))->p+1)==91) {
            attr_26=(char* )come_increment_ref_count(parse_square_attribute(info));
            if(string_operator_not_equals(((char* )come_null_checker(attr_26, "06type.nc", 1031)),"")) {
                if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 1032)))>0) {
                    buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1033))," ");
                }
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1035)),attr_26);
            }
            (attr_26 = come_decrement_ref_count(attr_26, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(parse_common_attribute_keyword(result,info,allow_end)) {
        }
        else {
            break;
        }
    }
    skip_spaces_and_lf(info);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "06type.nc", 1046))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  merge_tag_attribute(char*  current  , char*  attribute  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "merge_tag_attribute"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    if(string_operator_equals(((char* )come_null_checker(attribute, "06type.nc", 1051)),"")) {
        __result_obj__0 = (char* )come_increment_ref_count(current);
        (current = come_decrement_ref_count(current, (void*)0, (void*)0, 0, 1, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(string_operator_equals(((char* )come_null_checker(current, "06type.nc", 1054)),"")) {
        __result_obj__0 = (char* )come_increment_ref_count(attribute);
        (current = come_decrement_ref_count(current, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value2=string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(current, "06type.nc", 1057))," "))), "06type.nc", 1057)),attribute))));
    (current = come_decrement_ref_count(current, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
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
    char* p_27;
    int sline_28;
    char*  word_29  ;
    _Bool lambda_;
    char* p_30;
    int sline_31;
    char*  word_32  ;
    char*  __dec_obj50  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  result_type2  ;
    struct sNode* node;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var2
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj51  ;
    struct list$1sType$ph* __dec_obj52;
    struct list$1char$ph* __dec_obj53;
    struct sType*  __dec_obj54  ;
    char*  __dec_obj55  ;
    char*  __dec_obj56  ;
    _Bool no_comma;
    struct sNode* node_33;
    struct sNode* __dec_obj57;
    char* p_34;
    int sline_35;
    char*  word_36  ;
    struct sNode* node_37;
    char*  attribute  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(base_type_name));
    if(!first) {
        if(((struct sType* )come_null_checker(result_type, "06type.nc", 1066))->mTypedefOriginalType) {
            ((struct sType* )come_null_checker(result_type, "06type.nc", 1067))->mPointerNum=((struct sType* )come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 1067))->mTypedefOriginalType, "06type.nc", 1067))->mPointerNum;
        }
    }
    var_name=((void*)0);
    {
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 1073))->p;
        sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1074))->sline;
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1076))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1076))->p==95) {
            word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"const")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"__restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"volatile")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1079)),"_Addr")) {
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1082))->p=p;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1083))->sline=sline;
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1087))->p=p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1088))->sline=sline;
        }
    }
    between_brace=(_Bool)0;
    {
        p_27=((struct sInfo* )come_null_checker(info, "06type.nc", 1094))->p;
        sline_28=((struct sInfo* )come_null_checker(info, "06type.nc", 1095))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1097))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1098))->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1101))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1101))->p==95) {
                word_29=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_29,info)) {
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1106))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1107))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1110))->p!=40) {
                        between_brace=(_Bool)1;
                    }
                }
                (word_29 = come_decrement_ref_count(word_29, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1117))->p=p_27;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1118))->sline=sline_28;
    }
    lambda_=(_Bool)0;
    {
        p_30=((struct sInfo* )come_null_checker(info, "06type.nc", 1122))->p;
        sline_31=((struct sInfo* )come_null_checker(info, "06type.nc", 1123))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1125))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1126))->p++;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1129))->p==42) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1130))->p++;
                skip_spaces_and_lf(info);
                if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1133))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1133))->p==95) {
                    word_32=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                    if(is_type_name(word_32,info)) {
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1138))->p==91) {
                        lambda_=(_Bool)1;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1141))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 1142))->p++;
                        skip_spaces_and_lf(info);
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1145))->p==40) {
                            lambda_=(_Bool)1;
                        }
                    }
                    (word_32 = come_decrement_ref_count(word_32, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1153))->p=p_30;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1154))->sline=sline_31;
    }
    skip_spaces_and_lf(info);
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 1158))->p==42) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1159))->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        ((struct sType* )come_null_checker(result_type, "06type.nc", 1164))->mPointerNum++;
    }
    skip_spaces_and_lf(info);
    if(between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1168))->p==40) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1169))->p++;
        skip_spaces_and_lf(info);
    }
    if(lambda_) {
        expected_next_character(40,info);
        expected_next_character(42,info);
        __dec_obj50=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0);
        result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1179, "struct sType* "))), "06type.nc", 1179))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1181))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1182))->p++;
            skip_spaces_and_lf(info);
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type2, "06type.nc", 1187))->mArrayNum, "06type.nc", 1187)),(struct sNode*)come_increment_ref_count(node));
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
        __dec_obj51=((struct sType* )come_null_checker(result_type2, "06type.nc", 1196))->mResultType,
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 1196))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type));
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj52=((struct sType* )come_null_checker(result_type2, "06type.nc", 1197))->mParamTypes,
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 1197))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj53=((struct sType* )come_null_checker(result_type2, "06type.nc", 1198))->mParamNames,
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 1198))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(result_type2, "06type.nc", 1199))->mVarArgs=var_args;
        __dec_obj54=result_type,
        result_type=(struct sType* )come_increment_ref_count(result_type2);
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 1203))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1203))->p==95) {
        __dec_obj55=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __dec_obj56=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1212))->p==41) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1213))->p++;
        skip_spaces_and_lf(info);
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1217))->p==58) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1218))->p++;
        skip_spaces_and_lf(info);
        no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 1221))->no_comma;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1222))->no_comma=(_Bool)1;
        node_33=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1224))->no_comma=no_comma;
        __dec_obj57=((struct sType* )come_null_checker(result_type, "06type.nc", 1226))->mSizeNum,
        ((struct sType* )come_null_checker(result_type, "06type.nc", 1226))->mSizeNum=(struct sNode*)come_increment_ref_count(node_33);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0, (void*)0) :0);
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 1229))->p==91) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1230))->p++;
        skip_spaces_and_lf(info);
        {
            p_34=((struct sInfo* )come_null_checker(info, "06type.nc", 1234))->p;
            sline_35=((struct sInfo* )come_null_checker(info, "06type.nc", 1235))->sline;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1237))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1237))->p==95) {
                word_36=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"const")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"__restrict")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"restrict")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"__user")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"volatile")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"__user")||string_operator_equals(((char* )come_null_checker(word_36, "06type.nc", 1240)),"_Addr")) {
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1243))->p=p_34;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1244))->sline=sline_35;
                }
                (word_36 = come_decrement_ref_count(word_36, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1248))->p=p_34;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1249))->sline=sline_35;
            }
        }
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1253))->p==93) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1254))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(result_type, "06type.nc", 1257))->mArrayPointerType=(_Bool)1;
            break;
        }
        skip_spaces_and_lf(info);
        node_37=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 1264))->mArrayNum, "06type.nc", 1264)),(struct sNode*)come_increment_ref_count(node_37));
        expected_next_character(93,info);
        ((node_37) ? node_37 = come_decrement_ref_count(node_37, ((struct sNode*)node_37)->finalize, ((struct sNode*)node_37)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
    append_attribute_to_type(result_type,(char* )come_increment_ref_count(attribute),(_Bool)1,info);
    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "06type.nc", 1274, "struct tuple2$2sType$phchar$ph")),(struct sType* )come_increment_ref_count(result_type),(char* )come_increment_ref_count(var_name)))));
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
    struct sNode* __dec_obj58;
    struct list_item$1sNode$ph* litem_38;
    struct sNode* __dec_obj59;
    struct list_item$1sNode$ph* litem_39;
    struct sNode* __dec_obj60;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1771, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        __dec_obj58=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_38=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1781, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj59=((struct list_item$1sNode$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_38, "/usr/local/include/neo-c.h", 1785))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_38;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_38;
    }
    else {
        litem_39=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1791, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj60=((struct list_item$1sNode$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_39, "/usr/local/include/neo-c.h", 1795))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_39;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_39;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj61  ;
    char*  __dec_obj62  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    __dec_obj61=((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1,
    ((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1=(struct sType* )come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj62=((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2,
    ((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2=(char* )come_increment_ref_count(v2);
    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0);
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
    if(self!=((void*)0)&&((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 2))->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, ((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 2))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 3))->v2!=((void*)0)) {
        (((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 3))->v2 = come_decrement_ref_count(((struct tuple2$2sType$phchar$ph*)come_null_checker(self, "tuple2$2sType$phchar$ph$p_finalize", 3))->v2, (void*)0, (void*)0, 0, 0, (void*)0));
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
    p=((struct sInfo* )come_null_checker(info, "06type.nc", 1279))->p;
    sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1280))->sline;
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1282))->p==91&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 1282))->p+1)==91) {
        (void)((char* )(__right_value0=parse_square_attribute(info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1287))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1287))->p==95) {
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        if((string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1290)),"__attribute")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1290)),"__attribute__"))&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1290))->p==40) {
            nest=0;
            while(1) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1293))->p==40) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1294))->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1298))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1299))->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1307))->p==0) {
                    break;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1311))->p++;
                }
            }
            __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1317)),"__declspec")&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1317))->p==40) {
            skip_paren(info);
            __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"const")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"__restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"volatile")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"__nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"_Addr")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"__noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"_noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1321)),"_Noreturn")) {
            __result_obj__0 = (_Bool)1;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1325))->p=p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1326))->sline=sline;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1330))->p=p;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1331))->sline=sline;
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1339, "struct buffer* "))), "06type.nc", 1339)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1342))->p==91&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 1342))->p+1)==91) {
            (void)((char* )(__right_value0=parse_square_attribute(info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            continue;
        }
        if(!(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1347))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1347))->p==95)) {
            break;
        }
        p=((struct sInfo* )come_null_checker(info, "06type.nc", 1351))->p;
        sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1352))->sline;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        if((string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1356)),"__attribute")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1356)),"__attribute__"))&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1356))->p==40) {
            nest=0;
            while(1) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1359))->p==40) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1360))->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1364))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1365))->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1373))->p==0) {
                    break;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1377))->p++;
                }
            }
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            continue;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1382)),"__declspec")&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1382))->p==40) {
            skip_paren(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            continue;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1386)),"const")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1386)),"volatile")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1386)),"__volatile__")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1386)),"restrict")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1386)),"__restrict")) {
            if(buffer_length(((struct buffer* )come_null_checker(result, "06type.nc", 1387)))>0) {
                buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1388))," ");
            }
            buffer_append_str(((struct buffer* )come_null_checker(result, "06type.nc", 1390)),word);
            skip_spaces_and_lf(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            continue;
        }
        else if(string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"__user")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"_Nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"_Nullable")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"__nonnull")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"_Null_unspecified")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"_Addr")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"__noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"_noreturn")||string_operator_equals(((char* )come_null_checker(word, "06type.nc", 1394)),"_Noreturn")) {
            skip_spaces_and_lf(info);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            continue;
        }
        else {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1399))->p=p;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1400))->sline=sline;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
        }
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "06type.nc", 1405))))));
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
    no_output_come_code=((struct sInfo* )come_null_checker(info, "06type.nc", 1410))->no_output_come_code;
    ((struct sInfo* )come_null_checker(info, "06type.nc", 1411))->no_output_come_code=(_Bool)1;
    multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1);
    name=(char* )come_increment_ref_count(multiple_assign_var3->v2);
    err=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sInfo* )come_null_checker(info, "06type.nc", 1413))->no_output_come_code=no_output_come_code;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 1415, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(type),(char* )come_increment_ref_count(name),err))));
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
    struct sType*  __dec_obj63  ;
    char*  __dec_obj64  ;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    __dec_obj63=((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3652))->v1,
    ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3652))->v1=(struct sType* )come_increment_ref_count(v1);
    come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj64=((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3653))->v2,
    ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3653))->v2=(char* )come_increment_ref_count(v2);
    __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct tuple3$3sType$phchar$ph_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3654))->v3=v3;
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
        head=((struct sInfo* )come_null_checker(info, "06type.nc", 1427))->p;
        head_sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1428))->sline;
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1432))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1432))->p==95) {
            declare_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            if(string_operator_equals(((char* )come_null_checker(declare_name, "06type.nc", 1435)),"struct")) {
                struct_=(_Bool)1;
            }
            else if(string_operator_equals(((char* )come_null_checker(declare_name, "06type.nc", 1438)),"union")) {
                union_=(_Bool)1;
            }
            else if(string_operator_equals(((char* )come_null_checker(declare_name, "06type.nc", 1441)),"enum")) {
                enum_=(_Bool)1;
            }
            else {
                __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)(__right_value1=tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_calloc(1, sizeof(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$)*(1), "06type.nc", 1445, "struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$")),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
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
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1450))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1450))->p==95) {
            struct_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            (struct_name = come_decrement_ref_count(struct_name, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            anonymous_name=(_Bool)1;
        }
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1459))->p==60) {
            nest=0;
            while((_Bool)1) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1462))->p==60) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1463))->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1467))->p==62) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1468))->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1476))->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(1);
                }
                else {
                    *((struct sInfo* )come_null_checker(info, "06type.nc", 1481))->p++;
                    skip_spaces_and_lf(info);
                }
            }
        }
        ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
        come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1489))->p==123) {
            ((char* )(__right_value0=skip_block(info,(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1494))->p==59) {
                define_only=(_Bool)1;
            }
            else {
                define_only=(_Bool)0;
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1502))->p=head;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1503))->sline=head_sline;
    }
    __result_obj__0 = (struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count(((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)(__right_value1=tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_increment_ref_count((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_calloc(1, sizeof(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$)*(1), "06type.nc", 1506, "struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$")),define_only,anonymous_name,struct_,union_,enum_))));
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self, _Bool v1, _Bool v2, _Bool v3, _Bool v4, _Bool v5)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$_initialize"; neo_current_frame = &fr;
    struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* __result_obj__0;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3802))->v1=v1;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3803))->v2=v2;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3804))->v3=v3;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3805))->v4=v4;
    ((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)come_null_checker(self, "/usr/local/include/neo-c.h", 3806))->v5=v5;
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
    struct sType*  tmp_  ;
    void* __right_value0 = (void*)0;
    char*  pointer_attr  ;
    char*  __dec_obj65  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj66  ;
    struct sType*  generics_type  ;
    struct sType*  type_40  ;
    struct sType*  type2  ;
    struct sType*  __dec_obj67  ;
    struct sType*  __result_obj__0  ;
    struct sType*  generics_type_41  ;
    struct sType*  type_42  ;
    struct sType*  type2_43  ;
    struct sType*  __dec_obj68  ;
    struct sType*  generics_type_44  ;
    struct sType*  type_45  ;
    struct sType*  type2_46  ;
    struct sType*  __dec_obj69  ;
    char* p;
    int sline;
    char*  pointer_attr_47  ;
    char*  __dec_obj70  ;
    char*  __dec_obj71  ;
    tmp_=((void*)0);
    while(1) {
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1513))->p==42) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1514))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1517))->mPointerNum++;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1518))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1519))->mNoSolvedGenericsType, "06type.nc", 1519))->mPointerNum++;
            }
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(string_operator_not_equals(((char* )come_null_checker(pointer_attr, "06type.nc", 1522)),"")) {
                if(((struct sType* )come_null_checker(type, "06type.nc", 1523))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1523))->mPointerAttribute, "06type.nc", 1523)),"")) {
                    __dec_obj65=((struct sType* )come_null_checker(type, "06type.nc", 1524))->mPointerAttribute,
                    ((struct sType* )come_null_checker(type, "06type.nc", 1524))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attr);
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj66=((struct sType* )come_null_checker(type, "06type.nc", 1527))->mPointerAttribute,
                    ((struct sType* )come_null_checker(type, "06type.nc", 1527))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1527))->mPointerAttribute, "06type.nc", 1527))," "))), "06type.nc", 1527)),pointer_attr));
                    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1531))->p==37) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1532))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1535))->mHeap=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1536))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1537))->mNoSolvedGenericsType, "06type.nc", 1537))->mHeap=(_Bool)1;
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1540))->p==64) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1541))->p++;
            while(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 1542))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1542))->p==95) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1543))->p++;
            }
            skip_spaces_and_lf(info);
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1547))->p==94) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1548))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1551))->mNoHeap=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1553))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1554))->mNoSolvedGenericsType, "06type.nc", 1554))->mNoHeap=(_Bool)0;
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1557))->p==93) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1558))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1561))->mMinusPointerNum++;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1563))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1564))->mNoSolvedGenericsType, "06type.nc", 1564))->mMinusPointerNum++;
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1567))->p==38) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1568))->p++;
            skip_spaces_and_lf(info);
            generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1571, "struct sType* "))), "06type.nc", 1571))),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type, "06type.nc", 1572))->mGenericsTypes, "06type.nc", 1572)),(struct sType* )come_increment_ref_count(sType_clone(type)));
            if(is_contained_generics_class(generics_type,info)) {
                ((struct sType* )come_null_checker(type, "06type.nc", 1575))->mRefference=(_Bool)1;
            }
            else {
                type_40=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1578, "struct sType* "))), "06type.nc", 1578))),(char*)come_increment_ref_count(xsprintf("ref")),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_40, "06type.nc", 1579))->mGenericsTypes, "06type.nc", 1579)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1579, "struct sType* "))), "06type.nc", 1579))),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((struct sType* )come_null_checker(type_40, "06type.nc", 1580))->mPointerNum++;
                ((struct sType* )come_null_checker(type_40, "06type.nc", 1581))->mHeap=(_Bool)1;
                type2=(struct sType* )come_increment_ref_count(solve_generics(type_40,generics_type,info));
                ((struct sType* )come_null_checker(type2, "06type.nc", 1585))->mRefference=(_Bool)1;
                __dec_obj67=tmp_,
                tmp_=(struct sType* )come_increment_ref_count(sType_clone(type2));
                come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1590))->p==63) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1591))->p++;
            skip_spaces_and_lf(info);
            if(tmp_) {
                err_msg(info,"invalid type name");
                __result_obj__0 = (struct sType* )come_increment_ref_count(type);
                come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            generics_type_41=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1599, "struct sType* "))), "06type.nc", 1599))),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type_41, "06type.nc", 1600))->mGenericsTypes, "06type.nc", 1600)),(struct sType* )come_increment_ref_count(sType_clone(type)));
            if(is_contained_generics_class(generics_type_41,info)) {
                ((struct sType* )come_null_checker(type, "06type.nc", 1603))->mOptional=(_Bool)1;
            }
            else {
                type_42=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1606, "struct sType* "))), "06type.nc", 1606))),(char*)come_increment_ref_count(xsprintf("optional")),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_42, "06type.nc", 1607))->mGenericsTypes, "06type.nc", 1607)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1607, "struct sType* "))), "06type.nc", 1607))),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((struct sType* )come_null_checker(type_42, "06type.nc", 1608))->mPointerNum++;
                ((struct sType* )come_null_checker(type_42, "06type.nc", 1609))->mHeap=(_Bool)1;
                type2_43=(struct sType* )come_increment_ref_count(solve_generics(type_42,generics_type_41,info));
                ((struct sType* )come_null_checker(type2_43, "06type.nc", 1613))->mOptional=(_Bool)1;
                __dec_obj68=tmp_,
                tmp_=(struct sType* )come_increment_ref_count(sType_clone(type2_43));
                come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2_43, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(sType_finalize, generics_type_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 1618))->p,"{}",2)==0) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1619))->p+=2;
            skip_spaces_and_lf(info);
            if(tmp_) {
                err_msg(info,"invalid type name");
                __result_obj__0 = (struct sType* )come_increment_ref_count(type);
                come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            generics_type_44=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1627, "struct sType* "))), "06type.nc", 1627))),(char*)come_increment_ref_count(xsprintf("span")),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(generics_type_44, "06type.nc", 1628))->mGenericsTypes, "06type.nc", 1628)),(struct sType* )come_increment_ref_count(sType_clone(type)));
            if(is_contained_generics_class(generics_type_44,info)) {
                ((struct sType* )come_null_checker(type, "06type.nc", 1631))->mOptional=(_Bool)1;
            }
            else {
                type_45=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1634, "struct sType* "))), "06type.nc", 1634))),(char*)come_increment_ref_count(xsprintf("span")),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                list$1sType$ph_add(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_45, "06type.nc", 1635))->mGenericsTypes, "06type.nc", 1635)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 1635, "struct sType* "))), "06type.nc", 1635))),(char*)come_increment_ref_count(xsprintf("__generics_type0")),(_Bool)0,info,(_Bool)0,0)));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((struct sType* )come_null_checker(type_45, "06type.nc", 1636))->mPointerNum++;
                ((struct sType* )come_null_checker(type_45, "06type.nc", 1637))->mHeap=(_Bool)1;
                type2_46=(struct sType* )come_increment_ref_count(solve_generics(type_45,generics_type_44,info));
                ((struct sType* )come_null_checker(type2_46, "06type.nc", 1641))->mOptional=(_Bool)1;
                __dec_obj69=tmp_,
                tmp_=(struct sType* )come_increment_ref_count(sType_clone(type2_46));
                come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type2_46, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer(sType_finalize, generics_type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1646))->p==96) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1647))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1650))->mNoCallingDestructor=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1651))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1652))->mNoSolvedGenericsType, "06type.nc", 1652))->mNoCallingDestructor=(_Bool)1;
            }
        }
        else if(gComePthread&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1655))->p==124) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1656))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1659))->mChannel=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1660))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1661))->mNoSolvedGenericsType, "06type.nc", 1661))->mChannel=(_Bool)1;
            }
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1664))->p==126) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 1665))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type, "06type.nc", 1668))->mDefferRightValue=(_Bool)1;
            if(((struct sType* )come_null_checker(type, "06type.nc", 1669))->mNoSolvedGenericsType) {
                ((struct sType* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1670))->mNoSolvedGenericsType, "06type.nc", 1670))->mDefferRightValue=(_Bool)1;
            }
        }
        else if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 1673))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1673))->p==95) {
            p=((struct sInfo* )come_null_checker(info, "06type.nc", 1674))->p;
            sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1675))->sline;
            pointer_attr_47=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(((struct sInfo* )come_null_checker(info, "06type.nc", 1677))->p!=p) {
                if(string_operator_not_equals(((char* )come_null_checker(pointer_attr_47, "06type.nc", 1678)),"")) {
                    if(((struct sType* )come_null_checker(type, "06type.nc", 1679))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1679))->mPointerAttribute, "06type.nc", 1679)),"")) {
                        __dec_obj70=((struct sType* )come_null_checker(type, "06type.nc", 1680))->mPointerAttribute,
                        ((struct sType* )come_null_checker(type, "06type.nc", 1680))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attr_47);
                        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
                    }
                    else {
                        __dec_obj71=((struct sType* )come_null_checker(type, "06type.nc", 1683))->mPointerAttribute,
                        ((struct sType* )come_null_checker(type, "06type.nc", 1683))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1683))->mPointerAttribute, "06type.nc", 1683))," "))), "06type.nc", 1683)),pointer_attr_47));
                        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                    }
                }
            }
            else {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1688))->p=p;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1689))->sline=sline;
                (pointer_attr_47 = come_decrement_ref_count(pointer_attr_47, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
            }
            (pointer_attr_47 = come_decrement_ref_count(pointer_attr_47, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    if(tmp_) {
        __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType* )(__right_value0=sType_clone(tmp_))));
        come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = (struct sType* )come_increment_ref_count(((struct sType* )(__right_value0=sType_clone(type))));
    come_call_finalizer(sType_finalize, tmp_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool for_variable, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_attribute_to_type"; neo_current_frame = &fr;
    char*  __dec_obj72  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj73  ;
    char*  __dec_obj74  ;
    char*  __dec_obj75  ;
    if(attribute==((void*)0)||string_operator_equals(((char* )come_null_checker(attribute, "06type.nc", 1707)),"")) {
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    if(for_variable&&!((struct sInfo* )come_null_checker(info, "06type.nc", 1711))->in_typedef) {
        if(((struct sType* )come_null_checker(type, "06type.nc", 1712))->mVarAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1712))->mVarAttribute, "06type.nc", 1712)),"")) {
            __dec_obj72=((struct sType* )come_null_checker(type, "06type.nc", 1713))->mVarAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1713))->mVarAttribute=(char* )come_increment_ref_count(attribute);
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj73=((struct sType* )come_null_checker(type, "06type.nc", 1716))->mVarAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1716))->mVarAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1716))->mVarAttribute, "06type.nc", 1716))," "))), "06type.nc", 1716)),attribute));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    else {
        if(((struct sType* )come_null_checker(type, "06type.nc", 1720))->mAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1720))->mAttribute, "06type.nc", 1720)),"")) {
            __dec_obj74=((struct sType* )come_null_checker(type, "06type.nc", 1721))->mAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1721))->mAttribute=(char* )come_increment_ref_count(attribute);
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj75=((struct sType* )come_null_checker(type, "06type.nc", 1724))->mAttribute,
            ((struct sType* )come_null_checker(type, "06type.nc", 1724))->mAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1724))->mAttribute, "06type.nc", 1724))," "))), "06type.nc", 1724)),attribute));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
    }
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

void apply_type_qualifiers(struct sType*  type  , _Bool constant, _Bool complex_, _Bool atomic_, _Bool thread_local, _Bool thread_, _Bool alignas_double, _Bool register_, _Bool unsigned_, _Bool noreturn_, _Bool volatile_, _Bool uniq_, _Bool static_, _Bool extern_, _Bool inline_, _Bool restrict_, _Bool long_long, _Bool long_, _Bool short_, _Bool norecord)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "apply_type_qualifiers"; neo_current_frame = &fr;
    ((struct sType* )come_null_checker(type, "06type.nc", 1751))->mConstant=((struct sType* )come_null_checker(type, "06type.nc", 1751))->mConstant||constant;
    ((struct sType* )come_null_checker(type, "06type.nc", 1752))->mComplex=((struct sType* )come_null_checker(type, "06type.nc", 1752))->mComplex||complex_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1753))->mAtomic=((struct sType* )come_null_checker(type, "06type.nc", 1753))->mAtomic||atomic_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1754))->mThreadLocal=((struct sType* )come_null_checker(type, "06type.nc", 1754))->mThreadLocal||thread_local;
    ((struct sType* )come_null_checker(type, "06type.nc", 1755))->mThread=((struct sType* )come_null_checker(type, "06type.nc", 1755))->mThread||thread_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1756))->mAlignasDouble=alignas_double;
    ((struct sType* )come_null_checker(type, "06type.nc", 1757))->mRegister=register_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1758))->mUnsigned=((struct sType* )come_null_checker(type, "06type.nc", 1758))->mUnsigned||unsigned_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1759))->mNoreturn=((struct sType* )come_null_checker(type, "06type.nc", 1759))->mNoreturn||noreturn_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1760))->mVolatile=volatile_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1761))->mUniq=((struct sType* )come_null_checker(type, "06type.nc", 1761))->mUniq||uniq_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1762))->mStatic=(((struct sType* )come_null_checker(type, "06type.nc", 1762))->mStatic||static_)&&!((struct sType* )come_null_checker(type, "06type.nc", 1762))->mUniq;
    ((struct sType* )come_null_checker(type, "06type.nc", 1763))->mExtern=((struct sType* )come_null_checker(type, "06type.nc", 1763))->mExtern||extern_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1764))->mInline=((struct sType* )come_null_checker(type, "06type.nc", 1764))->mInline||inline_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1765))->mRestrict=((struct sType* )come_null_checker(type, "06type.nc", 1765))->mRestrict||restrict_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1766))->mLongLong=((struct sType* )come_null_checker(type, "06type.nc", 1766))->mLongLong||long_long;
    ((struct sType* )come_null_checker(type, "06type.nc", 1767))->mLong=((struct sType* )come_null_checker(type, "06type.nc", 1767))->mLong||long_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1768))->mShort=((struct sType* )come_null_checker(type, "06type.nc", 1768))->mShort||short_;
    ((struct sType* )come_null_checker(type, "06type.nc", 1769))->mNorecord=((struct sType* )come_null_checker(type, "06type.nc", 1769))->mNorecord||norecord;
    neo_current_frame = fr.prev;
}

void merge_pointer_attribute_to_type(struct sType*  type  , char*  pointer_attribute  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "merge_pointer_attribute_to_type"; neo_current_frame = &fr;
    char*  __dec_obj76  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj77  ;
    if(string_operator_equals(((char* )come_null_checker(pointer_attribute, "06type.nc", 1774)),"")) {
        (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    if(((struct sType* )come_null_checker(type, "06type.nc", 1778))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1778))->mPointerAttribute, "06type.nc", 1778)),"")) {
        __dec_obj76=((struct sType* )come_null_checker(type, "06type.nc", 1779))->mPointerAttribute,
        ((struct sType* )come_null_checker(type, "06type.nc", 1779))->mPointerAttribute=(char* )come_increment_ref_count(pointer_attribute);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj77=((struct sType* )come_null_checker(type, "06type.nc", 1782))->mPointerAttribute,
        ((struct sType* )come_null_checker(type, "06type.nc", 1782))->mPointerAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 1782))->mPointerAttribute, "06type.nc", 1782))," "))), "06type.nc", 1782)),pointer_attribute));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

char*  parse_variable_name_fun(struct sType*  type  , _Bool anonymous_name, _Bool var_name_between_brace, char*  attribute  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_variable_name_fun"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  var_name  ;
    char*  __dec_obj78  ;
    char*  __dec_obj79  ;
    char*  __dec_obj80  ;
    char*  __dec_obj81  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj82;
    char*  attribute2  ;
    char*  __result_obj__0  ;
    var_name=(char*)come_increment_ref_count(xsprintf(""));
    if(var_name_between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1789))->p==40) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1790))->p++;
        skip_spaces_and_lf(info);
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1794))->p==58) {
        __dec_obj78=var_name,
        var_name=(char* )come_increment_ref_count(__builtin_string(""));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else if(anonymous_name) {
        static int num_anonymous_var_name=0;
        num_anonymous_var_name++;
        __dec_obj79=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type, "06type.nc", 1801))->mAnonymousVarName=(_Bool)1;
    }
    else if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 1803))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 1803))->p==95) {
        __dec_obj80=var_name,
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_48=0;
        num_anonymous_var_name_48++;
        __dec_obj81=var_name,
        var_name=(char* )come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_48));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type, "06type.nc", 1810))->mAnonymousVarName=(_Bool)1;
    }
    if(var_name_between_brace&&*((struct sInfo* )come_null_checker(info, "06type.nc", 1813))->p==41) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1814))->p++;
        skip_spaces_and_lf(info);
    }
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1818))->p==58) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1819))->p++;
        skip_spaces_and_lf(info);
        no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 1822))->no_comma;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1823))->no_comma=(_Bool)1;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "06type.nc", 1825))->no_comma=no_comma;
        __dec_obj82=((struct sType* )come_null_checker(type, "06type.nc", 1827))->mSizeNum,
        ((struct sType* )come_null_checker(type, "06type.nc", 1827))->mSizeNum=(struct sNode*)come_increment_ref_count(node);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0) :0);
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
    char*  attribute_before  ;
    char*  type_name  ;
    _Bool norecord;
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
    struct sNode* alignas_;
    _Bool alignas_double;
    char*  tag_attribute  ;
    _Bool struct_define_parsed;
    _Bool anonymous_type;
    _Bool anonymous_name;
    _Bool atomic_;
    _Bool thread_local;
    _Bool thread_;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj83  ;
    char*  __dec_obj84  ;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    struct buffer*  attr  ;
    char* p;
    char* tail;
    char*  attr_str  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  attr_49  ;
    char*  __dec_obj92  ;
    char*  __dec_obj93  ;
    char*  __dec_obj94  ;
    char*  __dec_obj95  ;
    char*  __dec_obj96  ;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    struct sNode* __dec_obj99;
    char*  __dec_obj100  ;
    char*  __dec_obj101  ;
    char*  __dec_obj102  ;
    char*  __dec_obj103  ;
    char*  __dec_obj104  ;
    char*  __dec_obj105  ;
    char*  __dec_obj106  ;
    char*  __dec_obj107  ;
    char*  __dec_obj108  ;
    char* p_50;
    int sline;
    char*  __dec_obj109  ;
    char*  __dec_obj110  ;
    char*  __dec_obj111  ;
    char*  struct_attribute_after_name  ;
    char*  __dec_obj112  ;
    char* p_51;
    int sline_52;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    char*  struct_attribute_after_generics  ;
    char*  __dec_obj113  ;
    char* p_53;
    int sline_54;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj114  ;
    char* p_55;
    int sline_56;
    char*  __dec_obj115  ;
    char*  __dec_obj116  ;
    char*  __dec_obj117  ;
    char* p_57;
    int sline_58;
    struct tuple2$2char$phchar$ph* multiple_assign_var4
;    char*  asm_name  =0;
    char*  enum_attribute  =0;
    char*  __dec_obj118  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char* p_59;
    int sline_60;
    char*  __dec_obj119  ;
    char*  __dec_obj120  ;
    char*  enum_attribute_after_name  ;
    char*  __dec_obj121  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType*  type_61  =0;
    char*  name_62  =0;
    _Bool err_63=0;
    char*  enum_attribute_after_type  ;
    char*  __dec_obj122  ;
    char* p_64;
    int sline_65;
    char* p_66;
    int sline_67;
    char*  __dec_obj123  ;
    char* p2;
    int sline2;
    char*  __dec_obj124  ;
    char*  __dec_obj125  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    char*  __dec_obj130  ;
    char* p_68;
    int sline_69;
    char*  __dec_obj131  ;
    char*  __dec_obj132  ;
    char*  __dec_obj133  ;
    char* p_70;
    int sline_71;
    char*  __dec_obj134  ;
    char* p_72;
    int sline_73;
    char*  __dec_obj135  ;
    char*  __dec_obj136  ;
    char*  __dec_obj137  ;
    char* p_74;
    int sline_75;
    char*  __dec_obj138  ;
    char*  __dec_obj139  ;
    char*  __dec_obj140  ;
    char*  __dec_obj141  ;
    char*  __dec_obj142  ;
    char* p_76;
    int sline_77;
    char*  __dec_obj143  ;
    char*  __dec_obj144  ;
    char*  __dec_obj145  ;
    char*  __dec_obj146  ;
    char*  __dec_obj147  ;
    char*  __dec_obj148  ;
    char*  __dec_obj149  ;
    char* p_78;
    int sline_79;
    char*  __dec_obj150  ;
    char*  __dec_obj151  ;
    char*  __dec_obj152  ;
    _Bool no_comma;
    struct sNode* exp;
    struct sType*  type_80  ;
    struct sNode* __dec_obj153;
    char*  var_name  ;
    struct sType*  __dec_obj154  ;
    char*  attribute  ;
    char*  __dec_obj155  ;
    char*  attribute_81  ;
    char*  __dec_obj156  ;
    char*  __dec_obj157  ;
    char*  __dec_obj158  ;
    char*  __dec_obj159  ;
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
    char*  __dec_obj160  ;
    char*  __dec_obj161  ;
    char*  tuple_name  ;
    char*  __dec_obj162  ;
    _Bool lambda_flag;
    char* pX;
    int slineX;
    struct sType*  type_82  ;
    char*  var_name_83  ;
    _Bool function_pointer_flag;
    _Bool pointer_to_array_flag;
    char* p_84;
    int sline_85;
    char*  word  ;
    char*  __dec_obj163  ;
    _Bool no_output_come_code;
    struct sNode* exp_86;
    char*  word_87  ;
    _Bool var_name_between_brace;
    char* p_88;
    int sline_89;
    char*  word_90  ;
    _Bool anonymous;
    char*  __dec_obj164  ;
    struct sNode* node_91;
    _Bool Value_92;
    int pointer_num_93;
    struct sType*  __dec_obj165  ;
    struct sType*  __dec_obj166  ;
    struct sClass*  klass  ;
    char*  __dec_obj167  ;
    char*  __dec_obj168  ;
    char*  __dec_obj169  ;
    struct sNode* node_94;
    _Bool Value_95;
    struct sType*  __dec_obj170  ;
    struct sType*  __dec_obj171  ;
    _Bool anonymous_96;
    char*  __dec_obj172  ;
    struct sNode* node_97;
    _Bool Value_98;
    int pointer_num_99;
    struct sType*  __dec_obj173  ;
    struct sType*  __dec_obj174  ;
    struct sClass*  klass_100  ;
    char*  __dec_obj175  ;
    char*  attribute_101  ;
    char*  __dec_obj176  ;
    struct sType*  result_type  ;
    _Bool _conditional_value_X0;
    struct sType*  __dec_obj177  ;
    int i;
    _Bool _conditional_value_X1;
    struct sType*  __dec_obj178  ;
    int i_104;
    _Bool _conditional_value_X2;
    struct sType*  __dec_obj179  ;
    struct sType*  __dec_obj180  ;
    struct sType*  __dec_obj181  ;
    struct sNode* __dec_obj182;
    char*  __dec_obj183  ;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var7
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj184  ;
    struct sType*  __dec_obj185  ;
    struct list$1sType$ph* __dec_obj186;
    struct list$1char$ph* __dec_obj187;
    _Bool pointer_paren;
    int paren_num;
    int array_pointer_num;
    struct sType*  __dec_obj188  ;
    struct sType*  __dec_obj189  ;
    struct sNode* __dec_obj190;
    char*  __dec_obj191  ;
    char*  __dec_obj192  ;
    char*  __dec_obj193  ;
    struct list$1sNode$ph* array;
    struct sNode* node_105;
    struct list$1sNode$ph* __dec_obj194;
    struct __current_stack1__ __current_stack1__;
    struct sNode* node_106;
    char*  function_pointer_attribute  ;
    int function_pointer_num;
    char*  pointer_attr_107  ;
    char*  __dec_obj195  ;
    char*  __dec_obj196  ;
    char*  pointer_attr2  ;
    char*  __dec_obj197  ;
    char*  __dec_obj198  ;
    struct sType*  result_type_108  ;
    _Bool _conditional_value_X3;
    struct sType*  __dec_obj199  ;
    int i_109;
    _Bool _conditional_value_X4;
    struct sType*  __dec_obj200  ;
    int i_110;
    _Bool _conditional_value_X5;
    struct sType*  __dec_obj201  ;
    struct sType*  __dec_obj202  ;
    struct sType*  __dec_obj203  ;
    struct sNode* __dec_obj204;
    int paren_flag;
    int array_pointer;
    char*  __dec_obj205  ;
    char*  __dec_obj206  ;
    struct sType*  __dec_obj207  ;
    struct sNode* node_111;
    struct sNode* node_112;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var8
;    struct list$1sType$ph* param_types_113=0;
    struct list$1char$ph* param_names_114=0;
    struct list$1char$ph* param_default_parametors_115=0;
    _Bool var_args_116=0;
    struct sType*  __dec_obj208  ;
    struct list$1sType$ph* __dec_obj209;
    struct list$1char$ph* __dec_obj210;
    char*  __dec_obj211  ;
    _Bool _conditional_value_X6;
    struct sType*  __dec_obj212  ;
    struct buffer*  t  ;
    struct sType*  type_  ;
    char*  __dec_obj213  ;
    struct sType*  __dec_obj214  ;
    char*  __dec_obj215  ;
    char*  __dec_obj216  ;
    struct sNode* __dec_obj217;
    char*  __dec_obj218  ;
    struct sType*  __dec_obj219  ;
    int i_117;
    _Bool _conditional_value_X7;
    struct sType*  __dec_obj220  ;
    struct sNode* __dec_obj221;
    char*  __dec_obj222  ;
    struct sType*  __dec_obj223  ;
    int i_118;
    _Bool _conditional_value_X8;
    struct sType*  __dec_obj224  ;
    struct sNode* __dec_obj225;
    char*  __dec_obj226  ;
    struct sType*  __dec_obj227  ;
    _Bool _conditional_value_X9;
    struct sType*  __dec_obj228  ;
    struct sType*  __dec_obj229  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  generics_type  =0;
    char*  var_name_119  =0;
    _Bool err_120=0;
    struct sType*  __dec_obj230  ;
    char*  new_name  ;
    struct sNode* __dec_obj231;
    char*  __dec_obj232  ;
    char*  __dec_obj233  ;
    struct sType*  __dec_obj234  ;
    struct sClass*  klass_121  ;
    void* __right_value3 = (void*)0;
    struct sClass*  klass_131  ;
    struct sType*  __dec_obj235  ;
    struct sType*  __dec_obj236  ;
    struct sNode* __dec_obj237;
    char*  __dec_obj238  ;
    struct sType*  __dec_obj239  ;
    struct list$1sType$ph* types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  type2  =0;
    char*  name_132  =0;
    _Bool err_133=0;
    int num_tuples;
    struct sType*  __dec_obj240  ;
    struct list$1sType$ph* o2_saved;
    struct sType*  it  ;
    struct sType*  __dec_obj241  ;
    struct sType*  __dec_obj242  ;
    char*  new_name_134  ;
    char*  __dec_obj243  ;
    char*  attribute_135  ;
    char*  __dec_obj244  ;
    char*  __dec_obj245  ;
    char*  __dec_obj246  ;
    char*  __dec_obj247  ;
    struct list$1sNode$ph* array_num_typedef;
    struct list$1sNode$ph* __dec_obj248;
    _Bool array_static;
    _Bool array_restrict;
    struct sNode* node_136;
    struct __current_stack2__ __current_stack2__;
    struct __current_stack3__ __current_stack3__;
    struct tuple2$2char$phchar$ph* multiple_assign_var11
;    char*  asm_name_139  =0;
    char*  attribute2  =0;
    char*  __dec_obj249  ;
    struct sType*  type_before  ;
    struct sType*  __dec_obj250  ;
    struct sNode* __list_values1__[1];
    struct list$1sNode$ph* __dec_obj251;
    struct sType*  __dec_obj252  ;
    char*  __dec_obj253  ;
    char*  __dec_obj254  ;
    char*  __dec_obj255  ;
    memset(&type_82, 0, sizeof(type_82));
    memset(&var_name_83, 0, sizeof(var_name_83));
    memset(&result_type, 0, sizeof(result_type));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&result_type_108, 0, sizeof(result_type_108));
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    head=((struct sInfo* )come_null_checker(info, "06type.nc", 1840))->p;
    head_sline=((struct sInfo* )come_null_checker(info, "06type.nc", 1841))->sline;
    attribute_before=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
    norecord=(_Bool)0;
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
    alignas_=((void*)0);
    alignas_double=(_Bool)0;
    tag_attribute=(char*)come_increment_ref_count(xsprintf(""));
    struct_define_parsed=(_Bool)0;
    anonymous_type=(_Bool)0;
    anonymous_name=(_Bool)0;
    atomic_=(_Bool)0;
    thread_local=(_Bool)0;
    thread_=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1881)),"__type__")) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1882))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 1883))->p++;
                skip_spaces_and_lf(info);
            }
            buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1887, "struct buffer* "))), "06type.nc", 1887)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 1888))->p) {
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1889))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1890))->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    buffer_append_char(((struct buffer* )come_null_checker(buf, "06type.nc", 1895)),*((struct sInfo* )come_null_checker(info, "06type.nc", 1895))->p);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 1896))->p++;
                }
            }
            __dec_obj83=type_name,
            type_name=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "06type.nc", 1899))));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
            type_name_=(_Bool)1;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1903)),"_Thread_local")) {
            __dec_obj84=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
            thread_local=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1907)),"_norecord")) {
            __dec_obj85=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
            norecord=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1911)),"__thread")) {
            __dec_obj86=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
            thread_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1915)),"_Atomic")) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1916))->p==40) {
                expected_next_character(40,info);
            }
            __dec_obj87=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0);
            atomic_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1922)),"__extension__")) {
            __dec_obj88=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1925)),"__attribute__")) {
            attr=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1926, "struct buffer* "))), "06type.nc", 1926)))));
            come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            buffer_append_str(((struct buffer* )come_null_checker(attr, "06type.nc", 1927)),"__attribute__");
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 1931))->p==40) {
                p=((struct sInfo* )come_null_checker(info, "06type.nc", 1932))->p;
                skip_paren(info);
                tail=((struct sInfo* )come_null_checker(info, "06type.nc", 1934))->p;
                buffer_append(((struct buffer* )come_null_checker(attr, "06type.nc", 1936)),p,tail-p);
            }
            attr_str=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(attr, "06type.nc", 1939))));
            if(string_operator_not_equals(((char* )come_null_checker(attribute_before, "06type.nc", 1940)),"")) {
                __dec_obj89=attribute_before,
                attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(attribute_before, "06type.nc", 1941))," "))), "06type.nc", 1941)),attr_str));
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                __dec_obj90=attribute_before,
                attribute_before=(char* )come_increment_ref_count(attr_str);
                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __dec_obj91=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(buffer_finalize, attr, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (attr_str = come_decrement_ref_count(attr_str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1949)),"__declspec")) {
            attr_49=(char* )come_increment_ref_count(parse_declspec_attribute(info));
            if(string_operator_not_equals(((char* )come_null_checker(attr_49, "06type.nc", 1951)),"")) {
                if(string_operator_not_equals(((char* )come_null_checker(attribute_before, "06type.nc", 1952)),"")) {
                    __dec_obj92=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(attribute_before, "06type.nc", 1953))," "))), "06type.nc", 1953)),attr_49));
                    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    __dec_obj93=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(attr_49);
                    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            __dec_obj94=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0);
            (attr_49 = come_decrement_ref_count(attr_49, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1962)),"_Noreturn")) {
            __dec_obj95=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1966)),"__noreturn")) {
            __dec_obj96=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1970)),"_Nullable")) {
            __dec_obj97=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1973)),"_noreturn")) {
            __dec_obj98=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1977)),"_Alignas")) {
            expected_next_character(40,info);
            if((((struct sInfo* )come_null_checker(info, "06type.nc", 1980))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 1980))->p)>strlen("double")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 1980))->p,"double",strlen("double"))==0) {
                (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                alignas_double=(_Bool)1;
            }
            else {
                __dec_obj99=alignas_,
                alignas_=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0) :0);
            }
            expected_next_character(41,info);
            __dec_obj100=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1993)),"const")) {
            constant=(_Bool)1;
            __dec_obj101=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 1998)),"_Complex")) {
            complex_=(_Bool)1;
            __dec_obj102=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2003)),"static")) {
            static_=(_Bool)1;
            __dec_obj103=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2008)),"uniq")) {
            uniq_=(_Bool)1;
            __dec_obj104=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2013)),"extern")) {
            extern_=(_Bool)1;
            __dec_obj105=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2018)),"inline")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2018)),"__inline")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2018)),"__inline__")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2018)),"__always_inline")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2018)),"__forceinline")) {
            inline_=(_Bool)1;
            __dec_obj106=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2024)),"volatile")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2024)),"__volatile__")) {
            volatile_=(_Bool)1;
            __dec_obj107=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2029)),"struct")) {
            struct_=(_Bool)1;
            __dec_obj108=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1))));
            __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2033))->p==123) {
                p_50=((struct sInfo* )come_null_checker(info, "06type.nc", 2034))->p;
                sline=((struct sInfo* )come_null_checker(info, "06type.nc", 2035))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2039))->p==59) {
                    anonymous_name=(_Bool)1;
                    anonymous_type=(_Bool)1;
                    __dec_obj109=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2043))->p=p_50;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2044))->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __dec_obj110=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2051))->p=p_50;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2052))->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2060))->p!=62) {
                __dec_obj111=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
                skip_spaces_and_lf(info);
                struct_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
                __dec_obj112=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(struct_attribute_after_name)));
                __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2068))->p==60) {
                    p_51=((struct sInfo* )come_null_checker(info, "06type.nc", 2069))->p;
                    sline_52=((struct sInfo* )come_null_checker(info, "06type.nc", 2070))->sline;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2072))->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2076))->p==62) {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2077))->p++;
                            skip_spaces_and_lf(info);
                            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2080))->p==123) {
                            }
                            else {
                                ((struct sInfo* )come_null_checker(info, "06type.nc", 2083))->p=p_51;
                                ((struct sInfo* )come_null_checker(info, "06type.nc", 2084))->sline=sline_52;
                            }
                            break;
                        }
                        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2088))->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2090, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                            return __result_obj__0;
                        }
                        else {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2093))->p++;
                        }
                    }
                }
                struct_attribute_after_generics=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
                __dec_obj113=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(struct_attribute_after_generics)));
                __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0);
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2101))->p==123) {
                    p_53=((struct sInfo* )come_null_checker(info, "06type.nc", 2102))->p;
                    sline_54=((struct sInfo* )come_null_checker(info, "06type.nc", 2103))->sline;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2109))->p==59) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2110))->p=head;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2111))->sline=head_sline;
                        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2112, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0));
                        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                        return __result_obj__0;
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2115))->p=p_53;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2116))->sline=sline_54;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(tag_attribute),info,(_Bool)0));
                        Value=node_compile(node,info);
                        if(!Value) {
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2121, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
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
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2129)),"union")) {
            union_=(_Bool)1;
            __dec_obj114=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1))));
            __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2133))->p==123) {
                p_55=((struct sInfo* )come_null_checker(info, "06type.nc", 2134))->p;
                sline_56=((struct sInfo* )come_null_checker(info, "06type.nc", 2135))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if((((struct sInfo* )come_null_checker(info, "06type.nc", 2139))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 2139))->p)>=strlen("__attribute__")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 2139))->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2143))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2144))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2145))->sline=head_sline;
                    anonymous_type=(_Bool)1;
                    __dec_obj115=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2148))->p=p_55;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2149))->sline=sline_56;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __dec_obj116=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2155))->p=p_55;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2156))->sline=sline_56;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj117=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2167))->p==123) {
                p_57=((struct sInfo* )come_null_checker(info, "06type.nc", 2168))->p;
                sline_58=((struct sInfo* )come_null_checker(info, "06type.nc", 2169))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2173))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2174))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2175))->sline=head_sline;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2176, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2180))->p=p_57;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2181))->sline=sline_58;
                    break;
                }
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2186)),"enum")) {
            enum_=(_Bool)1;
            skip_spaces_and_lf(info);
            multiple_assign_var4=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            asm_name=(char* )come_increment_ref_count(multiple_assign_var4->v1);
            enum_attribute=(char* )come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            __dec_obj118=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(enum_attribute)));
            __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2194))->p==58) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2195))->p++;
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
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2203))->p==123) {
                p_59=((struct sInfo* )come_null_checker(info, "06type.nc", 2204))->p;
                sline_60=((struct sInfo* )come_null_checker(info, "06type.nc", 2205))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if((((struct sInfo* )come_null_checker(info, "06type.nc", 2209))->end-((struct sInfo* )come_null_checker(info, "06type.nc", 2209))->p)>=strlen("__attribute__")&&memcmp(((struct sInfo* )come_null_checker(info, "06type.nc", 2209))->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2213))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2214))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2215))->sline=head_sline;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2216, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __dec_obj119=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string(""));
                    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2221))->p=p_59;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2222))->sline=sline_60;
                    struct_define_parsed=(_Bool)1;
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj120=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0);
            skip_spaces_and_lf(info);
            enum_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            __dec_obj121=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(enum_attribute_after_name)));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2237))->p==58) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2238))->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_61=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1);
                name_62=(char* )come_increment_ref_count(multiple_assign_var6->v2);
                err_63=multiple_assign_var6->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_62 = come_decrement_ref_count(name_62, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            skip_spaces_and_lf(info);
            enum_attribute_after_type=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1));
            __dec_obj122=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(enum_attribute_after_type)));
            __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2249))->p==123) {
                p_64=((struct sInfo* )come_null_checker(info, "06type.nc", 2250))->p;
                sline_65=((struct sInfo* )come_null_checker(info, "06type.nc", 2251))->sline;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2255))->p==59) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2256))->p=head;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2257))->sline=head_sline;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2258, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2262))->p=p_64;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2263))->sline=sline_65;
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
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2269)),"long")) {
            {
                p_66=((struct sInfo* )come_null_checker(info, "06type.nc", 2272))->p;
                sline_67=((struct sInfo* )come_null_checker(info, "06type.nc", 2273))->sline;
                if(!(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2275))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2275))->p==95)) {
                    __dec_obj123=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
                    break;
                }
                else {
                    p2=((struct sInfo* )come_null_checker(info, "06type.nc", 2280))->p;
                    sline2=((struct sInfo* )come_null_checker(info, "06type.nc", 2281))->sline;
                    __dec_obj124=type_name,
                    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0);
                    if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2285)),"double")) {
                        long_=(_Bool)1;
                        break;
                    }
                    else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2289)),"unsigned")) {
                        __dec_obj125=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0);
                        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2292)),"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)1;
                            break;
                        }
                    }
                    else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2298)),"signed")) {
                        __dec_obj126=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0);
                        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2301)),"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)0;
                            break;
                        }
                    }
                    else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2307)),"long")) {
                        p_66=((struct sInfo* )come_null_checker(info, "06type.nc", 2308))->p;
                        sline_67=((struct sInfo* )come_null_checker(info, "06type.nc", 2309))->sline;
                        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2310))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2310))->p==95) {
                            long_long=(_Bool)1;
                            __dec_obj127=type_name,
                            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                            __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0);
                        }
                        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2314))->p==58) {
                            __dec_obj128=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2316))->p=p2;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2317))->sline=sline2;
                            break;
                        }
                        else {
                            long_=(_Bool)1;
                            break;
                        }
                        if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2325)),"int")) {
                            long_long=(_Bool)1;
                            break;
                        }
                        else if(!is_type_name(type_name,info)) {
                            __dec_obj129=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                            __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
                            long_long=(_Bool)1;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2332))->p=p_66;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2333))->sline=sline_67;
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
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2348))->p=p_66;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2349))->sline=sline_67;
                        __dec_obj130=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("long"));
                        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2357)),"signed")) {
            unsigned_=(_Bool)0;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2360))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2360))->p==95) {
                p_68=((struct sInfo* )come_null_checker(info, "06type.nc", 2361))->p;
                sline_69=((struct sInfo* )come_null_checker(info, "06type.nc", 2362))->sline;
                __dec_obj131=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0);
                if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2366)),"char")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2366)),"short")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2366)),"long")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2366)),"int")) {
                }
                else {
                    __dec_obj132=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("int"));
                    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2370))->p=p_68;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2371))->sline=sline_69;
                    break;
                }
            }
            else {
                __dec_obj133=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("int"));
                __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2380)),"unsigned")) {
            unsigned_=(_Bool)1;
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2383))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2383))->p==95) {
                p_70=((struct sInfo* )come_null_checker(info, "06type.nc", 2384))->p;
                sline_71=((struct sInfo* )come_null_checker(info, "06type.nc", 2385))->sline;
                __dec_obj134=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0);
                if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2389)),"short")) {
                    if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2390))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2390))->p==95) {
                        p_72=((struct sInfo* )come_null_checker(info, "06type.nc", 2391))->p;
                        sline_73=((struct sInfo* )come_null_checker(info, "06type.nc", 2392))->sline;
                        __dec_obj135=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0);
                        if(is_type_name(type_name,info)) {
                            short_=(_Bool)1;
                        }
                        else {
                            short_=(_Bool)1;
                            __dec_obj136=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                            __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0);
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2403))->p=p_72;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2404))->sline=sline_73;
                        }
                    }
                    else {
                        short_=(_Bool)1;
                        __dec_obj137=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2413)),"long")) {
                    if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2414))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2414))->p==95) {
                        p_74=((struct sInfo* )come_null_checker(info, "06type.nc", 2415))->p;
                        sline_75=((struct sInfo* )come_null_checker(info, "06type.nc", 2416))->sline;
                        __dec_obj138=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0);
                        if(is_type_name(type_name,info)) {
                            long_=(_Bool)1;
                        }
                        else {
                            long_=(_Bool)1;
                            __dec_obj139=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0);
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2427))->p=p_74;
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2428))->sline=sline_75;
                        }
                    }
                    else {
                        long_=(_Bool)1;
                        __dec_obj140=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0);
                        break;
                    }
                }
                else if(!is_type_name(type_name,info)) {
                    __dec_obj141=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2439))->p=p_70;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2440))->sline=sline_71;
                    break;
                }
            }
            else {
                __dec_obj142=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0);
                break;
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2449)),"signed")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2449)),"__signed__")) {
            unsigned_=(_Bool)0;
            p_76=((struct sInfo* )come_null_checker(info, "06type.nc", 2452))->p;
            sline_77=((struct sInfo* )come_null_checker(info, "06type.nc", 2453))->sline;
            __dec_obj143=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2457))->p==58&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 2457))->p+1)==58) {
                __dec_obj144=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int"));
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0);
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2459))->p=p_76;
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2460))->sline=sline_77;
                break;
            }
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2464)),"register")) {
            register_=(_Bool)1;
            __dec_obj145=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2469)),"restrict")) {
            restrict_=(_Bool)1;
            __dec_obj146=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2474)),"_Addr")) {
            __dec_obj147=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2477)),"__restrict")) {
            restrict_=(_Bool)1;
            __dec_obj148=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2482)),"tup")) {
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2483))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2484))->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj149=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple_=(_Bool)1;
        }
        else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2496)),"short")) {
            short_=(_Bool)0;
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2499))->p==58) {
                break;
            }
            else if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 2502))->p)) {
                p_78=((struct sInfo* )come_null_checker(info, "06type.nc", 2503))->p;
                sline_79=((struct sInfo* )come_null_checker(info, "06type.nc", 2504))->sline;
                __dec_obj150=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0);
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2507))->p==58&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 2507))->p+1)==58) {
                    __dec_obj151=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short"));
                    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2509))->p=p_78;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2510))->sline=sline_79;
                    break;
                }
                if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2514)),"int")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2518)),"short")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(is_type_name(type_name,info)) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2523))->p=p_78;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2524))->sline=sline_79;
                }
                else {
                    __dec_obj152=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short"));
                    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0);
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2528))->p=p_78;
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2529))->sline=sline_79;
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
    if((string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2542)),"typeof")||string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2542)),"__typeof__"))&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2542))->p==40) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2543))->p++;
        skip_spaces_and_lf(info);
        no_comma=((struct sInfo* )come_null_checker(info, "06type.nc", 2546))->no_comma;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2547))->no_comma=(_Bool)0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2549))->no_comma=no_comma;
        expected_next_character(41,info);
        type_80=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2553, "struct sType* "))), "06type.nc", 2553))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj153=((struct sType* )come_null_checker(type_80, "06type.nc", 2554))->mTypeOfNode,
        ((struct sType* )come_null_checker(type_80, "06type.nc", 2554))->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp);
        (__dec_obj153 ? __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0, (void*)0) :0);
        var_name=((void*)0);
        __dec_obj154=type_80,
        type_80=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_80,info));
        come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute=((void*)0);
        if(parse_variable_name) {
            __dec_obj155=var_name,
            var_name=(char* )come_increment_ref_count(parse_variable_name_fun(type_80,anonymous_name,(_Bool)0,(char* )come_increment_ref_count(attribute),info));
            __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2565, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(type_80),(char* )come_increment_ref_count(var_name),(_Bool)1))));
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(sType_finalize, type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    attribute_81=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0));
    if(string_operator_not_equals(((char* )come_null_checker(attribute_before, "06type.nc", 2569)),"")) {
        if(string_operator_equals(((char* )come_null_checker(attribute_81, "06type.nc", 2570)),"")) {
            __dec_obj156=attribute_81,
            attribute_81=(char* )come_increment_ref_count(attribute_before);
            __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj157=attribute_81,
            attribute_81=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(attribute_before, "06type.nc", 2574))," "))), "06type.nc", 2574)),attribute_81));
            __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        __dec_obj158=attribute_before,
        attribute_before=(char*)come_increment_ref_count(xsprintf(""));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(!struct_define_parsed&&(struct_||enum_)&&string_operator_not_equals(((char* )come_null_checker(tag_attribute, "06type.nc", 2578)),"")) {
        __dec_obj159=attribute_81,
        attribute_81=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute),(char* )come_increment_ref_count(attribute_81)));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0);
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
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2594))->p==42) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2595))->p++;
            skip_spaces_and_lf(info);
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(string_operator_not_equals(((char* )come_null_checker(pointer_attr, "06type.nc", 2598)),"")) {
                if(string_operator_not_equals(((char* )come_null_checker(pointer_attribute, "06type.nc", 2599)),"")) {
                    __dec_obj160=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(pointer_attribute, "06type.nc", 2600))," "))), "06type.nc", 2600)),pointer_attr));
                    __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    __dec_obj161=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(pointer_attr);
                    __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            pointer_num++;
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2609))->p==37) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2610))->p++;
            skip_spaces_and_lf(info);
            heap=(_Bool)1;
        }
        else if(gComePthread&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2615))->p==124) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2616))->p++;
            skip_spaces_and_lf(info);
            channel=(_Bool)1;
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2621))->p==64) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2622))->p++;
            while(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 2623))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2623))->p==95) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2624))->p++;
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name=((void*)0);
    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2636))->p==58&&*(((struct sInfo* )come_null_checker(info, "06type.nc", 2636))->p+1)!=58&&tuple_) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2637))->p++;
        skip_spaces_and_lf(info);
        __dec_obj162=tuple_name,
        tuple_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(atomic_&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2643))->p==41) {
        expected_next_character(41,info);
    }
    lambda_flag=(_Bool)0;
    {
        pX=((struct sInfo* )come_null_checker(info, "06type.nc", 2649))->p;
        slineX=((struct sInfo* )come_null_checker(info, "06type.nc", 2650))->sline;
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2652))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2652))->p==95) {
            (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2655))->p==40&&((struct sInfo* )come_null_checker(info, "06type.nc", 2655))->in_typedef) {
                lambda_flag=(_Bool)1;
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2660))->p=pX;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2661))->sline=slineX;
    }
    function_pointer_flag=(_Bool)0;
    pointer_to_array_flag=(_Bool)0;
    {
        p_84=((struct sInfo* )come_null_checker(info, "06type.nc", 2670))->p;
        sline_85=((struct sInfo* )come_null_checker(info, "06type.nc", 2671))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2673))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2674))->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2679))->p==40) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2680))->p++;
                skip_spaces_and_lf(info);
            }
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2684))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 2684))->p==94) {
                while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2685))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 2685))->p==94) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2686))->p++;
                    skip_spaces_and_lf(info);
                }
                function_pointer_flag=(_Bool)1;
                word=((void*)0);
                if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2693))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2693))->p==95) {
                    __dec_obj163=word,
                    word=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                    __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0);
                }
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2697))->p==91) {
                    pointer_to_array_flag=(_Bool)1;
                    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2699))->p==91) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2700))->p++;
                        skip_spaces_and_lf(info);
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2703))->p==93) {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2704))->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        no_output_come_code=((struct sInfo* )come_null_checker(info, "06type.nc", 2709))->no_output_come_code;
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2709))->no_output_come_code=(_Bool)1;
                        exp_86=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2711))->no_output_come_code=no_output_come_code;
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2713))->p==93) {
                            ((struct sInfo* )come_null_checker(info, "06type.nc", 2714))->p++;
                            skip_spaces_and_lf(info);
                        }
                        ((exp_86) ? exp_86 = come_decrement_ref_count(exp_86, ((struct sNode*)exp_86)->finalize, ((struct sNode*)exp_86)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    }
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2719))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2720))->p++;
                        skip_spaces_and_lf(info);
                        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2723))->p==40) {
                            function_pointer_flag=(_Bool)1;
                            pointer_to_array_flag=(_Bool)0;
                        }
                        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2727))->p==91) {
                            function_pointer_flag=(_Bool)0;
                            pointer_to_array_flag=(_Bool)1;
                        }
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2733))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2734))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2737))->p==41) {
                        ((struct sInfo* )come_null_checker(info, "06type.nc", 2738))->p++;
                        skip_spaces_and_lf(info);
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2744))->p==91) {
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2748))->p==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            else if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2753))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2753))->p==95) {
                word_87=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2756))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2757))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2760))->p==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word_87 = come_decrement_ref_count(word_87, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2767))->p=p_84;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2768))->sline=sline_85;
    }
    var_name_between_brace=(_Bool)0;
    {
        p_88=((struct sInfo* )come_null_checker(info, "06type.nc", 2773))->p;
        sline_89=((struct sInfo* )come_null_checker(info, "06type.nc", 2774))->sline;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2776))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2777))->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 2782))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 2782))->p==95) {
                word_90=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
                if(is_type_name(word_90,info)) {
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2787))->p==41) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 2788))->p++;
                    skip_spaces_and_lf(info);
                    if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2791))->p!=40) {
                        var_name_between_brace=(_Bool)1;
                    }
                }
                (word_90 = come_decrement_ref_count(word_90, (void*)0, (void*)0, 0, 0, (void*)0));
            }
        }
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2798))->p=p_88;
        ((struct sInfo* )come_null_checker(info, "06type.nc", 2799))->sline=sline_89;
    }
    if(anonymous_type&&*((struct sInfo* )come_null_checker(info, "06type.nc", 2803))->p==123) {
        static int anonymous_num=0;
        if(struct_) {
            anonymous=(_Bool)0;
            if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2807)),"")) {
                anonymous=(_Bool)1;
                __dec_obj164=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num));
                __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0);
            }
            node_91=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(tag_attribute),info,anonymous));
            Value_92=node_compile(node_91,info);
            if(!Value_92) {
                err_msg(info,"parse_struct is failed");
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2816, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            pointer_num_93=0;
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2820))->p==42) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2821))->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_93++;
            }
            __dec_obj165=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2830))->types, "06type.nc", 2830)), "06type.nc", 2830)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj165,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_82==((void*)0)) {
                __dec_obj166=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2833, "struct sType* "))), "06type.nc", 2833))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            klass=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2835))->classes, "06type.nc", 2835)), "06type.nc", 2835)),type_name));
            ((struct sClass* )come_null_checker(klass, "06type.nc", 2836))->mAnonymous=(_Bool)1;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 2837))->mAnonymous=anonymous;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 2838))->mAnonymous=anonymous;
            __dec_obj167=((struct sType* )come_null_checker(type_82, "06type.nc", 2839))->mAnonymousName,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 2839))->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name));
            __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 2841))->mPointerNum=pointer_num_93;
            ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(enum_) {
            if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2844)),"")) {
                if(!((struct sInfo* )come_null_checker(info, "06type.nc", 2845))->no_output_err) {
                    __dec_obj168=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num));
                    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0);
                }
                else {
                    __dec_obj169=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num));
                    __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            node_94=(struct sNode*)come_increment_ref_count(parse_enum((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(tag_attribute),info));
            if(!((struct sInfo* )come_null_checker(info, "06type.nc", 2855))->no_output_err) {
                Value_95=node_compile(node_94,info);
                if(!Value_95) {
                    printf("%s %d: compiling is failed(X)\n",((struct sInfo* )come_null_checker(info, "06type.nc", 2857))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 2857))->sline);
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2858, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
            }
            __dec_obj170=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2862))->types, "06type.nc", 2862)), "06type.nc", 2862)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_82==((void*)0)) {
                __dec_obj171=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2865, "struct sType* "))), "06type.nc", 2865))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(union_) {
            anonymous_96=(_Bool)0;
            if(string_operator_equals(((char* )come_null_checker(type_name, "06type.nc", 2870)),"")) {
                __dec_obj172=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num));
                __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0);
                anonymous_96=(_Bool)1;
            }
            node_97=(struct sNode*)come_increment_ref_count(parse_union((char* )come_increment_ref_count(type_name),(char* )come_increment_ref_count(tag_attribute),info,(_Bool)1));
            Value_98=node_compile(node_97,info);
            if(!Value_98) {
                printf("%s %d: compiling is failed(X)\n",((struct sInfo* )come_null_checker(info, "06type.nc", 2878))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 2878))->sline);
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2879, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                ((node_97) ? node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            pointer_num_99=0;
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2883))->p==42) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 2884))->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_99++;
            }
            __dec_obj173=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2893))->types, "06type.nc", 2893)), "06type.nc", 2893)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_82==((void*)0)) {
                __dec_obj174=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2896, "struct sType* "))), "06type.nc", 2896))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            klass_100=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2900))->classes, "06type.nc", 2900)), "06type.nc", 2900)),type_name));
            ((struct sClass* )come_null_checker(klass_100, "06type.nc", 2901))->mAnonymous=(_Bool)1;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 2903))->mPointerNum=pointer_num_99;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 2904))->mAnonymous=anonymous_96;
            __dec_obj175=((struct sType* )come_null_checker(type_82, "06type.nc", 2905))->mAnonymousName,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 2905))->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name));
            __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0,0, (void*)0);
            ((node_97) ? node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(sClass_finalize, klass_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            err_msg(info,"unexpected { character");
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 2909, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
            (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
            return __result_obj__0;
        }
        attribute_101=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0));
        if(!parse_variable_name) {
            append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute_101),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __dec_obj176=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_variable_name_fun(type_82,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_101),info));
            __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0);
        }
        (attribute_101 = come_decrement_ref_count(attribute_101, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if(lambda_flag) {
        if(({(_conditional_value_X0=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2924))->types, "06type.nc", 2924)), "06type.nc", 2924)),type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            __dec_obj177=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2925))->types, "06type.nc", 2925)), "06type.nc", 2925)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(result_type, "06type.nc", 2926))->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2926))->classes, "06type.nc", 2926)), "06type.nc", 2926)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type, "06type.nc", 2926))->mClass, "06type.nc", 2926))->mName)));
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2928))->generics_type_names, "06type.nc", 2928)),type_name,(_Bool)0)) {
            for(i=0;i<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2929))->generics_type_names, "06type.nc", 2929)));i++){
                if(({(_conditional_value_X1=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2930))->generics_type_names, "06type.nc", 2930)), "06type.nc", 2930)),i))), "06type.nc", 2930)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X1;})) {
                    __dec_obj178=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2931, "struct sType* "))), "06type.nc", 2931))),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2935))->method_generics_type_names, "06type.nc", 2935)),type_name,(_Bool)0)) {
            for(i_104=0;i_104<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2936))->method_generics_type_names, "06type.nc", 2936)));i_104++){
                if(({(_conditional_value_X2=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2937))->method_generics_type_names, "06type.nc", 2937)), "06type.nc", 2937)),i_104))), "06type.nc", 2937)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X2;})) {
                    __dec_obj179=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2938, "struct sType* "))), "06type.nc", 2938))),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_104)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else {
            __dec_obj180=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2944))->types, "06type.nc", 2944)), "06type.nc", 2944)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj180,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(result_type==((void*)0)) {
                __dec_obj181=result_type,
                result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2947, "struct sType* "))), "06type.nc", 2947))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        apply_type_qualifiers(result_type,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
        __dec_obj182=((struct sType* )come_null_checker(result_type, "06type.nc", 2952))->mAlignas,
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2952))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2953))->mPointerNum=pointer_num;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2954))->mHeap=((struct sType* )come_null_checker(result_type, "06type.nc", 2954))->mHeap||heap;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2955))->mChannel=((struct sType* )come_null_checker(result_type, "06type.nc", 2955))->mChannel||channel;
        ((struct sType* )come_null_checker(result_type, "06type.nc", 2956))->mDefferRightValue=((struct sType* )come_null_checker(result_type, "06type.nc", 2956))->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(result_type,(char* )come_increment_ref_count(pointer_attribute));
        __dec_obj183=var_name_83,
        var_name_83=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0);
        multiple_assign_var7=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var7->v1);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v2);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var7->v3);
        var_args=multiple_assign_var7->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj184=type_82,
        type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2963, "struct sType* "))), "06type.nc", 2963))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj185=((struct sType* )come_null_checker(type_82, "06type.nc", 2965))->mResultType,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 2965))->mResultType=(struct sType* )come_increment_ref_count(result_type);
        come_call_finalizer(sType_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj186=((struct sType* )come_null_checker(type_82, "06type.nc", 2966))->mParamTypes,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 2966))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj187=((struct sType* )come_null_checker(type_82, "06type.nc", 2967))->mParamNames,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 2967))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(type_82, "06type.nc", 2968))->mVarArgs=var_args;
        ((struct sType* )come_null_checker(type_82, "06type.nc", 2969))->mExtern=extern_;
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
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 2978))->p==40) {
            pointer_paren=(_Bool)1;
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2980))->p++;
            skip_spaces_and_lf(info);
            paren_num++;
        }
        array_pointer_num=0;
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 2986))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 2986))->p==94) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 2987))->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            array_pointer_num++;
        }
        skip_pointer_attribute(info);
        __dec_obj188=type_82,
        type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 2995))->types, "06type.nc", 2995)), "06type.nc", 2995)),type_name)))));
        come_call_finalizer(sType_finalize, __dec_obj188,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(type_82==((void*)0)) {
            __dec_obj189=type_82,
            type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 2998, "struct sType* "))), "06type.nc", 2998))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
        __dec_obj190=((struct sType* )come_null_checker(type_82, "06type.nc", 3002))->mAlignas,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3002))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3003))->mPointerNum+=pointer_num;
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3004))->mHeap=((struct sType* )come_null_checker(type_82, "06type.nc", 3004))->mHeap||heap;
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3005))->mChannel=((struct sType* )come_null_checker(type_82, "06type.nc", 3005))->mChannel||channel;
        __dec_obj191=((struct sType* )come_null_checker(type_82, "06type.nc", 3006))->mTupleName,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3006))->mTupleName=(char* )come_increment_ref_count(tuple_name);
        __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3007))->mDefferRightValue=((struct sType* )come_null_checker(type_82, "06type.nc", 3007))->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(type_82,(char* )come_increment_ref_count(pointer_attribute));
        if(xisalpha(*((struct sInfo* )come_null_checker(info, "06type.nc", 3010))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 3010))->p==95) {
            __dec_obj192=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0);
        }
        else {
            __dec_obj193=var_name_83,
            var_name_83=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3017))->p==41) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3018))->p++;
            skip_spaces_and_lf(info);
            paren_num--;
        }
        array=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 3022, "struct list$1sNode$ph*"))), "06type.nc", 3022)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3023))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3024))->p++;
            skip_spaces_and_lf(info);
            node_105=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(array, "06type.nc", 3029)),(struct sNode*)come_increment_ref_count(node_105));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3031))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3032))->p++;
                skip_spaces_and_lf(info);
            }
            ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        if(paren_num>0&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3036))->p==41) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3037))->p++;
            skip_spaces_and_lf(info);
            __dec_obj194=((struct sType* )come_null_checker(type_82, "06type.nc", 3040))->mVarNameArrayNum,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3040))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj194,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            __current_stack1__.attribute_before = &attribute_before;
            __current_stack1__.type_name = &type_name;
            __current_stack1__.norecord = &norecord;
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
            __current_stack1__.alignas_ = &alignas_;
            __current_stack1__.alignas_double = &alignas_double;
            __current_stack1__.tag_attribute = &tag_attribute;
            __current_stack1__.struct_define_parsed = &struct_define_parsed;
            __current_stack1__.anonymous_type = &anonymous_type;
            __current_stack1__.anonymous_name = &anonymous_name;
            __current_stack1__.atomic_ = &atomic_;
            __current_stack1__.thread_local = &thread_local;
            __current_stack1__.thread_ = &thread_;
            __current_stack1__.attribute_81 = &attribute_81;
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
            __current_stack1__.type_82 = &type_82;
            __current_stack1__.var_name_83 = &var_name_83;
            __current_stack1__.function_pointer_flag = &function_pointer_flag;
            __current_stack1__.pointer_to_array_flag = &pointer_to_array_flag;
            __current_stack1__.var_name_between_brace = &var_name_between_brace;
            })            ,            list$1sNode$ph_each(((struct list$1sNode$ph*)come_null_checker(array, "06type.nc", 3046)),&__current_stack1__,(void*)method_block1_06typenc);
        }
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3048))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3049))->p++;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3052))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3053))->p++;
                skip_spaces_and_lf(info);
                ((struct sType* )come_null_checker(type_82, "06type.nc", 3055))->mArrayPointerType=(_Bool)1;
                break;
            }
            node_106=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3061))->mArrayNum, "06type.nc", 3061)),(struct sNode*)come_increment_ref_count(node_106));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3063))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3064))->p++;
                skip_spaces_and_lf(info);
            }
            ((node_106) ? node_106 = come_decrement_ref_count(node_106, ((struct sNode*)node_106)->finalize, ((struct sNode*)node_106)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3069))->mArrayPointerNum=array_pointer_num;
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3070))->mPointerParen=pointer_paren;
        come_call_finalizer(list$1sNode$ph$p_finalize, array, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(function_pointer_flag) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 3073))->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_attribute=(char*)come_increment_ref_count(xsprintf(""));
        function_pointer_num=0;
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3080))->p==42||*((struct sInfo* )come_null_checker(info, "06type.nc", 3080))->p==94) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3081))->p++;
            skip_spaces_and_lf(info);
            pointer_attr_107=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
            if(string_operator_not_equals(((char* )come_null_checker(pointer_attr_107, "06type.nc", 3084)),"")) {
                if(string_operator_not_equals(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 3085)),"")) {
                    __dec_obj195=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 3086))," "))), "06type.nc", 3086)),pointer_attr_107));
                    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    __dec_obj196=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr_107);
                    __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0);
                }
            }
            function_pointer_num++;
            (pointer_attr_107 = come_decrement_ref_count(pointer_attr_107, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        pointer_attr2=(char* )come_increment_ref_count(parse_pointer_qualifier(info));
        if(string_operator_not_equals(((char* )come_null_checker(pointer_attr2, "06type.nc", 3096)),"")) {
            if(string_operator_not_equals(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 3097)),"")) {
                __dec_obj197=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(function_pointer_attribute, "06type.nc", 3098))," "))), "06type.nc", 3098)),pointer_attr2));
                __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                __dec_obj198=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr2);
                __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0);
            }
        }
        if(({(_conditional_value_X3=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3106))->types, "06type.nc", 3106)), "06type.nc", 3106)),type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X3;})) {
            __dec_obj199=result_type_108,
            result_type_108=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3107))->types, "06type.nc", 3107)), "06type.nc", 3107)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(result_type_108, "06type.nc", 3108))->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3108))->classes, "06type.nc", 3108)), "06type.nc", 3108)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(result_type_108, "06type.nc", 3108))->mClass, "06type.nc", 3108))->mName)));
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3110))->generics_type_names, "06type.nc", 3110)),type_name,(_Bool)0)) {
            for(i_109=0;i_109<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3111))->generics_type_names, "06type.nc", 3111)));i_109++){
                if(({(_conditional_value_X4=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3112))->generics_type_names, "06type.nc", 3112)), "06type.nc", 3112)),i_109))), "06type.nc", 3112)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X4;})) {
                    __dec_obj200=result_type_108,
                    result_type_108=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3113, "struct sType* "))), "06type.nc", 3113))),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_109)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3117))->method_generics_type_names, "06type.nc", 3117)),type_name,(_Bool)0)) {
            for(i_110=0;i_110<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3118))->method_generics_type_names, "06type.nc", 3118)));i_110++){
                if(({(_conditional_value_X5=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3119))->method_generics_type_names, "06type.nc", 3119)), "06type.nc", 3119)),i_110))), "06type.nc", 3119)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X5;})) {
                    __dec_obj201=result_type_108,
                    result_type_108=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3120, "struct sType* "))), "06type.nc", 3120))),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_110)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
        }
        else {
            __dec_obj202=result_type_108,
            result_type_108=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3125))->types, "06type.nc", 3125)), "06type.nc", 3125)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(result_type_108==((void*)0)) {
                __dec_obj203=result_type_108,
                result_type_108=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3128, "struct sType* "))), "06type.nc", 3128))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj203,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
        }
        apply_type_qualifiers(result_type_108,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
        __dec_obj204=((struct sType* )come_null_checker(result_type_108, "06type.nc", 3133))->mAlignas,
        ((struct sType* )come_null_checker(result_type_108, "06type.nc", 3133))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
        (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sType* )come_null_checker(result_type_108, "06type.nc", 3134))->mPointerNum+=pointer_num;
        ((struct sType* )come_null_checker(result_type_108, "06type.nc", 3135))->mHeap=((struct sType* )come_null_checker(result_type_108, "06type.nc", 3135))->mHeap||heap;
        ((struct sType* )come_null_checker(result_type_108, "06type.nc", 3136))->mChannel=((struct sType* )come_null_checker(result_type_108, "06type.nc", 3136))->mChannel||channel;
        ((struct sType* )come_null_checker(result_type_108, "06type.nc", 3137))->mDefferRightValue=((struct sType* )come_null_checker(result_type_108, "06type.nc", 3137))->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(result_type_108,(char* )come_increment_ref_count(pointer_attribute));
        paren_flag=(_Bool)0;
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3141))->p==40) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3142))->p++;
            skip_spaces_and_lf(info);
            paren_flag=(_Bool)1;
        }
        array_pointer=0;
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3148))->p==42) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3149))->p++;
            skip_spaces_and_lf(info);
            array_pointer++;
        }
        if(xisalnum(*((struct sInfo* )come_null_checker(info, "06type.nc", 3154))->p)||*((struct sInfo* )come_null_checker(info, "06type.nc", 3154))->p==95) {
            __dec_obj205=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0);
            if(!paren_flag&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3156))->p==40) {
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3157, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(result_type_108),(char* )come_increment_ref_count(var_name_83),(_Bool)0))));
                (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
        }
        else {
            static int num_anonymous_var_name=0;
            num_anonymous_var_name++;
            __dec_obj206=var_name_83,
            var_name_83=(char* )come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name));
            __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj207=type_82,
        type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3166, "struct sType* "))), "06type.nc", 3166))),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3167))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3168))->p++;
            skip_spaces_and_lf(info);
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3171))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3172))->p++;
                skip_spaces_and_lf(info);
                ((struct sType* )come_null_checker(type_82, "06type.nc", 3175))->mArrayPointerType=(_Bool)1;
                break;
            }
            else {
                node_111=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3181))->mArrayNum, "06type.nc", 3181)),(struct sNode*)come_increment_ref_count(node_111));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3183))->p==93) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 3184))->p++;
                    skip_spaces_and_lf(info);
                }
                ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        if(paren_flag&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3190))->p==41) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3191))->p++;
            skip_spaces_and_lf(info);
        }
        while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3195))->p==91) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3196))->p++;
            skip_spaces_and_lf(info);
            node_112=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3201))->mArrayNum, "06type.nc", 3201)),(struct sNode*)come_increment_ref_count(node_112));
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3203))->p==93) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3204))->p++;
                skip_spaces_and_lf(info);
            }
            ((node_112) ? node_112 = come_decrement_ref_count(node_112, ((struct sNode*)node_112)->finalize, ((struct sNode*)node_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        expected_next_character(41,info);
        multiple_assign_var8=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types_113=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var8->v1);
        param_names_114=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var8->v2);
        param_default_parametors_115=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var8->v3);
        var_args_116=multiple_assign_var8->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj208=((struct sType* )come_null_checker(type_82, "06type.nc", 3212))->mResultType,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3212))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type_108));
        come_call_finalizer(sType_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj209=((struct sType* )come_null_checker(type_82, "06type.nc", 3213))->mParamTypes,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3213))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_113);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj209,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj210=((struct sType* )come_null_checker(type_82, "06type.nc", 3214))->mParamNames,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3214))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_114);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj210,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3215))->mVarArgs=var_args_116;
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3216))->mExtern=extern_;
        __dec_obj211=((struct sType* )come_null_checker(type_82, "06type.nc", 3217))->mPointerAttribute,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3217))->mPointerAttribute=(char* )come_increment_ref_count(function_pointer_attribute);
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3219))->mFunctionPointerNum=function_pointer_num;
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3220))->mArrayPointerNum=array_pointer;
        (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
        (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sType_finalize, result_type_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(({(_conditional_value_X6=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3223))->types, "06type.nc", 3223)), "06type.nc", 3223)),type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X6;})) {
            __dec_obj212=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3224))->types, "06type.nc", 3224)), "06type.nc", 3224)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj212,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3225))->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3225))->classes, "06type.nc", 3225)), "06type.nc", 3225)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3225))->mClass, "06type.nc", 3225))->mName)));
            t=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_operator_load_element(((struct map$2char$phbuffer$ph*)come_null_checker(((struct map$2char$phbuffer$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3227))->typedef_definition, "06type.nc", 3227)), "06type.nc", 3227)),type_name)));
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3229))->mOriginalTypePointerNum=pointer_num;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3230))->mOriginalTypePointerHeap=heap;
            if(((struct sType* )come_null_checker(type_82, "06type.nc", 3231))->mTypedef||t) {
                type_=(struct sType* )come_increment_ref_count(sType_clone(type_82));
                __dec_obj213=((struct sType* )come_null_checker(type_, "06type.nc", 3233))->mAttribute,
                ((struct sType* )come_null_checker(type_, "06type.nc", 3233))->mAttribute=(char*)come_increment_ref_count(xsprintf(""));
                __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0);
                __dec_obj214=((struct sType* )come_null_checker(type_82, "06type.nc", 3234))->mTypedefOriginalType,
                ((struct sType* )come_null_checker(type_82, "06type.nc", 3234))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(type_));
                come_call_finalizer(sType_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __dec_obj215=((struct sType* )come_null_checker(type_82, "06type.nc", 3237))->mAttribute,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3237))->mAttribute=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj216=((struct sType* )come_null_checker(type_82, "06type.nc", 3238))->mVarAttribute,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3238))->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0);
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
            __dec_obj217=((struct sType* )come_null_checker(type_82, "06type.nc", 3241))->mAlignas,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3241))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0) :0);
            if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3242))->mClass, "06type.nc", 3242))->mName, "06type.nc", 3242)),"lambda")||list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3242))->mArrayNum, "06type.nc", 3242)))>0) {
                ((struct sType* )come_null_checker(type_82, "06type.nc", 3243))->mArrayPointerNum+=pointer_num;
            }
            else {
                ((struct sType* )come_null_checker(type_82, "06type.nc", 3246))->mPointerNum+=pointer_num;
            }
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3248))->mHeap=((struct sType* )come_null_checker(type_82, "06type.nc", 3248))->mHeap||heap;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3249))->mChannel=((struct sType* )come_null_checker(type_82, "06type.nc", 3249))->mChannel||channel;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3250))->mDefferRightValue=((struct sType* )come_null_checker(type_82, "06type.nc", 3250))->mDefferRightValue||deffer_;
            __dec_obj218=((struct sType* )come_null_checker(type_82, "06type.nc", 3251))->mTupleName,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3251))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj219=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_82,info));
            come_call_finalizer(sType_finalize, __dec_obj219,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3255))->generics_type_names, "06type.nc", 3255)),type_name,(_Bool)0)) {
            for(i_117=0;i_117<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3256))->generics_type_names, "06type.nc", 3256)));i_117++){
                if(({(_conditional_value_X7=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3257))->generics_type_names, "06type.nc", 3257)), "06type.nc", 3257)),i_117))), "06type.nc", 3257)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X7;})) {
                    __dec_obj220=type_82,
                    type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3258, "struct sType* "))), "06type.nc", 3258))),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_117)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj220,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
            __dec_obj221=((struct sType* )come_null_checker(type_82, "06type.nc", 3263))->mAlignas,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3263))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj221 ? __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3264))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3265))->mHeap=((struct sType* )come_null_checker(type_82, "06type.nc", 3265))->mHeap||heap;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3266))->mChannel=((struct sType* )come_null_checker(type_82, "06type.nc", 3266))->mChannel||channel;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3267))->mDefferRightValue=((struct sType* )come_null_checker(type_82, "06type.nc", 3267))->mDefferRightValue||deffer_;
            __dec_obj222=((struct sType* )come_null_checker(type_82, "06type.nc", 3268))->mTupleName,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3268))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj223=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_82,info));
            come_call_finalizer(sType_finalize, __dec_obj223,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3272))->method_generics_type_names, "06type.nc", 3272)),type_name,(_Bool)0)) {
            for(i_118=0;i_118<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3273))->method_generics_type_names, "06type.nc", 3273)));i_118++){
                if(({(_conditional_value_X8=(string_operator_equals(((char* )come_null_checker(((char* )(__right_value1=list$1char$ph_operator_load_element(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3274))->method_generics_type_names, "06type.nc", 3274)), "06type.nc", 3274)),i_118))), "06type.nc", 3274)),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
_conditional_value_X8;})) {
                    __dec_obj224=type_82,
                    type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3275, "struct sType* "))), "06type.nc", 3275))),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_118)),(_Bool)0,info,(_Bool)0,0));
                    come_call_finalizer(sType_finalize, __dec_obj224,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                }
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
            __dec_obj225=((struct sType* )come_null_checker(type_82, "06type.nc", 3280))->mAlignas,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3280))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3281))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3282))->mHeap=((struct sType* )come_null_checker(type_82, "06type.nc", 3282))->mHeap||heap;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3283))->mChannel=((struct sType* )come_null_checker(type_82, "06type.nc", 3283))->mChannel||channel;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3284))->mDefferRightValue=((struct sType* )come_null_checker(type_82, "06type.nc", 3284))->mDefferRightValue||deffer_;
            __dec_obj226=((struct sType* )come_null_checker(type_82, "06type.nc", 3285))->mTupleName,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3285))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj227=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_82,info));
            come_call_finalizer(sType_finalize, __dec_obj227,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3289))->p==60) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3290))->p++;
            skip_spaces_and_lf(info);
            if(({(_conditional_value_X9=(((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3293))->generics_classes, "06type.nc", 3293)), "06type.nc", 3293)),((char* )(__right_value1=__builtin_string(type_name))))))==((void*)0)));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X9;})) {
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3295, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                return __result_obj__0;
            }
            __dec_obj228=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3300))->types, "06type.nc", 3300)), "06type.nc", 3300)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj228,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_82==((void*)0)) {
                __dec_obj229=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3303, "struct sType* "))), "06type.nc", 3303))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj229,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            while((_Bool)1) {
                multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1);
                var_name_119=(char* )come_increment_ref_count(multiple_assign_var9->v2);
                err_120=multiple_assign_var9->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err_120) {
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3310, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3313))->mGenericsTypes, "06type.nc", 3313)),(struct sType* )come_increment_ref_count(generics_type));
                if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3315))->p==44) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 3316))->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3319))->p==62) {
                    ((struct sInfo* )come_null_checker(info, "06type.nc", 3320))->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",*((struct sInfo* )come_null_checker(info, "06type.nc", 3326))->p,*(((struct sInfo* )come_null_checker(info, "06type.nc", 3326))->p+1),*(((struct sInfo* )come_null_checker(info, "06type.nc", 3326))->p+2));
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3327, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (var_name_119 = come_decrement_ref_count(var_name_119, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(is_contained_generics_class(type_82,info)) {
                __dec_obj230=type_82,
                type_82=(struct sType* )come_increment_ref_count(solve_generics(type_82,((struct sInfo* )come_null_checker(info, "06type.nc", 3332))->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj230,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!output_generics_struct(type_82,type_82,info)) {
                    new_name=(char* )come_increment_ref_count(create_generics_name(type_82,info));
                    printf("%s %d: output generics is failed(%s)\n",((struct sInfo* )come_null_checker(info, "06type.nc", 3338))->sname,((struct sInfo* )come_null_checker(info, "06type.nc", 3338))->sline,new_name);
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
            __dec_obj231=((struct sType* )come_null_checker(type_82, "06type.nc", 3344))->mAlignas,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3344))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj231 ? __dec_obj231 = come_decrement_ref_count(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3345))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3346))->mHeap=((struct sType* )come_null_checker(type_82, "06type.nc", 3346))->mHeap||heap;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3347))->mChannel=((struct sType* )come_null_checker(type_82, "06type.nc", 3347))->mChannel||channel;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3348))->mDefferRightValue=((struct sType* )come_null_checker(type_82, "06type.nc", 3348))->mDefferRightValue||deffer_;
            __dec_obj232=((struct sType* )come_null_checker(type_82, "06type.nc", 3349))->mTupleName,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3349))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj233=type_name,
            type_name=(char* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3351))->mClass, "06type.nc", 3351))->mName);
            __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0,0, (void*)0);
            __dec_obj234=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_82,info));
            come_call_finalizer(sType_finalize, __dec_obj234,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(struct_) {
                klass_121=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3357))->classes, "06type.nc", 3357)), "06type.nc", 3357)),type_name)));
                if(klass_121==((void*)0)&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3359))->p!=60) {
                    map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3360))->classes, "06type.nc", 3360)),(char* )come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value1=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 3360, "struct sClass* "))), "06type.nc", 3360))),((char* )(__right_value2=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info)),(_Bool)0);
                    come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            if(union_) {
                klass_131=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3364))->classes, "06type.nc", 3364)), "06type.nc", 3364)),type_name)));
                if(klass_131==((void*)0)&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3366))->p!=60) {
                    map$2char$phsClass$ph_insert(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3367))->classes, "06type.nc", 3367)),(char* )come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sClass* )(__right_value1=(struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), (void*)0, 3367, "struct sClass* "))), "06type.nc", 3367))),((char* )(__right_value2=__builtin_string(type_name))),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info)),(_Bool)0);
                    come_call_finalizer(sClass_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
                }
            }
            __dec_obj235=type_82,
            type_82=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(((struct map$2char$phsType$ph*)come_null_checker(((struct map$2char$phsType$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3373))->types, "06type.nc", 3373)), "06type.nc", 3373)),type_name)))));
            come_call_finalizer(sType_finalize, __dec_obj235,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(type_82==((void*)0)) {
                __dec_obj236=type_82,
                type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3376, "struct sType* "))), "06type.nc", 3376))),(char* )come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,info,(_Bool)0,0));
                come_call_finalizer(sType_finalize, __dec_obj236,(void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            apply_type_qualifiers(type_82,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord);
            __dec_obj237=((struct sType* )come_null_checker(type_82, "06type.nc", 3380))->mAlignas,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3380))->mAlignas=(struct sNode*)come_increment_ref_count(alignas_);
            (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0, (void*)0) :0);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3381))->mPointerNum+=pointer_num;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3382))->mHeap=((struct sType* )come_null_checker(type_82, "06type.nc", 3382))->mHeap||heap;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3383))->mChannel=((struct sType* )come_null_checker(type_82, "06type.nc", 3383))->mChannel||channel;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3384))->mDefferRightValue=((struct sType* )come_null_checker(type_82, "06type.nc", 3384))->mDefferRightValue||deffer_;
            __dec_obj238=((struct sType* )come_null_checker(type_82, "06type.nc", 3385))->mTupleName,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3385))->mTupleName=(char* )come_increment_ref_count(tuple_name);
            __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0,0, (void*)0);
        }
        merge_pointer_attribute_to_type(type_82,(char* )come_increment_ref_count(pointer_attribute));
        __dec_obj239=type_82,
        type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_82,info));
        come_call_finalizer(sType_finalize, __dec_obj239,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(parse_multiple_type&&*((struct sInfo* )come_null_checker(info, "06type.nc", 3392))->p==44&&!((struct sInfo* )come_null_checker(info, "06type.nc", 3392))->in_offsetof) {
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 3393, "struct list$1sType$ph*"))), "06type.nc", 3393)))));
            come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(types, "06type.nc", 3395)),(struct sType* )come_increment_ref_count(sType_clone(type_82)));
            while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3397))->p==44) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3398))->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1);
                name_132=(char* )come_increment_ref_count(multiple_assign_var10->v2);
                err_133=multiple_assign_var10->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                if(!err_133) {
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3404, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count((struct sType* )((void*)0)),(char* )come_increment_ref_count((char* )((void*)0)),(_Bool)0))));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(types, "06type.nc", 3407)),(struct sType* )come_increment_ref_count(sType_clone(type2)));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3410))->p==41) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3411))->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(types, "06type.nc", 3415)));
            __dec_obj240=type_82,
            type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3417, "struct sType* "))), "06type.nc", 3417))),(char* )come_increment_ref_count(xsprintf("tuple%d",num_tuples)),(_Bool)0,info,(_Bool)0,0));
            come_call_finalizer(sType_finalize, __dec_obj240,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3418))->mPointerNum++;
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3419))->mHeap=(_Bool)1;
            for(o2_saved=(struct list$1sType$ph*)come_increment_ref_count(types),it=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 3421)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 3421)));it=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved, "06type.nc", 3421)))){
                list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3422))->mGenericsTypes, "06type.nc", 3422)),(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it))))));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __dec_obj241=type_82,
            type_82=(struct sType* )come_increment_ref_count(parse_pointer_attribute(type_82,info));
            come_call_finalizer(sType_finalize, __dec_obj241,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(is_contained_generics_class(type_82,info)) {
                __dec_obj242=type_82,
                type_82=(struct sType* )come_increment_ref_count(solve_generics(type_82,((struct sInfo* )come_null_checker(info, "06type.nc", 3429))->generics_type,info));
                come_call_finalizer(sType_finalize, __dec_obj242,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!output_generics_struct(type_82,type_82,info)) {
                    new_name_134=(char* )come_increment_ref_count(create_generics_name(type_82,info));
                    printf("output generics is failed(%s)\n",new_name_134);
                    exit(9);
                    (new_name_134 = come_decrement_ref_count(new_name_134, (void*)0, (void*)0, 0, 0, (void*)0));
                }
            }
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3439))->mMultipleTypes=(_Bool)1;
            __dec_obj243=type_name,
            type_name=(char* )come_increment_ref_count(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3441))->mClass, "06type.nc", 3441))->mName);
            __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_135=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0));
        if(type_82&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3446))->mClass, "06type.nc", 3446))->mName, "06type.nc", 3446)),"lambda")&&string_operator_not_equals(((char* )come_null_checker(attribute_135, "06type.nc", 3446)),"")) {
            if(((struct sType* )come_null_checker(type_82, "06type.nc", 3447))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3447))->mMiddleAttribute, "06type.nc", 3447)),"")) {
                __dec_obj244=((struct sType* )come_null_checker(type_82, "06type.nc", 3448))->mMiddleAttribute,
                ((struct sType* )come_null_checker(type_82, "06type.nc", 3448))->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3448))->mMiddleAttribute, "06type.nc", 3448))," "))), "06type.nc", 3448)),attribute_135));
                __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0,0, (void*)0);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                __dec_obj245=((struct sType* )come_null_checker(type_82, "06type.nc", 3451))->mMiddleAttribute,
                ((struct sType* )come_null_checker(type_82, "06type.nc", 3451))->mMiddleAttribute=(char* )come_increment_ref_count(attribute_135);
                __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0, (void*)0);
            }
            __dec_obj246=attribute_135,
            attribute_135=(char*)come_increment_ref_count(xsprintf(""));
            __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0, (void*)0);
        }
        if(!parse_variable_name) {
            append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute_135),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __dec_obj247=var_name_83,
            var_name_83=(char* )come_increment_ref_count(parse_variable_name_fun(type_82,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_135),info));
            __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0);
        }
        (attribute_135 = come_decrement_ref_count(attribute_135, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    skip_spaces_and_lf(info);
    array_num_typedef=((void*)0);
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3466))->mArrayNum, "06type.nc", 3466)))>0) {
        __dec_obj248=array_num_typedef,
        array_num_typedef=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(type_82, "06type.nc", 3467))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj248,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3468))->mArrayNum, "06type.nc", 3468)));
    }
    while(*((struct sInfo* )come_null_checker(info, "06type.nc", 3471))->p==91) {
        ((struct sInfo* )come_null_checker(info, "06type.nc", 3472))->p++;
        skip_spaces_and_lf(info);
        array_static=(_Bool)0;
        array_restrict=(_Bool)0;
        while(1) {
            if(parsecmp("static",info)) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3479))->p+=strlen("static");
                skip_spaces_and_lf(info);
                array_static=(_Bool)1;
            }
            else if(parsecmp("restrict",info)) {
                ((struct sInfo* )come_null_checker(info, "06type.nc", 3485))->p+=strlen("restrict");
                skip_spaces_and_lf(info);
                array_restrict=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        if(*((struct sInfo* )come_null_checker(info, "06type.nc", 3497))->p==93) {
            ((struct sInfo* )come_null_checker(info, "06type.nc", 3498))->p++;
            skip_spaces_and_lf(info);
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3501))->mArrayPointerType=(_Bool)1;
            break;
        }
        skip_spaces_and_lf(info);
        node_136=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3508))->mArrayNum, "06type.nc", 3508)),(struct sNode*)come_increment_ref_count(node_136));
        list$1int$_push_back(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3509))->mArrayStatic, "06type.nc", 3509)),array_static);
        list$1int$_push_back(((struct list$1int$*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3510))->mArrayRestrict, "06type.nc", 3510)),array_restrict);
        expected_next_character(93,info);
        ((node_136) ? node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    if(array_num_typedef) {
        ({        __current_stack2__.info = &info;
        __current_stack2__.parse_variable_name = &parse_variable_name;
        __current_stack2__.parse_multiple_type = &parse_multiple_type;
        __current_stack2__.in_function_parametor = &in_function_parametor;
        __current_stack2__.head = &head;
        __current_stack2__.head_sline = &head_sline;
        __current_stack2__.attribute_before = &attribute_before;
        __current_stack2__.type_name = &type_name;
        __current_stack2__.norecord = &norecord;
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
        __current_stack2__.alignas_ = &alignas_;
        __current_stack2__.alignas_double = &alignas_double;
        __current_stack2__.tag_attribute = &tag_attribute;
        __current_stack2__.struct_define_parsed = &struct_define_parsed;
        __current_stack2__.anonymous_type = &anonymous_type;
        __current_stack2__.anonymous_name = &anonymous_name;
        __current_stack2__.atomic_ = &atomic_;
        __current_stack2__.thread_local = &thread_local;
        __current_stack2__.thread_ = &thread_;
        __current_stack2__.attribute_81 = &attribute_81;
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
        __current_stack2__.type_82 = &type_82;
        __current_stack2__.var_name_83 = &var_name_83;
        __current_stack2__.function_pointer_flag = &function_pointer_flag;
        __current_stack2__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack2__.var_name_between_brace = &var_name_between_brace;
        __current_stack2__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3516))->mArrayNum, "06type.nc", 3519)),&__current_stack2__,(void*)method_block2_06typenc);
        list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3519))->mArrayNum, "06type.nc", 3519)));
        ({        __current_stack3__.info = &info;
        __current_stack3__.parse_variable_name = &parse_variable_name;
        __current_stack3__.parse_multiple_type = &parse_multiple_type;
        __current_stack3__.in_function_parametor = &in_function_parametor;
        __current_stack3__.head = &head;
        __current_stack3__.head_sline = &head_sline;
        __current_stack3__.attribute_before = &attribute_before;
        __current_stack3__.type_name = &type_name;
        __current_stack3__.norecord = &norecord;
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
        __current_stack3__.alignas_ = &alignas_;
        __current_stack3__.alignas_double = &alignas_double;
        __current_stack3__.tag_attribute = &tag_attribute;
        __current_stack3__.struct_define_parsed = &struct_define_parsed;
        __current_stack3__.anonymous_type = &anonymous_type;
        __current_stack3__.anonymous_name = &anonymous_name;
        __current_stack3__.atomic_ = &atomic_;
        __current_stack3__.thread_local = &thread_local;
        __current_stack3__.thread_ = &thread_;
        __current_stack3__.attribute_81 = &attribute_81;
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
        __current_stack3__.type_82 = &type_82;
        __current_stack3__.var_name_83 = &var_name_83;
        __current_stack3__.function_pointer_flag = &function_pointer_flag;
        __current_stack3__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack3__.var_name_between_brace = &var_name_between_brace;
        __current_stack3__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(((struct list$1sNode$ph*)come_null_checker(array_num_typedef, "06type.nc", 3523)),&__current_stack3__,(void*)method_block3_06typenc);
    }
    multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name_139=(char* )come_increment_ref_count(multiple_assign_var11->v1);
    attribute2=(char* )come_increment_ref_count(multiple_assign_var11->v2);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute2),parse_variable_name,info);
    __dec_obj249=((struct sType* )come_null_checker(type_82, "06type.nc", 3528))->mAsmName,
    ((struct sType* )come_null_checker(type_82, "06type.nc", 3528))->mAsmName=(char* )come_increment_ref_count(asm_name_139);
    __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0, (void*)0);
    skip_spaces_and_lf(info);
    if(((struct sType* )come_null_checker(type_82, "06type.nc", 3532))->mChannel) {
        type_before=(struct sType* )come_increment_ref_count(sType_clone(type_82));
        __dec_obj250=type_82,
        type_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 3534, "struct sType* "))), "06type.nc", 3534))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
        come_call_finalizer(sType_finalize, __dec_obj250,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        __dec_obj251=((struct sType* )come_null_checker(type_82, "06type.nc", 3535))->mArrayNum,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3535))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2")),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06type.nc", 3535, "struct list$1sNode$ph")),1,__list_values1__)));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj251,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        __dec_obj252=((struct sType* )come_null_checker(type_82, "06type.nc", 3536))->mChannelType,
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3536))->mChannelType=(struct sType* )come_increment_ref_count(type_before);
        come_call_finalizer(sType_finalize, __dec_obj252,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct sType* )come_null_checker(type_82, "06type.nc", 3537))->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(type_82&&string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3540))->mClass, "06type.nc", 3540))->mName, "06type.nc", 3540)),"lambda")&&string_operator_not_equals(((char* )come_null_checker(attribute_81, "06type.nc", 3540)),"")) {
        if(((struct sType* )come_null_checker(type_82, "06type.nc", 3541))->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3541))->mMiddleAttribute, "06type.nc", 3541)),"")) {
            __dec_obj253=((struct sType* )come_null_checker(type_82, "06type.nc", 3542))->mMiddleAttribute,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3542))->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value1=string_operator_add(((char* )come_null_checker(((struct sType* )come_null_checker(type_82, "06type.nc", 3542))->mMiddleAttribute, "06type.nc", 3542))," "))), "06type.nc", 3542)),attribute_81));
            __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0, (void*)0);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        else {
            __dec_obj254=((struct sType* )come_null_checker(type_82, "06type.nc", 3545))->mMiddleAttribute,
            ((struct sType* )come_null_checker(type_82, "06type.nc", 3545))->mMiddleAttribute=(char* )come_increment_ref_count(attribute_81);
            __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0, (void*)0);
        }
        __dec_obj255=attribute_81,
        attribute_81=(char*)come_increment_ref_count(xsprintf(""));
        __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0,0, (void*)0);
    }
    append_attribute_to_type(type_82,(char* )come_increment_ref_count(attribute_81),parse_variable_name,info);
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "06type.nc", 3551, "struct tuple3$3sType$phchar$ph_Bool$")),(struct sType* )come_increment_ref_count(type_82),(char* )come_increment_ref_count(var_name_83),(_Bool)1))));
    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (attribute_81 = come_decrement_ref_count(attribute_81, (void*)0, (void*)0, 0, 0, (void*)0));
    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name_83 = come_decrement_ref_count(var_name_83, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_typedef, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (asm_name_139 = come_decrement_ref_count(asm_name_139, (void*)0, (void*)0, 0, 0, (void*)0));
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
    return ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1924))->len;
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_102  ;
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
    memset(&default_value_102,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_102);
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
    char*  default_value_103  ;
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
    memset(&default_value_103,0,sizeof(char* ));
    __result_obj__0 = (char* )come_increment_ref_count(default_value_103);
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1881))->head;
    i=0;
    while(it!=((void*)0)) {
        end_flag=(_Bool)0;
        block(parent,(struct sNode*)come_increment_ref_count(((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1885))->item),i,&end_flag);
        if(end_flag==(_Bool)1) {
            break;
        }
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1890))->next;
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
    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker((*(parent->type_82)), "06type.nc", 3045))->mArrayNum, "06type.nc", 3045)),(struct sNode*)come_increment_ref_count(sNode_clone(it)));
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
    struct sClass*  default_value_124  ;
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
                memset(&default_value_124,0,sizeof(struct sClass* ));
                ((struct sClass** )come_null_checker(items, "/usr/local/include/neo-c.h", 2999))[n]=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(((struct map$2char$phsClass$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2999)),it,(struct sClass* )come_increment_ref_count(default_value_124),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer(sClass_finalize, default_value_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    char*  result_122  ;
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
    memset(&result_122,0,sizeof(char* ));
    __result_obj__0 = result_122;
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
    char*  result_123  ;
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
    memset(&result_123,0,sizeof(char* ));
    __result_obj__0 = result_123;
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
    struct list_item$1char$ph* it_125;
    int i_126;
    struct list_item$1char$ph* prev_it_127;
    struct list_item$1char$ph* it_128;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_129;
    struct list_item$1char$ph* prev_it_130;
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
        it_125=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2102))->head;
        i_126=0;
        while(it_125!=((void*)0)) {
            if(i_126==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2106))->tail=((struct list_item$1char$ph*)come_null_checker(it_125, "/usr/local/include/neo-c.h", 2106))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2107))->tail, "/usr/local/include/neo-c.h", 2107))->next=((void*)0);
            }
            if(i_126>=head) {
                prev_it_127=it_125;
                it_125=((struct list_item$1char$ph*)come_null_checker(it_125, "/usr/local/include/neo-c.h", 2113))->next;
                i_126++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2118))->len--;
            }
            else {
                it_125=((struct list_item$1char$ph*)come_null_checker(it_125, "/usr/local/include/neo-c.h", 2121))->next;
                i_126++;
            }
        }
    }
    else {
        it_128=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2127))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_129=0;
        while(it_128!=((void*)0)) {
            if(i_129==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_128, "/usr/local/include/neo-c.h", 2136))->prev;
            }
            if(i_129==tail) {
                tail_it=it_128;
            }
            if(i_129>=head&&i_129<tail) {
                prev_it_130=it_128;
                it_128=((struct list_item$1char$ph*)come_null_checker(it_128, "/usr/local/include/neo-c.h", 2146))->next;
                i_129++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2151))->len--;
            }
            else {
                it_128=((struct list_item$1char$ph*)come_null_checker(it_128, "/usr/local/include/neo-c.h", 2154))->next;
                i_129++;
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
    it=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2004))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1sNode$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2007))->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2011))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2012))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2014))->len=0;
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
    struct list_item$1int$* litem_137;
    struct list_item$1int$* litem_138;
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
        litem_137=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1781, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_137, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1int$*)come_null_checker(litem_137, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_137, "/usr/local/include/neo-c.h", 1785))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_137;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1791, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_138, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_138, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_138, "/usr/local/include/neo-c.h", 1795))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_138;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_138;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block2_06typenc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_06typenc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker((*(parent->type_82)), "06type.nc", 3518))->mVarNameArrayNum, "06type.nc", 3518)),(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
}

void method_block3_06typenc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block3_06typenc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker((*(parent->type_82)), "06type.nc", 3522))->mArrayNum, "06type.nc", 3522)),(struct sNode*)come_increment_ref_count(sNode_clone(it)));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sNode$ph* __result_obj__0;
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->head=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1642))->tail=((void*)0);
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1643))->len=0;
    for(i=0;i<num_value;i++){
        list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1646)),(struct sNode*)come_increment_ref_count(((struct sNode**)come_null_checker(values, "/usr/local/include/neo-c.h", 1646))[i]));
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
    return ((struct sType* )come_null_checker(type, "06type.nc", 3561))->mPointerNum>0||((struct sType* )come_null_checker(type, "06type.nc", 3561))->mArrayPointerNum>0||((struct sType* )come_null_checker(type, "06type.nc", 3561))->mArrayPointerType;
    neo_current_frame = fr.prev;
}

_Bool is_arithmetic_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_arithmetic_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3566))->mClass, "06type.nc", 3566))->mNumber||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3566))->mClass, "06type.nc", 3566))->mFloat||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3566))->mClass, "06type.nc", 3566))->mEnum;
    neo_current_frame = fr.prev;
}

_Bool is_integer_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_integer_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3571))->mClass, "06type.nc", 3571))->mNumber&&!((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3571))->mClass, "06type.nc", 3571))->mFloat)||((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3571))->mClass, "06type.nc", 3571))->mEnum;
    neo_current_frame = fr.prev;
}

_Bool is_null_pointer_constant(struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_null_pointer_constant"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  s  ;
    _Bool __result_obj__0;
    if(come_value==((void*)0)||((struct CVALUE* )come_null_checker(come_value, "06type.nc", 3576))->c_value==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    s=(char* )come_increment_ref_count(__builtin_string(((struct CVALUE* )come_null_checker(come_value, "06type.nc", 3579))->c_value));
    if(string_operator_equals(((char* )come_null_checker(s, "06type.nc", 3580)),"0")||string_operator_equals(((char* )come_null_checker(s, "06type.nc", 3580)),"NULL")||string_operator_equals(((char* )come_null_checker(s, "06type.nc", 3580)),"nullptr")) {
        __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(((char* )come_null_checker(s, "06type.nc", 3583)),"(void*)0",-1)!=-1||string_index(((char* )come_null_checker(s, "06type.nc", 3583)),"((void*)0)",-1)!=-1) {
        __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(((char* )come_null_checker(s, "06type.nc", 3586)),"NULL",-1)!=-1) {
        __result_obj__0 = (_Bool)1;
        (s = come_decrement_ref_count(s, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(string_index(((char* )come_null_checker(s, "06type.nc", 3589)),"0x0",-1)!=-1) {
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

_Bool is_generic_void_pointer_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_generic_void_pointer_compatible"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  left_type_name  ;
    char*  right_type_name  ;
    int left_generic_pos;
    int right_generic_pos;
    _Bool __result_obj__0;
    char*  left_wrapper  ;
    char*  right_wrapper  ;
    _Bool left_void_generic;
    _Bool right_void_generic;
    if(left_type==((void*)0)||right_type==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_type_name=(char* )come_increment_ref_count(make_come_type_name_string(left_type,info));
    right_type_name=(char* )come_increment_ref_count(make_come_type_name_string(right_type,info));
    left_generic_pos=string_index(((char* )come_null_checker(left_type_name, "06type.nc", 3603)),"<",-1);
    right_generic_pos=string_index(((char* )come_null_checker(right_type_name, "06type.nc", 3604)),"<",-1);
    if(left_generic_pos<=0||right_generic_pos<=0) {
        __result_obj__0 = (_Bool)0;
        (left_type_name = come_decrement_ref_count(left_type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (right_type_name = come_decrement_ref_count(right_type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_wrapper=(char* )come_increment_ref_count(charp_substring(((char* )come_null_checker(left_type_name, "06type.nc", 3609)),0,left_generic_pos));
    right_wrapper=(char* )come_increment_ref_count(charp_substring(((char* )come_null_checker(right_type_name, "06type.nc", 3610)),0,right_generic_pos));
    if(string_operator_not_equals(((char* )come_null_checker(left_wrapper, "06type.nc", 3611)),right_wrapper)) {
        __result_obj__0 = (_Bool)0;
        (left_type_name = come_decrement_ref_count(left_type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (right_type_name = come_decrement_ref_count(right_type_name, (void*)0, (void*)0, 0, 0, (void*)0));
        (left_wrapper = come_decrement_ref_count(left_wrapper, (void*)0, (void*)0, 0, 0, (void*)0));
        (right_wrapper = come_decrement_ref_count(right_wrapper, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_void_generic=string_index(((char* )come_null_checker(left_type_name, "06type.nc", 3615)),"<void",-1)>=0;
    right_void_generic=string_index(((char* )come_null_checker(right_type_name, "06type.nc", 3616)),"<void",-1)>=0;
    __result_obj__0 = left_void_generic||right_void_generic;
    (left_type_name = come_decrement_ref_count(left_type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (right_type_name = come_decrement_ref_count(right_type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    (left_wrapper = come_decrement_ref_count(left_wrapper, (void*)0, (void*)0, 0, 0, (void*)0));
    (right_wrapper = come_decrement_ref_count(right_wrapper, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool is_span_class_name(const char* class_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_span_class_name"; neo_current_frame = &fr;
    if(class_name==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return charp_operator_equals(((const char*)come_null_checker(class_name, "06type.nc", 3627)),"span")||(strlen(class_name)>5&&memcmp(class_name,"span$",5)==0);
    neo_current_frame = fr.prev;
}

_Bool is_span_wrapper_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_span_wrapper_compatible"; neo_current_frame = &fr;
    if(left_type==((void*)0)||right_type==((void*)0)||((struct sType* )come_null_checker(left_type, "06type.nc", 3633))->mClass==((void*)0)||((struct sType* )come_null_checker(right_type, "06type.nc", 3633))->mClass==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return is_span_class_name(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type, "06type.nc", 3637))->mClass, "06type.nc", 3637))->mName,info)&&is_span_class_name(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type, "06type.nc", 3638))->mClass, "06type.nc", 3638))->mName,info);
    neo_current_frame = fr.prev;
}

_Bool is_transparent_union_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_transparent_union_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  attr  ;
    _Bool __result_obj__0;
    if(type==((void*)0)||((struct sType* )come_null_checker(type, "06type.nc", 3643))->mClass==((void*)0)||!((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3643))->mClass, "06type.nc", 3643))->mUnion) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3646))->mClass, "06type.nc", 3646))->mAttribute==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    attr=(char* )come_increment_ref_count(__builtin_string(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3649))->mClass, "06type.nc", 3649))->mAttribute));
    __result_obj__0 = string_index(((char* )come_null_checker(attr, "06type.nc", 3650)),"transparent_union",-1)>=0;
    (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool pointer_attr_has_word(struct sType*  type  , const char* word, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pointer_attr_has_word"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  s  ;
    _Bool __result_obj__0;
    if(type==((void*)0)||((struct sType* )come_null_checker(type, "06type.nc", 3655))->mPointerAttribute==((void*)0)||string_operator_equals(((char* )come_null_checker(((struct sType* )come_null_checker(type, "06type.nc", 3655))->mPointerAttribute, "06type.nc", 3655)),"")) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    s=(char* )come_increment_ref_count(__builtin_string(((struct sType* )come_null_checker(type, "06type.nc", 3658))->mPointerAttribute));
    __result_obj__0 = string_index(((char* )come_null_checker(s, "06type.nc", 3659)),word,-1)!=-1;
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
    __result_obj__0 = attr==((void*)0)||string_operator_equals(((char* )come_null_checker(attr, "06type.nc", 3679)),"");
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
    __result_obj__0 = string_operator_equals(((char* )come_null_checker(left_attr, "06type.nc", 3690)),right_attr);
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
    _Bool suppress_array_restore;
    int array_ptr;
    struct list$1sNode$ph* __dec_obj256;
    char*  __dec_obj257  ;
    char*  __dec_obj258  ;
    char*  __dec_obj259  ;
    struct list$1sType$ph* __dec_obj260;
    struct sType*  __dec_obj261  ;
    struct sType*  __dec_obj262  ;
    struct sType*  __result_obj__0  ;
    result=(struct sType* )come_increment_ref_count(sType_clone(type));
    guard=0;
    while(((struct sType* )come_null_checker(result, "06type.nc", 3697))->mTypedefOriginalType&&guard<16) {
        orig=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result, "06type.nc", 3698))->mTypedefOriginalType));
        ptr=((struct sType* )come_null_checker(result, "06type.nc", 3700))->mPointerNum;
        suppress_ptr_restore=((struct sType* )come_null_checker(result, "06type.nc", 3701))->mOriginalLoadVarType!=((void*)0)&&((struct sType* )come_null_checker(result, "06type.nc", 3701))->mPointerNum==0;
        suppress_array_restore=((struct sType* )come_null_checker(result, "06type.nc", 3702))->mOriginalLoadVarType!=((void*)0)&&((struct sType* )come_null_checker(result, "06type.nc", 3703))->mPointerNum==0&&((struct sType* )come_null_checker(result, "06type.nc", 3704))->mArrayPointerNum==0&&!((struct sType* )come_null_checker(result, "06type.nc", 3706))->mArrayPointerType&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result, "06type.nc", 3706))->mArrayNum, "06type.nc", 3706)))==0;
        if(!suppress_ptr_restore&&ptr==0&&((struct sType* )come_null_checker(orig, "06type.nc", 3707))->mPointerNum>0) {
            ptr=((struct sType* )come_null_checker(orig, "06type.nc", 3708))->mPointerNum;
        }
        ((struct sType* )come_null_checker(orig, "06type.nc", 3710))->mPointerNum=ptr;
        array_ptr=((struct sType* )come_null_checker(result, "06type.nc", 3712))->mArrayPointerNum;
        if(!suppress_array_restore&&array_ptr==0&&((struct sType* )come_null_checker(orig, "06type.nc", 3713))->mArrayPointerNum>0) {
            array_ptr=((struct sType* )come_null_checker(orig, "06type.nc", 3714))->mArrayPointerNum;
        }
        ((struct sType* )come_null_checker(orig, "06type.nc", 3716))->mArrayPointerNum=array_ptr;
        if(((struct sType* )come_null_checker(result, "06type.nc", 3718))->mArrayPointerType) {
            ((struct sType* )come_null_checker(orig, "06type.nc", 3719))->mArrayPointerType=(_Bool)1;
        }
        else if(suppress_array_restore) {
            ((struct sType* )come_null_checker(orig, "06type.nc", 3722))->mArrayPointerType=(_Bool)0;
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(result, "06type.nc", 3724))->mArrayNum, "06type.nc", 3724)))>0) {
            __dec_obj256=((struct sType* )come_null_checker(orig, "06type.nc", 3725))->mArrayNum,
            ((struct sType* )come_null_checker(orig, "06type.nc", 3725))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(result, "06type.nc", 3725))->mArrayNum));
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj256,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(suppress_array_restore) {
            list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(orig, "06type.nc", 3728))->mArrayNum, "06type.nc", 3728)));
        }
        ((struct sType* )come_null_checker(orig, "06type.nc", 3731))->mConstant=((struct sType* )come_null_checker(result, "06type.nc", 3731))->mConstant;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3732))->mVolatile=((struct sType* )come_null_checker(result, "06type.nc", 3732))->mVolatile;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3733))->mRestrict=((struct sType* )come_null_checker(result, "06type.nc", 3733))->mRestrict;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3734))->mUnsigned=((struct sType* )come_null_checker(result, "06type.nc", 3734))->mUnsigned;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3735))->mShort=((struct sType* )come_null_checker(result, "06type.nc", 3735))->mShort;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3736))->mLong=((struct sType* )come_null_checker(result, "06type.nc", 3736))->mLong;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3737))->mLongLong=((struct sType* )come_null_checker(result, "06type.nc", 3737))->mLongLong;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3738))->mComplex=((struct sType* )come_null_checker(result, "06type.nc", 3738))->mComplex;
        ((struct sType* )come_null_checker(orig, "06type.nc", 3739))->mAtomic=((struct sType* )come_null_checker(result, "06type.nc", 3739))->mAtomic;
        __dec_obj257=((struct sType* )come_null_checker(orig, "06type.nc", 3741))->mPointerAttribute,
        ((struct sType* )come_null_checker(orig, "06type.nc", 3741))->mPointerAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "06type.nc", 3741))->mPointerAttribute);
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj258=((struct sType* )come_null_checker(orig, "06type.nc", 3742))->mAttribute,
        ((struct sType* )come_null_checker(orig, "06type.nc", 3742))->mAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "06type.nc", 3742))->mAttribute);
        __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0,0, (void*)0);
        __dec_obj259=((struct sType* )come_null_checker(orig, "06type.nc", 3743))->mVarAttribute,
        ((struct sType* )come_null_checker(orig, "06type.nc", 3743))->mVarAttribute=(char* )come_increment_ref_count(((struct sType* )come_null_checker(result, "06type.nc", 3743))->mVarAttribute);
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0, (void*)0);
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(result, "06type.nc", 3745))->mGenericsTypes, "06type.nc", 3745)))>0) {
            __dec_obj260=((struct sType* )come_null_checker(orig, "06type.nc", 3746))->mGenericsTypes,
            ((struct sType* )come_null_checker(orig, "06type.nc", 3746))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(result, "06type.nc", 3746))->mGenericsTypes));
            come_call_finalizer(list$1sType$ph_finalize, __dec_obj260,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(((struct sType* )come_null_checker(result, "06type.nc", 3748))->mNoSolvedGenericsType) {
            __dec_obj261=((struct sType* )come_null_checker(orig, "06type.nc", 3749))->mNoSolvedGenericsType,
            ((struct sType* )come_null_checker(orig, "06type.nc", 3749))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(result, "06type.nc", 3749))->mNoSolvedGenericsType));
            come_call_finalizer(sType_finalize, __dec_obj261,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj262=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(orig));
        come_call_finalizer(sType_finalize, __dec_obj262,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(klass, "06type.nc", 3766))->mName, "06type.nc", 3766)),((struct sClass* )come_null_checker(parent, "06type.nc", 3766))->mName)) {
            neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        if(((struct sClass* )come_null_checker(klass, "06type.nc", 3769))->mParentClassName) {
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 3770))->classes, "06type.nc", 3770)), "06type.nc", 3770)),((struct sClass* )come_null_checker(klass, "06type.nc", 3770))->mParentClassName)));
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
    struct sType*  __dec_obj263  ;
    _Bool use_original_140;
    struct sType*  __dec_obj264  ;
    _Bool __result_obj__0;
    int i;
    struct sType*  left_g  ;
    struct sType*  right_g  ;
    int i_143;
    struct sType*  lparam  ;
    struct sType*  rparam  ;
    if(left_type==((void*)0)||right_type==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type));
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type));
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3788))->mOriginalLoadVarType) {
        use_original=((struct sType* )come_null_checker(left_type2, "06type.nc", 3789))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3790))->mArrayNum, "06type.nc", 3790)))==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3791))->mPointerNum==0;
        if(use_original) {
            __dec_obj263=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(left_type2, "06type.nc", 3793))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj263,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(((struct sType* )come_null_checker(right_type2, "06type.nc", 3796))->mOriginalLoadVarType) {
        use_original_140=((struct sType* )come_null_checker(right_type2, "06type.nc", 3797))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3798))->mArrayNum, "06type.nc", 3798)))==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3799))->mPointerNum==0;
        if(use_original_140) {
            __dec_obj264=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(right_type2, "06type.nc", 3801))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj264,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3805))->mClass, "06type.nc", 3805))->mName, "06type.nc", 3805)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3805))->mClass, "06type.nc", 3805))->mName)) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3809))->mPointerNum!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3809))->mPointerNum) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3812))->mArrayPointerNum!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3812))->mArrayPointerNum) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3815))->mArrayPointerType!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3815))->mArrayPointerType) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3819))->mUnsigned!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3819))->mUnsigned) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3822))->mShort!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3822))->mShort) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3825))->mLong!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3825))->mLong) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3828))->mLongLong!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3828))->mLongLong) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3831))->mComplex!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3831))->mComplex) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3834))->mAtomic!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3834))->mAtomic) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3838))->mGenericsTypes, "06type.nc", 3838)))!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3838))->mGenericsTypes, "06type.nc", 3838)))) {
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(i=0;i<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3841))->mGenericsTypes, "06type.nc", 3841)));i++){
        left_g=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3842))->mGenericsTypes, "06type.nc", 3842)), "06type.nc", 3842)),i)));
        right_g=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3843))->mGenericsTypes, "06type.nc", 3843)), "06type.nc", 3843)),i)));
        if(!is_same_type_ignoring_qualifier(left_g,right_g,info)) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3849))->mClass, "06type.nc", 3849))->mName, "06type.nc", 3849)),"lambda")) {
        if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3850))->mVarArgs!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3850))->mVarArgs) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3853))->mParamTypes, "06type.nc", 3853)))!=list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3853))->mParamTypes, "06type.nc", 3853)))) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(!is_same_type_ignoring_qualifier(((struct sType* )come_null_checker(left_type2, "06type.nc", 3856))->mResultType,((struct sType* )come_null_checker(right_type2, "06type.nc", 3856))->mResultType,info)) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        for(i_143=0;i_143<list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3859))->mParamTypes, "06type.nc", 3859)));i_143++){
            lparam=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3860))->mParamTypes, "06type.nc", 3860)), "06type.nc", 3860)),i_143)));
            rparam=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3861))->mParamTypes, "06type.nc", 3861)), "06type.nc", 3861)),i_143)));
            if(!is_same_type_ignoring_qualifier(lparam,rparam,info)) {
                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3866))->mFunctionPointerNum!=((struct sType* )come_null_checker(right_type2, "06type.nc", 3866))->mFunctionPointerNum) {
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
    struct sType*  default_value_141  ;
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
    memset(&default_value_141,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_141);
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
    struct sType*  default_value_142  ;
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
    memset(&default_value_142,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_142);
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
    struct sType*  __dec_obj265  ;
    _Bool use_original_144;
    struct sType*  __dec_obj266  ;
    _Bool __result_obj__0;
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type));
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type));
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3879))->mOriginalLoadVarType) {
        use_original=((struct sType* )come_null_checker(left_type2, "06type.nc", 3880))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3881))->mArrayNum, "06type.nc", 3881)))==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3882))->mPointerNum==0;
        if(use_original) {
            __dec_obj265=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(left_type2, "06type.nc", 3884))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj265,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(((struct sType* )come_null_checker(right_type2, "06type.nc", 3887))->mOriginalLoadVarType) {
        use_original_144=((struct sType* )come_null_checker(right_type2, "06type.nc", 3888))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3889))->mArrayNum, "06type.nc", 3889)))==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3890))->mPointerNum==0;
        if(use_original_144) {
            __dec_obj266=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(right_type2, "06type.nc", 3892))->mOriginalLoadVarType));
            come_call_finalizer(sType_finalize, __dec_obj266,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3896))->mPointerNum=0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3897))->mArrayPointerNum=0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3898))->mArrayPointerType=(_Bool)0;
    list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3899))->mArrayNum, "06type.nc", 3899)));
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3900))->mConstant=(_Bool)0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3901))->mVolatile=(_Bool)0;
    ((struct sType* )come_null_checker(left_type2, "06type.nc", 3902))->mRestrict=(_Bool)0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3904))->mPointerNum=0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3905))->mArrayPointerNum=0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3906))->mArrayPointerType=(_Bool)0;
    list$1sNode$ph_reset(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3907))->mArrayNum, "06type.nc", 3907)));
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3908))->mConstant=(_Bool)0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3909))->mVolatile=(_Bool)0;
    ((struct sType* )come_null_checker(right_type2, "06type.nc", 3910))->mRestrict=(_Bool)0;
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
    struct sType*  __dec_obj267  ;
    struct sType*  right_type2  ;
    _Bool use_original_145;
    struct sType*  tmp_146  ;
    struct sType*  __dec_obj268  ;
    struct sType*  __dec_obj269  ;
    struct sType*  __dec_obj270  ;
    _Bool __result_obj__0;
    _Bool left_lambda;
    _Bool right_lambda;
    _Bool left_ptr;
    _Bool right_ptr;
    _Bool left_array;
    _Bool right_array;
    int left_ptr_num;
    int right_ptr_num;
    _Bool left_void;
    _Bool right_void;
    _Bool explicit_cast_value;
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
    _Bool return_type_check;
    _Bool typedef_array_decay_scalar;
    if(left_type==((void*)0)||right_type==((void*)0)) {
        warning_msg(info,"invalid assign type(type is null). %s",msg);
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(((struct sType* )come_null_checker(left_type, "06type.nc", 3921))->mClass==((void*)0)||((struct sType* )come_null_checker(right_type, "06type.nc", 3921))->mClass==((void*)0)) {
        warning_msg(info,"invalid assign type(class is null). %s",msg);
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type));
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3927))->mOriginalLoadVarType) {
        use_original=((struct sType* )come_null_checker(left_type2, "06type.nc", 3928))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3929))->mArrayNum, "06type.nc", 3929)))==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3930))->mPointerNum==0;
        if(use_original) {
            tmp=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(left_type2, "06type.nc", 3932))->mOriginalLoadVarType);
            __dec_obj267=left_type2,
            left_type2=(struct sType* )come_increment_ref_count(sType_clone(tmp));
            come_call_finalizer(sType_finalize, __dec_obj267,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, tmp, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    right_type2=(struct sType* )come_increment_ref_count(sType_clone(right_type));
    if(((struct sType* )come_null_checker(right_type2, "06type.nc", 3937))->mOriginalLoadVarType) {
        use_original_145=((struct sType* )come_null_checker(right_type2, "06type.nc", 3938))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3939))->mArrayNum, "06type.nc", 3939)))==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3940))->mPointerNum==0;
        if(use_original_145) {
            tmp_146=(struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(right_type2, "06type.nc", 3942))->mOriginalLoadVarType);
            __dec_obj268=right_type2,
            right_type2=(struct sType* )come_increment_ref_count(sType_clone(tmp_146));
            come_call_finalizer(sType_finalize, __dec_obj268,(void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, tmp_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj269=left_type2,
    left_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(left_type2,info));
    come_call_finalizer(sType_finalize, __dec_obj269,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj270=right_type2,
    right_type2=(struct sType* )come_increment_ref_count(expand_typedef_for_assign(right_type2,info));
    come_call_finalizer(sType_finalize, __dec_obj270,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(((struct sType* )come_null_checker(left_type2, "06type.nc", 3950))->mClass==((void*)0)||((struct sType* )come_null_checker(right_type2, "06type.nc", 3950))->mClass==((void*)0)) {
        warning_msg(info,"invalid assign type(expanded class is null). %s",msg);
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_lambda=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3955))->mClass, "06type.nc", 3955))->mName, "06type.nc", 3955)),"lambda");
    right_lambda=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3956))->mClass, "06type.nc", 3956))->mName, "06type.nc", 3956)),"lambda");
    if(left_lambda||right_lambda) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(is_transparent_union_type(left_type2,info)&&!((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3965))->mClass, "06type.nc", 3966))->mStruct&&!((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3966))->mClass, "06type.nc", 3966))->mUnion) {
        __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_ptr=is_pointer_type(left_type2,info);
    right_ptr=is_pointer_type(right_type2,info);
    left_array=list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 3974))->mArrayNum, "06type.nc", 3974)))>0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3975))->mPointerNum==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 3976))->mArrayPointerNum==0;
    right_array=list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 3977))->mArrayNum, "06type.nc", 3977)))>0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3978))->mPointerNum==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 3979))->mArrayPointerNum==0;
    if(left_array&&right_array) {
        if(is_same_base_type_ignoring_qualifier(left_type2,right_type2,info)) {
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        err_msg(info,"invalid array base type. %s",msg);
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
            left_ptr_num=((struct sType* )come_null_checker(left_type2, "06type.nc", 3994))->mPointerNum+(((((struct sType* )come_null_checker(left_type2, "06type.nc", 3994))->mPointerNum==0)?(((struct sType* )come_null_checker(left_type2, "06type.nc", 3994))->mArrayPointerNum):(0)))+(((((struct sType* )come_null_checker(left_type2, "06type.nc", 3995))->mArrayPointerType)?(1):(0)));
            right_ptr_num=((struct sType* )come_null_checker(right_type2, "06type.nc", 3997))->mPointerNum+(((((struct sType* )come_null_checker(right_type2, "06type.nc", 3997))->mPointerNum==0)?(((struct sType* )come_null_checker(right_type2, "06type.nc", 3997))->mArrayPointerNum):(0)))+(((((struct sType* )come_null_checker(right_type2, "06type.nc", 3998))->mArrayPointerType)?(1):(0)))+(((right_array)?(1):(0)));
            left_void=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 4001))->mClass, "06type.nc", 4001))->mName, "06type.nc", 4001)),"void");
            right_void=string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 4002))->mClass, "06type.nc", 4002))->mName, "06type.nc", 4002)),"void");
            explicit_cast_value=come_value!=((void*)0)&&((struct CVALUE* )come_null_checker(come_value, "06type.nc", 4003))->mCastValue;
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
            if(!explicit_cast_value) {
                right_const=((struct sType* )come_null_checker(right_type2, "06type.nc", 4015))->mConstant||pointer_attr_has_const(right_type2,info);
                left_const=((struct sType* )come_null_checker(left_type2, "06type.nc", 4016))->mConstant||pointer_attr_has_const(left_type2,info);
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
                right_volatile=((struct sType* )come_null_checker(right_type2, "06type.nc", 4023))->mVolatile||pointer_attr_has_volatile(right_type2,info);
                left_volatile=((struct sType* )come_null_checker(left_type2, "06type.nc", 4024))->mVolatile||pointer_attr_has_volatile(left_type2,info);
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
                right_restrict=((struct sType* )come_null_checker(right_type2, "06type.nc", 4031))->mRestrict||pointer_attr_has_restrict(right_type2,info);
                left_restrict=((struct sType* )come_null_checker(left_type2, "06type.nc", 4032))->mRestrict||pointer_attr_has_restrict(left_type2,info);
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
            }
            if(left_void||right_void) {
                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            parent_class=(_Bool)0;
            if(string_operator_not_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 4066))->mClass, "06type.nc", 4066))->mName, "06type.nc", 4066)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 4066))->mClass, "06type.nc", 4066))->mName)) {
                klass=((struct sType* )come_null_checker(right_type2, "06type.nc", 4067))->mClass;
                while(klass) {
                    if(string_operator_equals(((char* )come_null_checker(((struct sClass* )come_null_checker(klass, "06type.nc", 4069))->mName, "06type.nc", 4069)),((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 4069))->mClass, "06type.nc", 4069))->mName)) {
                        parent_class=(_Bool)1;
                        break;
                    }
                    if(((struct sClass* )come_null_checker(klass, "06type.nc", 4073))->mParentClassName) {
                        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(((struct map$2char$phsClass$ph*)come_null_checker(((struct map$2char$phsClass$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "06type.nc", 4074))->classes, "06type.nc", 4074)), "06type.nc", 4074)),((struct sClass* )come_null_checker(klass, "06type.nc", 4074))->mParentClassName)));
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
                if(is_span_wrapper_compatible(left_type2,right_type2,info)) {
                    __result_obj__0 = (_Bool)1;
                    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(!is_generic_void_pointer_compatible(left_type2,right_type2,info)) {
                    err_msg(info,"invalid pointer base type. %s",msg);
                    show_type(left_type2,info);
                    show_type(right_type2,info);
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
            return_type_check=string_index(((char* )come_null_checker(((char* )(__right_value0=__builtin_string(msg))), "06type.nc", 4115)),"result type",-1)==0;
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            typedef_array_decay_scalar=return_type_check&&((struct sType* )come_null_checker(left_type2, "06type.nc", 4117))->mPointerNum==0&&((struct sType* )come_null_checker(left_type2, "06type.nc", 4118))->mArrayPointerNum==0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 4119))->mArrayNum, "06type.nc", 4119)))==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 4120))->mPointerNum==0&&((struct sType* )come_null_checker(right_type2, "06type.nc", 4121))->mArrayPointerNum>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 4122))->mArrayNum, "06type.nc", 4122)))==0&&!((struct sType* )come_null_checker(right_type2, "06type.nc", 4124))->mArrayPointerType&&((struct sType* )come_null_checker(right_type2, "06type.nc", 4124))->mOriginalTypeName!=((void*)0)&&string_operator_not_equals(((char* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 4125))->mOriginalTypeName, "06type.nc", 4126)),"")&&is_same_base_type_ignoring_qualifier(left_type2,right_type2,info);
            if(typedef_array_decay_scalar) {
                __result_obj__0 = (_Bool)1;
                come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 4130))->mArrayNum, "06type.nc", 4130)))>0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 4130))->mArrayNum, "06type.nc", 4130)))>0) {
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
    if(!left_ptr&&!right_ptr&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 4167))->mArrayNum, "06type.nc", 4167)))==0&&list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 4167))->mArrayNum, "06type.nc", 4167)))==0) {
        if(((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type2, "06type.nc", 4168))->mClass, "06type.nc", 4168))->mStruct&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(right_type2, "06type.nc", 4168))->mClass, "06type.nc", 4168))->mStruct) {
            if(is_parent_class_of(((struct sType* )come_null_checker(left_type2, "06type.nc", 4169))->mClass,((struct sType* )come_null_checker(right_type2, "06type.nc", 4169))->mClass,info)) {
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
    if(((struct sInfo* )come_null_checker(info, "06type.nc", 4187))->no_output_come_code) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(left_type&&((struct sType* )come_null_checker(left_type, "06type.nc", 4190))->mClass&&((struct sClass* )come_null_checker(((struct sType* )come_null_checker(left_type, "06type.nc", 4190))->mClass, "06type.nc", 4190))->mMethodGenerics) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    neo_current_frame = fr.prev;
    return check_assign_type_safe(msg,left_type,right_type,come_value,info);
    neo_current_frame = fr.prev;
}

void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cast_type"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

