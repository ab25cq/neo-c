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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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

struct sMethodCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* obj;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun*  fun  ;
    _Bool arrow_;
};

struct sIterCallNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* obj;
    struct sNode* parent_call_node;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
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
char* parsecmp_tail(const char* p2, struct sInfo*  info  );
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
struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  );
struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  );
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  );
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, _Bool iter_, struct sNode* obj2);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
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
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
static void sNullChecker_finalize(struct sNullChecker* self);
static struct sNullChecker* sNullChecker_clone(struct sNullChecker* self);
static struct sNode* sNode_clone(struct sNode* self);
struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  );
static void sHeapChecker_finalize(struct sHeapChecker* self);
static struct sHeapChecker* sHeapChecker_clone(struct sHeapChecker* self);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
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
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char*  v1  , struct sGenericsFun*  v2  );
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char*  v1  , struct sFun*  v2  , struct sGenericsFun*  v3  );
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
char*  get_method_from_iter_call(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  );
static _Bool call_cpp_method(char*  fun_name  , struct list$1tuple2$2char$phsNode$ph$ph* params, struct sNode* obj, struct sInfo*  info  , _Bool arrow_);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE*  list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char*  sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType*  item  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE*  item  );
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
char*  trim_last_bracket(char*  all_code  , struct sInfo*  info  );
struct sNode* parse_iterator_it(struct sInfo*  info  );
struct sIterCallNode* sIterCallNode_initialize(struct sIterCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* sIterCallNode_left_value(struct sIterCallNode* self);
_Bool sIterCallNode_terminated(struct sIterCallNode* self);
char*  sIterCallNode_kind(struct sIterCallNode* self);
_Bool sIterCallNode_compile(struct sIterCallNode* self, struct sInfo*  info  );
static void sIterCallNode_finalize(struct sIterCallNode* self);
static struct sIterCallNode* sIterCallNode_clone(struct sIterCallNode* self);
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
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
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_null_checker"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNullChecker* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 5, 4, "struct sNode");
    _inf_obj_value1=(struct sNullChecker*)come_increment_ref_count(((struct sNullChecker*)(__right_value1=sNullChecker_initialize((struct sNullChecker* )come_increment_ref_count((struct sNullChecker *)come_calloc(1, sizeof(struct sNullChecker )*(1), "39method2.nc", 5, 1, "struct sNullChecker* "), "39method2.nc", 5, 2),(struct sNode*)come_increment_ref_count(node, "39method2.nc", 5, 3),info))), "39method2.nc", 5, 5);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullChecker_finalize;
    _inf_value1->clone=(void*)sNullChecker_clone;
    _inf_value1->compile=(void*)sNullChecker_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullChecker_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "39method2.nc", 5, 23);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 5, 24):(void*)0);
    come_call_finalizer(sNullChecker_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 5, 25);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "39method2.nc", 5, 26):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 5, 27):(void*)0);
    return __result_obj__0;
}

static void sNullChecker_finalize(struct sNullChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNullChecker_finalize", 2, 6));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sNullChecker_finalize", 3, 7):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sNullChecker* sNullChecker_clone(struct sNullChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNullChecker_clone"; neo_current_frame = &fr;
    struct sNullChecker* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNullChecker*  result  ;
    char*  __dec_obj1  ;
    struct sNode* __dec_obj2;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNullChecker* )come_increment_ref_count((struct sNullChecker *)come_calloc(1, sizeof(struct sNullChecker )*(1), "sNullChecker_clone", 5, 8, "struct sNullChecker* "), "sNullChecker_clone", 5, 9);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNullChecker_clone", 7, 10, "char* "), "sNullChecker_clone", 7, 12);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "sNullChecker_clone", 7, 11);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sNullChecker_clone", 9, 21);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "sNullChecker_clone", 9, 20) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNullChecker_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNullChecker_clone}", 10, 22);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 13);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 14):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 15, "struct sNode*"), "sNode_clone", 5, 16);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 17);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 18):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 19):(void*)0);
    return __result_obj__0;
}

struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_heap_checker"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sHeapChecker* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 10, 31, "struct sNode");
    _inf_obj_value2=(struct sHeapChecker*)come_increment_ref_count(((struct sHeapChecker*)(__right_value1=sHeapChecker_initialize((struct sHeapChecker* )come_increment_ref_count((struct sHeapChecker *)come_calloc(1, sizeof(struct sHeapChecker )*(1), "39method2.nc", 10, 28, "struct sHeapChecker* "), "39method2.nc", 10, 29),(struct sNode*)come_increment_ref_count(node, "39method2.nc", 10, 30),info))), "39method2.nc", 10, 32);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sHeapChecker_finalize;
    _inf_value2->clone=(void*)sHeapChecker_clone;
    _inf_value2->compile=(void*)sHeapChecker_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sHeapChecker_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "39method2.nc", 10, 43);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 10, 44):(void*)0);
    come_call_finalizer(sHeapChecker_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 10, 45);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "39method2.nc", 10, 46):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 10, 47):(void*)0);
    return __result_obj__0;
}

static void sHeapChecker_finalize(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sHeapChecker_finalize", 2, 33));
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sHeapChecker_finalize", 3, 34):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct sHeapChecker* sHeapChecker_clone(struct sHeapChecker* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapChecker_clone"; neo_current_frame = &fr;
    struct sHeapChecker* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sHeapChecker*  result  ;
    char*  __dec_obj3  ;
    struct sNode* __dec_obj4;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sHeapChecker* )come_increment_ref_count((struct sHeapChecker *)come_calloc(1, sizeof(struct sHeapChecker )*(1), "sHeapChecker_clone", 5, 35, "struct sHeapChecker* "), "sHeapChecker_clone", 5, 36);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sHeapChecker_clone", 7, 37, "char* "), "sHeapChecker_clone", 7, 39);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "sHeapChecker_clone", 7, 38);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj4=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sHeapChecker_clone", 9, 41);
        (__dec_obj4 ? __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0,0, (void*)0, "sHeapChecker_clone", 9, 40) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sHeapChecker_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sHeapChecker_clone}", 10, 42);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_generics_function"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  none_generics_name  ;
    char*  fun_name2  ;
    char*  fun_name3  ;
    struct sType*  no_solved_type  ;
    struct sGenericsFun*  generics_fun  ;
    struct sType*  type2  ;
    struct sType*  type_before  ;
    char*  __dec_obj39  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var1
;    char*  name  =0;
    _Bool err=0;
    void* __right_value2 = (void*)0;
    struct tuple2$2char$phsGenericsFun$p* __result_obj__0;
    none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type->mClass->mName), "39method2.nc", 15, 48);
    __right_value0 = (void*)0;
    fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer), "39method2.nc", 16, 49);
    __right_value0 = (void*)0;
    fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "39method2.nc", 17, 50);
    __right_value0 = (void*)0;
    no_solved_type=(struct sType* )come_increment_ref_count(sType_clone(type), "39method2.nc", 19, 249);
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
    if(generics_fun) {
        type2=(struct sType* )come_increment_ref_count(no_solved_type, "39method2.nc", 24, 275);
        type_before=type;
        __right_value0 = (void*)0;
        __dec_obj39=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type2,(_Bool)0,fun_name,info,array_equal_pointer), "39method2.nc", 28, 277);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 28, 276);
        __right_value0 = (void*)0;
        multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2,"39method2.nc",30), "39method2.nc", 30, 278),generics_fun,type2,info)));
        name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "39method2.nc", 30, 279);
        err=multiple_assign_var1->v2;
        come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 30, 281);
        if(!err) {
            err_msg(info,"%s not found",fun_name3);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "39method2.nc", 34, 282, "struct tuple2$2char$phsGenericsFun$p"), "39method2.nc", 34, 290),(char* )come_increment_ref_count(__builtin_string("","39method2.nc",34), "39method2.nc", 34, 291),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 34, 292);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 34, 293);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 34, 294));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 34, 295));
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 34, 296));
            (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 34, 297));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 34, 298));
            come_call_finalizer(sType_finalize, no_solved_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 34, 299);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 34, 300);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 34, 301);
            return __result_obj__0;
        }
        type=type_before;
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 40, 302);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 40, 303));
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "39method2.nc", 40, 305, "struct tuple2$2char$phsGenericsFun$p"), "39method2.nc", 40, 306),(char* )come_increment_ref_count((char* )come_memdup(fun_name2, "39method2.nc", 40, 304, "char* "), "39method2.nc", 40, 307),generics_fun))), "39method2.nc", 40, 308);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 40, 309));
    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 40, 310));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 40, 311));
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 40, 312));
    come_call_finalizer(sType_finalize, no_solved_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 40, 313);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 40, 314);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 40, 315);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj5  ;
    struct sType*  __dec_obj6  ;
    struct list$1sType$ph* __dec_obj10;
    struct sType*  __dec_obj11  ;
    struct sNode* __dec_obj12;
    struct sNode* __dec_obj13;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    struct list$1sNode$ph* __dec_obj25;
    struct list$1sNode$ph* __dec_obj26;
    struct list$1int$* __dec_obj27;
    struct list$1int$* __dec_obj28;
    struct sType*  __dec_obj29  ;
    char*  __dec_obj30  ;
    struct list$1sType$ph* __dec_obj31;
    struct list$1char$ph* __dec_obj35;
    struct sType*  __dec_obj36  ;
    struct sNode* __dec_obj37;
    struct list$1sNode$ph* __dec_obj38;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 51, "struct sType* "), "sType_clone", 5, 52);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj5=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 86);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 85);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 88);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 87);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 118);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 117);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 120);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 119);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 122);
        (__dec_obj12 ? __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 121) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 124);
        (__dec_obj13 ? __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 123) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 125, "char* "), "sType_clone", 14, 127);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 126);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 128, "char* "), "sType_clone", 15, 130);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 129);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 131, "char* "), "sType_clone", 16, 133);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 132);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 134, "char* "), "sType_clone", 17, 136);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 135);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 137, "char* "), "sType_clone", 18, 139);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 138);
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
        __dec_obj19=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 140, "char* "), "sType_clone", 49, 142);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 141);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 143, "char* "), "sType_clone", 51, 145);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 144);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 146, "char* "), "sType_clone", 54, 148);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 147);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 178);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 177);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 180);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 179);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 200);
        come_call_finalizer(list$1int$_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 199);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj28=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 202);
        come_call_finalizer(list$1int$_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 201);
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
        __dec_obj29=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 204);
        come_call_finalizer(sType_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 203);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 205, "char* "), "sType_clone", 67, 207);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 206);
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
        __dec_obj31=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 209);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 208);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 241);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 240);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 243);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 242);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj37=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 245);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 244) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj38=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 247);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 246);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 248);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 53);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 54);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 57);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 58);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 59):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 60):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 61));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 62));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 63));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 64));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 65));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 66));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 67));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 68));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 71);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 72);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 74);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 75);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 76);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 77));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 78);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 81);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 82);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 83):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 84);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 56);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 55);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 70);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 69):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 73);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 80);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 79));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 89);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 90);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 91, "struct list$1sType$ph*"), "./neo-c.h", 1513, 95)), "./neo-c.h", 1513, 96);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 111));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 112));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 113);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 114);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 115);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 92);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 93);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 94);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj7  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj8  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj9  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 97);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 98, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 99);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj7=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 101);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 100);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 102, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 103);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj8=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 105);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 104);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 106, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 107);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj9=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 109);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 108);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 110);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 116);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 149);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 150);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 151, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 155)), "./neo-c.h", 1513, 156);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 171));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 172));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 173);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 174);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 175);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 152);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 153);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 154);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj22;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj23;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj24;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 157):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 158, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 159);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj22=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 161);
        (__dec_obj22 ? __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 160) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 162, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 163);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj23=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 165);
        (__dec_obj23 ? __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 164) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 166, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 167);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj24=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 169);
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 168) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 170):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 176);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 181);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 182);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 183, "struct list$1int$*"), "./neo-c.h", 1513, 187)), "./neo-c.h", 1513, 188);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 195);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 196);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 197);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 184);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 185);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 186);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 189, "struct list_item$1int$*"))), "./neo-c.h", 1534, 190);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 191, "struct list_item$1int$*"))), "./neo-c.h", 1544, 192);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 193, "struct list_item$1int$*"))), "./neo-c.h", 1554, 194);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 198);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 210);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 211);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 212, "struct list$1char$ph*"), "./neo-c.h", 1513, 216)), "./neo-c.h", 1513, 217);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 232, "char* "), "./neo-c.h", 1518, 233));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 234, "char* "), "./neo-c.h", 1521, 235));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 236);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 237);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 238);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 213);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 214);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 215);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj32  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj33  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj34  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 218));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 219, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 220);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj32=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 222);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 221);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 223, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 224);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj33=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 226);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 225);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 227, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 228);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj34=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 230);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 229);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 231));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 239);
    }
            neo_current_frame = fr.prev;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3147, 250);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3147, 261);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3147, 262);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3160, 263);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3160, 264);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3160, 265);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3167, 266);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3167, 267);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3167, 268);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3171, 269);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3171, 270);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3171, 271);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3175, 272);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3175, 273);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3175, 274);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 251);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 252);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 253);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 254));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 255);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 256);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 257);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 258);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 259));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 260));
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$ph_Bool$$p_finalize", 2, 280));
    }
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char*  v1  , struct sGenericsFun*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p_initialize"; neo_current_frame = &fr;
    char*  __dec_obj40  ;
    struct tuple2$2char$phsGenericsFun$p* __result_obj__0;
    __dec_obj40=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 3930, 284);
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 3930, 283);
    self->v2=v2;
        __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(self, "./neo-c.h", 3933, 285);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3933, 287);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3933, 288));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3933, 289);
    return __result_obj__0;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsGenericsFun$p$p_finalize", 2, 286));
    }
        neo_current_frame = fr.prev;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "make_method_generics_function"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  fun_name3  ;
    struct list$1sType$ph* method_generics_types_before;
    struct list$1sType$ph* __dec_obj41;
    struct sGenericsFun*  generics_fun  ;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct tuple2$2char$phsGenericsFun$p* __result_obj__0;
    struct list$1sType$ph* __dec_obj42;
    static int num_method_generics=0;
    fun_name3=(char* )come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics++), "39method2.nc", 46, 316);
    method_generics_types_before=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types, "39method2.nc", 48, 317);
    __right_value0 = (void*)0;
    __dec_obj41=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types), "39method2.nc", 49, 319);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 49, 318);
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0),(_Bool)0)));
    if(generics_fun) {
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(!create_method_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name3,"39method2.nc",54), "39method2.nc", 54, 320),generics_fun,info)));_conditional_value_X0;})) {
            err_msg(info,"%s not found",fun_name3);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "39method2.nc", 56, 321, "struct tuple2$2char$phsGenericsFun$p"), "39method2.nc", 56, 322),(char* )come_increment_ref_count(__builtin_string("","39method2.nc",56), "39method2.nc", 56, 323),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 56, 324);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 56, 325));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 56, 326));
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 56, 327);
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 56, 328);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 56, 329);
            return __result_obj__0;
        }
    }
    __dec_obj42=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before, "39method2.nc", 60, 331);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 60, 330);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __result_obj__0 = (struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value2=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "39method2.nc", 62, 333, "struct tuple2$2char$phsGenericsFun$p"), "39method2.nc", 62, 334),(char* )come_increment_ref_count((char* )come_memdup(fun_name3, "39method2.nc", 62, 332, "char* "), "39method2.nc", 62, 335),generics_fun))), "39method2.nc", 62, 336);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 62, 337));
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 62, 338));
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 62, 339);
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 62, 340);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 62, 341);
    return __result_obj__0;
}

_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compile_method_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sCurrentNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* current_stack_frame_node;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  come_value  ;
    struct buffer*  method_block2  ;
    struct sType*  method_block_type  ;
    char*  class_name  ;
    struct sClass*  current_stack_frame_struct  ;
    struct sType*  result_type  ;
    struct sType*  result_type2  ;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct buffer*  all_alhabet_sname  ;
    char* p;
    int num_method_block;
    int i;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    struct sType*  param_type  ;
    char*  param_name  ;
    char*  param_name_14  ;
    struct sType*  param_type2  ;
    char*  param_name_15  ;
    struct buffer*  source3  ;
    char* p_16;
    char* head;
    int sline;
    struct buffer*  __dec_obj47  ;
    struct sNode* node;
    _Bool in_method_block;
    _Bool Value_17;
    char* method_block_name;
    struct CVALUE*  come_value2  ;
    struct sFun*  fun2  ;
    struct sType*  method_block_type2  ;
    char*  __dec_obj48  ;
    struct sType*  __dec_obj49  ;
    struct buffer*  __dec_obj50  ;
    struct sType*  __dec_obj51  ;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 67, 344, "struct sNode");
    _inf_obj_value3=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "39method2.nc", 67, 342, "struct sCurrentNode* "), "39method2.nc", 67, 343),info))), "39method2.nc", 67, 345);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCurrentNode_finalize;
    _inf_value3->clone=(void*)sCurrentNode_clone;
    _inf_value3->compile=(void*)sCurrentNode_compile;
    _inf_value3->sline=(void*)sCurrentNode_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sCurrentNode_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCurrentNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    current_stack_frame_node=(struct sNode*)come_increment_ref_count(_inf_value3, "39method2.nc", 67, 353);
    come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 67, 354);
    Value=node_compile(current_stack_frame_node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 70, 355):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 73, 356);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "39method2.nc", 74, 376));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block2=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 76, 377, "struct buffer* "), "39method2.nc", 76, 378)), "39method2.nc", 76, 379);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(fun->mParamTypes,-1)))), "39method2.nc", 77, 398);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 77, 399);
    __right_value0 = (void*)0;
    class_name=(char* )come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num), "39method2.nc", 79, 400);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    ((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(method_block_type->mParamTypes,0)))->mClass=((struct sClass* )(__right_value1=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 81, 439);
    current_stack_frame_struct=info->current_stack_frame_struct;
    __right_value0 = (void*)0;
    info->current_stack_frame_struct=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,class_name)));
    info->num_method_block++;
    if(string_operator_not_equals(method_block_type->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
                __result_obj__0 = (_Bool)1;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 89, 440):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 89, 441);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 89, 442);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 89, 443);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 89, 444));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result_type=(struct sType* )come_increment_ref_count(sType_clone(method_block_type->mResultType), "39method2.nc", 92, 445);
    result_type->mStatic=(_Bool)0;
    __right_value0 = (void*)0;
    result_type2=(struct sType* )come_increment_ref_count(solve_generics(result_type,info->generics_type,info), "39method2.nc", 94, 446);
    param_types=(struct list$1sType$ph*)come_increment_ref_count(method_block_type->mParamTypes, "39method2.nc", 95, 447);
    param_names=(struct list$1char$ph*)come_increment_ref_count(method_block_type->mParamNames, "39method2.nc", 96, 448);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    all_alhabet_sname=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 98, 449, "struct buffer* "), "39method2.nc", 98, 450)), "39method2.nc", 98, 451);
    {
        p=info->sname;
        while(*p) {
            if(xisalnum(*p)) {
                buffer_append_char(all_alhabet_sname,*p++);
            }
            else {
                p++;
            }
        }
    }
    num_method_block=info->num_method_block;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buffer_append_format(method_block2,"%s method_block%d_%s(",((char* )(__right_value0=make_come_type_name_string(result_type2,info))),num_method_block,((char* )(__right_value1=buffer_to_string(all_alhabet_sname))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 113, 452));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 113, 453));
    i=0;
    for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(param_types, "39method2.nc", 116, 454),it=list$1sType$ph_begin(_o2_saved_3)    ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
        param_type=(struct sType* )come_increment_ref_count(it, "39method2.nc", 117, 455);
        if(i==0) {
            __right_value0 = (void*)0;
            param_name=(char* )come_increment_ref_count(xsprintf("parent"), "39method2.nc", 120, 456);
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 122, 457));
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 139, 458));
        }
        else if(i==1) {
            __right_value0 = (void*)0;
            param_name_14=(char* )come_increment_ref_count(xsprintf("it"), "39method2.nc", 125, 459);
            __right_value0 = (void*)0;
            param_type2=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "39method2.nc", 127, 460);
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name_14,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 129, 461));
            (param_name_14 = come_decrement_ref_count(param_name_14, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 139, 462));
            come_call_finalizer(sType_finalize, param_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 139, 463);
        }
        else {
            __right_value0 = (void*)0;
            param_name_15=(char* )come_increment_ref_count(xsprintf("it%d",i), "39method2.nc", 132, 464);
            __right_value0 = (void*)0;
            buffer_append_format(method_block2,"%s",((char* )(__right_value0=make_come_define_var(param_type,param_name_15,info))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 136, 465));
            (param_name_15 = come_decrement_ref_count(param_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 139, 466));
        }
        if(i!=list$1sType$ph_length(param_types)-1) {
            buffer_append_str(method_block2,",");
        }
        i++;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 145, 467);
    }
    buffer_append_str(method_block2,")\n");
    __right_value0 = (void*)0;
    buffer_append_str(method_block2,((char* )(__right_value0=buffer_to_string(method_block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 147, 468));
    source3=(struct buffer* )come_increment_ref_count(info->source, "39method2.nc", 149, 469);
    p_16=info->p;
    head=info->head;
    sline=info->sline;
    __dec_obj47=info->source,
    info->source=(struct buffer* )come_increment_ref_count(method_block2, "39method2.nc", 154, 471);
    come_call_finalizer(buffer_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 154, 470);
    if(info->p==((void*)0)) {
        info->p=info->source->buf;
    }
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(parse_function(info), "39method2.nc", 162, 472);
    in_method_block=info->in_method_block;
    info->in_method_block=(_Bool)1;
    Value_17=node_compile(node,info);
    if(!Value_17) {
                __result_obj__0 = (_Bool)0;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 167, 473):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 474);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 475);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 476);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 167, 477));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 478);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 479);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 480);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 481);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 482);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 483);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 167, 484);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 167, 485):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    info->in_method_block=in_method_block;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_block_name=(char* )come_increment_ref_count(xsprintf("method_block%d_%s",num_method_block,((char* )(__right_value0=buffer_to_string(all_alhabet_sname)))), "39method2.nc", 171, 486);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 171, 487));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "39method2.nc", 173, 488, "struct CVALUE* "), "39method2.nc", 173, 489)), "39method2.nc", 173, 490);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun2=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(method_block_name,"39method2.nc",175))),((void*)0),(_Bool)0)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 175, 532));
    if(fun2==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name);
                __result_obj__0 = (_Bool)1;
        ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 179, 533):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 534);
        come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 535);
        come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 536);
        (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 179, 537));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 538);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 539);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 540);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 541);
        come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 542);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 543);
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 544);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 179, 545):(void*)0);
        (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 179, 546));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 179, 547);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    method_block_type2=fun2->mLambdaType;
    __right_value0 = (void*)0;
    __dec_obj48=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("(void*)%s",method_block_name), "39method2.nc", 184, 549);
    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 184, 548);
    __right_value0 = (void*)0;
    __dec_obj49=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(method_block_type2), "39method2.nc", 185, 551);
    come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 185, 550);
    come_value2->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value2, "39method2.nc", 188, 552));
    __dec_obj50=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source3, "39method2.nc", 190, 554);
    come_call_finalizer(buffer_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 190, 553);
    if(info->p==((void*)0)) {
        info->p=info->source->buf;
    }
    info->p=info->source->buf;
    info->p=p_16;
    info->head=head;
    info->sline=sline;
    info->current_stack_frame_struct=current_stack_frame_struct;
    __right_value0 = (void*)0;
    __dec_obj51=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "39method2.nc", 200, 556);
    come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 200, 555);
    if(info->no_output_come_code) {
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(__builtin_string(method_block_name,"39method2.nc",203), "39method2.nc", 203, 565),(_Bool)0);
    }
        __result_obj__0 = (_Bool)1;
    ((current_stack_frame_node) ? current_stack_frame_node = come_decrement_ref_count(current_stack_frame_node, ((struct sNode*)current_stack_frame_node)->finalize, ((struct sNode*)current_stack_frame_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 206, 566):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 567);
    come_call_finalizer(buffer_finalize, method_block2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 568);
    come_call_finalizer(sType_finalize, method_block_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 569);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 206, 570));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 571);
    come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 572);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 573);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 574);
    come_call_finalizer(buffer_finalize, all_alhabet_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 575);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 576);
    come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 577);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 206, 578):(void*)0);
    (method_block_name = come_decrement_ref_count(method_block_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 206, 579));
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 206, 580);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCurrentNode_finalize(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCurrentNode_finalize", 2, 346));
    }
        neo_current_frame = fr.prev;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCurrentNode_clone"; neo_current_frame = &fr;
    struct sCurrentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCurrentNode*  result  ;
    char*  __dec_obj43  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "sCurrentNode_clone", 5, 347, "struct sCurrentNode* "), "sCurrentNode_clone", 5, 348);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj43=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCurrentNode_clone", 7, 349, "char* "), "sCurrentNode_clone", 7, 351);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "sCurrentNode_clone", 7, 350);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sCurrentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCurrentNode_clone}", 9, 352);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj44  ;
    struct list_item$1CVALUE$ph* litem_8;
    struct CVALUE*  __dec_obj45  ;
    struct list_item$1CVALUE$ph* litem_9;
    struct CVALUE*  __dec_obj46  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 362);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1619, 363, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1619, 364);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj44=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1623, 366);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 365);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1629, 367, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1629, 368);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj45=litem_8->item,
        litem_8->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1633, 370);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 369);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1639, 371, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1639, 372);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj46=litem_9->item,
        litem_9->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1643, 374);
        come_call_finalizer(CVALUE_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 373);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 375);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 357));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 358);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 359));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 360));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 361));
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
    struct sType*  default_value_10  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 380);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 381);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 382);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2153, 383);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 384);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2161, 385);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_10,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_10, "./neo-c.h", 2169, 386);
    come_call_finalizer(sType_finalize, default_value_10, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 387);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 388);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_11  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 389);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 390);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 391);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2153, 392);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 393);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2161, 394);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_11,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_11, "./neo-c.h", 2169, 395);
    come_call_finalizer(sType_finalize, default_value_11, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 396);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 397);
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3533, 401);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 410);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 411);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 3545, 412);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3545, 413);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3545, 414);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3552, 415);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 416);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 417);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3556, 418);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 419);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 420);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3560, 421);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 422);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 423);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 402));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 407);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 408));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 409));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 406);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 405);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 403));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 404);
    }
            neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3533, 424);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 425);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 426);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 3545, 427);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3545, 428);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3545, 429);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3552, 430);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 431);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 432);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3556, 433);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 434);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 435);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3560, 436);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 437);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 438);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_12  ;
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
    memset(&result_12,0,sizeof(struct sType* ));
        __result_obj__0 = result_12;
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
    struct sType*  result_13  ;
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
    memset(&result_13,0,sizeof(struct sType* ));
        __result_obj__0 = result_13;
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
    return self->len;
            neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3147, 491);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3147, 518);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3147, 519);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3160, 520);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3160, 521);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3160, 522);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3167, 523);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3167, 524);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3167, 525);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3171, 526);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3171, 527);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3171, 528);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3175, 529);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3175, 530);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3175, 531);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 492));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 493);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 494);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 495);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 496);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 497);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 504);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 507);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 508));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 509));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 510);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 511);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 512);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 513);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 514));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 515));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 516));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 517));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 503);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 502);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 498));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 499));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 500);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 501));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 505);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 506);
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3181, 557));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                self->item_existance[it]=(_Bool)0;
                self->hashes[it]=0;
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3199, 562));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3204, 563);
                }
                memset(self->items+it,0,sizeof(struct sFun* ));
                self->len--;
                break;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                break;
            }
        }
        else {
            break;
        }
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3224, 564));
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
    struct list_item$1char$ph* it_18;
    int i_19;
    struct list_item$1char$ph* prev_it_20;
    struct list_item$1char$ph* it_21;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_22;
    struct list_item$1char$ph* prev_it_23;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1934, 559);
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
        it_18=self->head;
        i_19=0;
        while(it_18!=((void*)0)) {
            if(i_19==head) {
                self->tail=it_18->prev;
                self->tail->next=((void*)0);
            }
            if(i_19>=head) {
                prev_it_20=it_18;
                it_18=it_18->next;
                i_19++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1964, 560);
                self->len--;
            }
            else {
                it_18=it_18->next;
                i_19++;
            }
        }
    }
    else {
        it_21=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_22=0;
        while(it_21!=((void*)0)) {
            if(i_22==head) {
                head_prev_it=it_21->prev;
            }
            if(i_22==tail) {
                tail_it=it_21;
            }
            if(i_22>=head&&i_22<tail) {
                prev_it_23=it_21;
                it_21=it_21->next;
                i_22++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1997, 561);
                self->len--;
            }
            else {
                it_21=it_21->next;
                i_22++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1856, 558);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_method"; neo_current_frame = &fr;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    struct sGenericsFun*  generics_fun  ;
    void* __right_value0 = (void*)0;
    char*  fun_name2  ;
    struct sClass*  klass  ;
    _Bool _conditional_value_X0;
    char*  __dec_obj52  ;
    void* __right_value1 = (void*)0;
    char*  __dec_obj53  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var2
;    char*  name  =0;
    struct sGenericsFun*  gfun  =0;
    char*  __dec_obj54  ;
    char*  none_generics_name  ;
    char*  fun_name3  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3
;    char*  name_24  =0;
    struct sGenericsFun*  gfun_25  =0;
    char*  __dec_obj55  ;
    char*  __dec_obj56  ;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var4
;    char*  name_26  =0;
    struct sGenericsFun*  gfun_27  =0;
    char*  __dec_obj57  ;
    int i;
    char*  new_fun_name  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj58  ;
    struct sType*  obj_array_type  ;
    char*  array_method_name  ;
    char*  __dec_obj59  ;
    char*  __dec_obj60  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__0;
    char*  __dec_obj62  ;
    struct sClass*  klass_28  ;
    _Bool _conditional_value_X1;
    char*  __dec_obj63  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun2  =0;
    char*  real_fun_name  =0;
    char*  __dec_obj64  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var6
;    struct sFun*  fun2_29  =0;
    char*  real_fun_name_30  =0;
    char*  __dec_obj65  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var7
;    struct sFun*  fun2_31  =0;
    char*  real_fun_name_32  =0;
    char*  __dec_obj66  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var8
;    struct sFun*  fun2_33  =0;
    char*  real_fun_name_34  =0;
    char*  __dec_obj67  ;
    char*  original_obj_type_fun_name  ;
    char*  __dec_obj68  ;
    generics_fun_name=((void*)0);
    fun=((void*)0);
    generics_fun=((void*)0);
    if(charp_operator_equals(fun_name,"super")) {
        fun_name2=(char* )come_increment_ref_count(create_non_method_name(obj_type,(_Bool)0,info->come_fun->mName,info,(_Bool)1), "39method2.nc", 216, 581);
        klass=obj_type->mClass;
        while(__right_value0 = (void*)0,
({(_conditional_value_X0=(klass->mParentClassName&&((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)))));        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 219, 582);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mParentClassName)));
            __right_value0 = (void*)0;
            __dec_obj52=generics_fun_name,
            generics_fun_name=(char* )come_increment_ref_count(create_method_name_using_class(klass,fun_name2,info), "39method2.nc", 221, 584);
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 221, 583);
            __right_value0 = (void*)0;
            fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name,"39method2.nc",223))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 223, 585));
            if(fun) {
                break;
            }
        }
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 372, 586));
    }
    else {
        if(obj_type&&obj_type->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type->mNoSolvedGenericsType->mGenericsTypes)>0) {
            if(no_make_generics_function) {
                __dec_obj53=generics_fun_name,
                generics_fun_name=name;
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 233, 587);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                multiple_assign_var2=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name,"39method2.nc",236), "39method2.nc", 236, 588),info,(_Bool)1)));
                name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "39method2.nc", 236, 589);
                gfun=multiple_assign_var2->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 236, 590);
                __dec_obj54=generics_fun_name,
                generics_fun_name=(char* )come_increment_ref_count(name, "39method2.nc", 237, 592);
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 237, 591);
                generics_fun=gfun;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 240, 593));
            }
        }
        else if(info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName), "39method2.nc", 242, 594);
            __right_value0 = (void*)0;
            fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "39method2.nc", 243, 595);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_method_generics_function((char* )come_increment_ref_count(__builtin_string(fun_name3,"39method2.nc",244), "39method2.nc", 244, 596),info->method_generics_types,info)));
            name_24=(char* )come_increment_ref_count(multiple_assign_var3->v1, "39method2.nc", 244, 597);
            gfun_25=multiple_assign_var3->v2;
            come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 244, 598);
            __dec_obj55=generics_fun_name,
            generics_fun_name=(char* )come_increment_ref_count(name_24, "39method2.nc", 245, 600);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 245, 599);
            generics_fun=gfun_25;
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 259, 601));
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 259, 602));
            (name_24 = come_decrement_ref_count(name_24, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 259, 603));
        }
        else {
            if(no_make_generics_function) {
                __dec_obj56=generics_fun_name,
                generics_fun_name=name;
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 250, 604);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                multiple_assign_var4=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(obj_type,(char* )come_increment_ref_count(__builtin_string(fun_name,"39method2.nc",253), "39method2.nc", 253, 605),info,(_Bool)1)));
                name_26=(char* )come_increment_ref_count(multiple_assign_var4->v1, "39method2.nc", 253, 606);
                gfun_27=multiple_assign_var4->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 253, 607);
                __dec_obj57=generics_fun_name,
                generics_fun_name=(char* )come_increment_ref_count(name_26, "39method2.nc", 254, 609);
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 254, 608);
                generics_fun=gfun_27;
                (name_26 = come_decrement_ref_count(name_26, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 257, 610));
            }
        }
        for(i=128        ;i>=1;i--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name,i), "39method2.nc", 260, 611);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(new_fun_name,"39method2.nc",262))))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 262, 642));
            if(fun!=((void*)0)) {
                __right_value0 = (void*)0;
                __dec_obj58=generics_fun_name,
                generics_fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"39method2.nc",265), "39method2.nc", 265, 644);
                __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 265, 643);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 266, 645));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 270, 646));
        }
        if(fun==((void*)0)) {
            obj_array_type=obj_type->mOriginalLoadVarType;
            if(obj_array_type&&list$1sNode$ph_length(obj_array_type->mArrayNum)>0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                array_method_name=(char* )come_increment_ref_count(create_method_name(((struct sType* )(__right_value0=sType_clone(obj_array_type))),(_Bool)0,fun_name,info,(_Bool)0), "39method2.nc", 274, 647);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 274, 648);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(array_method_name,"39method2.nc",276))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 276, 649));
                if(fun) {
                    __right_value0 = (void*)0;
                    __dec_obj59=generics_fun_name,
                    generics_fun_name=(char* )come_increment_ref_count(__builtin_string(array_method_name,"39method2.nc",279), "39method2.nc", 279, 651);
                    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 279, 650);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name,"39method2.nc",282))),((void*)0),(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 282, 652));
                    if(fun==((void*)0)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __dec_obj60=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name,"39method2.nc",285))),info,(_Bool)1), "39method2.nc", 285, 654);
                        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 285, 653);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 285, 655));
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name,"39method2.nc",286))),((void*)0),(_Bool)0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 286, 656));
                        if(fun==((void*)0)) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "39method2.nc", 288, 657, "struct tuple3$3char$phsFun$psGenericsFun$p"), "39method2.nc", 288, 665),(char* )come_increment_ref_count((char* )((void*)0), "39method2.nc", 288, 666),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 288, 667);
                            (array_method_name = come_decrement_ref_count(array_method_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 288, 668));
                            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 288, 669));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 288, 670);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 288, 671);
                            return __result_obj__0;
                        }
                    }
                }
                (array_method_name = come_decrement_ref_count(array_method_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 369, 672));
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name,"39method2.nc",294))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 294, 673));
                if(fun==((void*)0)) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj62=generics_fun_name,
                    generics_fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name,"39method2.nc",297))),info,(_Bool)1), "39method2.nc", 297, 675);
                    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 297, 674);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 297, 676));
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name,"39method2.nc",299))),((void*)0),(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 299, 677));
                    if(fun==((void*)0)) {
                        klass_28=obj_type->mClass;
                        while(__right_value0 = (void*)0,
({(_conditional_value_X1=(klass_28->mParentClassName&&((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass_28->mParentClassName)))));                        come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 303, 678);
_conditional_value_X1;})) {
                            __right_value0 = (void*)0;
                            klass_28=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass_28->mParentClassName)));
                            __right_value0 = (void*)0;
                            __dec_obj63=generics_fun_name,
                            generics_fun_name=(char* )come_increment_ref_count(create_method_name_using_class(klass_28,fun_name,info), "39method2.nc", 305, 680);
                            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 305, 679);
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(generics_fun_name,"39method2.nc",307))),((void*)0),(_Bool)0)));
                            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 307, 681));
                            if(fun) {
                                break;
                            }
                        }
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"to_string")) {
                        if(require_explicit_method_in_low_memory_mode(obj_type,fun_name,info)) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "39method2.nc", 317, 682, "struct tuple3$3char$phsFun$psGenericsFun$p"), "39method2.nc", 317, 683),(char* )come_increment_ref_count(generics_fun_name, "39method2.nc", 317, 684),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 317, 685);
                            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 317, 686));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 317, 687);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 317, 688);
                            return __result_obj__0;
                        }
                        __right_value0 = (void*)0;
                        multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically(obj_type,fun_name,info)));
                        fun2=multiple_assign_var5->v1;
                        real_fun_name=(char* )come_increment_ref_count(multiple_assign_var5->v2, "39method2.nc", 320, 689);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 320, 691);
                        fun=fun2;
                        __dec_obj64=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name, "39method2.nc", 323, 693);
                        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 323, 692);
                        (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 325, 694));
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"get_hash_key")) {
                        if(require_explicit_method_in_low_memory_mode(obj_type,fun_name,info)) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "39method2.nc", 327, 695, "struct tuple3$3char$phsFun$psGenericsFun$p"), "39method2.nc", 327, 696),(char* )come_increment_ref_count(generics_fun_name, "39method2.nc", 327, 697),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 327, 698);
                            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 327, 699));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 327, 700);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 327, 701);
                            return __result_obj__0;
                        }
                        __right_value0 = (void*)0;
                        multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_get_hash_key_automatically(obj_type,fun_name,info)));
                        fun2_29=multiple_assign_var6->v1;
                        real_fun_name_30=(char* )come_increment_ref_count(multiple_assign_var6->v2, "39method2.nc", 330, 702);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 330, 703);
                        fun=fun2_29;
                        __dec_obj65=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name_30, "39method2.nc", 333, 705);
                        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 333, 704);
                        (real_fun_name_30 = come_decrement_ref_count(real_fun_name_30, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 335, 706));
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"equals")) {
                        if(require_explicit_method_in_low_memory_mode(obj_type,fun_name,info)) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "39method2.nc", 337, 707, "struct tuple3$3char$phsFun$psGenericsFun$p"), "39method2.nc", 337, 708),(char* )come_increment_ref_count(generics_fun_name, "39method2.nc", 337, 709),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 337, 710);
                            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 337, 711));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 337, 712);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 337, 713);
                            return __result_obj__0;
                        }
                        __right_value0 = (void*)0;
                        multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(obj_type,fun_name,info)));
                        fun2_31=multiple_assign_var7->v1;
                        real_fun_name_32=(char* )come_increment_ref_count(multiple_assign_var7->v2, "39method2.nc", 340, 714);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 340, 715);
                        __right_value0 = (void*)0;
                        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_32)));
                        __dec_obj66=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name_32, "39method2.nc", 343, 717);
                        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 343, 716);
                        (real_fun_name_32 = come_decrement_ref_count(real_fun_name_32, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 345, 718));
                    }
                    if(fun==((void*)0)&&charp_operator_equals(fun_name,"compare")) {
                        if(require_explicit_method_in_low_memory_mode(obj_type,fun_name,info)) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "39method2.nc", 347, 719, "struct tuple3$3char$phsFun$psGenericsFun$p"), "39method2.nc", 347, 720),(char* )come_increment_ref_count(generics_fun_name, "39method2.nc", 347, 721),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 347, 722);
                            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 347, 723));
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 347, 724);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 347, 725);
                            return __result_obj__0;
                        }
                        __right_value0 = (void*)0;
                        multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_compare_automatically(obj_type,fun_name,info)));
                        fun2_33=multiple_assign_var8->v1;
                        real_fun_name_34=(char* )come_increment_ref_count(multiple_assign_var8->v2, "39method2.nc", 350, 726);
                        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 350, 727);
                        __right_value0 = (void*)0;
                        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_34)));
                        __dec_obj67=generics_fun_name,
                        generics_fun_name=(char* )come_increment_ref_count(real_fun_name_34, "39method2.nc", 353, 729);
                        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 353, 728);
                        (real_fun_name_34 = come_decrement_ref_count(real_fun_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 355, 730));
                    }
                    if(fun==((void*)0)) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        original_obj_type_fun_name=(char* )come_increment_ref_count(create_method_name_original_obj_type(obj_type,(_Bool)0,((char* )(__right_value0=__builtin_string(fun_name,"39method2.nc",356))),info,(_Bool)1), "39method2.nc", 356, 731);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 356, 732));
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(original_obj_type_fun_name,"39method2.nc",357))),((void*)0),(_Bool)0)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 357, 733));
                        if(fun) {
                            __dec_obj68=generics_fun_name,
                            generics_fun_name=(char* )come_increment_ref_count(original_obj_type_fun_name, "39method2.nc", 360, 735);
                            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 360, 734);
                        }
                        (original_obj_type_fun_name = come_decrement_ref_count(original_obj_type_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 364, 736));
                    }
                    if(fun==((void*)0)) {
                                                __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "39method2.nc", 365, 737, "struct tuple3$3char$phsFun$psGenericsFun$p"), "39method2.nc", 365, 738),(char* )come_increment_ref_count(generics_fun_name, "39method2.nc", 365, 739),(struct sFun* )((void*)0),(struct sGenericsFun* )((void*)0)))), "39method2.nc", 365, 740);
                        (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 365, 741));
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 365, 742);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 365, 743);
                        return __result_obj__0;
                    }
                }
            }
        }
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value1=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "39method2.nc", 372, 744, "struct tuple3$3char$phsFun$psGenericsFun$p"), "39method2.nc", 372, 745),(char* )come_increment_ref_count(generics_fun_name, "39method2.nc", 372, 746),fun,generics_fun))), "39method2.nc", 372, 747);
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 372, 748));
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 372, 749);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 372, 750);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3533, 612);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 613);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 614);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3545, 615);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3545, 616);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3545, 617);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3552, 618);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 619);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 620);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3556, 621);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 622);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 623);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3560, 624);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 625);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 626);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3533, 627);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 628);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3533, 629);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3545, 630);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3545, 631);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3545, 632);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3552, 633);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 634);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3552, 635);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3556, 636);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 637);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3556, 638);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3560, 639);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 640);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3560, 641);
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
    return self->len;
                neo_current_frame = fr.prev;
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char*  v1  , struct sFun*  v2  , struct sGenericsFun*  v3  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p_initialize"; neo_current_frame = &fr;
    char*  __dec_obj61  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__0;
    __dec_obj61=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4005, 659);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4005, 658);
    self->v2=v2;
    self->v3=v3;
        __result_obj__0 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self, "./neo-c.h", 4009, 660);
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4009, 662);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4009, 663));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4009, 664);
    return __result_obj__0;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 661));
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 690));
    }
                            neo_current_frame = fr.prev;
}

char*  get_method_from_iter_call(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_method_from_iter_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  none_generics_name  ;
    char*  fun_name3  ;
    char*  __result_obj__0  ;
    none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(obj_type->mClass->mName), "39method2.nc", 377, 751);
    __right_value0 = (void*)0;
    fun_name3=(char* )come_increment_ref_count(xsprintf("%s_iter_%s",none_generics_name,fun_name), "39method2.nc", 378, 752);
        __result_obj__0 = (char* )come_increment_ref_count(fun_name3, "39method2.nc", 380, 753);
    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 380, 754));
    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 1, (void*)0, "39method2.nc", 380, 755));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "39method2.nc", 380, 756));
    return __result_obj__0;
}

static _Bool call_cpp_method(char*  fun_name  , struct list$1tuple2$2char$phsNode$ph$ph* params, struct sNode* obj, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "call_cpp_method"; neo_current_frame = &fr;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  obj_value  ;
    void* __right_value1 = (void*)0;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_4;
    struct tuple2$2char$phsNode$ph* it;
    struct tuple2$2char$phsNode$ph* multiple_assign_var9
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value_37;
    struct CVALUE*  come_value  ;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_5;
    struct CVALUE*  it_39  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj69  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj70  ;
    Value=node_compile(obj,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 386, 757));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 386, 762);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 386, 763):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    obj_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 389, 764);
    __right_value0 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "39method2.nc", 391, 765, "struct list$1CVALUE$ph*"), "39method2.nc", 391, 771)), "39method2.nc", 391, 772);
    i=0;
    for(_o2_saved_4=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 394, 773),it=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_4)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_4);it=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_4)){
        multiple_assign_var9=it;
        label=(char* )come_increment_ref_count(multiple_assign_var9->v1, "39method2.nc", 395, 774);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2, "39method2.nc", 395, 775);
        if(i==0) {
            i++;
        }
        else {
            Value_37=node_compile(node,info);
            if(!Value_37) {
                                __result_obj__0 = (_Bool)0;
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 402, 776));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 402, 777):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 402, 778));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 402, 779);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 402, 780):(void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 402, 781);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 402, 782);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 402, 783);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 405, 784);
            list$1CVALUE$ph_push_back(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "39method2.nc", 407, 785));
            i++;
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 411, 786);
        }
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 414, 787));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 414, 788):(void*)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 414, 789, "struct buffer* "), "39method2.nc", 414, 790)), "39method2.nc", 414, 791);
    if(arrow_) {
        buffer_append_format(buf,"%s->%s",obj_value->c_value,fun_name);
    }
    else {
        buffer_append_format(buf,"%s.%s",obj_value->c_value,fun_name);
    }
    buffer_append_str(buf,"(");
    j=0;
    for(_o2_saved_5=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params, "39method2.nc", 425, 792),it_39=list$1CVALUE$ph_begin(_o2_saved_5)    ;!list$1CVALUE$ph_end(_o2_saved_5);it_39=list$1CVALUE$ph_next(_o2_saved_5)){
        if(j==0) {
        }
        buffer_append_str(buf,it_39->c_value);
        if(j!=list$1CVALUE$ph_length(come_params)-1) {
            buffer_append_str(buf,",");
        }
        j++;
    }
    buffer_append_str(buf,")");
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "39method2.nc", 438, 793, "struct CVALUE* "), "39method2.nc", 438, 794)), "39method2.nc", 438, 795);
    __right_value0 = (void*)0;
    __dec_obj69=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "39method2.nc", 440, 797);
    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 440, 796);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj70=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "39method2.nc", 441, 798, "struct sType* "), "39method2.nc", 441, 799),(char*)come_increment_ref_count(xsprintf("long"), "39method2.nc", 441, 800),(_Bool)0,info,(_Bool)0,0), "39method2.nc", 441, 802);
    come_call_finalizer(sType_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 441, 801);
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "39method2.nc", 445, 803));
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 447, 804));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 447, 805);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 447, 806):(void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 447, 807);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 447, 808);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 447, 809);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 447, 810);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 447, 811);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 447, 812);
    neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 761);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 760);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 758));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 759):(void*)0);
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
        __result_obj__0 = (struct list$1CVALUE$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 766);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 769);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1CVALUE$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 770);
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 768);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 767);
    }
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_35;
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
    memset(&result_35,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_35;
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
    struct tuple2$2char$phsNode$ph* result_36;
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
    memset(&result_36,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_36;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_begin"; neo_current_frame = &fr;
    struct CVALUE*  result  ;
    struct CVALUE*  __result_obj__0  ;
    struct CVALUE*  result_38  ;
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
    memset(&result_38,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_38;
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
    struct CVALUE*  result_40  ;
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
    memset(&result_40,0,sizeof(struct CVALUE* ));
        __result_obj__0 = result_40;
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

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj71;
    char*  __dec_obj72  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj78;
    struct buffer*  __dec_obj79  ;
    struct list$1sType$ph* __dec_obj80;
    struct sMethodCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMethodCallNode*)come_increment_ref_count(self, "39method2.nc", 456, 813),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 456, 815);
    __right_value0 = (void*)0;
    __dec_obj71=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj), "39method2.nc", 458, 817);
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "39method2.nc", 458, 816) :0);
    __right_value0 = (void*)0;
    __dec_obj72=self->fun_name,
    self->fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name,"39method2.nc",459), "39method2.nc", 459, 819);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 459, 818);
    __right_value0 = (void*)0;
    __dec_obj78=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params), "39method2.nc", 460, 863);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 460, 862);
    __right_value0 = (void*)0;
    __dec_obj79=self->method_block,
    self->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(method_block), "39method2.nc", 461, 865);
    come_call_finalizer(buffer_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 461, 864);
    self->method_block_sline=method_block_sline;
    __right_value0 = (void*)0;
    __dec_obj80=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(method_generics_types), "39method2.nc", 463, 867);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 463, 866);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    self->arrow_=arrow_;
        __result_obj__0 = (struct sMethodCallNode*)come_increment_ref_count(self, "39method2.nc", 470, 868);
    come_call_finalizer(sMethodCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 470, 875);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 470, 876):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMethodCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 470, 877);
    return __result_obj__0;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_terminated"; neo_current_frame = &fr;
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

char*  sMethodCallNode_kind(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMethodCallNode","39method2.nc",482))), "39method2.nc", 482, 878);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 482, 879));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "39method2.nc", 482, 880));
    return __result_obj__0;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_compile"; neo_current_frame = &fr;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value0 = (void*)0;
    struct sNode* obj;
    struct buffer*  method_block  ;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool recursive;
    _Bool no_infference_method_generics;
    _Bool arrow_;
    struct list$1sType$ph* method_generics_types_43;
    struct list$1sType$ph* __dec_obj81;
    char*  __dec_obj82  ;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  obj_value  ;
    struct sType*  obj_type  ;
    _Bool no_output_come_code;
    struct sType*  type  ;
    char*  none_generics_name  ;
    char*  fun_name2  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    _Bool method_generics;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$phsGenericsFun$p* multiple_assign_var10
;    char*  name  =0;
    struct sGenericsFun*  gfun  =0;
    char*  generics_fun_name  ;
    struct sFun*  fun  ;
    struct list$1CVALUE$ph* come_params;
    _Bool no_output_come_code_44;
    struct CVALUE*  method_block_node  ;
    struct sType*  method_block_lambda_type  ;
    struct sType*  method_block_result_type  ;
    struct sType*  generics_fun_method_block_lambda_type  ;
    struct sType*  generics_fun_method_block_result_type  ;
    int method_generics_num;
    int n;
    struct list$1sType$ph* _o2_saved_6;
    struct sType*  it  ;
    int method_generics_num_50;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct list$1CVALUE$ph* come_params_51;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_7;
    struct tuple2$2char$phsNode$ph* it_52;
    struct tuple2$2char$phsNode$ph* multiple_assign_var11
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value_53;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj87  ;
    int method_generics_num_54;
    struct list$1sType$ph* _o2_saved_8;
    struct sType*  it_55  ;
    int method_generics_num_56;
    struct list$1CVALUE$ph* come_params_57;
    int i_58;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_9;
    struct tuple2$2char$phsNode$ph* it_59;
    struct tuple2$2char$phsNode$ph* multiple_assign_var12
;    char*  label_60  =0;
    struct sNode* node_61=0;
    _Bool Value_62;
    struct CVALUE*  come_value_63  ;
    struct sType*  __dec_obj88  ;
    int method_generics_num_64;
    int n_65;
    struct list$1sType$ph* _o2_saved_10;
    struct sType*  it_66  ;
    int method_generics_num_67;
    struct sClass*  klass  ;
    _Bool calling_dynamic_method;
    struct sType*  lambda_type  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_11;
    struct tuple2$2char$phsType$ph* it_69;
    struct tuple2$2char$phsType$ph* multiple_assign_var13
;    char*  field_name  =0;
    struct sType*  field_type  =0;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* come_params_71;
    int i_72;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_12;
    struct tuple2$2char$phsNode$ph* it_73;
    struct tuple2$2char$phsNode$ph* multiple_assign_var14
;    char*  label_74  =0;
    struct sNode* node_75=0;
    _Bool Value_76;
    struct CVALUE*  come_value_77  ;
    struct sType*  __dec_obj89  ;
    _Bool _conditional_value_X0;
    struct buffer*  buf  ;
    int j;
    struct list$1CVALUE$ph* _o2_saved_13;
    struct CVALUE*  it_78  ;
    char*  __dec_obj90  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj91  ;
    struct sType*  result_type2  ;
    struct sType*  __dec_obj92  ;
    struct list$1sType$ph* __dec_obj93;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var15
;    char*  generics_fun_name_79  =0;
    struct sFun*  fun_80  =0;
    struct sGenericsFun*  generics_fun_81  =0;
    struct sType*  result_type_82  ;
    struct sType*  __dec_obj94  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_14;
    struct sType*  it_83  ;
    struct sType*  it2  ;
    struct sType*  no_solved_obj_type  ;
    struct sType*  it3  ;
    struct list$1sType$ph* type_checking_param_types;
    int n_84;
    struct list$1sType$ph* _o2_saved_15;
    struct sType*  it_85  ;
    struct sType*  no_solved_obj_type_86  ;
    struct sType*  it3_87  ;
    struct list$1CVALUE$ph* come_params_88;
    int i_89;
    _Bool first_param;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_16;
    struct tuple2$2char$phsNode$ph* it_92;
    struct tuple2$2char$phsNode$ph* multiple_assign_var16
;    char*  label_93  =0;
    struct sNode* node_94=0;
    int n_95;
    _Bool check;
    struct list$1char$ph* _o2_saved_17;
    char*  it_97  ;
    _Bool Value_99;
    struct CVALUE*  come_value_100  ;
    struct sType*  __dec_obj98  ;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    int i_102;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_18;
    struct tuple2$2char$phsNode$ph* it_103;
    struct tuple2$2char$phsNode$ph* multiple_assign_var17
;    char*  label_104  =0;
    struct sNode* node_105=0;
    _Bool _conditional_value_X3;
    _Bool _conditional_value_X4;
    _Bool _conditional_value_X5;
    _Bool Value_108;
    struct CVALUE*  come_value_109  ;
    struct sType*  __dec_obj100  ;
    _Bool _conditional_value_X6;
    _Bool _conditional_value_X7;
    _Bool _conditional_value_X8;
    char*  default_param  ;
    char* param_name;
    _Bool _conditional_value_X9;
    struct buffer*  source  ;
    char* p;
    char* head;
    int sline;
    struct buffer*  __dec_obj101  ;
    _Bool no_output_come_code_110;
    struct sNode* node_111;
    _Bool Value_112;
    struct buffer*  __dec_obj102  ;
    struct CVALUE*  come_value_113  ;
    struct sType*  __dec_obj103  ;
    _Bool _conditional_value_X10;
    _Bool _conditional_value_X11;
    _Bool _conditional_value_X12;
    struct buffer*  buf_114  ;
    char*  saved_obj_value  ;
    struct sVar*  saved_var  ;
    char*  var_name  ;
    struct sType*  type_116  ;
    struct sVar*  var_  ;
    char*  __dec_obj104  ;
    int j_117;
    struct list$1CVALUE$ph* _o2_saved_19;
    struct CVALUE*  it_118  ;
    int j_119;
    struct list$1CVALUE$ph* _o2_saved_20;
    struct CVALUE*  it_120  ;
    struct CVALUE*  come_value2_121  ;
    char*  __dec_obj105  ;
    struct sType*  __dec_obj106  ;
    struct list$1sType$ph* __dec_obj107;
    fun_name=(char* )come_increment_ref_count(self->fun_name, "39method2.nc", 487, 881);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params, "39method2.nc", 488, 882);
    obj=(struct sNode*)come_increment_ref_count(create_heap_checker((struct sNode*)come_increment_ref_count(self->obj, "39method2.nc", 489, 883),info), "39method2.nc", 489, 884);
    method_block=(struct buffer* )come_increment_ref_count(self->method_block, "39method2.nc", 490, 885);
    method_block_sline=self->method_block_sline;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types, "39method2.nc", 492, 886);
    recursive=self->recursive;
    no_infference_method_generics=self->no_infference_method_generics;
    arrow_=self->arrow_;
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 497, 887);
    method_generics_types_43=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types, "39method2.nc", 497, 888);
    __right_value0 = (void*)0;
    __dec_obj81=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types), "39method2.nc", 498, 890);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 498, 889);
    __right_value0 = (void*)0;
    __dec_obj82=info->caller_sname,
    info->caller_sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"39method2.nc",500), "39method2.nc", 500, 892);
    __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 500, 891);
    info->caller_line=info->sline;
    Value=node_compile(obj,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 504, 893));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 504, 894);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 504, 895):(void*)0);
        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 504, 896);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 504, 897);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    obj_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 507, 898);
    __right_value0 = (void*)0;
    obj_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "39method2.nc", 509, 899);
    if(string_operator_equals(obj_type->mClass->mName,"void")&&obj_type->mPointerNum==1) {
                __result_obj__0 = call_cpp_method((char* )come_increment_ref_count(fun_name, "39method2.nc", 512, 900),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 512, 901),(struct sNode*)come_increment_ref_count(obj, "39method2.nc", 512, 902),info,arrow_);
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 512, 903));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 512, 904);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 512, 905):(void*)0);
        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 512, 906);
        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 512, 907);
        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 512, 908);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 512, 909);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!no_infference_method_generics) {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        __right_value0 = (void*)0;
        type=(struct sType* )come_increment_ref_count(sType_clone(obj_type), "39method2.nc", 521, 910);
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type->mClass->mName), "39method2.nc", 523, 911);
        __right_value0 = (void*)0;
        fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "39method2.nc", 524, 912);
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "39method2.nc", 525, 913);
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            method_generics=list$1char$ph_length(generics_fun->mMethodGenericsTypeNames)>0;
            if(method_generics&&list$1sType$ph_length(info->method_generics_types)==0) {
                __right_value0 = (void*)0;
                multiple_assign_var10=((struct tuple2$2char$phsGenericsFun$p*)(__right_value1=make_generics_function(type,(char* )come_increment_ref_count(__builtin_string(fun_name,"39method2.nc",533), "39method2.nc", 533, 914),info,(_Bool)1)));
                name=(char* )come_increment_ref_count(multiple_assign_var10->v1, "39method2.nc", 533, 915);
                gfun=multiple_assign_var10->v2;
                come_call_finalizer(tuple2$2char$phsGenericsFun$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 533, 916);
                generics_fun_name=(char* )come_increment_ref_count(name, "39method2.nc", 535, 917);
                __right_value0 = (void*)0;
                fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,generics_fun_name,((void*)0),(_Bool)0)));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "39method2.nc", 539, 918, "struct list$1CVALUE$ph*"), "39method2.nc", 539, 919)), "39method2.nc", 539, 920);
                if(method_block) {
                    no_output_come_code_44=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(!compile_method_block(method_block,come_params,fun,fun_name3,method_block_sline,info,(_Bool)1)) {
                                                __result_obj__0 = (_Bool)0;
                        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 544, 921));
                        (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 544, 922));
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 544, 923);
                        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 544, 924);
                        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 544, 925));
                        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 544, 926));
                        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 544, 927));
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 544, 928));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 544, 929);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 544, 930):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 544, 931);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 544, 932);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 544, 933);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 544, 934);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    info->no_output_come_code=no_output_come_code_44;
                    __right_value0 = (void*)0;
                    method_block_node=((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params,-1)));
                    __right_value0 = (void*)0;
                    method_block_lambda_type=(struct sType* )come_increment_ref_count(sType_clone(method_block_node->type), "39method2.nc", 549, 953);
                    __right_value0 = (void*)0;
                    method_block_result_type=(struct sType* )come_increment_ref_count(sType_clone(info->come_method_block_function_result_type), "39method2.nc", 550, 954);
                    __right_value0 = (void*)0;
                    generics_fun_method_block_lambda_type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(generics_fun->mParamTypes,-1)));
                    generics_fun_method_block_result_type=generics_fun_method_block_lambda_type->mResultType;
                    if(generics_fun_method_block_result_type->mClass->mMethodGenerics) {
                        method_generics_num=generics_fun_method_block_result_type->mClass->mMethodGenericsNum;
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num,(struct sType* )come_increment_ref_count(sType_clone(method_block_result_type), "39method2.nc", 557, 979));
                    }
                    n=0;
                    for(_o2_saved_6=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_method_block_lambda_type->mParamTypes, "39method2.nc", 560, 980),it=list$1sType$ph_begin(_o2_saved_6)                    ;!list$1sType$ph_end(_o2_saved_6);it=list$1sType$ph_next(_o2_saved_6)){
                        if(it->mClass->mMethodGenerics) {
                            method_generics_num_50=it->mClass->mMethodGenericsNum;
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_50,(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value2=list$1sType$ph_operator_load_element(method_block_lambda_type->mParamTypes,n)))), "39method2.nc", 563, 981));
                            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 563, 982);
                            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 563, 983);
                        }
                        n++;
                    }
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_params_51=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "39method2.nc", 568, 984, "struct list$1CVALUE$ph*"), "39method2.nc", 568, 985)), "39method2.nc", 568, 986);
                    i=0;
                    for(_o2_saved_7=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 571, 987),it_52=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_7)                    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_7);it_52=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_7)){
                        multiple_assign_var11=it_52;
                        label=(char* )come_increment_ref_count(multiple_assign_var11->v1, "39method2.nc", 572, 988);
                        node=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2, "39method2.nc", 572, 989);
                        if(i==0) {
                            list$1CVALUE$ph_push_back(come_params_51,(struct CVALUE* )come_increment_ref_count(obj_value, "39method2.nc", 575, 990));
                            i++;
                        }
                        else {
                            Value_53=node_compile(node,info);
                            if(!Value_53) {
                                                                __result_obj__0 = (_Bool)0;
                                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 580, 991));
                                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 580, 992):(void*)0);
                                come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 993);
                                come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 994);
                                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 995);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 996);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 997);
                                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 580, 998));
                                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 580, 999));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 1000);
                                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 1001);
                                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 580, 1002));
                                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 580, 1003));
                                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 580, 1004));
                                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 580, 1005));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 1006);
                                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 580, 1007):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 1008);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 1009);
                                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 1010);
                                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 580, 1011);
                                neo_current_frame = fr.prev;
                                return __result_obj__0;
                            }
                            __right_value0 = (void*)0;
                            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 583, 1012);
                            __right_value0 = (void*)0;
                            __dec_obj87=come_value->type,
                            come_value->type=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "39method2.nc", 584, 1014);
                            come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 584, 1013);
                            list$1CVALUE$ph_push_back(come_params_51,(struct CVALUE* )come_increment_ref_count(come_value, "39method2.nc", 585, 1015));
                            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 587, 1016);
                        }
                        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 588, 1017));
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 588, 1018):(void*)0);
                    }
                    if(generics_fun->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_54=generics_fun->mResultType->mClass->mMethodGenericsNum;
                        if(info->function_result_type) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_54,(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "39method2.nc", 592, 1019));
                        }
                    }
                    n=0;
                    for(_o2_saved_8=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "39method2.nc", 596, 1020),it_55=list$1sType$ph_begin(_o2_saved_8)                    ;!list$1sType$ph_end(_o2_saved_8);it_55=list$1sType$ph_next(_o2_saved_8)){
                        if(it_55->mClass->mMethodGenerics) {
                            method_generics_num_56=it_55->mClass->mMethodGenericsNum;
                            if(n<list$1CVALUE$ph_length(come_params_51)) {
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                __right_value2 = (void*)0;
                                __right_value3 = (void*)0;
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_56,(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_51,n)))->type), "39method2.nc", 600, 1021));
                                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 600, 1022);
                                come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 600, 1023);
                            }
                        }
                        n++;
                    }
                    come_call_finalizer(sType_finalize, method_block_lambda_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1024);
                    come_call_finalizer(sType_finalize, method_block_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1025);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1026);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1027);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1028);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1029);
                }
                else {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    come_params_57=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "39method2.nc", 607, 1030, "struct list$1CVALUE$ph*"), "39method2.nc", 607, 1031)), "39method2.nc", 607, 1032);
                    i_58=0;
                    for(_o2_saved_9=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 610, 1033),it_59=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_9)                    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_9);it_59=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_9)){
                        multiple_assign_var12=it_59;
                        label_60=(char* )come_increment_ref_count(multiple_assign_var12->v1, "39method2.nc", 611, 1034);
                        node_61=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2, "39method2.nc", 611, 1035);
                        if(i_58==0) {
                            list$1CVALUE$ph_push_back(come_params_57,(struct CVALUE* )come_increment_ref_count(obj_value, "39method2.nc", 614, 1036));
                            i_58++;
                        }
                        else {
                            Value_62=node_compile(node_61,info);
                            if(!Value_62) {
                                                                __result_obj__0 = (_Bool)0;
                                (label_60 = come_decrement_ref_count(label_60, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 619, 1037));
                                ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 619, 1038):(void*)0);
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1039);
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1040);
                                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 619, 1041));
                                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 619, 1042));
                                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1043);
                                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1044);
                                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 619, 1045));
                                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 619, 1046));
                                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 619, 1047));
                                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 619, 1048));
                                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1049);
                                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 619, 1050):(void*)0);
                                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1051);
                                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1052);
                                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1053);
                                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 619, 1054);
                                neo_current_frame = fr.prev;
                                return __result_obj__0;
                            }
                            __right_value0 = (void*)0;
                            come_value_63=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 622, 1055);
                            __right_value0 = (void*)0;
                            __dec_obj88=come_value_63->type,
                            come_value_63->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_63->type,info->generics_type,info), "39method2.nc", 623, 1057);
                            come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 623, 1056);
                            list$1CVALUE$ph_push_back(come_params_57,(struct CVALUE* )come_increment_ref_count(come_value_63, "39method2.nc", 624, 1058));
                            come_call_finalizer(CVALUE_finalize, come_value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 626, 1059);
                        }
                        (label_60 = come_decrement_ref_count(label_60, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 627, 1060));
                        ((node_61) ? node_61 = come_decrement_ref_count(node_61, ((struct sNode*)node_61)->finalize, ((struct sNode*)node_61)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 627, 1061):(void*)0);
                    }
                    if(generics_fun->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_64=generics_fun->mResultType->mClass->mMethodGenericsNum;
                        if(info->function_result_type) {
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_64,(struct sType* )come_increment_ref_count(sType_clone(info->function_result_type), "39method2.nc", 631, 1062));
                        }
                    }
                    n_65=0;
                    for(_o2_saved_10=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "39method2.nc", 635, 1063),it_66=list$1sType$ph_begin(_o2_saved_10)                    ;!list$1sType$ph_end(_o2_saved_10);it_66=list$1sType$ph_next(_o2_saved_10)){
                        if(it_66->mClass->mMethodGenerics) {
                            method_generics_num_67=it_66->mClass->mMethodGenericsNum;
                            if(n_65<list$1CVALUE$ph_length(come_params_57)) {
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                __right_value2 = (void*)0;
                                __right_value3 = (void*)0;
                                list$1sType$ph_operator_store_element(info->method_generics_types,method_generics_num_67,(struct sType* )come_increment_ref_count(sType_clone(((struct CVALUE* )(__right_value2=list$1CVALUE$ph_operator_load_element(come_params_57,n_65)))->type), "39method2.nc", 639, 1064));
                                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 639, 1065);
                                come_call_finalizer(CVALUE_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 639, 1066);
                            }
                        }
                        n_65++;
                    }
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_57, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1067);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1068);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 646, 1069);
                }
                map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(generics_fun_name, "39method2.nc", 646, 1070),(_Bool)0);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 648, 1071));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 648, 1072));
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 648, 1073);
            }
        }
        info->no_output_come_code=no_output_come_code;
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 652, 1074);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 652, 1075));
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 652, 1076));
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 652, 1077));
    }
    klass=obj_type->mClass;
    calling_dynamic_method=(_Bool)0;
    lambda_type=((void*)0);
    for(_o2_saved_11=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "39method2.nc", 656, 1078),it_69=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_11)    ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_11);it_69=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_11)){
        multiple_assign_var13=it_69;
        field_name=(char* )come_increment_ref_count(multiple_assign_var13->v1, "39method2.nc", 657, 1079);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var13->v2, "39method2.nc", 657, 1080);
        if(string_operator_equals(field_name,fun_name)&&string_operator_equals(field_type->mClass->mName,"lambda")) {
            calling_dynamic_method=(_Bool)1;
            lambda_type=field_type;
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 662, 1081));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 662, 1082);
            break;
        }
        (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 666, 1083));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 666, 1084);
    }
    if(klass->mProtocol&&calling_dynamic_method) {
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(lambda_type->mResultType), "39method2.nc", 667, 1085);
        result_type->mStatic=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_71=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "39method2.nc", 670, 1086, "struct list$1CVALUE$ph*"), "39method2.nc", 670, 1087)), "39method2.nc", 670, 1088);
        i_72=0;
        for(_o2_saved_12=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 673, 1089),it_73=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_12)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_12);it_73=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_12)){
            multiple_assign_var14=it_73;
            label_74=(char* )come_increment_ref_count(multiple_assign_var14->v1, "39method2.nc", 674, 1090);
            node_75=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2, "39method2.nc", 674, 1091);
            if(i_72==0) {
                list$1CVALUE$ph_push_back(come_params_71,(struct CVALUE* )come_increment_ref_count(obj_value, "39method2.nc", 677, 1092));
                i_72++;
            }
            else {
                Value_76=node_compile(node_75,info);
                if(!Value_76) {
                                        __result_obj__0 = (_Bool)0;
                    (label_74 = come_decrement_ref_count(label_74, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 682, 1093));
                    ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 682, 1094):(void*)0);
                    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1095);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1096);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1097);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 682, 1098));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1099);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 682, 1100):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1101);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1102);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1103);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1104);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 682, 1105);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_77=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 685, 1106);
                __right_value0 = (void*)0;
                __dec_obj89=come_value_77->type,
                come_value_77->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_77->type,info->generics_type,info), "39method2.nc", 687, 1108);
                come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 687, 1107);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("(a). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_72)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_72-1))),come_value_77->type,come_value_77,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 689, 1109));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 689, 1110));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 689, 1111));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 689, 1112);
                if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_72-1)))->mHeap&&come_value_77->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 690, 1113);
_conditional_value_X0;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(lambda_type->mParamTypes,i_72-1))),come_value_77->type,come_value_77,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 692, 1114);
                }
                list$1CVALUE$ph_push_back(come_params_71,(struct CVALUE* )come_increment_ref_count(come_value_77, "39method2.nc", 695, 1115));
                i_72++;
                come_call_finalizer(CVALUE_finalize, come_value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 699, 1116);
            }
            (label_74 = come_decrement_ref_count(label_74, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 701, 1117));
            ((node_75) ? node_75 = come_decrement_ref_count(node_75, ((struct sNode*)node_75)->finalize, ((struct sNode*)node_75)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 701, 1118):(void*)0);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 701, 1119, "struct buffer* "), "39method2.nc", 701, 1120)), "39method2.nc", 701, 1121);
        buffer_append_format(buf,"%s->%s",obj_value->c_value,fun_name);
        buffer_append_str(buf,"(");
        j=0;
        for(_o2_saved_13=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_71, "39method2.nc", 707, 1122),it_78=list$1CVALUE$ph_begin(_o2_saved_13)        ;!list$1CVALUE$ph_end(_o2_saved_13);it_78=list$1CVALUE$ph_next(_o2_saved_13)){
            if(j==0) {
                __right_value0 = (void*)0;
                __dec_obj90=it_78->c_value,
                it_78->c_value=(char* )come_increment_ref_count(xsprintf("%s->_protocol_obj",it_78->c_value), "39method2.nc", 709, 1124);
                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 709, 1123);
            }
            buffer_append_str(buf,it_78->c_value);
            if(j!=list$1CVALUE$ph_length(come_params_71)-1) {
                buffer_append_str(buf,",");
            }
            j++;
        }
        buffer_append_str(buf,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "39method2.nc", 721, 1125, "struct CVALUE* "), "39method2.nc", 721, 1126)), "39method2.nc", 721, 1127);
        __right_value0 = (void*)0;
        __dec_obj91=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "39method2.nc", 723, 1129);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 723, 1128);
        __right_value0 = (void*)0;
        result_type2=(struct sType* )come_increment_ref_count(solve_generics(result_type,info->generics_type,info), "39method2.nc", 725, 1130);
        __right_value0 = (void*)0;
        __dec_obj92=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(result_type2), "39method2.nc", 727, 1132);
        come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 727, 1131);
        if(come_value2->type) {
            come_value2->type->mStatic=(_Bool)0;
        }
        come_value2->var=((void*)0);
        if(result_type2->mHeap) {
            append_object_to_right_values(come_value2,result_type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        }
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "39method2.nc", 739, 1133));
        __dec_obj93=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_43, "39method2.nc", 742, 1135);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 742, 1134);
        info->calling_fun=((void*)0);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1136);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1137);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1138);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1139);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_13, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1140);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1141);
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1142);
    }
    else {
        __right_value0 = (void*)0;
        multiple_assign_var15=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,obj_type,info,(_Bool)0)));
        generics_fun_name_79=(char* )come_increment_ref_count(multiple_assign_var15->v1, "39method2.nc", 747, 1143);
        fun_80=multiple_assign_var15->v2;
        generics_fun_81=multiple_assign_var15->v3;
        come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 747, 1144);
        if(fun_80==((void*)0)) {
            err_msg(info,"function not found(%s, %s) at method(%s)(ZY)",generics_fun_name_79,fun_name,info->come_fun->mName);
                        __result_obj__0 = (_Bool)1;
            (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 751, 1145));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 751, 1146));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 751, 1147);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 751, 1148):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 751, 1149);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 751, 1150);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 751, 1151);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 751, 1152);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 751, 1153);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        if(list$1sType$ph_length(fun_80->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
                        __result_obj__0 = (_Bool)1;
            (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 756, 1154));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 756, 1155));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 756, 1156);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 756, 1157):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 756, 1158);
            come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 756, 1159);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 756, 1160);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 756, 1161);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 756, 1162);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        result_type_82=(struct sType* )come_increment_ref_count(sType_clone(fun_80->mResultType), "39method2.nc", 759, 1163);
        __right_value0 = (void*)0;
        __dec_obj94=result_type_82,
        result_type_82=(struct sType* )come_increment_ref_count(solve_generics(result_type_82,info->generics_type,info), "39method2.nc", 761, 1165);
        come_call_finalizer(sType_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 761, 1164);
        result_type_82->mStatic=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "39method2.nc", 765, 1166, "struct list$1sType$ph*"), "39method2.nc", 765, 1167)), "39method2.nc", 765, 1168);
        for(_o2_saved_14=(struct list$1sType$ph*)come_increment_ref_count(fun_80->mParamTypes, "39method2.nc", 766, 1169),it_83=list$1sType$ph_begin(_o2_saved_14)        ;!list$1sType$ph_end(_o2_saved_14);it_83=list$1sType$ph_next(_o2_saved_14)){
            if(it_83==((void*)0)) {
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(sType_clone(it_83), "39method2.nc", 768, 1170));
            }
            else {
                __right_value0 = (void*)0;
                it2=(struct sType* )come_increment_ref_count(solve_generics(it_83,info->generics_type,info), "39method2.nc", 771, 1171);
                no_solved_obj_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "39method2.nc", 773, 1172);
                __right_value0 = (void*)0;
                it3=(struct sType* )come_increment_ref_count(solve_generics(it_83,no_solved_obj_type,info), "39method2.nc", 774, 1173);
                list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(it2, "39method2.nc", 776, 1174));
                come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 778, 1175);
                come_call_finalizer(sType_finalize, no_solved_obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 778, 1176);
                come_call_finalizer(sType_finalize, it3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 778, 1177);
            }
        }
        __right_value0 = (void*)0;
        type_checking_param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types), "39method2.nc", 780, 1178);
        if(generics_fun_81) {
            n_84=0;
            for(_o2_saved_15=(struct list$1sType$ph*)come_increment_ref_count(generics_fun_81->mParamTypes, "39method2.nc", 783, 1179),it_85=list$1sType$ph_begin(_o2_saved_15)            ;!list$1sType$ph_end(_o2_saved_15);it_85=list$1sType$ph_next(_o2_saved_15)){
                if(it_85==((void*)0)) {
                }
                else {
                    no_solved_obj_type_86=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "39method2.nc", 787, 1180);
                    __right_value0 = (void*)0;
                    it3_87=(struct sType* )come_increment_ref_count(solve_generics(it_85,no_solved_obj_type_86,info), "39method2.nc", 788, 1181);
                    come_call_finalizer(sType_finalize, no_solved_obj_type_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 791, 1182);
                    come_call_finalizer(sType_finalize, it3_87, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 791, 1183);
                }
                n_84++;
            }
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 795, 1184);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_params_88=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "39method2.nc", 795, 1185, "struct list$1CVALUE$ph*"), "39method2.nc", 795, 1186)), "39method2.nc", 795, 1187);
        for(i_89=0        ;i_89<list$1sType$ph_length(fun_80->mParamTypes)-(((method_block)?(2):(0)));i_89++){
            list$1CVALUE$ph_add(come_params_88,((void*)0));
        }
        first_param=(_Bool)1;
        for(_o2_saved_16=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 802, 1202),it_92=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_16)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_16);it_92=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_16)){
            multiple_assign_var16=it_92;
            label_93=(char* )come_increment_ref_count(multiple_assign_var16->v1, "39method2.nc", 803, 1203);
            node_94=(struct sNode*)come_increment_ref_count(multiple_assign_var16->v2, "39method2.nc", 803, 1204);
            if(first_param) {
                first_param=(_Bool)0;
            }
            else if(label_93) {
                n_95=0;
                check=(_Bool)0;
                for(_o2_saved_17=(struct list$1char$ph*)come_increment_ref_count(fun_80->mParamNames, "39method2.nc", 811, 1205),it_97=list$1char$ph_begin(_o2_saved_17)                ;!list$1char$ph_end(_o2_saved_17);it_97=list$1char$ph_next(_o2_saved_17)){
                    if(string_operator_equals(label_93,it_97)) {
                        check=(_Bool)1;
                        break;
                    }
                    n_95++;
                }
                if(!check) {
                    err_msg(info,"invalid label name(%s)",label_93);
                }
                Value_99=node_compile(node_94,info);
                if(!Value_99) {
                                        __result_obj__0 = (_Bool)0;
                    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1206);
                    (label_93 = come_decrement_ref_count(label_93, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 825, 1207));
                    ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 825, 1208):(void*)0);
                    (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 825, 1209));
                    come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1210);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1211);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1212);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1213);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1214);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1215);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 825, 1216));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1217);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 825, 1218):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1219);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1220);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1221);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1222);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 825, 1223);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_100=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 828, 1224);
                __right_value0 = (void*)0;
                __dec_obj98=come_value_100->type,
                come_value_100->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_100->type,info->generics_type,info), "39method2.nc", 830, 1226);
                come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 830, 1225);
                if(__right_value0 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_95)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 832, 1227);
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("(b). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(n_95)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,n_95))),come_value_100->type,come_value_100,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 833, 1228));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 833, 1229));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 833, 1230));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 833, 1231);
                }
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X2=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_95)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,n_95)))->mHeap&&come_value_100->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 835, 1232);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 835, 1233);
_conditional_value_X2;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,n_95))),come_value_100->type,come_value_100,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 836, 1234);
                }
                list$1CVALUE$ph_replace(come_params_88,n_95,(struct CVALUE* )come_increment_ref_count(come_value_100, "39method2.nc", 839, 1243));
                come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 841, 1244);
                come_call_finalizer(CVALUE_finalize, come_value_100, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 841, 1245);
            }
            (label_93 = come_decrement_ref_count(label_93, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 843, 1246));
            ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 843, 1247):(void*)0);
        }
        i_102=0;
        for(_o2_saved_18=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 844, 1248),it_103=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_18)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_18);it_103=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_18)){
            multiple_assign_var17=it_103;
            label_104=(char* )come_increment_ref_count(multiple_assign_var17->v1, "39method2.nc", 845, 1249);
            node_105=(struct sNode*)come_increment_ref_count(multiple_assign_var17->v2, "39method2.nc", 845, 1250);
            if(i_102==0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                check_assign_type(((char*)(__right_value2=xsprintf("(c). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_102)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_102))),obj_value->type,obj_value,info);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 848, 1251));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 848, 1252));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 848, 1253));
                come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 848, 1254);
                if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&obj_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 849, 1255);
_conditional_value_X3;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102))),obj_value->type,obj_value,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 850, 1256);
                }
                else if(__right_value0 = (void*)0,
({(_conditional_value_X4=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&!obj_value->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 852, 1257);
_conditional_value_X4;})) {
                    __right_value0 = (void*)0;
                    err_msg(info,"require heap parametor(%s)",((char* )(__right_value0=list$1char$ph_operator_load_element(fun_80->mParamNames,i_102))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 853, 1276));
                                        __result_obj__0 = (_Bool)1;
                    (label_104 = come_decrement_ref_count(label_104, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 854, 1277));
                    ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 854, 1278):(void*)0);
                    (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 854, 1279));
                    come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1280);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1281);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1282);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1283);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1284);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1285);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1286);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 854, 1287));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1288);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 854, 1289):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1290);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1291);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1292);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1293);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 854, 1294);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                list$1CVALUE$ph_replace(come_params_88,i_102,(struct CVALUE* )come_increment_ref_count(obj_value, "39method2.nc", 856, 1295));
                i_102++;
            }
            else if(label_104) {
            }
            else {
                while((_Bool)1) {
                    if(__right_value0 = (void*)0,
({(_conditional_value_X5=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 864, 1296);
_conditional_value_X5;})) {
                        break;
                    }
                    else {
                        i_102++;
                    }
                }
                Value_108=node_compile(node_105,info);
                if(!Value_108) {
                                        __result_obj__0 = (_Bool)0;
                    (label_104 = come_decrement_ref_count(label_104, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 873, 1297));
                    ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 873, 1298):(void*)0);
                    (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 873, 1299));
                    come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1300);
                    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1301);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1302);
                    come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1303);
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1304);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1305);
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1306);
                    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 873, 1307));
                    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1308);
                    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 873, 1309):(void*)0);
                    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1310);
                    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1311);
                    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1312);
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1313);
                    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 873, 1314);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                come_value_109=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 876, 1315);
                __right_value0 = (void*)0;
                __dec_obj100=come_value_109->type,
                come_value_109->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_109->type,info->generics_type,info), "39method2.nc", 878, 1317);
                come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 878, 1316);
                if(__right_value0 = (void*)0,
({(_conditional_value_X6=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 880, 1318);
_conditional_value_X6;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    check_assign_type(((char*)(__right_value2=xsprintf("(d). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_102)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_102))),come_value_109->type,come_value_109,info);
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 881, 1319));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 881, 1320));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 881, 1321));
                    come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 881, 1322);
                }
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X7=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&come_value_109->type->mHeap));                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 883, 1323);
                come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 883, 1324);
_conditional_value_X7;})) {
                    __right_value0 = (void*)0;
                    std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102))),come_value_109->type,come_value_109,info);
                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 884, 1325);
                }
                list$1CVALUE$ph_replace(come_params_88,i_102,(struct CVALUE* )come_increment_ref_count(come_value_109, "39method2.nc", 887, 1326));
                i_102++;
                come_call_finalizer(CVALUE_finalize, come_value_109, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 890, 1327);
            }
            (label_104 = come_decrement_ref_count(label_104, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 892, 1328));
            ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 892, 1329):(void*)0);
        }
        while((_Bool)1) {
            if(__right_value0 = (void*)0,
({(_conditional_value_X8=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));            come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 893, 1330);
_conditional_value_X8;})) {
                break;
            }
            else {
                i_102++;
            }
        }
        if(list$1tuple2$2char$phsNode$ph$ph_length(params)<list$1sType$ph_length(fun_80->mParamTypes)+(((method_block)?(-2):(0)))) {
            for(;i_102<list$1sType$ph_length(fun_80->mParamTypes)+(((method_block)?(-2):(0)));i_102++){
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                default_param=(char* )come_increment_ref_count((char* )come_memdup(((char* )(__right_value0=list$1char$ph_operator_load_element(fun_80->mParamDefaultParametors,i_102))), "39method2.nc", 904, 1331, "char* "), "39method2.nc", 904, 1332);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 904, 1333));
                __right_value0 = (void*)0;
                param_name=((char* )(__right_value0=list$1char$ph_operator_load_element(fun_80->mParamNames,i_102)));
                if(__right_value0 = (void*)0,
({(_conditional_value_X9=(default_param&&string_operator_not_equals(default_param,"")&&((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));                come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 907, 1334);
_conditional_value_X9;})) {
                    source=(struct buffer* )come_increment_ref_count(info->source, "39method2.nc", 908, 1335);
                    p=info->p;
                    head=info->head;
                    sline=info->sline;
                    __right_value0 = (void*)0;
                    __dec_obj101=info->source,
                    info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(default_param), "39method2.nc", 913, 1337);
                    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 913, 1336);
                    if(info->p==((void*)0)) {
                        info->p=info->source->buf;
                    }
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    no_output_come_code_110=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    __right_value0 = (void*)0;
                    node_111=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "39method2.nc", 923, 1338);
                    Value_112=node_compile(node_111,info);
                    if(!Value_112) {
                                                __result_obj__0 = (_Bool)0;
                        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1339);
                        ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 926, 1340):(void*)0);
                        (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 926, 1341));
                        (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 926, 1342));
                        come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1343);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1344);
                        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1345);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1346);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1347);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1348);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1349);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 926, 1350));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1351);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 926, 1352):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1353);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1354);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1355);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1356);
                        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 926, 1357);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    info->no_output_come_code=no_output_come_code_110;
                    __dec_obj102=info->source,
                    info->source=(struct buffer* )come_increment_ref_count(source, "39method2.nc", 931, 1359);
                    come_call_finalizer(buffer_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 931, 1358);
                    if(info->p==((void*)0)) {
                        info->p=info->source->buf;
                    }
                    info->p=info->source->buf;
                    info->p=p;
                    info->head=head;
                    info->sline=sline;
                    __right_value0 = (void*)0;
                    come_value_113=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 940, 1360);
                    __right_value0 = (void*)0;
                    __dec_obj103=come_value_113->type,
                    come_value_113->type=(struct sType* )come_increment_ref_count(solve_generics(come_value_113->type,info->generics_type,info), "39method2.nc", 941, 1362);
                    come_call_finalizer(sType_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 941, 1361);
                    if(__right_value0 = (void*)0,
({(_conditional_value_X10=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))));                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 942, 1363);
_conditional_value_X10;})) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        check_assign_type(((char*)(__right_value2=xsprintf("(e). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i_102)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(type_checking_param_types,i_102))),come_value_113->type,come_value_113,info);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 943, 1364));
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 943, 1365));
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 943, 1366));
                        come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 943, 1367);
                    }
                    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X11=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i_102)))->mHeap&&come_value_113->type->mHeap));                    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 945, 1368);
                    come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 945, 1369);
_conditional_value_X11;})) {
                        __right_value0 = (void*)0;
                        std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i_102))),come_value_113->type,come_value_113,info);
                        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 946, 1370);
                    }
                    list$1CVALUE$ph_replace(come_params_88,i_102,(struct CVALUE* )come_increment_ref_count(come_value_113, "39method2.nc", 948, 1371));
                    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 956, 1372);
                    ((node_111) ? node_111 = come_decrement_ref_count(node_111, ((struct sNode*)node_111)->finalize, ((struct sNode*)node_111)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 956, 1373):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_113, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 956, 1374);
                }
                else {
                    if(__right_value0 = (void*)0,
({(_conditional_value_X12=(((struct CVALUE* )(__right_value0=list$1CVALUE$ph_operator_load_element(come_params_88,i_102)))==((void*)0)));                    come_call_finalizer(CVALUE_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 951, 1375);
_conditional_value_X12;})) {
                        err_msg(info,"require parametor(%s) %d",fun_80->mName,i_102);
                                                __result_obj__0 = (_Bool)1;
                        (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 953, 1376));
                        (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 953, 1377));
                        come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1378);
                        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1379);
                        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1380);
                        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1381);
                        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1382);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1383);
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1384);
                        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 953, 1385));
                        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1386);
                        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 953, 1387):(void*)0);
                        come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1388);
                        come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1389);
                        come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1390);
                        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1391);
                        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 953, 1392);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                }
                (default_param = come_decrement_ref_count(default_param, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 957, 1393));
            }
        }
        if(method_block) {
            if(!compile_method_block(method_block,come_params_88,fun_80,fun_name,method_block_sline,info,(_Bool)0)) {
                                __result_obj__0 = (_Bool)0;
                (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 961, 1394));
                come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1395);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1396);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1397);
                come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1398);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1399);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1400);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1401);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 961, 1402));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1403);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 961, 1404):(void*)0);
                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1405);
                come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1406);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1407);
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1408);
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 961, 1409);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_114=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 965, 1410, "struct buffer* "), "39method2.nc", 965, 1411)), "39method2.nc", 965, 1412);
        buffer_append_str(buf_114,generics_fun_name_79);
        buffer_append_str(buf_114,"(");
        saved_obj_value=((void*)0);
        saved_var=((void*)0);
        if(result_type_82->mDefferRightValue) {
            static int n_115=0;
            n_115++;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            var_name=(char*)come_increment_ref_count(xsprintf("deffer_right_value\%s",((char* )(__right_value0=int_to_string(n_115)))), "39method2.nc", 975, 1413);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 975, 1414));
            __right_value0 = (void*)0;
            type_116=(struct sType* )come_increment_ref_count(sType_clone(obj_type), "39method2.nc", 976, 1415);
            type_116->mDefferRightValue=(_Bool)1;
            add_variable_to_table(var_name,type_116,info,(_Bool)0,(_Bool)0,(_Bool)0);
            var_=get_variable_from_table(info->lv_table,var_name);
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type_116,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 983, 1416));
            add_come_code(info,"%s=%s;\n",var_->mCValueName,obj_value->c_value);
            __dec_obj104=saved_obj_value,
            saved_obj_value=(char* )come_increment_ref_count(var_->mCValueName, "39method2.nc", 985, 1418);
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 985, 1417);
            saved_var=var_;
            j_117=0;
            for(_o2_saved_19=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_88, "39method2.nc", 989, 1419),it_118=list$1CVALUE$ph_begin(_o2_saved_19)            ;!list$1CVALUE$ph_end(_o2_saved_19);it_118=list$1CVALUE$ph_next(_o2_saved_19)){
                if(j_117==0) {
                    buffer_append_str(buf_114,saved_obj_value);
                }
                else {
                    buffer_append_str(buf_114,it_118->c_value);
                }
                if(j_117!=list$1CVALUE$ph_length(come_params_88)-1) {
                    buffer_append_str(buf_114,",");
                }
                j_117++;
            }
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1016, 1420));
            come_call_finalizer(sType_finalize, type_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1016, 1421);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1016, 1422);
        }
        else {
            j_119=0;
            for(_o2_saved_20=(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_88, "39method2.nc", 1006, 1423),it_120=list$1CVALUE$ph_begin(_o2_saved_20)            ;!list$1CVALUE$ph_end(_o2_saved_20);it_120=list$1CVALUE$ph_next(_o2_saved_20)){
                buffer_append_str(buf_114,it_120->c_value);
                if(j_119!=list$1CVALUE$ph_length(come_params_88)-1) {
                    buffer_append_str(buf_114,",");
                }
                j_119++;
            }
            come_call_finalizer(list$1CVALUE$ph$p_finalize, _o2_saved_20, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1016, 1424);
        }
        buffer_append_str(buf_114,")");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_121=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "39method2.nc", 1019, 1425, "struct CVALUE* "), "39method2.nc", 1019, 1426)), "39method2.nc", 1019, 1427);
        if(string_operator_equals(fun_name,"unwrap")||string_operator_equals(fun_name,"operator_derefference")) {
            come_value2_121->var=obj_value->var;
        }
        else {
            come_value2_121->var=((void*)0);
        }
        __right_value0 = (void*)0;
        __dec_obj105=come_value2_121->c_value,
        come_value2_121->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_114), "39method2.nc", 1027, 1429);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1027, 1428);
        __right_value0 = (void*)0;
        __dec_obj106=come_value2_121->type,
        come_value2_121->type=(struct sType* )come_increment_ref_count(sType_clone(result_type_82), "39method2.nc", 1029, 1431);
        come_call_finalizer(sType_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1029, 1430);
        if(come_value2_121->type) {
            come_value2_121->type->mStatic=(_Bool)0;
        }
        if(result_type_82->mHeap) {
            append_object_to_right_values(come_value2_121,result_type_82,info,(_Bool)0,obj_type,saved_obj_value,saved_var);
        }
        else if(saved_obj_value) {
            append_object_to_right_values(come_value2_121,result_type_82,info,(_Bool)0,obj_type,saved_obj_value,saved_var);
        }
        add_come_last_code(info,"%s",come_value2_121->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_121, "39method2.nc", 1043, 1432));
        __dec_obj107=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_43, "39method2.nc", 1046, 1434);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1046, 1433);
        info->calling_fun=fun_80;
        (generics_fun_name_79 = come_decrement_ref_count(generics_fun_name_79, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1051, 1435));
        come_call_finalizer(sType_finalize, result_type_82, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1436);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1437);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1438);
        come_call_finalizer(list$1sType$ph$p_finalize, type_checking_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1439);
        come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1440);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1441);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1442);
        come_call_finalizer(buffer_finalize, buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1443);
        (saved_obj_value = come_decrement_ref_count(saved_obj_value, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1051, 1444));
        come_call_finalizer(CVALUE_finalize, come_value2_121, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1445);
    }
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1051, 1446));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1447);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1051, 1448):(void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1449);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1450);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1451);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1452);
    come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1051, 1453);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 814));
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
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 820);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 821);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1513, 822, "struct list$1tuple2$2char$phsNode$ph$ph*"), "./neo-c.h", 1513, 826)), "./neo-c.h", 1513, 827);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "./neo-c.h", 1518, 856));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "./neo-c.h", 1521, 857));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 858);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 859);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 860);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 823);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 824);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 825);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj73;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_41;
    struct tuple2$2char$phsNode$ph* __dec_obj74;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_42;
    struct tuple2$2char$phsNode$ph* __dec_obj75;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 828);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1534, 829, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1534, 830);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj73=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 832);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 831);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1544, 833, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1544, 834);
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        __dec_obj74=litem_41->item,
        litem_41->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 836);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 835);
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1554, 837, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1554, 838);
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        __dec_obj75=litem_42->item,
        litem_42->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 840);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 839);
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 841);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj76  ;
    struct sNode* __dec_obj77;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 842);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 843);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 844, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 845);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj76=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 846, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 848);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 847);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj77=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 850);
        (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 849) :0);
    }
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 851);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 854);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 855);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 852));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 853):(void*)0);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 861);
    }
        neo_current_frame = fr.prev;
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMethodCallNode_finalize", 2, 869));
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0,(void*)0, "sMethodCallNode_finalize", 3, 870):(void*)0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "sMethodCallNode_finalize", 4, 871));
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_finalize}", 5, 872);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_finalize}", 6, 873);
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_finalize}", 7, 874);
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

static struct CVALUE*  list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_45  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 935);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 936);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 937);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2153, 938);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 939);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2161, 940);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_45,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_45, "./neo-c.h", 2169, 941);
    come_call_finalizer(CVALUE_finalize, default_value_45, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 942);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 943);
    return __result_obj__0;
}

static struct CVALUE*  list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_operator_load_element"; neo_current_frame = &fr;
    struct CVALUE*  default_value  ;
    struct CVALUE*  __result_obj__0  ;
    struct list_item$1CVALUE$ph* it;
    int i;
    struct CVALUE*  default_value_46  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct CVALUE* ));
                __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 944);
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 945);
        neo_current_frame = fr.prev;
        come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2150, 946);
        return __result_obj__0;
        come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2153, 947);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 948);
            neo_current_frame = fr.prev;
            come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2161, 949);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_46,0,sizeof(struct CVALUE* ));
        __result_obj__0 = (struct CVALUE* )come_increment_ref_count(default_value_46, "./neo-c.h", 2169, 950);
    come_call_finalizer(CVALUE_finalize, default_value_46, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 951);
    neo_current_frame = fr.prev;
    come_call_finalizer(CVALUE_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 952);
    return __result_obj__0;
}

static void list$1sType$ph_operator_store_element(struct list$1sType$ph* self, int position, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_store_element"; neo_current_frame = &fr;
    list$1sType$ph_replace(self,position,(struct sType* )come_increment_ref_count(item, "./neo-c.h", 2142, 977));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 557, 978);
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
    int i_49;
    struct sType*  __dec_obj86  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2022, 955);
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
            list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2037, 970));
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2039, 971);
        }
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(item, "./neo-c.h", 2039, 972));
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2040, 973);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_49=0;
    while(it!=((void*)0)) {
        if(position==i_49) {
            __dec_obj86=it->item,
            it->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 2047, 975);
            come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 2047, 974);
            break;
        }
        it=it->next;
        i_49++;
    }
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2054, 976);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj83  ;
    struct list_item$1sType$ph* litem_47;
    struct sType*  __dec_obj84  ;
    struct list_item$1sType$ph* litem_48;
    struct sType*  __dec_obj85  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 956);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1619, 957, "struct list_item$1sType$ph*"))), "./neo-c.h", 1619, 958);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj83=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1623, 960);
        come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 959);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1629, 961, "struct list_item$1sType$ph*"))), "./neo-c.h", 1629, 962);
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        __dec_obj84=litem_47->item,
        litem_47->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1633, 964);
        come_call_finalizer(sType_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 963);
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        __right_value0 = (void*)0;
        litem_48=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1639, 965, "struct list_item$1sType$ph*"))), "./neo-c.h", 1639, 966);
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        __dec_obj85=litem_48->item,
        litem_48->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1643, 968);
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 967);
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 969);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_68;
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
    memset(&result_68,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_68;
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
    struct tuple2$2char$phsType$ph* result_70;
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
    memset(&result_70,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_70;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_add"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj95  ;
    struct list_item$1CVALUE$ph* litem_90;
    struct CVALUE*  __dec_obj96  ;
    struct list_item$1CVALUE$ph* litem_91;
    struct CVALUE*  __dec_obj97  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 1188);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1534, 1189, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1534, 1190);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj95=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1538, 1192);
        come_call_finalizer(CVALUE_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 1191);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_90=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1544, 1193, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1544, 1194);
        litem_90->prev=self->head;
        litem_90->next=((void*)0);
        __dec_obj96=litem_90->item,
        litem_90->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1548, 1196);
        come_call_finalizer(CVALUE_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 1195);
        self->tail=litem_90;
        self->head->next=litem_90;
    }
    else {
        __right_value0 = (void*)0;
        litem_91=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1554, 1197, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1554, 1198);
        litem_91->prev=self->tail;
        litem_91->next=((void*)0);
        __dec_obj97=litem_91->item,
        litem_91->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1558, 1200);
        come_call_finalizer(CVALUE_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 1199);
        self->tail->next=litem_91;
        self->tail=litem_91;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 1201);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_96  ;
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
    memset(&result_96,0,sizeof(char* ));
        __result_obj__0 = result_96;
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
    char*  result_98  ;
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
    memset(&result_98,0,sizeof(char* ));
        __result_obj__0 = result_98;
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
    int i_101;
    struct CVALUE*  __dec_obj99  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2022, 1235);
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
            list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(default_value, "./neo-c.h", 2037, 1236));
            come_call_finalizer(CVALUE_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2039, 1237);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 2039, 1238));
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2040, 1239);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_101=0;
    while(it!=((void*)0)) {
        if(position==i_101) {
            __dec_obj99=it->item,
            it->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 2047, 1241);
            come_call_finalizer(CVALUE_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 2047, 1240);
            break;
        }
        it=it->next;
        i_101++;
    }
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2054, 1242);
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
    char*  default_value_106  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 1258);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2150, 1259));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2150, 1260));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2153, 1261));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 1262);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2161, 1263));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_106,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_106, "./neo-c.h", 2169, 1264);
    (default_value_106 = come_decrement_ref_count(default_value_106, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 1265));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 1266));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_107  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2150, 1267);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2150, 1268));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2150, 1269));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2153, 1270));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2161, 1271);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2161, 1272));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_107,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_107, "./neo-c.h", 2169, 1273);
    (default_value_107 = come_decrement_ref_count(default_value_107, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 1274));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 1275));
    return __result_obj__0;
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

char*  trim_last_bracket(char*  all_code  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "trim_last_bracket"; neo_current_frame = &fr;
    char* p3;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    p3=all_code+strlen(all_code);
    while(p3>=all_code) {
        if(*p3==125&&*(p3+1)!=41) {
            break;
        }
        else {
            p3--;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(all_code,0,p3-all_code))), "39method2.nc", 1067, 1454);
    (all_code = come_decrement_ref_count(all_code, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1067, 1455));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1067, 1456));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "39method2.nc", 1067, 1457));
    return __result_obj__0;
}

struct sNode* parse_iterator_it(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_iterator_it"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* right_value;
    void* __right_value1 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    info->p+=strlen("`it");
    skip_spaces_and_lf(info);
    expected_next_character(61,info);
    right_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "39method2.nc", 1077, 1458);
    __right_value0 = (void*)0;
    node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("it"), "39method2.nc", 1079, 1459),((void*)0),((void*)0),((void*)0),(_Bool)1,right_value,info,(_Bool)1), "39method2.nc", 1079, 1460);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "39method2.nc", 1081, 1461);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1081, 1462):(void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1081, 1463):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1081, 1464):(void*)0);
    return __result_obj__0;
}

struct sIterCallNode* sIterCallNode_initialize(struct sIterCallNode* self, const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj108;
    struct sNode* __dec_obj109;
    char*  __dec_obj110  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj111;
    struct buffer*  __dec_obj112  ;
    struct sIterCallNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIterCallNode*)come_increment_ref_count(self, "39method2.nc", 1089, 1465),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1089, 1466);
    __right_value0 = (void*)0;
    __dec_obj108=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj), "39method2.nc", 1091, 1468);
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0, "39method2.nc", 1091, 1467) :0);
    __right_value0 = (void*)0;
    __dec_obj109=self->parent_call_node,
    self->parent_call_node=(struct sNode*)come_increment_ref_count(sNode_clone(parent_call_node), "39method2.nc", 1092, 1470);
    (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0, (void*)0, "39method2.nc", 1092, 1469) :0);
    __right_value0 = (void*)0;
    __dec_obj110=self->fun_name,
    self->fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name,"39method2.nc",1093), "39method2.nc", 1093, 1472);
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1093, 1471);
    __right_value0 = (void*)0;
    __dec_obj111=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(params), "39method2.nc", 1094, 1474);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1094, 1473);
    __right_value0 = (void*)0;
    __dec_obj112=self->method_block,
    self->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(method_block), "39method2.nc", 1095, 1476);
    come_call_finalizer(buffer_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1095, 1475);
    self->method_block_sline=method_block_sline;
        __result_obj__0 = (struct sIterCallNode*)come_increment_ref_count(self, "39method2.nc", 1099, 1477);
    come_call_finalizer(sIterCallNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 1099, 1484);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1099, 1485):(void*)0);
    ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1099, 1486):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIterCallNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "39method2.nc}", 1099, 1487);
    return __result_obj__0;
}

struct sNode* sIterCallNode_left_value(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_left_value"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
        __result_obj__0 = self->parent_call_node;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool sIterCallNode_terminated(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

char*  sIterCallNode_kind(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIterCall","39method2.nc",1117))), "39method2.nc", 1117, 1488);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1117, 1489));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "39method2.nc", 1117, 1490));
    return __result_obj__0;
}

_Bool sIterCallNode_compile(struct sIterCallNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_compile"; neo_current_frame = &fr;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value0 = (void*)0;
    struct sNode* obj;
    struct buffer*  method_block  ;
    struct sNode* parent_call_node;
    _Bool recursive;
    struct CVALUE*  obj_value  ;
    struct sType*  obj_type  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  __dec_obj113  ;
    char*  __dec_obj114  ;
    struct sType*  __dec_obj115  ;
    struct sType*  __dec_obj116  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    _Bool materialize_iter_source;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  __dec_obj117  ;
    struct sType*  __dec_obj118  ;
    char*  temp_name  ;
    struct sVar*  var_  ;
    struct sType*  temp_type  ;
    char*  __dec_obj119  ;
    struct sType*  __dec_obj120  ;
    _Bool Value_122;
    struct CVALUE*  __dec_obj121  ;
    struct sType*  __dec_obj122  ;
    char*  __dec_obj123  ;
    struct sType*  __dec_obj124  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct list$1sType$ph* param_types;
    struct list$1sType$ph* _o2_saved_21;
    struct sType*  it  ;
    struct sType*  it2  ;
    struct sType*  no_solved_obj_type  ;
    struct sType*  it3  ;
    struct list$1CVALUE$ph* come_params;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_22;
    struct tuple2$2char$phsNode$ph* it_123;
    struct tuple2$2char$phsNode$ph* multiple_assign_var18
;    char*  label  =0;
    struct sNode* node=0;
    _Bool Value_124;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj125  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    int i_125;
    struct list$1char$ph* _o2_saved_23;
    char*  it_126  ;
    char*  name  ;
    struct CVALUE*  come_value_127  ;
    struct sType*  come_type  ;
    _Bool use_iter_next;
    char*  text  ;
    char* p;
    char* end;
    struct buffer*  buf  ;
    _Bool squort;
    _Bool dquort;
    char*  method_block2  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    struct sNode* _inf_value4;
    struct sIterCallNode* _inf_obj_value4;
    struct sNode* last_node;
    struct sNode* node_128;
    _Bool Value_129;
    char*  all_code  ;
    char*  all_code2  ;
    struct buffer*  source  ;
    char* p_130;
    char* head;
    char* end_131;
    struct sType*  generics_type  ;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* first_pass_generics_type_names;
    struct list$1char$ph* second_pass_generics_type_names;
    struct list$1char$ph* __dec_obj135;
    struct buffer*  __dec_obj136  ;
    struct sType*  __dec_obj137  ;
    struct sBlock*  block  ;
    struct sType*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    _Bool no_output_come_code;
    char*  all_code2_132  ;
    struct buffer*  __dec_obj140  ;
    struct list$1char$ph* __dec_obj141;
    struct sBlock*  block_133  ;
    struct buffer*  __dec_obj142  ;
    struct sType*  __dec_obj143  ;
    struct list$1char$ph* __dec_obj144;
    char*  __dec_obj145  ;
    char*  __dec_obj146  ;
    char*  __dec_obj147  ;
    char*  text_134  ;
    _Bool use_iter_next_135;
    char* p_136;
    char* end_137;
    struct buffer*  buf_138  ;
    _Bool squort_139;
    _Bool dquort_140;
    char*  method_block2_141  ;
    char*  __dec_obj148  ;
    char*  __dec_obj149  ;
    char*  __dec_obj150  ;
    memset(&obj_value, 0, sizeof(obj_value));
    memset(&obj_type, 0, sizeof(obj_type));
    memset(&i, 0, sizeof(i));
    fun_name=(char* )come_increment_ref_count(self->fun_name, "39method2.nc", 1122, 1491);
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params, "39method2.nc", 1123, 1492);
    obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj), "39method2.nc", 1124, 1493);
    __right_value0 = (void*)0;
    method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "39method2.nc", 1125, 1494);
    __right_value0 = (void*)0;
    parent_call_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->parent_call_node), "39method2.nc", 1126, 1495);
    recursive=info->iter_buffer!=((void*)0);
    if(recursive&&info->iter_block&&info->iter_type) {
        __right_value0 = (void*)0;
        __dec_obj113=obj_value,
        obj_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "39method2.nc", 1132, 1496, "struct CVALUE* "), "39method2.nc", 1132, 1497)), "39method2.nc", 1132, 1499);
        come_call_finalizer(CVALUE_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1132, 1498);
        __right_value0 = (void*)0;
        __dec_obj114=obj_value->c_value,
        obj_value->c_value=(char* )come_increment_ref_count((char* )come_memdup(info->iter_block, "39method2.nc", 1133, 1500, "char* "), "39method2.nc", 1133, 1502);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1133, 1501);
        __right_value0 = (void*)0;
        __dec_obj115=obj_value->type,
        obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(info->iter_type), "39method2.nc", 1134, 1504);
        come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1134, 1503);
        obj_value->var=((void*)0);
        __right_value0 = (void*)0;
        __dec_obj116=obj_type,
        obj_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "39method2.nc", 1137, 1506);
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1137, 1505);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        materialize_iter_source=string_operator_equals(((char* )(__right_value1=obj->kind(obj->_protocol_obj))),"sListNode")||string_operator_equals(((char* )(__right_value3=obj->kind(obj->_protocol_obj))),"sVectorNode")||string_operator_equals(((char* )(__right_value5=obj->kind(obj->_protocol_obj))),"sMapNode");
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1140, 1507));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1141, 1508));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1142, 1509));
        if(materialize_iter_source) {
            Value=node_compile(obj,info);
            if(!Value) {
                                __result_obj__0 = (_Bool)0;
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1146, 1510));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1146, 1511);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1146, 1512):(void*)0);
                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1146, 1513);
                ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1146, 1514):(void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1146, 1515);
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1146, 1516);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            __dec_obj117=obj_value,
            obj_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 1149, 1518);
            come_call_finalizer(CVALUE_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1149, 1517);
            __right_value0 = (void*)0;
            __dec_obj118=obj_type,
            obj_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "39method2.nc", 1150, 1520);
            come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1150, 1519);
            static int n=0;
            n++;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            __right_value4 = (void*)0;
            temp_name=(char* )come_increment_ref_count(charp_operator_add(((char*)(__right_value2=xsprintf("_iter_obj_saved_"))),((char* )(__right_value3=int_to_string(n)))), "39method2.nc", 1155, 1521);
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1155, 1522));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1155, 1523));
            __right_value0 = (void*)0;
            add_variable_to_table(temp_name,((struct sType* )(__right_value0=sType_clone(obj_type))),info,(_Bool)0,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1156, 1524);
            var_=get_variable_from_table(info->lv_table,temp_name);
            __right_value0 = (void*)0;
            temp_type=(struct sType* )come_increment_ref_count(sType_clone(var_->mType), "39method2.nc", 1159, 1525);
            __right_value0 = (void*)0;
            add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(temp_type,var_->mCValueName,info,(_Bool)0,(_Bool)0))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1161, 1526));
            if(temp_type->mHeap&&obj_value->type->mHeap&&temp_type->mPointerNum>0&&obj_value->type->mPointerNum>0) {
                std_move(temp_type,obj_value->type,obj_value,info);
            }
            add_come_code(info,"%s=%s;\n",var_->mCValueName,obj_value->c_value);
            __right_value0 = (void*)0;
            __dec_obj119=obj_value->c_value,
            obj_value->c_value=(char* )come_increment_ref_count((char* )come_memdup(var_->mCValueName, "39method2.nc", 1169, 1527, "char* "), "39method2.nc", 1169, 1529);
            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1169, 1528);
            __right_value0 = (void*)0;
            __dec_obj120=obj_value->type,
            obj_value->type=(struct sType* )come_increment_ref_count(sType_clone(temp_type), "39method2.nc", 1170, 1531);
            come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1170, 1530);
            obj_value->var=var_;
            (temp_name = come_decrement_ref_count(temp_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1182, 1532));
            come_call_finalizer(sType_finalize, temp_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1182, 1533);
        }
        else {
            Value_122=node_compile(obj,info);
            if(!Value_122) {
                                __result_obj__0 = (_Bool)0;
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1175, 1534));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1175, 1535);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1175, 1536):(void*)0);
                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1175, 1537);
                ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1175, 1538):(void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1175, 1539);
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1175, 1540);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            __dec_obj121=obj_value,
            obj_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 1178, 1542);
            come_call_finalizer(CVALUE_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1178, 1541);
            __right_value0 = (void*)0;
            __dec_obj122=obj_type,
            obj_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "39method2.nc", 1179, 1544);
            come_call_finalizer(sType_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1179, 1543);
        }
        if(!recursive) {
            __right_value0 = (void*)0;
            __dec_obj123=info->iter_block,
            info->iter_block=(char* )come_increment_ref_count((char* )come_memdup(obj_value->c_value, "39method2.nc", 1183, 1545, "char* "), "39method2.nc", 1183, 1547);
            __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1183, 1546);
            __right_value0 = (void*)0;
            __dec_obj124=info->iter_type,
            info->iter_type=(struct sType* )come_increment_ref_count(sType_clone(obj_value->type), "39method2.nc", 1184, 1549);
            come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1184, 1548);
        }
    }
    __right_value0 = (void*)0;
    generics_fun_name=(char* )come_increment_ref_count(get_method_from_iter_call(fun_name,obj_type,info), "39method2.nc", 1188, 1550);
    __right_value0 = (void*)0;
    generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,generics_fun_name,((void*)0),(_Bool)0)));
    if(generics_fun==((void*)0)) {
        err_msg(info,"generics fun %s is not found",generics_fun_name);
        exit(1);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "39method2.nc", 1196, 1551, "struct list$1sType$ph*"), "39method2.nc", 1196, 1552)), "39method2.nc", 1196, 1553);
    for(_o2_saved_21=(struct list$1sType$ph*)come_increment_ref_count(generics_fun->mParamTypes, "39method2.nc", 1197, 1554),it=list$1sType$ph_begin(_o2_saved_21)    ;!list$1sType$ph_end(_o2_saved_21);it=list$1sType$ph_next(_o2_saved_21)){
        if(it==((void*)0)) {
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(sType_clone(it), "39method2.nc", 1199, 1555));
        }
        else {
            __right_value0 = (void*)0;
            it2=(struct sType* )come_increment_ref_count(solve_generics(it,info->generics_type,info), "39method2.nc", 1202, 1556);
            no_solved_obj_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "39method2.nc", 1204, 1557);
            __right_value0 = (void*)0;
            it3=(struct sType* )come_increment_ref_count(solve_generics(it,no_solved_obj_type,info), "39method2.nc", 1205, 1558);
            list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(it2, "39method2.nc", 1207, 1559));
            come_call_finalizer(sType_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1209, 1560);
            come_call_finalizer(sType_finalize, no_solved_obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1209, 1561);
            come_call_finalizer(sType_finalize, it3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1209, 1562);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_params=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "39method2.nc", 1211, 1563, "struct list$1CVALUE$ph*"), "39method2.nc", 1211, 1564)), "39method2.nc", 1211, 1565);
    i+0;
    for(_o2_saved_22=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params, "39method2.nc", 1213, 1566),it_123=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_22)    ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_22);it_123=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_22)){
        multiple_assign_var18=it_123;
        label=(char* )come_increment_ref_count(multiple_assign_var18->v1, "39method2.nc", 1214, 1567);
        node=(struct sNode*)come_increment_ref_count(multiple_assign_var18->v2, "39method2.nc", 1214, 1568);
        Value_124=node_compile(node,info);
        if(!Value_124) {
                        __result_obj__0 = (_Bool)0;
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1217, 1569));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1217, 1570):(void*)0);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1217, 1571));
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1572);
            ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1217, 1573):(void*)0);
            come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1574);
            ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1217, 1575):(void*)0);
            come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1576);
            come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1577);
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1217, 1578));
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1579);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1580);
            come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1581);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1217, 1582);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "39method2.nc", 1220, 1583);
        __right_value0 = (void*)0;
        __dec_obj125=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(solve_generics(come_value->type,info->generics_type,info), "39method2.nc", 1222, 1585);
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1222, 1584);
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1224, 1586);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            check_assign_type(((char*)(__right_value2=xsprintf("(d). \%s param num \%s is assinged to",((char* )(__right_value0=string_to_string(fun_name))),((char* )(__right_value1=int_to_string(i)))))),((struct sType* )(__right_value3=list$1sType$ph_operator_load_element(param_types,i))),come_value->type,come_value,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1225, 1587));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1225, 1588));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1225, 1589));
            come_call_finalizer(sType_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1225, 1590);
        }
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i)))&&((struct sType* )(__right_value1=list$1sType$ph_operator_load_element(param_types,i)))->mHeap&&come_value->type->mHeap));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1227, 1591);
        come_call_finalizer(sType_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1227, 1592);
_conditional_value_X1;})) {
            __right_value0 = (void*)0;
            std_move(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(param_types,i))),come_value->type,come_value,info);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1228, 1593);
        }
        list$1CVALUE$ph_add(come_params,(struct CVALUE* )come_increment_ref_count(come_value, "39method2.nc", 1231, 1594));
        i++;
        (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1235, 1595));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1235, 1596):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1235, 1597);
    }
    i_125=0;
    for(_o2_saved_23=(struct list$1char$ph*)come_increment_ref_count(generics_fun->mParamNames, "39method2.nc", 1236, 1598),it_126=list$1char$ph_begin(_o2_saved_23)    ;!list$1char$ph_end(_o2_saved_23);it_126=list$1char$ph_next(_o2_saved_23)){
        __right_value0 = (void*)0;
        name=(char* )come_increment_ref_count(__builtin_string(it_126,"39method2.nc",1237), "39method2.nc", 1237, 1599);
        __right_value0 = (void*)0;
        come_value_127=(struct CVALUE* )come_increment_ref_count(list$1CVALUE$ph_operator_load_element(come_params,i_125), "39method2.nc", 1238, 1600);
        __right_value0 = (void*)0;
        come_type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_125), "39method2.nc", 1239, 1601);
        add_variable_to_table(name,come_type,info,(_Bool)0,(_Bool)0,(_Bool)0);
        add_come_code(info,"%s=%s;\n",name,come_value_127->c_value);
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s\n;",((char* )(__right_value0=make_define_var(come_type,name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1245, 1602));
        i_125++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1249, 1603));
        come_call_finalizer(CVALUE_finalize, come_value_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1249, 1604);
        come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1249, 1605);
    }
    if(!recursive) {
        use_iter_next=info->use_iter_next;
        __right_value0 = (void*)0;
        text=(char* )come_increment_ref_count(string_operator_load_range_element(generics_fun->mBlock,1,-2), "39method2.nc", 1252, 1606);
        p=text;
        end=text+strlen(text);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 1256, 1607, "struct buffer* "), "39method2.nc", 1256, 1608)), "39method2.nc", 1256, 1609);
        squort=(_Bool)0;
        dquort=(_Bool)0;
        while(*p) {
            if(!dquort&&!squort&&*p==92) {
                p++;
                buffer_append_char(buf,*p);
                p++;
            }
            else if(!dquort&&*p==39) {
                squort=!squort;
                buffer_append_char(buf,*p);
                p++;
            }
            else if(!squort&&*p==34) {
                dquort=!dquort;
                buffer_append_char(buf,*p);
                p++;
            }
            else if(dquort||squort) {
                buffer_append_char(buf,*p);
                p++;
            }
            else if((end-p)>strlen("`block()")&&memcmp(p,"`block()",strlen("`block()"))==0) {
                p+=strlen("`block()");
                if(!use_iter_next) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    method_block2=(char* )come_increment_ref_count(trim_last_bracket((char* )come_increment_ref_count(string_operator_load_range_element(((char* )(__right_value1=buffer_to_string(method_block))),1,-1), "39method2.nc", 1282, 1610),info), "39method2.nc", 1282, 1611);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1282, 1612));
                    buffer_append_str(buf,method_block2);
                    (method_block2 = come_decrement_ref_count(method_block2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1288, 1613));
                }
                else {
                    info->use_iter_next=(_Bool)0;
                }
            }
            else if((end-p)>strlen("`next()")&&memcmp(p,"`next()",strlen("`next()"))==0) {
                p+=strlen("`next()");
                if(info->iter_next) {
                    buffer_append_str(buf,info->iter_buffer);
                    __right_value0 = (void*)0;
                    __dec_obj126=info->iter_buffer,
                    info->iter_buffer=(char*)come_increment_ref_count(xsprintf(""), "39method2.nc", 1293, 1615);
                    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1293, 1614);
                    info->use_iter_next=(_Bool)1;
                }
            }
            else if((end-p)>strlen("`self")&&memcmp(p,"`self",strlen("`self"))==0) {
                p+=strlen("`self");
                buffer_append_str(buf,obj_value->c_value);
            }
            else {
                buffer_append_char(buf,*p);
                p++;
            }
        }
        __right_value0 = (void*)0;
        __dec_obj127=info->iter_buffer,
        info->iter_buffer=(char* )come_increment_ref_count(buffer_to_string(buf), "39method2.nc", 1307, 1617);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1307, 1616);
        __right_value0 = (void*)0;
        __dec_obj128=info->iter_next,
        info->iter_next=(char* )come_increment_ref_count(buffer_to_string(buf), "39method2.nc", 1308, 1619);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1308, 1618);
        __right_value0 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 1311, 1637, "struct sNode");
        _inf_obj_value4=(struct sIterCallNode*)come_increment_ref_count((((struct sIterCallNode*)(__right_value0=sIterCallNode_clone(self)))), "39method2.nc", 1311, 1638);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sIterCallNode_finalize;
        _inf_value4->clone=(void*)sIterCallNode_clone;
        _inf_value4->compile=(void*)sIterCallNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sIterCallNode_terminated;
        _inf_value4->kind=(void*)sIterCallNode_kind;
        _inf_value4->left_value=(void*)sIterCallNode_left_value;
        __right_value1 = (void*)0;
        last_node=(struct sNode*)come_increment_ref_count(_inf_value4, "39method2.nc", 1311, 1639);
        come_call_finalizer(sIterCallNode_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1311, 1640);
        node_128=last_node;
        node_128=node_128->left_value(node_128->_protocol_obj);
        while(node_128) {
            Value_129=node_compile(node_128,info);
            if(!Value_129) {
                                __result_obj__0 = (_Bool)0;
                (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1316, 1641));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1642);
                ((last_node) ? last_node = come_decrement_ref_count(last_node, ((struct sNode*)last_node)->finalize, ((struct sNode*)last_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1316, 1643):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1316, 1644));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1645);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1316, 1646):(void*)0);
                come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1647);
                ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1316, 1648):(void*)0);
                come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1649);
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1650);
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1316, 1651));
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1652);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1653);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1654);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1655);
                come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1316, 1656);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            node_128=node_128->left_value(node_128->_protocol_obj);
        }
        all_code=(char* )come_increment_ref_count(info->iter_buffer, "39method2.nc", 1323, 1657);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        all_code2=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=charp_operator_add("{",all_code))),"}"), "39method2.nc", 1325, 1658);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1325, 1659));
        source=(struct buffer* )come_increment_ref_count(info->source, "39method2.nc", 1327, 1660);
        p_130=info->p;
        head=info->head;
        end_131=info->end;
        generics_type=(struct sType* )come_increment_ref_count(info->generics_type, "39method2.nc", 1332, 1661);
        generics_type_names=(struct list$1char$ph*)come_increment_ref_count(info->generics_type_names, "39method2.nc", 1333, 1662);
        __right_value0 = (void*)0;
        first_pass_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(info->generics_type_names), "39method2.nc", 1334, 1663);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        second_pass_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "39method2.nc", 1335, 1664, "struct list$1char$ph*"), "39method2.nc", 1335, 1665)), "39method2.nc", 1335, 1666);
        __right_value0 = (void*)0;
        list$1char$ph_add(second_pass_generics_type_names,(char*)come_increment_ref_count(xsprintf("T"), "39method2.nc", 1336, 1667));
        __dec_obj135=info->generics_type_names,
        info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(first_pass_generics_type_names, "39method2.nc", 1338, 1669);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1338, 1668);
        __right_value0 = (void*)0;
        __dec_obj136=info->source,
        info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(all_code2), "39method2.nc", 1339, 1671);
        come_call_finalizer(buffer_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1339, 1670);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->end=info->source->buf+info->source->len;
        if(obj_type->mNoSolvedGenericsType) {
            __dec_obj137=info->generics_type,
            info->generics_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "39method2.nc", 1348, 1673);
            come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1348, 1672);
            __right_value0 = (void*)0;
            list$1char$ph_add(info->generics_type_names,(char*)come_increment_ref_count(xsprintf("T"), "39method2.nc", 1349, 1674));
        }
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "39method2.nc", 1352, 1675);
        if(obj_type->mNoSolvedGenericsType) {
            __dec_obj138=info->generics_type,
            info->generics_type=(struct sType* )come_increment_ref_count(obj_type->mNoSolvedGenericsType, "39method2.nc", 1355, 1677);
            come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1355, 1676);
            __right_value0 = (void*)0;
            list$1char$ph_add(info->generics_type_names,(char*)come_increment_ref_count(xsprintf("T"), "39method2.nc", 1356, 1678));
        }
        __dec_obj139=info->iter_type,
        info->iter_type=((void*)0);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1359, 1679);
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        transpile_block(block,((void*)0),((void*)0),info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0);
        (all_code2 = come_decrement_ref_count(all_code2, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1365, 1680));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        all_code2_132=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=charp_operator_add("{",all_code))),"}"), "39method2.nc", 1365, 1681);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1365, 1682));
        info->no_output_come_code=no_output_come_code;
        __right_value0 = (void*)0;
        __dec_obj140=info->source,
        info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(all_code2_132), "39method2.nc", 1369, 1684);
        come_call_finalizer(buffer_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1369, 1683);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->end=info->source->buf+info->source->len;
        __dec_obj141=info->generics_type_names,
        info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(second_pass_generics_type_names, "39method2.nc", 1377, 1686);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1377, 1685);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1379, 1687);
        __right_value0 = (void*)0;
        block_133=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "39method2.nc", 1379, 1688);
        transpile_block(block_133,((void*)0),((void*)0),info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0);
        __dec_obj142=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "39method2.nc", 1383, 1690);
        come_call_finalizer(buffer_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1383, 1689);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->p=p_130;
        info->head=head;
        info->end=end_131;
        __dec_obj143=info->generics_type,
        info->generics_type=(struct sType* )come_increment_ref_count(generics_type, "39method2.nc", 1392, 1692);
        come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1392, 1691);
        __dec_obj144=info->generics_type_names,
        info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(generics_type_names, "39method2.nc", 1393, 1694);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1393, 1693);
        __dec_obj145=info->iter_buffer,
        info->iter_buffer=((void*)0);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1395, 1695);
        __dec_obj146=info->iter_block,
        info->iter_block=((void*)0);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1396, 1696);
        __dec_obj147=info->iter_next,
        info->iter_next=((void*)0);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1397, 1697);
        info->use_iter_next=(_Bool)0;
        (text = come_decrement_ref_count(text, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1460, 1698));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1699);
        ((last_node) ? last_node = come_decrement_ref_count(last_node, ((struct sNode*)last_node)->finalize, ((struct sNode*)last_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1460, 1700):(void*)0);
        (all_code = come_decrement_ref_count(all_code, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1460, 1701));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1702);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1703);
        come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1704);
        come_call_finalizer(list$1char$ph$p_finalize, first_pass_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1705);
        come_call_finalizer(list$1char$ph$p_finalize, second_pass_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1706);
        (all_code2_132 = come_decrement_ref_count(all_code2_132, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1460, 1707));
        come_call_finalizer(sBlock_finalize, block_133, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1708);
    }
    else {
        __right_value0 = (void*)0;
        text_134=(char* )come_increment_ref_count(string_operator_load_range_element(generics_fun->mBlock,1,-2), "39method2.nc", 1401, 1709);
        use_iter_next_135=info->use_iter_next;
        p_136=text_134;
        end_137=text_134+strlen(text_134);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_138=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 1406, 1710, "struct buffer* "), "39method2.nc", 1406, 1711)), "39method2.nc", 1406, 1712);
        squort_139=(_Bool)0;
        dquort_140=(_Bool)0;
        while(*p_136) {
            if(!dquort_140&&!squort_139&&*p_136==92) {
                p_136++;
                buffer_append_char(buf_138,*p_136);
                p_136++;
            }
            else if(!dquort_140&&*p_136==39) {
                squort_139=!squort_139;
                buffer_append_char(buf_138,*p_136);
                p_136++;
            }
            else if(!squort_139&&*p_136==34) {
                dquort_140=!dquort_140;
                buffer_append_char(buf_138,*p_136);
                p_136++;
            }
            else if(dquort_140||squort_139) {
                buffer_append_char(buf_138,*p_136);
                p_136++;
            }
            else if((end_137-p_136)>strlen("`block()")&&memcmp(p_136,"`block()",strlen("`block()"))==0) {
                p_136+=strlen("`block()");
                if(!use_iter_next_135) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    method_block2_141=(char* )come_increment_ref_count(trim_last_bracket((char* )come_increment_ref_count(string_operator_load_range_element(((char* )(__right_value1=buffer_to_string(method_block))),1,-1), "39method2.nc", 1432, 1713),info), "39method2.nc", 1432, 1714);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1432, 1715));
                    buffer_append_str(buf_138,method_block2_141);
                    (method_block2_141 = come_decrement_ref_count(method_block2_141, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1438, 1716));
                }
                else {
                    info->use_iter_next=(_Bool)0;
                }
            }
            else if((end_137-p_136)>strlen("`next()")&&memcmp(p_136,"`next()",strlen("`next()"))==0) {
                p_136+=strlen("`next()");
                if(info->iter_next) {
                    buffer_append_str(buf_138,info->iter_buffer);
                    __right_value0 = (void*)0;
                    __dec_obj148=info->iter_buffer,
                    info->iter_buffer=(char*)come_increment_ref_count(xsprintf(""), "39method2.nc", 1443, 1718);
                    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1443, 1717);
                    info->use_iter_next=(_Bool)1;
                }
            }
            else if((end_137-p_136)>strlen("`self")&&memcmp(p_136,"`self",strlen("`self"))==0) {
                p_136+=strlen("`self");
                buffer_append_str(buf_138,obj_value->c_value);
            }
            else {
                buffer_append_char(buf_138,*p_136);
                p_136++;
            }
        }
        __right_value0 = (void*)0;
        __dec_obj149=info->iter_next,
        info->iter_next=(char* )come_increment_ref_count(buffer_to_string(buf_138), "39method2.nc", 1456, 1720);
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1456, 1719);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj150=info->iter_buffer,
        info->iter_buffer=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=buffer_to_string(buf_138))),info->iter_buffer), "39method2.nc", 1457, 1722);
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1457, 1721);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1457, 1723));
        (text_134 = come_decrement_ref_count(text_134, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1460, 1724));
        come_call_finalizer(buffer_finalize, buf_138, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1725);
    }
        __result_obj__0 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1460, 1726));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1727);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1460, 1728):(void*)0);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1729);
    ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1460, 1730):(void*)0);
    come_call_finalizer(CVALUE_finalize, obj_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1731);
    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1732);
    (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1460, 1733));
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1734);
    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1735);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, come_params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1736);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1737);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_23, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1460, 1738);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sIterCallNode_finalize(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIterCallNode_finalize", 2, 1478));
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0,(void*)0, "sIterCallNode_finalize", 3, 1479):(void*)0);
    }
    if(self!=((void*)0)&&self->parent_call_node!=((void*)0)) {
        ((self->parent_call_node) ? self->parent_call_node = come_decrement_ref_count(self->parent_call_node, ((struct sNode*)self->parent_call_node)->finalize, ((struct sNode*)self->parent_call_node)->_protocol_obj, 0, 0,(void*)0, "sIterCallNode_finalize", 4, 1480):(void*)0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "sIterCallNode_finalize", 5, 1481));
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_finalize}", 6, 1482);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_finalize}", 7, 1483);
    }
        neo_current_frame = fr.prev;
}

static struct sIterCallNode* sIterCallNode_clone(struct sIterCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIterCallNode_clone"; neo_current_frame = &fr;
    struct sIterCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIterCallNode*  result  ;
    char*  __dec_obj129  ;
    struct sNode* __dec_obj130;
    struct sNode* __dec_obj131;
    char*  __dec_obj132  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj133;
    struct buffer*  __dec_obj134  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIterCallNode* )come_increment_ref_count((struct sIterCallNode *)come_calloc(1, sizeof(struct sIterCallNode )*(1), "sIterCallNode_clone", 5, 1620, "struct sIterCallNode* "), "sIterCallNode_clone", 5, 1621);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIterCallNode_clone", 7, 1622, "char* "), "sIterCallNode_clone", 7, 1624);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "sIterCallNode_clone", 7, 1623);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj130=result->obj,
        result->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj), "sIterCallNode_clone", 9, 1626);
        (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0, (void*)0, "sIterCallNode_clone", 9, 1625) :0);
    }
    if(self!=((void*)0)&&self->parent_call_node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj131=result->parent_call_node,
        result->parent_call_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->parent_call_node), "sIterCallNode_clone", 10, 1628);
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0, "sIterCallNode_clone", 10, 1627) :0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj132=result->fun_name,
        result->fun_name=(char* )come_increment_ref_count((char* )come_memdup(self->fun_name, "sIterCallNode_clone", 11, 1629, "char* "), "sIterCallNode_clone", 11, 1631);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "sIterCallNode_clone", 11, 1630);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj133=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params), "sIterCallNode_clone", 12, 1633);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_clone", 12, 1632);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj134=result->method_block,
        result->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "sIterCallNode_clone", 13, 1635);
        come_call_finalizer(buffer_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIterCallNode_clone", 13, 1634);
    }
    if(self!=((void*)0)) {
        result->method_block_sline=self->method_block_sline;
    }
        __result_obj__0 = result;
    come_call_finalizer(sIterCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIterCallNode_clone}", 15, 1636);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_method_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value5;
    struct sMethodCallNode* _inf_obj_value5;
    void* __right_value2 = (void*)0;
    struct sNode* node;
    struct sNode* __dec_obj157;
    struct sNode* __result_obj__0;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 1466, 1742, "struct sNode");
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value1=sMethodCallNode_initialize((struct sMethodCallNode* )come_increment_ref_count((struct sMethodCallNode *)come_calloc(1, sizeof(struct sMethodCallNode )*(1), "39method2.nc", 1466, 1739, "struct sMethodCallNode* "), "39method2.nc", 1466, 1740),fun_name,(struct sNode*)come_increment_ref_count(obj, "39method2.nc", 1466, 1741),params,method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info,arrow_))), "39method2.nc", 1466, 1743);
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    _inf_value5->left_value=(void*)sNodeBase_left_value;
    node=(struct sNode*)come_increment_ref_count(_inf_value5, "39method2.nc", 1466, 1761);
    come_call_finalizer(sMethodCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1466, 1762);
    __right_value0 = (void*)0;
    __dec_obj157=node,
    node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "39method2.nc", 1468, 1763),info), "39method2.nc", 1468, 1765);
    (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0, "39method2.nc", 1468, 1764) :0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "39method2.nc", 1470, 1766);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1470, 1767):(void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1470, 1768):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1470, 1769):(void*)0);
    return __result_obj__0;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMethodCallNode_clone"; neo_current_frame = &fr;
    struct sMethodCallNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMethodCallNode*  result  ;
    char*  __dec_obj151  ;
    struct sNode* __dec_obj152;
    char*  __dec_obj153  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj154;
    struct buffer*  __dec_obj155  ;
    struct list$1sType$ph* __dec_obj156;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sMethodCallNode* )come_increment_ref_count((struct sMethodCallNode *)come_calloc(1, sizeof(struct sMethodCallNode )*(1), "sMethodCallNode_clone", 5, 1744, "struct sMethodCallNode* "), "sMethodCallNode_clone", 5, 1745);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj151=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMethodCallNode_clone", 7, 1746, "char* "), "sMethodCallNode_clone", 7, 1748);
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "sMethodCallNode_clone", 7, 1747);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj152=result->obj,
        result->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj), "sMethodCallNode_clone", 9, 1750);
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0, (void*)0, "sMethodCallNode_clone", 9, 1749) :0);
    }
    if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj153=result->fun_name,
        result->fun_name=(char* )come_increment_ref_count((char* )come_memdup(self->fun_name, "sMethodCallNode_clone", 10, 1751, "char* "), "sMethodCallNode_clone", 10, 1753);
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "sMethodCallNode_clone", 10, 1752);
    }
    if(self!=((void*)0)&&self->params!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj154=result->params,
        result->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->params), "sMethodCallNode_clone", 11, 1755);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_clone", 11, 1754);
    }
    if(self!=((void*)0)&&self->method_block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj155=result->method_block,
        result->method_block=(struct buffer* )come_increment_ref_count(buffer_clone(self->method_block), "sMethodCallNode_clone", 12, 1757);
        come_call_finalizer(buffer_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_clone", 12, 1756);
    }
    if(self!=((void*)0)) {
        result->method_block_sline=self->method_block_sline;
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj156=result->method_generics_types,
        result->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->method_generics_types), "sMethodCallNode_clone", 14, 1759);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sMethodCallNode_clone", 14, 1758);
    }
    if(self!=((void*)0)) {
        result->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(self!=((void*)0)) {
        result->recursive=self->recursive;
    }
    if(self!=((void*)0)) {
        result->fun=self->fun;
    }
    if(self!=((void*)0)) {
        result->arrow_=self->arrow_;
    }
        __result_obj__0 = result;
    come_call_finalizer(sMethodCallNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMethodCallNode_clone}", 19, 1760);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_method_call_v20"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    void* __right_value2 = (void*)0;
    _Bool parse_method_generics_type;
    char* p;
    int sline;
    char*  word  ;
    struct list$1sType$ph* method_generics_types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var19
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char* p_144;
    int sline_145;
    _Bool err_flag;
    char*  label  ;
    char*  __dec_obj163  ;
    char*  __dec_obj164  ;
    _Bool no_comma;
    _Bool in_fun_param;
    _Bool type_name_exp;
    struct sNode* node;
    struct sNode* __dec_obj165;
    struct buffer*  method_block  ;
    int method_block_sline;
    char* head;
    char* tail;
    struct buffer*  __dec_obj166  ;
    int len;
    char* mem;
    struct sNode* _inf_value6;
    struct sMethodCallNode* _inf_obj_value6;
    void* __right_value3 = (void*)0;
    struct sNode* node_146;
    struct sNode* __dec_obj167;
    struct sNode* __result_obj__0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "39method2.nc", 1475, 1770, "struct list$1tuple2$2char$phsNode$ph$ph*"), "39method2.nc", 1475, 1771)), "39method2.nc", 1475, 1772);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "39method2.nc", 1476, 1787, "struct tuple2$2char$phsNode$ph"), "39method2.nc", 1476, 1797),(char* )come_increment_ref_count((char* )((void*)0), "39method2.nc", 1476, 1798),(struct sNode*)come_increment_ref_count(sNode_clone(obj), "39method2.nc", 1476, 1799)), "39method2.nc", 1476, 1800));
    parse_method_generics_type=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p)||*info->p==95) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "39method2.nc", 1489, 1801);
                if(is_type_name(word,info)) {
                    parse_method_generics_type=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1495, 1802));
            }
        }
        info->p=p;
        info->sline=sline;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "39method2.nc", 1501, 1803, "struct list$1sType$ph*"), "39method2.nc", 1501, 1804)), "39method2.nc", 1501, 1805);
    if(parse_method_generics_type&&*info->p==60) {
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
                multiple_assign_var19=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var19->v1, "39method2.nc", 1521, 1806);
                name=(char* )come_increment_ref_count(multiple_assign_var19->v2, "39method2.nc", 1521, 1807);
                err=multiple_assign_var19->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1521, 1810);
                if(!err) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(method_generics_types,(struct sType* )come_increment_ref_count(sType_clone(type), "39method2.nc", 1528, 1811));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1530, 1812);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1530, 1813));
            }
        }
    }
    if(*info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_144=info->p;
            sline_145=info->sline;
            err_flag=(_Bool)0;
            __right_value0 = (void*)0;
            label=(char* )come_increment_ref_count(__builtin_string("","39method2.nc",1547), "39method2.nc", 1547, 1814);
            if(xisalpha(*info->p)||*info->p==95) {
                __right_value0 = (void*)0;
                __dec_obj163=label,
                label=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "39method2.nc", 1549, 1816);
                __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1549, 1815);
                err_flag=(_Bool)1;
            }
            if(err_flag==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj164=label,
                label=((void*)0);
                __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1558, 1817);
                info->p=p_144;
                info->sline=sline_145;
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            type_name_exp=(_Bool)0;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp), "39method2.nc", 1572, 1818);
            __right_value0 = (void*)0;
            __dec_obj165=node,
            node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "39method2.nc", 1574, 1819),info), "39method2.nc", 1574, 1821);
            (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0, "39method2.nc", 1574, 1820) :0);
            info->in_fun_param=in_fun_param;
            info->no_comma=no_comma;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "39method2.nc", 1579, 1822, "struct tuple2$2char$phsNode$ph"), "39method2.nc", 1579, 1823),(char* )come_increment_ref_count(label, "39method2.nc", 1579, 1824),(struct sNode*)come_increment_ref_count(node, "39method2.nc", 1579, 1825)), "39method2.nc", 1579, 1826));
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1588, 1827));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1588, 1828):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1591, 1829));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1591, 1830):(void*)0);
        }
    }
    method_block=((void*)0);
    method_block_sline=0;
    if(*info->p==123) {
        head=info->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1599, 1831));
        tail=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj166=method_block,
        method_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 1603, 1832, "struct buffer* "), "39method2.nc", 1603, 1833)), "39method2.nc", 1603, 1835);
        come_call_finalizer(buffer_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1603, 1834);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "39method2.nc", 1606, 1836, "char*"), "39method2.nc", 1606, 1837);
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1614, 1838));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 1616, 1842, "struct sNode");
    _inf_obj_value6=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value2=sMethodCallNode_initialize((struct sMethodCallNode* )come_increment_ref_count((struct sMethodCallNode *)come_calloc(1, sizeof(struct sMethodCallNode )*(1), "39method2.nc", 1616, 1839, "struct sMethodCallNode* "), "39method2.nc", 1616, 1840),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj), "39method2.nc", 1616, 1841),params,method_block,method_block_sline,method_generics_types,(_Bool)0,(_Bool)1,info,arrow_))), "39method2.nc", 1616, 1843);
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sMethodCallNode_finalize;
    _inf_value6->clone=(void*)sMethodCallNode_clone;
    _inf_value6->compile=(void*)sMethodCallNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sMethodCallNode_terminated;
    _inf_value6->kind=(void*)sMethodCallNode_kind;
    _inf_value6->left_value=(void*)sNodeBase_left_value;
    node_146=(struct sNode*)come_increment_ref_count(_inf_value6, "39method2.nc", 1616, 1844);
    come_call_finalizer(sMethodCallNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1616, 1845);
    __right_value0 = (void*)0;
    __dec_obj167=node_146,
    node_146=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_146, "39method2.nc", 1618, 1846),info), "39method2.nc", 1618, 1848);
    (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "39method2.nc", 1618, 1847) :0);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_146, "39method2.nc", 1620, 1849);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1620, 1850):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1620, 1851));
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1620, 1852);
    come_call_finalizer(list$1sType$ph$p_finalize, method_generics_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1620, 1853);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1620, 1854);
    ((node_146) ? node_146 = come_decrement_ref_count(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1620, 1855):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1620, 1856):(void*)0);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj158;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_142;
    struct tuple2$2char$phsNode$ph* __dec_obj159;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_143;
    struct tuple2$2char$phsNode$ph* __dec_obj160;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 1773);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1619, 1774, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1619, 1775);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj158=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1623, 1777);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 1776);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_142=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1629, 1778, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1629, 1779);
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        __dec_obj159=litem_142->item,
        litem_142->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1633, 1781);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 1780);
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        __right_value0 = (void*)0;
        litem_143=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1639, 1782, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1639, 1783);
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        __dec_obj160=litem_143->item,
        litem_143->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1643, 1785);
        come_call_finalizer(tuple2$2char$phsNode$ph_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 1784);
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 1786);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj161  ;
    struct sNode* __dec_obj162;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj161=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 3930, 1789);
    __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 3930, 1788);
    __dec_obj162=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 3931, 1791);
    (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 3931, 1790) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 3933, 1792);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3933, 1793);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3933, 1794));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 3933, 1795):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3933, 1796);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1808);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1809));
    }
                    neo_current_frame = fr.prev;
}

struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_iter_call_v20"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    char* p;
    int sline;
    _Bool err_flag;
    char*  label  ;
    char*  __dec_obj168  ;
    char*  __dec_obj169  ;
    _Bool no_comma;
    _Bool in_fun_param;
    _Bool type_name_exp;
    struct sNode* node;
    struct sNode* __dec_obj170;
    struct buffer*  method_block  ;
    int method_block_sline;
    char* head;
    char* tail;
    struct buffer*  __dec_obj171  ;
    int len;
    char* mem;
    struct sNode* _inf_value7;
    struct sIterCallNode* _inf_obj_value7;
    void* __right_value2 = (void*)0;
    struct sNode* node_147;
    struct sNode* __result_obj__0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "39method2.nc", 1625, 1857, "struct list$1tuple2$2char$phsNode$ph$ph*"), "39method2.nc", 1625, 1858)), "39method2.nc", 1625, 1859);
    if(*info->p!=123) {
        expected_next_character(40,info);
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
            label=(char* )come_increment_ref_count(__builtin_string("","39method2.nc",1641), "39method2.nc", 1641, 1860);
            if(xisalpha(*info->p)||*info->p==95) {
                __right_value0 = (void*)0;
                __dec_obj168=label,
                label=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "39method2.nc", 1643, 1862);
                __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1643, 1861);
                err_flag=(_Bool)1;
            }
            if(err_flag==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj169=label,
                label=((void*)0);
                __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "39method2.nc", 1652, 1863);
                info->p=p;
                info->sline=sline;
            }
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            type_name_exp=(_Bool)0;
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(expression_v13(info,type_name_exp), "39method2.nc", 1666, 1864);
            __right_value0 = (void*)0;
            __dec_obj170=node,
            node=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node, "39method2.nc", 1668, 1865),info), "39method2.nc", 1668, 1867);
            (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0, (void*)0, "39method2.nc", 1668, 1866) :0);
            info->in_fun_param=in_fun_param;
            info->no_comma=no_comma;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "39method2.nc", 1673, 1868, "struct tuple2$2char$phsNode$ph"), "39method2.nc", 1673, 1869),(char* )come_increment_ref_count(label, "39method2.nc", 1673, 1870),(struct sNode*)come_increment_ref_count(node, "39method2.nc", 1673, 1871)), "39method2.nc", 1673, 1872));
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1682, 1873));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1682, 1874):(void*)0);
                break;
            }
            (label = come_decrement_ref_count(label, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1685, 1875));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1685, 1876):(void*)0);
        }
    }
    method_block=((void*)0);
    method_block_sline=0;
    if(*info->p==123) {
        head=info->p;
        method_block_sline=info->sline;
        __right_value0 = (void*)0;
        ((char* )(__right_value0=skip_block(info,(_Bool)0)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "39method2.nc", 1693, 1877));
        tail=info->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj171=method_block,
        method_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "39method2.nc", 1697, 1878, "struct buffer* "), "39method2.nc", 1697, 1879)), "39method2.nc", 1697, 1881);
        come_call_finalizer(buffer_finalize, __dec_obj171,(void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc", 1697, 1880);
        len=tail-head;
        __right_value0 = (void*)0;
        mem=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "39method2.nc", 1700, 1882, "char*"), "39method2.nc", 1700, 1883);
        memcpy(mem,head,len);
        mem[len]=0;
        buffer_append_str(method_block,mem);
        buffer_append_str(method_block,"\n");
        (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1708, 1884));
    }
    skip_spaces_and_lf(info);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 1710, 1889, "struct sNode");
    _inf_obj_value7=(struct sIterCallNode*)come_increment_ref_count(((struct sIterCallNode*)(__right_value1=sIterCallNode_initialize((struct sIterCallNode* )come_increment_ref_count((struct sIterCallNode *)come_calloc(1, sizeof(struct sIterCallNode )*(1), "39method2.nc", 1710, 1885, "struct sIterCallNode* "), "39method2.nc", 1710, 1886),fun_name,(struct sNode*)come_increment_ref_count(obj, "39method2.nc", 1710, 1887),params,method_block,method_block_sline,((void*)0),(_Bool)0,(_Bool)1,info,arrow_,(struct sNode*)come_increment_ref_count(parent_call_node, "39method2.nc", 1710, 1888)))), "39method2.nc", 1710, 1890);
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sIterCallNode_finalize;
    _inf_value7->clone=(void*)sIterCallNode_clone;
    _inf_value7->compile=(void*)sIterCallNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sIterCallNode_terminated;
    _inf_value7->kind=(void*)sIterCallNode_kind;
    _inf_value7->left_value=(void*)sIterCallNode_left_value;
    node_147=(struct sNode*)come_increment_ref_count(_inf_value7, "39method2.nc", 1710, 1891);
    come_call_finalizer(sIterCallNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1710, 1892);
        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_147, "39method2.nc", 1712, 1893);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1712, 1894):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "39method2.nc", 1712, 1895));
    ((parent_call_node) ? parent_call_node = come_decrement_ref_count(parent_call_node, ((struct sNode*)parent_call_node)->finalize, ((struct sNode*)parent_call_node)->_protocol_obj, 0, 0,(void*)0, "39method2.nc", 1712, 1896):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1712, 1897);
    come_call_finalizer(buffer_finalize, method_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "39method2.nc}", 1712, 1898);
    ((node_147) ? node_147 = come_decrement_ref_count(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1712, 1899):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1712, 1900):(void*)0);
    return __result_obj__0;
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v20"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value8;
    struct sCurrentNode* _inf_obj_value8;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(charp_operator_equals(buf,"__current__")) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "39method2.nc", 1718, 1903, "struct sNode");
        _inf_obj_value8=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value1=sCurrentNode_initialize((struct sCurrentNode* )come_increment_ref_count((struct sCurrentNode *)come_calloc(1, sizeof(struct sCurrentNode )*(1), "39method2.nc", 1718, 1901, "struct sCurrentNode* "), "39method2.nc", 1718, 1902),info))), "39method2.nc", 1718, 1904);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sCurrentNode_finalize;
        _inf_value8->clone=(void*)sCurrentNode_clone;
        _inf_value8->compile=(void*)sCurrentNode_compile;
        _inf_value8->sline=(void*)sCurrentNode_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sCurrentNode_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sCurrentNode_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "39method2.nc", 1718, 1905);
        come_call_finalizer(sCurrentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "39method2.nc}", 1718, 1906);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "39method2.nc", 1718, 1907):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1718, 1908):(void*)0);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v17(buf,head,head_sline,info))), "39method2.nc", 1721, 1909);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "39method2.nc", 1721, 1910):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "39method2.nc", 1721, 1911):(void*)0);
    return __result_obj__0;
}

