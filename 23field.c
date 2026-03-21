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
    long alloc_size;
    int allocated;
    int alive;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
    const char* sname;
    int sline;
    int id;
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
    struct sNode* (*left_value)(void*);
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
    _Bool mIter;
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
    _Bool mWeak;
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
    _Bool no_output_come_code;
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
    struct buffer*  mSourceEnd  ;
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
    char*  mAsmFun  ;
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
    _Bool mNullValue;
    char*  c_value_without_null_checker  ;
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
    char* mSName;
    int mSLine;
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
    char*  caller_sname  ;
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
    _Bool defer_block;
    struct buffer*  loop_expression_buffer  ;
    char*  loop_result_value_name  ;
    _Bool loop_result_value_name_defined;
    struct sType*  loop_result_type  ;
    char*  iter_buffer  ;
    char*  iter_next  ;
    char*  iter_block  ;
    _Bool use_iter_next;
    struct sType*  iter_type  ;
    int id;
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

struct sHeapChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sFunNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sFun*  mFun  ;
};

struct sStoreFieldNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char*  mName  ;
    _Bool mArrow;
};

struct sLoadFieldNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    char*  mName  ;
    _Bool mArrow;
};

struct sAutomaticallyUnwrapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sUnwrapNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sStoreArrayNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNode$ph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern struct neo_frame*  neo_current_frame  ;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

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
extern _Bool gPortableC;
extern _Bool gComeLowMemory;
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
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_heap_final();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
_Bool come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool test);
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str, char* sname, int sline);
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
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
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
int*  __builtin_wstring(const char* str, char* sname, int sline);
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
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool wchar_tp_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  , _Bool iter_);
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_, char*  asm_fun  );
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
struct sNode* sNodeBase_left_value(struct sNodeBase* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
struct sNode* parse_iterator_it(struct sInfo*  info  );
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
_Bool require_explicit_method_in_low_memory_mode(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
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
_Bool is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
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
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct sBlock*  parse_block(struct sInfo*  info  , _Bool return_self_at_last, _Bool in_function);
_Bool is_function_attribute_word(char* buf);
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value, _Bool iter_, _Bool loop_result_type);
void arrange_stack(struct sInfo*  info  , int top);
struct sNode* parse_function(struct sInfo*  info  );
struct sNode* parse_function_call(char* fun_name, struct sInfo*  info  , _Bool come_);
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
struct sNode* create_str_node(char*  value  , int sline, struct sInfo*  info  );
struct sNode* create_buffer_node(struct buffer*  value  , unsigned long  size  , struct sInfo*  info  );
struct sNode* create_sstring_node(char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  );
struct sNode* create_char_node(int value, struct sInfo*  info  );
struct sNode* create_wchar_node(int  value  , _Bool quote, struct sInfo*  info  );
struct sNode* create_wstring_node(int*  value  , int sline, struct sInfo*  info  );
struct sNode* create_prefixed_char_node(int value, char*  prefix  , struct sInfo*  info  );
struct sNode* create_prefixed_string_node(char*  value  , char*  prefix  , int sline, struct sInfo*  info  );
struct sNode* create_list_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
struct sNode* create_vector_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
struct sNode* create_tuple_node(struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  );
struct sNode* create_map_node(struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  );
struct sNode* expression_node_v96(struct sInfo*  info  );
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
struct sNode* parse_some(struct sInfo*  info  );
struct sNode* parse_none(struct sInfo*  info  );
_Bool is_inner_calling(struct sNode* node, struct sInfo*  info  );
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  );
struct sNode* expression_node_v95(struct sInfo*  info  );
struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  , _Bool iter_);
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
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function);
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  );
struct sNode* create_new_node(struct sType*  type  , struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo*  info  );
struct sNode* create_defer_node(struct sBlock*  block  , struct sInfo*  info  );
struct sNode* create_true_object(struct sInfo*  info  );
struct sNode* create_false_object(struct sInfo*  info  );
struct sNode* create_delete_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_borrow_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_clone_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_dupe_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_dummy_heap_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_inc_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_dec_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_dec_nofree_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_is_heap_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_is_pointer_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_optional_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_ref_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_span_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_generic_node(struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  );
struct sNode* create_offsetof_node(struct sType*  type  , char*  name  , struct sInfo*  info  );
struct sNode* create_sizeof_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_dynamic_typeof_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_dynamic_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_alignof_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_alignof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_alignof_node2(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_alignof_exp_node2(struct sNode* exp, struct sInfo*  info  );
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
struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  );
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sHeapChecker_kind(struct sHeapChecker* self);
_Bool sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
struct sNode* parse_vector(struct sInfo*  info  );
_Bool is_portable_libc_symbol(const char* sym);
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
_Bool is_arithmetic_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_integer_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_null_pointer_constant(struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool is_generic_void_pointer_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_span_class_name(const char* class_name, struct sInfo*  info  );
_Bool is_generic_placeholder_class_name(const char* class_name, struct sInfo*  info  );
_Bool is_generic_placeholder_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_span_wrapper_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_transparent_union_type(struct sType*  type  , struct sInfo*  info  );
_Bool pointer_attr_has_word(struct sType*  type  , const char* word, struct sInfo*  info  );
_Bool is_type_name(char* buf, struct sInfo*  info  );
_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  );
_Bool is_contained_generics_placeholder(struct sType*  type  , struct sInfo*  info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_);
char*  parse_square_attribute(struct sInfo*  info  );
char*  parse_declspec_attribute(struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  );
void parse_struct_attribute_skip_paren(struct sInfo*  info  );
_Bool parse_attribute_keyword(struct buffer*  result  , const char* keyword, _Bool allow_end, struct sInfo*  info  );
_Bool parse_common_attribute_keyword(struct buffer*  result  , struct sInfo*  info  , _Bool allow_end);
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  merge_tag_attribute(char*  current  , char*  attribute  );
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool first, struct sInfo*  info  );
_Bool skip_pointer_attribute(struct sInfo*  info  );
char*  parse_pointer_qualifier(struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  );
struct sType*  parse_pointer_attribute(struct sType*  type  , struct sInfo*  info  );
void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool for_variable, struct sInfo*  info  );
void apply_type_qualifiers(struct sType*  type  , _Bool constant, _Bool complex_, _Bool atomic_, _Bool thread_local, _Bool thread_, _Bool alignas_double, _Bool register_, _Bool unsigned_, _Bool noreturn_, _Bool volatile_, _Bool uniq_, _Bool static_, _Bool extern_, _Bool inline_, _Bool restrict_, _Bool long_long, _Bool long_, _Bool short_, _Bool norecord, _Bool weak_);
void merge_pointer_attribute_to_type(struct sType*  type  , char*  pointer_attribute  );
char*  parse_variable_name_fun(struct sType*  type  , _Bool anonymous_name, _Bool var_name_between_brace, char*  attribute  , struct sInfo*  info  );
void show_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_pointer_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_owned_main(struct sType*  type_  , struct sClass*  klass  , struct sType*  field_type  , struct sType*  owner  , struct sInfo*  info  );
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo*  info  );
static struct sType*  expand_typedef_for_load_element(struct sType*  type  );
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
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
_Bool operator_overload_fun2(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  middle_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sType*  get_field_type(struct sClass*  klass  , char*  name  , struct sInfo*  info  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  , _Bool arrow_);
char*  sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char*  name  , struct sInfo*  info  , _Bool arrow_);
char*  sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo*  info  );
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
_Bool in_the_fun(char*  fun_name  , struct sInfo*  info  );
struct sAutomaticallyUnwrapNode* sAutomaticallyUnwrapNode_initialize(struct sAutomaticallyUnwrapNode* self, struct sNode* node, struct sInfo*  info  );
char*  sAutomaticallyUnwrapNode_kind(struct sAutomaticallyUnwrapNode* self);
_Bool sAutomaticallyUnwrapNode_compile(struct sAutomaticallyUnwrapNode* self, struct sInfo*  info  );
static void sAutomaticallyUnwrapNode_finalize(struct sAutomaticallyUnwrapNode* self);
struct sNode* automatically_unwrap(struct sNode* node, struct sInfo*  info  );
static struct sAutomaticallyUnwrapNode* sAutomaticallyUnwrapNode_clone(struct sAutomaticallyUnwrapNode* self);
struct sUnwrapNode* sUnwrapNode_initialize(struct sUnwrapNode* self, struct sNode* node, struct sInfo*  info  , _Bool check, _Bool no_unwrap);
char*  sUnwrapNode_kind(struct sUnwrapNode* self);
_Bool sUnwrapNode_compile(struct sUnwrapNode* self, struct sInfo*  info  );
static void sUnwrapNode_finalize(struct sUnwrapNode* self);
struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  );
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  );
char*  sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo*  info  );
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo*  info  );
char*  sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo*  info  );
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  );
char*  sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo*  info  );
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, _Bool iter_);
struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  );
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  );
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sUnwrapNode* sUnwrapNode_clone(struct sUnwrapNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
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
static struct sType*  expand_typedef_for_load_element(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expand_typedef_for_load_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    int guard;
    struct sType*  orig  ;
    int ptr;
    int array_ptr;
    struct list$1sNode$ph* __dec_obj35;
    char*  __dec_obj36  ;
    char*  __dec_obj37  ;
    char*  __dec_obj38  ;
    struct list$1sType$ph* __dec_obj39;
    struct sType*  __dec_obj40  ;
    struct sType*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    struct sType*  __result_obj__0  ;
    result=(struct sType* )come_increment_ref_count(sType_clone(type), "23field.nc", 5, 206);
    guard=0;
    while(result->mTypedefOriginalType&&guard<16) {
        __right_value0 = (void*)0;
        orig=(struct sType* )come_increment_ref_count(sType_clone(result->mTypedefOriginalType), "23field.nc", 9, 207);
        ptr=result->mPointerNum;
        if(ptr==0&&orig->mPointerNum>0) {
            ptr=orig->mPointerNum;
        }
        orig->mPointerNum=ptr;
        array_ptr=result->mArrayPointerNum;
        if(array_ptr==0&&orig->mArrayPointerNum>0) {
            array_ptr=orig->mArrayPointerNum;
        }
        orig->mArrayPointerNum=array_ptr;
        if(result->mArrayPointerType) {
            orig->mArrayPointerType=(_Bool)1;
        }
        if(list$1sNode$ph_length(result->mArrayNum)>0) {
            __right_value0 = (void*)0;
            __dec_obj35=orig->mArrayNum,
            orig->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(result->mArrayNum), "23field.nc", 27, 209);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 27, 208);
        }
        orig->mConstant=result->mConstant;
        orig->mVolatile=result->mVolatile;
        orig->mRestrict=result->mRestrict;
        orig->mUnsigned=result->mUnsigned;
        orig->mShort=result->mShort;
        orig->mLong=result->mLong;
        orig->mLongLong=result->mLongLong;
        orig->mComplex=result->mComplex;
        orig->mAtomic=result->mAtomic;
        __dec_obj36=orig->mPointerAttribute,
        orig->mPointerAttribute=(char* )come_increment_ref_count(result->mPointerAttribute, "23field.nc", 40, 211);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 40, 210);
        __dec_obj37=orig->mAttribute,
        orig->mAttribute=(char* )come_increment_ref_count(result->mAttribute, "23field.nc", 41, 213);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 41, 212);
        __dec_obj38=orig->mVarAttribute,
        orig->mVarAttribute=(char* )come_increment_ref_count(result->mVarAttribute, "23field.nc", 42, 215);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 42, 214);
        if(list$1sType$ph_length(result->mGenericsTypes)>0) {
            __right_value0 = (void*)0;
            __dec_obj39=orig->mGenericsTypes,
            orig->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(result->mGenericsTypes), "23field.nc", 45, 217);
            come_call_finalizer(list$1sType$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 45, 216);
        }
        if(result->mNoSolvedGenericsType) {
            __right_value0 = (void*)0;
            __dec_obj40=orig->mNoSolvedGenericsType,
            orig->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(result->mNoSolvedGenericsType), "23field.nc", 48, 219);
            come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 48, 218);
        }
        if(result->mOriginalLoadVarType) {
            __right_value0 = (void*)0;
            __dec_obj41=orig->mOriginalLoadVarType,
            orig->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result->mOriginalLoadVarType), "23field.nc", 51, 221);
            come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 51, 220);
        }
        __right_value0 = (void*)0;
        __dec_obj42=result,
        result=(struct sType* )come_increment_ref_count(sType_clone(orig), "23field.nc", 54, 223);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 54, 222);
        guard++;
        come_call_finalizer(sType_finalize, orig, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 58, 224);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "23field.nc", 58, 225);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 58, 226);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 58, 227);
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
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 1, "struct sType* "), "sType_clone", 5, 2);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 36);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 35);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 38);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 37);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 68);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 67);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 70);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 69);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 79);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 78) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 81);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 80) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 82, "char* "), "sType_clone", 14, 84);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 83);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 85, "char* "), "sType_clone", 15, 87);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 86);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 88, "char* "), "sType_clone", 16, 90);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 89);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 91, "char* "), "sType_clone", 17, 93);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 92);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 94, "char* "), "sType_clone", 18, 96);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 95);
    }
    if(self!=((void*)0)) {
        result->mNew=self->mNew;
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
        result->mNorecord=self->mNorecord;
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
        result->mWeak=self->mWeak;
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
        result->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result->mSlice=self->mSlice;
    }
    if(self!=((void*)0)) {
        result->mOptional=self->mOptional;
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
        __right_value0 = (void*)0;
        __dec_obj15=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 97, "char* "), "sType_clone", 49, 99);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 98);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 100, "char* "), "sType_clone", 51, 102);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 101);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 103, "char* "), "sType_clone", 54, 105);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 104);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 135);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 134);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 137);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 136);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 157);
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 156);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 159);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 158);
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
    if(self!=((void*)0)) {
        result->mMinusPointerNum=self->mMinusPointerNum;
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 161);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 160);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 162, "char* "), "sType_clone", 67, 164);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 163);
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
        __right_value0 = (void*)0;
        __dec_obj27=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 166);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 165);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 198);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 197);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 200);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 199);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 202);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 201) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 204);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 203);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 205);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 3);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 4);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 7);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 8);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 9):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 10):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 11));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 12));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 13));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 14));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 15));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 16));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 17));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 18));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 21);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 22);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 24);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 25);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 26);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 27));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 28);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 31);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 32);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 33):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 34);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 6);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 5);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 20);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 19):(void*)0);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 23);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 30);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 29));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 39);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 40);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 41, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 45)), "/usr/local/include/neo-c.h", 1513, 46);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 61));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 62));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 63);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 64);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 65);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 42);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 43);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 44);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
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
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 47);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 48, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 49);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 51);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 50);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 52, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 53);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 55);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 54);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 56, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 57);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 59);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 58);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 60);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 66);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 71);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 72):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 73, "struct sNode*"), "sNode_clone", 5, 74);
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
    if(self!=((void*)0)) {
        result->left_value=self->left_value;
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 75);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 76):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 77):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 106);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 107);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 108, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 112)), "/usr/local/include/neo-c.h", 1513, 113);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 128));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 129));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 130);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 131);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 132);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 109);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 110);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 111);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
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
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 114):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 115, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 116);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 118);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 117) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 119, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 120);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj19=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 122);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 121) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 123, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 124);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj20=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 126);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 125) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 127):(void*)0);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 133);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 138);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 139);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 140, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 144)), "/usr/local/include/neo-c.h", 1513, 145);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 152);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 153);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 154);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 141);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 142);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 143);
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
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 146, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 147);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 148, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 149);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 150, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 151);
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 155);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 167);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 168);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 169, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 173)), "/usr/local/include/neo-c.h", 1513, 174);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 189, "char* "), "/usr/local/include/neo-c.h", 1518, 190));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 191, "char* "), "/usr/local/include/neo-c.h", 1521, 192));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 193);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 194);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 195);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 170);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 171);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 172);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 175));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 176, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 177);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 179);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 178);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 180, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 181);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 183);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 182);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 184, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 185);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 187);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 186);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 188));
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 196);
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
    return self->len;
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
    return self->len;
            neo_current_frame = fr.prev;
}

_Bool operator_overload_fun2(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  middle_value  , struct CVALUE*  right_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun2"; neo_current_frame = &fr;
    struct sType*  generics_type  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj43  ;
    struct sType*  __dec_obj44  ;
    struct sClass*  klass  ;
    char* class_name;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool result;
    struct sRightValueObject*  right_value_object  ;
    struct sRightValueObject*  right_value_object_8  ;
    struct sRightValueObject*  right_value_object_9  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    memset(&generics_type, 0, sizeof(generics_type));
    if(type->mNoSolvedGenericsType) {
        __dec_obj43=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType), "23field.nc", 67, 229);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 67, 228);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj44=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(sType_clone(type), "23field.nc", 70, 231);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 70, 230);
    }
    klass=type->mClass;
    class_name=(char* )come_increment_ref_count(klass->mName, "23field.nc", 74, 232);
    __right_value0 = (void*)0;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type,info,(_Bool)0)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1, "23field.nc", 76, 233);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 76, 235);
    result=(_Bool)0;
    if(operator_fun) {
        {
            right_value_object=left_value->right_value_objects;
            if(right_value_object) {
                right_value_object->mFreed=(_Bool)1;
            }
        }
        {
            right_value_object_8=middle_value->right_value_objects;
            if(right_value_object_8) {
                right_value_object_8->mFreed=(_Bool)1;
            }
        }
        {
            right_value_object_9=right_value->right_value_objects;
            if(right_value_object_9) {
                right_value_object_9->mFreed=(_Bool)1;
            }
        }
        obj=(struct sNode*)come_increment_ref_count(left_node, "23field.nc", 102, 236);
        __right_value0 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "23field.nc", 103, 237, "struct list$1tuple2$2char$phsNode$ph$ph*"), "23field.nc", 103, 245)), "23field.nc", 103, 246);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 105, 261, "struct tuple2$2char$phsNode$ph"), "23field.nc", 105, 271),(char* )come_increment_ref_count((char* )((void*)0), "23field.nc", 105, 272),(struct sNode*)come_increment_ref_count(left_node, "23field.nc", 105, 273)), "23field.nc", 105, 274));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 106, 275, "struct tuple2$2char$phsNode$ph"), "23field.nc", 106, 276),(char* )come_increment_ref_count((char* )((void*)0), "23field.nc", 106, 277),(struct sNode*)come_increment_ref_count(middle_node, "23field.nc", 106, 278)), "23field.nc", 106, 279));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 107, 280, "struct tuple2$2char$phsNode$ph"), "23field.nc", 107, 281),(char* )come_increment_ref_count((char* )((void*)0), "23field.nc", 107, 282),(struct sNode*)come_increment_ref_count(right_node, "23field.nc", 107, 283)), "23field.nc", 107, 284));
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "23field.nc", 109, 285),params,((void*)0),0,((void*)0),info,(_Bool)0), "23field.nc", 109, 286);
        Value=node_compile(node,info);
        if(Value) {
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 116, 287):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 116, 288);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 116, 289):(void*)0);
    }
        __result_obj__0 = result;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 116, 290):(void*)0);
    ((middle_node) ? middle_node = come_decrement_ref_count(middle_node, ((struct sNode*)middle_node)->finalize, ((struct sNode*)middle_node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 116, 291):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 116, 292):(void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 116, 293);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 116, 294));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 116, 295));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 234));
    }
        neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 238);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 243);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 244);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 242);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 241);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 239));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 240):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj45;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_10;
    struct tuple2$2char$phsNode$ph* __dec_obj46;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_11;
    struct tuple2$2char$phsNode$ph* __dec_obj47;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 247);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1534, 248, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1534, 249);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj45=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 251);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 250);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1544, 252, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1544, 253);
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        __dec_obj46=litem_10->item,
        litem_10->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 255);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 254);
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1554, 256, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1554, 257);
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        __dec_obj47=litem_11->item,
        litem_11->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 259);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 258);
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 260);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj48  ;
    struct sNode* __dec_obj49;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj48=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3913, 263);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 262);
    __dec_obj49=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3914, 265);
    (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3914, 264) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3916, 266);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 267);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3916, 268));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3916, 269):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 270);
    return __result_obj__0;
}

struct sType*  get_field_type(struct sClass*  klass  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_field_type"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsType$ph* field;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  field_name  =0;
    struct sType*  field_type2  =0;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj50  ;
    struct sType*  __dec_obj51  ;
    struct sType*  __result_obj__0  ;
    result=((void*)0);
    for(_o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "23field.nc", 122, 296),field=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_3)    ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_3);field=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_3)){
        multiple_assign_var2=field;
        field_name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "23field.nc", 123, 297);
        field_type2=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "23field.nc", 123, 298);
        if(string_operator_equals(field_name,name)) {
            __dec_obj50=result,
            result=(struct sType* )come_increment_ref_count(sType_clone(field_type2), "23field.nc", 126, 300);
            come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 126, 299);
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 127, 301));
            come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 127, 302);
            break;
        }
        if(field_type2->mAnonymousVarName) {
            __right_value0 = (void*)0;
            __dec_obj51=result,
            result=(struct sType* )come_increment_ref_count(get_field_type(field_type2->mClass,(char* )come_increment_ref_count(name, "23field.nc", 131, 303),info), "23field.nc", 131, 305);
            come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 131, 304);
            if(result) {
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 134, 306));
                come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 134, 307);
                break;
            }
        }
        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 139, 308));
        come_call_finalizer(sType_finalize, field_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 139, 309);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "23field.nc", 139, 310);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 139, 311));
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 139, 312);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 139, 317);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 139, 318);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_12;
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
    memset(&result_12,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_12;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_13;
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
    memset(&result_13,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_13;
    neo_current_frame = fr.prev;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 316);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 315);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 313));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 314);
    }
            neo_current_frame = fr.prev;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj52;
    struct sNode* __dec_obj53;
    char*  __dec_obj54  ;
    struct sStoreFieldNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStoreFieldNode*)come_increment_ref_count(self, "23field.nc", 147, 319),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 147, 321);
    __right_value0 = (void*)0;
    __dec_obj52=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "23field.nc", 149, 323);
    (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0, "23field.nc", 149, 322) :0);
    __right_value0 = (void*)0;
    __dec_obj53=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "23field.nc", 150, 325);
    (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0, (void*)0, "23field.nc", 150, 324) :0);
    __right_value0 = (void*)0;
    __dec_obj54=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"23field.nc",151), "23field.nc", 151, 327);
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 151, 326);
    self->mArrow=arrow_;
        __result_obj__0 = (struct sStoreFieldNode*)come_increment_ref_count(self, "23field.nc", 155, 328);
    come_call_finalizer(sStoreFieldNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 155, 333);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 155, 334):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 155, 335));
    neo_current_frame = fr.prev;
    come_call_finalizer(sStoreFieldNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 155, 336);
    return __result_obj__0;
}

char*  sStoreFieldNode_kind(struct sStoreFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStoreFieldNode","23field.nc",157))), "23field.nc", 157, 337);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 157, 338));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "23field.nc", 157, 339));
    return __result_obj__0;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct sNode* right;
    char*  name  ;
    _Bool arrow_;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type2  ;
    struct sType*  __dec_obj55  ;
    struct sType*  __dec_obj56  ;
    int i;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj57  ;
    _Bool Value_16;
    _Bool new_channel;
    struct CVALUE*  right_value  ;
    struct sType*  right_type  ;
    struct sType*  left_type  ;
    struct sType*  left_type3  ;
    struct sClass*  klass  ;
    struct sType*  field_type  ;
    int index;
    char*  child_field_name  ;
    _Bool child_field_is_pointer;
    struct sType*  field_type_17  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj58  ;
    char*  __dec_obj59  ;
    struct sType*  __dec_obj60  ;
    struct CVALUE*  come_value_20  ;
    struct sType*  __dec_obj64  ;
    struct sType*  __dec_obj65  ;
    char*  c_value  ;
    char*  __dec_obj66  ;
    char*  __dec_obj67  ;
    char*  __dec_obj68  ;
    char*  __dec_obj69  ;
    char*  c_value_21  ;
    char*  __dec_obj70  ;
    char*  c_value_22  ;
    char*  __dec_obj71  ;
    char*  __dec_obj72  ;
    char*  __dec_obj73  ;
    char*  __dec_obj74  ;
    char*  c_value_23  ;
    char*  __dec_obj75  ;
    char*  c_value_24  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    char*  __dec_obj79  ;
    char*  c_value_25  ;
    char*  __dec_obj80  ;
    char*  c_value_26  ;
    char*  __dec_obj81  ;
    char*  __dec_obj82  ;
    char*  __dec_obj83  ;
    char*  __dec_obj84  ;
    char*  c_value_27  ;
    char*  __dec_obj85  ;
    char*  __dec_obj86  ;
    char*  __dec_obj87  ;
    struct sType*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    char*  __dec_obj93  ;
    char*  __dec_obj94  ;
    struct sType*  __dec_obj95  ;
    memset(&left_type2, 0, sizeof(left_type2));
    memset(&c_value, 0, sizeof(c_value));
    memset(&c_value_22, 0, sizeof(c_value_22));
    memset(&c_value_24, 0, sizeof(c_value_24));
    memset(&c_value_26, 0, sizeof(c_value_26));
    left=(struct sNode*)come_increment_ref_count(create_heap_checker((struct sNode*)come_increment_ref_count(self->mLeft, "23field.nc", 162, 340),info), "23field.nc", 162, 341);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "23field.nc", 163, 342);
    __right_value0 = (void*)0;
    name=(char* )come_increment_ref_count(__builtin_string(self->mName,"23field.nc",164), "23field.nc", 164, 343);
    arrow_=self->mArrow;
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 168, 344):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 168, 345):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 168, 346));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 171, 347);
    if(left_value->type->mNoSolvedGenericsType) {
        __dec_obj55=left_type2,
        left_type2=(struct sType* )come_increment_ref_count(left_value->type->mNoSolvedGenericsType, "23field.nc", 176, 349);
        come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 176, 348);
    }
    else {
        __dec_obj56=left_type2,
        left_type2=(struct sType* )come_increment_ref_count(left_value->type, "23field.nc", 179, 351);
        come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 179, 350);
    }
    if(string_operator_equals(left_type2->mClass->mName,"tuple1")||string_operator_equals(left_type2->mClass->mName,"tuple2")||string_operator_equals(left_type2->mClass->mName,"tuple3")||string_operator_equals(left_type2->mClass->mName,"tuple3")||string_operator_equals(left_type2->mClass->mName,"tuple4")||string_operator_equals(left_type2->mClass->mName,"tuple5")) {
        for(i=0        ;i<list$1sType$ph_length(left_type2->mGenericsTypes);i++){
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(string_operator_equals(name,((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(left_type2->mGenericsTypes,i)))->mTupleName)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 184, 370);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 184, 371);
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                __dec_obj57=name,
                name=(char* )come_increment_ref_count(xsprintf("v%d",i+1), "23field.nc", 185, 373);
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 185, 372);
            }
        }
    }
    Value_16=node_compile(right,info);
    if(!Value_16) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 191, 374):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 191, 375):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 191, 376));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 191, 382);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 191, 383);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    new_channel=string_operator_equals(((char* )(__right_value1=right->kind(right->_protocol_obj))),"sNewChannel");
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 194, 384));
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 196, 385);
    right_type=(struct sType* )come_increment_ref_count(right_value->type, "23field.nc", 197, 386);
    left_type=(struct sType* )come_increment_ref_count(left_value->type, "23field.nc", 199, 387);
    left_type3=(struct sType* )come_increment_ref_count(left_type, "23field.nc", 200, 388);
    __right_value0 = (void*)0;
    klass=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,left_type3->mClass->mName), "23field.nc", 204, 423);
    field_type=((void*)0);
    index=0;
    child_field_name=((void*)0);
    child_field_is_pointer=(_Bool)0;
    if(klass->mFields==((void*)0)) {
        warning_msg(info,"%s fields are null",klass->mName);
                __result_obj__0 = (_Bool)1;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 213, 424):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 213, 425):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 213, 426));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 427);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 428);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 429);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 430);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 431);
        come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 432);
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 433);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 213, 434);
        (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 213, 435));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 216, 436);
    __right_value0 = (void*)0;
    field_type_17=(struct sType* )come_increment_ref_count(get_field_type(klass,(char* )come_increment_ref_count(name, "23field.nc", 216, 437),info), "23field.nc", 216, 438);
    if(field_type_17==((void*)0)) {
        warning_msg(info,"field %s is not found",name);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 221, 439, "struct CVALUE* "), "23field.nc", 221, 440)), "23field.nc", 221, 441);
        if(arrow_) {
            __right_value0 = (void*)0;
            __dec_obj58=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 224, 443);
            __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 224, 442);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj59=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s/* aaa */=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 227, 445);
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 227, 444);
        }
        __right_value0 = (void*)0;
        __dec_obj60=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "23field.nc", 229, 447);
        come_call_finalizer(sType_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 229, 446);
        come_value->var=right_value->var;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 232, 462));
        add_come_last_code(info,"%s",come_value->c_value);
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 463);
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 235, 464):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 235, 465):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 235, 466));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 467);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 468);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 469);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 470);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 471);
        come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 472);
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 473);
        (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 235, 474));
        come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 235, 475);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 238, 476);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_20=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 238, 477, "struct CVALUE* "), "23field.nc", 238, 478)), "23field.nc", 238, 479);
    __dec_obj64=right_type,
    right_type=(struct sType* )come_increment_ref_count(right_value->type, "23field.nc", 240, 481);
    come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 240, 480);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    check_assign_type(((char*)(__right_value1=xsprintf("\%s is assigned to(1)",((char* )(__right_value0=string_to_string(name)))))),field_type_17,right_type,right_value,info);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 242, 482));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 242, 483));
    __right_value0 = (void*)0;
    __dec_obj65=right_type,
    right_type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "23field.nc", 244, 485);
    come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 244, 484);
    if(field_type_17->mHeap!=right_value->type->mHeap) {
        if(string_operator_equals(right_value->type->mClass->mName,"void")&&right_value->type->mPointerNum==1) {
        }
        else {
            err_msg(info,"invalid heap object(%s) left  %d right %d",name,field_type_17->mHeap,right_value->type->mHeap);
                        __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 252, 486):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 252, 487):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 252, 488));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 489);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 490);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 491);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 492);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 493);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 494);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 495);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 252, 496));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 497);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 252, 498);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(field_type_17->mHeap&&right_type->mHeap&&field_type_17->mPointerNum>0&&right_type->mPointerNum>0) {
        if(left_value->type->mPointerNum==1||left_value->type->mArrayPointerNum==1) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj66=c_value,
                    c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s",left_value->c_value,child_field_name,name), "23field.nc", 261, 500);
                    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 261, 499);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj67=c_value,
                    c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s",left_value->c_value,child_field_name,name), "23field.nc", 264, 502);
                    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 264, 501);
                }
                decrement_ref_count_object(field_type_17,c_value,info,(_Bool)0);
                std_move(field_type_17,right_type,right_value,info);
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj68=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 269, 504);
                    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 269, 503);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj69=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 272, 506);
                    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 272, 505);
                }
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 281, 507));
            }
            else {
                __right_value0 = (void*)0;
                c_value_21=(char* )come_increment_ref_count(xsprintf("%s->%s",left_value->c_value,name), "23field.nc", 276, 508);
                decrement_ref_count_object(field_type_17,c_value_21,info,(_Bool)0);
                std_move(field_type_17,right_type,right_value,info);
                __right_value0 = (void*)0;
                __dec_obj70=come_value_20->c_value,
                come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 279, 510);
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 279, 509);
                (c_value_21 = come_decrement_ref_count(c_value_21, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 281, 511));
            }
        }
        else if(left_value->type->mPointerNum==0) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj71=c_value_22,
                    c_value_22=(char* )come_increment_ref_count(xsprintf("%s.%s->%s",left_value->c_value,child_field_name,name), "23field.nc", 286, 513);
                    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 286, 512);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj72=c_value_22,
                    c_value_22=(char* )come_increment_ref_count(xsprintf("%s.%s.%s",left_value->c_value,child_field_name,name), "23field.nc", 289, 515);
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 289, 514);
                }
                decrement_ref_count_object(field_type_17,c_value_22,info,(_Bool)0);
                std_move(field_type_17,right_type,right_value,info);
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj73=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 294, 517);
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 294, 516);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj74=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 297, 519);
                    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 297, 518);
                }
                (c_value_22 = come_decrement_ref_count(c_value_22, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 306, 520));
            }
            else {
                __right_value0 = (void*)0;
                c_value_23=(char* )come_increment_ref_count(xsprintf("%s.%s",left_value->c_value,name), "23field.nc", 301, 521);
                decrement_ref_count_object(field_type_17,c_value_23,info,(_Bool)0);
                std_move(field_type_17,right_value->type,right_value,info);
                __right_value0 = (void*)0;
                __dec_obj75=come_value_20->c_value,
                come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 304, 523);
                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 304, 522);
                (c_value_23 = come_decrement_ref_count(c_value_23, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 306, 524));
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.(X)",name,left_value->type->mPointerNum);
                        __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 309, 525):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 309, 526):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 309, 527));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 528);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 529);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 530);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 531);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 532);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 533);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 534);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 309, 535));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 536);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 309, 537);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    else if(field_type_17->mHeap&&field_type_17->mPointerNum>0&&right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")) {
        if(left_value->type->mPointerNum==1||left_value->type->mArrayPointerNum==1) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj76=c_value_24,
                    c_value_24=(char* )come_increment_ref_count(xsprintf("%s->%s->%s",left_value->c_value,child_field_name,name), "23field.nc", 318, 539);
                    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 318, 538);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj77=c_value_24,
                    c_value_24=(char* )come_increment_ref_count(xsprintf("%s->%s.%s",left_value->c_value,child_field_name,name), "23field.nc", 321, 541);
                    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 321, 540);
                }
                decrement_ref_count_object(field_type_17,c_value_24,info,(_Bool)0);
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj78=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 325, 543);
                    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 325, 542);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj79=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 328, 545);
                    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 328, 544);
                }
                (c_value_24 = come_decrement_ref_count(c_value_24, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 336, 546));
            }
            else {
                __right_value0 = (void*)0;
                c_value_25=(char* )come_increment_ref_count(xsprintf("%s->%s",left_value->c_value,name), "23field.nc", 332, 547);
                decrement_ref_count_object(field_type_17,c_value_25,info,(_Bool)0);
                __right_value0 = (void*)0;
                __dec_obj80=come_value_20->c_value,
                come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 334, 549);
                __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 334, 548);
                (c_value_25 = come_decrement_ref_count(c_value_25, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 336, 550));
            }
        }
        else if(left_value->type->mPointerNum==0) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj81=c_value_26,
                    c_value_26=(char* )come_increment_ref_count(xsprintf("%s.%s->%s",left_value->c_value,child_field_name,name), "23field.nc", 341, 552);
                    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 341, 551);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj82=c_value_26,
                    c_value_26=(char* )come_increment_ref_count(xsprintf("%s.%s.%s",left_value->c_value,child_field_name,name), "23field.nc", 344, 554);
                    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 344, 553);
                }
                decrement_ref_count_object(field_type_17,c_value_26,info,(_Bool)0);
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj83=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 348, 556);
                    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 348, 555);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj84=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 351, 558);
                    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 351, 557);
                }
                (c_value_26 = come_decrement_ref_count(c_value_26, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 359, 559));
            }
            else {
                __right_value0 = (void*)0;
                c_value_27=(char* )come_increment_ref_count(xsprintf("%s.%s",left_value->c_value,name), "23field.nc", 355, 560);
                decrement_ref_count_object(field_type_17,c_value_27,info,(_Bool)0);
                __right_value0 = (void*)0;
                __dec_obj85=come_value_20->c_value,
                come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 357, 562);
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 357, 561);
                (c_value_27 = come_decrement_ref_count(c_value_27, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 359, 563));
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.(Y)",name,left_value->type->mPointerNum);
                        __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 362, 564):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 362, 565):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 362, 566));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 567);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 568);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 569);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 570);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 571);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 572);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 573);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 362, 574));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 575);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 362, 576);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    else if(field_type_17->mChannel&&new_channel) {
        if(child_field_is_pointer) {
            __right_value0 = (void*)0;
            __dec_obj86=come_value_20->c_value,
            come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value->c_value,name,right_value->c_value), "23field.nc", 367, 578);
            __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 367, 577);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj87=come_value_20->c_value,
            come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value->c_value,name,right_value->c_value), "23field.nc", 370, 580);
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 370, 579);
        }
        __right_value0 = (void*)0;
        __dec_obj88=come_value_20->type,
        come_value_20->type=(struct sType* )come_increment_ref_count(sType_clone(right_value->type), "23field.nc", 373, 582);
        come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 373, 581);
        come_value_20->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_20, "23field.nc", 376, 583));
        add_come_last_code(info,"%s",come_value_20->c_value);
                __result_obj__0 = (_Bool)1;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 380, 584):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 380, 585):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 380, 586));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 587);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 588);
        come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 589);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 590);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 591);
        come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 592);
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 593);
        (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 380, 594));
        come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 595);
        come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 380, 596);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        if(left_value->type->mPointerNum==1||left_value->type->mArrayPointerNum==1) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj89=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 386, 598);
                    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 386, 597);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj90=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 389, 600);
                    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 389, 599);
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj91=come_value_20->c_value,
                come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 393, 602);
                __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 393, 601);
            }
        }
        else if(left_value->type->mPointerNum==0) {
            if(child_field_name) {
                if(child_field_is_pointer) {
                    __right_value0 = (void*)0;
                    __dec_obj92=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 399, 604);
                    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 399, 603);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj93=come_value_20->c_value,
                    come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value->c_value,child_field_name,name,right_value->c_value), "23field.nc", 402, 606);
                    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 402, 605);
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj94=come_value_20->c_value,
                come_value_20->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s=%s",left_value->c_value,name,right_value->c_value), "23field.nc", 406, 608);
                __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 406, 607);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.(Z)",name,left_value->type->mPointerNum);
                        __result_obj__0 = (_Bool)1;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 411, 609):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 411, 610):(void*)0);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 411, 611));
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 612);
            come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 613);
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 614);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 615);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 616);
            come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 617);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 618);
            (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 411, 619));
            come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 620);
            come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 411, 621);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __right_value0 = (void*)0;
    __dec_obj95=come_value_20->type,
    come_value_20->type=(struct sType* )come_increment_ref_count(sType_clone(field_type_17), "23field.nc", 415, 623);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 415, 622);
    come_value_20->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_20, "23field.nc", 418, 624));
    add_come_last_code(info,"%s",come_value_20->c_value);
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 422, 625):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 422, 626):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 422, 627));
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 628);
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 629);
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 630);
    come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 631);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 632);
    come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 633);
    come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 634);
    (child_field_name = come_decrement_ref_count(child_field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 422, 635));
    come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 636);
    come_call_finalizer(CVALUE_finalize, come_value_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 422, 637);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 320));
    }
        neo_current_frame = fr.prev;
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreFieldNode_finalize", 2, 329));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sStoreFieldNode_finalize", 3, 330):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sStoreFieldNode_finalize", 4, 331):(void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreFieldNode_finalize", 5, 332));
    }
        neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_14  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 352);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 353);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 354);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 355);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 356);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 357);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_14,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_14, "/usr/local/include/neo-c.h", 2169, 358);
    come_call_finalizer(sType_finalize, default_value_14, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 359);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 360);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_15  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 361);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 362);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 363);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 364);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 365);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 366);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_15,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_15, "/usr/local/include/neo-c.h", 2169, 367);
    come_call_finalizer(sType_finalize, default_value_15, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 368);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 369);
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 377));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 378);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 379));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 380));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 381));
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 389);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 394);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 395);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 396);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 397);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 398);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 399);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 400);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 401);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 402);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 403);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 404);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 405);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 406);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 407);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 390));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 391);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 392));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 393));
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 408);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 409);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 410);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 411);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 412);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 413);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 414);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 415);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 416);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 417);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 418);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 419);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 420);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 421);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 422);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj61  ;
    struct list_item$1CVALUE$ph* litem_18;
    struct CVALUE*  __dec_obj62  ;
    struct list_item$1CVALUE$ph* litem_19;
    struct CVALUE*  __dec_obj63  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 448);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1619, 449, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1619, 450);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj61=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 452);
        come_call_finalizer(CVALUE_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 451);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1629, 453, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1629, 454);
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj62=litem_18->item,
        litem_18->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 456);
        come_call_finalizer(CVALUE_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 455);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1639, 457, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1639, 458);
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj63=litem_19->item,
        litem_19->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 460);
        come_call_finalizer(CVALUE_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 459);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 461);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char*  name  , struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj96;
    char*  __dec_obj97  ;
    struct sLoadFieldNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadFieldNode*)come_increment_ref_count(self, "23field.nc", 430, 638),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 430, 639);
    __right_value0 = (void*)0;
    __dec_obj96=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "23field.nc", 432, 641);
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0, "23field.nc", 432, 640) :0);
    __right_value0 = (void*)0;
    __dec_obj97=self->mName,
    self->mName=(char* )come_increment_ref_count(__builtin_string(name,"23field.nc",433), "23field.nc", 433, 643);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 433, 642);
    self->mArrow=arrow_;
        __result_obj__0 = (struct sLoadFieldNode*)come_increment_ref_count(self, "23field.nc", 437, 644);
    come_call_finalizer(sLoadFieldNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 437, 648);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 437, 649));
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadFieldNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 437, 650);
    return __result_obj__0;
}

char*  sLoadFieldNode_kind(struct sLoadFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadFieldNode","23field.nc",439))), "23field.nc", 439, 651);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 439, 652));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "23field.nc", 439, 653));
    return __result_obj__0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    char*  name  ;
    _Bool arrow_;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type2  ;
    struct sType*  left_type3  ;
    struct sType*  __dec_obj98  ;
    struct sType*  __dec_obj99  ;
    int i;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj100  ;
    struct sType*  left_type  ;
    struct sType*  left_type3_  ;
    struct sType*  left_type3_28  ;
    struct sClass*  klass  ;
    void* __right_value2 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj101  ;
    char*  __dec_obj102  ;
    struct sType*  __dec_obj103  ;
    struct sType*  field_type  ;
    struct CVALUE*  come_value_29  ;
    char*  __dec_obj104  ;
    char*  __dec_obj105  ;
    struct sType*  __dec_obj106  ;
    struct CVALUE*  come_value_30  ;
    char*  __dec_obj107  ;
    char*  __dec_obj108  ;
    struct sType*  __dec_obj109  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj110  ;
    struct sType*  original_load_var_type  ;
    struct sType*  __dec_obj111  ;
    struct sType*  original_load_var_type_31  ;
    struct sType*  __dec_obj112  ;
    struct sType*  original_load_var_type_32  ;
    struct sType*  __dec_obj113  ;
    struct sType*  original_load_var_type_33  ;
    struct sType*  __dec_obj114  ;
    memset(&left_type3, 0, sizeof(left_type3));
    left=(struct sNode*)come_increment_ref_count(create_heap_checker((struct sNode*)come_increment_ref_count(self->mLeft, "23field.nc", 444, 654),info), "23field.nc", 444, 655);
    __right_value0 = (void*)0;
    name=(char* )come_increment_ref_count(__builtin_string(self->mName,"23field.nc",445), "23field.nc", 445, 656);
    arrow_=self->mArrow;
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 449, 657):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 449, 658));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 452, 659);
    left_type2=(struct sType* )come_increment_ref_count(left_value->type, "23field.nc", 454, 660);
    if(left_type2->mNoSolvedGenericsType) {
        __dec_obj98=left_type3,
        left_type3=(struct sType* )come_increment_ref_count(left_type2->mNoSolvedGenericsType, "23field.nc", 458, 662);
        come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 458, 661);
    }
    else {
        __dec_obj99=left_type3,
        left_type3=(struct sType* )come_increment_ref_count(left_type2, "23field.nc", 461, 664);
        come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 461, 663);
    }
    if(string_operator_equals(left_type3->mClass->mName,"tuple1")||string_operator_equals(left_type3->mClass->mName,"tuple2")||string_operator_equals(left_type3->mClass->mName,"tuple3")||string_operator_equals(left_type3->mClass->mName,"tuple3")||string_operator_equals(left_type3->mClass->mName,"tuple4")||string_operator_equals(left_type3->mClass->mName,"tuple5")) {
        for(i=0        ;i<list$1sType$ph_length(left_type3->mGenericsTypes);i++){
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(string_operator_equals(name,((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(left_type3->mGenericsTypes,i)))->mTupleName)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 466, 665);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 466, 666);
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                __dec_obj100=name,
                name=(char* )come_increment_ref_count(xsprintf("v%d",i+1), "23field.nc", 467, 668);
                __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 467, 667);
            }
        }
    }
    left_type=(struct sType* )come_increment_ref_count(left_value->type, "23field.nc", 472, 669);
    __right_value0 = (void*)0;
    left_type3_=(struct sType* )come_increment_ref_count(solve_generics(left_type,left_type,info), "23field.nc", 474, 670);
    come_call_finalizer(sType_finalize, left_type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 475, 671);
    __right_value0 = (void*)0;
    left_type3_28=(struct sType* )come_increment_ref_count(solve_method_generics(left_type3_,info), "23field.nc", 475, 672);
    klass=left_type3_28->mClass;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    klass=((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->classes,((char* )(__right_value1=__builtin_string(klass->mName,"23field.nc",478))))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 478, 673));
    if(klass==((void*)0)||klass->mFields==((void*)0)) {
        warning_msg(info,"type of %s.%s is not found. so can't check the heap type\n",left_value->c_value,name);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 483, 674, "struct CVALUE* "), "23field.nc", 483, 675)), "23field.nc", 483, 676);
        if(arrow_) {
            __right_value0 = (void*)0;
            __dec_obj101=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s",left_value->c_value,name), "23field.nc", 486, 678);
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 486, 677);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj102=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s",left_value->c_value,name), "23field.nc", 489, 680);
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 489, 679);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj103=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "23field.nc", 491, 681, "struct sType* "), "23field.nc", 491, 682),(char*)come_increment_ref_count(xsprintf("void"), "23field.nc", 491, 683),(_Bool)0,info,(_Bool)0,0), "23field.nc", 491, 685);
        come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 491, 684);
        come_value->type->mPointerNum=1;
        come_value->var=left_value->var;
        come_value->mLoadField=(_Bool)1;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 496, 686));
        add_come_last_code(info,"%s",come_value->c_value);
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 500, 687);
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 500, 688):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 500, 689));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 500, 690);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 500, 691);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 500, 692);
        come_call_finalizer(sType_finalize, left_type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 500, 693);
        come_call_finalizer(sType_finalize, left_type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 500, 694);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 503, 695);
    }
    __right_value0 = (void*)0;
    field_type=(struct sType* )come_increment_ref_count(get_field_type(klass,(char* )come_increment_ref_count(name, "23field.nc", 503, 696),info), "23field.nc", 503, 697);
    if(field_type==((void*)0)) {
        warning_msg(info,"type of %s.%s is not found. so can't check the heap type\n",left_value->c_value,name);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_29=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 508, 698, "struct CVALUE* "), "23field.nc", 508, 699)), "23field.nc", 508, 700);
        if(arrow_) {
            __right_value0 = (void*)0;
            __dec_obj104=come_value_29->c_value,
            come_value_29->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s",left_value->c_value,name), "23field.nc", 511, 702);
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 511, 701);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj105=come_value_29->c_value,
            come_value_29->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s",left_value->c_value,name), "23field.nc", 514, 704);
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 514, 703);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj106=come_value_29->type,
        come_value_29->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "23field.nc", 516, 705, "struct sType* "), "23field.nc", 516, 706),(char*)come_increment_ref_count(xsprintf("void"), "23field.nc", 516, 707),(_Bool)0,info,(_Bool)0,0), "23field.nc", 516, 709);
        come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 516, 708);
        come_value_29->type->mPointerNum=1;
        come_value_29->var=left_value->var;
        come_value_29->mLoadField=(_Bool)1;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_29, "23field.nc", 521, 710));
        add_come_last_code(info,"%s",come_value_29->c_value);
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 525, 711);
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 525, 712):(void*)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 525, 713));
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 525, 714);
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 525, 715);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 525, 716);
        come_call_finalizer(sType_finalize, left_type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 525, 717);
        come_call_finalizer(sType_finalize, left_type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 525, 718);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 525, 719);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 528, 720);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_30=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 528, 721, "struct CVALUE* "), "23field.nc", 528, 722)), "23field.nc", 528, 723);
    if(left_value->type->mPointerNum>0||left_value->type->mArrayPointerNum>0) {
        __right_value0 = (void*)0;
        __dec_obj107=come_value_30->c_value,
        come_value_30->c_value=(char* )come_increment_ref_count(xsprintf("%s->%s",left_value->c_value,name), "23field.nc", 531, 725);
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 531, 724);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj108=come_value_30->c_value,
        come_value_30->c_value=(char* )come_increment_ref_count(xsprintf("%s.%s",left_value->c_value,name), "23field.nc", 534, 727);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 534, 726);
    }
    __right_value0 = (void*)0;
    __dec_obj109=come_value_30->type,
    come_value_30->type=(struct sType* )come_increment_ref_count(sType_clone(field_type), "23field.nc", 536, 729);
    come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 536, 728);
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(solve_generics(come_value_30->type,info->generics_type,info), "23field.nc", 537, 730);
    __right_value0 = (void*)0;
    __dec_obj110=come_value_30->type,
    come_value_30->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "23field.nc", 538, 732);
    come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 538, 731);
    come_value_30->var=left_value->var;
    come_value_30->mLoadField=(_Bool)1;
    if(list$1sNode$ph_length(come_value_30->type->mArrayNum)>0) {
        if(info->in_store_array) {
            __right_value0 = (void*)0;
            original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(come_value_30->type), "23field.nc", 544, 733);
            __dec_obj111=come_value_30->type->mOriginalLoadVarType,
            come_value_30->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type, "23field.nc", 545, 735);
            come_call_finalizer(sType_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 545, 734);
            come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 566, 736);
        }
        else if(info->in_typeof) {
            __right_value0 = (void*)0;
            original_load_var_type_31=(struct sType* )come_increment_ref_count(sType_clone(come_value_30->type), "23field.nc", 548, 737);
            __dec_obj112=come_value_30->type->mOriginalLoadVarType,
            come_value_30->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_31, "23field.nc", 549, 739);
            come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 549, 738);
            come_call_finalizer(sType_finalize, original_load_var_type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 566, 740);
        }
        else if(info->in_refference) {
            __right_value0 = (void*)0;
            original_load_var_type_32=(struct sType* )come_increment_ref_count(sType_clone(come_value_30->type), "23field.nc", 552, 741);
            __dec_obj113=come_value_30->type->mOriginalLoadVarType,
            come_value_30->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_32, "23field.nc", 553, 743);
            come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 553, 742);
            come_value_30->type->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_32, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 566, 744);
        }
        else {
            __right_value0 = (void*)0;
            original_load_var_type_33=(struct sType* )come_increment_ref_count(sType_clone(come_value_30->type), "23field.nc", 559, 745);
            __dec_obj114=come_value_30->type->mOriginalLoadVarType,
            come_value_30->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type_33, "23field.nc", 560, 747);
            come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 560, 746);
            list$1sNode$ph_delete(come_value_30->type->mArrayNum,0,1);
            come_value_30->type->mArrayPointerNum++;
            come_call_finalizer(sType_finalize, original_load_var_type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 566, 752);
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_30, "23field.nc", 568, 753));
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 570, 754):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 570, 755));
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 756);
    come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 757);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 758);
    come_call_finalizer(sType_finalize, left_type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 759);
    come_call_finalizer(sType_finalize, left_type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 760);
    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 761);
    come_call_finalizer(CVALUE_finalize, come_value_30, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 762);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 570, 763);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLoadFieldNode_finalize", 2, 645));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLoadFieldNode_finalize", 3, 646):(void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sLoadFieldNode_finalize", 4, 647));
    }
        neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_delete"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    int tmp;
    struct list_item$1sNode$ph* it;
    int i;
    struct list_item$1sNode$ph* prev_it;
    struct list_item$1sNode$ph* it_34;
    int i_35;
    struct list_item$1sNode$ph* prev_it_36;
    struct list_item$1sNode$ph* it_37;
    struct list_item$1sNode$ph* head_prev_it;
    struct list_item$1sNode$ph* tail_it;
    int i_38;
    struct list_item$1sNode$ph* prev_it_39;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head>=self->len) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 749);
                self->len--;
            }
            else if(i==tail) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(tail==self->len) {
        it_34=self->head;
        i_35=0;
        while(it_34!=((void*)0)) {
            if(i_35==head) {
                self->tail=it_34->prev;
                self->tail->next=((void*)0);
            }
            if(i_35>=head) {
                prev_it_36=it_34;
                it_34=it_34->next;
                i_35++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_36, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 750);
                self->len--;
            }
            else {
                it_34=it_34->next;
                i_35++;
            }
        }
    }
    else {
        it_37=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_38=0;
        while(it_37!=((void*)0)) {
            if(i_38==head) {
                head_prev_it=it_37->prev;
            }
            if(i_38==tail) {
                tail_it=it_37;
            }
            if(i_38>=head&&i_38<tail) {
                prev_it_39=it_37;
                it_37=it_37->next;
                i_38++;
                come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it_39, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 751);
                self->len--;
            }
            else {
                it_37=it_37->next;
                i_38++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            head_prev_it->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            tail_it->prev=head_prev_it;
        }
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 748);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool in_the_fun(char*  fun_name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "in_the_fun"; neo_current_frame = &fr;
    _Bool __result_obj__0;
    if(info->come_fun&&((strlen(info->come_fun->mName)>strlen(fun_name)&&memcmp(info->come_fun->mName,fun_name,strlen(fun_name))==0))) {
                __result_obj__0 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 578, 764));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)0;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 581, 765));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sAutomaticallyUnwrapNode* sAutomaticallyUnwrapNode_initialize(struct sAutomaticallyUnwrapNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAutomaticallyUnwrapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj115;
    struct sAutomaticallyUnwrapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAutomaticallyUnwrapNode*)come_increment_ref_count(self, "23field.nc", 588, 766),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 588, 767);
    __right_value0 = (void*)0;
    __dec_obj115=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "23field.nc", 590, 769);
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0, "23field.nc", 590, 768) :0);
        __result_obj__0 = (struct sAutomaticallyUnwrapNode*)come_increment_ref_count(self, "23field.nc", 593, 770);
    come_call_finalizer(sAutomaticallyUnwrapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 593, 773);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 593, 774):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAutomaticallyUnwrapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 593, 775);
    return __result_obj__0;
}

char*  sAutomaticallyUnwrapNode_kind(struct sAutomaticallyUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAutomaticallyUnwrapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAutomaticallyUnwrapNode","23field.nc",595))), "23field.nc", 595, 776);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 595, 777));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "23field.nc", 595, 778));
    return __result_obj__0;
}

_Bool sAutomaticallyUnwrapNode_compile(struct sAutomaticallyUnwrapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAutomaticallyUnwrapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node_40;
    _Bool Value_41;
    node=(struct sNode*)come_increment_ref_count(self->node, "23field.nc", 600, 779);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 603, 780):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 606, 781);
    if(__right_value0 = (void*)0,
({(_conditional_value_X0=(in_the_fun((char*)come_increment_ref_count(xsprintf("ref$"), "23field.nc", 608, 782),info)||in_the_fun((char*)come_increment_ref_count(xsprintf("optional$"), "23field.nc", 608, 783),info)));_conditional_value_X0;})) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 610, 784));
    }
    else if(({(_conditional_value_X1=(come_value->type->mNoSolvedGenericsType));_conditional_value_X1;})) {
        if(string_operator_equals(come_value->type->mNoSolvedGenericsType->mClass->mName,"ref")||string_operator_equals(come_value->type->mNoSolvedGenericsType->mClass->mName,"optional")) {
            obj=(struct sNode*)come_increment_ref_count(node, "23field.nc", 615, 785);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "23field.nc", 616, 786, "struct list$1tuple2$2char$phsNode$ph$ph*"), "23field.nc", 616, 787)), "23field.nc", 616, 788);
            const char* fun_name="unwrap";
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 620, 789, "struct tuple2$2char$phsNode$ph"), "23field.nc", 620, 790),(char* )come_increment_ref_count((char* )((void*)0), "23field.nc", 620, 791),(struct sNode*)come_increment_ref_count(node, "23field.nc", 620, 792)), "23field.nc", 620, 793));
            __right_value0 = (void*)0;
            node_40=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "23field.nc", 622, 794),params,((void*)0),0,((void*)0),info,(_Bool)0), "23field.nc", 622, 795);
            Value_41=node_compile(node_40,info);
            if(Value_41) {
                                __result_obj__0 = (_Bool)1;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 625, 796):(void*)0);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 625, 797);
                ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 625, 798):(void*)0);
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 625, 799):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 625, 800);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 631, 801):(void*)0);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 631, 802);
            ((node_40) ? node_40 = come_decrement_ref_count(node_40, ((struct sNode*)node_40)->finalize, ((struct sNode*)node_40)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 631, 803):(void*)0);
        }
        else {
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 629, 804));
        }
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 633, 805));
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 636, 806):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 636, 807);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAutomaticallyUnwrapNode_finalize(struct sAutomaticallyUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAutomaticallyUnwrapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAutomaticallyUnwrapNode_finalize", 2, 771));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sAutomaticallyUnwrapNode_finalize", 3, 772):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* automatically_unwrap(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "automatically_unwrap"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sAutomaticallyUnwrapNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 642, 811, "struct sNode");
    _inf_obj_value1=(struct sAutomaticallyUnwrapNode*)come_increment_ref_count(((struct sAutomaticallyUnwrapNode*)(__right_value1=sAutomaticallyUnwrapNode_initialize((struct sAutomaticallyUnwrapNode* )come_increment_ref_count((struct sAutomaticallyUnwrapNode *)come_calloc(1, sizeof(struct sAutomaticallyUnwrapNode )*(1), "23field.nc", 642, 808, "struct sAutomaticallyUnwrapNode* "), "23field.nc", 642, 809),(struct sNode*)come_increment_ref_count(node, "23field.nc", 642, 810),info))), "23field.nc", 642, 812);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sAutomaticallyUnwrapNode_finalize;
    _inf_value1->clone=(void*)sAutomaticallyUnwrapNode_clone;
    _inf_value1->compile=(void*)sAutomaticallyUnwrapNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sAutomaticallyUnwrapNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "23field.nc", 642, 821);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 642, 822):(void*)0);
    come_call_finalizer(sAutomaticallyUnwrapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 642, 823);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "23field.nc", 642, 824):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "23field.nc", 642, 825):(void*)0);
    return __result_obj__0;
}

static struct sAutomaticallyUnwrapNode* sAutomaticallyUnwrapNode_clone(struct sAutomaticallyUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAutomaticallyUnwrapNode_clone"; neo_current_frame = &fr;
    struct sAutomaticallyUnwrapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAutomaticallyUnwrapNode*  result  ;
    char*  __dec_obj116  ;
    struct sNode* __dec_obj117;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAutomaticallyUnwrapNode* )come_increment_ref_count((struct sAutomaticallyUnwrapNode *)come_calloc(1, sizeof(struct sAutomaticallyUnwrapNode )*(1), "sAutomaticallyUnwrapNode_clone", 5, 813, "struct sAutomaticallyUnwrapNode* "), "sAutomaticallyUnwrapNode_clone", 5, 814);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj116=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAutomaticallyUnwrapNode_clone", 7, 815, "char* "), "sAutomaticallyUnwrapNode_clone", 7, 817);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "sAutomaticallyUnwrapNode_clone", 7, 816);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sAutomaticallyUnwrapNode_clone", 9, 819);
        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0, (void*)0, "sAutomaticallyUnwrapNode_clone", 9, 818) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAutomaticallyUnwrapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAutomaticallyUnwrapNode_clone}", 10, 820);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sUnwrapNode* sUnwrapNode_initialize(struct sUnwrapNode* self, struct sNode* node, struct sInfo*  info  , _Bool check, _Bool no_unwrap)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj118;
    struct sUnwrapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sUnwrapNode*)come_increment_ref_count(self, "23field.nc", 649, 826),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 649, 827);
    __right_value0 = (void*)0;
    __dec_obj118=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "23field.nc", 651, 829);
    (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0, (void*)0, "23field.nc", 651, 828) :0);
        __result_obj__0 = (struct sUnwrapNode*)come_increment_ref_count(self, "23field.nc", 654, 830);
    come_call_finalizer(sUnwrapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 654, 833);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 654, 834):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sUnwrapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 654, 835);
    return __result_obj__0;
}

char*  sUnwrapNode_kind(struct sUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sUnwrapNode","23field.nc",656))), "23field.nc", 656, 836);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 656, 837));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "23field.nc", 656, 838));
    return __result_obj__0;
}

_Bool sUnwrapNode_compile(struct sUnwrapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    struct sNode* obj;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node_42;
    _Bool Value;
    _Bool __result_obj__0;
    node=(struct sNode*)come_increment_ref_count(self->node, "23field.nc", 661, 839);
    obj=(struct sNode*)come_increment_ref_count(node, "23field.nc", 663, 840);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "23field.nc", 664, 841, "struct list$1tuple2$2char$phsNode$ph$ph*"), "23field.nc", 664, 842)), "23field.nc", 664, 843);
    const char* fun_name="unwrap";
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "23field.nc", 668, 844, "struct tuple2$2char$phsNode$ph"), "23field.nc", 668, 845),(char* )come_increment_ref_count((char* )((void*)0), "23field.nc", 668, 846),(struct sNode*)come_increment_ref_count(node, "23field.nc", 668, 847)), "23field.nc", 668, 848));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 670, 849):(void*)0);
    __right_value0 = (void*)0;
    node_42=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "23field.nc", 670, 850),params,((void*)0),0,((void*)0),info,(_Bool)0), "23field.nc", 670, 851);
    Value=node_compile(node_42,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 673, 852):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 673, 853);
        ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 673, 854):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 676, 855):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 676, 856);
    ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 676, 857):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sUnwrapNode_finalize(struct sUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sUnwrapNode_finalize", 2, 831));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sUnwrapNode_finalize", 3, 832):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "load_field"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left2;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sLoadFieldNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    left2=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(left, "23field.nc", 683, 858),info), "23field.nc", 683, 859);
        __right_value0 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 684, 863, "struct sNode");
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value1=sLoadFieldNode_initialize((struct sLoadFieldNode* )come_increment_ref_count((struct sLoadFieldNode *)come_calloc(1, sizeof(struct sLoadFieldNode )*(1), "23field.nc", 684, 860, "struct sLoadFieldNode* "), "23field.nc", 684, 861),left2,(char* )come_increment_ref_count(name, "23field.nc", 684, 862),info,(_Bool)0))), "23field.nc", 684, 864);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "23field.nc", 684, 876);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 684, 877):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 684, 878));
    ((left2) ? left2 = come_decrement_ref_count(left2, ((struct sNode*)left2)->finalize, ((struct sNode*)left2)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 684, 879):(void*)0);
    come_call_finalizer(sLoadFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 684, 880);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "23field.nc", 684, 881):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "23field.nc", 684, 882):(void*)0);
    return __result_obj__0;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadFieldNode_clone"; neo_current_frame = &fr;
    struct sLoadFieldNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadFieldNode*  result  ;
    char*  __dec_obj119  ;
    struct sNode* __dec_obj120;
    char*  __dec_obj121  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLoadFieldNode* )come_increment_ref_count((struct sLoadFieldNode *)come_calloc(1, sizeof(struct sLoadFieldNode )*(1), "sLoadFieldNode_clone", 5, 865, "struct sLoadFieldNode* "), "sLoadFieldNode_clone", 5, 866);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj119=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLoadFieldNode_clone", 7, 867, "char* "), "sLoadFieldNode_clone", 7, 869);
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "sLoadFieldNode_clone", 7, 868);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj120=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLoadFieldNode_clone", 9, 871);
        (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0, (void*)0, "sLoadFieldNode_clone", 9, 870) :0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj121=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sLoadFieldNode_clone", 10, 872, "char* "), "sLoadFieldNode_clone", 10, 874);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "sLoadFieldNode_clone", 10, 873);
    }
    if(self!=((void*)0)) {
        result->mArrow=self->mArrow;
    }
        __result_obj__0 = result;
    come_call_finalizer(sLoadFieldNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLoadFieldNode_clone}", 12, 875);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj122;
    struct sNode* __dec_obj123;
    struct list$1sNode$ph* __dec_obj124;
    struct sStoreArrayNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStoreArrayNode*)come_increment_ref_count(self, "23field.nc", 691, 883),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 691, 884);
    __right_value0 = (void*)0;
    __dec_obj122=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "23field.nc", 693, 886);
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0, "23field.nc", 693, 885) :0);
    __right_value0 = (void*)0;
    __dec_obj123=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right), "23field.nc", 694, 888);
    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "23field.nc", 694, 887) :0);
    __right_value0 = (void*)0;
    __dec_obj124=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num), "23field.nc", 695, 890);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 695, 889);
    self->mQuote=quote;
        __result_obj__0 = (struct sStoreArrayNode*)come_increment_ref_count(self, "23field.nc", 699, 891);
    come_call_finalizer(sStoreArrayNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 699, 896);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 699, 897):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 699, 898);
    neo_current_frame = fr.prev;
    come_call_finalizer(sStoreArrayNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 699, 899);
    return __result_obj__0;
}

char*  sStoreArrayNode_kind(struct sStoreArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStoreArrayNode","23field.nc",701))), "23field.nc", 701, 900);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 701, 901));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "23field.nc", 701, 902));
    return __result_obj__0;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct sNode* right;
    struct list$1sNode$ph* array_num_nodes;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* array_num;
    struct list$1sNode$ph* _o2_saved_4;
    struct sNode* it;
    _Bool Value_45;
    struct CVALUE*  c_value  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var3
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool Value_46;
    struct CVALUE*  right_value  ;
    struct sType*  right_type  ;
    struct sClass*  klass  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct sNode* middle;
    struct CVALUE*  come_value  ;
    struct sType*  original_load_var_type  ;
    int i;
    struct sType*  __dec_obj125  ;
    struct buffer*  buf  ;
    struct list$1CVALUE$ph* _o2_saved_5;
    struct CVALUE*  it_52  ;
    char*  left_value_code  ;
    struct sType*  left_type2  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    struct sType*  result_type  ;
    struct list$1sNode$ph* __dec_obj130;
    struct sType*  __dec_obj131  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj132  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(create_heap_checker((struct sNode*)come_increment_ref_count(self->mLeft, "23field.nc", 706, 903),info), "23field.nc", 706, 904);
    right=(struct sNode*)come_increment_ref_count(self->mRight, "23field.nc", 707, 905);
    array_num_nodes=(struct list$1sNode$ph*)come_increment_ref_count(self->mArrayNum, "23field.nc", 708, 906);
    info->in_store_array=(_Bool)1;
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 712, 907):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 712, 908):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 712, 909);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->in_store_array=(_Bool)0;
    __right_value0 = (void*)0;
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 716, 910);
    left_type=(struct sType* )come_increment_ref_count(left_value->type, "23field.nc", 718, 911);
    __right_value0 = (void*)0;
    array_num=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "23field.nc", 720, 912, "struct list$1CVALUE$ph*"), "23field.nc", 720, 918)), "23field.nc", 720, 919);
    for(_o2_saved_4=(struct list$1sNode$ph*)come_increment_ref_count(array_num_nodes, "23field.nc", 722, 920),it=list$1sNode$ph_begin(_o2_saved_4)    ;!list$1sNode$ph_end(_o2_saved_4);it=list$1sNode$ph_next(_o2_saved_4)){
        Value_45=node_compile(it,info);
        if(!Value_45) {
                        __result_obj__0 = (_Bool)0;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 724, 921):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 724, 922):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 724, 923);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 724, 924);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 724, 925);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 724, 926);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 724, 927);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        c_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 727, 928);
        list$1CVALUE$ph_push_back(array_num,(struct CVALUE* )come_increment_ref_count(c_value, "23field.nc", 729, 929));
        come_call_finalizer(CVALUE_finalize, c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 732, 930);
    }
    const char* fun_name="operator_store_element";
    __right_value0 = (void*)0;
    multiple_assign_var3=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,left_type,info,(_Bool)0)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var3->v1, "23field.nc", 733, 931);
    operator_fun=multiple_assign_var3->v2;
    generics_fun=multiple_assign_var3->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 733, 932);
    Value_46=node_compile(right,info);
    if(!Value_46) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 736, 933):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 736, 934):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 736, 935);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 736, 936);
        come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 736, 937);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 736, 938);
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 736, 939);
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 736, 940));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 739, 941);
    right_type=right_value->type;
    klass=left_value->type->mClass;
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "23field.nc", 745, 942);
    if(self->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        __right_value0 = (void*)0;
        middle=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes,0), "23field.nc", 752, 961);
        __right_value0 = (void*)0;
        calling_fun=operator_overload_fun2(type,fun_name,(struct sNode*)come_increment_ref_count(left, "23field.nc", 753, 962),(struct sNode*)come_increment_ref_count(middle, "23field.nc", 753, 963),(struct sNode*)come_increment_ref_count(right, "23field.nc", 753, 964),left_value,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(array_num,0))),right_value,info);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 753, 983);
        ((middle) ? middle = come_decrement_ref_count(middle, ((struct sNode*)middle)->finalize, ((struct sNode*)middle)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 756, 984):(void*)0);
    }
    if(!calling_fun) {
        if(gComeSafe) {
            err_msg(info,"StoreArray is not safe code");
                        __result_obj__0 = (_Bool)0;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 759, 985):(void*)0);
            ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 759, 986):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 759, 987);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 759, 988);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 759, 989);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 759, 990);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 759, 991);
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 759, 992));
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 759, 993);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 759, 994);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 761, 995, "struct CVALUE* "), "23field.nc", 761, 996)), "23field.nc", 761, 997);
        __right_value0 = (void*)0;
        original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "23field.nc", 762, 998);
        if(list$1sNode$ph_length(left_type->mArrayNum)>0) {
            for(i=0            ;i<list$1CVALUE$ph_length(array_num);i++){
                list$1sNode$ph_delete(left_type->mArrayNum,-1,-1);
            }
        }
        else if(left_type->mPointerNum>0) {
            left_type->mPointerNum-=list$1CVALUE$ph_length(array_num);
            if(left_type->mPointerNum<0) {
                left_type->mPointerNum=0;
            }
        }
        if(left_type->mArrayPointerNum>0) {
            left_type->mArrayPointerNum-=list$1CVALUE$ph_length(array_num);
            if(left_type->mArrayPointerNum<0) {
                left_type->mArrayPointerNum=0;
            }
            if(left_type->mArrayPointerNum==0) {
                left_type->mArrayPointerType=(_Bool)0;
            }
        }
        if(list$1CVALUE$ph_length(array_num)>0) {
            __dec_obj125=left_type->mOriginalLoadVarType,
            left_type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(original_load_var_type, "23field.nc", 788, 1000);
            come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 788, 999);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "23field.nc", 791, 1001, "struct buffer* "), "23field.nc", 791, 1002)), "23field.nc", 791, 1003);
        buffer_append_str(buf,left_value->c_value);
        for(_o2_saved_5=(struct list$1CVALUE$ph*)come_increment_ref_count(array_num, "23field.nc", 795, 1004),it_52=list$1CVALUE$ph_begin(_o2_saved_5)        ;!list$1CVALUE$ph_end(_o2_saved_5);it_52=list$1CVALUE$ph_next(_o2_saved_5)){
            buffer_append_format(buf,"[%s]",it_52->c_value);
        }
        __right_value0 = (void*)0;
        left_value_code=(char* )come_increment_ref_count(buffer_to_string(buf), "23field.nc", 799, 1005);
        __right_value0 = (void*)0;
        left_type2=(struct sType* )come_increment_ref_count(sType_clone(left_type), "23field.nc", 801, 1006);
        left_type2->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        check_assign_type(((char*)(__right_value0=xsprintf("array is assinged to(2)"))),left_type2,right_type,right_value,info);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 803, 1007));
        if(left_type->mHeap&&right_type->mHeap&&left_type->mArrayPointerNum>0&&right_type->mPointerNum>0) {
            decrement_ref_count_object(left_type,left_value_code,info,(_Bool)0);
            std_move(left_type,right_type,right_value,info);
            __right_value0 = (void*)0;
            __dec_obj126=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,right_value->c_value), "23field.nc", 808, 1009);
            __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 808, 1008);
        }
        else {
            if(left_value->type->mPointerNum>=1) {
                __right_value0 = (void*)0;
                __dec_obj127=come_value->c_value,
                come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,right_value->c_value), "23field.nc", 812, 1011);
                __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 812, 1010);
            }
            else if(left_value->type->mPointerNum==0) {
                __right_value0 = (void*)0;
                __dec_obj128=come_value->c_value,
                come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,right_value->c_value), "23field.nc", 815, 1013);
                __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 815, 1012);
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj129=come_value->c_value,
                come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s=%s",left_value_code,right_value->c_value), "23field.nc", 818, 1015);
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 818, 1014);
            }
        }
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "23field.nc", 823, 1016);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj130=result_type->mArrayNum,
        result_type->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "23field.nc", 824, 1017, "struct list$1sNode$ph*"), "23field.nc", 824, 1018)), "23field.nc", 824, 1020);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 824, 1019);
        __dec_obj131=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(result_type, "23field.nc", 825, 1022);
        come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 825, 1021);
        come_value->var=((void*)0);
        __right_value0 = (void*)0;
        type_=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "23field.nc", 828, 1023);
        __right_value0 = (void*)0;
        __dec_obj132=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "23field.nc", 829, 1025);
        come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 829, 1024);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 831, 1026));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1027);
        come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1028);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1029);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1030);
        (left_value_code = come_decrement_ref_count(left_value_code, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 836, 1031));
        come_call_finalizer(sType_finalize, left_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1032);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1033);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1034);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 836, 1035):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 836, 1036):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1037);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1038);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1039);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1040);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1041);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 836, 1042));
    come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1043);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 836, 1044);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStoreArrayNode_finalize", 2, 892));
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sStoreArrayNode_finalize", 3, 893):(void*)0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0,(void*)0, "sStoreArrayNode_finalize", 4, 894):(void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreArrayNode_finalize}", 5, 895);
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_initialize"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 913);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 916);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 917);
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 915);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 914);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_43;
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
    memset(&result_43,0,sizeof(struct sNode*));
        __result_obj__0 = result_43;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_44;
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
    memset(&result_44,0,sizeof(struct sNode*));
        __result_obj__0 = result_44;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_47;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 943);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 944):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 945):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2153, 946):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 947);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2161, 948):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_47,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_47, "/usr/local/include/neo-c.h", 2169, 949);
    ((default_value_47) ? default_value_47 = come_decrement_ref_count(default_value_47, ((struct sNode*)default_value_47)->finalize, ((struct sNode*)default_value_47)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 950):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 951):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_48;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 952);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 953):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 954):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2153, 955):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 956);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2161, 957):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_48,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_48, "/usr/local/include/neo-c.h", 2169, 958);
    ((default_value_48) ? default_value_48 = come_decrement_ref_count(default_value_48, ((struct sNode*)default_value_48)->finalize, ((struct sNode*)default_value_48)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 959):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 960):(void*)0);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_49  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 965);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 966);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 967);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 968);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 969);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 970);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_49,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_49, "/usr/local/include/neo-c.h", 2169, 971);
    come_call_finalizer(CVALUE_finalize, default_value_49, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 972);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 973);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_50  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 974);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 975);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 976);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 977);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 978);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 979);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_50,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_50, "/usr/local/include/neo-c.h", 2169, 980);
    come_call_finalizer(CVALUE_finalize, default_value_50, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 981);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 982);
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
    return self->len;
                neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_51  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_51,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_51;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
            neo_current_frame = fr.prev;
}

static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_next"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_53  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct CVALUE* ));
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
    memset(&result_53,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_53;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj133;
    struct sNode* __dec_obj134;
    struct sLoadArrayNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadArrayNode*)come_increment_ref_count(self, "23field.nc", 844, 1045),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 844, 1046);
    __right_value0 = (void*)0;
    __dec_obj133=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num), "23field.nc", 846, 1048);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 846, 1047);
    self->mBreakGuard=break_guard;
    __right_value0 = (void*)0;
    __dec_obj134=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "23field.nc", 849, 1050);
    (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0, (void*)0, "23field.nc", 849, 1049) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sLoadArrayNode*)come_increment_ref_count(self, "23field.nc", 853, 1051);
    come_call_finalizer(sLoadArrayNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 853, 1055);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 853, 1056);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadArrayNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 853, 1057);
    return __result_obj__0;
}

char*  sLoadArrayNode_kind(struct sLoadArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadArrayNode","23field.nc",855))), "23field.nc", 855, 1058);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 855, 1059));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "23field.nc", 855, 1060));
    return __result_obj__0;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct list$1sNode$ph* array_num_nodes;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* array_num;
    struct list$1sNode$ph* _o2_saved_6;
    struct sNode* it;
    _Bool Value_54;
    struct CVALUE*  c_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    struct list$1CVALUE$ph* _o2_saved_7;
    struct CVALUE*  it_55  ;
    char*  left_value_code  ;
    char*  __dec_obj135  ;
    struct sType*  result_type  ;
    struct sType*  __dec_obj136  ;
    struct sType*  __dec_obj137  ;
    struct sType*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    _Bool consumed_array_pointer_type;
    struct sType*  __dec_obj140  ;
    struct sType*  __dec_obj141  ;
    struct sType*  __dec_obj142  ;
    struct sType*  __dec_obj143  ;
    struct list$1sNode$ph* remained_array_num;
    int i;
    struct list$1sNode$ph* __dec_obj144;
    struct sType*  __dec_obj145  ;
    struct sType*  __dec_obj146  ;
    struct sType*  type2_  ;
    struct sType*  type3_  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj147  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&result_type, 0, sizeof(result_type));
    left=(struct sNode*)come_increment_ref_count(create_heap_checker((struct sNode*)come_increment_ref_count(self->mLeft, "23field.nc", 860, 1061),info), "23field.nc", 860, 1062);
    array_num_nodes=(struct list$1sNode$ph*)come_increment_ref_count(self->mArrayNum, "23field.nc", 861, 1063);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 864, 1064):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 864, 1065);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 867, 1066);
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "23field.nc", 869, 1067);
    __right_value0 = (void*)0;
    array_num=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "23field.nc", 871, 1068, "struct list$1CVALUE$ph*"), "23field.nc", 871, 1069)), "23field.nc", 871, 1070);
    for(_o2_saved_6=(struct list$1sNode$ph*)come_increment_ref_count(array_num_nodes, "23field.nc", 873, 1071),it=list$1sNode$ph_begin(_o2_saved_6)    ;!list$1sNode$ph_end(_o2_saved_6);it=list$1sNode$ph_next(_o2_saved_6)){
        Value_54=node_compile(it,info);
        if(!Value_54) {
                        __result_obj__0 = (_Bool)0;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 875, 1072):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 875, 1073);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 875, 1074);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 875, 1075);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 875, 1076);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 875, 1077);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        c_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 878, 1078);
        list$1CVALUE$ph_push_back(array_num,(struct CVALUE* )come_increment_ref_count(c_value, "23field.nc", 880, 1079));
        come_call_finalizer(CVALUE_finalize, c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 883, 1080);
    }
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "23field.nc", 883, 1081);
    const char* fun_name="operator_load_element";
    if(self->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        calling_fun=operator_overload_fun(type,fun_name,(struct sNode*)come_increment_ref_count(left, "23field.nc", 891, 1082),(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes,0), "23field.nc", 891, 1083),left_value,((struct CVALUE* )(__right_value1=list$1CVALUE$ph_operator_load_element(array_num,0))),self->mBreakGuard,info);
        come_call_finalizer(CVALUE_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 891, 1084);
    }
    if(!calling_fun) {
        if(gComeSafe) {
            err_msg(info,"LoadArray is not safe code");
                        __result_obj__0 = (_Bool)0;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 897, 1085):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 897, 1086);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 897, 1087);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 897, 1088);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 897, 1089);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 897, 1090);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 897, 1091);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 899, 1092, "struct CVALUE* "), "23field.nc", 899, 1093)), "23field.nc", 899, 1094);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "23field.nc", 901, 1095, "struct buffer* "), "23field.nc", 901, 1096)), "23field.nc", 901, 1097);
        buffer_append_str(buf,left_value->c_value);
        for(_o2_saved_7=(struct list$1CVALUE$ph*)come_increment_ref_count(array_num, "23field.nc", 905, 1098),it_55=list$1CVALUE$ph_begin(_o2_saved_7)        ;!list$1CVALUE$ph_end(_o2_saved_7);it_55=list$1CVALUE$ph_next(_o2_saved_7)){
            buffer_append_format(buf,"[%s]",it_55->c_value);
        }
        __right_value0 = (void*)0;
        left_value_code=(char* )come_increment_ref_count(buffer_to_string(buf), "23field.nc", 909, 1099);
        __right_value0 = (void*)0;
        __dec_obj135=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",left_value_code), "23field.nc", 911, 1101);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 911, 1100);
        if(left_type->mOriginalLoadVarType) {
            __right_value0 = (void*)0;
            __dec_obj136=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type->mOriginalLoadVarType), "23field.nc", 916, 1103);
            come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 916, 1102);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj137=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "23field.nc", 919, 1105);
            come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 919, 1104);
        }
        if(result_type->mTypedefOriginalType&&list$1sNode$ph_length(result_type->mArrayNum)==0&&result_type->mPointerNum==0) {
            __right_value0 = (void*)0;
            __dec_obj138=result_type,
            result_type=(struct sType* )come_increment_ref_count(expand_typedef_for_load_element(result_type), "23field.nc", 925, 1107);
            come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 925, 1106);
        }
        __dec_obj139=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(result_type, "23field.nc", 928, 1109);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 928, 1108);
        consumed_array_pointer_type=(_Bool)0;
        if(come_value->type->mArrayPointerType) {
            come_value->type->mPointerNum++;
            consumed_array_pointer_type=(_Bool)1;
        }
        if(list$1sNode$ph_length(come_value->type->mArrayNum)>0) {
            if(info->in_store_array) {
                __right_value0 = (void*)0;
                __dec_obj140=come_value->type->mOriginalLoadVarType,
                come_value->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type), "23field.nc", 938, 1111);
                come_call_finalizer(sType_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 938, 1110);
                list$1sNode$ph_delete(come_value->type->mArrayNum,0,list$1CVALUE$ph_length(array_num));
            }
            else if(info->in_typeof) {
                __right_value0 = (void*)0;
                __dec_obj141=come_value->type->mOriginalLoadVarType,
                come_value->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type), "23field.nc", 942, 1113);
                come_call_finalizer(sType_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 942, 1112);
            }
            else if(info->in_refference) {
                __right_value0 = (void*)0;
                __dec_obj142=come_value->type->mOriginalLoadVarType,
                come_value->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type), "23field.nc", 945, 1115);
                come_call_finalizer(sType_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 945, 1114);
                list$1sNode$ph_delete(come_value->type->mArrayNum,0,list$1CVALUE$ph_length(array_num));
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj143=come_value->type->mOriginalLoadVarType,
                come_value->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type), "23field.nc", 951, 1117);
                come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 951, 1116);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                remained_array_num=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "23field.nc", 954, 1118, "struct list$1sNode$ph*"), "23field.nc", 954, 1119)), "23field.nc", 954, 1120);
                for(i=1                ;i<list$1sNode$ph_length(come_value->type->mArrayNum);i++){
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sNode$ph_add(remained_array_num,(struct sNode*)come_increment_ref_count(sNode_clone(((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(come_value->type->mArrayNum,i)))), "23field.nc", 956, 1121));
                    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "23field.nc", 956, 1122):(void*)0);
                }
                __dec_obj144=come_value->type->mArrayNum,
                come_value->type->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(remained_array_num, "23field.nc", 958, 1124);
                come_call_finalizer(list$1sNode$ph_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 958, 1123);
                if(list$1sNode$ph_length(come_value->type->mArrayNum)>0) {
                    come_value->type->mArrayPointerNum++;
                }
                come_call_finalizer(list$1sNode$ph$p_finalize, remained_array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 963, 1125);
            }
        }
        else if(come_value->type->mPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj145=come_value->type->mOriginalLoadVarType,
            come_value->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type), "23field.nc", 965, 1127);
            come_call_finalizer(sType_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 965, 1126);
            come_value->type->mPointerNum--;
            if(consumed_array_pointer_type) {
                come_value->type->mArrayPointerType=(_Bool)0;
            }
        }
        else if(come_value->type->mArrayPointerNum>0) {
            __right_value0 = (void*)0;
            __dec_obj146=come_value->type->mOriginalLoadVarType,
            come_value->type->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(result_type), "23field.nc", 973, 1129);
            come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 973, 1128);
            come_value->type->mArrayPointerNum--;
            if(come_value->type->mArrayPointerNum==0) {
                come_value->type->mArrayPointerType=(_Bool)0;
            }
        }
        if(list$1CVALUE$ph_length(array_num)>0&&come_value->type->mTypedefOriginalType&&list$1sNode$ph_length(come_value->type->mTypedefOriginalType->mArrayNum)>0&&come_value->type->mPointerNum==0) {
            list$1sNode$ph_reset(come_value->type->mArrayNum);
            come_value->type->mArrayPointerNum=0;
            come_value->type->mArrayPointerType=(_Bool)0;
        }
        come_value->var=left_value->var;
        come_value->mLoadField=(_Bool)1;
        __right_value0 = (void*)0;
        type2_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "23field.nc", 994, 1130);
        __right_value0 = (void*)0;
        type3_=(struct sType* )come_increment_ref_count(solve_generics(type2_,info->generics_type,info), "23field.nc", 995, 1131);
        __right_value0 = (void*)0;
        type_=(struct sType* )come_increment_ref_count(solve_method_generics(type3_,info), "23field.nc", 996, 1132);
        __dec_obj147=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(type_, "23field.nc", 998, 1134);
        come_call_finalizer(sType_finalize, __dec_obj147,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 998, 1133);
        come_value->type->mHeap=(_Bool)0;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 1001, 1135));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1136);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1137);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1138);
        (left_value_code = come_decrement_ref_count(left_value_code, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 1006, 1139));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1140);
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1141);
        come_call_finalizer(sType_finalize, type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1142);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1143);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1006, 1144):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1145);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1146);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1147);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1148);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1149);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1006, 1150);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLoadArrayNode_finalize", 2, 1052));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sLoadArrayNode_finalize}", 3, 1053);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLoadArrayNode_finalize", 4, 1054):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj148;
    struct sNode* __dec_obj149;
    struct sLoadRangeArrayNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(self, "23field.nc", 1014, 1151),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1014, 1152);
    __right_value0 = (void*)0;
    __dec_obj148=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num), "23field.nc", 1016, 1154);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 1016, 1153);
    __right_value0 = (void*)0;
    __dec_obj149=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "23field.nc", 1018, 1156);
    (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1018, 1155) :0);
    self->mQuote=quote;
        __result_obj__0 = (struct sLoadRangeArrayNode*)come_increment_ref_count(self, "23field.nc", 1022, 1157);
    come_call_finalizer(sLoadRangeArrayNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 1022, 1161);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1022, 1162);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLoadRangeArrayNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "23field.nc}", 1022, 1163);
    return __result_obj__0;
}

char*  sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLoadRangeArrayNode","23field.nc",1024))), "23field.nc", 1024, 1164);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "23field.nc", 1024, 1165));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "23field.nc", 1024, 1166));
    return __result_obj__0;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left;
    struct list$1sNode$ph* array_num_nodes;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  left_value  ;
    struct sType*  left_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* array_num;
    struct list$1sNode$ph* _o2_saved_8;
    struct sNode* it;
    _Bool Value_56;
    struct CVALUE*  c_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    struct sNode* middle;
    struct sNode* right;
    struct CVALUE*  come_value  ;
    struct sType*  result_type  ;
    struct buffer*  buf  ;
    struct list$1CVALUE$ph* _o2_saved_9;
    struct CVALUE*  it_57  ;
    char*  left_value_code  ;
    char*  __dec_obj150  ;
    struct sType*  original_load_var_type  ;
    struct sType*  __dec_obj151  ;
    int n;
    struct sType*  __dec_obj152  ;
    struct sType*  __dec_obj153  ;
    int i;
    struct sType*  __dec_obj154  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj155  ;
    memset(&calling_fun, 0, sizeof(calling_fun));
    left=(struct sNode*)come_increment_ref_count(create_heap_checker((struct sNode*)come_increment_ref_count(self->mLeft, "23field.nc", 1029, 1167),info), "23field.nc", 1029, 1168);
    array_num_nodes=(struct list$1sNode$ph*)come_increment_ref_count(self->mArrayNum, "23field.nc", 1030, 1169);
    Value=node_compile(left,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1033, 1170):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1033, 1171);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 1036, 1172);
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "23field.nc", 1038, 1173);
    __right_value0 = (void*)0;
    array_num=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "23field.nc", 1040, 1174, "struct list$1CVALUE$ph*"), "23field.nc", 1040, 1175)), "23field.nc", 1040, 1176);
    for(_o2_saved_8=(struct list$1sNode$ph*)come_increment_ref_count(array_num_nodes, "23field.nc", 1042, 1177),it=list$1sNode$ph_begin(_o2_saved_8)    ;!list$1sNode$ph_end(_o2_saved_8);it=list$1sNode$ph_next(_o2_saved_8)){
        Value_56=node_compile(it,info);
        if(!Value_56) {
                        __result_obj__0 = (_Bool)0;
            ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1044, 1178):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1044, 1179);
            come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1044, 1180);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1044, 1181);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1044, 1182);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1044, 1183);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        c_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "23field.nc", 1047, 1184);
        list$1CVALUE$ph_push_back(array_num,(struct CVALUE* )come_increment_ref_count(c_value, "23field.nc", 1049, 1185));
        come_call_finalizer(CVALUE_finalize, c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1052, 1186);
    }
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "23field.nc", 1052, 1187);
    const char* fun_name="operator_load_range_element";
    if(self->mQuote) {
        calling_fun=(_Bool)0;
    }
    else {
        __right_value0 = (void*)0;
        middle=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes,0), "23field.nc", 1060, 1188);
        __right_value0 = (void*)0;
        right=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes,1), "23field.nc", 1061, 1189);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        calling_fun=operator_overload_fun2(type,fun_name,(struct sNode*)come_increment_ref_count(left, "23field.nc", 1062, 1190),(struct sNode*)come_increment_ref_count(middle, "23field.nc", 1062, 1191),(struct sNode*)come_increment_ref_count(right, "23field.nc", 1062, 1192),left_value,((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(array_num,0))),((struct CVALUE* )(__right_value1=list$1CVALUE$ph_operator_load_element(array_num,1))),info);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1062, 1193);
        come_call_finalizer(CVALUE_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1062, 1194);
        ((middle) ? middle = come_decrement_ref_count(middle, ((struct sNode*)middle)->finalize, ((struct sNode*)middle)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1065, 1195):(void*)0);
        ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1065, 1196):(void*)0);
    }
    if(!calling_fun) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "23field.nc", 1066, 1197, "struct CVALUE* "), "23field.nc", 1066, 1198)), "23field.nc", 1066, 1199);
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "23field.nc", 1068, 1200);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "23field.nc", 1069, 1201, "struct buffer* "), "23field.nc", 1069, 1202)), "23field.nc", 1069, 1203);
        buffer_append_str(buf,left_value->c_value);
        for(_o2_saved_9=(struct list$1CVALUE$ph*)come_increment_ref_count(array_num, "23field.nc", 1073, 1204),it_57=list$1CVALUE$ph_begin(_o2_saved_9)        ;!list$1CVALUE$ph_end(_o2_saved_9);it_57=list$1CVALUE$ph_next(_o2_saved_9)){
            buffer_append_format(buf,"[%s]",it_57->c_value);
        }
        __right_value0 = (void*)0;
        left_value_code=(char* )come_increment_ref_count(buffer_to_string(buf), "23field.nc", 1077, 1205);
        __right_value0 = (void*)0;
        __dec_obj150=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",left_value_code), "23field.nc", 1079, 1207);
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "23field.nc", 1079, 1206);
        if(result_type->mOriginalLoadVarType) {
            __right_value0 = (void*)0;
            original_load_var_type=(struct sType* )come_increment_ref_count(sType_clone(result_type->mOriginalLoadVarType), "23field.nc", 1082, 1208);
            __dec_obj151=result_type,
            result_type=(struct sType* )come_increment_ref_count(original_load_var_type, "23field.nc", 1083, 1210);
            come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 1083, 1209);
            come_call_finalizer(sType_finalize, original_load_var_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1086, 1211);
        }
        if(list$1sNode$ph_length(result_type->mArrayNum)>0) {
            n=list$1sNode$ph_length(result_type->mArrayNum)-list$1CVALUE$ph_length(array_num);
            if(n==0) {
                __right_value0 = (void*)0;
                __dec_obj152=result_type,
                result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "23field.nc", 1090, 1213);
                come_call_finalizer(sType_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 1090, 1212);
                if(left_type->mOriginalLoadVarType) {
                    __right_value0 = (void*)0;
                    __dec_obj153=result_type,
                    result_type=(struct sType* )come_increment_ref_count(sType_clone(left_type->mOriginalLoadVarType), "23field.nc", 1092, 1215);
                    come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 1092, 1214);
                }
                list$1sNode$ph_reset(result_type->mArrayNum);
            }
            else if(n>0) {
                for(i=0                ;i<n;i++){
                    list$1sNode$ph_delete(result_type->mArrayNum,-1,-1);
                }
            }
            else if(n<0) {
                list$1sNode$ph_reset(result_type->mArrayNum);
                result_type->mPointerNum+=n;
                if(result_type->mPointerNum<0) {
                    result_type->mPointerNum=0;
                }
            }
        }
        else {
            if(result_type->mPointerNum>0) {
                result_type->mPointerNum-=list$1CVALUE$ph_length(array_num);
                if(result_type->mPointerNum<0) {
                    result_type->mPointerNum=0;
                }
            }
        }
        __right_value0 = (void*)0;
        __dec_obj154=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "23field.nc", 1121, 1217);
        come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 1121, 1216);
        come_value->var=((void*)0);
        __right_value0 = (void*)0;
        type_=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "23field.nc", 1124, 1218);
        __right_value0 = (void*)0;
        __dec_obj155=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(solve_method_generics(type_,info), "23field.nc", 1125, 1220);
        come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc", 1125, 1219);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "23field.nc", 1127, 1221));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1222);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1223);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1224);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1225);
        (left_value_code = come_decrement_ref_count(left_value_code, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 1132, 1226));
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1227);
    }
        __result_obj__0 = (_Bool)1;
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1132, 1228):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1229);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1230);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1231);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1232);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1233);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1132, 1234);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLoadRangeArrayNode_finalize", 2, 1158));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sLoadRangeArrayNode_finalize}", 3, 1159);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sLoadRangeArrayNode_finalize", 4, 1160):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, _Bool iter_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_method_call_v18"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    err_msg(info,"parse_method_call is failed");
    exit(2);
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "23field.nc", 1142, 1235);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1142, 1236):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 1142, 1237));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "23field.nc", 1142, 1238):(void*)0);
    return __result_obj__0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "store_field"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* left2;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sStoreFieldNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    left2=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(left, "23field.nc", 1147, 1239),info), "23field.nc", 1147, 1240);
        __right_value0 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 1148, 1245, "struct sNode");
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value1=sStoreFieldNode_initialize((struct sStoreFieldNode* )come_increment_ref_count((struct sStoreFieldNode *)come_calloc(1, sizeof(struct sStoreFieldNode )*(1), "23field.nc", 1148, 1241, "struct sStoreFieldNode* "), "23field.nc", 1148, 1242),left2,(struct sNode*)come_increment_ref_count(right, "23field.nc", 1148, 1243),(char* )come_increment_ref_count(name, "23field.nc", 1148, 1244),info,(_Bool)0))), "23field.nc", 1148, 1246);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "23field.nc", 1148, 1260);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1148, 1261):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1148, 1262):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 1148, 1263));
    ((left2) ? left2 = come_decrement_ref_count(left2, ((struct sNode*)left2)->finalize, ((struct sNode*)left2)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1148, 1264):(void*)0);
    come_call_finalizer(sStoreFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1148, 1265);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "23field.nc", 1148, 1266):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "23field.nc", 1148, 1267):(void*)0);
    return __result_obj__0;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreFieldNode_clone"; neo_current_frame = &fr;
    struct sStoreFieldNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStoreFieldNode*  result  ;
    char*  __dec_obj156  ;
    struct sNode* __dec_obj157;
    struct sNode* __dec_obj158;
    char*  __dec_obj159  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStoreFieldNode* )come_increment_ref_count((struct sStoreFieldNode *)come_calloc(1, sizeof(struct sStoreFieldNode )*(1), "sStoreFieldNode_clone", 5, 1247, "struct sStoreFieldNode* "), "sStoreFieldNode_clone", 5, 1248);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj156=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStoreFieldNode_clone", 7, 1249, "char* "), "sStoreFieldNode_clone", 7, 1251);
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0, "sStoreFieldNode_clone", 7, 1250);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj157=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sStoreFieldNode_clone", 9, 1253);
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0, "sStoreFieldNode_clone", 9, 1252) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj158=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sStoreFieldNode_clone", 10, 1255);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "sStoreFieldNode_clone", 10, 1254) :0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj159=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sStoreFieldNode_clone", 11, 1256, "char* "), "sStoreFieldNode_clone", 11, 1258);
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0, "sStoreFieldNode_clone", 11, 1257);
    }
    if(self!=((void*)0)) {
        result->mArrow=self->mArrow;
    }
        __result_obj__0 = result;
    come_call_finalizer(sStoreFieldNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sStoreFieldNode_clone}", 13, 1259);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v99"; neo_current_frame = &fr;
    _Bool range_array;
    char* p;
    int sline;
    _Bool no_comma;
    _Bool no_output_come_code;
    void* __right_value0 = (void*)0;
    struct sNode* exp;
    _Bool quote;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* array_num;
    struct sNode* node2;
    struct sNode* node3;
    struct sNode* node2_60;
    struct sNode* __dec_obj163;
    struct sNode* __dec_obj164;
    struct sNode* _inf_value4;
    struct sLoadRangeArrayNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj168;
    struct sNode* _inf_value5;
    struct sUnwrapNode* _inf_obj_value5;
    struct sNode* __dec_obj171;
    struct sNode* obj;
    struct sNode* node_before;
    char*  field_name2  ;
    struct sNode* __dec_obj172;
    struct sNode* __dec_obj173;
    _Bool quote_61;
    _Bool range;
    struct list$1sNode$ph* array_num_62;
    _Bool range_array2;
    char* p_63;
    int sline_64;
    _Bool no_comma_65;
    _Bool no_output_come_code_66;
    struct sNode* exp_67;
    struct sNode* node2_68;
    struct sNode* right_node;
    struct sNode* node2_69;
    struct sNode* __dec_obj174;
    struct sNode* __dec_obj175;
    struct sNode* _inf_value6;
    struct sStoreArrayNode* _inf_obj_value6;
    struct sNode* __dec_obj180;
    struct sNode* node2_70;
    struct sNode* __dec_obj181;
    struct sNode* __dec_obj182;
    struct sNode* _inf_value7;
    struct sLoadArrayNode* _inf_obj_value7;
    struct sNode* __dec_obj186;
    _Bool quote_71;
    _Bool arrow_;
    char*  field_name  ;
    _Bool parse_method_generics_type;
    char* p_72;
    int sline_73;
    char*  word  ;
    struct sNode* right_node_74;
    struct sNode* node2_75;
    struct sNode* __dec_obj187;
    struct sNode* __dec_obj188;
    struct sNode* _inf_value8;
    struct sStoreFieldNode* _inf_obj_value8;
    struct sNode* __dec_obj189;
    struct sNode* __dec_obj190;
    struct sNode* __dec_obj191;
    struct sNode* __dec_obj192;
    struct sNode* __dec_obj193;
    struct sNode* __dec_obj194;
    struct sNode* __dec_obj195;
    struct sNode* node2_76;
    struct sNode* __dec_obj196;
    struct sNode* __dec_obj197;
    struct sNode* __dec_obj198;
    struct sNode* node2_77;
    struct sNode* __dec_obj199;
    struct sNode* __dec_obj200;
    struct sNode* _inf_value9;
    struct sLoadFieldNode* _inf_obj_value9;
    struct sNode* __dec_obj201;
    struct sNode* node2_78;
    struct sNode* __dec_obj202;
    struct sNode* __result_obj__0;
    memset(&node2_60, 0, sizeof(node2_60));
    memset(&node2_69, 0, sizeof(node2_69));
    memset(&node2_70, 0, sizeof(node2_70));
    memset(&node2_75, 0, sizeof(node2_75));
    memset(&node2_76, 0, sizeof(node2_76));
    memset(&node2_77, 0, sizeof(node2_77));
    while((_Bool)1) {
        range_array=(_Bool)0;
        {
            p=info->p;
            sline=info->sline;
            if(*info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma=info->no_comma;
                no_output_come_code=info->no_output_come_code;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "23field.nc", 1168, 1268);
                info->no_comma=no_comma;
                info->no_output_come_code=no_output_come_code;
                if(*info->p==46&&*(info->p+1)==46) {
                    range_array=(_Bool)1;
                }
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1177, 1269):(void*)0);
            }
            info->p=p;
            info->sline=sline;
        }
        if(!node->terminated(node->_protocol_obj)&&range_array&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote=*info->p==92;
            if(quote) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            array_num=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "23field.nc", 1189, 1270, "struct list$1sNode$ph*"), "23field.nc", 1189, 1271)), "23field.nc", 1189, 1272);
            skip_pointer_attribute(info);
            __right_value0 = (void*)0;
            node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "23field.nc", 1193, 1273);
            list$1sNode$ph_push_back(array_num,(struct sNode*)come_increment_ref_count(node2, "23field.nc", 1195, 1288));
            if(*info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                __right_value0 = (void*)0;
                node3=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "23field.nc", 1203, 1289);
                list$1sNode$ph_push_back(array_num,(struct sNode*)come_increment_ref_count(node3, "23field.nc", 1205, 1290));
                expected_next_character(93,info);
                ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1210, 1291):(void*)0);
            }
            ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1210, 1292):(void*)0);
            if(quote) {
                __dec_obj163=node2_60,
                node2_60=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1212, 1294);
                (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1212, 1293) :0);
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj164=node2_60,
                node2_60=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node, "23field.nc", 1215, 1295),info), "23field.nc", 1215, 1297);
                (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1215, 1296) :0);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 1217, 1301, "struct sNode");
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value1=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode* )come_increment_ref_count((struct sLoadRangeArrayNode *)come_calloc(1, sizeof(struct sLoadRangeArrayNode )*(1), "23field.nc", 1217, 1298, "struct sLoadRangeArrayNode* "), "23field.nc", 1217, 1299),node2_60,(struct list$1sNode$ph*)come_increment_ref_count(array_num, "23field.nc", 1217, 1300),quote,info))), "23field.nc", 1217, 1302);
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            _inf_value4->left_value=(void*)sNodeBase_left_value;
            __dec_obj168=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value4, "23field.nc", 1217, 1314);
            (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1217, 1313) :0);
            come_call_finalizer(sLoadRangeArrayNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1217, 1315);
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1441, 1316);
            ((node2_60) ? node2_60 = come_decrement_ref_count(node2_60, ((struct sNode*)node2_60)->finalize, ((struct sNode*)node2_60)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1441, 1317):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&*info->p==33&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 1223, 1321, "struct sNode");
            _inf_obj_value5=(struct sUnwrapNode*)come_increment_ref_count(((struct sUnwrapNode*)(__right_value1=sUnwrapNode_initialize((struct sUnwrapNode* )come_increment_ref_count((struct sUnwrapNode *)come_calloc(1, sizeof(struct sUnwrapNode )*(1), "23field.nc", 1223, 1318, "struct sUnwrapNode* "), "23field.nc", 1223, 1319),(struct sNode*)come_increment_ref_count(node, "23field.nc", 1223, 1320),info,(_Bool)1,(_Bool)0))), "23field.nc", 1223, 1322);
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sUnwrapNode_finalize;
            _inf_value5->clone=(void*)sUnwrapNode_clone;
            _inf_value5->compile=(void*)sUnwrapNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sUnwrapNode_kind;
            _inf_value5->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj171=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value5, "23field.nc", 1223, 1332);
            (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1223, 1331) :0);
            come_call_finalizer(sUnwrapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1223, 1333);
        }
        else if(!node->terminated(node->_protocol_obj)&&(*info->p==46&&*(info->p+1)==96)) {
            obj=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1227, 1334);
            node_before=((void*)0);
            while(*info->p==46&&*(info->p+1)==96) {
                info->p+=2;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                field_name2=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "23field.nc", 1233, 1335);
                __right_value0 = (void*)0;
                __dec_obj172=node,
                node=(struct sNode*)come_increment_ref_count(parse_iter_call_v20((struct sNode*)come_increment_ref_count(obj, "23field.nc", 1235, 1337),(char* )come_increment_ref_count(field_name2, "23field.nc", 1235, 1338),info,(_Bool)0,(struct sNode*)come_increment_ref_count(node_before, "23field.nc", 1235, 1336)), "23field.nc", 1235, 1340);
                (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1235, 1339) :0);
                __dec_obj173=node_before,
                node_before=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1236, 1342);
                (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1236, 1341) :0);
                (field_name2 = come_decrement_ref_count(field_name2, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 1238, 1343));
            }
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1441, 1344):(void*)0);
            ((node_before) ? node_before = come_decrement_ref_count(node_before, ((struct sNode*)node_before)->finalize, ((struct sNode*)node_before)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1441, 1345):(void*)0);
        }
        else if(!node->terminated(node->_protocol_obj)&&!range_array&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_61=*info->p==92;
            if(quote_61) {
                info->p++;
            }
            range=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            array_num_62=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "23field.nc", 1246, 1346, "struct list$1sNode$ph*"), "23field.nc", 1246, 1347)), "23field.nc", 1246, 1348);
            while(1) {
                range_array2=(_Bool)0;
                {
                    p_63=info->p;
                    sline_64=info->sline;
                    if(*info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_65=info->no_comma;
                        no_output_come_code_66=info->no_output_come_code;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        __right_value0 = (void*)0;
                        exp_67=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "23field.nc", 1261, 1349);
                        info->no_comma=no_comma_65;
                        info->no_output_come_code=no_output_come_code_66;
                        if(*info->p==46&&*(info->p+1)==46) {
                            range_array2=(_Bool)1;
                        }
                        ((exp_67) ? exp_67 = come_decrement_ref_count(exp_67, ((struct sNode*)exp_67)->finalize, ((struct sNode*)exp_67)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1270, 1350):(void*)0);
                    }
                    info->p=p_63;
                    info->sline=sline_64;
                }
                if(range_array2) {
                    break;
                }
                else if(*info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    __right_value0 = (void*)0;
                    node2_68=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "23field.nc", 1283, 1351);
                    list$1sNode$ph_push_back(array_num_62,(struct sNode*)come_increment_ref_count(node2_68, "23field.nc", 1285, 1352));
                    if(*info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    ((node2_68) ? node2_68 = come_decrement_ref_count(node2_68, ((struct sNode*)node2_68)->finalize, ((struct sNode*)node2_68)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1299, 1353):(void*)0);
                }
                else {
                    break;
                }
            }
            if(!info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                right_node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "23field.nc", 1306, 1354);
                skip_spaces_and_lf(info);
                if(quote_61) {
                    __dec_obj174=node2_69,
                    node2_69=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1312, 1356);
                    (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1312, 1355) :0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj175=node2_69,
                    node2_69=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node, "23field.nc", 1315, 1357),info), "23field.nc", 1315, 1359);
                    (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1315, 1358) :0);
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 1317, 1364, "struct sNode");
                _inf_obj_value6=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value1=sStoreArrayNode_initialize((struct sStoreArrayNode* )come_increment_ref_count((struct sStoreArrayNode *)come_calloc(1, sizeof(struct sStoreArrayNode )*(1), "23field.nc", 1317, 1360, "struct sStoreArrayNode* "), "23field.nc", 1317, 1361),node2_69,(struct sNode*)come_increment_ref_count(right_node, "23field.nc", 1317, 1362),(struct list$1sNode$ph*)come_increment_ref_count(array_num_62, "23field.nc", 1317, 1363),quote_61,info))), "23field.nc", 1317, 1365);
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value6->clone=(void*)sStoreArrayNode_clone;
                _inf_value6->compile=(void*)sStoreArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sStoreArrayNode_kind;
                _inf_value6->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                __dec_obj180=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value6, "23field.nc", 1317, 1379);
                (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1317, 1378) :0);
                come_call_finalizer(sStoreArrayNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1317, 1380);
                ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1329, 1381):(void*)0);
                ((node2_69) ? node2_69 = come_decrement_ref_count(node2_69, ((struct sNode*)node2_69)->finalize, ((struct sNode*)node2_69)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1329, 1382):(void*)0);
            }
            else {
                if(quote_61) {
                    __dec_obj181=node2_70,
                    node2_70=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1322, 1384);
                    (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1322, 1383) :0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj182=node2_70,
                    node2_70=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node, "23field.nc", 1325, 1385),info), "23field.nc", 1325, 1387);
                    (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1325, 1386) :0);
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 1327, 1391, "struct sNode");
                _inf_obj_value7=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value1=sLoadArrayNode_initialize((struct sLoadArrayNode* )come_increment_ref_count((struct sLoadArrayNode *)come_calloc(1, sizeof(struct sLoadArrayNode )*(1), "23field.nc", 1327, 1388, "struct sLoadArrayNode* "), "23field.nc", 1327, 1389),node2_70,(struct list$1sNode$ph*)come_increment_ref_count(array_num_62, "23field.nc", 1327, 1390),quote_61,(_Bool)0,info))), "23field.nc", 1327, 1392);
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value7->clone=(void*)sLoadArrayNode_clone;
                _inf_value7->compile=(void*)sLoadArrayNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sLoadArrayNode_kind;
                _inf_value7->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                __dec_obj186=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value7, "23field.nc", 1327, 1404);
                (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1327, 1403) :0);
                come_call_finalizer(sLoadArrayNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1327, 1405);
                ((node2_70) ? node2_70 = come_decrement_ref_count(node2_70, ((struct sNode*)node2_70)->finalize, ((struct sNode*)node2_70)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1329, 1406):(void*)0);
            }
            come_call_finalizer(list$1sNode$ph$p_finalize, array_num_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "23field.nc}", 1441, 1407);
        }
        else if((*info->p==92&&*(info->p+1)==46)||(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==62)||(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            quote_71=*info->p==92;
            if(quote_71) {
                info->p++;
            }
            arrow_=(_Bool)0;
            if(*info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                arrow_=(_Bool)1;
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            field_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "23field.nc", 1348, 1408);
            skip_spaces_and_lf(info);
            parse_method_generics_type=(_Bool)0;
            {
                p_72=info->p;
                sline_73=info->sline;
                if(*info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        __right_value0 = (void*)0;
                        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "23field.nc", 1362, 1409);
                        if(is_type_name(word,info)) {
                            parse_method_generics_type=(_Bool)1;
                        }
                        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 1368, 1410));
                    }
                }
                info->p=p_72;
                info->sline=sline_73;
            }
            if(!info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                right_node_74=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "23field.nc", 1379, 1411);
                if(quote_71) {
                    __dec_obj187=node2_75,
                    node2_75=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1383, 1413);
                    (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1383, 1412) :0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj188=node2_75,
                    node2_75=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node, "23field.nc", 1386, 1414),info), "23field.nc", 1386, 1416);
                    (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1386, 1415) :0);
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 1388, 1421, "struct sNode");
                _inf_obj_value8=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value1=sStoreFieldNode_initialize((struct sStoreFieldNode* )come_increment_ref_count((struct sStoreFieldNode *)come_calloc(1, sizeof(struct sStoreFieldNode )*(1), "23field.nc", 1388, 1417, "struct sStoreFieldNode* "), "23field.nc", 1388, 1418),node2_75,(struct sNode*)come_increment_ref_count(right_node_74, "23field.nc", 1388, 1419),(char* )come_increment_ref_count(field_name, "23field.nc", 1388, 1420),info,arrow_))), "23field.nc", 1388, 1422);
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value8->clone=(void*)sStoreFieldNode_clone;
                _inf_value8->compile=(void*)sStoreFieldNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sline_real=(void*)sNodeBase_sline_real;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sNodeBase_terminated;
                _inf_value8->kind=(void*)sStoreFieldNode_kind;
                _inf_value8->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                __dec_obj189=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value8, "23field.nc", 1388, 1424);
                (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1388, 1423) :0);
                come_call_finalizer(sStoreFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1388, 1425);
                ((right_node_74) ? right_node_74 = come_decrement_ref_count(right_node_74, ((struct sNode*)right_node_74)->finalize, ((struct sNode*)right_node_74)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1431, 1426):(void*)0);
                ((node2_75) ? node2_75 = come_decrement_ref_count(node2_75, ((struct sNode*)node2_75)->finalize, ((struct sNode*)node2_75)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1431, 1427):(void*)0);
            }
            else if(!gComeC&&(*info->p==40||*info->p==123||parse_method_generics_type)) {
                if(string_operator_equals(field_name,"if")) {
                    __right_value0 = (void*)0;
                    __dec_obj190=node,
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(node, "23field.nc", 1393, 1428),info), "23field.nc", 1393, 1430);
                    (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1393, 1429) :0);
                }
                else if(string_operator_equals(field_name,"elif")) {
                    __right_value0 = (void*)0;
                    __dec_obj191=node,
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(node, "23field.nc", 1396, 1431),info), "23field.nc", 1396, 1433);
                    (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1396, 1432) :0);
                }
                else if(string_operator_equals(field_name,"case")) {
                    __right_value0 = (void*)0;
                    __dec_obj192=node,
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(node, "23field.nc", 1399, 1434),info), "23field.nc", 1399, 1436);
                    (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1399, 1435) :0);
                }
                else if(string_operator_equals(field_name,"catch")) {
                    __right_value0 = (void*)0;
                    __dec_obj193=node,
                    node=(struct sNode*)come_increment_ref_count(parse_catch((struct sNode*)come_increment_ref_count(node, "23field.nc", 1402, 1437),info), "23field.nc", 1402, 1439);
                    (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1402, 1438) :0);
                }
                else if(string_operator_equals(field_name,"less")) {
                    __right_value0 = (void*)0;
                    __dec_obj194=node,
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(node, "23field.nc", 1405, 1440),info), "23field.nc", 1405, 1442);
                    (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1405, 1441) :0);
                }
                else if(string_operator_equals(field_name,"unwrap")) {
                    __right_value0 = (void*)0;
                    __dec_obj195=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(node, "23field.nc", 1408, 1443),(char* )come_increment_ref_count(field_name, "23field.nc", 1408, 1444),info,arrow_), "23field.nc", 1408, 1446);
                    (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1408, 1445) :0);
                }
                else {
                    if(quote_71) {
                        __dec_obj196=node2_76,
                        node2_76=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1413, 1448);
                        (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1413, 1447) :0);
                    }
                    else {
                        __right_value0 = (void*)0;
                        __dec_obj197=node2_76,
                        node2_76=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node, "23field.nc", 1416, 1449),info), "23field.nc", 1416, 1451);
                        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1416, 1450) :0);
                    }
                    __right_value0 = (void*)0;
                    __dec_obj198=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(node2_76, "23field.nc", 1418, 1452),(char* )come_increment_ref_count(field_name, "23field.nc", 1418, 1453),info,arrow_), "23field.nc", 1418, 1455);
                    (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1418, 1454) :0);
                    ((node2_76) ? node2_76 = come_decrement_ref_count(node2_76, ((struct sNode*)node2_76)->finalize, ((struct sNode*)node2_76)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1420, 1456):(void*)0);
                }
            }
            else {
                if(quote_71) {
                    __dec_obj199=node2_77,
                    node2_77=(struct sNode*)come_increment_ref_count(node, "23field.nc", 1424, 1458);
                    (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1424, 1457) :0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj200=node2_77,
                    node2_77=(struct sNode*)come_increment_ref_count(automatically_unwrap((struct sNode*)come_increment_ref_count(node, "23field.nc", 1427, 1459),info), "23field.nc", 1427, 1461);
                    (__dec_obj200 ? __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1427, 1460) :0);
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23field.nc", 1429, 1465, "struct sNode");
                _inf_obj_value9=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value1=sLoadFieldNode_initialize((struct sLoadFieldNode* )come_increment_ref_count((struct sLoadFieldNode *)come_calloc(1, sizeof(struct sLoadFieldNode )*(1), "23field.nc", 1429, 1462, "struct sLoadFieldNode* "), "23field.nc", 1429, 1463),node2_77,(char* )come_increment_ref_count(field_name, "23field.nc", 1429, 1464),info,arrow_))), "23field.nc", 1429, 1466);
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value9->clone=(void*)sLoadFieldNode_clone;
                _inf_value9->compile=(void*)sLoadFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sLoadFieldNode_kind;
                _inf_value9->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                __dec_obj201=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value9, "23field.nc", 1429, 1468);
                (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1429, 1467) :0);
                come_call_finalizer(sLoadFieldNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "23field.nc}", 1429, 1469);
                ((node2_77) ? node2_77 = come_decrement_ref_count(node2_77, ((struct sNode*)node2_77)->finalize, ((struct sNode*)node2_77)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1431, 1470):(void*)0);
            }
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "23field.nc", 1441, 1471));
        }
        else {
            __right_value0 = (void*)0;
            node2_78=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node, "23field.nc", 1433, 1472),info), "23field.nc", 1433, 1473);
            if(node2_78==((void*)0)) {
                ((node2_78) ? node2_78 = come_decrement_ref_count(node2_78, ((struct sNode*)node2_78)->finalize, ((struct sNode*)node2_78)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1436, 1474):(void*)0);
                break;
            }
            __dec_obj202=node,
            node=(struct sNode*)come_increment_ref_count(node2_78, "23field.nc", 1439, 1476);
            (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0, (void*)0, "23field.nc", 1439, 1475) :0);
            ((node2_78) ? node2_78 = come_decrement_ref_count(node2_78, ((struct sNode*)node2_78)->finalize, ((struct sNode*)node2_78)->_protocol_obj, 0, 0,(void*)0, "23field.nc", 1441, 1477):(void*)0);
        }
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "23field.nc", 1443, 1478);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "23field.nc", 1443, 1479):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "23field.nc", 1443, 1480):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj160;
    struct list_item$1sNode$ph* litem_58;
    struct sNode* __dec_obj161;
    struct list_item$1sNode$ph* litem_59;
    struct sNode* __dec_obj162;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1615, 1274):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1275, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1619, 1276);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj160=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1278);
        (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1277) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_58=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1279, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1629, 1280);
        litem_58->prev=self->head;
        litem_58->next=((void*)0);
        __dec_obj161=litem_58->item,
        litem_58->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1282);
        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1281) :0);
        self->tail=litem_58;
        self->head->next=litem_58;
    }
    else {
        __right_value0 = (void*)0;
        litem_59=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1283, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1639, 1284);
        litem_59->prev=self->tail;
        litem_59->next=((void*)0);
        __dec_obj162=litem_59->item,
        litem_59->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1286);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1285) :0);
        self->tail->next=litem_59;
        self->tail=litem_59;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1651, 1287):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadRangeArrayNode_clone"; neo_current_frame = &fr;
    struct sLoadRangeArrayNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadRangeArrayNode*  result  ;
    char*  __dec_obj165  ;
    struct list$1sNode$ph* __dec_obj166;
    struct sNode* __dec_obj167;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLoadRangeArrayNode* )come_increment_ref_count((struct sLoadRangeArrayNode *)come_calloc(1, sizeof(struct sLoadRangeArrayNode )*(1), "sLoadRangeArrayNode_clone", 5, 1303, "struct sLoadRangeArrayNode* "), "sLoadRangeArrayNode_clone", 5, 1304);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj165=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLoadRangeArrayNode_clone", 7, 1305, "char* "), "sLoadRangeArrayNode_clone", 7, 1307);
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0, "sLoadRangeArrayNode_clone", 7, 1306);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj166=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sLoadRangeArrayNode_clone", 9, 1309);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sLoadRangeArrayNode_clone", 9, 1308);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj167=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLoadRangeArrayNode_clone", 10, 1311);
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "sLoadRangeArrayNode_clone", 10, 1310) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sLoadRangeArrayNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLoadRangeArrayNode_clone}", 12, 1312);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sUnwrapNode* sUnwrapNode_clone(struct sUnwrapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUnwrapNode_clone"; neo_current_frame = &fr;
    struct sUnwrapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sUnwrapNode*  result  ;
    char*  __dec_obj169  ;
    struct sNode* __dec_obj170;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sUnwrapNode* )come_increment_ref_count((struct sUnwrapNode *)come_calloc(1, sizeof(struct sUnwrapNode )*(1), "sUnwrapNode_clone", 5, 1323, "struct sUnwrapNode* "), "sUnwrapNode_clone", 5, 1324);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj169=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sUnwrapNode_clone", 7, 1325, "char* "), "sUnwrapNode_clone", 7, 1327);
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "sUnwrapNode_clone", 7, 1326);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj170=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sUnwrapNode_clone", 9, 1329);
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0, "sUnwrapNode_clone", 9, 1328) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sUnwrapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sUnwrapNode_clone}", 10, 1330);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStoreArrayNode_clone"; neo_current_frame = &fr;
    struct sStoreArrayNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStoreArrayNode*  result  ;
    char*  __dec_obj176  ;
    struct sNode* __dec_obj177;
    struct sNode* __dec_obj178;
    struct list$1sNode$ph* __dec_obj179;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStoreArrayNode* )come_increment_ref_count((struct sStoreArrayNode *)come_calloc(1, sizeof(struct sStoreArrayNode )*(1), "sStoreArrayNode_clone", 5, 1366, "struct sStoreArrayNode* "), "sStoreArrayNode_clone", 5, 1367);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj176=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStoreArrayNode_clone", 7, 1368, "char* "), "sStoreArrayNode_clone", 7, 1370);
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "sStoreArrayNode_clone", 7, 1369);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj177=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sStoreArrayNode_clone", 9, 1372);
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0, "sStoreArrayNode_clone", 9, 1371) :0);
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj178=result->mRight,
        result->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight), "sStoreArrayNode_clone", 10, 1374);
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0, "sStoreArrayNode_clone", 10, 1373) :0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj179=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sStoreArrayNode_clone", 11, 1376);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj179,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sStoreArrayNode_clone", 11, 1375);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sStoreArrayNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sStoreArrayNode_clone}", 13, 1377);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLoadArrayNode_clone"; neo_current_frame = &fr;
    struct sLoadArrayNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLoadArrayNode*  result  ;
    char*  __dec_obj183  ;
    struct list$1sNode$ph* __dec_obj184;
    struct sNode* __dec_obj185;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLoadArrayNode* )come_increment_ref_count((struct sLoadArrayNode *)come_calloc(1, sizeof(struct sLoadArrayNode )*(1), "sLoadArrayNode_clone", 5, 1393, "struct sLoadArrayNode* "), "sLoadArrayNode_clone", 5, 1394);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj183=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLoadArrayNode_clone", 7, 1395, "char* "), "sLoadArrayNode_clone", 7, 1397);
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0, (void*)0, "sLoadArrayNode_clone", 7, 1396);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj184=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sLoadArrayNode_clone", 9, 1399);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sLoadArrayNode_clone", 9, 1398);
    }
    if(self!=((void*)0)) {
        result->mBreakGuard=self->mBreakGuard;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj185=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sLoadArrayNode_clone", 11, 1401);
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0, "sLoadArrayNode_clone", 11, 1400) :0);
    }
    if(self!=((void*)0)) {
        result->mQuote=self->mQuote;
    }
        __result_obj__0 = result;
    come_call_finalizer(sLoadArrayNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLoadArrayNode_clone}", 13, 1402);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

