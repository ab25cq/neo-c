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

struct sFunCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct list$1sType$ph* method_generics_types;
    struct buffer*  method_block  ;
    int method_block_sline;
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
int match_common_attribute_keyword_len(const char* p);
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
struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  );
struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  );
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  );
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, _Bool iter_, struct sNode* obj2);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function);
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
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
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer*  method_block  , int method_block_sline, struct sInfo*  info  );
char*  sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static int list$1char$ph_length(struct list$1char$ph* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE*  item  );
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
struct sNode* parse_function_call(char* fun_name, struct sInfo*  info  , _Bool come_);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
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
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct list$1sType$ph* method_generics_types, struct buffer*  method_block  , int method_block_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj1  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj7;
    struct list$1sType$ph* __dec_obj8;
    struct buffer*  __dec_obj9  ;
    struct sFunCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFunCallNode*)come_increment_ref_count(self, "49call3.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 7, 3);
    __right_value0 = (void*)0;
    __dec_obj1=self->fun_name,
    self->fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name,"49call3.nc",9), "49call3.nc", 9, 5);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 9, 4);
    __right_value0 = (void*)0;
    __dec_obj7=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params), "49call3.nc", 10, 60);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 10, 59);
    __dec_obj8=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types, "49call3.nc", 11, 95);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 11, 94);
    __dec_obj9=self->method_block,
    self->method_block=(struct buffer* )come_increment_ref_count(method_block, "49call3.nc", 12, 97);
    come_call_finalizer(buffer_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 12, 96);
    self->method_block_sline=method_block_sline;
        __result_obj__0 = (struct sFunCallNode*)come_increment_ref_count(self, "49call3.nc", 16, 98);
    come_call_finalizer(sFunCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "49call3.nc}", 16, 104);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 16, 105);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 16, 106);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFunCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "49call3.nc}", 16, 107);
    return __result_obj__0;
}

char*  sFunCallNode_kind(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFunCallNode","49call3.nc",18))), "49call3.nc", 18, 108);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 18, 109));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "49call3.nc", 18, 110));
    return __result_obj__0;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_terminated"; neo_current_frame = &fr;
    if(self->method_block) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_compile"; neo_current_frame = &fr;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer*  method_block  ;
    int method_block_sline;
    void* __right_value0 = (void*)0;
    char*  __dec_obj10  ;
    struct sVar*  var_  ;
    struct sType*  lambda_type  ;
    _Bool __result_obj__0;
    struct sType*  result_type  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var1
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value;
    struct CVALUE*  come_value  ;
    struct sType*  type_  ;
    struct sType*  type2_  ;
    struct sType*  __dec_obj45  ;
    _Bool _conditional_value_X0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    _Bool _conditional_value_X1;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_4;
    struct CVALUE*  it_17  ;
    struct CVALUE*  come_value_19  ;
    char*  __dec_obj49  ;
    struct sType*  __dec_obj50  ;
    struct sGenericsFun*  generics_fun  ;
    _Bool method_generics;
    struct list$1sType$ph* method_generics_types;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;    char*  name  =0;
    struct sGenericsFun*  gfun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    struct list$1CVALUE$ph* come_params_20;
    struct sFun*  fun_21  ;
    _Bool no_output_come_code;
    struct CVALUE*  method_block_node  ;
    struct sType*  method_block_lambda_type  ;
    struct sType*  method_block_result_type  ;
    struct sType*  generics_fun_method_block_lambda_type  ;
    struct sType*  generics_fun_method_block_result_type  ;
    int method_generics_num;
    int n;
    struct list$1sType$ph* _o2_saved_5;
    struct sType*  it_28  ;
    int method_generics_num_30;
    struct list$1CVALUE$ph* come_params_31;
    int i_32;
    struct sType*  result_type_33  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_6;
    struct tuple2$2char$phsNode$ph* it_34;
    struct tuple2$2char$phsNode$ph* multiple_assign_var3
;    char*  label_35  =0;
    struct sNode* node_36=0;
    _Bool Value_37;
    struct CVALUE*  come_value_38  ;
    struct sType*  type__39  ;
    struct sType*  type2__40  ;
    struct sType*  type3_  ;
    struct sType*  __dec_obj55  ;
    int method_generics_num_43;
    int n_44;
    struct list$1sType$ph* _o2_saved_7;
    struct sType*  it_45  ;
    int method_generics_num_46;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name_53  =0;
    struct sGenericsFun*  gfun_54  =0;
    char*  __dec_obj59  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var5
;    char*  name_55  =0;
    struct sGenericsFun*  gfun_56  =0;
    char*  __dec_obj60  ;
    struct list$1CVALUE$ph* come_params_57;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_8;
    struct tuple2$2char$phsNode$ph* it_58;
    struct tuple2$2char$phsNode$ph* multiple_assign_var6
;    char*  label_59  =0;
    struct sNode* node_60=0;
    _Bool Value_61;
    struct CVALUE*  come_value_62  ;
    struct sType*  type__63  ;
    struct sType*  __dec_obj61  ;
    char*  type1  ;
    char*  type2  ;
    struct CVALUE*  come_value_64  ;
    char*  __dec_obj62  ;
    struct sType*  __dec_obj63  ;
    struct CVALUE*  come_value_65  ;
    char*  __dec_obj64  ;
    struct sType*  __dec_obj65  ;
    struct list$1CVALUE$ph* come_params_66;
    int i_67;
    struct sType*  result_type_68  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_9;
    struct tuple2$2char$phsNode$ph* it_69;
    struct tuple2$2char$phsNode$ph* multiple_assign_var7
;    char*  label_70  =0;
    struct sNode* node_71=0;
    _Bool Value_72;
    struct CVALUE*  come_value_73  ;
    struct sType*  type__74  ;
    struct sType*  __dec_obj66  ;
    struct sType*  __dec_obj67  ;
    struct buffer*  buf_75  ;
    int j_76;
    struct list$1CVALUE$ph* _o2_saved_10;
    struct CVALUE*  it_77  ;
    struct CVALUE*  come_value_78  ;
    char*  __dec_obj68  ;
    struct sType*  __dec_obj69  ;
    struct list$1CVALUE$ph* come_params_79;
    int i_80;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_11;
    struct tuple2$2char$phsNode$ph* it_81;
    struct tuple2$2char$phsNode$ph* multiple_assign_var8
;    char*  label_82  =0;
    struct sNode* node_83=0;
    _Bool Value_84;
    struct CVALUE*  come_value_85  ;
    struct sType*  type__86  ;
    struct sType*  __dec_obj70  ;
    struct buffer*  buf_87  ;
    int j_88;
    struct list$1CVALUE$ph* _o2_saved_12;
    struct CVALUE*  it_89  ;
    struct sType*  result_type_90  ;
    struct CVALUE*  come_value_91  ;
    char*  __dec_obj71  ;
    struct sType*  __dec_obj72  ;
    struct list$1CVALUE$ph* come_params_92;
    int i_93;
    struct sType*  result_type_94  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_13;
    struct tuple2$2char$phsNode$ph* it_95;
    struct tuple2$2char$phsNode$ph* multiple_assign_var9
;    char*  label_96  =0;
    struct sNode* node_97=0;
    _Bool Value_98;
    struct CVALUE*  come_value_99  ;
    struct sType*  type__100  ;
    struct sType*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    struct buffer*  buf_101  ;
    int j_102;
    struct list$1CVALUE$ph* _o2_saved_14;
    struct CVALUE*  it_103  ;
    struct CVALUE*  come_value_104  ;
    char*  __dec_obj75  ;
    _Bool atomic_builtin;
    struct sType*  __dec_obj76  ;
    struct sType*  __dec_obj77  ;
    struct sType*  t  ;
    _Bool use_value_param;
    struct sType*  __dec_obj78  ;
    struct sType*  __dec_obj79  ;
    struct sType*  __dec_obj80  ;
    struct sType*  __dec_obj81  ;
    struct sType*  __dec_obj82  ;
    char*  __dec_obj83  ;
    char*  __dec_obj84  ;
    char* p;
    int version;
    char* p2;
    int i_105;
    char*  new_fun_name  ;
    char*  __dec_obj85  ;
    char*  new_fun_name_106  ;
    _Bool _conditional_value_X2;
    char*  __dec_obj86  ;
    int i_107;
    char*  new_fun_name_108  ;
    _Bool _conditional_value_X3;
    char*  __dec_obj87  ;
    struct sFun*  fun_109  ;
    struct list$1CVALUE$ph* come_params_110;
    int i_111;
    struct sType*  result_type_112  ;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_15;
    struct tuple2$2char$phsNode$ph* it_113;
    struct tuple2$2char$phsNode$ph* multiple_assign_var10
;    char*  label_114  =0;
    struct sNode* node_115=0;
    _Bool Value_116;
    struct CVALUE*  come_value_117  ;
    struct sType*  type__118  ;
    struct sType*  __dec_obj88  ;
    struct sType*  __dec_obj89  ;
    struct buffer*  buf_119  ;
    int j_120;
    struct list$1CVALUE$ph* _o2_saved_16;
    struct CVALUE*  it_121  ;
    struct CVALUE*  come_value_122  ;
    char*  __dec_obj90  ;
    struct sType*  __dec_obj91  ;
    struct sType*  result_type_123  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_17;
    struct sType*  it_124  ;
    struct sType*  it2_  ;
    struct sType*  it2  ;
    struct sType*  result_type_  ;
    struct sType*  __dec_obj92  ;
    struct list$1CVALUE$ph* come_params_125;
    int i_126;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_18;
    struct tuple2$2char$phsNode$ph* it_127;
    struct tuple2$2char$phsNode$ph* multiple_assign_var11
;    char*  label_128  =0;
    struct sNode* node_129=0;
    _Bool Value_130;
    struct CVALUE*  come_value_131  ;
    struct sType*  type__132  ;
    struct sType*  __dec_obj93  ;
    _Bool check;
    int n_133;
    struct list$1char$ph* _o2_saved_19;
    char*  it_135  ;
    int i_138;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_20;
    struct tuple2$2char$phsNode$ph* it_139;
    struct tuple2$2char$phsNode$ph* multiple_assign_var12
;    char*  label_140  =0;
    struct sNode* node_141=0;
    _Bool Value_142;
    struct CVALUE*  come_value_143  ;
    struct sType*  type__144  ;
    struct sType*  __dec_obj95  ;
    _Bool Value_145;
    struct CVALUE*  come_value_146  ;
    struct sType*  type__147  ;
    struct sType*  __dec_obj96  ;
    _Bool _conditional_value_X4;
    char*  default_param  ;
    char* param_name;
    struct buffer*  source  ;
    char* p_150;
    char* head;
    int sline;
    struct buffer*  __dec_obj97  ;
    _Bool no_output_come_code_151;
    struct sNode* node_152;
    _Bool Value_153;
    struct buffer*  __dec_obj98  ;
    struct CVALUE*  come_value_154  ;
    struct sType*  type__155  ;
    struct sType*  __dec_obj99  ;
    struct sNode* _inf_value1;
    struct sCurrentNode* _inf_obj_value1;
    struct sNode* current_stack_frame_node;
    _Bool Value_156;
    struct CVALUE*  come_value_157  ;
    struct sType*  type__158  ;
    struct sType*  __dec_obj101  ;
    struct buffer*  method_block2  ;
    struct sType*  method_block_type  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    int num_method_block;
    struct sType*  result_type_159  ;
    struct sType*  result_type2_  ;
    struct sType*  result_type2  ;
    struct list$1sType$ph* param_types_160;
    struct list$1char$ph* param_names;
    struct buffer*  all_alhabet_sname  ;
    char* p_161;
    struct list$1sType$ph* _o2_saved_21;
    struct sType*  it_162  ;
    struct sType*  param_type  ;
    char*  param_name_163  ;
    char*  param_name_164  ;
    struct sType*  param_type2_  ;
    struct sType*  param_type2  ;
    char*  param_name_165  ;
    struct sType*  param_type2__166  ;
    struct sType*  param_type2_167  ;
    struct buffer*  source3  ;
    char* p_168;
    char* head_169;
    int sline_170;
    struct buffer*  __dec_obj102  ;
    struct sNode* node_171;
    _Bool Value_172;
    char* method_block_name;
    struct CVALUE*  come_value2  ;
    struct sFun*  fun2  ;
    struct sType*  method_block_type2  ;
    char*  __dec_obj103  ;
    struct sType*  __dec_obj104  ;
    struct buffer*  __dec_obj105  ;
    struct buffer*  buf_173  ;
    char*  __dec_obj106  ;
    char*  __dec_obj107  ;
    char*  __dec_obj108  ;
    int j_174;
    struct list$1CVALUE$ph* _o2_saved_22;
    struct CVALUE*  it_175  ;
    struct CVALUE*  come_value_176  ;
    char*  __dec_obj109  ;
    struct sType*  __dec_obj110  ;
    memset(&type__86, 0, sizeof(type__86));
    memset(&t, 0, sizeof(t));
    memset(&i_105, 0, sizeof(i_105));
    fun_name=(char* )come_increment_ref_count(self->fun_name, "49call3.nc", 33, 111);
    params=self->params;
    method_block=self->method_block;
    method_block_sline=self->method_block_sline;
    __dec_obj10=info->caller_sname,
    info->caller_sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"49call3.nc",38), "49call3.nc", 38, 113);
    __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 38, 112);
    info->caller_line=info->sline;
    var_=get_variable_from_table(info->lv_table,fun_name);
    if(var_==((void*)0)) {
        var_=get_variable_from_table(info->gv_table,fun_name);
    }
    if(var_) {
        lambda_type=var_->mType;
        if(string_operator_not_equals(lambda_type->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name);
                        __result_obj__0 = (_Bool)1;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 53, 114));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(lambda_type->mResultType), "49call3.nc", 56, 284);
        if(result_type) {
            result_type->mStatic=(_Bool)0;
        }
        __right_value0 = (void*)0;
        come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 61, 285, "struct list$1CVALUE$ph*"), "49call3.nc", 61, 296)), "49call3.nc", 61, 297);
        if(list$1sType$ph_length(lambda_type->mParamTypes)!=list$1tuple2$2char$phsNode$ph$ph_length(params)&&!lambda_type->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(lambda_type->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 65, 298);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 65, 299);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 65, 300));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        i=0;
        for(_o2_saved_3=params,it=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_3)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_3);it=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_3)){
            multiple_assign_var1=it;
            label=(char* )come_increment_ref_count(multiple_assign_var1->v1, "49call3.nc", 70, 301);
            node=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2, "49call3.nc", 70, 302);
            Value=node_compile(node,info);
            if(!Value) {
                                __result_obj__0 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 73, 303));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 73, 304):(void*)0);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 73, 305);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 73, 306);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 73, 307));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 76, 308);
            __right_value0 = (void*)0;
            type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "49call3.nc", 78, 309);
            __right_value0 = (void*)0;
            type2_=(struct sType* )come_increment_ref_count(solve_generics(type_,info->generics_type,info), "49call3.nc", 79, 310);
            __right_value0 = (void*)0;
            __dec_obj45=come_value->type,
            come_value->type=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "49call3.nc", 80, 312);
            come_call_finalizer(sType_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 80, 311);
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(lambda_type->mVarArgs&&((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))==((void*)0)));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 82, 331);
_conditional_value_X0;})) {
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s calling param #\%s",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 85, 332));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 85, 333));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 85, 334));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 85, 335);
                if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i)))->mHeap&&come_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 87, 336);
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i))),come_value->type,come_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 88, 337);
                }
            }
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "49call3.nc", 92, 352));
            i++;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 97, 353));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 97, 354):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 97, 355);
            come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 97, 356);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 97, 357);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 97, 358, "struct buffer* "), "49call3.nc", 97, 359)), "49call3.nc", 97, 360);
        buffer_append_str(buf,var_->mCValueName);
        buffer_append_str(buf,"(");
        j=0;
        for(_o2_saved_4=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "49call3.nc", 103, 361),it_17=list$1CVALUE$ph_begin(_o2_saved_4)        ;!list$1CVALUE$ph_end(_o2_saved_4);it_17=list$1CVALUE$ph_next(_o2_saved_4)){
            buffer_append_str(buf,it_17->c_value);
            if(j!=list$1CVALUE$ph_length(come_params)-1) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_19=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 114, 362, "struct CVALUE* "), "49call3.nc", 114, 363)), "49call3.nc", 114, 364);
        __right_value0 = (void*)0;
        __dec_obj49=come_value_19->c_value,
        come_value_19->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "49call3.nc", 115, 366);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 115, 365);
        __right_value0 = (void*)0;
        __dec_obj50=come_value_19->type,
        come_value_19->type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "49call3.nc", 116, 368);
        come_call_finalizer(sType_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 116, 367);
        if(come_value_19->type) {
            come_value_19->type->mStatic=(_Bool)0;
        }
        come_value_19->var=((void*)0);
        if(lambda_type->mResultType->mHeap) {
            append_object_to_right_values(come_value_19,lambda_type->mResultType,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value_19->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_19, "49call3.nc", 128, 369));
        info->calling_fun=((void*)0);
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 132, 370);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 132, 371);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 132, 372);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 132, 373);
        come_call_finalizer(CVALUE_finalize, come_value_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 132, 374);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 132, 375));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 134, 376);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 134, 377);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 134, 378);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 134, 379);
        come_call_finalizer(CVALUE_finalize, come_value_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 134, 380);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value1=map$2char$phsGenericsFun$ph_at(info->generics_funcs,((char* )(__right_value0=__builtin_string(fun_name,"49call3.nc",134))),((void*)0),(_Bool)0)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 134, 406));
    method_generics=(_Bool)0;
    if(generics_fun) {
        method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
    }
    if((self->method_generics_types&&list$1sType$ph_length(self->method_generics_types)>0)||method_generics) {
        if(list$1sType$ph_length(self->method_generics_types)==0) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "49call3.nc", 141, 407, "struct list$1sType$ph*"), "49call3.nc", 141, 408)), "49call3.nc", 141, 409);
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name, "49call3.nc", 142, 410),method_generics_types,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "49call3.nc", 142, 411);
            gfun=multiple_assign_var2->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 142, 413);
            generics_fun_name=(char* )come_increment_ref_count(name, "49call3.nc", 143, 414);
            __right_value0 = (void*)0;
            fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
            if(method_block) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_params_20=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 148, 456, "struct list$1CVALUE$ph*"), "49call3.nc", 148, 457)), "49call3.nc", 148, 458);
                __right_value0 = (void*)0;
                fun_21=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
                no_output_come_code=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(!compile_method_block(method_block,come_params_20,fun_21,fun_name,method_block_sline,info,(_Bool)1)) {
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 155, 459);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 155, 460);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 155, 461));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 155, 462));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 155, 463));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                info->no_output_come_code=no_output_come_code;
                __right_value0 = (void*)0;
                method_block_node=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_20,-1)));
                __right_value0 = (void*)0;
                method_block_lambda_type=(struct sType* )come_increment_ref_count(sType_clone(method_block_node->type), "49call3.nc", 160, 482);
                __right_value0 = (void*)0;
                method_block_result_type=(struct sType* )come_increment_ref_count(sType_clone(info->come_method_block_function_result_type), "49call3.nc", 161, 483);
                __right_value0 = (void*)0;
                generics_fun_method_block_lambda_type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                if(generics_fun_method_block_result_type->mClass->mMethodGenerics) {
                    method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num,(struct sType* )come_increment_ref_count(sType_clone(method_block_result_type), "49call3.nc", 168, 508));
                }
                n=0;
                for(_o2_saved_5=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type->mParamTypes, "49call3.nc", 171, 509),it_28=list$1sType$ph_begin(_o2_saved_5)                ;!list$1sType$ph_end(_o2_saved_5);it_28=list$1sType$ph_next(_o2_saved_5)){
                    if(it_28->mClass->mMethodGenerics) {
                        method_generics_num_30=it_28->mClass->mMethodGenericsNum;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_30,(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value2=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n)))), "49call3.nc", 174, 510));
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 174, 511);
                        come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 174, 512);
                    }
                    n++;
                }
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 180, 513);
                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 180, 514);
                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 180, 515);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 180, 516);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_params_31=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 180, 517, "struct list$1CVALUE$ph*"), "49call3.nc", 180, 518)), "49call3.nc", 180, 519);
            i_32=0;
            result_type_33=((void*)0);
            for(_o2_saved_6=params,it_34=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_6)            ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_6);it_34=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_6)){
                multiple_assign_var3=it_34;
                label_35=(char* )come_increment_ref_count(multiple_assign_var3->v1, "49call3.nc", 185, 520);
                node_36=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2, "49call3.nc", 185, 521);
                Value_37=node_compile(node_36,info);
                if(!Value_37) {
                                        __result_obj__0 = (_Bool)0;
                    (label_35 = come_decrement_ref_count(label_35, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 188, 522));
                    ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 188, 523):(void*)0);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 188, 524);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 188, 525));
                    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 188, 526));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 188, 527);
                    come_call_finalizer(sType_finalize, result_type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 188, 528);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 188, 529));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_38=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 191, 530);
                __right_value0 = (void*)0;
                type__39=(struct sType* )come_increment_ref_count(sType_clone(come_value_38->type), "49call3.nc", 193, 531);
                __right_value0 = (void*)0;
                type2__40=(struct sType* )come_increment_ref_count(solve_generics(type__39,info->generics_type,info), "49call3.nc", 194, 532);
                __right_value0 = (void*)0;
                type3_=(struct sType* )come_increment_ref_count(solve_method_generics(type2__40,info), "49call3.nc", 195, 533);
                __dec_obj55=come_value_38->type,
                come_value_38->type=(struct sType* )come_increment_ref_count(type3_, "49call3.nc", 196, 535);
                come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 196, 534);
                list$1CVALUE$ph_add(come_params_31,(struct CVALUE* )come_increment_ref_count(come_value_38, "49call3.nc", 198, 550));
                (label_35 = come_decrement_ref_count(label_35, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 201, 551));
                ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 201, 552):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_38, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 201, 553);
                come_call_finalizer(sType_finalize, type__39, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 201, 554);
                come_call_finalizer(sType_finalize, type2__40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 201, 555);
                come_call_finalizer(sType_finalize, type3_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 201, 556);
            }
            if(generics_fun->mResultType->mClass->mMethodGenerics) {
                method_generics_num_43=generics_fun->mResultType->mClass->mMethodGenericsNum;
                if(info->function_result_type) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_43,(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "49call3.nc", 205, 557));
                }
            }
            n_44=0;
            for(_o2_saved_7=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "49call3.nc", 209, 558),it_45=list$1sType$ph_begin(_o2_saved_7)            ;!list$1sType$ph_end(_o2_saved_7);it_45=list$1sType$ph_next(_o2_saved_7)){
                if(it_45->mClass->mMethodGenerics) {
                    method_generics_num_46=it_45->mClass->mMethodGenericsNum;
                    if(n_44<list$1CVALUE$ph_length(come_params_31)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        list$1sType$ph_operator_store_element(method_generics_types,method_generics_num_46,(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_31,n_44)))->type), "49call3.nc", 213, 559));
                        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 213, 560);
                        come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 213, 561);
                    }
                }
                n_44++;
            }
            map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(generics_fun_name, "49call3.nc", 219, 570),(_Bool)0);
            __right_value0 = (void*)0;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 221, 572));
            multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name, "49call3.nc", 221, 571),method_generics_types,info)));
            name_53=(char* )come_increment_ref_count(multiple_assign_var4->v1, "49call3.nc", 221, 573);
            gfun_54=multiple_assign_var4->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 221, 574);
            __dec_obj59=fun_name,
            fun_name=(char* )come_increment_ref_count(name_53, "49call3.nc", 222, 576);
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 222, 575);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 228, 577);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 228, 578));
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 228, 579);
            come_call_finalizer(sType_finalize, result_type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 228, 580);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 228, 581);
            (name_53 = come_decrement_ref_count(name_53, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 228, 582));
        }
        else {
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple2$2char$phsGenericsFun$p*)(__right_value0=make_method_generics_function((char* )come_increment_ref_count(fun_name, "49call3.nc", 225, 583),self->method_generics_types,info)));
            name_55=(char* )come_increment_ref_count(multiple_assign_var5->v1, "49call3.nc", 225, 584);
            gfun_56=multiple_assign_var5->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 225, 585);
            __dec_obj60=fun_name,
            fun_name=(char* )come_increment_ref_count(name_55, "49call3.nc", 226, 587);
            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 226, 586);
            (name_55 = come_decrement_ref_count(name_55, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 228, 588));
        }
    }
    if(string_operator_equals(fun_name,"__builtin_types_compatible_p")) {
        if(list$1tuple2$2char$phsNode$ph$ph_length(params)!=2) {
            err_msg(info,"__builtin_types_compatible_p params error");
                        __result_obj__0 = (_Bool)0;
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 234, 589));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_57=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 237, 590, "struct list$1CVALUE$ph*"), "49call3.nc", 237, 591)), "49call3.nc", 237, 592);
        for(_o2_saved_8=params,it_58=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_8)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_8);it_58=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_8)){
            multiple_assign_var6=it_58;
            label_59=(char* )come_increment_ref_count(multiple_assign_var6->v1, "49call3.nc", 239, 593);
            node_60=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2, "49call3.nc", 239, 594);
            Value_61=node_compile(node_60,info);
            if(!Value_61) {
                                __result_obj__0 = (_Bool)0;
                (label_59 = come_decrement_ref_count(label_59, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 242, 595));
                ((node_60) ? node_60 = come_decrement_ref_count(node_60, ((struct sNode*)node_60)->finalize, ((struct sNode*)node_60)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 242, 596):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 242, 597);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 242, 598));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_62=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 245, 599);
            __right_value0 = (void*)0;
            type__63=(struct sType* )come_increment_ref_count(solve_generics(come_value_62->type,info->generics_type,info), "49call3.nc", 247, 600);
            __right_value0 = (void*)0;
            __dec_obj61=come_value_62->type,
            come_value_62->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__63,info), "49call3.nc", 248, 602);
            come_call_finalizer(sType_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 248, 601);
            list$1CVALUE$ph_push_back(come_params_57,(struct CVALUE* )come_increment_ref_count(come_value_62, "49call3.nc", 250, 603));
            (label_59 = come_decrement_ref_count(label_59, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 253, 604));
            ((node_60) ? node_60 = come_decrement_ref_count(node_60, ((struct sNode*)node_60)->finalize, ((struct sNode*)node_60)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 253, 605):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_62, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 253, 606);
            come_call_finalizer(sType_finalize, type__63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 253, 607);
        }
        __right_value0 = (void*)0;
        type1=(char* )come_increment_ref_count(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_57,0)))->c_value, "49call3.nc", 253, 608);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 253, 609);
        __right_value0 = (void*)0;
        type2=(char* )come_increment_ref_count(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_57,1)))->c_value, "49call3.nc", 254, 610);
        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 254, 611);
        if(string_operator_equals(type1,type2)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_64=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 257, 612, "struct CVALUE* "), "49call3.nc", 257, 613)), "49call3.nc", 257, 614);
            __right_value0 = (void*)0;
            __dec_obj62=come_value_64->c_value,
            come_value_64->c_value=(char*)come_increment_ref_count(xsprintf("1"), "49call3.nc", 259, 616);
            __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 259, 615);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj63=come_value_64->type,
            come_value_64->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 260, 617, "struct sType* "), "49call3.nc", 260, 618),(char*)come_increment_ref_count(xsprintf("int"), "49call3.nc", 260, 619),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 260, 621);
            come_call_finalizer(sType_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 260, 620);
            come_value_64->var=((void*)0);
            add_come_last_code(info,"%s",come_value_64->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_64, "49call3.nc", 265, 622));
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 267, 623);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 267, 624);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 267, 625));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 267, 626));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 267, 627));
            neo_current_frame = fr.prev;
            return __result_obj__0;
            come_call_finalizer(CVALUE_finalize, come_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 282, 628);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            come_value_65=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 270, 629, "struct CVALUE* "), "49call3.nc", 270, 630)), "49call3.nc", 270, 631);
            __right_value0 = (void*)0;
            __dec_obj64=come_value_65->c_value,
            come_value_65->c_value=(char*)come_increment_ref_count(xsprintf("0"), "49call3.nc", 272, 633);
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 272, 632);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj65=come_value_65->type,
            come_value_65->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 273, 634, "struct sType* "), "49call3.nc", 273, 635),(char*)come_increment_ref_count(xsprintf("void"), "49call3.nc", 273, 636),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 273, 638);
            come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 273, 637);
            come_value_65->var=((void*)0);
            add_come_last_code(info,"%s",come_value_65->c_value);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_65, "49call3.nc", 278, 639));
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(CVALUE_finalize, come_value_65, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 280, 640);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 280, 641);
            (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 280, 642));
            (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 280, 643));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 280, 644));
            neo_current_frame = fr.prev;
            return __result_obj__0;
            come_call_finalizer(CVALUE_finalize, come_value_65, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 282, 645);
        }
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 646);
        (type1 = come_decrement_ref_count(type1, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 551, 647));
        (type2 = come_decrement_ref_count(type2, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 551, 648));
    }
    else if(string_operator_equals(fun_name,"__builtin_va_arg")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_66=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 284, 649, "struct list$1CVALUE$ph*"), "49call3.nc", 284, 650)), "49call3.nc", 284, 651);
        i_67=0;
        result_type_68=((void*)0);
        for(_o2_saved_9=params,it_69=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_9)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_9);it_69=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_9)){
            multiple_assign_var7=it_69;
            label_70=(char* )come_increment_ref_count(multiple_assign_var7->v1, "49call3.nc", 289, 652);
            node_71=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2, "49call3.nc", 289, 653);
            Value_72=node_compile(node_71,info);
            if(!Value_72) {
                                __result_obj__0 = (_Bool)0;
                (label_70 = come_decrement_ref_count(label_70, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 292, 654));
                ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 292, 655):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 292, 656);
                come_call_finalizer(sType_finalize, result_type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 292, 657);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 292, 658));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_73=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 295, 659);
            __right_value0 = (void*)0;
            type__74=(struct sType* )come_increment_ref_count(solve_generics(come_value_73->type,info->generics_type,info), "49call3.nc", 297, 660);
            __right_value0 = (void*)0;
            __dec_obj66=come_value_73->type,
            come_value_73->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__74,info), "49call3.nc", 298, 662);
            come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 298, 661);
            list$1CVALUE$ph_add(come_params_66,(struct CVALUE* )come_increment_ref_count(come_value_73, "49call3.nc", 300, 663));
            __dec_obj67=result_type_68,
            result_type_68=(struct sType* )come_increment_ref_count(come_value_73->type, "49call3.nc", 302, 665);
            come_call_finalizer(sType_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 302, 664);
            (label_70 = come_decrement_ref_count(label_70, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 305, 666));
            ((node_71) ? node_71 = come_decrement_ref_count(node_71, ((struct sNode*)node_71)->finalize, ((struct sNode*)node_71)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 305, 667):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_73, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 305, 668);
            come_call_finalizer(sType_finalize, type__74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 305, 669);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_75=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 305, 670, "struct buffer* "), "49call3.nc", 305, 671)), "49call3.nc", 305, 672);
        buffer_append_str(buf_75,fun_name);
        buffer_append_str(buf_75,"(");
        j_76=0;
        for(_o2_saved_10=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_66, "49call3.nc", 311, 673),it_77=list$1CVALUE$ph_begin(_o2_saved_10)        ;!list$1CVALUE$ph_end(_o2_saved_10);it_77=list$1CVALUE$ph_next(_o2_saved_10)){
            buffer_append_str(buf_75,it_77->c_value);
            if(j_76!=list$1CVALUE$ph_length(come_params_66)-1) {
                buffer_append_str(buf_75,",");
            }
            j_76++;
        }
        buffer_append_str(buf_75,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_78=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 322, 674, "struct CVALUE* "), "49call3.nc", 322, 675)), "49call3.nc", 322, 676);
        __right_value0 = (void*)0;
        __dec_obj68=come_value_78->c_value,
        come_value_78->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_75), "49call3.nc", 323, 678);
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 323, 677);
        __dec_obj69=come_value_78->type,
        come_value_78->type=(struct sType* )come_increment_ref_count(result_type_68, "49call3.nc", 324, 680);
        come_call_finalizer(sType_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 324, 679);
        come_value_78->var=((void*)0);
        add_come_last_code(info,"%s",come_value_78->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_78, "49call3.nc", 329, 681));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 331, 682);
        come_call_finalizer(sType_finalize, result_type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 331, 683);
        come_call_finalizer(buffer_finalize, buf_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 331, 684);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 331, 685);
        come_call_finalizer(CVALUE_finalize, come_value_78, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 331, 686);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 331, 687));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 688);
        come_call_finalizer(sType_finalize, result_type_68, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 689);
        come_call_finalizer(buffer_finalize, buf_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 690);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 691);
        come_call_finalizer(CVALUE_finalize, come_value_78, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 692);
    }
    else if(string_operator_equals(fun_name,"__builtin_va_copy")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_79=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 334, 693, "struct list$1CVALUE$ph*"), "49call3.nc", 334, 694)), "49call3.nc", 334, 695);
        i_80=0;
        for(_o2_saved_11=params,it_81=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_11)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_11);it_81=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_11)){
            multiple_assign_var8=it_81;
            label_82=(char* )come_increment_ref_count(multiple_assign_var8->v1, "49call3.nc", 338, 696);
            node_83=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2, "49call3.nc", 338, 697);
            Value_84=node_compile(node_83,info);
            if(!Value_84) {
                                __result_obj__0 = (_Bool)0;
                (label_82 = come_decrement_ref_count(label_82, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 341, 698));
                ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 341, 699):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_79, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 341, 700);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 341, 701));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_85=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 344, 702);
            __right_value0 = (void*)0;
            ((struct sType* )(__right_value0=solve_generics(come_value_85->type,info->generics_type,info)));
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 346, 703);
            __right_value0 = (void*)0;
            __dec_obj70=come_value_85->type,
            come_value_85->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__86,info), "49call3.nc", 347, 705);
            come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 347, 704);
            list$1CVALUE$ph_add(come_params_79,(struct CVALUE* )come_increment_ref_count(come_value_85, "49call3.nc", 349, 706));
            (label_82 = come_decrement_ref_count(label_82, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 352, 707));
            ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 352, 708):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_85, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 352, 709);
            come_call_finalizer(sType_finalize, type__86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 352, 710);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_87=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 352, 711, "struct buffer* "), "49call3.nc", 352, 712)), "49call3.nc", 352, 713);
        buffer_append_str(buf_87,fun_name);
        buffer_append_str(buf_87,"(");
        j_88=0;
        for(_o2_saved_12=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_79, "49call3.nc", 358, 714),it_89=list$1CVALUE$ph_begin(_o2_saved_12)        ;!list$1CVALUE$ph_end(_o2_saved_12);it_89=list$1CVALUE$ph_next(_o2_saved_12)){
            buffer_append_str(buf_87,it_89->c_value);
            if(j_88!=list$1CVALUE$ph_length(come_params_79)-1) {
                buffer_append_str(buf_87,",");
            }
            j_88++;
        }
        buffer_append_str(buf_87,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        result_type_90=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 369, 715, "struct sType* "), "49call3.nc", 369, 716),(char*)come_increment_ref_count(xsprintf("void"), "49call3.nc", 369, 717),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 369, 718);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_91=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 371, 719, "struct CVALUE* "), "49call3.nc", 371, 720)), "49call3.nc", 371, 721);
        __right_value0 = (void*)0;
        __dec_obj71=come_value_91->c_value,
        come_value_91->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_87), "49call3.nc", 372, 723);
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 372, 722);
        __dec_obj72=come_value_91->type,
        come_value_91->type=(struct sType* )come_increment_ref_count(result_type_90, "49call3.nc", 373, 725);
        come_call_finalizer(sType_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 373, 724);
        come_value_91->var=((void*)0);
        add_come_last_code(info,"%s",come_value_91->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_91, "49call3.nc", 378, 726));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_79, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 380, 727);
        come_call_finalizer(buffer_finalize, buf_87, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 380, 728);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 380, 729);
        come_call_finalizer(sType_finalize, result_type_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 380, 730);
        come_call_finalizer(CVALUE_finalize, come_value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 380, 731);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 380, 732));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_79, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 733);
        come_call_finalizer(buffer_finalize, buf_87, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 734);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 735);
        come_call_finalizer(sType_finalize, result_type_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 736);
        come_call_finalizer(CVALUE_finalize, come_value_91, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 737);
    }
    else if((strlen(fun_name)>strlen("__c11_atomic_")&&memcmp(fun_name,"__c11_atomic_",strlen("__c11_atomic"))==0)||(strlen(fun_name)>strlen("__builtin_")&&memcmp(fun_name,"__builtin_",strlen("__builtin"))==0)) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_92=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 384, 738, "struct list$1CVALUE$ph*"), "49call3.nc", 384, 739)), "49call3.nc", 384, 740);
        i_93=0;
        result_type_94=((void*)0);
        for(_o2_saved_13=params,it_95=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_13)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_13);it_95=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_13)){
            multiple_assign_var9=it_95;
            label_96=(char* )come_increment_ref_count(multiple_assign_var9->v1, "49call3.nc", 389, 741);
            node_97=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2, "49call3.nc", 389, 742);
            Value_98=node_compile(node_97,info);
            if(!Value_98) {
                                __result_obj__0 = (_Bool)0;
                (label_96 = come_decrement_ref_count(label_96, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 392, 743));
                ((node_97) ? node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 392, 744):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_92, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 392, 745);
                come_call_finalizer(sType_finalize, result_type_94, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 392, 746);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 392, 747));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_99=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 395, 748);
            __right_value0 = (void*)0;
            type__100=(struct sType* )come_increment_ref_count(solve_generics(come_value_99->type,info->generics_type,info), "49call3.nc", 397, 749);
            __right_value0 = (void*)0;
            __dec_obj73=come_value_99->type,
            come_value_99->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__100,info), "49call3.nc", 398, 751);
            come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 398, 750);
            list$1CVALUE$ph_add(come_params_92,(struct CVALUE* )come_increment_ref_count(come_value_99, "49call3.nc", 400, 752));
            __dec_obj74=result_type_94,
            result_type_94=(struct sType* )come_increment_ref_count(come_value_99->type, "49call3.nc", 402, 754);
            come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 402, 753);
            (label_96 = come_decrement_ref_count(label_96, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 405, 755));
            ((node_97) ? node_97 = come_decrement_ref_count(node_97, ((struct sNode*)node_97)->finalize, ((struct sNode*)node_97)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 405, 756):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_99, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 405, 757);
            come_call_finalizer(sType_finalize, type__100, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 405, 758);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_101=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 405, 759, "struct buffer* "), "49call3.nc", 405, 760)), "49call3.nc", 405, 761);
        buffer_append_str(buf_101,fun_name);
        buffer_append_str(buf_101,"(");
        j_102=0;
        for(_o2_saved_14=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_92, "49call3.nc", 411, 762),it_103=list$1CVALUE$ph_begin(_o2_saved_14)        ;!list$1CVALUE$ph_end(_o2_saved_14);it_103=list$1CVALUE$ph_next(_o2_saved_14)){
            buffer_append_str(buf_101,it_103->c_value);
            if(j_102!=list$1CVALUE$ph_length(come_params_92)-1) {
                buffer_append_str(buf_101,",");
            }
            j_102++;
        }
        buffer_append_str(buf_101,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_104=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 422, 763, "struct CVALUE* "), "49call3.nc", 422, 764)), "49call3.nc", 422, 765);
        __right_value0 = (void*)0;
        __dec_obj75=come_value_104->c_value,
        come_value_104->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_101), "49call3.nc", 423, 767);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 423, 766);
        atomic_builtin=strlen(fun_name)>strlen("__c11_atomic_")&&memcmp(fun_name,"__c11_atomic_",strlen("__c11_atomic_"))==0;
        if(atomic_builtin) {
            if(string_operator_equals(fun_name,"__c11_atomic_thread_fence")||string_operator_equals(fun_name,"__c11_atomic_signal_fence")||string_operator_equals(fun_name,"__c11_atomic_store")||string_operator_equals(fun_name,"__c11_atomic_store_explicit")||string_operator_equals(fun_name,"__c11_atomic_init")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj76=come_value_104->type,
                come_value_104->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 435, 768, "struct sType* "), "49call3.nc", 435, 769),(char*)come_increment_ref_count(xsprintf("void"), "49call3.nc", 435, 770),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 435, 772);
                come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 435, 771);
            }
            else if(__right_value0 = (void*)0,
({(_conditional_value_X0=(string_index(((char* )(__right_value0=__builtin_string(fun_name,"49call3.nc",437))),"compare_exchange",-1)>=0||string_operator_equals(fun_name,"__c11_atomic_is_lock_free")));            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 437, 773));
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj77=come_value_104->type,
                come_value_104->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 440, 774, "struct sType* "), "49call3.nc", 440, 775),(char*)come_increment_ref_count(xsprintf("bool"), "49call3.nc", 440, 776),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 440, 778);
                come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 440, 777);
            }
            else if(list$1CVALUE$ph_length(come_params_92)>0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                use_value_param=string_index(((char* )(__right_value0=__builtin_string(fun_name,"49call3.nc",444))),"fetch_",-1)>=0||(string_index(((char* )(__right_value1=__builtin_string(fun_name,"49call3.nc",445))),"atomic_exchange",-1)>=0&&string_index(((char* )(__right_value2=__builtin_string(fun_name,"49call3.nc",446))),"compare_exchange",-1)<0);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 444, 779));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 445, 780));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 446, 781));
                if(use_value_param&&list$1CVALUE$ph_length(come_params_92)>1) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj78=t,
                    t=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_92,1)))->type), "49call3.nc", 449, 783);
                    come_call_finalizer(sType_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 449, 782);
                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 449, 784);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj79=t,
                    t=(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_92,0)))->type), "49call3.nc", 452, 786);
                    come_call_finalizer(sType_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 452, 785);
                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 452, 787);
                    if(t->mPointerNum>0) {
                        t->mPointerNum--;
                    }
                    else if(t->mArrayPointerNum>0) {
                        t->mArrayPointerNum--;
                        if(t->mArrayPointerNum==0) {
                            t->mArrayPointerType=(_Bool)0;
                        }
                    }
                    else if(t->mArrayPointerType) {
                        t->mArrayPointerType=(_Bool)0;
                    }
                }
                t->mAtomic=(_Bool)0;
                __dec_obj80=come_value_104->type,
                come_value_104->type=(struct sType* )come_increment_ref_count(t, "49call3.nc", 469, 789);
                come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 469, 788);
                come_call_finalizer(sType_finalize, t, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 474, 790);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj81=come_value_104->type,
                come_value_104->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 472, 791, "struct sType* "), "49call3.nc", 472, 792),(char*)come_increment_ref_count(xsprintf("int"), "49call3.nc", 472, 793),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 472, 795);
                come_call_finalizer(sType_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 472, 794);
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj82=come_value_104->type,
            come_value_104->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 476, 796, "struct sType* "), "49call3.nc", 476, 797),(char*)come_increment_ref_count(xsprintf("int"), "49call3.nc", 476, 798),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 476, 800);
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 476, 799);
        }
        come_value_104->var=((void*)0);
        add_come_last_code(info,"%s",come_value_104->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_104, "49call3.nc", 482, 801));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_92, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 484, 802);
        come_call_finalizer(sType_finalize, result_type_94, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 484, 803);
        come_call_finalizer(buffer_finalize, buf_101, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 484, 804);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 484, 805);
        come_call_finalizer(CVALUE_finalize, come_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 484, 806);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 484, 807));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_92, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 808);
        come_call_finalizer(sType_finalize, result_type_94, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 809);
        come_call_finalizer(buffer_finalize, buf_101, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 810);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 811);
        come_call_finalizer(CVALUE_finalize, come_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 551, 812);
    }
    else if(string_operator_equals(fun_name,"string")) {
        __right_value0 = (void*)0;
        __dec_obj83=fun_name,
        fun_name=(char* )come_increment_ref_count(__builtin_string("__builtin_string","49call3.nc",488), "49call3.nc", 488, 814);
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 488, 813);
    }
    else if(string_operator_equals(fun_name,"wstring")) {
        __right_value0 = (void*)0;
        __dec_obj84=fun_name,
        fun_name=(char* )come_increment_ref_count(__builtin_string("__builtin_wstring","49call3.nc",491), "49call3.nc", 491, 816);
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 491, 815);
    }
    else if(string_operator_equals(fun_name,"inherit")) {
        p=info->come_fun->mName;
        version=0;
        while(*p) {
            if(*p==95&&*(p+1)==118&&xisdigit(*(p+2))) {
                p2=p+2;
                version=0;
                while(xisdigit(*p2)) {
                    version=version*10+(*p2-48);
                    p2++;
                }
                break;
            }
            else {
                p++;
            }
        }
        char real_fun_name[2048];
        memset(&real_fun_name, 0, sizeof(real_fun_name));
        memcpy(real_fun_name,info->come_fun->mName,p-info->come_fun->mName);
        real_fun_name[p-info->come_fun->mName]=0;
        for(i_105=version-1        ;i_105>=1;i_105--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i_105), "49call3.nc", 518, 817);
            if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 520, 848);
_conditional_value_X1;})) {
                __right_value0 = (void*)0;
                __dec_obj85=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"49call3.nc",521), "49call3.nc", 521, 850);
                __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 521, 849);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 522, 851));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 526, 852));
        }
        if(i_105==0) {
            __right_value0 = (void*)0;
            new_fun_name_106=(char* )come_increment_ref_count(xsprintf("%s",real_fun_name), "49call3.nc", 527, 853);
            if(__right_value0 = (void*)0,
({(_conditional_value_X2=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_106)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 529, 854);
_conditional_value_X2;})) {
                __right_value0 = (void*)0;
                __dec_obj86=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_106,"49call3.nc",530), "49call3.nc", 530, 856);
                __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 530, 855);
            }
            if(string_operator_equals(fun_name,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                                __result_obj__0 = (_Bool)1;
                (new_fun_name_106 = come_decrement_ref_count(new_fun_name_106, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 535, 857));
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 535, 858));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (new_fun_name_106 = come_decrement_ref_count(new_fun_name_106, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 538, 859));
        }
    }
    else {
        for(i_107=128        ;i_107>=1;i_107--){
            __right_value0 = (void*)0;
            new_fun_name_108=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name,i_107), "49call3.nc", 541, 860);
            if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_108)))));            come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 543, 861);
_conditional_value_X3;})) {
                __right_value0 = (void*)0;
                __dec_obj87=fun_name,
                fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_108,"49call3.nc",544), "49call3.nc", 544, 863);
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 544, 862);
                (new_fun_name_108 = come_decrement_ref_count(new_fun_name_108, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 545, 864));
                break;
            }
            (new_fun_name_108 = come_decrement_ref_count(new_fun_name_108, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 548, 865));
        }
    }
    __right_value0 = (void*)0;
    fun_109=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,fun_name,((void*)0),(_Bool)0)));
    if(fun_109==((void*)0)) {
        printf("%s %d: function not found(%s) at function call(1), so no check types and no heap management\n",info->sname,info->sline,fun_name);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_110=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 556, 866, "struct list$1CVALUE$ph*"), "49call3.nc", 556, 867)), "49call3.nc", 556, 868);
        i_111=0;
        result_type_112=((void*)0);
        for(_o2_saved_15=params,it_113=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_15)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_15);it_113=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_15)){
            multiple_assign_var10=it_113;
            label_114=(char* )come_increment_ref_count(multiple_assign_var10->v1, "49call3.nc", 561, 869);
            node_115=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2, "49call3.nc", 561, 870);
            Value_116=node_compile(node_115,info);
            if(!Value_116) {
                                __result_obj__0 = (_Bool)0;
                (label_114 = come_decrement_ref_count(label_114, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 564, 871));
                ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 564, 872):(void*)0);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 564, 873);
                come_call_finalizer(sType_finalize, result_type_112, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 564, 874);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 564, 875));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_117=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 567, 876);
            __right_value0 = (void*)0;
            type__118=(struct sType* )come_increment_ref_count(solve_generics(come_value_117->type,info->generics_type,info), "49call3.nc", 569, 877);
            __right_value0 = (void*)0;
            __dec_obj88=come_value_117->type,
            come_value_117->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__118,info), "49call3.nc", 570, 879);
            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 570, 878);
            list$1CVALUE$ph_add(come_params_110,(struct CVALUE* )come_increment_ref_count(come_value_117, "49call3.nc", 572, 880));
            __dec_obj89=result_type_112,
            result_type_112=(struct sType* )come_increment_ref_count(come_value_117->type, "49call3.nc", 574, 882);
            come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 574, 881);
            (label_114 = come_decrement_ref_count(label_114, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 577, 883));
            ((node_115) ? node_115 = come_decrement_ref_count(node_115, ((struct sNode*)node_115)->finalize, ((struct sNode*)node_115)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 577, 884):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_117, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 577, 885);
            come_call_finalizer(sType_finalize, type__118, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 577, 886);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_119=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 577, 887, "struct buffer* "), "49call3.nc", 577, 888)), "49call3.nc", 577, 889);
        buffer_append_str(buf_119,fun_name);
        buffer_append_str(buf_119,"(");
        j_120=0;
        for(_o2_saved_16=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_110, "49call3.nc", 583, 890),it_121=list$1CVALUE$ph_begin(_o2_saved_16)        ;!list$1CVALUE$ph_end(_o2_saved_16);it_121=list$1CVALUE$ph_next(_o2_saved_16)){
            buffer_append_str(buf_119,it_121->c_value);
            if(j_120!=list$1CVALUE$ph_length(come_params_110)-1) {
                buffer_append_str(buf_119,",");
            }
            j_120++;
        }
        buffer_append_str(buf_119,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_122=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 594, 891, "struct CVALUE* "), "49call3.nc", 594, 892)), "49call3.nc", 594, 893);
        __right_value0 = (void*)0;
        __dec_obj90=come_value_122->c_value,
        come_value_122->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_119), "49call3.nc", 595, 895);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 595, 894);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj91=come_value_122->type,
        come_value_122->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "49call3.nc", 596, 896, "struct sType* "), "49call3.nc", 596, 897),(char*)come_increment_ref_count(xsprintf("int"), "49call3.nc", 596, 898),(_Bool)0,info,(_Bool)0,0), "49call3.nc", 596, 900);
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 596, 899);
        come_value_122->var=((void*)0);
        add_come_last_code(info,"%s",come_value_122->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_122, "49call3.nc", 601, 901));
                __result_obj__0 = (_Bool)1;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 603, 902);
        come_call_finalizer(sType_finalize, result_type_112, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 603, 903);
        come_call_finalizer(buffer_finalize, buf_119, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 603, 904);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 603, 905);
        come_call_finalizer(CVALUE_finalize, come_value_122, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 603, 906);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 603, 907));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 606, 908);
        come_call_finalizer(sType_finalize, result_type_112, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 606, 909);
        come_call_finalizer(buffer_finalize, buf_119, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 606, 910);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 606, 911);
        come_call_finalizer(CVALUE_finalize, come_value_122, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 606, 912);
    }
    __right_value0 = (void*)0;
    result_type_123=(struct sType* )come_increment_ref_count(sType_clone(fun_109->mResultType), "49call3.nc", 606, 913);
    result_type_123->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "49call3.nc", 609, 914, "struct list$1sType$ph*"), "49call3.nc", 609, 915)), "49call3.nc", 609, 916);
    for(_o2_saved_17=(struct list$1sType$ph*)come_increment_ref_count(fun_109->mParamTypes, "49call3.nc", 610, 917),it_124=list$1sType$ph_begin(_o2_saved_17)    ;!list$1sType$ph_end(_o2_saved_17);it_124=list$1sType$ph_next(_o2_saved_17)){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        it2_=(struct sType* )come_increment_ref_count(solve_generics(((struct sType* )(__right_value0=sType_clone(it_124))),info->generics_type,info), "49call3.nc", 611, 918);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 611, 919);
        __right_value0 = (void*)0;
        it2=(struct sType* )come_increment_ref_count(solve_method_generics(it2_,info), "49call3.nc", 612, 920);
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(sType_clone(it2), "49call3.nc", 613, 921));
        come_call_finalizer(sType_finalize, it2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 616, 922);
        come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 616, 923);
    }
    __right_value0 = (void*)0;
    result_type_=(struct sType* )come_increment_ref_count(solve_generics(result_type_123,info->generics_type,info), "49call3.nc", 616, 924);
    __right_value0 = (void*)0;
    __dec_obj92=result_type_123,
    result_type_123=(struct sType* )come_increment_ref_count(solve_method_generics(result_type_,info), "49call3.nc", 617, 926);
    come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 617, 925);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params_125=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "49call3.nc", 619, 927, "struct list$1CVALUE$ph*"), "49call3.nc", 619, 928)), "49call3.nc", 619, 929);
    for(i_126=0    ;i_126<list$1sType$ph_length(fun_109->mParamTypes)-(((method_block)?(2):(0)));i_126++){
        list$1CVALUE$ph_add(come_params_125,((void*)0));
    }
    for(_o2_saved_18=params,it_127=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_18)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_18);it_127=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_18)){
        multiple_assign_var11=it_127;
        label_128=(char* )come_increment_ref_count(multiple_assign_var11->v1, "49call3.nc", 626, 930);
        node_129=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2, "49call3.nc", 626, 931);
        if(fun_109->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")) {
        }
        else if(label_128) {
            Value_130=node_compile(node_129,info);
            if(!Value_130) {
                                __result_obj__0 = (_Bool)0;
                (label_128 = come_decrement_ref_count(label_128, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 632, 932));
                ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 632, 933):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 632, 934));
                come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 632, 935);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 632, 936);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 632, 937);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 632, 938);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 632, 939);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_131=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 635, 940);
            __right_value0 = (void*)0;
            type__132=(struct sType* )come_increment_ref_count(solve_generics(come_value_131->type,info->generics_type,info), "49call3.nc", 637, 941);
            __right_value0 = (void*)0;
            __dec_obj93=come_value_131->type,
            come_value_131->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__132,info), "49call3.nc", 638, 943);
            come_call_finalizer(sType_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 638, 942);
            check=(_Bool)0;
            n_133=0;
            for(_o2_saved_19=(struct list$1char$ph*)come_increment_ref_count(fun_109->mParamNames, "49call3.nc", 642, 944),it_135=list$1char$ph_begin(_o2_saved_19)            ;!list$1char$ph_end(_o2_saved_19);it_135=list$1char$ph_next(_o2_saved_19)){
                if(string_operator_equals(label_128,it_135)) {
                    check=(_Bool)1;
                    break;
                }
                n_133++;
            }
            if(!check) {
                err_msg(info,"invalid label name(%s)",label_128);
            }
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_133)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 655, 945);
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(n_133)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,n_133))),come_value_131->type,come_value_131,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 656, 946));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 656, 947));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 656, 948));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 656, 949);
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_133)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,n_133)))->mHeap&&come_value_131->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 658, 950);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 658, 951);
_conditional_value_X1;})) {
                __right_value0 = (void*)0;
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_133))),come_value_131->type,come_value_131,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 659, 952);
            }
            list$1CVALUE$ph_replace(come_params_125,n_133,(struct CVALUE* )come_increment_ref_count(come_value_131, "49call3.nc", 662, 961));
            come_call_finalizer(CVALUE_finalize, come_value_131, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 664, 962);
            come_call_finalizer(sType_finalize, type__132, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 664, 963);
            come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 664, 964);
        }
        (label_128 = come_decrement_ref_count(label_128, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 666, 965));
        ((node_129) ? node_129 = come_decrement_ref_count(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 666, 966):(void*)0);
    }
    i_138=0;
    for(_o2_saved_20=params,it_139=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_20)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_20);it_139=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_20)){
        multiple_assign_var12=it_139;
        label_140=(char* )come_increment_ref_count(multiple_assign_var12->v1, "49call3.nc", 668, 967);
        node_141=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2, "49call3.nc", 668, 968);
        if(fun_109->mVarArgs||string_operator_equals(fun_name,"__builtin_va_start")) {
            Value_142=node_compile(node_141,info);
            if(!Value_142) {
                                __result_obj__0 = (_Bool)0;
                (label_140 = come_decrement_ref_count(label_140, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 672, 969));
                ((node_141) ? node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 672, 970):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 672, 971));
                come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 672, 972);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 672, 973);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 672, 974);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 672, 975);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 672, 976);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_143=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 675, 977);
            __right_value0 = (void*)0;
            type__144=(struct sType* )come_increment_ref_count(solve_generics(come_value_143->type,info->generics_type,info), "49call3.nc", 677, 978);
            __right_value0 = (void*)0;
            __dec_obj95=come_value_143->type,
            come_value_143->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__144,info), "49call3.nc", 678, 980);
            come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 678, 979);
            while((_Bool)1) {
                if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_125,i_138)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 681, 981);
_conditional_value_X0;})) {
                    break;
                }
                else {
                    i_138++;
                }
            }
            if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_138)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 689, 982);
_conditional_value_X1;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_138)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i_138))),come_value_143->type,come_value_143,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 690, 983));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 690, 984));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 690, 985));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 690, 986);
            }
            list$1CVALUE$ph_replace(come_params_125,i_138,(struct CVALUE* )come_increment_ref_count(come_value_143, "49call3.nc", 693, 987));
            i_138++;
            come_call_finalizer(CVALUE_finalize, come_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 727, 988);
            come_call_finalizer(sType_finalize, type__144, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 727, 989);
        }
        else if(label_140) {
        }
        else {
            Value_145=node_compile(node_141,info);
            if(!Value_145) {
                                __result_obj__0 = (_Bool)0;
                (label_140 = come_decrement_ref_count(label_140, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 700, 990));
                ((node_141) ? node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 700, 991):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 700, 992));
                come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 700, 993);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 700, 994);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 700, 995);
                come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 700, 996);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 700, 997);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_146=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 703, 998);
            __right_value0 = (void*)0;
            type__147=(struct sType* )come_increment_ref_count(solve_generics(come_value_146->type,info->generics_type,info), "49call3.nc", 705, 999);
            __right_value0 = (void*)0;
            __dec_obj96=come_value_146->type,
            come_value_146->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__147,info), "49call3.nc", 706, 1001);
            come_call_finalizer(sType_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 706, 1000);
            while((_Bool)1) {
                if(__right_value0 = (void*)0,
({(_conditional_value_X2=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_125,i_138)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 709, 1002);
_conditional_value_X2;})) {
                    break;
                }
                else {
                    i_138++;
                }
            }
            if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_138)))));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 717, 1003);
_conditional_value_X3;})) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_138)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i_138))),come_value_146->type,come_value_146,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 718, 1004));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 718, 1005));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 718, 1006));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 718, 1007);
            }
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X4=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_138)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_138)))->mHeap&&come_value_146->type->mHeap));            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 720, 1008);
            come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 720, 1009);
_conditional_value_X4;})) {
                __right_value0 = (void*)0;
                std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_138))),come_value_146->type,come_value_146,info);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 721, 1010);
            }
            list$1CVALUE$ph_replace(come_params_125,i_138,(struct CVALUE* )come_increment_ref_count(come_value_146, "49call3.nc", 724, 1011));
            i_138++;
            come_call_finalizer(CVALUE_finalize, come_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 727, 1012);
            come_call_finalizer(sType_finalize, type__147, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 727, 1013);
        }
        (label_140 = come_decrement_ref_count(label_140, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 729, 1014));
        ((node_141) ? node_141 = come_decrement_ref_count(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 729, 1015):(void*)0);
    }
    while((_Bool)1) {
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_125,i_138)))==((void*)0)));        come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 730, 1016);
_conditional_value_X0;})) {
            break;
        }
        else {
            i_138++;
        }
    }
    if(list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_109->mParamTypes)) {
        for(;i_138<list$1sType$ph_length(fun_109->mParamTypes)-(((method_block)?(2):(0)));i_138++){
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            default_param=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value0=list$1char$ph_operator_load_element(fun_109->mParamDefaultParametors,i_138))), "49call3.nc", 741, 1035, "char* "), "49call3.nc", 741, 1036);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 741, 1037));
            __right_value0 = (void*)0;
            param_name=((char* )(__right_value0=list$1char$ph_operator_load_element(fun_109->mParamNames,i_138)));
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_125,i_138)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 744, 1038);
_conditional_value_X0;})) {
                source=(struct buffer* )come_increment_ref_count(info->source, "49call3.nc", 745, 1039);
                p_150=info->p;
                head=info->head;
                sline=info->sline;
                __right_value0 = (void*)0;
                __dec_obj97=info->source,
                info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(default_param), "49call3.nc", 750, 1041);
                come_call_finalizer(buffer_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 750, 1040);
                if(info->p==((void*)0)) {
                    info->p=info->source->buf;
                }
                info->p=info->source->buf;
                info->head=info->source->buf;
                no_output_come_code_151=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                __right_value0 = (void*)0;
                node_152=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "49call3.nc", 760, 1042);
                Value_153=node_compile(node_152,info);
                if(!Value_153) {
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 763, 1043);
                    ((node_152) ? node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 763, 1044):(void*)0);
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 763, 1045));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 763, 1046));
                    come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 763, 1047);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 763, 1048);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 763, 1049);
                    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 763, 1050);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 763, 1051);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                info->no_output_come_code=no_output_come_code_151;
                __dec_obj98=info->source,
                info->source=(struct buffer* )come_increment_ref_count(source, "49call3.nc", 768, 1053);
                come_call_finalizer(buffer_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 768, 1052);
                if(info->p==((void*)0)) {
                    info->p=info->source->buf;
                }
                info->p=info->source->buf;
                info->p=p_150;
                info->head=head;
                info->sline=sline;
                __right_value0 = (void*)0;
                come_value_154=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 777, 1054);
                __right_value0 = (void*)0;
                type__155=(struct sType* )come_increment_ref_count(solve_generics(come_value_154->type,info->generics_type,info), "49call3.nc", 779, 1055);
                __right_value0 = (void*)0;
                __dec_obj99=come_value_154->type,
                come_value_154->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__155,info), "49call3.nc", 780, 1057);
                come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 780, 1056);
                if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_138)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 782, 1058);
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("\%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_138)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i_138))),come_value_154->type,come_value_154,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 783, 1059));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 783, 1060));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 783, 1061));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 783, 1062);
                }
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X2=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_138)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_138)))->mHeap&&come_value_154->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 785, 1063);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 785, 1064);
_conditional_value_X2;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_138))),come_value_154->type,come_value_154,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 786, 1065);
                }
                list$1CVALUE$ph_replace(come_params_125,i_138,(struct CVALUE* )come_increment_ref_count(come_value_154, "49call3.nc", 788, 1066));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 796, 1067);
                ((node_152) ? node_152 = come_decrement_ref_count(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 796, 1068):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value_154, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 796, 1069);
                come_call_finalizer(sType_finalize, type__155, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 796, 1070);
            }
            else {
                if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_125,i_138)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 791, 1071);
_conditional_value_X3;})) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_109->mName,i_138);
                                        __result_obj__0 = (_Bool)1;
                    (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 793, 1072));
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 793, 1073));
                    come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 793, 1074);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 793, 1075);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 793, 1076);
                    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 793, 1077);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 793, 1078);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 797, 1079));
        }
    }
    if(list$1sType$ph_length(fun_109->mParamTypes)-(((method_block)?(2):(0)))!=list$1CVALUE$ph_length(come_params_125)&&!fun_109->mVarArgs&&string_operator_not_equals(fun_name,"__builtin_va_start")&&string_operator_not_equals(fun_name,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name,list$1sType$ph_length(fun_109->mParamTypes),list$1tuple2$2char$phsNode$ph$ph_length(params));
                __result_obj__0 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 802, 1080));
        come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 802, 1081);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 802, 1082);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 802, 1083);
        come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 802, 1084);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 802, 1085);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(method_block) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "49call3.nc", 806, 1088, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "49call3.nc", 806, 1086, "struct sCurrentNode* "), "49call3.nc", 806, 1087),info))), "49call3.nc", 806, 1089);
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode_finalize;
        _inf_value1->clone=(void*)sCurrentNode_clone;
        _inf_value1->compile=(void*)sCurrentNode_compile;
        _inf_value1->sline=(void*)sCurrentNode_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode_kind;
        _inf_value1->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value1, "49call3.nc", 806, 1097);
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 806, 1098);
        Value_156=node_compile(current_stack_frame_node,info);
        if(!Value_156) {
                        __result_obj__0 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 809, 1099):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 809, 1100));
            come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 809, 1101);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 809, 1102);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 809, 1103);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 809, 1104);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 809, 1105);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value_157=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "49call3.nc", 812, 1106);
        __right_value0 = (void*)0;
        type__158=(struct sType* )come_increment_ref_count(solve_generics(come_value_157->type,info->generics_type,info), "49call3.nc", 813, 1107);
        __right_value0 = (void*)0;
        __dec_obj101=come_value_157->type,
        come_value_157->type=(struct sType* )come_increment_ref_count(solve_method_generics(type__158,info), "49call3.nc", 814, 1109);
        come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 814, 1108);
        list$1CVALUE$ph_push_back(come_params_125,(struct CVALUE* )come_increment_ref_count(come_value_157, "49call3.nc", 815, 1110));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 817, 1111, "struct buffer* "), "49call3.nc", 817, 1112)), "49call3.nc", 817, 1113);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun_109->mParamTypes,-1)))), "49call3.nc", 818, 1114);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 818, 1115);
        __right_value0 = (void*)0;
        class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "49call3.nc", 820, 1116);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        ((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(method_block_type->mParamTypes,0)))->mClass=((struct sClass* )(__right_value1=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 822, 1155);
        current_stack_frame_struct=info->current_stack_frame_struct;
        __right_value0 = (void*)0;
        info->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
        info->num_method_block++;
        num_method_block=info->num_method_block;
        if(string_operator_not_equals(method_block_type->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name);
                        __result_obj__0 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 832, 1156):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_157, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1157);
            come_call_finalizer(sType_finalize, type__158, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1158);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1159);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1160);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 832, 1161));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 832, 1162));
            come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1163);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1164);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1165);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1166);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 832, 1167);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type_159=(struct sType* )come_increment_ref_count(sType_clone(method_block_type->mResultType), "49call3.nc", 835, 1168);
        result_type_159->mStatic=(_Bool)0;
        __right_value0 = (void*)0;
        result_type2_=(struct sType* )come_increment_ref_count(solve_generics(result_type_159,info->generics_type,info), "49call3.nc", 837, 1169);
        __right_value0 = (void*)0;
        result_type2=(struct sType* )come_increment_ref_count(solve_method_generics(result_type2_,info), "49call3.nc", 838, 1170);
        __right_value0 = (void*)0;
        param_types_160=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_block_type->mParamTypes), "49call3.nc", 839, 1171);
        param_names=method_block_type->mParamNames;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        all_alhabet_sname=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 842, 1172, "struct buffer* "), "49call3.nc", 842, 1173)), "49call3.nc", 842, 1174);
        {
            p_161=info->sname;
            while(*p_161) {
                if(xisalnum(*p_161)) {
                    buffer_append_char(all_alhabet_sname,*p_161++);
                }
                else {
                    p_161++;
                }
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buffer_append_format(method_block2,"%s fun_block%d_%s(",((char* )(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char* )(__right_value1=buffer_to_string(all_alhabet_sname))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 855, 1175));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 855, 1176));
        i_138=0;
        for(_o2_saved_21=(struct list$1sType$ph*)come_increment_ref_count(param_types_160, "49call3.nc", 858, 1177),it_162=list$1sType$ph_begin(_o2_saved_21)        ;!list$1sType$ph_end(_o2_saved_21);it_162=list$1sType$ph_next(_o2_saved_21)){
            param_type=(struct sType* )come_increment_ref_count(it_162, "49call3.nc", 859, 1178);
            if(i_138==0) {
                __right_value0 = (void*)0;
                param_name_163=(char* )come_increment_ref_count(xsprintf("parent"), "49call3.nc", 862, 1179);
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name_163,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 864, 1180));
                (param_name_163 = come_decrement_ref_count(param_name_163, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 883, 1181));
            }
            else if(i_138==1) {
                __right_value0 = (void*)0;
                param_name_164=(char* )come_increment_ref_count(xsprintf("it"), "49call3.nc", 867, 1182);
                __right_value0 = (void*)0;
                param_type2_=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "49call3.nc", 869, 1183);
                __right_value0 = (void*)0;
                param_type2=(struct sType* )come_increment_ref_count(solve_method_generics(param_type2_,info), "49call3.nc", 870, 1184);
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type2,param_name_164,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 872, 1185));
                (param_name_164 = come_decrement_ref_count(param_name_164, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 883, 1186));
                come_call_finalizer(sType_finalize, param_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 883, 1187);
                come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 883, 1188);
            }
            else {
                __right_value0 = (void*)0;
                param_name_165=(char* )come_increment_ref_count(xsprintf("it%d",i_138), "49call3.nc", 875, 1189);
                __right_value0 = (void*)0;
                param_type2__166=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "49call3.nc", 877, 1190);
                __right_value0 = (void*)0;
                param_type2_167=(struct sType* )come_increment_ref_count(solve_method_generics(param_type2__166,info), "49call3.nc", 878, 1191);
                __right_value0 = (void*)0;
                buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type2_167,param_name_165,info))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 880, 1192));
                (param_name_165 = come_decrement_ref_count(param_name_165, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 883, 1193));
                come_call_finalizer(sType_finalize, param_type2__166, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 883, 1194);
                come_call_finalizer(sType_finalize, param_type2_167, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 883, 1195);
            }
            if(i_138!=list$1sType$ph_length(param_types_160)-1) {
                buffer_append_str(method_block2,",");
            }
            i_138++;
            come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 889, 1196);
        }
        buffer_append_str(method_block2,")\n");
        __right_value0 = (void*)0;
        buffer_append_str(method_block2,((char* )(__right_value0=buffer_to_string(method_block))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 891, 1197));
        source3=(struct buffer* )come_increment_ref_count(info->source, "49call3.nc", 893, 1198);
        p_168=info->p;
        head_169=info->head;
        sline_170=info->sline;
        __dec_obj102=info->source,
        info->source=(struct buffer* )come_increment_ref_count(method_block2, "49call3.nc", 898, 1200);
        come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 898, 1199);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline;
        __right_value0 = (void*)0;
        node_171=(struct sNode*)come_increment_ref_count(parse_function(info), "49call3.nc", 906, 1201);
        Value_172=node_compile(node_171,info);
        if(!Value_172) {
                        __result_obj__0 = (_Bool)0;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 909, 1202):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_157, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1203);
            come_call_finalizer(sType_finalize, type__158, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1204);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1205);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1206);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 909, 1207));
            come_call_finalizer(sType_finalize, result_type_159, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1208);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1209);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1210);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_160, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1211);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1212);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1213);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1214);
            ((node_171) ? node_171 = come_decrement_ref_count(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 909, 1215):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 909, 1216));
            come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1217);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1218);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1219);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1220);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 909, 1221);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        method_block_name=(char* )come_increment_ref_count(xsprintf("fun_block%d_%s",num_method_block,((char* )(__right_value0=buffer_to_string(all_alhabet_sname)))), "49call3.nc", 912, 1222);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 912, 1223));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 914, 1224, "struct CVALUE* "), "49call3.nc", 914, 1225)), "49call3.nc", 914, 1226);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        fun2=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(method_block_name,"49call3.nc",916))),((void*)0),(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 916, 1227));
        if(fun2==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name);
                        __result_obj__0 = (_Bool)1;
            ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 920, 1228):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value_157, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1229);
            come_call_finalizer(sType_finalize, type__158, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1230);
            come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1231);
            come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1232);
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 920, 1233));
            come_call_finalizer(sType_finalize, result_type_159, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1234);
            come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1235);
            come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1236);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types_160, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1237);
            come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1238);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1239);
            come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1240);
            ((node_171) ? node_171 = come_decrement_ref_count(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 920, 1241):(void*)0);
            (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 920, 1242));
            come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1243);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 920, 1244));
            come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1245);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1246);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1247);
            come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1248);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 920, 1249);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        method_block_type2=fun2->mLambdaType;
        __right_value0 = (void*)0;
        __dec_obj103=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("(void*)%s",method_block_name), "49call3.nc", 925, 1251);
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 925, 1250);
        __right_value0 = (void*)0;
        __dec_obj104=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(method_block_type2), "49call3.nc", 926, 1253);
        come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 926, 1252);
        come_value2->var=((void*)0);
        list$1CVALUE$ph_push_back(come_params_125,(struct CVALUE* )come_increment_ref_count(come_value2, "49call3.nc", 929, 1254));
        __dec_obj105=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "49call3.nc", 931, 1256);
        come_call_finalizer(buffer_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 931, 1255);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->p=p_168;
        info->head=head_169;
        info->sline=sline_170;
        info->current_stack_frame_struct=current_stack_frame_struct;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 943, 1257):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value_157, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1258);
        come_call_finalizer(sType_finalize, type__158, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1259);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1260);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1261);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 943, 1262));
        come_call_finalizer(sType_finalize, result_type_159, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1263);
        come_call_finalizer(sType_finalize, result_type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1264);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1265);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_160, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1266);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1267);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1268);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1269);
        ((node_171) ? node_171 = come_decrement_ref_count(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 943, 1270):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 943, 1271));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 943, 1272);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf_173=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 943, 1273, "struct buffer* "), "49call3.nc", 943, 1274)), "49call3.nc", 943, 1275);
    if(string_operator_equals(fun_name,"__isoc23_strtoll")) {
        __right_value0 = (void*)0;
        __dec_obj106=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoll"), "49call3.nc", 946, 1277);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 946, 1276);
    }
    else if(string_operator_equals(fun_name,"__isoc23_strtoul")) {
        __right_value0 = (void*)0;
        __dec_obj107=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoul"), "49call3.nc", 949, 1279);
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 949, 1278);
    }
    else if(string_operator_equals(fun_name,"__isoc23_strtoull")) {
        __right_value0 = (void*)0;
        __dec_obj108=fun_name,
        fun_name=(char*)come_increment_ref_count(xsprintf("strtoull"), "49call3.nc", 952, 1281);
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 952, 1280);
    }
    buffer_append_str(buf_173,fun_name);
    buffer_append_str(buf_173,"(");
    j_174=0;
    for(_o2_saved_22=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_125, "49call3.nc", 971, 1282),it_175=list$1CVALUE$ph_begin(_o2_saved_22)    ;!list$1CVALUE$ph_end(_o2_saved_22);it_175=list$1CVALUE$ph_next(_o2_saved_22)){
        buffer_append_str(buf_173,it_175->c_value);
        if(j_174!=list$1CVALUE$ph_length(come_params_125)-1) {
            buffer_append_str(buf_173,",");
        }
        j_174++;
    }
    buffer_append_str(buf_173,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value_176=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "49call3.nc", 982, 1283, "struct CVALUE* "), "49call3.nc", 982, 1284)), "49call3.nc", 982, 1285);
    __right_value0 = (void*)0;
    __dec_obj109=come_value_176->c_value,
    come_value_176->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_173), "49call3.nc", 983, 1287);
    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 983, 1286);
    __right_value0 = (void*)0;
    __dec_obj110=come_value_176->type,
    come_value_176->type=(struct sType* )come_increment_ref_count(sType_clone(result_type_123), "49call3.nc", 984, 1289);
    come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 984, 1288);
    if(come_value_176->type) {
        come_value_176->type->mStatic=(_Bool)0;
    }
    come_value_176->var=((void*)0);
    if(fun_109->mResultType->mHeap) {
        append_object_to_right_values(come_value_176,result_type_123,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    }
    add_come_last_code(info,"%s",come_value_176->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_176, "49call3.nc", 996, 1290));
    info->calling_fun=fun_109;
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 1000, 1291));
    come_call_finalizer(sType_finalize, result_type_123, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1292);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1293);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1294);
    come_call_finalizer(sType_finalize, result_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1295);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_125, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1296);
    come_call_finalizer(buffer_finalize, buf_173, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1297);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1298);
    come_call_finalizer(CVALUE_finalize, come_value_176, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1000, 1299);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
    }
        neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 6);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 11);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1513, 12, "struct list$1tuple2$2char$phsNode$ph$ph*"), "/usr/local/include/neo-c.h", 1513, 16)), "/usr/local/include/neo-c.h", 1513, 17);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1518, 53));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1521, 54));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 55);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 56);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 57);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 10);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 9);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 7));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 8):(void*)0);
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
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 13);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 14);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 15);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj2;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_0;
    struct tuple2$2char$phsNode$ph* __dec_obj3;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_1;
    struct tuple2$2char$phsNode$ph* __dec_obj4;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 18);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1534, 19, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1534, 20);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj2=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 22);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 21);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1544, 23, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1544, 24);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj3=litem_0->item,
        litem_0->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 26);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 25);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1554, 27, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1554, 28);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj4=litem_1->item,
        litem_1->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 30);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 29);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 31);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj5  ;
    struct sNode* __dec_obj6;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 32);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 33);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 34, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 35);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj5=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 36, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 38);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 37);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 47);
        (__dec_obj6 ? __dec_obj6 = come_decrement_ref_count(__dec_obj6, ((struct sNode*)__dec_obj6)->finalize, ((struct sNode*)__dec_obj6)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 46) :0);
    }
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 48);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 51);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 52);
    return __result_obj__0;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 39);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 40):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 41, "struct sNode*"), "sNode_clone", 5, 42);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 43);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 44):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 45):(void*)0);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 49));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 50):(void*)0);
    }
        neo_current_frame = fr.prev;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 58);
    }
        neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 93);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 92);
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 61);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 62);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 64);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 65);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 66):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 67):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 68));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 69));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 70));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 71));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 72));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 73));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 74));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 75));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 78);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 79);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 81);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 82);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 83);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 84));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 85);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 88);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 89);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 90):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 91);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 63);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 77);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 76):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 80);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 87);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 86));
    }
            neo_current_frame = fr.prev;
}

static void sFunCallNode_finalize(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunCallNode_finalize", 2, 99));
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "sFunCallNode_finalize", 3, 100));
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_finalize}", 4, 101);
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_finalize}", 5, 102);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_finalize}", 6, 103);
    }
        neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj11  ;
    struct sType*  __dec_obj12  ;
    struct list$1sType$ph* __dec_obj16;
    struct sType*  __dec_obj17  ;
    struct sNode* __dec_obj18;
    struct sNode* __dec_obj19;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    struct list$1sNode$ph* __dec_obj31;
    struct list$1sNode$ph* __dec_obj32;
    struct list$1int$* __dec_obj33;
    struct list$1int$* __dec_obj34;
    struct sType*  __dec_obj35  ;
    char*  __dec_obj36  ;
    struct list$1sType$ph* __dec_obj37;
    struct list$1char$ph* __dec_obj41;
    struct sType*  __dec_obj42  ;
    struct sNode* __dec_obj43;
    struct list$1sNode$ph* __dec_obj44;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 115);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 116);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 117, "struct sType* "), "sType_clone", 5, 118);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 120);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 119);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 122);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 121);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 151);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 150);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 153);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 152);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 155);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 154) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 157);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 156) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 158, "char* "), "sType_clone", 14, 160);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 159);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 161, "char* "), "sType_clone", 15, 163);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 162);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 164, "char* "), "sType_clone", 16, 166);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 165);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 167, "char* "), "sType_clone", 17, 169);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 168);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 170, "char* "), "sType_clone", 18, 172);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 171);
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
        __dec_obj25=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 173, "char* "), "sType_clone", 49, 175);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 174);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 176, "char* "), "sType_clone", 51, 178);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 177);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 179, "char* "), "sType_clone", 54, 181);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 180);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 211);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 210);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 213);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 212);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 233);
        come_call_finalizer(list$1int$_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 232);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 235);
        come_call_finalizer(list$1int$_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 234);
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
        __dec_obj35=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 237);
        come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 236);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 238, "char* "), "sType_clone", 67, 240);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 239);
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
        __dec_obj37=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 242);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 241);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj41=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 274);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 273);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj42=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 276);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 275);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj43=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 278);
        (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 277) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj44=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 280);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 279);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 281);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 282);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 283);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 123);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 124);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 125, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 129)), "/usr/local/include/neo-c.h", 1513, 130);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 145));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 146));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 147);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 148);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 149);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 126);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 128);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj13  ;
    struct list_item$1sType$ph* litem_2;
    struct sType*  __dec_obj14  ;
    struct list_item$1sType$ph* litem_3;
    struct sType*  __dec_obj15  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 131);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 132, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 133);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 135);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 134);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 136, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 137);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj14=litem_2->item,
        litem_2->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 139);
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 138);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 140, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 141);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj15=litem_3->item,
        litem_3->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 143);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 142);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 144);
    neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 182);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 183);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 184, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 188)), "/usr/local/include/neo-c.h", 1513, 189);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 204));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 205));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 206);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 207);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 208);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 185);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 186);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 187);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj28;
    struct list_item$1sNode$ph* litem_4;
    struct sNode* __dec_obj29;
    struct list_item$1sNode$ph* litem_5;
    struct sNode* __dec_obj30;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 190):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 191, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 192);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 194);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 193) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 195, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 196);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj29=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 198);
        (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 197) :0);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 199, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 200);
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj30=litem_5->item,
        litem_5->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 202);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 201) :0);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 203):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 209);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 214);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 215);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 216, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 220)), "/usr/local/include/neo-c.h", 1513, 221);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 228);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 229);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 230);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 217);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 218);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 219);
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
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 222, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 223);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 224, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 225);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 226, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 227);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail->next=litem_7;
        self->tail=litem_7;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 231);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 243);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 244);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 245, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 249)), "/usr/local/include/neo-c.h", 1513, 250);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 265, "char* "), "/usr/local/include/neo-c.h", 1518, 266));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 267, "char* "), "/usr/local/include/neo-c.h", 1521, 268));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 269);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 270);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 271);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 246);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 247);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 248);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj38  ;
    struct list_item$1char$ph* litem_8;
    char*  __dec_obj39  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj40  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 251));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 252, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 253);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj38=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 255);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 254);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 256, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 257);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj39=litem_8->item,
        litem_8->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 259);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 258);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 260, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 261);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj40=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 263);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 262);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 264));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 272);
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
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 286);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 294);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 295);
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 293);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 292);
    }
            neo_current_frame = fr.prev;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 287));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 288);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 289));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 290));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 291));
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
    return self->len;
            neo_current_frame = fr.prev;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_10;
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
    memset(&result_10,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_10;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_11;
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
    memset(&result_11,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_11;
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
    struct sType*  default_value_12  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 313);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 314);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 315);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 316);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 317);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 318);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_12,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_12, "/usr/local/include/neo-c.h", 2169, 319);
    come_call_finalizer(sType_finalize, default_value_12, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 320);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 321);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_13  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 322);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 323);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 324);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 325);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 326);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 327);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_13,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_13, "/usr/local/include/neo-c.h", 2169, 328);
    come_call_finalizer(sType_finalize, default_value_13, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 329);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 330);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj46  ;
    struct list_item$1CVALUE$ph* litem_14;
    struct CVALUE*  __dec_obj47  ;
    struct list_item$1CVALUE$ph* litem_15;
    struct CVALUE*  __dec_obj48  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 338);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1619, 339, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1619, 340);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj46=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 342);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 341);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1629, 343, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1629, 344);
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        __dec_obj47=litem_14->item,
        litem_14->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 346);
        come_call_finalizer(CVALUE_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 345);
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1639, 347, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1639, 348);
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        __dec_obj48=litem_15->item,
        litem_15->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 350);
        come_call_finalizer(CVALUE_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 349);
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 351);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_16  ;
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
    memset(&result_16,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_16;
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
    struct CVALUE*  result_18  ;
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
    memset(&result_18,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_18;
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
    return self->len;
                neo_current_frame = fr.prev;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 381);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 392);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 393);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 394);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 395);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 396);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 397);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 398);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 399);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 400);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 401);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 402);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 403);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 404);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 405);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 382);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 383);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 384);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 385));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 386);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 387);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 388);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 389);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 390));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 391));
    }
            neo_current_frame = fr.prev;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsGenericsFun$p$p_finalize", 2, 412));
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 415);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 442);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 443);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 444);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 445);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 446);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 447);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 448);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 449);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 450);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 451);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 452);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 453);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 454);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 455);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 416));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 417);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 418);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 419);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 420);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 421);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 428);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 431);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 432));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 433));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 434);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 435);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 436);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 437);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 438));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 439));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 440));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 441));
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 427);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 426);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 422));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 423));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 424);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 425));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 429);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 430);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 464);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 465);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 466);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 467);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 468);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 469);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_22,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_22, "/usr/local/include/neo-c.h", 2169, 470);
    come_call_finalizer(CVALUE_finalize, default_value_22, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 471);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 472);
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
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 473);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 474);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 475);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 476);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 477);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 478);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_23,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_23, "/usr/local/include/neo-c.h", 2169, 479);
    come_call_finalizer(CVALUE_finalize, default_value_23, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 480);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 481);
    return __result_obj__0;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(self,position,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2142, 506));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 168, 507);
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
    int i_26;
    struct sType*  __dec_obj54  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2022, 484);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(struct sType* ));
            list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2037, 499));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2039, 500);
        }
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2039, 501));
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2040, 502);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_26=0;
    while(it!=((void*)0)) {
        if(position==i_26) {
            __dec_obj54=it->item,
            it->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2047, 504);
            come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2047, 503);
            break;
        }
        it=it->next;
        i_26++;
    }
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2054, 505);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj51  ;
    struct list_item$1sType$ph* litem_24;
    struct sType*  __dec_obj52  ;
    struct list_item$1sType$ph* litem_25;
    struct sType*  __dec_obj53  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 485);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1619, 486, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1619, 487);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj51=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 489);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 488);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1629, 490, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1629, 491);
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        __dec_obj52=litem_24->item,
        litem_24->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 493);
        come_call_finalizer(sType_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 492);
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1639, 494, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1639, 495);
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        __dec_obj53=litem_25->item,
        litem_25->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 497);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 496);
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 498);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_27  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_27,0,sizeof(struct sType* ));
        __result_obj__0 = result_27;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_29  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_29,0,sizeof(struct sType* ));
        __result_obj__0 = result_29;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_add"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj56  ;
    struct list_item$1CVALUE$ph* litem_41;
    struct CVALUE*  __dec_obj57  ;
    struct list_item$1CVALUE$ph* litem_42;
    struct CVALUE*  __dec_obj58  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 536);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1534, 537, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1534, 538);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj56=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 540);
        come_call_finalizer(CVALUE_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 539);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1544, 541, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1544, 542);
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        __dec_obj57=litem_41->item,
        litem_41->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 544);
        come_call_finalizer(CVALUE_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 543);
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1554, 545, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1554, 546);
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        __dec_obj58=litem_42->item,
        litem_42->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 548);
        come_call_finalizer(CVALUE_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 547);
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 549);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3175, 562));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                self->item_existance[it]=(_Bool)0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3190, 567));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3195, 568);
                }
                memset(self->items+it,0,sizeof(struct sFun* ));
                self->len--;
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                break;
            }
        }
        else {
            break;
        }
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3217, 569));
    neo_current_frame = fr.prev;
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
    it=self->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,item))||(by_pointer&&it->item==item)) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
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
        list$1char$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 564);
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
        it_47=self->head;
        i_48=0;
        while(it_47!=((void*)0)) {
            if(i_48==head) {
                self->tail=it_47->prev;
                self->tail->next=((void*)0);
            }
            if(i_48>=head) {
                prev_it_49=it_47;
                it_47=it_47->next;
                i_48++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 565);
                self->len--;
            }
            else {
                it_47=it_47->next;
                i_48++;
            }
        }
    }
    else {
        it_50=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_51=0;
        while(it_50!=((void*)0)) {
            if(i_51==head) {
                head_prev_it=it_50->prev;
            }
            if(i_51==tail) {
                tail_it=it_50;
            }
            if(i_51>=head&&i_51<tail) {
                prev_it_52=it_50;
                it_50=it_50->next;
                i_51++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 566);
                self->len--;
            }
            else {
                it_50=it_50->next;
                i_51++;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 563);
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 818);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 819);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 820);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 821);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 822);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 823);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 824);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 825);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 826);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 827);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 828);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 829);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 830);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 831);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 832);
    return __result_obj__0;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 833);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 834);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 835);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 836);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 837);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 838);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 839);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 840);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 841);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 842);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 843);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 844);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 845);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 846);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 847);
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_134  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_134,0,sizeof(char* ));
        __result_obj__0 = result_134;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_136  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
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
    memset(&result_136,0,sizeof(char* ));
        __result_obj__0 = result_136;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_replace"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    int len;
    int i;
    struct CVALUE*  default_value  ;
    struct list_item$1CVALUE$ph* it;
    int i_137;
    struct CVALUE*  __dec_obj94  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2022, 953);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(struct CVALUE* ));
            list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2037, 954));
            come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2039, 955);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2039, 956));
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2040, 957);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_137=0;
    while(it!=((void*)0)) {
        if(position==i_137) {
            __dec_obj94=it->item,
            it->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2047, 959);
            come_call_finalizer(CVALUE_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2047, 958);
            break;
        }
        it=it->next;
        i_137++;
    }
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2054, 960);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_148  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 1017);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 1018));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 1019));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2153, 1020));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 1021);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2161, 1022));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_148,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_148, "/usr/local/include/neo-c.h", 2169, 1023);
    (default_value_148 = come_decrement_ref_count(default_value_148, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 1024));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 1025));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_149  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 1026);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 1027));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 1028));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2153, 1029));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 1030);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2161, 1031));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_149,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_149, "/usr/local/include/neo-c.h", 2169, 1032);
    (default_value_149 = come_decrement_ref_count(default_value_149, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 1033));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 1034));
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 1090));
    }
            neo_current_frame = fr.prev;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_clone"; neo_current_frame = &fr;
    struct sCurrentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCurrentNode*  result  ;
    char*  __dec_obj100  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "sCurrentNode_clone", 5, 1091, "struct sCurrentNode* "), "sCurrentNode_clone", 5, 1092);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj100=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCurrentNode_clone", 7, 1093, "char* "), "sCurrentNode_clone", 7, 1095);
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "sCurrentNode_clone", 7, 1094);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCurrentNode_clone}", 9, 1096);
    neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 1117);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 1126);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 1127);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 1128);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 1129);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 1130);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 1131);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 1132);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 1133);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 1134);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 1135);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 1136);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 1137);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 1138);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 1139);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 1118));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 1123);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 1124));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 1125));
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 1122);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 1121);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 1119));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 1120);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 1140);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 1141);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 1142);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 1143);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 1144);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 1145);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 1146);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 1147);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 1148);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 1149);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 1150);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 1151);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 1152);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 1153);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 1154);
    return __result_obj__0;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo*  info  , _Bool come_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* method_generics_types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var13
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    _Bool _va_arg;
    char* p;
    int sline;
    _Bool err_flag;
    char*  label  ;
    char*  __dec_obj111  ;
    char*  __dec_obj112  ;
    _Bool no_comma;
    _Bool in_fun_param;
    _Bool type_name_exp;
    struct sNode* node;
    struct sNode* __dec_obj113;
    struct buffer*  method_block  ;
    int method_block_sline;
    char* head;
    char* tail;
    struct buffer*  __dec_obj119  ;
    int len;
    char* mem;
    struct sNode* _inf_value2;
    struct sFunCallNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* node_179;
    struct sNode* __dec_obj125;
    struct sNode* __result_obj__0;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "49call3.nc", 1006, 1300, "struct list$1sType$ph*"), "49call3.nc", 1006, 1301)), "49call3.nc", 1006, 1302);
    if(*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(*info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(*info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var13=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var13->v1, "49call3.nc", 1027, 1303);
                name=(char* )come_increment_ref_count(multiple_assign_var13->v2, "49call3.nc", 1027, 1304);
                err=multiple_assign_var13->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 1027, 1307);
                if(!err) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(method_generics_types,(struct sType* )come_increment_ref_count(sType_clone(type), "49call3.nc", 1034, 1308));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1036, 1309);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 1036, 1310));
            }
        }
    }
    expected_next_character(40,info);
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "49call3.nc", 1043, 1311, "struct list$1tuple2$2char$phsNode$ph$ph*"), "49call3.nc", 1043, 1312)), "49call3.nc", 1043, 1313);
    _va_arg=info->va_arg;
    if(charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p=info->p;
        sline=info->sline;
        err_flag=(_Bool)0;
        __right_value0 = (void*)0;
        label=(char* )come_increment_ref_count(__builtin_string("","49call3.nc",1061), "49call3.nc", 1061, 1314);
        if(xisalpha(*info->p)||*info->p==95) {
            __right_value0 = (void*)0;
            __dec_obj111=label,
            label=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "49call3.nc", 1063, 1316);
            __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 1063, 1315);
            err_flag=(_Bool)1;
        }
        if(err_flag==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj112=label,
            label=((void*)0);
            __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "49call3.nc", 1072, 1317);
            info->p=p;
            info->sline=sline;
        }
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        type_name_exp=(_Bool)0;
        if(charp_operator_equals(fun_name,"__builtin_types_compatible_p")) {
            type_name_exp=(_Bool)1;
        }
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp), "49call3.nc", 1090, 1318);
        __right_value0 = (void*)0;
        __dec_obj113=node,
        node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "49call3.nc", 1092, 1319),info), "49call3.nc", 1092, 1321);
        (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0, (void*)0, "49call3.nc", 1092, 1320) :0);
        info->no_comma=no_comma;
        info->in_fun_param=in_fun_param;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "49call3.nc", 1097, 1336, "struct tuple2$2char$phsNode$ph"), "49call3.nc", 1097, 1346),(char* )come_increment_ref_count(label, "49call3.nc", 1097, 1347),(struct sNode*)come_increment_ref_count(node, "49call3.nc", 1097, 1348)), "49call3.nc", 1097, 1349));
        skip_spaces_and_lf(info);
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 1109, 1350));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 1109, 1351):(void*)0);
            break;
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 1113, 1352));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "49call3.nc", 1113, 1353):(void*)0);
    }
    info->va_arg=_va_arg;
    skip_spaces_and_lf(info);
    method_block=((void*)0);
    method_block_sline=0;
    if(*info->p==123) {
        head=info->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "49call3.nc", 1123, 1354));
        tail=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj119=method_block,
        method_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "49call3.nc", 1127, 1355, "struct buffer* "), "49call3.nc", 1127, 1356)), "49call3.nc", 1127, 1358);
        come_call_finalizer(buffer_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc", 1127, 1357);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "49call3.nc", 1130, 1359, "char*"), "49call3.nc", 1130, 1360);
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "49call3.nc", 1138, 1361));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "49call3.nc", 1140, 1366, "struct sNode");
    _inf_obj_value2=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode* )come_increment_ref_count((struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), "49call3.nc", 1140, 1362, "struct sFunCallNode* "), "49call3.nc", 1140, 1363),fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types, "49call3.nc", 1140, 1364),(struct buffer* )come_increment_ref_count(method_block, "49call3.nc", 1140, 1365),method_block_sline,info))), "49call3.nc", 1140, 1367);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFunCallNode_finalize;
    _inf_value2->clone=(void*)sFunCallNode_clone;
    _inf_value2->compile=(void*)sFunCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sFunCallNode_terminated;
    _inf_value2->kind=(void*)sFunCallNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    node_179=(struct sNode*)come_increment_ref_count(_inf_value2, "49call3.nc", 1140, 1383);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 1140, 1384);
    __right_value0 = (void*)0;
    __dec_obj125=node_179,
    node_179=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_179, "49call3.nc", 1142, 1385),info), "49call3.nc", 1142, 1387);
    (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0, (void*)0, "49call3.nc", 1142, 1386) :0);
    skip_spaces_and_lf(info);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_179, "49call3.nc", 1146, 1388);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1146, 1389);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1146, 1390);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1146, 1391);
    ((node_179) ? node_179 = come_decrement_ref_count(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 1,(void*)0, "49call3.nc", 1146, 1392):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "49call3.nc", 1146, 1393):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1305);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1306));
    }
                    neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj114;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_177;
    struct tuple2$2char$phsNode$ph* __dec_obj115;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_178;
    struct tuple2$2char$phsNode$ph* __dec_obj116;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 1322);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1323, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1619, 1324);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj114=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1326);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1325);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_177=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1327, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1629, 1328);
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        __dec_obj115=litem_177->item,
        litem_177->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1330);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1329);
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        __right_value0 = (void*)0;
        litem_178=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1331, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1639, 1332);
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        __dec_obj116=litem_178->item,
        litem_178->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1334);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1333);
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 1335);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj117  ;
    struct sNode* __dec_obj118;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj117=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3913, 1338);
    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 1337);
    __dec_obj118=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3914, 1340);
    (__dec_obj118 ? __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3914, 1339) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3916, 1341);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 1342);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3916, 1343));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3916, 1344):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 1345);
    return __result_obj__0;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunCallNode_clone"; neo_current_frame = &fr;
    struct sFunCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunCallNode*  result  ;
    char*  __dec_obj120  ;
    char*  __dec_obj121  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj122;
    struct list$1sType$ph* __dec_obj123;
    struct buffer*  __dec_obj124  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFunCallNode* )come_increment_ref_count((struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), "sFunCallNode_clone", 5, 1368, "struct sFunCallNode* "), "sFunCallNode_clone", 5, 1369);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj120=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunCallNode_clone", 7, 1370, "char* "), "sFunCallNode_clone", 7, 1372);
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "sFunCallNode_clone", 7, 1371);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj121=result->fun_name,
        result->fun_name=(char* )come_increment_ref_count((char* )come_memdup(self->fun_name, "sFunCallNode_clone", 9, 1373, "char* "), "sFunCallNode_clone", 9, 1375);
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "sFunCallNode_clone", 9, 1374);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj122=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params), "sFunCallNode_clone", 10, 1377);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_clone", 10, 1376);
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj123=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types), "sFunCallNode_clone", 11, 1379);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_clone", 11, 1378);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj124=result->method_block,
        result->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "sFunCallNode_clone", 12, 1381);
        come_call_finalizer(buffer_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunCallNode_clone", 12, 1380);
    }
    if(self!=((void*)0)) {
        result->method_block_sline=self->method_block_sline;
    }
        __result_obj__0 = result;
    come_call_finalizer(sFunCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunCallNode_clone}", 14, 1382);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_funcall"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sFunCallNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "49call3.nc", 1151, 1398, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value1=sFunCallNode_initialize((struct sFunCallNode* )come_increment_ref_count((struct sFunCallNode *)come_calloc(1, sizeof(struct sFunCallNode )*(1), "49call3.nc", 1151, 1394, "struct sFunCallNode* "), "49call3.nc", 1151, 1395),(char*)fun_name,params,(struct list$1sType$ph*)come_increment_ref_count(method_generics_types, "49call3.nc", 1151, 1396),(struct buffer* )come_increment_ref_count(method_block, "49call3.nc", 1151, 1397),method_block_sline,info))), "49call3.nc", 1151, 1399);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    node=(struct sNode*)come_increment_ref_count(_inf_value3, "49call3.nc", 1151, 1400);
    come_call_finalizer(sFunCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "49call3.nc}", 1151, 1401);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "49call3.nc", 1152, 1402);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1152, 1403);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "49call3.nc}", 1152, 1404);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "49call3.nc", 1152, 1405):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "49call3.nc", 1152, 1406):(void*)0);
    return __result_obj__0;
}

