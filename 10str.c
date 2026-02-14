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

struct sStrNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
};

struct sBufferNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct buffer*  value  ;
    unsigned long  size  ;
};

struct sSStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  value  ;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int  value  ;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    int*  value  ;
};

struct sListNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char*  value  , int sline, struct sInfo*  info  );
char*  sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
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
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer*  value  , unsigned long  size  , struct sInfo*  info  );
char*  sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo*  info  );
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  );
char*  sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo*  info  );
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo*  info  );
char*  sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo*  info  );
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int  value  , _Bool quote, struct sInfo*  info  );
char*  sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo*  info  );
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int*  value  , int sline, struct sInfo*  info  );
char*  sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo*  info  );
static void sWStringNode_finalize(struct sWStringNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  );
char*  sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo*  info  );
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  );
char*  sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo*  info  );
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  );
char*  sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo*  info  );
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo*  info  );
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj1  ;
    struct sStrNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)come_null_checker(self, "10str.nc", 7))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj1=((struct sStrNode*)come_null_checker(self, "10str.nc", 9))->value,
    ((struct sStrNode*)come_null_checker(self, "10str.nc", 9))->value=(char* )come_increment_ref_count(__builtin_string(value));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sStrNode*)come_increment_ref_count(self);
    come_call_finalizer(sStrNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStrNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sStrNode_kind(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStrNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj2  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj3  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 19, "struct CVALUE* "))), "10str.nc", 19)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj2=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 21))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 21))->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",((struct sStrNode*)come_null_checker(self, "10str.nc", 21))->value));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj3=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 22))->type,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 22))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 22, "struct sType* "))), "10str.nc", 22))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(gComeSafe) {
        ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value, "10str.nc", 24))->type, "10str.nc", 24))->mConstant=(_Bool)1;
    }
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 26))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 28))->stack, "10str.nc", 28)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "10str.nc", 30))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void sStrNode_finalize(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sStrNode*)come_null_checker(self, "sStrNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sStrNode*)come_null_checker(self, "sStrNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStrNode*)come_null_checker(self, "sStrNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sStrNode*)come_null_checker(self, "sStrNode_finalize", 3))->value!=((void*)0)) {
        (((struct sStrNode*)come_null_checker(self, "sStrNode_finalize", 3))->value = come_decrement_ref_count(((struct sStrNode*)come_null_checker(self, "sStrNode_finalize", 3))->value, (void*)0, (void*)0, 0, 0, (void*)0));
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj4  ;
    struct list_item$1CVALUE$ph* litem_0;
    struct CVALUE*  __dec_obj5  ;
    struct list_item$1CVALUE$ph* litem_1;
    struct CVALUE*  __dec_obj6  ;
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
        __dec_obj4=((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_0=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1781, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj5=((struct list_item$1CVALUE$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1785))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_0;
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), (void*)0, 1791, "struct list_item$1CVALUE$ph*"))));
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj6=((struct list_item$1CVALUE$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1CVALUE$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1795))->item=(struct CVALUE* )come_increment_ref_count(item);
        come_call_finalizer(CVALUE_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_1;
        ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_1;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer*  value  , unsigned long  size  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __dec_obj7  ;
    struct sBufferNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)come_null_checker(self, "10str.nc", 40))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj7=((struct sBufferNode*)come_null_checker(self, "10str.nc", 42))->value,
    ((struct sBufferNode*)come_null_checker(self, "10str.nc", 42))->value=(struct buffer* )come_increment_ref_count(value);
    come_call_finalizer(buffer_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sBufferNode*)come_null_checker(self, "10str.nc", 43))->size=size;
    __result_obj__0 = (struct sBufferNode*)come_increment_ref_count(self);
    come_call_finalizer(sBufferNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBufferNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sBufferNode_kind(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sBufferNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_compile"; neo_current_frame = &fr;
    struct buffer*  value  ;
    unsigned long  size  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    void* __right_value2 = (void*)0;
    struct sType*  type2  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    struct sType*  type2_2  ;
    char*  __dec_obj8  ;
    struct sType*  __dec_obj43  ;
    _Bool __result_obj__0;
    value=(struct buffer* )come_increment_ref_count(((struct sBufferNode*)come_null_checker(self, "10str.nc", 53))->value);
    size=((struct sBufferNode*)come_null_checker(self, "10str.nc", 54))->size;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 56, "struct CVALUE* "))), "10str.nc", 56)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 58, "struct buffer* "))), "10str.nc", 58)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 60, "struct sType* "))), "10str.nc", 60))),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(type2, "10str.nc", 61))->mPointerNum++;
    any_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 63, "struct sType* "))), "10str.nc", 63))),(char*)come_increment_ref_count(xsprintf("buffer")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(any_type, "10str.nc", 64))->mPointerNum=1;
    ((struct sType* )come_null_checker(any_type, "10str.nc", 65))->mHeap=(_Bool)1;
    if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 67))->funcs, "10str.nc", 67)), "10str.nc", 67)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "10str.nc", 68)),"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc_v2(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)",((struct sInfo* )come_null_checker(info, "10str.nc", 68))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 68))->sline,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(value, "10str.nc", 68))))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        buffer_append_format(((struct buffer* )come_null_checker(buf, "10str.nc", 71)),"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s\", %ld)",((struct sInfo* )come_null_checker(info, "10str.nc", 71))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 71))->sline,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(value, "10str.nc", 71))))),size);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type2_2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 74, "struct sType* "))), "10str.nc", 74))),(char*)come_increment_ref_count(xsprintf("buffer*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(type2_2, "10str.nc", 75))->mHeap=(_Bool)1;
    __dec_obj8=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 77))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 77))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "10str.nc", 77))));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj43=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 78))->type,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 78))->type=(struct sType* )come_increment_ref_count(sType_clone(type2_2));
    come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 79))->var=((void*)0);
    append_object_to_right_values(come_value,type2_2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 83))->stack, "10str.nc", 83)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "10str.nc", 85))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBufferNode_finalize(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sBufferNode*)come_null_checker(self, "sBufferNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sBufferNode*)come_null_checker(self, "sBufferNode_finalize", 2))->sname = come_decrement_ref_count(((struct sBufferNode*)come_null_checker(self, "sBufferNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sBufferNode*)come_null_checker(self, "sBufferNode_finalize", 3))->value!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct sBufferNode*)come_null_checker(self, "sBufferNode_finalize", 3))->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj9  ;
    struct sType*  __dec_obj10  ;
    struct list$1sType$ph* __dec_obj14;
    struct sType*  __dec_obj15  ;
    struct sNode* __dec_obj16;
    struct sNode* __dec_obj17;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    struct list$1sNode$ph* __dec_obj29;
    struct list$1sNode$ph* __dec_obj30;
    struct list$1int$* __dec_obj31;
    struct list$1int$* __dec_obj32;
    struct sType*  __dec_obj33  ;
    char*  __dec_obj34  ;
    struct list$1sType$ph* __dec_obj35;
    struct list$1char$ph* __dec_obj39;
    struct sType*  __dec_obj40  ;
    struct sNode* __dec_obj41;
    struct list$1sNode$ph* __dec_obj42;
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
        __dec_obj9=((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType,
        ((struct sType* )come_null_checker(result, "sType_clone", 7))->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 7))->mOriginalLoadVarType));
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType!=((void*)0)) {
        __dec_obj10=((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType,
        ((struct sType* )come_null_checker(result, "sType_clone", 8))->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 8))->mChannelType));
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes!=((void*)0)) {
        __dec_obj14=((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 9))->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 9))->mGenericsTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj15=((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType,
        ((struct sType* )come_null_checker(result, "sType_clone", 10))->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 10))->mNoSolvedGenericsType));
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum!=((void*)0)) {
        __dec_obj16=((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 11))->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 11))->mSizeNum));
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas!=((void*)0)) {
        __dec_obj17=((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas,
        ((struct sType* )come_null_checker(result, "sType_clone", 12))->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 12))->mAlignas));
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 13))->mAlignasDouble=((struct sType* )come_null_checker(self, "sType_clone", 13))->mAlignasDouble;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName!=((void*)0)) {
        __dec_obj18=((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName,
        ((struct sType* )come_null_checker(result, "sType_clone", 14))->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 14))->mTupleName, "sType_clone", 14, "char* "));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute!=((void*)0)) {
        __dec_obj19=((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 15))->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 15))->mAttribute, "sType_clone", 15, "char* "));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute!=((void*)0)) {
        __dec_obj20=((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 16))->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 16))->mVarAttribute, "sType_clone", 16, "char* "));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute!=((void*)0)) {
        __dec_obj21=((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 17))->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 17))->mMiddleAttribute, "sType_clone", 17, "char* "));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute!=((void*)0)) {
        __dec_obj22=((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute,
        ((struct sType* )come_null_checker(result, "sType_clone", 18))->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 18))->mPointerAttribute, "sType_clone", 18, "char* "));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj23=((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName,
        ((struct sType* )come_null_checker(result, "sType_clone", 48))->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 48))->mAnonymousName, "sType_clone", 48, "char* "));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 49))->mInnerStruct=((struct sType* )come_null_checker(self, "sType_clone", 49))->mInnerStruct;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName!=((void*)0)) {
        __dec_obj24=((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName,
        ((struct sType* )come_null_checker(result, "sType_clone", 50))->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 50))->mInnerStructName, "sType_clone", 50, "char* "));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 51))->mAnonymousVarName=((struct sType* )come_null_checker(self, "sType_clone", 51))->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 52))->mInline=((struct sType* )come_null_checker(self, "sType_clone", 52))->mInline;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName!=((void*)0)) {
        __dec_obj25=((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName,
        ((struct sType* )come_null_checker(result, "sType_clone", 53))->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 53))->mAsmName, "sType_clone", 53, "char* "));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 54))->mTypedef=((struct sType* )come_null_checker(self, "sType_clone", 54))->mTypedef;
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 55))->mMultipleTypes=((struct sType* )come_null_checker(self, "sType_clone", 55))->mMultipleTypes;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum!=((void*)0)) {
        __dec_obj29=((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 56))->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 56))->mArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum!=((void*)0)) {
        __dec_obj30=((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 57))->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 57))->mVarNameArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic!=((void*)0)) {
        __dec_obj31=((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic,
        ((struct sType* )come_null_checker(result, "sType_clone", 58))->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 58))->mArrayStatic));
        come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict!=((void*)0)) {
        __dec_obj32=((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict,
        ((struct sType* )come_null_checker(result, "sType_clone", 59))->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 59))->mArrayRestrict));
        come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj33=((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType,
        ((struct sType* )come_null_checker(result, "sType_clone", 65))->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 65))->mTypedefOriginalType));
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName!=((void*)0)) {
        __dec_obj34=((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName,
        ((struct sType* )come_null_checker(result, "sType_clone", 66))->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(((struct sType* )come_null_checker(self, "sType_clone", 66))->mOriginalTypeName, "sType_clone", 66, "char* "));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0);
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
        __dec_obj35=((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes,
        ((struct sType* )come_null_checker(result, "sType_clone", 70))->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 70))->mParamTypes));
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames!=((void*)0)) {
        __dec_obj39=((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames,
        ((struct sType* )come_null_checker(result, "sType_clone", 71))->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 71))->mParamNames));
        come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType!=((void*)0)) {
        __dec_obj40=((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType,
        ((struct sType* )come_null_checker(result, "sType_clone", 72))->mResultType=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )come_null_checker(self, "sType_clone", 72))->mResultType));
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sType* )come_null_checker(result, "sType_clone", 73))->mVarArgs=((struct sType* )come_null_checker(self, "sType_clone", 73))->mVarArgs;
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode!=((void*)0)) {
        __dec_obj41=((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode,
        ((struct sType* )come_null_checker(result, "sType_clone", 74))->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(((struct sType* )come_null_checker(self, "sType_clone", 74))->mTypeOfNode));
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0) :0);
    }
    if(self!=((void*)0)&&((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum!=((void*)0)) {
        __dec_obj42=((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum,
        ((struct sType* )come_null_checker(result, "sType_clone", 75))->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sType* )come_null_checker(self, "sType_clone", 75))->mHeapArrayNum));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    struct sType*  __dec_obj11  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj12  ;
    struct list_item$1sType$ph* litem_4;
    struct sType*  __dec_obj13  ;
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
        __dec_obj11=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1696, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj12=((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1700))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_3;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_3;
    }
    else {
        litem_4=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1706, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj13=((struct list_item$1sType$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_4, "/usr/local/include/neo-c.h", 1710))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_4;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_4;
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
    struct sNode* __dec_obj26;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj27;
    struct list_item$1sNode$ph* litem_6;
    struct sNode* __dec_obj28;
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
        __dec_obj26=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1696, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj27=((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_5, "/usr/local/include/neo-c.h", 1700))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_5;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_5;
    }
    else {
        litem_6=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1706, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj28=((struct list_item$1sNode$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_6, "/usr/local/include/neo-c.h", 1710))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_6;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_6;
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
    struct list_item$1int$* litem_7;
    struct list_item$1int$* litem_8;
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
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1696, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_7, "/usr/local/include/neo-c.h", 1700))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_7;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_7;
    }
    else {
        litem_8=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1706, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_8, "/usr/local/include/neo-c.h", 1710))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_8;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_8;
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
    char*  __dec_obj36  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj37  ;
    struct list_item$1char$ph* litem_10;
    char*  __dec_obj38  ;
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
        __dec_obj36=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(char* )come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1696, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj37=((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_9, "/usr/local/include/neo-c.h", 1700))->item=(char* )come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_9;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_9;
    }
    else {
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1706, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj38=((struct list_item$1char$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_10, "/usr/local/include/neo-c.h", 1710))->item=(char* )come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_10;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_10;
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

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj44  ;
    struct list$1sNode$ph* __dec_obj45;
    struct sSStringNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)come_null_checker(self, "10str.nc", 95))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj44=((struct sSStringNode*)come_null_checker(self, "10str.nc", 97))->value,
    ((struct sSStringNode*)come_null_checker(self, "10str.nc", 97))->value=(char* )come_increment_ref_count(__builtin_string(value));
    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj45=((struct sSStringNode*)come_null_checker(self, "10str.nc", 98))->exps,
    ((struct sSStringNode*)come_null_checker(self, "10str.nc", 98))->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(exps));
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sSStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sSStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sSStringNode_kind(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSStringNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value_15  ;
    struct sType*  type2  ;
    char*  __dec_obj51  ;
    struct sType*  __dec_obj52  ;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 108, "struct CVALUE* "))), "10str.nc", 108)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 110, "struct buffer* "))), "10str.nc", 110)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 112)),"xsprintf(\"");
    buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 113)),((struct sSStringNode*)come_null_checker(self, "10str.nc", 113))->value);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 114)),"\"");
    if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(((struct sSStringNode*)come_null_checker(self, "10str.nc", 116))->exps, "10str.nc", 116)))>0) {
        for(o2_saved=(struct list$1sNode$ph*)come_increment_ref_count(((struct sSStringNode*)come_null_checker(self, "10str.nc", 117))->exps),it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "10str.nc", 117)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "10str.nc", 117)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "10str.nc", 117)))){
            obj=(struct sNode*)come_increment_ref_count(sNode_clone(it));
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 120, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "10str.nc", 120)))));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 121)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 121, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it)))));
            node=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj),params,((void*)0),0,((void*)0),info,(_Bool)0));
            Value=node_compile(node,info);
            if(!Value) {
                __result_obj__0 = (_Bool)0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_value_15=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 131)),",");
            buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 132)),((struct CVALUE* )come_null_checker(come_value_15, "10str.nc", 132))->c_value);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 136)),")");
    type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 138, "struct sType* "))), "10str.nc", 138))),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sType* )come_null_checker(type2, "10str.nc", 139))->mHeap=(_Bool)1;
    __dec_obj51=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 141))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 141))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "10str.nc", 141))));
    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj52=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 142))->type,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 142))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 143))->var=((void*)0);
    append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 147))->stack, "10str.nc", 147)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "10str.nc", 149))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSStringNode_finalize(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 3))->value!=((void*)0)) {
        (((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 3))->value = come_decrement_ref_count(((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 3))->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 4))->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sSStringNode*)come_null_checker(self, "sSStringNode_finalize", 4))->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_11;
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
    memset(&result_11,0,sizeof(struct sNode*));
    __result_obj__0 = result_11;
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj46;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_13;
    struct tuple2$2char$phsNode$ph* __dec_obj47;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_14;
    struct tuple2$2char$phsNode$ph* __dec_obj48;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1685))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1686, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1688))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1689))->next=((void*)0);
        __dec_obj46=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1690))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1692))->tail=litem;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1693))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1695))->len==1) {
        litem_13=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1696, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1698))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1698))->head;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1699))->next=((void*)0);
        __dec_obj47=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1700))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_13, "/usr/local/include/neo-c.h", 1700))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1702))->tail=litem_13;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1703))->head, "/usr/local/include/neo-c.h", 1703))->next=litem_13;
    }
    else {
        litem_14=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1706, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1708))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1708))->tail;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1709))->next=((void*)0);
        __dec_obj48=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1710))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_14, "/usr/local/include/neo-c.h", 1710))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1712))->tail, "/usr/local/include/neo-c.h", 1712))->next=litem_14;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1713))->tail=litem_14;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1716))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj49  ;
    struct sNode* __dec_obj50;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj49=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3577))->v1=(char*)come_increment_ref_count(v1);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj50=((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2,
    ((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 3578))->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj50 ? __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0, (void*)0) :0);
    __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sCharNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)come_null_checker(self, "10str.nc", 159))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sCharNode*)come_null_checker(self, "10str.nc", 161))->value=value;
    __result_obj__0 = (struct sCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sCharNode_kind(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCharNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj53  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj54  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 171, "struct CVALUE* "))), "10str.nc", 171)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj53=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 173))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 173))->c_value=(char* )come_increment_ref_count(xsprintf("%d",((struct sCharNode*)come_null_checker(self, "10str.nc", 173))->value));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj54=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 174))->type,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 174))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 174, "struct sType* "))), "10str.nc", 174))),(char*)come_increment_ref_count(xsprintf("char")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 175))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 177))->stack, "10str.nc", 177)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "10str.nc", 179))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCharNode_finalize(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sCharNode*)come_null_checker(self, "sCharNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sCharNode*)come_null_checker(self, "sCharNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCharNode*)come_null_checker(self, "sCharNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int  value  , _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sWCharNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)come_null_checker(self, "10str.nc", 189))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct sWCharNode*)come_null_checker(self, "10str.nc", 191))->value=value;
    ((struct sWCharNode*)come_null_checker(self, "10str.nc", 192))->quote=quote;
    __result_obj__0 = (struct sWCharNode*)come_increment_ref_count(self);
    come_call_finalizer(sWCharNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sWCharNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sWCharNode_kind(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWCharNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj55  ;
    char*  __dec_obj56  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj57  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 202, "struct CVALUE* "))), "10str.nc", 202)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sWCharNode*)come_null_checker(self, "10str.nc", 204))->quote) {
        __dec_obj55=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 205))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 205))->c_value=(char* )come_increment_ref_count(xsprintf("L'\\%o'",((struct sWCharNode*)come_null_checker(self, "10str.nc", 205))->value));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0);
    }
    else {
        __dec_obj56=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 208))->c_value,
        ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 208))->c_value=(char* )come_increment_ref_count(xsprintf("L'%lc'",((struct sWCharNode*)come_null_checker(self, "10str.nc", 208))->value));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __dec_obj57=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 210))->type,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 210))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 210, "struct sType* "))), "10str.nc", 210))),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 211))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 213))->stack, "10str.nc", 213)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "10str.nc", 215))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWCharNode_finalize(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sWCharNode*)come_null_checker(self, "sWCharNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sWCharNode*)come_null_checker(self, "sWCharNode_finalize", 2))->sname = come_decrement_ref_count(((struct sWCharNode*)come_null_checker(self, "sWCharNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int*  value  , int sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __dec_obj58  ;
    struct sWStringNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)come_null_checker(self, "10str.nc", 225))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj58=((struct sWStringNode*)come_null_checker(self, "10str.nc", 227))->value,
    ((struct sWStringNode*)come_null_checker(self, "10str.nc", 227))->value=(int* )come_increment_ref_count(value);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0);
    __result_obj__0 = (struct sWStringNode*)come_increment_ref_count(self);
    come_call_finalizer(sWStringNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    come_call_finalizer(sWStringNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sWStringNode_kind(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sWStringNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj59  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj60  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 237, "struct CVALUE* "))), "10str.nc", 237)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj59=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 239))->c_value,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 239))->c_value=(char* )come_increment_ref_count(xsprintf("L\"%ls\"",((struct sWStringNode*)come_null_checker(self, "10str.nc", 239))->value));
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj60=((struct CVALUE* )come_null_checker(come_value, "10str.nc", 240))->type,
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 240))->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 240, "struct sType* "))), "10str.nc", 240))),(char*)come_increment_ref_count(xsprintf("int*")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value, "10str.nc", 241))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 243))->stack, "10str.nc", 243)),(struct CVALUE* )come_increment_ref_count(come_value));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value, "10str.nc", 245))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sWStringNode_finalize(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sWStringNode*)come_null_checker(self, "sWStringNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sWStringNode*)come_null_checker(self, "sWStringNode_finalize", 2))->sname = come_decrement_ref_count(((struct sWStringNode*)come_null_checker(self, "sWStringNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sWStringNode*)come_null_checker(self, "sWStringNode_finalize", 3))->value!=((void*)0)) {
        (((struct sWStringNode*)come_null_checker(self, "sWStringNode_finalize", 3))->value = come_decrement_ref_count(((struct sWStringNode*)come_null_checker(self, "sWStringNode_finalize", 3))->value, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj61;
    struct sListNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)come_null_checker(self, "10str.nc", 255))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj61=((struct sListNode*)come_null_checker(self, "10str.nc", 257))->list_elements,
    ((struct sListNode*)come_null_checker(self, "10str.nc", 257))->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sListNode*)come_increment_ref_count(self);
    come_call_finalizer(sListNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sListNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sListNode_kind(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sListNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* list_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* params;
    struct sType*  list_element_type  ;
    _Bool __result_obj__0;
    int n;
    struct list$1sNode$ph* o2_saved;
    struct sNode* it;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj62  ;
    struct sType*  type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct buffer*  source  ;
    int i;
    struct list$1CVALUE$ph* o2_saved_18;
    struct CVALUE*  it_20  ;
    void* __right_value2 = (void*)0;
    struct sType*  list_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var1
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj69  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj70  ;
    char*  __dec_obj71  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj72  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj75  ;
    struct sType*  __dec_obj76  ;
    int j;
    struct list$1CVALUE$ph* o2_saved_28;
    struct CVALUE*  it_29  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj77  ;
    struct sType*  __dec_obj78  ;
    list_elements=((struct sListNode*)come_null_checker(self, "10str.nc", 267))->list_elements;
    params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 269, "struct list$1CVALUE$ph*"))), "10str.nc", 269)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list_element_type=((void*)0);
    if(((struct sInfo* )come_null_checker(info, "10str.nc", 272))->exp_value) {
        err_msg(info,"nest value expression is prohibited");
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "10str.nc", 276))->exp_value=(_Bool)1;
    n=0;
    for(o2_saved=list_elements,it=list$1sNode$ph_begin(((struct list$1sNode$ph*)come_null_checker(o2_saved, "10str.nc", 279)));!list$1sNode$ph_end(((struct list$1sNode$ph*)come_null_checker(o2_saved, "10str.nc", 279)));it=list$1sNode$ph_next(((struct list$1sNode$ph*)come_null_checker(o2_saved, "10str.nc", 279)))){
        Value=node_compile(it,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        if(list_element_type) {
            check_assign_type(((char*)(__right_value0=xsprintf("invalid list element type"))),list_element_type,((struct CVALUE* )come_null_checker(come_value, "10str.nc", 287))->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        remove_value_from_right_value_objects(come_value,info);
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(params, "10str.nc", 292)),(struct CVALUE* )come_increment_ref_count(come_value));
        if(list_element_type) {
            check_assign_type(((char*)(__right_value0=xsprintf("List element type"))),list_element_type,((struct CVALUE* )come_null_checker(come_value, "10str.nc", 295))->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        __dec_obj62=list_element_type,
        list_element_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "10str.nc", 297))->type));
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        n++;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct sInfo* )come_null_checker(info, "10str.nc", 301))->exp_value=(_Bool)0;
    type_values=(struct sType* )come_increment_ref_count(sType_clone(list_element_type));
    list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(type_values, "10str.nc", 304))->mArrayNum, "10str.nc", 304)),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(params, "10str.nc", 304))))),info)));
    ((struct sType* )come_null_checker(type_values, "10str.nc", 305))->mHeap=(_Bool)0;
    static int list_value_num=0;
    var_name=(char* )come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num));
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    var_=get_variable_from_table(((struct sInfo* )come_null_checker(info, "10str.nc", 312))->lv_table,var_name);
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type_values,((struct sVar* )come_null_checker(var_, "10str.nc", 314))->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 316, "struct buffer* "))), "10str.nc", 316)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 318)),"(");
    i=0;
    for(o2_saved_18=(struct list$1CVALUE$ph*)come_increment_ref_count(params),it_20=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_18, "10str.nc", 321)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_18, "10str.nc", 321)));it_20=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_18, "10str.nc", 321)))){
        if(((struct sType* )come_null_checker(list_element_type, "10str.nc", 322))->mHeap) {
            buffer_append_format(((struct buffer* )come_null_checker(source, "10str.nc", 324)),"%s[%d]=%s,\n",((struct sVar* )come_null_checker(var_, "10str.nc", 324))->mCValueName,i,((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(params, "10str.nc", 324)), "10str.nc", 324)),i))), "10str.nc", 324))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        else {
            buffer_append_format(((struct buffer* )come_null_checker(source, "10str.nc", 327)),"%s[%d]=%s,\n",((struct sVar* )come_null_checker(var_, "10str.nc", 327))->mCValueName,i,((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(params, "10str.nc", 327)), "10str.nc", 327)),i))), "10str.nc", 327))->c_value);
            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        i++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    list_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 336, "struct sType* "))), "10str.nc", 336))),(char*)come_increment_ref_count(xsprintf("list")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(list_type, "10str.nc", 337))->mGenericsTypes, "10str.nc", 337)),(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(list_element_type))))));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(list_type));
    const char* fun_name="initialize_with_values";
    multiple_assign_var1=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var1->v1);
    generics_fun=multiple_assign_var1->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char* )come_increment_ref_count(name);
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 345))->funcs, "10str.nc", 345)),generics_fun_name,((void*)0),(_Bool)0)));
    if(fun==((void*)0)) {
        __dec_obj69=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 350))->funcs, "10str.nc", 350)),generics_fun_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)",generics_fun_name,((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 353))->come_fun, "10str.nc", 353))->mName);
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "10str.nc", 358))->mResultType));
    ((struct sType* )come_null_checker(result_type, "10str.nc", 359))->mStatic=(_Bool)0;
    type=(struct sType* )come_increment_ref_count(list_type);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 363, "struct CVALUE* "))), "10str.nc", 363)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 365, "struct buffer* "))), "10str.nc", 365)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(num_string, "10str.nc", 367)),"1");
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0));
    any_type=(struct sType* )come_increment_ref_count(type2);
    ((struct sType* )come_null_checker(any_type, "10str.nc", 375))->mPointerNum=1;
    ((struct sType* )come_null_checker(any_type, "10str.nc", 376))->mHeap=(_Bool)1;
    if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 378))->funcs, "10str.nc", 378)), "10str.nc", 378)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        __dec_obj70=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 379))->c_value,
        ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 379))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "10str.nc", 379))))),((struct sInfo* )come_null_checker(info, "10str.nc", 379))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 379))->sline,type_name));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj71=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 382))->c_value,
        ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 382))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "10str.nc", 382))))),((struct sInfo* )come_null_checker(info, "10str.nc", 382))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 382))->sline,type_name));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
    ((struct sType* )come_null_checker(type3, "10str.nc", 386))->mPointerNum++;
    ((struct sType* )come_null_checker(type3, "10str.nc", 387))->mHeap=(_Bool)1;
    ((struct sType* )come_null_checker(type2, "10str.nc", 388))->mHeap=(_Bool)1;
    __dec_obj72=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 389))->type,
    ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 389))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 391))->var=((void*)0);
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 395, "struct list$1CVALUE$ph*"))), "10str.nc", 395)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({(_conditional_value_X0=(((struct sType* )come_null_checker(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 397))->mParamTypes, "10str.nc", 397)), "10str.nc", 397)),0))), "10str.nc", 397))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 397))->type, "10str.nc", 397))->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 398))->mParamTypes, "10str.nc", 398)), "10str.nc", 398)),0))),((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 398))->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 400)),(struct CVALUE* )come_increment_ref_count(obj_value));
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 402, "struct CVALUE* "))), "10str.nc", 402)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj73=((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 404))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 404))->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(params, "10str.nc", 404)))));
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj74=((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 405))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 405))->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 406))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 408)),(struct CVALUE* )come_increment_ref_count(come_value2));
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 410, "struct CVALUE* "))), "10str.nc", 410)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj75=((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 412))->c_value,
    ((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 412))->c_value=(char* )come_increment_ref_count(xsprintf("%s",((struct sVar* )come_null_checker(var_, "10str.nc", 412))->mCValueName));
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj76=((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 413))->type,
    ((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 413))->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 414))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 416)),(struct CVALUE* )come_increment_ref_count(come_value3));
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 420)),generics_fun_name);
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 421)),"(");
    j=0;
    for(o2_saved_28=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_29=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_28, "10str.nc", 424)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_28, "10str.nc", 424)));it_29=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_28, "10str.nc", 424)))){
        buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 425)),((struct CVALUE* )come_null_checker(it_29, "10str.nc", 425))->c_value);
        if(j!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 427)))-1) {
            buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 428)),",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_28, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 433)),")");
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 434)),")");
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 436, "struct CVALUE* "))), "10str.nc", 436)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj77=((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 438))->c_value,
    ((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 438))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(source, "10str.nc", 438))));
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj78=((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 440))->type,
    ((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 440))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 441))->type, "10str.nc", 441))->mStatic=(_Bool)0;
    ((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 442))->var=((void*)0);
    if(((struct sType* )come_null_checker(result_type, "10str.nc", 444))->mHeap) {
        append_object_to_right_values(come_value4,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 448))->stack, "10str.nc", 448)),(struct CVALUE* )come_increment_ref_count(come_value4));
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 450))->c_value);
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, list_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, list_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sListNode_finalize(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sListNode*)come_null_checker(self, "sListNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sListNode*)come_null_checker(self, "sListNode_finalize", 2))->sname = come_decrement_ref_count(((struct sListNode*)come_null_checker(self, "sListNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sListNode*)come_null_checker(self, "sListNode_finalize", 3))->list_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sListNode*)come_null_checker(self, "sListNode_finalize", 3))->list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1633))->head=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1634))->tail=((void*)0);
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1635))->len=0;
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
    it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1CVALUE$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
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

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj63;
    struct list_item$1sNode$ph* litem_16;
    struct sNode* __dec_obj64;
    struct list_item$1sNode$ph* litem_17;
    struct sNode* __dec_obj65;
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
        __dec_obj63=((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_16=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1781, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj64=((struct list_item$1sNode$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_16, "/usr/local/include/neo-c.h", 1785))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_16;
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_16;
    }
    else {
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), (void*)0, 1791, "struct list_item$1sNode$ph*"))));
        ((struct list_item$1sNode$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1sNode$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj65=((struct list_item$1sNode$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1sNode$ph*)come_null_checker(litem_17, "/usr/local/include/neo-c.h", 1795))->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct list_item$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_17;
        ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_17;
    }
    ((struct list$1sNode$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0):(void*)0);
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
    return ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1924))->len;
    neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_19  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_19,0,sizeof(struct CVALUE* ));
    __result_obj__0 = result_19;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_21  ;
    if(self==((void*)0)||((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1855))->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it=((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it, "/usr/local/include/neo-c.h", 1861))->next;
    if(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1863))->it) {
        __result_obj__0 = ((struct list_item$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1864))->it, "/usr/local/include/neo-c.h", 1864))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_21,0,sizeof(struct CVALUE* ));
    __result_obj__0 = result_21;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_22  ;
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
    memset(&default_value_22,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_22);
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
    struct CVALUE*  default_value_23  ;
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
    memset(&default_value_23,0,sizeof(struct CVALUE* ));
    __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_23);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj66  ;
    struct list_item$1sType$ph* litem_24;
    struct sType*  __dec_obj67  ;
    struct list_item$1sType$ph* litem_25;
    struct sType*  __dec_obj68  ;
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
        __dec_obj66=((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1781, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1sType$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj67=((struct list_item$1sType$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1785))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_24;
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_24;
    }
    else {
        litem_25=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), (void*)0, 1791, "struct list_item$1sType$ph*"))));
        ((struct list_item$1sType$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1sType$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj68=((struct list_item$1sType$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1sType$ph*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1795))->item=(struct sType* )come_increment_ref_count(item);
        come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_25;
        ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_25;
    }
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_26  ;
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
    memset(&default_value_26,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_26);
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
    struct sType*  default_value_27  ;
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
    memset(&default_value_27,0,sizeof(struct sType* ));
    __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_27);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj79;
    struct sTupleNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)come_null_checker(self, "10str.nc", 460))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj79=((struct sTupleNode*)come_null_checker(self, "10str.nc", 462))->tuple_elements,
    ((struct sTupleNode*)come_null_checker(self, "10str.nc", 462))->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sTupleNode*)come_increment_ref_count(self);
    come_call_finalizer(sTupleNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTupleNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sTupleNode_kind(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTupleNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_compile"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* tuple_types;
    struct list$1CVALUE$ph* tuple_values;
    _Bool __result_obj__0;
    int n;
    struct list$1tuple2$2char$phsNode$ph$ph* o2_saved;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var2
;    char*  name  =0;
    struct sNode* node=0;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  __dec_obj84  ;
    void* __right_value2 = (void*)0;
    struct sType*  type_32  ;
    struct list$1sType$ph* o2_saved_33;
    struct sType*  it_35  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj87  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3
;    char*  name_37  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj88  ;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1CVALUE$ph* o2_saved_38;
    struct CVALUE*  it_39  ;
    struct CVALUE*  come_value_40  ;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* o2_saved_41;
    struct CVALUE*  it_42  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj89  ;
    struct sType*  __dec_obj90  ;
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct sTupleNode*)come_null_checker(self, "10str.nc", 472))->tuple_elements);
    tuple_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 473, "struct list$1sType$ph*"))), "10str.nc", 473)))));
    come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    tuple_values=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 474, "struct list$1CVALUE$ph*"))), "10str.nc", 474)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(((struct sInfo* )come_null_checker(info, "10str.nc", 476))->exp_value) {
        err_msg(info,"nest value expression is prohibited");
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "10str.nc", 480))->exp_value=(_Bool)1;
    n=0;
    for(o2_saved=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements),it=list$1tuple2$2char$phsNode$ph$ph_begin(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "10str.nc", 483)));!list$1tuple2$2char$phsNode$ph$ph_end(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "10str.nc", 483)));it=list$1tuple2$2char$phsNode$ph$ph_next(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(o2_saved, "10str.nc", 483)))){
        multiple_assign_var2=it;
        name=(char* )come_increment_ref_count(multiple_assign_var2->v1);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        Value=node_compile(node,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(tuple_values, "10str.nc", 492)),(struct CVALUE* )come_increment_ref_count(CVALUE_clone(come_value)));
        type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "10str.nc", 493))->type));
        __dec_obj84=((struct sType* )come_null_checker(type, "10str.nc", 494))->mTupleName,
        ((struct sType* )come_null_checker(type, "10str.nc", 494))->mTupleName=(char* )come_increment_ref_count(name);
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0);
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(tuple_types, "10str.nc", 495)),(struct sType* )come_increment_ref_count(type));
        n++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sInfo* )come_null_checker(info, "10str.nc", 500))->exp_value=(_Bool)0;
    type_32=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 502, "struct sType* "))), "10str.nc", 502))),(char* )come_increment_ref_count(xsprintf("tuple%d",list$1sType$ph_length(((struct list$1sType$ph*)come_null_checker(tuple_types, "10str.nc", 502))))),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved_33=(struct list$1sType$ph*)come_increment_ref_count(tuple_types),it_35=list$1sType$ph_begin(((struct list$1sType$ph*)come_null_checker(o2_saved_33, "10str.nc", 504)));!list$1sType$ph_end(((struct list$1sType$ph*)come_null_checker(o2_saved_33, "10str.nc", 504)));it_35=list$1sType$ph_next(((struct list$1sType$ph*)come_null_checker(o2_saved_33, "10str.nc", 504)))){
        list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(type_32, "10str.nc", 505))->mGenericsTypes, "10str.nc", 505)),(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it_35))))));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    come_call_finalizer(list$1sType$ph$p_finalize, o2_saved_33, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 508, "struct CVALUE* "))), "10str.nc", 508)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 510, "struct buffer* "))), "10str.nc", 510)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(num_string, "10str.nc", 512)),"1");
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type_32,type_32,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0));
    any_type=(struct sType* )come_increment_ref_count(type2);
    ((struct sType* )come_null_checker(any_type, "10str.nc", 520))->mPointerNum=1;
    ((struct sType* )come_null_checker(any_type, "10str.nc", 521))->mHeap=(_Bool)1;
    if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 523))->funcs, "10str.nc", 523)), "10str.nc", 523)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        __dec_obj85=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 524))->c_value,
        ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 524))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "10str.nc", 524))))),((struct sInfo* )come_null_checker(info, "10str.nc", 524))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 524))->sline,type_name));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj86=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 527))->c_value,
        ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 527))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "10str.nc", 527))))),((struct sInfo* )come_null_checker(info, "10str.nc", 527))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 527))->sline,type_name));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
    ((struct sType* )come_null_checker(type3, "10str.nc", 531))->mPointerNum++;
    ((struct sType* )come_null_checker(type3, "10str.nc", 532))->mHeap=(_Bool)1;
    ((struct sType* )come_null_checker(type2, "10str.nc", 533))->mHeap=(_Bool)1;
    __dec_obj87=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 534))->type,
    ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 534))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 536))->var=((void*)0);
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(type2));
    const char* fun_name="initialize";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
    name_37=(char* )come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun=multiple_assign_var3->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char* )come_increment_ref_count(name_37);
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 546))->funcs, "10str.nc", 546)),generics_fun_name,((void*)0),(_Bool)0)));
    if(fun==((void*)0)) {
        __dec_obj88=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 551))->funcs, "10str.nc", 551)),generics_fun_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)",generics_fun_name,((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 554))->come_fun, "10str.nc", 554))->mName);
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "10str.nc", 559))->mResultType));
    ((struct sType* )come_null_checker(result_type, "10str.nc", 560))->mStatic=(_Bool)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 562, "struct list$1CVALUE$ph*"))), "10str.nc", 562)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({(_conditional_value_X0=(((struct sType* )come_null_checker(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 564))->mParamTypes, "10str.nc", 564)), "10str.nc", 564)),0))), "10str.nc", 564))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 564))->type, "10str.nc", 564))->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 565))->mParamTypes, "10str.nc", 565)), "10str.nc", 565)),0))),((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 565))->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 567)),(struct CVALUE* )come_increment_ref_count(obj_value));
    i=1;
    for(o2_saved_38=(struct list$1CVALUE$ph*)come_increment_ref_count(tuple_values),it_39=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_38, "10str.nc", 570)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_38, "10str.nc", 570)));it_39=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_38, "10str.nc", 570)))){
        come_value_40=(struct CVALUE* )come_increment_ref_count(CVALUE_clone(it_39));
        if(({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 573))->mParamTypes, "10str.nc", 573)), "10str.nc", 573)),i)))&&((struct sType* )come_null_checker(((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 573))->mParamTypes, "10str.nc", 573)), "10str.nc", 573)),i))), "10str.nc", 573))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value_40, "10str.nc", 573))->type, "10str.nc", 573))->mHeap));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
            std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 574))->mParamTypes, "10str.nc", 574)), "10str.nc", 574)),i))),((struct CVALUE* )come_null_checker(come_value_40, "10str.nc", 574))->type,come_value_40,info);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        }
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 576)),(struct CVALUE* )come_increment_ref_count(come_value_40));
        i++;
        come_call_finalizer(CVALUE_finalize, come_value_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_38, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 581, "struct buffer* "))), "10str.nc", 581)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 583)),generics_fun_name);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 584)),"(");
    j=0;
    for(o2_saved_41=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it_42=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_41, "10str.nc", 587)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_41, "10str.nc", 587)));it_42=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved_41, "10str.nc", 587)))){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 588)),((struct CVALUE* )come_null_checker(it_42, "10str.nc", 588))->c_value);
        if(j!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 590)))-1) {
            buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 591)),",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved_41, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(buf, "10str.nc", 596)),")");
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 598, "struct CVALUE* "))), "10str.nc", 598)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj89=((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 600))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 600))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "10str.nc", 600))));
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj90=((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 602))->type,
    ((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 602))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 603))->type, "10str.nc", 603))->mStatic=(_Bool)0;
    ((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 604))->var=((void*)0);
    if(((struct sType* )come_null_checker(result_type, "10str.nc", 606))->mHeap) {
        append_object_to_right_values(come_value2,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 610))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 612))->stack, "10str.nc", 612)),(struct CVALUE* )come_increment_ref_count(come_value2));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, tuple_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, tuple_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name_37 = come_decrement_ref_count(name_37, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1654))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1657))->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void sTupleNode_finalize(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sTupleNode*)come_null_checker(self, "sTupleNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sTupleNode*)come_null_checker(self, "sTupleNode_finalize", 2))->sname = come_decrement_ref_count(((struct sTupleNode*)come_null_checker(self, "sTupleNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sTupleNode*)come_null_checker(self, "sTupleNode_finalize", 3))->tuple_elements!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, ((struct sTupleNode*)come_null_checker(self, "sTupleNode_finalize", 3))->tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_30;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_30,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_30;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_31;
    if(self==((void*)0)||((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1855))->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1861))->it, "/usr/local/include/neo-c.h", 1861))->next;
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1863))->it) {
        __result_obj__0 = ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1864))->it, "/usr/local/include/neo-c.h", 1864))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_31,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__0 = result_31;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  CVALUE_clone(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_clone"; neo_current_frame = &fr;
    struct CVALUE*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct CVALUE*  result  ;
    char*  __dec_obj80  ;
    struct sType*  __dec_obj81  ;
    char*  __dec_obj82  ;
    char*  __dec_obj83  ;
    if(self==(void*)0) {
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 5, "struct CVALUE* "));
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 6))->c_value!=((void*)0)) {
        __dec_obj80=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 6))->c_value,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 6))->c_value=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 6))->c_value, "CVALUE_clone", 6, "char* "));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 7))->type!=((void*)0)) {
        __dec_obj81=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 7))->type,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 7))->type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 7))->type));
        come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 8))->var=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 8))->var;
    }
    if(self!=((void*)0)) {
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 9))->right_value_objects=((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 9))->right_value_objects;
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 10))->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj82=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 10))->c_value_without_right_value_objects,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 10))->c_value_without_right_value_objects=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 10))->c_value_without_right_value_objects, "CVALUE_clone", 10, "char* "));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 11))->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj83=((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 11))->c_value_without_cast_object_value,
        ((struct CVALUE* )come_null_checker(result, "CVALUE_clone", 11))->c_value_without_cast_object_value=(char* )come_increment_ref_count((char* )come_memdup(((struct CVALUE* )come_null_checker(self, "CVALUE_clone", 11))->c_value_without_cast_object_value, "CVALUE_clone", 11, "char* "));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0);
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
    ((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->it=((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1841))->head;
    if(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1843))->it) {
        __result_obj__0 = ((struct list_item$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1844))->it, "/usr/local/include/neo-c.h", 1844))->item;
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
    return self==((void*)0)||((struct list$1sType$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1873))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_36  ;
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
    memset(&result_36,0,sizeof(struct sType* ));
    __result_obj__0 = result_36;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj91;
    struct list$1sNode$ph* __dec_obj92;
    struct sMapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)come_null_checker(self, "10str.nc", 622))),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj91=((struct sMapNode*)come_null_checker(self, "10str.nc", 624))->map_key_elements,
    ((struct sMapNode*)come_null_checker(self, "10str.nc", 624))->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __dec_obj92=((struct sMapNode*)come_null_checker(self, "10str.nc", 625))->map_elements,
    ((struct sMapNode*)come_null_checker(self, "10str.nc", 625))->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (struct sMapNode*)come_increment_ref_count(self);
    come_call_finalizer(sMapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  sMapNode_kind(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMapNode"))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* key_params;
    struct list$1CVALUE$ph* element_params;
    struct sType*  map_key_type  ;
    struct sType*  map_element_type  ;
    _Bool __result_obj__0;
    int i;
    struct sNode* key_elements;
    struct sNode* elements;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj93  ;
    _Bool Value_45;
    struct CVALUE*  come_value2  ;
    struct sType*  __dec_obj94  ;
    struct sType*  key_type_values  ;
    char*  var_name  ;
    struct sVar*  var_  ;
    struct sType*  element_type_values  ;
    char*  var_name2  ;
    struct sVar*  var2_  ;
    struct buffer*  source  ;
    int i_46;
    struct CVALUE*  key_param  ;
    struct CVALUE*  element_param  ;
    void* __right_value2 = (void*)0;
    struct sType*  map_type  ;
    struct sType*  obj_type  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name  =0;
    struct sGenericsFun*  generics_fun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    char*  __dec_obj95  ;
    struct sType*  result_type  ;
    struct sType*  type  ;
    struct CVALUE*  obj_value  ;
    struct buffer*  num_string  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct sType*  any_type  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj96  ;
    char*  __dec_obj97  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj98  ;
    struct list$1CVALUE$ph* come_params;
    struct CVALUE*  come_value2_47  ;
    char*  __dec_obj99  ;
    struct sType*  __dec_obj100  ;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj101  ;
    struct sType*  __dec_obj102  ;
    struct CVALUE*  come_value4  ;
    char*  __dec_obj103  ;
    struct sType*  __dec_obj104  ;
    int j;
    struct list$1CVALUE$ph* o2_saved;
    struct CVALUE*  it  ;
    struct CVALUE*  come_value5  ;
    char*  __dec_obj105  ;
    struct sType*  __dec_obj106  ;
    map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(((struct sMapNode*)come_null_checker(self, "10str.nc", 635))->map_key_elements);
    map_elements=(struct list$1sNode$ph*)come_increment_ref_count(((struct sMapNode*)come_null_checker(self, "10str.nc", 636))->map_elements);
    key_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 638, "struct list$1CVALUE$ph*"))), "10str.nc", 638)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    element_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 639, "struct list$1CVALUE$ph*"))), "10str.nc", 639)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    map_key_type=((void*)0);
    map_element_type=((void*)0);
    if(((struct sInfo* )come_null_checker(info, "10str.nc", 643))->exp_value) {
        err_msg(info,"nest value expression is prohibited");
        __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct sInfo* )come_null_checker(info, "10str.nc", 647))->exp_value=(_Bool)1;
    for(i=0;i<list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(map_key_elements, "10str.nc", 649)));i++){
        key_elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(map_key_elements, "10str.nc", 650)), "10str.nc", 650)),i)));
        elements=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)come_null_checker(map_elements, "10str.nc", 651)), "10str.nc", 651)),i)));
        Value=node_compile(key_elements,info);
        if(!Value) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        remove_value_from_right_value_objects(come_value,info);
        if(map_key_type) {
            check_assign_type(((char*)(__right_value0=xsprintf("Map key type"))),map_key_type,((struct CVALUE* )come_null_checker(come_value, "10str.nc", 662))->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(key_params, "10str.nc", 665)),(struct CVALUE* )come_increment_ref_count(come_value));
        __dec_obj93=map_key_type,
        map_key_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value, "10str.nc", 666))->type));
        come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        Value_45=node_compile(elements,info);
        if(!Value_45) {
            __result_obj__0 = (_Bool)0;
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info));
        remove_value_from_right_value_objects(come_value2,info);
        if(map_element_type) {
            check_assign_type(((char*)(__right_value0=xsprintf("Map element type"))),map_element_type,((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 677))->type,come_value2,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        }
        list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(element_params, "10str.nc", 680)),(struct CVALUE* )come_increment_ref_count(come_value2));
        __dec_obj94=map_element_type,
        map_element_type=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )come_null_checker(come_value2, "10str.nc", 681))->type));
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct sInfo* )come_null_checker(info, "10str.nc", 683))->exp_value=(_Bool)0;
    static int map_value_num=0;
    key_type_values=(struct sType* )come_increment_ref_count(sType_clone(map_key_type));
    list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(key_type_values, "10str.nc", 688))->mArrayNum, "10str.nc", 688)),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(key_params, "10str.nc", 688))))),info)));
    ((struct sType* )come_null_checker(key_type_values, "10str.nc", 689))->mHeap=(_Bool)0;
    var_name=(char* )come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num));
    add_variable_to_table(var_name,((struct sType* )(__right_value0=sType_clone(key_type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    var_=get_variable_from_table(((struct sInfo* )come_null_checker(info, "10str.nc", 695))->lv_table,var_name);
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(key_type_values,((struct sVar* )come_null_checker(var_, "10str.nc", 697))->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    element_type_values=(struct sType* )come_increment_ref_count(sType_clone(map_element_type));
    list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(((struct sType* )come_null_checker(element_type_values, "10str.nc", 700))->mArrayNum, "10str.nc", 700)),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(element_params, "10str.nc", 700))))),info)));
    ((struct sType* )come_null_checker(element_type_values, "10str.nc", 701))->mHeap=(_Bool)0;
    var_name2=(char* )come_increment_ref_count(xsprintf("__map_element%d__",map_value_num));
    add_variable_to_table(var_name2,((struct sType* )(__right_value0=sType_clone(element_type_values))),info,(_Bool)0,(_Bool)0,(_Bool)0);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    var2_=get_variable_from_table(((struct sInfo* )come_null_checker(info, "10str.nc", 707))->lv_table,var_name2);
    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(element_type_values,((struct sVar* )come_null_checker(var2_, "10str.nc", 709))->mCValueName,info,(_Bool)0,(_Bool)0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 711, "struct buffer* "))), "10str.nc", 711)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 713)),"(");
    for(i_46=0;i_46<list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(key_params, "10str.nc", 715)));i_46++){
        key_param=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(key_params, "10str.nc", 716)), "10str.nc", 716)),i_46)));
        element_param=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)come_null_checker(element_params, "10str.nc", 717)), "10str.nc", 717)),i_46)));
        if(((struct sType* )come_null_checker(map_key_type, "10str.nc", 719))->mHeap) {
            buffer_append_format(((struct buffer* )come_null_checker(source, "10str.nc", 721)),"%s[%d]=%s,\n",((struct sVar* )come_null_checker(var_, "10str.nc", 721))->mCValueName,i_46,((struct CVALUE* )come_null_checker(key_param, "10str.nc", 721))->c_value);
        }
        else {
            buffer_append_format(((struct buffer* )come_null_checker(source, "10str.nc", 724)),"%s[%d]=%s,\n",((struct sVar* )come_null_checker(var_, "10str.nc", 724))->mCValueName,i_46,((struct CVALUE* )come_null_checker(key_param, "10str.nc", 724))->c_value);
        }
        if(((struct sType* )come_null_checker(map_element_type, "10str.nc", 727))->mHeap) {
            buffer_append_format(((struct buffer* )come_null_checker(source, "10str.nc", 729)),"%s[%d]=%s,\n",((struct sVar* )come_null_checker(var2_, "10str.nc", 729))->mCValueName,i_46,((struct CVALUE* )come_null_checker(element_param, "10str.nc", 729))->c_value);
        }
        else {
            buffer_append_format(((struct buffer* )come_null_checker(source, "10str.nc", 732)),"%s[%d]=%s,\n",((struct sVar* )come_null_checker(var2_, "10str.nc", 732))->mCValueName,i_46,((struct CVALUE* )come_null_checker(element_param, "10str.nc", 732))->c_value);
        }
    }
    map_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count(((struct sType* )come_null_checker(((struct sType* )(__right_value0=(struct sType *)come_calloc(1, sizeof(struct sType )*(1), (void*)0, 736, "struct sType* "))), "10str.nc", 736))),(char*)come_increment_ref_count(xsprintf("map")),(_Bool)0,info,(_Bool)0,0));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(map_type, "10str.nc", 737))->mGenericsTypes, "10str.nc", 737)),(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(map_key_type))))));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list$1sType$ph_push_back(((struct list$1sType$ph*)come_null_checker(((struct sType* )come_null_checker(map_type, "10str.nc", 738))->mGenericsTypes, "10str.nc", 738)),(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(map_element_type))))));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(map_type));
    const char* fun_name="initialize_with_values";
    multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name)),info,(_Bool)1)));
    name=(char* )come_increment_ref_count(multiple_assign_var4->v1);
    generics_fun=multiple_assign_var4->v2;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_fun_name=(char* )come_increment_ref_count(name);
    fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 746))->funcs, "10str.nc", 746)),generics_fun_name,((void*)0),(_Bool)0)));
    if(fun==((void*)0)) {
        __dec_obj95=generics_fun_name,
        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name))),info,(_Bool)1));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 751))->funcs, "10str.nc", 751)),generics_fun_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)",generics_fun_name,((struct sFun* )come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 754))->come_fun, "10str.nc", 754))->mName);
            __result_obj__0 = (_Bool)1;
            come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sFun* )come_null_checker(fun, "10str.nc", 759))->mResultType));
    ((struct sType* )come_null_checker(result_type, "10str.nc", 760))->mStatic=(_Bool)0;
    type=(struct sType* )come_increment_ref_count(map_type);
    obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 764, "struct CVALUE* "))), "10str.nc", 764)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 766, "struct buffer* "))), "10str.nc", 766)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(num_string, "10str.nc", 768)),"1");
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,type,info));
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info));
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0));
    any_type=(struct sType* )come_increment_ref_count(type2);
    ((struct sType* )come_null_checker(any_type, "10str.nc", 776))->mPointerNum=1;
    ((struct sType* )come_null_checker(any_type, "10str.nc", 777))->mHeap=(_Bool)1;
    if(({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(((struct map$2char$phsFun$ph*)come_null_checker(((struct map$2char$phsFun$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 779))->funcs, "10str.nc", 779)), "10str.nc", 779)),((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        __dec_obj96=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 780))->c_value,
        ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 780))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "10str.nc", 780))))),((struct sInfo* )come_null_checker(info, "10str.nc", 780))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 780))->sline,type_name));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    else {
        __dec_obj97=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 783))->c_value,
        ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 783))->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(num_string, "10str.nc", 783))))),((struct sInfo* )come_null_checker(info, "10str.nc", 783))->sname,((struct sInfo* )come_null_checker(info, "10str.nc", 783))->sline,type_name));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    type3=(struct sType* )come_increment_ref_count(sType_clone(type2));
    ((struct sType* )come_null_checker(type3, "10str.nc", 787))->mPointerNum++;
    ((struct sType* )come_null_checker(type3, "10str.nc", 788))->mHeap=(_Bool)1;
    ((struct sType* )come_null_checker(type2, "10str.nc", 789))->mHeap=(_Bool)1;
    __dec_obj98=((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 790))->type,
    ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 790))->type=(struct sType* )come_increment_ref_count(sType_clone(type2));
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 792))->var=((void*)0);
    append_object_to_right_values(obj_value,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count(((struct list$1CVALUE$ph*)come_null_checker(((struct list$1CVALUE$ph*)(__right_value0=(struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), (void*)0, 796, "struct list$1CVALUE$ph*"))), "10str.nc", 796)))));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(({(_conditional_value_X0=(((struct sType* )come_null_checker(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 798))->mParamTypes, "10str.nc", 798)), "10str.nc", 798)),0))), "10str.nc", 798))->mHeap&&((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 798))->type, "10str.nc", 798))->mHeap));    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;})) {
        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)come_null_checker(((struct sFun* )come_null_checker(fun, "10str.nc", 799))->mParamTypes, "10str.nc", 799)), "10str.nc", 799)),0))),((struct CVALUE* )come_null_checker(obj_value, "10str.nc", 799))->type,obj_value,info);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    }
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 801)),(struct CVALUE* )come_increment_ref_count(obj_value));
    come_value2_47=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 803, "struct CVALUE* "))), "10str.nc", 803)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj99=((struct CVALUE* )come_null_checker(come_value2_47, "10str.nc", 805))->c_value,
    ((struct CVALUE* )come_null_checker(come_value2_47, "10str.nc", 805))->c_value=(char* )come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(key_params, "10str.nc", 805)))));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj100=((struct CVALUE* )come_null_checker(come_value2_47, "10str.nc", 806))->type,
    ((struct CVALUE* )come_null_checker(come_value2_47, "10str.nc", 806))->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value2_47, "10str.nc", 807))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 809)),(struct CVALUE* )come_increment_ref_count(come_value2_47));
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 811, "struct CVALUE* "))), "10str.nc", 811)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj101=((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 813))->c_value,
    ((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 813))->c_value=(char* )come_increment_ref_count(xsprintf("%s",((struct sVar* )come_null_checker(var_, "10str.nc", 813))->mCValueName));
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj102=((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 814))->type,
    ((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 814))->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value3, "10str.nc", 815))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 817)),(struct CVALUE* )come_increment_ref_count(come_value3));
    come_value4=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 819, "struct CVALUE* "))), "10str.nc", 819)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj103=((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 821))->c_value,
    ((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 821))->c_value=(char* )come_increment_ref_count(xsprintf("%s",((struct sVar* )come_null_checker(var2_, "10str.nc", 821))->mCValueName));
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj104=((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 822))->type,
    ((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 822))->type=((void*)0);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct CVALUE* )come_null_checker(come_value4, "10str.nc", 823))->var=((void*)0);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 825)),(struct CVALUE* )come_increment_ref_count(come_value4));
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 829)),generics_fun_name);
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 830)),"(");
    j=0;
    for(o2_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params),it=list$1CVALUE$ph_begin(((struct list$1CVALUE$ph*)come_null_checker(o2_saved, "10str.nc", 833)));!list$1CVALUE$ph_end(((struct list$1CVALUE$ph*)come_null_checker(o2_saved, "10str.nc", 833)));it=list$1CVALUE$ph_next(((struct list$1CVALUE$ph*)come_null_checker(o2_saved, "10str.nc", 833)))){
        buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 834)),((struct CVALUE* )come_null_checker(it, "10str.nc", 834))->c_value);
        if(j!=list$1CVALUE$ph_length(((struct list$1CVALUE$ph*)come_null_checker(come_params, "10str.nc", 836)))-1) {
            buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 837)),",");
        }
        j++;
    }
    come_call_finalizer(list$1CVALUE$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 842)),")");
    buffer_append_str(((struct buffer* )come_null_checker(source, "10str.nc", 843)),")");
    come_value5=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count(((struct CVALUE* )come_null_checker(((struct CVALUE* )(__right_value0=(struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), (void*)0, 845, "struct CVALUE* "))), "10str.nc", 845)))));
    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj105=((struct CVALUE* )come_null_checker(come_value5, "10str.nc", 847))->c_value,
    ((struct CVALUE* )come_null_checker(come_value5, "10str.nc", 847))->c_value=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(source, "10str.nc", 847))));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0);
    __dec_obj106=((struct CVALUE* )come_null_checker(come_value5, "10str.nc", 848))->type,
    ((struct CVALUE* )come_null_checker(come_value5, "10str.nc", 848))->type=(struct sType* )come_increment_ref_count(sType_clone(result_type));
    come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct sType* )come_null_checker(((struct CVALUE* )come_null_checker(come_value5, "10str.nc", 849))->type, "10str.nc", 849))->mStatic=(_Bool)0;
    ((struct CVALUE* )come_null_checker(come_value5, "10str.nc", 850))->var=((void*)0);
    if(((struct sType* )come_null_checker(result_type, "10str.nc", 852))->mHeap) {
        append_object_to_right_values(come_value5,result_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",((struct CVALUE* )come_null_checker(come_value5, "10str.nc", 856))->c_value);
    list$1CVALUE$ph_push_back(((struct list$1CVALUE$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "10str.nc", 858))->stack, "10str.nc", 858)),(struct CVALUE* )come_increment_ref_count(come_value5));
    __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, key_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, element_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_key_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, key_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, element_type_values, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, map_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(sType_finalize, any_type, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value4, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(CVALUE_finalize, come_value5, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMapNode_finalize(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sMapNode*)come_null_checker(self, "sMapNode_finalize", 2))->sname!=((void*)0)) {
        (((struct sMapNode*)come_null_checker(self, "sMapNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMapNode*)come_null_checker(self, "sMapNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sMapNode*)come_null_checker(self, "sMapNode_finalize", 3))->map_key_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sMapNode*)come_null_checker(self, "sMapNode_finalize", 3))->map_key_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sMapNode*)come_null_checker(self, "sMapNode_finalize", 4))->map_elements!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, ((struct sMapNode*)come_null_checker(self, "sMapNode_finalize", 4))->map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_43;
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
    memset(&default_value_43,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_43);
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
    struct sNode* default_value_44;
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
    memset(&default_value_44,0,sizeof(struct sNode*));
    __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_44);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

struct sNode* expression_node_v96(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v96"; neo_current_frame = &fr;
    int sline_real;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* exps;
    struct buffer*  value  ;
    char* head_of_last_line;
    int len;
    struct sNode* exp;
    int sline2;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value1;
    struct sSStringNode* _inf_obj_value1;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    int sline_real_48;
    int sline_49;
    struct buffer*  value_50  ;
    char* p;
    int sline_51;
    int sline2_52;
    struct sNode* _inf_value2;
    struct sStrNode* _inf_obj_value2;
    int sline_real_53;
    int sline_54;
    struct buffer*  value_55  ;
    unsigned long  size  ;
    char* p_56;
    int sline_57;
    int len_58;
    int sline2_59;
    struct sNode* _inf_value3;
    struct sBufferNode* _inf_obj_value3;
    int sline_real_60;
    int sline_61;
    struct buffer*  buf  ;
    _Bool global;
    _Bool ignore_case;
    struct sNode* _inf_value4;
    struct sStrNode* _inf_obj_value4;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    struct sNode* node;
    int sline_real_62;
    int sline_63;
    struct buffer*  value_64  ;
    char* p_65;
    int sline_66;
    int len_67;
    int sline2_68;
    _Bool global_69;
    _Bool ignore_case_70;
    struct sNode* _inf_value5;
    struct sStrNode* _inf_obj_value5;
    struct sNode* obj_71;
    struct list$1tuple2$2char$phsNode$ph$ph* params_72;
    struct buffer*  method_block_73  ;
    int method_block_sline_74;
    struct list$1sType$ph* method_generics_types_75;
    struct sNode* node_76;
    int sline_real_77;
    int c;
    int n;
    int n_78;
    unsigned long long int n_80;
    struct sNode* _inf_value6;
    struct sCharNode* _inf_obj_value6;
    int sline_real_81;
    int  c_82  ;
    _Bool quote;
    int n_83;
    int n_84;
    unsigned long long int n_87;
    unsigned char p2;
    int size_88;
    struct sNode* _inf_value7;
    struct sWCharNode* _inf_obj_value7;
    int sline_real_89;
    int sline_90;
    struct buffer*  value_91  ;
    char* p_92;
    int sline_93;
    int sline2_94;
    int len_95;
    int*  wstr  ;
    char* str_96;
    struct sNode* _inf_value8;
    struct sWStringNode* _inf_obj_value8;
    int sline_real_97;
    int sline_98;
    struct list$1sNode$ph* exps_99;
    struct buffer*  value_100  ;
    char* p_101;
    int sline_102;
    int len_103;
    struct sNode* exp_104;
    int sline2_105;
    struct sNode* _inf_value9;
    struct sSStringNode* _inf_obj_value9;
    int sline_real_106;
    char* p_107;
    _Bool no_comma;
    struct sNode* node_108;
    char* p2_109;
    struct buffer*  first_element_source  ;
    struct list$1sNode$ph* list_elements;
    struct list$1sNode$ph* map_keys;
    struct list$1sNode$ph* map_elements;
    _Bool no_comma_110;
    struct sNode* node2;
    struct sNode* _inf_value10;
    struct sMapNode* _inf_obj_value10;
    _Bool no_comma_111;
    struct sNode* node2_112;
    struct sNode* node3;
    struct sNode* _inf_value11;
    struct sMapNode* _inf_obj_value11;
    _Bool no_comma_113;
    struct sNode* node2_114;
    struct sNode* _inf_value12;
    struct sListNode* _inf_obj_value12;
    struct sNode* node_115;
    memset(&c, 0, sizeof(c));
    memset(&c_82, 0, sizeof(c_82));
    memset(&quote, 0, sizeof(quote));
    memset(&size_88, 0, sizeof(size_88));
    if(*((struct sInfo* )come_null_checker(info, "10str.nc", 867))->p==34&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 867))->p+1)==34&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 867))->p+2)==34&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 867))->p+3)==10) {
        sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 868))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 869))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 869))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 870))->p+=4;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 871))->sline++;
        sline=((struct sInfo* )come_null_checker(info, "10str.nc", 873))->sline;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 875, "struct list$1sNode$ph*"))), "10str.nc", 875)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        value=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 876, "struct buffer* "))), "10str.nc", 876)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        head_of_last_line=((void*)0);
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 882))->p==34&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 882))->p+1)==34&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 882))->p+2)==34) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 883))->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 888))->p==37) {
                buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 889)),37);
                buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 890)),37);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 891))->p++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 893))->p==34) {
                buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 894)),92);
                buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 895)),34);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 896))->p++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 898))->p==92) {
                buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 899)),92);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 900))->p++;
                if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 902))->p)) {
                    len=0;
                    while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 904))->p)&&len<3) {
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 905)),*((struct sInfo* )come_null_checker(info, "10str.nc", 905))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 906))->p++;
                        len++;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 910))->p==120||*((struct sInfo* )come_null_checker(info, "10str.nc", 910))->p==88) {
                    buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 911)),*((struct sInfo* )come_null_checker(info, "10str.nc", 911))->p);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 912))->p++;
                    while(*((struct sInfo* )come_null_checker(info, "10str.nc", 914))->p>=48&&*((struct sInfo* )come_null_checker(info, "10str.nc", 914))->p<=57||*((struct sInfo* )come_null_checker(info, "10str.nc", 914))->p>=97&&*((struct sInfo* )come_null_checker(info, "10str.nc", 914))->p<=102||*((struct sInfo* )come_null_checker(info, "10str.nc", 914))->p>=65&&*((struct sInfo* )come_null_checker(info, "10str.nc", 914))->p<=70) {
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 915)),*((struct sInfo* )come_null_checker(info, "10str.nc", 915))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 916))->p++;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 919))->p==123) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 920))->p++;
                    exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(exps, "10str.nc", 924)),(struct sNode*)come_increment_ref_count(exp));
                    if(*((struct sInfo* )come_null_checker(info, "10str.nc", 926))->p==125) {
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 927))->p++;
                    }
                    buffer_append_str(((struct buffer* )come_null_checker(value, "10str.nc", 930)),"%s");
                    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    switch (                    *((struct sInfo* )come_null_checker(info, "10str.nc", 933))->p) {
                        case 48:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 935)),*((struct sInfo* )come_null_checker(info, "10str.nc", 935))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 936))->p++;
                        break;
                        case 110:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 940)),*((struct sInfo* )come_null_checker(info, "10str.nc", 940))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 941))->p++;
                        break;
                        case 116:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 945)),*((struct sInfo* )come_null_checker(info, "10str.nc", 945))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 946))->p++;
                        break;
                        case 114:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 950)),*((struct sInfo* )come_null_checker(info, "10str.nc", 950))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 951))->p++;
                        break;
                        case 118:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 955)),*((struct sInfo* )come_null_checker(info, "10str.nc", 955))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 956))->p++;
                        break;
                        case 102:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 960)),*((struct sInfo* )come_null_checker(info, "10str.nc", 960))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 961))->p++;
                        break;
                        case 97:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 965)),*((struct sInfo* )come_null_checker(info, "10str.nc", 965))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 966))->p++;
                        break;
                        case 98:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 970)),*((struct sInfo* )come_null_checker(info, "10str.nc", 970))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 971))->p++;
                        break;
                        case 92:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 975)),*((struct sInfo* )come_null_checker(info, "10str.nc", 975))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 976))->p++;
                        break;
                        default:
                        buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 980)),*((struct sInfo* )come_null_checker(info, "10str.nc", 980))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 981))->p++;
                        break;
                    }
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 986))->p==0) {
                sline2=((struct sInfo* )come_null_checker(info, "10str.nc", 987))->sline;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 988))->sline=sline;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 993))->p==10) {
                    buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 994)),92);
                    buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 995)),110);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 996))->p++;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 997))->sline++;
                    head_of_last_line=((struct sInfo* )come_null_checker(info, "10str.nc", 999))->p;
                }
                else {
                    buffer_append_char(((struct buffer* )come_null_checker(value, "10str.nc", 1002)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1002))->p);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1003))->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1010))->sline_real=sline_real;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1011, "struct sNode");
        _inf_obj_value1=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value2=sSStringNode_initialize((struct sSStringNode* )come_increment_ref_count(((struct sSStringNode* )come_null_checker(((struct sSStringNode* )(__right_value0=(struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), (void*)0, 1011, "struct sSStringNode* "))), "10str.nc", 1011))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(value, "10str.nc", 1011)))),(struct list$1sNode$ph*)come_increment_ref_count(exps),sline,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value1)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1013))->p==34) {
        sline_real_48=((struct sInfo* )come_null_checker(info, "10str.nc", 1015))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1016))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1016))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1017))->p++;
        sline_49=((struct sInfo* )come_null_checker(info, "10str.nc", 1019))->sline;
        value_50=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1021, "struct buffer* "))), "10str.nc", 1021)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1024))->p==34) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1025))->p++;
                p=((struct sInfo* )come_null_checker(info, "10str.nc", 1027))->p;
                sline_51=((struct sInfo* )come_null_checker(info, "10str.nc", 1028))->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1034))->p==34) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1035))->p++;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1038))->p=p;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1039))->sline=sline_51;
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1043))->p==92) {
                buffer_append_char(((struct buffer* )come_null_checker(value_50, "10str.nc", 1044)),92);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1045))->p++;
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1047))->p==34) {
                    buffer_append_char(((struct buffer* )come_null_checker(value_50, "10str.nc", 1048)),34);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1049))->p++;
                }
                else {
                    buffer_append_char(((struct buffer* )come_null_checker(value_50, "10str.nc", 1052)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1052))->p);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1053))->p++;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1056))->p==0) {
                sline2_52=((struct sInfo* )come_null_checker(info, "10str.nc", 1057))->sline;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1058))->sline=sline_49;
                err_msg(info,"close \" to make c string value");
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1060))->sline=sline2_52;
                exit(2);
            }
            else {
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1064))->p==10) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1064))->sline++;
                }
                buffer_append_char(((struct buffer* )come_null_checker(value_50, "10str.nc", 1066)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1066))->p);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1067))->p++;
            }
        }
        skip_spaces_and_lf(info);
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1073))->sline_real=sline_real_48;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1074, "struct sNode");
        _inf_obj_value2=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode* )come_increment_ref_count(((struct sStrNode* )come_null_checker(((struct sStrNode* )(__right_value0=(struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), (void*)0, 1074, "struct sStrNode* "))), "10str.nc", 1074))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(value_50, "10str.nc", 1074)))),sline_49,info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sStrNode_finalize;
        _inf_value2->clone=(void*)sStrNode_clone;
        _inf_value2->compile=(void*)sStrNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNodeBase_terminated;
        _inf_value2->kind=(void*)sStrNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value2)));
        come_call_finalizer(buffer_finalize, value_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sStrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if((*((struct sInfo* )come_null_checker(info, "10str.nc", 1076))->p==98||*((struct sInfo* )come_null_checker(info, "10str.nc", 1076))->p==66)&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1076))->p+1)==34) {
        sline_real_53=((struct sInfo* )come_null_checker(info, "10str.nc", 1078))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1079))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1079))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1080))->p+=2;
        sline_54=((struct sInfo* )come_null_checker(info, "10str.nc", 1082))->sline;
        value_55=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1084, "struct buffer* "))), "10str.nc", 1084)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        size=0;
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1088))->p==34) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1090))->p++;
                p_56=((struct sInfo* )come_null_checker(info, "10str.nc", 1092))->p;
                sline_57=((struct sInfo* )come_null_checker(info, "10str.nc", 1093))->sline;
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1097))->p==34) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1098))->p++;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1101))->p=p_56;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1102))->sline=sline_57;
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1106))->p==92) {
                buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1107)),92);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1108))->p++;
                if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1110))->p)) {
                    len_58=0;
                    while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1112))->p)&&len_58<3) {
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1113)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1113))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1114))->p++;
                        len_58++;
                    }
                    size++;
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1119))->p==120||*((struct sInfo* )come_null_checker(info, "10str.nc", 1119))->p==88) {
                    buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1120)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1120))->p);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1121))->p++;
                    while(*((struct sInfo* )come_null_checker(info, "10str.nc", 1123))->p>=48&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1123))->p<=57||*((struct sInfo* )come_null_checker(info, "10str.nc", 1123))->p>=97&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1123))->p<=102||*((struct sInfo* )come_null_checker(info, "10str.nc", 1123))->p>=65&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1123))->p<=70) {
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1124)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1124))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1125))->p++;
                    }
                    size++;
                }
                else {
                    switch (                    *((struct sInfo* )come_null_checker(info, "10str.nc", 1130))->p) {
                        case 48:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1132)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1132))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1133))->p++;
                        size++;
                        break;
                        case 110:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1138)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1138))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1139))->p++;
                        size++;
                        break;
                        case 116:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1144)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1144))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1145))->p++;
                        size++;
                        break;
                        case 114:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1150)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1150))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1151))->p++;
                        size++;
                        break;
                        case 118:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1156)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1156))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1157))->p++;
                        size++;
                        break;
                        case 102:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1162)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1162))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1163))->p++;
                        size++;
                        break;
                        case 97:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1168)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1168))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1169))->p++;
                        size++;
                        break;
                        case 98:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1174)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1174))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1175))->p++;
                        size++;
                        break;
                        case 92:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1180)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1180))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1181))->p++;
                        size++;
                        break;
                        default:
                        buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1186)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1186))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1187))->p++;
                        size++;
                        break;
                    }
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1193))->p==0) {
                sline2_59=((struct sInfo* )come_null_checker(info, "10str.nc", 1194))->sline;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1195))->sline=sline_54;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1200))->p==10) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1200))->sline++;
                }
                buffer_append_char(((struct buffer* )come_null_checker(value_55, "10str.nc", 1202)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1202))->p);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1203))->p++;
                size++;
            }
        }
        skip_spaces_and_lf(info);
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1210))->sline_real=sline_real_53;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1211, "struct sNode");
        _inf_obj_value3=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value1=sBufferNode_initialize((struct sBufferNode* )come_increment_ref_count(((struct sBufferNode* )come_null_checker(((struct sBufferNode* )(__right_value0=(struct sBufferNode *)come_calloc(1, sizeof(struct sBufferNode )*(1), (void*)0, 1211, "struct sBufferNode* "))), "10str.nc", 1211))),(struct buffer* )come_increment_ref_count(value_55),size,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sBufferNode_finalize;
        _inf_value3->clone=(void*)sBufferNode_clone;
        _inf_value3->compile=(void*)sBufferNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sBufferNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)));
        come_call_finalizer(buffer_finalize, value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sBufferNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sBufferNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1213))->p==47&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1213))->p-1)!=42&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1213))->p+1)!=42) {
        sline_real_60=((struct sInfo* )come_null_checker(info, "10str.nc", 1214))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1215))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1215))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1216))->p++;
        sline_61=((struct sInfo* )come_null_checker(info, "10str.nc", 1218))->sline;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1220, "struct buffer* "))), "10str.nc", 1220)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while((_Bool)1) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1222))->p==92&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1222))->p+1)==47) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1223))->p++;
                buffer_append_char(((struct buffer* )come_null_checker(buf, "10str.nc", 1224)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1224))->p);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1225))->p++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1227))->p==47) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1228))->p++;
                break;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1231))->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(((struct buffer* )come_null_checker(buf, "10str.nc", 1236)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1236))->p);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1237))->p++;
            }
        }
        global=(_Bool)0;
        ignore_case=(_Bool)0;
        while(*((struct sInfo* )come_null_checker(info, "10str.nc", 1243))->p==103||*((struct sInfo* )come_null_checker(info, "10str.nc", 1243))->p==105) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1244))->p==103) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1245))->p++;
                global=(_Bool)1;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1248))->p==105) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1249))->p++;
                ignore_case=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1259, "struct sNode");
        _inf_obj_value4=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode* )come_increment_ref_count(((struct sStrNode* )come_null_checker(((struct sStrNode* )(__right_value0=(struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), (void*)0, 1259, "struct sStrNode* "))), "10str.nc", 1259))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "10str.nc", 1259)))),sline_61,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sStrNode_finalize;
        _inf_value4->clone=(void*)sStrNode_clone;
        _inf_value4->compile=(void*)sStrNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sStrNode_kind;
        obj=(struct sNode*)come_increment_ref_count(_inf_value4);
        come_call_finalizer(sStrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1261, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "10str.nc", 1261)))));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1263)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1263, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1264)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1264, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1265)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1265, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1266)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1266, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1267)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1267, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1268)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1268, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1269)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1269, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1270)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1270, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params, "10str.nc", 1271)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1271, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        method_block=((void*)0);
        method_block_sline=((struct sInfo* )come_null_checker(info, "10str.nc", 1275))->sline;
        method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1277, "struct list$1sType$ph*"))), "10str.nc", 1277)))));
        come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        node=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj),params,method_block,method_block_sline,method_generics_types,info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1281))->sline_real=sline_real_60;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if((*((struct sInfo* )come_null_checker(info, "10str.nc", 1284))->p==82||*((struct sInfo* )come_null_checker(info, "10str.nc", 1284))->p==114)&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1284))->p+1)==34) {
        sline_real_62=((struct sInfo* )come_null_checker(info, "10str.nc", 1285))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1286))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1286))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1287))->p+=2;
        sline_63=((struct sInfo* )come_null_checker(info, "10str.nc", 1289))->sline;
        value_64=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1291, "struct buffer* "))), "10str.nc", 1291)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1293))->p==34) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1294))->p++;
                p_65=((struct sInfo* )come_null_checker(info, "10str.nc", 1296))->p;
                sline_66=((struct sInfo* )come_null_checker(info, "10str.nc", 1297))->sline;
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1301))->p==34) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1302))->p++;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1305))->p=p_65;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1306))->sline=sline_66;
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1310))->p==92) {
                buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1311)),92);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1312))->p++;
                if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1314))->p)) {
                    len_67=0;
                    while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1316))->p)&&len_67<3) {
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1317)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1317))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1318))->p++;
                        len_67++;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1322))->p==120||*((struct sInfo* )come_null_checker(info, "10str.nc", 1322))->p==88) {
                    buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1323)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1323))->p);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1324))->p++;
                    while(*((struct sInfo* )come_null_checker(info, "10str.nc", 1326))->p>=48&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1326))->p<=57||*((struct sInfo* )come_null_checker(info, "10str.nc", 1326))->p>=97&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1326))->p<=102||*((struct sInfo* )come_null_checker(info, "10str.nc", 1326))->p>=65&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1326))->p<=70) {
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1327)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1327))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1328))->p++;
                    }
                }
                else {
                    switch (                    *((struct sInfo* )come_null_checker(info, "10str.nc", 1332))->p) {
                        case 48:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1334)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1334))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1335))->p++;
                        break;
                        case 110:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1339)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1339))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1340))->p++;
                        break;
                        case 116:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1344)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1344))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1345))->p++;
                        break;
                        case 114:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1349)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1349))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1350))->p++;
                        break;
                        case 118:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1354)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1354))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1355))->p++;
                        break;
                        case 102:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1359)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1359))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1360))->p++;
                        break;
                        case 97:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1364)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1364))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1365))->p++;
                        break;
                        case 98:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1369)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1369))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1370))->p++;
                        break;
                        case 92:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1374)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1374))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1375))->p++;
                        break;
                        default:
                        buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1379)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1379))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1380))->p++;
                        break;
                    }
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1385))->p==0) {
                sline2_68=((struct sInfo* )come_null_checker(info, "10str.nc", 1386))->sline;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1387))->sline=sline_63;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1392))->p==10) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1392))->sline++;
                }
                buffer_append_char(((struct buffer* )come_null_checker(value_64, "10str.nc", 1394)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1394))->p);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1395))->p++;
            }
        }
        global_69=(_Bool)0;
        ignore_case_70=(_Bool)0;
        while(*((struct sInfo* )come_null_checker(info, "10str.nc", 1401))->p==103||*((struct sInfo* )come_null_checker(info, "10str.nc", 1401))->p==105) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1402))->p==103) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1403))->p++;
                global_69=(_Bool)1;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1406))->p==105) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1407))->p++;
                ignore_case_70=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1417, "struct sNode");
        _inf_obj_value5=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value2=sStrNode_initialize((struct sStrNode* )come_increment_ref_count(((struct sStrNode* )come_null_checker(((struct sStrNode* )(__right_value0=(struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), (void*)0, 1417, "struct sStrNode* "))), "10str.nc", 1417))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(value_64, "10str.nc", 1417)))),sline_63,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sStrNode_finalize;
        _inf_value5->clone=(void*)sStrNode_clone;
        _inf_value5->compile=(void*)sStrNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sStrNode_kind;
        obj_71=(struct sNode*)come_increment_ref_count(_inf_value5);
        come_call_finalizer(sStrNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sStrNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        params_72=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1419, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "10str.nc", 1419)))));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1421)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1421, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_71))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1422)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1422, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_70)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1423)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1423, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1424)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1424, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_69)?(((struct sNode*)(__right_value2=create_int_node((char* )come_increment_ref_count(int_to_string(1)),info)))):(((struct sNode*)(__right_value4=create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))))))));
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        ((__right_value4) ? __right_value4 = come_decrement_ref_count(__right_value4, ((struct sNode*)__right_value4)->finalize, ((struct sNode*)__right_value4)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1425)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1425, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1426)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1426, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1427)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1427, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1428)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1428, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(params_72, "10str.nc", 1429)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 1429, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0)),info)))));
        method_block_73=((void*)0);
        method_block_sline_74=((struct sInfo* )come_null_checker(info, "10str.nc", 1433))->sline;
        method_generics_types_75=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count(((struct list$1sType$ph*)come_null_checker(((struct list$1sType$ph*)(__right_value0=(struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), (void*)0, 1435, "struct list$1sType$ph*"))), "10str.nc", 1435)))));
        come_call_finalizer(list$1sType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        node_76=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_71),params_72,method_block_73,method_block_sline_74,method_generics_types_75,info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1439))->sline_real=sline_real_62;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_76);
        come_call_finalizer(buffer_finalize, value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj_71) ? obj_71 = come_decrement_ref_count(obj_71, ((struct sNode*)obj_71)->finalize, ((struct sNode*)obj_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((obj_71) ? obj_71 = come_decrement_ref_count(obj_71, ((struct sNode*)obj_71)->finalize, ((struct sNode*)obj_71)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_72, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1442))->p==39) {
        sline_real_77=((struct sInfo* )come_null_checker(info, "10str.nc", 1443))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1444))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1444))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1445))->p++;
        if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1449))->p==92) {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1450))->p++;
            if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1452))->p)) {
                n=0;
                while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1454))->p)) {
                    n=n*8+*((struct sInfo* )come_null_checker(info, "10str.nc", 1455))->p-48;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1456))->p++;
                }
                c=n;
            }
            else {
                switch (                *((struct sInfo* )come_null_checker(info, "10str.nc", 1462))->p) {
                    case 110:
                    c=10;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1465))->p++;
                    break;
                    case 116:
                    c=9;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1470))->p++;
                    break;
                    case 114:
                    c=13;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1475))->p++;
                    break;
                    case 97:
                    c=7;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1480))->p++;
                    break;
                    case 102:
                    c=12;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1485))->p++;
                    break;
                    case 118:
                    c=11;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1490))->p++;
                    break;
                    case 98:
                    c=8;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1495))->p++;
                    break;
                    case 92:
                    c=92;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1500))->p++;
                    break;
                    case 48:
                    c=0;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1505))->p++;
                    if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1507))->p)) {
                        n_78=0;
                        while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1509))->p)) {
                            n_78=n_78*8+*((struct sInfo* )come_null_checker(info, "10str.nc", 1510))->p-48;
                            ((struct sInfo* )come_null_checker(info, "10str.nc", 1511))->p++;
                            skip_spaces_and_lf(info);
                        }
                        c=n_78;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1521))->p++;
                        char buf_79[128];
                        memset(&buf_79, 0, sizeof(buf_79));
                        strncpy(buf_79,"0x",128);
                        while(*((struct sInfo* )come_null_checker(info, "10str.nc", 1525))->p>=48&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1525))->p<=57||*((struct sInfo* )come_null_checker(info, "10str.nc", 1525))->p>=97&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1525))->p<=102||*((struct sInfo* )come_null_checker(info, "10str.nc", 1525))->p>=65&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1525))->p<=70) {
                            char buf2[2];
                            memset(&buf2, 0, sizeof(buf2));
                            buf2[0]=*((struct sInfo* )come_null_checker(info, "10str.nc", 1527))->p;
                            buf2[1]=0;
                            ((struct sInfo* )come_null_checker(info, "10str.nc", 1529))->p++;
                            strncat(buf_79,buf2,128);
                        }
                        n_80=strtoll(buf_79,((void*)0),0);
                        c=n_80;
                    }
                    break;
                    default:
                    c=*((struct sInfo* )come_null_checker(info, "10str.nc", 1540))->p;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1541))->p++;
                    break;
                }
            }
        }
        else {
            c=*((struct sInfo* )come_null_checker(info, "10str.nc", 1547))->p;
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1548))->p++;
        }
        if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1551))->p!=39) {
            err_msg(info,"close \' to make character value");
            exit(1);
        }
        else {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1556))->p++;
            skip_spaces_and_lf(info);
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1560))->sline_real=sline_real_77;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1561, "struct sNode");
            _inf_obj_value6=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value1=sCharNode_initialize((struct sCharNode* )come_increment_ref_count(((struct sCharNode* )come_null_checker(((struct sCharNode* )(__right_value0=(struct sCharNode *)come_calloc(1, sizeof(struct sCharNode )*(1), (void*)0, 1561, "struct sCharNode* "))), "10str.nc", 1561))),c,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sCharNode_finalize;
            _inf_value6->clone=(void*)sCharNode_clone;
            _inf_value6->compile=(void*)sCharNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sCharNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)));
            come_call_finalizer(sCharNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1566))->p==76&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1566))->p+1)==39) {
        sline_real_81=((struct sInfo* )come_null_checker(info, "10str.nc", 1567))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1568))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1568))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1569))->p+=2;
        if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1574))->p==92) {
            quote=(_Bool)1;
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1576))->p++;
            if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1578))->p)) {
                n_83=0;
                while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1580))->p)) {
                    n_83=n_83*8+*((struct sInfo* )come_null_checker(info, "10str.nc", 1581))->p-48;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1582))->p++;
                }
                c_82=n_83;
            }
            else {
                switch (                *((struct sInfo* )come_null_checker(info, "10str.nc", 1588))->p) {
                    case 110:
                    c_82=10;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1591))->p++;
                    break;
                    case 116:
                    c_82=9;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1596))->p++;
                    break;
                    case 114:
                    c_82=13;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1601))->p++;
                    break;
                    case 97:
                    c_82=7;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1606))->p++;
                    break;
                    case 92:
                    c_82=92;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1611))->p++;
                    break;
                    case 48:
                    c_82=0;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1617))->p++;
                    if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1619))->p)) {
                        n_84=0;
                        while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1621))->p)) {
                            n_84=n_84*8+*((struct sInfo* )come_null_checker(info, "10str.nc", 1622))->p-48;
                            ((struct sInfo* )come_null_checker(info, "10str.nc", 1623))->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_82=n_84;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1633))->p++;
                        char buf_85[128];
                        memset(&buf_85, 0, sizeof(buf_85));
                        strncpy(buf_85,"0x",128);
                        while(*((struct sInfo* )come_null_checker(info, "10str.nc", 1637))->p>=48&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1637))->p<=57||*((struct sInfo* )come_null_checker(info, "10str.nc", 1637))->p>=97&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1637))->p<=102||*((struct sInfo* )come_null_checker(info, "10str.nc", 1637))->p>=65&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1637))->p<=70) {
                            char buf2_86[2];
                            memset(&buf2_86, 0, sizeof(buf2_86));
                            buf2_86[0]=*((struct sInfo* )come_null_checker(info, "10str.nc", 1639))->p;
                            buf2_86[1]=0;
                            ((struct sInfo* )come_null_checker(info, "10str.nc", 1641))->p++;
                            strncat(buf_85,buf2_86,128);
                        }
                        n_87=strtoll(buf_85,((void*)0),0);
                        c_82=n_87;
                    }
                    break;
                    default:
                    c_82=*((struct sInfo* )come_null_checker(info, "10str.nc", 1652))->p;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1653))->p++;
                    break;
                }
            }
        }
        else {
            quote=(_Bool)0;
            p2=*(unsigned char*)((struct sInfo* )come_null_checker(info, "10str.nc", 1660))->p;
            if(p2>127) {
                char str[16+1];
                memset(&str, 0, sizeof(str));
                size_88=((p2&0x80)>>7)+((p2&0x40)>>6)+((p2&0x20)>>5)+((p2&0x10)>>4);
                if(size_88>16) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1671))->err_num++;
                    exit(2);
                }
                else {
                    memcpy(str,((struct sInfo* )come_null_checker(info, "10str.nc", 1675))->p,size_88);
                    str[size_88]=0;
                    if(mbtowc(&c_82,str,size_88)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1681))->err_num++;
                        exit(2);
                    }
                    else {
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1685))->p+=size_88;
                    }
                }
            }
            else {
                c_82=*((struct sInfo* )come_null_checker(info, "10str.nc", 1691))->p;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1692))->p++;
            }
        }
        if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1696))->p!=39) {
            err_msg(info,"close \' to make character value");
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1698))->err_num++;
            exit(2);
        }
        else {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1702))->p++;
            skip_spaces_and_lf(info);
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1706))->sline_real=sline_real_81;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1707, "struct sNode");
            _inf_obj_value7=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value1=sWCharNode_initialize((struct sWCharNode* )come_increment_ref_count(((struct sWCharNode* )come_null_checker(((struct sWCharNode* )(__right_value0=(struct sWCharNode *)come_calloc(1, sizeof(struct sWCharNode )*(1), (void*)0, 1707, "struct sWCharNode* "))), "10str.nc", 1707))),c_82,quote,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sWCharNode_finalize;
            _inf_value7->clone=(void*)sWCharNode_clone;
            _inf_value7->compile=(void*)sWCharNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sWCharNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)));
            come_call_finalizer(sWCharNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sWCharNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1711))->p==76&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1711))->p+1)==34) {
        sline_real_89=((struct sInfo* )come_null_checker(info, "10str.nc", 1712))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1713))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1713))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1714))->p+=2;
        sline_90=((struct sInfo* )come_null_checker(info, "10str.nc", 1716))->sline;
        value_91=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1718, "struct buffer* "))), "10str.nc", 1718)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1721))->p==34) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1722))->p++;
                p_92=((struct sInfo* )come_null_checker(info, "10str.nc", 1724))->p;
                sline_93=((struct sInfo* )come_null_checker(info, "10str.nc", 1725))->sline;
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1729))->p==34) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1730))->p++;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1733))->p=p_92;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1734))->sline=sline_93;
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1738))->p==92) {
                buffer_append_char(((struct buffer* )come_null_checker(value_91, "10str.nc", 1739)),92);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1740))->p++;
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1742))->p==34) {
                    buffer_append_char(((struct buffer* )come_null_checker(value_91, "10str.nc", 1743)),34);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1744))->p++;
                }
                else {
                    buffer_append_char(((struct buffer* )come_null_checker(value_91, "10str.nc", 1747)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1747))->p);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1748))->p++;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1751))->p==0) {
                sline2_94=((struct sInfo* )come_null_checker(info, "10str.nc", 1752))->sline;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1753))->sline=sline_90;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1758))->p==10) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1758))->sline++;
                }
                buffer_append_char(((struct buffer* )come_null_checker(value_91, "10str.nc", 1760)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1760))->p);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1761))->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_95=((struct buffer* )come_null_checker(value_91, "10str.nc", 1767))->len;
        wstr=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len_95+1)), (void*)0, 1769, "int* "));
        str_96=((struct buffer* )come_null_checker(value_91, "10str.nc", 1771))->buf;
        if(mbstowcs(wstr,str_96,len_95+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        ((int* )come_null_checker(wstr, "10str.nc", 1778))[len_95]=0;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1780))->sline_real=sline_real_89;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1781, "struct sNode");
        _inf_obj_value8=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value1=sWStringNode_initialize((struct sWStringNode* )come_increment_ref_count(((struct sWStringNode* )come_null_checker(((struct sWStringNode* )(__right_value0=(struct sWStringNode *)come_calloc(1, sizeof(struct sWStringNode )*(1), (void*)0, 1781, "struct sWStringNode* "))), "10str.nc", 1781))),(int* )come_increment_ref_count(wstr),sline_90,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sWStringNode_finalize;
        _inf_value8->clone=(void*)sWStringNode_clone;
        _inf_value8->compile=(void*)sWStringNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sWStringNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)));
        come_call_finalizer(buffer_finalize, value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(sWStringNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sWStringNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    else if((*((struct sInfo* )come_null_checker(info, "10str.nc", 1785))->p==115||*((struct sInfo* )come_null_checker(info, "10str.nc", 1785))->p==83)&&*(((struct sInfo* )come_null_checker(info, "10str.nc", 1785))->p+1)==34) {
        sline_real_97=((struct sInfo* )come_null_checker(info, "10str.nc", 1786))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1787))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1787))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1788))->p+=2;
        sline_98=((struct sInfo* )come_null_checker(info, "10str.nc", 1790))->sline;
        exps_99=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1792, "struct list$1sNode$ph*"))), "10str.nc", 1792)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        value_100=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1793, "struct buffer* "))), "10str.nc", 1793)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        while(1) {
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1796))->p==34) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1797))->p++;
                p_101=((struct sInfo* )come_null_checker(info, "10str.nc", 1799))->p;
                sline_102=((struct sInfo* )come_null_checker(info, "10str.nc", 1800))->sline;
                skip_spaces_and_lf(info);
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1804))->p==34) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1805))->p++;
                }
                else {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1808))->p=p_101;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1809))->sline=sline_102;
                    break;
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1813))->p==37) {
                buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1814)),37);
                buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1815)),37);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1816))->p++;
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1836))->p==92) {
                buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1837)),92);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1838))->p++;
                if(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1840))->p)) {
                    len_103=0;
                    while(xisdigit(*((struct sInfo* )come_null_checker(info, "10str.nc", 1842))->p)&&len_103<3) {
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1843)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1843))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1844))->p++;
                        len_103++;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1848))->p==120||*((struct sInfo* )come_null_checker(info, "10str.nc", 1848))->p==88) {
                    buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1849)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1849))->p);
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1850))->p++;
                    while(*((struct sInfo* )come_null_checker(info, "10str.nc", 1852))->p>=48&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1852))->p<=57||*((struct sInfo* )come_null_checker(info, "10str.nc", 1852))->p>=97&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1852))->p<=102||*((struct sInfo* )come_null_checker(info, "10str.nc", 1852))->p>=65&&*((struct sInfo* )come_null_checker(info, "10str.nc", 1852))->p<=70) {
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1853)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1853))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1854))->p++;
                    }
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1857))->p==123) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1858))->p++;
                    exp_104=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    list$1sNode$ph_add(((struct list$1sNode$ph*)come_null_checker(exps_99, "10str.nc", 1862)),(struct sNode*)come_increment_ref_count(exp_104));
                    if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1864))->p==125) {
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1865))->p++;
                    }
                    buffer_append_str(((struct buffer* )come_null_checker(value_100, "10str.nc", 1868)),"%s");
                    ((exp_104) ? exp_104 = come_decrement_ref_count(exp_104, ((struct sNode*)exp_104)->finalize, ((struct sNode*)exp_104)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                else {
                    switch (                    *((struct sInfo* )come_null_checker(info, "10str.nc", 1871))->p) {
                        case 48:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1873)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1873))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1874))->p++;
                        break;
                        case 110:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1878)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1878))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1879))->p++;
                        break;
                        case 116:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1883)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1883))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1884))->p++;
                        break;
                        case 114:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1888)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1888))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1889))->p++;
                        break;
                        case 118:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1893)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1893))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1894))->p++;
                        break;
                        case 102:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1898)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1898))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1899))->p++;
                        break;
                        case 97:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1903)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1903))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1904))->p++;
                        break;
                        case 98:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1908)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1908))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1909))->p++;
                        break;
                        case 92:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1913)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1913))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1914))->p++;
                        break;
                        default:
                        buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1918)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1918))->p);
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 1919))->p++;
                        break;
                    }
                }
            }
            else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1924))->p==0) {
                sline2_105=((struct sInfo* )come_null_checker(info, "10str.nc", 1925))->sline;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1926))->sline=sline_98;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1931))->p==10) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1931))->sline++;
                }
                buffer_append_char(((struct buffer* )come_null_checker(value_100, "10str.nc", 1933)),*((struct sInfo* )come_null_checker(info, "10str.nc", 1933))->p);
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1934))->p++;
            }
        }
        skip_spaces_and_lf(info);
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1940))->sline_real=sline_real_97;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1941, "struct sNode");
        _inf_obj_value9=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value2=sSStringNode_initialize((struct sSStringNode* )come_increment_ref_count(((struct sSStringNode* )come_null_checker(((struct sSStringNode* )(__right_value0=(struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), (void*)0, 1941, "struct sSStringNode* "))), "10str.nc", 1941))),(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(value_100, "10str.nc", 1941)))),(struct list$1sNode$ph*)come_increment_ref_count(exps_99),sline_98,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sSStringNode_finalize;
        _inf_value9->clone=(void*)sSStringNode_clone;
        _inf_value9->compile=(void*)sSStringNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sSStringNode_kind;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value9)));
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(sSStringNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        come_call_finalizer(list$1sNode$ph$p_finalize, exps_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(buffer_finalize, value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1943))->p==91) {
        sline_real_106=((struct sInfo* )come_null_checker(info, "10str.nc", 1944))->sline_real;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1945))->sline_real=((struct sInfo* )come_null_checker(info, "10str.nc", 1945))->sline;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1946))->p++;
        skip_spaces_and_lf(info);
        p_107=((struct sInfo* )come_null_checker(info, "10str.nc", 1949))->p;
        no_comma=((struct sInfo* )come_null_checker(info, "10str.nc", 1951))->no_comma;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1952))->no_comma=(_Bool)1;
        node_108=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        ((struct sInfo* )come_null_checker(info, "10str.nc", 1956))->no_comma=no_comma;
        p2_109=((struct sInfo* )come_null_checker(info, "10str.nc", 1958))->p;
        first_element_source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 1960, "struct buffer* "))), "10str.nc", 1960)))));
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        buffer_append(((struct buffer* )come_null_checker(first_element_source, "10str.nc", 1962)),p_107,p2_109-p_107);
        buffer_append_char(((struct buffer* )come_null_checker(first_element_source, "10str.nc", 1963)),0);
        list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1965, "struct list$1sNode$ph*"))), "10str.nc", 1965)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        map_keys=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1967, "struct list$1sNode$ph*"))), "10str.nc", 1967)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count(((struct list$1sNode$ph*)come_null_checker(((struct list$1sNode$ph*)(__right_value0=(struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), (void*)0, 1968, "struct list$1sNode$ph*"))), "10str.nc", 1968)))));
        come_call_finalizer(list$1sNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1971))->p==58) {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1972))->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(map_keys, "10str.nc", 1975)),(struct sNode*)come_increment_ref_count(node_108));
            no_comma_110=((struct sInfo* )come_null_checker(info, "10str.nc", 1977))->no_comma;
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1978))->no_comma=(_Bool)1;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
            ((struct sInfo* )come_null_checker(info, "10str.nc", 1983))->no_comma=no_comma_110;
            list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(map_elements, "10str.nc", 1985)),(struct sNode*)come_increment_ref_count(node2));
            if(*((struct sInfo* )come_null_checker(info, "10str.nc", 1987))->p==93) {
                ((struct sInfo* )come_null_checker(info, "10str.nc", 1988))->p++;
                skip_spaces_and_lf(info);
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 1991, "struct sNode");
                _inf_obj_value10=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1=sMapNode_initialize((struct sMapNode* )come_increment_ref_count(((struct sMapNode* )come_null_checker(((struct sMapNode* )(__right_value0=(struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), (void*)0, 1991, "struct sMapNode* "))), "10str.nc", 1991))),(struct list$1sNode$ph*)come_increment_ref_count(map_keys),(struct list$1sNode$ph*)come_increment_ref_count(map_elements),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sMapNode_finalize;
                _inf_value10->clone=(void*)sMapNode_clone;
                _inf_value10->compile=(void*)sMapNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sMapNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)));
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_111=((struct sInfo* )come_null_checker(info, "10str.nc", 1997))->no_comma;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 1998))->no_comma=(_Bool)1;
                    node2_112=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 2002))->no_comma=no_comma_111;
                    list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(map_keys, "10str.nc", 2004)),(struct sNode*)come_increment_ref_count(node2_112));
                    expected_next_character(58,info);
                    no_comma_111=((struct sInfo* )come_null_checker(info, "10str.nc", 2008))->no_comma;
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 2009))->no_comma=(_Bool)1;
                    node3=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 2013))->no_comma=no_comma_111;
                    list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(map_elements, "10str.nc", 2015)),(struct sNode*)come_increment_ref_count(node3));
                    if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2017))->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2021))->p==44) {
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 2022))->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2025))->p==93) {
                        ((struct sInfo* )come_null_checker(info, "10str.nc", 2026))->p++;
                        skip_spaces_and_lf(info);
                        ((node2_112) ? node2_112 = come_decrement_ref_count(node2_112, ((struct sNode*)node2_112)->finalize, ((struct sNode*)node2_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*((struct sInfo* )come_null_checker(info, "10str.nc", 2031))->p);
                        exit(2);
                    }
                    ((node2_112) ? node2_112 = come_decrement_ref_count(node2_112, ((struct sNode*)node2_112)->finalize, ((struct sNode*)node2_112)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                }
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2036, "struct sNode");
                _inf_obj_value11=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1=sMapNode_initialize((struct sMapNode* )come_increment_ref_count(((struct sMapNode* )come_null_checker(((struct sMapNode* )(__right_value0=(struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), (void*)0, 2036, "struct sMapNode* "))), "10str.nc", 2036))),(struct list$1sNode$ph*)come_increment_ref_count(map_keys),(struct list$1sNode$ph*)come_increment_ref_count(map_elements),info))));
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sMapNode_finalize;
                _inf_value11->clone=(void*)sMapNode_clone;
                _inf_value11->compile=(void*)sMapNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sMapNode_kind;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)));
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer(sMapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
                return __result_obj__0;
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        }
        else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2040))->p==93) {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 2041))->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(list_elements, "10str.nc", 2044)),(struct sNode*)come_increment_ref_count(node_108));
        }
        else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2046))->p==44) {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 2047))->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(list_elements, "10str.nc", 2050)),(struct sNode*)come_increment_ref_count(node_108));
            while((_Bool)1) {
                no_comma_113=((struct sInfo* )come_null_checker(info, "10str.nc", 2053))->no_comma;
                ((struct sInfo* )come_null_checker(info, "10str.nc", 2054))->no_comma=(_Bool)1;
                node2_114=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
                ((struct sInfo* )come_null_checker(info, "10str.nc", 2058))->no_comma=no_comma_113;
                list$1sNode$ph_push_back(((struct list$1sNode$ph*)come_null_checker(list_elements, "10str.nc", 2060)),(struct sNode*)come_increment_ref_count(node2_114));
                if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2062))->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2066))->p==44) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 2067))->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2070))->p==93) {
                    ((struct sInfo* )come_null_checker(info, "10str.nc", 2071))->p++;
                    skip_spaces_and_lf(info);
                    ((node2_114) ? node2_114 = come_decrement_ref_count(node2_114, ((struct sNode*)node2_114)->finalize, ((struct sNode*)node2_114)->_protocol_obj, 0, 0,(void*)0):(void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*((struct sInfo* )come_null_checker(info, "10str.nc", 2076))->p);
                    exit(2);
                }
                ((node2_114) ? node2_114 = come_decrement_ref_count(node2_114, ((struct sNode*)node2_114)->finalize, ((struct sNode*)node2_114)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*((struct sInfo* )come_null_checker(info, "10str.nc", 2082))->p);
            exit(2);
        }
        if(list$1sNode$ph_length(((struct list$1sNode$ph*)come_null_checker(list_elements, "10str.nc", 2086)))>0) {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 2087))->sline_real=sline_real_106;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2088, "struct sNode");
            _inf_obj_value12=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1=sListNode_initialize((struct sListNode* )come_increment_ref_count(((struct sListNode* )come_null_checker(((struct sListNode* )(__right_value0=(struct sListNode *)come_calloc(1, sizeof(struct sListNode )*(1), (void*)0, 2088, "struct sListNode* "))), "10str.nc", 2088))),(struct list$1sNode$ph*)come_increment_ref_count(list_elements),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sListNode_finalize;
            _inf_value12->clone=(void*)sListNode_clone;
            _inf_value12->compile=(void*)sListNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sListNode_kind;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)));
            ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer(sListNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer(sListNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
            return __result_obj__0;
        }
        else {
        }
        ((node_108) ? node_108 = come_decrement_ref_count(node_108, ((struct sNode*)node_108)->finalize, ((struct sNode*)node_108)->_protocol_obj, 0, 0,(void*)0):(void*)0);
        come_call_finalizer(buffer_finalize, first_element_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, list_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_keys, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, map_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_115=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_115);
        ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
        return __result_obj__0;
        ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSStringNode_clone"; neo_current_frame = &fr;
    struct sSStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSStringNode*  result  ;
    char*  __dec_obj107  ;
    char*  __dec_obj108  ;
    struct list$1sNode$ph* __dec_obj109;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSStringNode* )come_increment_ref_count((struct sSStringNode *)come_calloc(1, sizeof(struct sSStringNode )*(1), (void*)0, 5, "struct sSStringNode* "));
    if(self!=((void*)0)) {
        ((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 6))->sline=((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj107=((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 7))->sname,
        ((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 7))->sname, "sSStringNode_clone", 7, "char* "));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 8))->sline_real=((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 9))->value!=((void*)0)) {
        __dec_obj108=((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 9))->value,
        ((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 9))->value=(char* )come_increment_ref_count((char* )come_memdup(((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 9))->value, "sSStringNode_clone", 9, "char* "));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 10))->exps!=((void*)0)) {
        __dec_obj109=((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 10))->exps,
        ((struct sSStringNode* )come_null_checker(result, "sSStringNode_clone", 10))->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sSStringNode*)come_null_checker(self, "sSStringNode_clone", 10))->exps));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sSStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStrNode_clone"; neo_current_frame = &fr;
    struct sStrNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStrNode*  result  ;
    char*  __dec_obj110  ;
    char*  __dec_obj111  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStrNode* )come_increment_ref_count((struct sStrNode *)come_calloc(1, sizeof(struct sStrNode )*(1), (void*)0, 5, "struct sStrNode* "));
    if(self!=((void*)0)) {
        ((struct sStrNode* )come_null_checker(result, "sStrNode_clone", 6))->sline=((struct sStrNode*)come_null_checker(self, "sStrNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sStrNode*)come_null_checker(self, "sStrNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj110=((struct sStrNode* )come_null_checker(result, "sStrNode_clone", 7))->sname,
        ((struct sStrNode* )come_null_checker(result, "sStrNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sStrNode*)come_null_checker(self, "sStrNode_clone", 7))->sname, "sStrNode_clone", 7, "char* "));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sStrNode* )come_null_checker(result, "sStrNode_clone", 8))->sline_real=((struct sStrNode*)come_null_checker(self, "sStrNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sStrNode*)come_null_checker(self, "sStrNode_clone", 9))->value!=((void*)0)) {
        __dec_obj111=((struct sStrNode* )come_null_checker(result, "sStrNode_clone", 9))->value,
        ((struct sStrNode* )come_null_checker(result, "sStrNode_clone", 9))->value=(char* )come_increment_ref_count((char* )come_memdup(((struct sStrNode*)come_null_checker(self, "sStrNode_clone", 9))->value, "sStrNode_clone", 9, "char* "));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sStrNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBufferNode_clone"; neo_current_frame = &fr;
    struct sBufferNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBufferNode*  result  ;
    char*  __dec_obj112  ;
    struct buffer*  __dec_obj113  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sBufferNode* )come_increment_ref_count((struct sBufferNode *)come_calloc(1, sizeof(struct sBufferNode )*(1), (void*)0, 5, "struct sBufferNode* "));
    if(self!=((void*)0)) {
        ((struct sBufferNode* )come_null_checker(result, "sBufferNode_clone", 6))->sline=((struct sBufferNode*)come_null_checker(self, "sBufferNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sBufferNode*)come_null_checker(self, "sBufferNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj112=((struct sBufferNode* )come_null_checker(result, "sBufferNode_clone", 7))->sname,
        ((struct sBufferNode* )come_null_checker(result, "sBufferNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sBufferNode*)come_null_checker(self, "sBufferNode_clone", 7))->sname, "sBufferNode_clone", 7, "char* "));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sBufferNode* )come_null_checker(result, "sBufferNode_clone", 8))->sline_real=((struct sBufferNode*)come_null_checker(self, "sBufferNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sBufferNode*)come_null_checker(self, "sBufferNode_clone", 9))->value!=((void*)0)) {
        __dec_obj113=((struct sBufferNode* )come_null_checker(result, "sBufferNode_clone", 9))->value,
        ((struct sBufferNode* )come_null_checker(result, "sBufferNode_clone", 9))->value=(struct buffer* )come_increment_ref_count(buffer_clone(((struct sBufferNode*)come_null_checker(self, "sBufferNode_clone", 9))->value));
        come_call_finalizer(buffer_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sBufferNode* )come_null_checker(result, "sBufferNode_clone", 10))->size=((struct sBufferNode*)come_null_checker(self, "sBufferNode_clone", 10))->size;
    }
    __result_obj__0 = result;
    come_call_finalizer(sBufferNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCharNode_clone"; neo_current_frame = &fr;
    struct sCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCharNode*  result  ;
    char*  __dec_obj114  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCharNode* )come_increment_ref_count((struct sCharNode *)come_calloc(1, sizeof(struct sCharNode )*(1), (void*)0, 5, "struct sCharNode* "));
    if(self!=((void*)0)) {
        ((struct sCharNode* )come_null_checker(result, "sCharNode_clone", 6))->sline=((struct sCharNode*)come_null_checker(self, "sCharNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sCharNode*)come_null_checker(self, "sCharNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj114=((struct sCharNode* )come_null_checker(result, "sCharNode_clone", 7))->sname,
        ((struct sCharNode* )come_null_checker(result, "sCharNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sCharNode*)come_null_checker(self, "sCharNode_clone", 7))->sname, "sCharNode_clone", 7, "char* "));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sCharNode* )come_null_checker(result, "sCharNode_clone", 8))->sline_real=((struct sCharNode*)come_null_checker(self, "sCharNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sCharNode* )come_null_checker(result, "sCharNode_clone", 9))->value=((struct sCharNode*)come_null_checker(self, "sCharNode_clone", 9))->value;
    }
    __result_obj__0 = result;
    come_call_finalizer(sCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWCharNode_clone"; neo_current_frame = &fr;
    struct sWCharNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWCharNode*  result  ;
    char*  __dec_obj115  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sWCharNode* )come_increment_ref_count((struct sWCharNode *)come_calloc(1, sizeof(struct sWCharNode )*(1), (void*)0, 5, "struct sWCharNode* "));
    if(self!=((void*)0)) {
        ((struct sWCharNode* )come_null_checker(result, "sWCharNode_clone", 6))->sline=((struct sWCharNode*)come_null_checker(self, "sWCharNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sWCharNode*)come_null_checker(self, "sWCharNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj115=((struct sWCharNode* )come_null_checker(result, "sWCharNode_clone", 7))->sname,
        ((struct sWCharNode* )come_null_checker(result, "sWCharNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sWCharNode*)come_null_checker(self, "sWCharNode_clone", 7))->sname, "sWCharNode_clone", 7, "char* "));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sWCharNode* )come_null_checker(result, "sWCharNode_clone", 8))->sline_real=((struct sWCharNode*)come_null_checker(self, "sWCharNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)) {
        ((struct sWCharNode* )come_null_checker(result, "sWCharNode_clone", 9))->value=((struct sWCharNode*)come_null_checker(self, "sWCharNode_clone", 9))->value;
    }
    if(self!=((void*)0)) {
        ((struct sWCharNode* )come_null_checker(result, "sWCharNode_clone", 10))->quote=((struct sWCharNode*)come_null_checker(self, "sWCharNode_clone", 10))->quote;
    }
    __result_obj__0 = result;
    come_call_finalizer(sWCharNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sWStringNode_clone"; neo_current_frame = &fr;
    struct sWStringNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sWStringNode*  result  ;
    char*  __dec_obj116  ;
    int*  __dec_obj117  ;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sWStringNode* )come_increment_ref_count((struct sWStringNode *)come_calloc(1, sizeof(struct sWStringNode )*(1), (void*)0, 5, "struct sWStringNode* "));
    if(self!=((void*)0)) {
        ((struct sWStringNode* )come_null_checker(result, "sWStringNode_clone", 6))->sline=((struct sWStringNode*)come_null_checker(self, "sWStringNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sWStringNode*)come_null_checker(self, "sWStringNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj116=((struct sWStringNode* )come_null_checker(result, "sWStringNode_clone", 7))->sname,
        ((struct sWStringNode* )come_null_checker(result, "sWStringNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sWStringNode*)come_null_checker(self, "sWStringNode_clone", 7))->sname, "sWStringNode_clone", 7, "char* "));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sWStringNode* )come_null_checker(result, "sWStringNode_clone", 8))->sline_real=((struct sWStringNode*)come_null_checker(self, "sWStringNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sWStringNode*)come_null_checker(self, "sWStringNode_clone", 9))->value!=((void*)0)) {
        __dec_obj117=((struct sWStringNode* )come_null_checker(result, "sWStringNode_clone", 9))->value,
        ((struct sWStringNode* )come_null_checker(result, "sWStringNode_clone", 9))->value=(int* )come_increment_ref_count((int* )come_memdup(((struct sWStringNode*)come_null_checker(self, "sWStringNode_clone", 9))->value, "sWStringNode_clone", 9, "int* "));
        __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sWStringNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMapNode_clone"; neo_current_frame = &fr;
    struct sMapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMapNode*  result  ;
    char*  __dec_obj118  ;
    struct list$1sNode$ph* __dec_obj119;
    struct list$1sNode$ph* __dec_obj120;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMapNode* )come_increment_ref_count((struct sMapNode *)come_calloc(1, sizeof(struct sMapNode )*(1), (void*)0, 5, "struct sMapNode* "));
    if(self!=((void*)0)) {
        ((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 6))->sline=((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj118=((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 7))->sname,
        ((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 7))->sname, "sMapNode_clone", 7, "char* "));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 8))->sline_real=((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 9))->map_key_elements!=((void*)0)) {
        __dec_obj119=((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 9))->map_key_elements,
        ((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 9))->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 9))->map_key_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 10))->map_elements!=((void*)0)) {
        __dec_obj120=((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 10))->map_elements,
        ((struct sMapNode* )come_null_checker(result, "sMapNode_clone", 10))->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sMapNode*)come_null_checker(self, "sMapNode_clone", 10))->map_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sMapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sListNode* sListNode_clone(struct sListNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sListNode_clone"; neo_current_frame = &fr;
    struct sListNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sListNode*  result  ;
    char*  __dec_obj121  ;
    struct list$1sNode$ph* __dec_obj122;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sListNode* )come_increment_ref_count((struct sListNode *)come_calloc(1, sizeof(struct sListNode )*(1), (void*)0, 5, "struct sListNode* "));
    if(self!=((void*)0)) {
        ((struct sListNode* )come_null_checker(result, "sListNode_clone", 6))->sline=((struct sListNode*)come_null_checker(self, "sListNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sListNode*)come_null_checker(self, "sListNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj121=((struct sListNode* )come_null_checker(result, "sListNode_clone", 7))->sname,
        ((struct sListNode* )come_null_checker(result, "sListNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sListNode*)come_null_checker(self, "sListNode_clone", 7))->sname, "sListNode_clone", 7, "char* "));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sListNode* )come_null_checker(result, "sListNode_clone", 8))->sline_real=((struct sListNode*)come_null_checker(self, "sListNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sListNode*)come_null_checker(self, "sListNode_clone", 9))->list_elements!=((void*)0)) {
        __dec_obj122=((struct sListNode* )come_null_checker(result, "sListNode_clone", 9))->list_elements,
        ((struct sListNode* )come_null_checker(result, "sListNode_clone", 9))->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(((struct sListNode*)come_null_checker(self, "sListNode_clone", 9))->list_elements));
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sListNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_tuple"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
    char* p;
    char*  name  ;
    char*  __dec_obj123  ;
    _Bool no_comma;
    struct sNode* node;
    struct sNode* __dec_obj124;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value13;
    struct sTupleNode* _inf_obj_value13;
    struct sNode* __result_obj__0;
    memset(&name, 0, sizeof(name));
    tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 2103, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "10str.nc", 2103)))));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while((_Bool)1) {
        p=((struct sInfo* )come_null_checker(info, "10str.nc", 2105))->p;
        if(named_tuple) {
            __dec_obj123=name,
            name=(char* )come_increment_ref_count(parse_word((_Bool)0,info));
            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma=((struct sInfo* )come_null_checker(info, "10str.nc", 2114))->no_comma;
        ((struct sInfo* )come_null_checker(info, "10str.nc", 2115))->no_comma=(_Bool)1;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0));
        __dec_obj124=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node),info));
        (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0) :0);
        ((struct sInfo* )come_null_checker(info, "10str.nc", 2120))->no_comma=no_comma;
        list$1tuple2$2char$phsNode$ph$ph_push_back(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(tuple_elements, "10str.nc", 2122)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "10str.nc", 2122, "struct tuple2$2char$phsNode$ph")),(char* )come_increment_ref_count((char* )come_memdup(name, "10str.nc", 2122, "char* ")),(struct sNode*)come_increment_ref_count(node))));
        if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2124))->p==44) {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 2125))->p++;
            skip_spaces_and_lf(info);
        }
        else if(*((struct sInfo* )come_null_checker(info, "10str.nc", 2128))->p==41) {
            ((struct sInfo* )come_null_checker(info, "10str.nc", 2129))->p++;
            skip_spaces_and_lf(info);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*((struct sInfo* )come_null_checker(info, "10str.nc", 2134))->p);
            exit(2);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0):(void*)0);
    }
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), (void*)0, 2139, "struct sNode");
    _inf_obj_value13=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1=sTupleNode_initialize((struct sTupleNode* )come_increment_ref_count(((struct sTupleNode* )come_null_checker(((struct sTupleNode* )(__right_value0=(struct sTupleNode *)come_calloc(1, sizeof(struct sTupleNode )*(1), (void*)0, 2139, "struct sTupleNode* "))), "10str.nc", 2139))),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sNodeBase_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, tuple_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(sTupleNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj125;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_116;
    struct tuple2$2char$phsNode$ph* __dec_obj126;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_117;
    struct tuple2$2char$phsNode$ph* __dec_obj127;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1770))->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1771, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1773))->prev=((void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1774))->next=((void*)0);
        __dec_obj125=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1775))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1777))->tail=litem;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1778))->head=litem;
    }
    else if(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1780))->len==1) {
        litem_116=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1781, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_116, "/usr/local/include/neo-c.h", 1783))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1783))->head;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_116, "/usr/local/include/neo-c.h", 1784))->next=((void*)0);
        __dec_obj126=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_116, "/usr/local/include/neo-c.h", 1785))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_116, "/usr/local/include/neo-c.h", 1785))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->tail=litem_116;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1788))->head, "/usr/local/include/neo-c.h", 1788))->next=litem_116;
    }
    else {
        litem_117=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1791, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_117, "/usr/local/include/neo-c.h", 1793))->prev=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1793))->tail;
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_117, "/usr/local/include/neo-c.h", 1794))->next=((void*)0);
        __dec_obj127=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_117, "/usr/local/include/neo-c.h", 1795))->item,
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(litem_117, "/usr/local/include/neo-c.h", 1795))->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0);
        ((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1797))->tail, "/usr/local/include/neo-c.h", 1797))->next=litem_117;
        ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1798))->tail=litem_117;
    }
    ((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1801))->len++;
    __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTupleNode_clone"; neo_current_frame = &fr;
    struct sTupleNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTupleNode*  result  ;
    char*  __dec_obj128  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj131;
    if(self==(void*)0) {
        __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTupleNode* )come_increment_ref_count((struct sTupleNode *)come_calloc(1, sizeof(struct sTupleNode )*(1), (void*)0, 5, "struct sTupleNode* "));
    if(self!=((void*)0)) {
        ((struct sTupleNode* )come_null_checker(result, "sTupleNode_clone", 6))->sline=((struct sTupleNode*)come_null_checker(self, "sTupleNode_clone", 6))->sline;
    }
    if(self!=((void*)0)&&((struct sTupleNode*)come_null_checker(self, "sTupleNode_clone", 7))->sname!=((void*)0)) {
        __dec_obj128=((struct sTupleNode* )come_null_checker(result, "sTupleNode_clone", 7))->sname,
        ((struct sTupleNode* )come_null_checker(result, "sTupleNode_clone", 7))->sname=(char* )come_increment_ref_count((char* )come_memdup(((struct sTupleNode*)come_null_checker(self, "sTupleNode_clone", 7))->sname, "sTupleNode_clone", 7, "char* "));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        ((struct sTupleNode* )come_null_checker(result, "sTupleNode_clone", 8))->sline_real=((struct sTupleNode*)come_null_checker(self, "sTupleNode_clone", 8))->sline_real;
    }
    if(self!=((void*)0)&&((struct sTupleNode*)come_null_checker(self, "sTupleNode_clone", 9))->tuple_elements!=((void*)0)) {
        __dec_obj131=((struct sTupleNode* )come_null_checker(result, "sTupleNode_clone", 9))->tuple_elements,
        ((struct sTupleNode* )come_null_checker(result, "sTupleNode_clone", 9))->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(((struct sTupleNode*)come_null_checker(self, "sTupleNode_clone", 9))->tuple_elements));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result_obj__0 = result;
    come_call_finalizer(sTupleNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(((struct list$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), (void*)0, 1665, "struct list$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1665)))));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1667))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1670)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1670))->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(((struct list$1tuple2$2char$phsNode$ph$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1673)),(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1673))->item)));
        }
        it=((struct list_item$1tuple2$2char$phsNode$ph$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1676))->next;
    }
    __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj129  ;
    struct sNode* __dec_obj130;
    if(self==(void*)0) {
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), (void*)0, 5, "struct tuple2$2char$phsNode$ph*"));
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 6))->v1!=((void*)0)) {
        __dec_obj129=((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 6))->v1,
        ((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 6))->v1=(char* )come_increment_ref_count((char* )come_memdup(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 6))->v1, "tuple2$2char$phsNode$ph_clone", 6, "char* "));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0);
    }
    if(self!=((void*)0)&&((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 7))->v2!=((void*)0)) {
        __dec_obj130=((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 7))->v2,
        ((struct tuple2$2char$phsNode$ph*)come_null_checker(result, "tuple2$2char$phsNode$ph_clone", 7))->v2=(struct sNode*)come_increment_ref_count(sNode_clone(((struct tuple2$2char$phsNode$ph*)come_null_checker(self, "tuple2$2char$phsNode$ph_clone", 7))->v2));
        (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0, (void*)0) :0);
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

