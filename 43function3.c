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
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
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
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun*  v1  , char*  v2  );
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject*  self  );
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
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
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType**  values  );
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char**  values  );
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char*  map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char*  map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun*  sFun_clone(struct sFun*  self  );
static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self);
static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  );
static struct sVar*  sVar_clone(struct sVar*  self  );
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
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
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_cloner_automatically"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj2  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj3  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj4  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj5  ;
    char*  last_code2  ;
    char*  __dec_obj6  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  cloner  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char*  fun_name2  ;
    char*  none_generics_name  ;
    struct sType*  obj_type  ;
    char*  __dec_obj7  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var1
;    char*  name  =0;
    _Bool err=0;
    char*  __dec_obj8  ;
    char*  __dec_obj9  ;
    char*  __dec_obj10  ;
    struct buffer*  __dec_obj11  ;
    struct buffer*  __dec_obj12  ;
    struct buffer*  __dec_obj13  ;
    struct list$1sRightValueObject$ph* __dec_obj14;
    struct list$1CVALUE$ph* __dec_obj15;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj18  ;
    char*  __dec_obj19  ;
    struct buffer*  source  ;
    struct sType*  type2_0  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  name_12  =0;
    struct sType*  field_type  =0;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_4;
    struct tuple2$2char$phsType$ph* it_15;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char*  name_16  =0;
    struct sType*  field_type_17  =0;
    char*  user_real_fun_name  ;
    struct sFun*  user_cloner  ;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj54  ;
    char*  __dec_obj55  ;
    struct sBlock*  block  ;
    struct sType*  result_type  ;
    char*  name_21  ;
    struct sType*  self_type  ;
    struct sType*  __list_values1__[1]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values2__[1]  ;
    void* __right_value2 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value1;
    struct sFunNode* _inf_obj_value1;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj94  ;
    struct buffer*  __dec_obj95  ;
    char*  __dec_obj96  ;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    struct buffer*  __dec_obj99  ;
    struct buffer*  __dec_obj100  ;
    struct buffer*  __dec_obj101  ;
    struct list$1sRightValueObject$ph* __dec_obj102;
    struct list$1CVALUE$ph* __dec_obj103;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    if(string_operator_equals(type->mClass->mName,"void")) {
                __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 6, 1, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 6, 9),(struct sFun* )((void*)0),(char* )come_increment_ref_count((char* )((void*)0), "43function3.nc", 6, 10)))), "43function3.nc", 6, 11);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 6, 12);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 6, 13);
        return __result_obj__0;
    }
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    __right_value0 = (void*)0;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 18, 14);
    __dec_obj2=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 19, 15);
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 20, 16);
    __dec_obj3=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 21, 17);
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 22, 18);
    __dec_obj4=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 23, 19);
    right_value_max=info->right_value_max;
    right_value_num=info->right_value_num;
    max_conditional=info->max_conditional;
    num_conditional=info->num_conditional;
    in_conditional=info->in_conditional;
    info->in_conditional=(_Bool)0;
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 32, 20);
    __dec_obj5=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 33, 21);
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 34, 22);
    __dec_obj6=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 35, 23);
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",37), "43function3.nc", 37, 24);
    sline_top=info->sline;
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 40, 25);
    right_value_objects=info->right_value_objects;
    no_output_come_code=info->no_output_come_code;
    info->no_output_come_code=(_Bool)0;
    cloner=((void*)0);
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 13, 26);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 15, 27);
    type=type2;
    klass=type->mClass;
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type->mClass->mName), "43function3.nc", 26, 28);
        __right_value0 = (void*)0;
        obj_type=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "43function3.nc", 28, 29);
        __right_value0 = (void*)0;
        __dec_obj7=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 30, 31);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 30, 30);
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "43function3.nc", 31, 32);
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2,"43function3.nc",36), "43function3.nc", 36, 90),generics_fun,obj_type,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "43function3.nc", 36, 91);
            err=multiple_assign_var1->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 36, 93);
            if(!err) {
                if(string_operator_equals(type->mClass->mName,"void")) {
                    info->no_output_come_code=no_output_come_code;
                    __right_value0 = (void*)0;
                    __dec_obj8=info->sname,
                    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",42), "43function3.nc", 42, 95);
                    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 42, 94);
                    info->sline=sline_top;
                    __dec_obj9=info->module->mLastCode,
                    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 45, 97);
                    __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 45, 96);
                    __dec_obj10=info->module->mLastCode2,
                    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 46, 99);
                    __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 46, 98);
                    info->caller_fun=caller_fun;
                    info->right_value_max=right_value_max;
                    info->right_value_num=right_value_num;
                    info->num_conditional=num_conditional;
                    info->max_conditional=max_conditional;
                    info->in_conditional=in_conditional;
                    __dec_obj11=info->if_expression_buffer,
                    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 57, 101);
                    come_call_finalizer(buffer_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 57, 100);
                    __dec_obj12=info->loop_expression_buffer,
                    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 58, 103);
                    come_call_finalizer(buffer_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 58, 102);
                    __dec_obj13=info->paren_block_buffer,
                    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 59, 105);
                    come_call_finalizer(buffer_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 59, 104);
                    info->current_stack_frame_struct=current_stack_frame_struct;
                    __dec_obj14=info->right_value_objects,
                    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 61, 114);
                    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 61, 113);
                    __dec_obj15=info->stack,
                    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 62, 123);
                    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 62, 122);
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 41, 124, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 41, 125),(struct sFun* )((void*)0),(char* )come_increment_ref_count((char* )((void*)0), "43function3.nc", 41, 126)))), "43function3.nc", 41, 127);
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 128));
                    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 129));
                    come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 41, 130);
                    (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 131));
                    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 41, 132);
                    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 41, 133);
                    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 41, 134);
                    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 135));
                    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 136));
                    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 137));
                    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 41, 139);
                    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 140));
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 41, 141);
                    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 41, 142));
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 41, 143);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 41, 144);
                    return __result_obj__0;
                }
            }
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 51, 201));
        }
        else {
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        __dec_obj16=real_fun_name,
        real_fun_name=(char* )come_increment_ref_count(fun_name2, "43function3.nc", 51, 203);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 51, 202);
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 74, 204));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 74, 205);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 74, 206));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj17=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 54, 208);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 54, 207);
        for(i=128-1        ;i>=1;i--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "43function3.nc", 58, 209);
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(cloner) {
                __right_value0 = (void*)0;
                __dec_obj18=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"43function3.nc",62), "43function3.nc", 62, 211);
                __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 62, 210);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 63, 212));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 67, 213));
        }
        if(cloner==((void*)0)) {
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        __dec_obj19=real_fun_name,
        real_fun_name=(char* )come_increment_ref_count(fun_name2, "43function3.nc", 71, 215);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 71, 214);
    }
    if(cloner==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 76, 216, "struct buffer* "), "43function3.nc", 76, 217)), "43function3.nc", 76, 218);
        __right_value0 = (void*)0;
        type2_0=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 78, 392);
        type2_0->mPointerNum=0;
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"\nusing unsafe;\n");
        buffer_append_str(source,"if(self == (void*)0) { return (void*)0; }\n");
        __right_value0 = (void*)0;
        buffer_append_format(source,"var result = new %s;\n",((char* )(__right_value0=make_type_name_string(type2_0,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 84, 393));
        if(klass->mProtocol) {
            const char* name_9="_protocol_obj";
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source,source2);
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(_o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 94, 432),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_3)            ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_3);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_3)){
                multiple_assign_var2=it;
                name_12=(char* )come_increment_ref_count(multiple_assign_var2->v1, "43function3.nc", 95, 433);
                field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "43function3.nc", 95, 434);
                if(string_operator_equals(name_12,"_protocol_obj")) {
                }
                else if(list$1sNode$ph_length(field_type->mArrayNum)>0) {
                    char source2_13[1024];
                    memset(&source2_13, 0, sizeof(source2_13));
                    snprintf(source2_13,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_12,name_12,name_12);
                    buffer_append_str(source,source2_13);
                }
                else {
                    char source2_14[1024];
                    memset(&source2_14, 0, sizeof(source2_14));
                    snprintf(source2_14,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_12,name_12);
                    buffer_append_str(source,source2_14);
                }
                (name_12 = come_decrement_ref_count(name_12, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 112, 435));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 112, 436);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 139, 437);
        }
        else {
            __right_value0 = (void*)0;
            klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
            for(_o2_saved_4=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 115, 438),it_15=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_4)            ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_4);it_15=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_4)){
                multiple_assign_var3=it_15;
                name_16=(char* )come_increment_ref_count(multiple_assign_var3->v1, "43function3.nc", 116, 439);
                field_type_17=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2, "43function3.nc", 116, 440);
                if(field_type_17->mHeap) {
                    char source2_18[1024];
                    memset(&source2_18, 0, sizeof(source2_18));
                    snprintf(source2_18,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_16,name_16,name_16);
                    buffer_append_str(source,source2_18);
                }
                else if(list$1sNode$ph_length(field_type_17->mArrayNum)>0) {
                    char source2_19[1024];
                    memset(&source2_19, 0, sizeof(source2_19));
                    snprintf(source2_19,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_16,name_16,name_16);
                    buffer_append_str(source,source2_19);
                }
                else {
                    char source2_20[1024];
                    memset(&source2_20, 0, sizeof(source2_20));
                    snprintf(source2_20,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_16,name_16);
                    buffer_append_str(source,source2_20);
                }
                (name_16 = come_decrement_ref_count(name_16, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 137, 441));
                come_call_finalizer(sType_finalize, field_type_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 137, 442);
            }
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 139, 443);
        }
        __right_value0 = (void*)0;
        user_real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1), "43function3.nc", 139, 444);
        __right_value0 = (void*)0;
        user_cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name)));
        buffer_append_format(source,"return result;");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 156, 445);
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 157, 446);
        head=info->head;
        __dec_obj54=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 160, 448);
        come_call_finalizer(buffer_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 160, 447);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        __dec_obj55=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",167), "43function3.nc", 167, 450);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 167, 449);
        info->sline=1;
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 170, 451);
        __right_value0 = (void*)0;
        result_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 172, 452);
        __right_value0 = (void*)0;
        name_21=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 173, 453, "char* "), "43function3.nc", 173, 454);
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 174, 455);
        self_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 176, 474, "struct list$1sType$ph"), "43function3.nc", 176, 475),1,__list_values1__)), "43function3.nc", 176, 476);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",177))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 177, 495, "struct list$1char$ph"), "43function3.nc", 177, 496),1,__list_values2__)), "43function3.nc", 177, 497);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 178, 498, "struct list$1char$ph*"), "43function3.nc", 178, 499)), "43function3.nc", 178, 500);
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_21,"43function3.nc",185)))), "43function3.nc", 185, 501);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 185, 502));
        if(fun2==((void*)0)||fun2->mExternal) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 188, 503, "struct sFun* "), "43function3.nc", 192, 504),(char* )come_increment_ref_count(name_21, "43function3.nc", 192, 505),(struct sType* )come_increment_ref_count(result_type, "43function3.nc", 192, 506),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 192, 507),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 192, 508),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 192, 509),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 192, 510),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 192, 511),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 192, 512),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 192, 513)), "43function3.nc", 192, 514);
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_21,"43function3.nc",195), "43function3.nc", 195, 562),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 195, 563),(_Bool)0);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 197, 567, "struct sNode");
            _inf_obj_value1=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 197, 564, "struct sFunNode* "), "43function3.nc", 197, 565),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 197, 566),info))), "43function3.nc", 197, 568);
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sFunNode_finalize;
            _inf_value1->clone=(void*)sFunNode_clone;
            _inf_value1->compile=(void*)sFunNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sFunNode_kind;
            _inf_value1->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value1, "43function3.nc", 197, 789);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 197, 790);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            cloner=fun;
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 210, 791);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 210, 792):(void*)0);
        }
        else {
            cloner=fun2;
        }
        __dec_obj94=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 210, 794);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 210, 793);
        info->sline=sline;
        __dec_obj95=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 213, 796);
        come_call_finalizer(buffer_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 213, 795);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 797);
        come_call_finalizer(sType_finalize, type2_0, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 798);
        (user_real_fun_name = come_decrement_ref_count(user_real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 224, 799));
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 224, 800));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 801);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 802);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 803);
        (name_21 = come_decrement_ref_count(name_21, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 224, 804));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 805);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 806);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 807);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 808);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 224, 809);
    }
    info->no_output_come_code=no_output_come_code;
    __right_value0 = (void*)0;
    __dec_obj96=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",225), "43function3.nc", 225, 811);
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 225, 810);
    info->sline=sline_top;
    __dec_obj97=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 228, 813);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 228, 812);
    __dec_obj98=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 229, 815);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 229, 814);
    info->caller_fun=caller_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->num_conditional=num_conditional;
    info->max_conditional=max_conditional;
    info->in_conditional=in_conditional;
    __dec_obj99=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 240, 817);
    come_call_finalizer(buffer_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 240, 816);
    __dec_obj100=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 241, 819);
    come_call_finalizer(buffer_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 241, 818);
    __dec_obj101=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 242, 821);
    come_call_finalizer(buffer_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 242, 820);
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj102=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 244, 823);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 244, 822);
    __dec_obj103=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 245, 825);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 245, 824);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 225, 826, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 225, 827),cloner,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 225, 828)))), "43function3.nc", 225, 829);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 225, 830);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 225, 831);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 225, 832);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 225, 833));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 225, 834));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 225, 835));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 225, 836);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 225, 837));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 225, 838);
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 225, 839));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 225, 840);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 225, 841);
    return __result_obj__0;
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj1  ;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    self->v1=v1;
    __dec_obj1=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3931, 3);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3931, 2);
        __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3933, 4);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3933, 6);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3933, 7));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3933, 8);
    return __result_obj__0;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 5));
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

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3147, 33);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3147, 76);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3147, 77);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3160, 78);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3160, 79);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3160, 80);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 81);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 82);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 83);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3171, 84);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3171, 85);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3171, 86);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3175, 87);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3175, 88);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3175, 89);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 66);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 67);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 68);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 69));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 70);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 71);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 72);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 73);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 74));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 75));
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 34);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 35);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 38);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 39);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 40):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 41):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 42));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 43));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 44));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 45));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 46));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 47));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 48));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 49));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 52);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 53);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 55);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 56);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 57);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 58));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 59);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 62);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 63);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 64):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 65);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 37);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 36);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 51);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 50):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 54);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 61);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 60));
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$ph_Bool$$p_finalize", 2, 92));
    }
                neo_current_frame = fr.prev;
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 112);
    }
                        neo_current_frame = fr.prev;
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sRightValueObject$ph$p_finalize}", 2, 111);
    }
            neo_current_frame = fr.prev;
}

static void sRightValueObject_finalize(struct sRightValueObject*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRightValueObject_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 2, 106);
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 3, 107));
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 4, 108));
    }
    if(self!=((void*)0)&&self->mObjType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 5, 109);
    }
    if(self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 6, 110));
    }
            neo_current_frame = fr.prev;
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 121);
    }
                        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 120);
    }
            neo_current_frame = fr.prev;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 115));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 116);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 117));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 118));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 119));
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 138);
    }
                        neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 145);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 172);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 173);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3545, 174);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3545, 175);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3545, 176);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3552, 177);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 178);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 179);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3556, 180);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 181);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 182);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3560, 183);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 184);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 185);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 146));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 147);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 148);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 149);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 150);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 151);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 158);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 161);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 162));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 163));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 164);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 165);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 166);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 167);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 168));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 169));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 170));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 171));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 157);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 156);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 152));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 153));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 154);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 155));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 159);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 160);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 186);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 187);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 188);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3545, 189);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3545, 190);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3545, 191);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3552, 192);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 193);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 194);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3556, 195);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 196);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 197);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3560, 198);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 199);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 200);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj20  ;
    struct sType*  __dec_obj21  ;
    struct list$1sType$ph* __dec_obj25;
    struct sType*  __dec_obj26  ;
    struct sNode* __dec_obj27;
    struct sNode* __dec_obj28;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    char*  __dec_obj31  ;
    char*  __dec_obj32  ;
    char*  __dec_obj33  ;
    char*  __dec_obj34  ;
    char*  __dec_obj35  ;
    char*  __dec_obj36  ;
    struct list$1sNode$ph* __dec_obj40;
    struct list$1sNode$ph* __dec_obj41;
    struct list$1int$* __dec_obj42;
    struct list$1int$* __dec_obj43;
    struct sType*  __dec_obj44  ;
    char*  __dec_obj45  ;
    struct list$1sType$ph* __dec_obj46;
    struct list$1char$ph* __dec_obj50;
    struct sType*  __dec_obj51  ;
    struct sNode* __dec_obj52;
    struct list$1sNode$ph* __dec_obj53;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 219, "struct sType* "), "sType_clone", 5, 220);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 222);
        come_call_finalizer(sType_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 221);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 224);
        come_call_finalizer(sType_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 223);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 254);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 253);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 256);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 255);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 265);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 264) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj28=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 267);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 266) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 268, "char* "), "sType_clone", 14, 270);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 269);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 271, "char* "), "sType_clone", 15, 273);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 272);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 274, "char* "), "sType_clone", 16, 276);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 275);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 277, "char* "), "sType_clone", 17, 279);
        __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 278);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 280, "char* "), "sType_clone", 18, 282);
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 281);
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
        __dec_obj34=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 283, "char* "), "sType_clone", 49, 285);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 284);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 286, "char* "), "sType_clone", 51, 288);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 287);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 289, "char* "), "sType_clone", 54, 291);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 290);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj40=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 321);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 320);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj41=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 323);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 322);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj42=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 343);
        come_call_finalizer(list$1int$_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 342);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj43=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 345);
        come_call_finalizer(list$1int$_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 344);
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
        __dec_obj44=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 347);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 346);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj45=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 348, "char* "), "sType_clone", 67, 350);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 349);
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
        __dec_obj46=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 352);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 351);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj50=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 384);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 383);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj51=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 386);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 385);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj52=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 388);
        (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 387) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj53=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 390);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 389);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 391);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 225);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 226);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 227, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 231)), "/usr/local/include/neo-c.h", 1513, 232);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 247));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 248));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 249);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 250);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 251);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 228);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 229);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 230);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj22  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj23  ;
    struct list_item$1sType$ph* litem_2;
    struct sType*  __dec_obj24  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 233);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 234, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 235);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj22=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 237);
        come_call_finalizer(sType_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 236);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 238, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 239);
        litem_1->prev=self->head;
        litem_1->next=((void*)0);
        __dec_obj23=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 241);
        come_call_finalizer(sType_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 240);
        self->tail=litem_1;
        self->head->next=litem_1;
    }
    else {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 242, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 243);
        litem_2->prev=self->tail;
        litem_2->next=((void*)0);
        __dec_obj24=litem_2->item,
        litem_2->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 245);
        come_call_finalizer(sType_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 244);
        self->tail->next=litem_2;
        self->tail=litem_2;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 246);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 252);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 257);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 258):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 259, "struct sNode*"), "sNode_clone", 5, 260);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 261);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 262):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 263):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 292);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 293);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 294, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 298)), "/usr/local/include/neo-c.h", 1513, 299);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 314));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 315));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 316);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 317);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 318);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 295);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 296);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 297);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj37;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj38;
    struct list_item$1sNode$ph* litem_4;
    struct sNode* __dec_obj39;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 300):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 301, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 302);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 304);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 303) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 305, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 306);
        litem_3->prev=self->head;
        litem_3->next=((void*)0);
        __dec_obj38=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 308);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 307) :0);
        self->tail=litem_3;
        self->head->next=litem_3;
    }
    else {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 309, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 310);
        litem_4->prev=self->tail;
        litem_4->next=((void*)0);
        __dec_obj39=litem_4->item,
        litem_4->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 312);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 311) :0);
        self->tail->next=litem_4;
        self->tail=litem_4;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 313):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 319);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 324);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 325);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 326, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 330)), "/usr/local/include/neo-c.h", 1513, 331);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 338);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 339);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 340);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 327);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 328);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 329);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_5;
    struct list_item$1int$* litem_6;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 332, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 333);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 334, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 335);
        litem_5->prev=self->head;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail=litem_5;
        self->head->next=litem_5;
    }
    else {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 336, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 337);
        litem_6->prev=self->tail;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail->next=litem_6;
        self->tail=litem_6;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 341);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 353);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 354);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 355, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 359)), "/usr/local/include/neo-c.h", 1513, 360);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 375, "char* "), "/usr/local/include/neo-c.h", 1518, 376));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 377, "char* "), "/usr/local/include/neo-c.h", 1521, 378));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 379);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 380);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 381);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 356);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 357);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 358);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj47  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj48  ;
    struct list_item$1char$ph* litem_8;
    char*  __dec_obj49  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 361));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 362, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 363);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj47=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 365);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 364);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 366, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 367);
        litem_7->prev=self->head;
        litem_7->next=((void*)0);
        __dec_obj48=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 369);
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 368);
        self->tail=litem_7;
        self->head->next=litem_7;
    }
    else {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 370, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 371);
        litem_8->prev=self->tail;
        litem_8->next=((void*)0);
        __dec_obj49=litem_8->item,
        litem_8->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 373);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 372);
        self->tail->next=litem_8;
        self->tail=litem_8;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 374));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 382);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 394);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 403);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 404);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3545, 405);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3545, 406);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3545, 407);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3552, 408);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 409);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 410);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3556, 411);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 412);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 413);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3560, 414);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 415);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 416);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 395));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 400);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 401));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 402));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 399);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 398);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 396));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 397);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 417);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 418);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 419);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3545, 420);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3545, 421);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3545, 422);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3552, 423);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 424);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 425);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3556, 426);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 427);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 428);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3560, 429);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 430);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 431);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_10;
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
    memset(&result_10,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_10;
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
    struct tuple2$2char$phsType$ph* result_11;
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
    memset(&result_11,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_11;
    neo_current_frame = fr.prev;
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

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType**  values  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(values[i], "/usr/local/include/neo-c.h", 1494, 470));
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 471);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 472);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 473);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj56  ;
    struct list_item$1sType$ph* litem_22;
    struct sType*  __dec_obj57  ;
    struct list_item$1sType$ph* litem_23;
    struct sType*  __dec_obj58  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 456);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1619, 457, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1619, 458);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj56=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 460);
        come_call_finalizer(sType_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 459);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1629, 461, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1629, 462);
        litem_22->prev=self->head;
        litem_22->next=((void*)0);
        __dec_obj57=litem_22->item,
        litem_22->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 464);
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 463);
        self->tail=litem_22;
        self->head->next=litem_22;
    }
    else {
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1639, 465, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1639, 466);
        litem_23->prev=self->tail;
        litem_23->next=((void*)0);
        __dec_obj58=litem_23->item,
        litem_23->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 468);
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 467);
        self->tail->next=litem_23;
        self->tail=litem_23;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 469);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char**  values  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$ph_push_back(self,(char* )come_increment_ref_count(values[i], "/usr/local/include/neo-c.h", 1494, 491));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 492);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 493);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 494);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj59  ;
    struct list_item$1char$ph* litem_24;
    char*  __dec_obj60  ;
    struct list_item$1char$ph* litem_25;
    char*  __dec_obj61  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 477));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 478, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 479);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj59=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 481);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 480);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 482, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 483);
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        __dec_obj60=litem_24->item,
        litem_24->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 485);
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 484);
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 486, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 487);
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        __dec_obj61=litem_25->item,
        litem_25->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 489);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 488);
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 490));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3362, 515));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3362, 516);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3380, 553));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3381, 554);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3388, 555);
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3389, 556);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                break;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            self->hashes[it]=key_hash;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3411, 557);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3417, 558);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list)    ;!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3437, 559));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3440, 560));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3440, 561);
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
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    char*  it  ;
    struct sFun*  default_value  ;
    struct sFun*  it2  ;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    struct sFun*  default_value_28  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3279, 517, "char** "))), "/usr/local/include/neo-c.h", 3279, 518);
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "/usr/local/include/neo-c.h", 3280, 519, "struct sFun** "))), "/usr/local/include/neo-c.h", 3280, 520);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "/usr/local/include/neo-c.h", 3281, 521, "unsigned int*"))), "/usr/local/include/neo-c.h", 3281, 522);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3282, 523, "_Bool*"))), "/usr/local/include/neo-c.h", 3282, 524);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(it=map$2char$phsFun$ph_begin(self)    ;!map$2char$phsFun$ph_end(self);it=map$2char$phsFun$ph_next(self)){
        memset(&default_value,0,sizeof(struct sFun* ));
        __right_value0 = (void*)0;
        it2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_at(self,it,(struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3293, 540),(_Bool)0), "/usr/local/include/neo-c.h", 3293, 541);
        key_hash=string_get_hash_key(((char* )it));
        hash=key_hash%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                if(++n>=size) {
                    n=0;
                }
                if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                hashes[n]=key_hash;
                keys[n]=it;
                memset(&default_value_28,0,sizeof(struct sFun* ));
                __right_value0 = (void*)0;
                items[n]=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(self,it,(struct sFun* )come_increment_ref_count(default_value_28, "/usr/local/include/neo-c.h", 3316, 542),(_Bool)0)));
                len++;
                come_call_finalizer(sFun_finalize, default_value_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3319, 543);
                break;
                come_call_finalizer(sFun_finalize, default_value_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3321, 544);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3324, 545);
        come_call_finalizer(sFun_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3324, 546);
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3325, 547));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3326, 548));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_26  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_26,0,sizeof(char* ));
        __result_obj__0 = result_26;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_27  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_27,0,sizeof(char* ));
        __result_obj__0 = result_27;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3147, 525);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3147, 526);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3147, 527);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3160, 528);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3160, 529);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3160, 530);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 531);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 532);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 533);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3171, 534);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3171, 535);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3171, 536);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3175, 537);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3175, 538);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3175, 539);
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
    struct list_item$1char$ph* it_29;
    int i_30;
    struct list_item$1char$ph* prev_it_31;
    struct list_item$1char$ph* it_32;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_33;
    struct list_item$1char$ph* prev_it_34;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 550);
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
        it_29=self->head;
        i_30=0;
        while(it_29!=((void*)0)) {
            if(i_30==head) {
                self->tail=it_29->prev;
                self->tail->next=((void*)0);
            }
            if(i_30>=head) {
                prev_it_31=it_29;
                it_29=it_29->next;
                i_30++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 551);
                self->len--;
            }
            else {
                it_29=it_29->next;
                i_30++;
            }
        }
    }
    else {
        it_32=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_33=0;
        while(it_32!=((void*)0)) {
            if(i_33==head) {
                head_prev_it=it_32->prev;
            }
            if(i_33==tail) {
                tail_it=it_32;
            }
            if(i_33>=head&&i_33<tail) {
                prev_it_34=it_32;
                it_32=it_32->next;
                i_33++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_34, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 552);
                self->len--;
            }
            else {
                it_32=it_32->next;
                i_33++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 549);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_35  ;
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
    memset(&result_35,0,sizeof(char* ));
        __result_obj__0 = result_35;
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
    char*  result_36  ;
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
    memset(&result_36,0,sizeof(char* ));
        __result_obj__0 = result_36;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 569));
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 570);
    }
                neo_current_frame = fr.prev;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode*  result  ;
    char*  __dec_obj62  ;
    struct sFun*  __dec_obj93  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "sFunNode_clone", 5, 571, "struct sFunNode* "), "sFunNode_clone", 5, 572);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj62=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunNode_clone", 7, 573, "char* "), "sFunNode_clone", 7, 575);
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "sFunNode_clone", 7, 574);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj93=result->mFun,
        result->mFun=(struct sFun* )come_increment_ref_count(sFun_clone(self->mFun), "sFunNode_clone", 9, 787);
        come_call_finalizer(sFun_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_clone", 9, 786);
    }
        __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunNode_clone}", 10, 788);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  sFun_clone(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun*  result  ;
    char*  __dec_obj63  ;
    struct sType*  __dec_obj64  ;
    struct list$1sType$ph* __dec_obj65;
    struct list$1char$ph* __dec_obj66;
    struct list$1char$ph* __dec_obj67;
    struct sType*  __dec_obj68  ;
    struct list$1sVar$ph* __dec_obj76;
    struct sBlock*  __dec_obj82  ;
    char*  __dec_obj83  ;
    char*  __dec_obj84  ;
    struct buffer*  __dec_obj85  ;
    struct buffer*  __dec_obj86  ;
    struct buffer*  __dec_obj87  ;
    struct buffer*  __dec_obj88  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    char*  __dec_obj92  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count((void*)0, "sFun_clone", 4, 576);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 4, 577);
        return __result_obj__0;
    }
    result=(struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "sFun_clone", 5, 578, "struct sFun* "), "sFun_clone", 5, 579);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sFun_clone", 6, 580, "char* "), "sFun_clone", 6, 582);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 6, 581);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj64=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sFun_clone", 7, 584);
        come_call_finalizer(sType_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 7, 583);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj65=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sFun_clone", 8, 586);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 8, 585);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj66=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sFun_clone", 9, 588);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 9, 587);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj67=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors), "sFun_clone", 10, 590);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 10, 589);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj68=result->mLambdaType,
        result->mLambdaType=(struct sType* )come_increment_ref_count(sType_clone(self->mLambdaType), "sFun_clone", 11, 592);
        come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 11, 591);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj76=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar), "sFun_clone", 12, 640);
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 12, 639);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj82=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sFun_clone", 13, 756);
        come_call_finalizer(sBlock_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 755);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj83=result->mTextBlock,
        result->mTextBlock=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlock, "sFun_clone", 14, 757, "char* "), "sFun_clone", 14, 759);
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 14, 758);
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj84=result->mTextBlockSName,
        result->mTextBlockSName=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlockSName, "sFun_clone", 15, 760, "char* "), "sFun_clone", 15, 762);
        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 15, 761);
    }
    if(self!=((void*)0)) {
        result->mTextBlockSline=self->mTextBlockSline;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj85=result->mSource,
        result->mSource=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSource), "sFun_clone", 17, 764);
        come_call_finalizer(buffer_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 17, 763);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj86=result->mSourceHead,
        result->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead), "sFun_clone", 18, 766);
        come_call_finalizer(buffer_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 18, 765);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj87=result->mSourceHead2,
        result->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead2), "sFun_clone", 19, 768);
        come_call_finalizer(buffer_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 19, 767);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj88=result->mSourceEnd,
        result->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceEnd), "sFun_clone", 20, 770);
        come_call_finalizer(buffer_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 20, 769);
    }
    if(self!=((void*)0)) {
        result->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result->mExternal=self->mExternal;
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)) {
        result->mNoResultType=self->mNoResultType;
    }
    if(self!=((void*)0)) {
        result->mConstFun=self->mConstFun;
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj89=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sFun_clone", 28, 771, "char* "), "sFun_clone", 28, 773);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 28, 772);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj90=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sFun_clone", 29, 774, "char* "), "sFun_clone", 29, 776);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 29, 775);
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj91=result->mFunAttribute,
        result->mFunAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mFunAttribute, "sFun_clone", 30, 777, "char* "), "sFun_clone", 30, 779);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 30, 778);
    }
    if(self!=((void*)0)) {
        result->mGenericsFun=self->mGenericsFun;
    }
    if(self!=((void*)0)) {
        result->mDefineReturnVar=self->mDefineReturnVar;
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj92=result->mAsmFun,
        result->mAsmFun=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmFun, "sFun_clone", 33, 780, "char* "), "sFun_clone", 33, 782);
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 33, 781);
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(result, "sFun_clone", 34, 783);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 784);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 785);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph$p_clone(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sVar$ph* result;
    struct list_item$1sVar$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 593);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 594);
        return __result_obj__0;
    }
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1513, 595, "struct list$1sVar$ph*"), "/usr/local/include/neo-c.h", 1513, 599)), "/usr/local/include/neo-c.h", 1513, 600);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "/usr/local/include/neo-c.h", 1518, 633));
        }
        else {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "/usr/local/include/neo-c.h", 1521, 634));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 635);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 636);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 637);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 596);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 597);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 598);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj69  ;
    struct list_item$1sVar$ph* litem_37;
    struct sVar*  __dec_obj70  ;
    struct list_item$1sVar$ph* litem_38;
    struct sVar*  __dec_obj71  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 601);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1534, 602, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1534, 603);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj69=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 605);
        come_call_finalizer(sVar_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 604);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1544, 606, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1544, 607);
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        __dec_obj70=litem_37->item,
        litem_37->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 609);
        come_call_finalizer(sVar_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 608);
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1554, 610, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1554, 611);
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        __dec_obj71=litem_38->item,
        litem_38->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 613);
        come_call_finalizer(sVar_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 612);
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 614);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj72  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    char*  __dec_obj75  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 615);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 616);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 617, "struct sVar* "), "sVar_clone", 5, 618);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj72=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 619, "char* "), "sVar_clone", 6, 621);
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 620);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj73=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 622, "char* "), "sVar_clone", 7, 624);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 623);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj74=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 626);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 625);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mNoFree=self->mNoFree;
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj75=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 627, "char* "), "sVar_clone", 12, 629);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 628);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 630);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 631);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 632);
    return __result_obj__0;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 638);
    }
            neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj77;
    struct sVarTable*  __dec_obj81  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 641);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 642);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 643, "struct sBlock* "), "sBlock_clone", 5, 644);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj77=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 646);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 645);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj81=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 751);
        come_call_finalizer(sVarTable_finalize, __dec_obj81,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 750);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 752);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 753);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 754);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj80;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 647);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 648);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 649, "struct sVarTable* "), "sVarTable_clone", 5, 650);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj80=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 6, 746);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 6, 745);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 747);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 748);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 749);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj79;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 3079, 651);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3079, 657);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 3082, 658, "struct map$2char$phsVar$ph*"), "/usr/local/include/neo-c.h", 3082, 674)), "/usr/local/include/neo-c.h", 3082, 675);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj79=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3084, 676, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3084, 677)), "/usr/local/include/neo-c.h", 3084, 679);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3084, 678);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3090, 695),(_Bool)0), "/usr/local/include/neo-c.h", 3090, 696);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3093, 725, "char* "), "/usr/local/include/neo-c.h", 3093, 726),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3093, 727),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3096, 728, "char* "), "/usr/local/include/neo-c.h", 3096, 729),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3096, 730),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3099, 731),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3099, 732),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3102, 733),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3102, 734),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3106, 735);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3106, 736);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 3106, 737);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3106, 738);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3106, 739);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_39;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3054, 652);
            }
        }
    }
    come_free((char*)self->items);
    for(i_39=0    ;i_39<self->size;i_39++){
        if(self->item_existance[i_39]) {
            if(1) {
                (self->keys[i_39] = come_decrement_ref_count(self->keys[i_39], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3063, 653));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3069, 654);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3071, 655));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3072, 656));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj78;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "/usr/local/include/neo-c.h", 3000, 659, "char** "))), "/usr/local/include/neo-c.h", 3000, 660);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "/usr/local/include/neo-c.h", 3001, 661, "struct sVar** "))), "/usr/local/include/neo-c.h", 3001, 662);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "/usr/local/include/neo-c.h", 3002, 663, "unsigned int*"))), "/usr/local/include/neo-c.h", 3002, 664);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 3003, 665, "_Bool*"))), "/usr/local/include/neo-c.h", 3003, 666);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj78=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3014, 667, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3014, 668)), "/usr/local/include/neo-c.h", 3014, 670);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3014, 669);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3018, 671);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3018, 672);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3018, 673);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_40  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_40,0,sizeof(char* ));
        __result_obj__0 = result_40;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_41  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_41,0,sizeof(char* ));
        __result_obj__0 = result_41;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3147, 680);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3147, 681);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3147, 682);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3160, 683);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3160, 684);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3160, 685);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3167, 686);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 687);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3167, 688);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3171, 689);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3171, 690);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3171, 691);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3175, 692);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3175, 693);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3175, 694);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3446, 697));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3446, 698);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3463, 716));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3465, 717);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3472, 718);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3473, 719);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                break;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            self->hashes[it]=key_hash;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3495, 720);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3501, 721);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list)    ;!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3521, 722));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3524, 723));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3524, 724);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sVar**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    struct sVar*  default_value_42  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3279, 699, "char** "))), "/usr/local/include/neo-c.h", 3279, 700);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "/usr/local/include/neo-c.h", 3280, 701, "struct sVar** "))), "/usr/local/include/neo-c.h", 3280, 702);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "/usr/local/include/neo-c.h", 3281, 703, "unsigned int*"))), "/usr/local/include/neo-c.h", 3281, 704);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3282, 705, "_Bool*"))), "/usr/local/include/neo-c.h", 3282, 706);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3293, 707),(_Bool)0), "/usr/local/include/neo-c.h", 3293, 708);
        key_hash=string_get_hash_key(((char* )it));
        hash=key_hash%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                if(++n>=size) {
                    n=0;
                }
                if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                hashes[n]=key_hash;
                keys[n]=it;
                memset(&default_value_42,0,sizeof(struct sVar* ));
                __right_value0 = (void*)0;
                items[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value_42, "/usr/local/include/neo-c.h", 3316, 709),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3319, 710);
                break;
                come_call_finalizer(sVar_finalize, default_value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3321, 711);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3324, 712);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3324, 713);
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3325, 714));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3326, 715));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_43;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3054, 740);
            }
        }
    }
    come_free((char*)self->items);
    for(i_43=0    ;i_43<self->size;i_43++){
        if(self->item_existance[i_43]) {
            if(1) {
                (self->keys[i_43] = come_decrement_ref_count(self->keys[i_43], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3063, 741));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3069, 742);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3071, 743));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3072, 744));
            neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_to_string_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj104  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj105  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj106  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj107  ;
    char*  last_code2  ;
    char*  __dec_obj108  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  cloner  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    int i;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_5;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var4
;    char*  name  =0;
    struct sType*  field_type  =0;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj109  ;
    char*  __dec_obj110  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_45  ;
    struct sType*  self_type  ;
    struct sType*  __list_values3__[1]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values4__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value2;
    struct sFunNode* _inf_obj_value2;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj111  ;
    struct buffer*  __dec_obj112  ;
    char*  __dec_obj113  ;
    char*  __dec_obj114  ;
    char*  __dec_obj115  ;
    struct buffer*  __dec_obj116  ;
    struct buffer*  __dec_obj117  ;
    struct buffer*  __dec_obj118  ;
    struct list$1sRightValueObject$ph* __dec_obj119;
    struct list$1CVALUE$ph* __dec_obj120;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 239, 842);
    __dec_obj104=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 240, 843);
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 241, 844);
    __dec_obj105=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 242, 845);
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 243, 846);
    __dec_obj106=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 244, 847);
    right_value_max=info->right_value_max;
    right_value_num=info->right_value_num;
    max_conditional=info->max_conditional;
    num_conditional=info->num_conditional;
    in_conditional=info->in_conditional;
    info->in_conditional=(_Bool)0;
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 253, 848);
    __dec_obj107=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 254, 849);
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 255, 850);
    __dec_obj108=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 256, 851);
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",258), "43function3.nc", 258, 852);
    sline_top=info->sline;
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 261, 853);
    right_value_objects=info->right_value_objects;
    no_output_come_code=info->no_output_come_code;
    info->no_output_come_code=(_Bool)0;
    cloner=((void*)0);
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 234, 854);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 236, 855);
    type=type2;
    klass=type->mClass;
    if(type->mPointerNum>0&&!klass->mNumber) {
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 243, 856, "struct buffer* "), "43function3.nc", 243, 857)), "43function3.nc", 243, 858);
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"var result = new buffer();\n");
        buffer_append_format(source,"result.append_str(\"%s {\");\n",klass->mName);
        i=0;
        __right_value0 = (void*)0;
        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        for(_o2_saved_5=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 252, 859),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_5)        ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_5);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_5)){
            multiple_assign_var4=it;
            name=(char* )come_increment_ref_count(multiple_assign_var4->v1, "43function3.nc", 253, 860);
            field_type=(struct sType* )come_increment_ref_count(multiple_assign_var4->v2, "43function3.nc", 253, 861);
            if(i==list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)-1) {
                char source2[1024];
                memset(&source2, 0, sizeof(source2));
                snprintf(source2,1024,"result.append_str(\"%s:\");\n",name);
                buffer_append_str(source,source2);
                snprintf(source2,1024,"result.append_str(self.%s.to_string());\n",name);
                buffer_append_str(source,source2);
            }
            else {
                char source2_44[1024];
                memset(&source2_44, 0, sizeof(source2_44));
                snprintf(source2_44,1024,"result.append_str(\"%s:\");\n",name);
                buffer_append_str(source,source2_44);
                snprintf(source2_44,1024,"result.append_str(self.%s.to_string());\n",name);
                buffer_append_str(source,source2_44);
                snprintf(source2_44,1024,"result.append_str(\",\");\n");
                buffer_append_str(source,source2_44);
            }
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 284, 862));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 284, 863);
        }
        buffer_append_str(source,"result.append_str(\"}\");\n");
        buffer_append_format(source,"return result.to_string();\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 291, 864);
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 292, 865);
        head=info->head;
        __dec_obj109=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 295, 867);
        come_call_finalizer(buffer_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 295, 866);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        __dec_obj110=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",302), "43function3.nc", 302, 869);
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 302, 868);
        info->sline=1;
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 305, 870);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "43function3.nc", 307, 871, "struct sType* "), "43function3.nc", 307, 872),(char*)come_increment_ref_count(xsprintf("char*"), "43function3.nc", 307, 873),(_Bool)0,info,(_Bool)0,0), "43function3.nc", 307, 874);
        result_type->mHeap=(_Bool)1;
        __right_value0 = (void*)0;
        name_45=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 309, 875, "char* "), "43function3.nc", 309, 876);
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 310, 877);
        self_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values3__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 312, 878, "struct list$1sType$ph"), "43function3.nc", 312, 879),1,__list_values3__)), "43function3.nc", 312, 880);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values4__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",313))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 313, 881, "struct list$1char$ph"), "43function3.nc", 313, 882),1,__list_values4__)), "43function3.nc", 313, 883);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 314, 884, "struct list$1char$ph*"), "43function3.nc", 314, 885)), "43function3.nc", 314, 886);
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_45,"43function3.nc",321)))), "43function3.nc", 321, 887);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 321, 888));
        if(fun2==((void*)0)||fun2->mExternal) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 323, 889, "struct sFun* "), "43function3.nc", 327, 890),(char* )come_increment_ref_count(name_45, "43function3.nc", 327, 891),(struct sType*)come_increment_ref_count(result_type, "43function3.nc", 327, 892),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 327, 893),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 327, 894),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 327, 895),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 327, 896),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 327, 897),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 327, 898),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 327, 899)), "43function3.nc", 327, 900);
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_45,"43function3.nc",330), "43function3.nc", 330, 901),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 330, 902),(_Bool)0);
            cloner=fun;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 334, 906, "struct sNode");
            _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 334, 903, "struct sFunNode* "), "43function3.nc", 334, 904),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 334, 905),info))), "43function3.nc", 334, 907);
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sFunNode_finalize;
            _inf_value2->clone=(void*)sFunNode_clone;
            _inf_value2->compile=(void*)sFunNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sFunNode_kind;
            _inf_value2->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value2, "43function3.nc", 334, 908);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 334, 909);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 345, 910);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 345, 911):(void*)0);
        }
        else {
            cloner=fun2;
        }
        __dec_obj111=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 345, 913);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 345, 912);
        info->sline=sline;
        __dec_obj112=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 348, 915);
        come_call_finalizer(buffer_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 348, 914);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 916);
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 917);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 359, 918));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 919);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 920);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 921);
        (name_45 = come_decrement_ref_count(name_45, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 359, 922));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 923);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 924);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 925);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 926);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 359, 927);
    }
    info->no_output_come_code=no_output_come_code;
    __right_value0 = (void*)0;
    __dec_obj113=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",360), "43function3.nc", 360, 929);
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 360, 928);
    info->sline=sline_top;
    __dec_obj114=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 363, 931);
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 363, 930);
    __dec_obj115=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 364, 933);
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 364, 932);
    info->caller_fun=caller_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->num_conditional=num_conditional;
    info->max_conditional=max_conditional;
    info->in_conditional=in_conditional;
    __dec_obj116=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 375, 935);
    come_call_finalizer(buffer_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 375, 934);
    __dec_obj117=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 376, 937);
    come_call_finalizer(buffer_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 376, 936);
    __dec_obj118=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 377, 939);
    come_call_finalizer(buffer_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 377, 938);
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj119=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 379, 941);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 379, 940);
    __dec_obj120=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 380, 943);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 380, 942);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 360, 944, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 360, 945),cloner,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 360, 946)))), "43function3.nc", 360, 947);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 360, 948);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 360, 949);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 360, 950);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 360, 951));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 360, 952));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 360, 953));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 360, 954);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 360, 955));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 360, 956);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 360, 957);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 360, 958);
    return __result_obj__0;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
                neo_current_frame = fr.prev;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_get_hash_key_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj121  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj122  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj123  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj124  ;
    char*  last_code2  ;
    char*  __dec_obj125  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  get_hash_key_fun  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var5
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj126  ;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    int i_46;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_6;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var6
;    char*  name_47  =0;
    struct sType*  field_type  =0;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj127  ;
    char*  __dec_obj128  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_48  ;
    struct sType*  self_type  ;
    struct sType*  __list_values5__[1]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values6__[1]  ;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value3;
    struct sFunNode* _inf_obj_value3;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj129  ;
    struct buffer*  __dec_obj130  ;
    char*  __dec_obj131  ;
    char*  __dec_obj132  ;
    char*  __dec_obj133  ;
    struct buffer*  __dec_obj134  ;
    struct buffer*  __dec_obj135  ;
    struct buffer*  __dec_obj136  ;
    struct list$1sRightValueObject$ph* __dec_obj137;
    struct list$1CVALUE$ph* __dec_obj138;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 374, 959);
    __dec_obj121=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 375, 960);
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 376, 961);
    __dec_obj122=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 377, 962);
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 378, 963);
    __dec_obj123=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 379, 964);
    right_value_max=info->right_value_max;
    right_value_num=info->right_value_num;
    max_conditional=info->max_conditional;
    num_conditional=info->num_conditional;
    in_conditional=info->in_conditional;
    info->in_conditional=(_Bool)0;
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 388, 965);
    __dec_obj124=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 389, 966);
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 390, 967);
    __dec_obj125=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 391, 968);
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",393), "43function3.nc", 393, 969);
    sline_top=info->sline;
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 396, 970);
    right_value_objects=info->right_value_objects;
    no_output_come_code=info->no_output_come_code;
    info->no_output_come_code=(_Bool)0;
    get_hash_key_fun=((void*)0);
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 369, 971);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 371, 972);
    type=type2;
    klass=type->mClass;
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        __right_value0 = (void*)0;
        get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        if(get_hash_key_fun==((void*)0)) {
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName), "43function3.nc", 381, 973);
            __right_value0 = (void*)0;
            generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "43function3.nc", 383, 974);
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            if(generics_fun) {
                __right_value0 = (void*)0;
                multiple_assign_var5=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(real_fun_name, "43function3.nc", 387, 1005),generics_fun,type,info)));
                name=(char* )come_increment_ref_count(multiple_assign_var5->v1, "43function3.nc", 387, 1006);
                err=multiple_assign_var5->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 387, 1007);
                if(!err) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                __right_value0 = (void*)0;
                get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 397, 1008));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 398, 1009));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 398, 1010));
        }
    }
    else {
        for(i=128-1        ;i>=1;i--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i), "43function3.nc", 402, 1011);
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(get_hash_key_fun) {
                __right_value0 = (void*)0;
                __dec_obj126=real_fun_name,
                real_fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"43function3.nc",406), "43function3.nc", 406, 1013);
                __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 406, 1012);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 407, 1014));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 411, 1015));
        }
        if(get_hash_key_fun==((void*)0)) {
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        }
    }
    if(get_hash_key_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber&&!klass->mProtocol) {
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 417, 1016, "struct buffer* "), "43function3.nc", 417, 1017)), "43function3.nc", 417, 1018);
        buffer_append_str(source,"{\n");
        buffer_append_str(source,"unsigned int result = 0;\n");
        i_46=0;
        __right_value0 = (void*)0;
        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        for(_o2_saved_6=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "43function3.nc", 424, 1019),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_6)        ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_6);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_6)){
            multiple_assign_var6=it;
            name_47=(char* )come_increment_ref_count(multiple_assign_var6->v1, "43function3.nc", 425, 1020);
            field_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v2, "43function3.nc", 425, 1021);
            char source2[1024];
            memset(&source2, 0, sizeof(source2));
            snprintf(source2,1024,"result += ((int)self.%s).get_hash_key();\n",name_47);
            buffer_append_str(source,source2);
            i_46++;
            (name_47 = come_decrement_ref_count(name_47, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 436, 1022));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 436, 1023);
        }
        buffer_append_format(source,"return result;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 441, 1024);
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 442, 1025);
        head=info->head;
        __dec_obj127=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 445, 1027);
        come_call_finalizer(buffer_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 445, 1026);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        __dec_obj128=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",452), "43function3.nc", 452, 1029);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 452, 1028);
        info->sline=1;
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 455, 1030);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "43function3.nc", 457, 1031, "struct sType* "), "43function3.nc", 457, 1032),(char*)come_increment_ref_count(xsprintf("int"), "43function3.nc", 457, 1033),(_Bool)0,info,(_Bool)0,0), "43function3.nc", 457, 1034);
        result_type->mUnsigned=(_Bool)1;
        __right_value0 = (void*)0;
        name_48=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 459, 1035, "char* "), "43function3.nc", 459, 1036);
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 460, 1037);
        self_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values5__[0]=self_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 462, 1038, "struct list$1sType$ph"), "43function3.nc", 462, 1039),1,__list_values5__)), "43function3.nc", 462, 1040);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values6__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",463))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 463, 1041, "struct list$1char$ph"), "43function3.nc", 463, 1042),1,__list_values6__)), "43function3.nc", 463, 1043);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 464, 1044, "struct list$1char$ph*"), "43function3.nc", 464, 1045)), "43function3.nc", 464, 1046);
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_48,"43function3.nc",471)))), "43function3.nc", 471, 1047);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 471, 1048));
        if(fun2==((void*)0)||fun2->mExternal) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 473, 1049, "struct sFun* "), "43function3.nc", 477, 1050),(char* )come_increment_ref_count(name_48, "43function3.nc", 477, 1051),(struct sType*)come_increment_ref_count(result_type, "43function3.nc", 477, 1052),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 477, 1053),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 477, 1054),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 477, 1055),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 477, 1056),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 477, 1057),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 477, 1058),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 477, 1059)), "43function3.nc", 477, 1060);
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_48,"43function3.nc",480), "43function3.nc", 480, 1061),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 480, 1062),(_Bool)0);
            get_hash_key_fun=fun;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 484, 1066, "struct sNode");
            _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 484, 1063, "struct sFunNode* "), "43function3.nc", 484, 1064),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 484, 1065),info))), "43function3.nc", 484, 1067);
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sFunNode_finalize;
            _inf_value3->clone=(void*)sFunNode_clone;
            _inf_value3->compile=(void*)sFunNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sFunNode_kind;
            _inf_value3->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value3, "43function3.nc", 484, 1068);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 484, 1069);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 495, 1070);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 495, 1071):(void*)0);
        }
        else {
            get_hash_key_fun=fun2;
        }
        __dec_obj129=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 495, 1073);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 495, 1072);
        info->sline=sline;
        __dec_obj130=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 498, 1075);
        come_call_finalizer(buffer_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 498, 1074);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1076);
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1077);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 509, 1078));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1079);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1080);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1081);
        (name_48 = come_decrement_ref_count(name_48, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 509, 1082));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1083);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1084);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1085);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1086);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 509, 1087);
    }
    info->no_output_come_code=no_output_come_code;
    __right_value0 = (void*)0;
    __dec_obj131=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",510), "43function3.nc", 510, 1089);
    __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 510, 1088);
    info->sline=sline_top;
    __dec_obj132=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 513, 1091);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 513, 1090);
    __dec_obj133=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 514, 1093);
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 514, 1092);
    info->caller_fun=caller_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->num_conditional=num_conditional;
    info->max_conditional=max_conditional;
    info->in_conditional=in_conditional;
    __dec_obj134=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 525, 1095);
    come_call_finalizer(buffer_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 525, 1094);
    __dec_obj135=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 526, 1097);
    come_call_finalizer(buffer_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 526, 1096);
    __dec_obj136=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 527, 1099);
    come_call_finalizer(buffer_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 527, 1098);
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj137=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 529, 1101);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 529, 1100);
    __dec_obj138=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 530, 1103);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 530, 1102);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 510, 1104, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 510, 1105),get_hash_key_fun,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 510, 1106)))), "43function3.nc", 510, 1107);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 510, 1108);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 510, 1109);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 510, 1110);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 510, 1111));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 510, 1112));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 510, 1113));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 510, 1114);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 510, 1115));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 510, 1116);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 510, 1117);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 510, 1118);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 975);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 976);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 977);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3545, 978);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3545, 979);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3545, 980);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3552, 981);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 982);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 983);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3556, 984);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 985);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 986);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3560, 987);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 988);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 989);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3533, 990);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 991);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3533, 992);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3545, 993);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3545, 994);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3545, 995);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3552, 996);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 997);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3552, 998);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3556, 999);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 1000);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3556, 1001);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3560, 1002);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 1003);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3560, 1004);
    return __result_obj__0;
}

struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_compare_automatically"; neo_current_frame = &fr;
    struct sClass*  current_stack_frame_struct  ;
    struct sFun*  caller_fun  ;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    struct buffer*  __dec_obj139  ;
    struct buffer*  loop_expression_buffer  ;
    struct buffer*  __dec_obj140  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj141  ;
    int right_value_max;
    int right_value_num;
    int max_conditional;
    int num_conditional;
    _Bool in_conditional;
    char*  last_code  ;
    char*  __dec_obj142  ;
    char*  last_code2  ;
    char*  __dec_obj143  ;
    char*  sname_top  ;
    int sline_top;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    _Bool no_output_come_code;
    struct sFun*  get_hash_key_fun  ;
    char*  real_fun_name  ;
    struct sType*  type2  ;
    struct sClass*  klass  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var7
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj144  ;
    void* __right_value1 = (void*)0;
    struct buffer*  source  ;
    int i_49;
    struct tuple2$2char$phsType$ph* multiple_assign_var8
;    char*  name_52  =0;
    struct sType*  field_type  =0;
    char* p;
    int sline;
    char*  sname  ;
    struct buffer*  source3  ;
    char* head;
    struct buffer*  __dec_obj145  ;
    char*  __dec_obj146  ;
    struct sBlock*  block  ;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    char*  name_53  ;
    struct sType*  self_type  ;
    struct sType*  right_type  ;
    struct sType*  __list_values7__[2]  ;
    struct list$1sType$ph* param_types;
    char*  __list_values8__[2]  ;
    void* __right_value3 = (void*)0;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun2  ;
    struct sFun* fun;
    struct sNode* _inf_value4;
    struct sFunNode* _inf_obj_value4;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj147  ;
    struct buffer*  __dec_obj148  ;
    char*  __dec_obj149  ;
    char*  __dec_obj150  ;
    char*  __dec_obj151  ;
    struct buffer*  __dec_obj152  ;
    struct buffer*  __dec_obj153  ;
    struct buffer*  __dec_obj154  ;
    struct list$1sRightValueObject$ph* __dec_obj155;
    struct list$1CVALUE$ph* __dec_obj156;
    struct tuple2$2sFun$pchar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    current_stack_frame_struct=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    caller_fun=info->caller_fun;
    info->caller_fun=info->come_fun;
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "43function3.nc", 524, 1119);
    __dec_obj139=info->if_expression_buffer,
    info->if_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 525, 1120);
    __right_value0 = (void*)0;
    loop_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->loop_expression_buffer), "43function3.nc", 526, 1121);
    __dec_obj140=info->loop_expression_buffer,
    info->loop_expression_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 527, 1122);
    __right_value0 = (void*)0;
    paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->paren_block_buffer), "43function3.nc", 528, 1123);
    __dec_obj141=info->paren_block_buffer,
    info->paren_block_buffer=((void*)0);
    come_call_finalizer(buffer_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 529, 1124);
    right_value_max=info->right_value_max;
    right_value_num=info->right_value_num;
    max_conditional=info->max_conditional;
    num_conditional=info->num_conditional;
    in_conditional=info->in_conditional;
    info->in_conditional=(_Bool)0;
    last_code=(char* )come_increment_ref_count(info->module->mLastCode, "43function3.nc", 538, 1125);
    __dec_obj142=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 539, 1126);
    last_code2=(char* )come_increment_ref_count(info->module->mLastCode2, "43function3.nc", 540, 1127);
    __dec_obj143=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 541, 1128);
    __right_value0 = (void*)0;
    sname_top=(char* )come_increment_ref_count(__builtin_string(info->sname,"43function3.nc",543), "43function3.nc", 543, 1129);
    sline_top=info->sline;
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "43function3.nc", 546, 1130);
    right_value_objects=info->right_value_objects;
    no_output_come_code=info->no_output_come_code;
    info->no_output_come_code=(_Bool)0;
    get_hash_key_fun=((void*)0);
    __right_value0 = (void*)0;
    real_fun_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1), "43function3.nc", 519, 1131);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,type,info), "43function3.nc", 521, 1132);
    type=type2;
    klass=type->mClass;
    if(list$1sType$ph_length(type->mGenericsTypes)>0) {
        __right_value0 = (void*)0;
        get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        if(get_hash_key_fun==((void*)0)) {
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName), "43function3.nc", 531, 1133);
            __right_value0 = (void*)0;
            generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "43function3.nc", 533, 1134);
            __right_value0 = (void*)0;
            generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
            if(generics_fun) {
                __right_value0 = (void*)0;
                multiple_assign_var7=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(real_fun_name, "43function3.nc", 537, 1135),generics_fun,type,info)));
                name=(char* )come_increment_ref_count(multiple_assign_var7->v1, "43function3.nc", 537, 1136);
                err=multiple_assign_var7->v2;
                come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 537, 1137);
                if(!err) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                __right_value0 = (void*)0;
                get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 547, 1138));
            }
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 548, 1139));
            (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 548, 1140));
        }
    }
    else {
        for(i=128-1        ;i>=1;i--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",real_fun_name,i), "43function3.nc", 552, 1141);
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(get_hash_key_fun) {
                __right_value0 = (void*)0;
                __dec_obj144=real_fun_name,
                real_fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"43function3.nc",556), "43function3.nc", 556, 1143);
                __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 556, 1142);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 557, 1144));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 561, 1145));
        }
        if(get_hash_key_fun==((void*)0)) {
            __right_value0 = (void*)0;
            get_hash_key_fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name)));
        }
    }
    if(get_hash_key_fun==((void*)0)&&type->mPointerNum>0&&!klass->mNumber&&!klass->mProtocol) {
        __right_value0 = (void*)0;
        source=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "43function3.nc", 567, 1146, "struct buffer* "), "43function3.nc", 567, 1147)), "43function3.nc", 567, 1148);
        buffer_append_str(source,"{\n");
        i_49=0;
        __right_value0 = (void*)0;
        klass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass->mName)));
        if(list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
            err_msg(info,"require field");
            exit(1);
        }
        __right_value0 = (void*)0;
        multiple_assign_var8=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass->mFields,0)));
        name_52=(char* )come_increment_ref_count(multiple_assign_var8->v1, "43function3.nc", 578, 1167);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var8->v2, "43function3.nc", 578, 1168);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 578, 1169);
        char source2[1024];
        memset(&source2, 0, sizeof(source2));
        snprintf(source2,1024,"var result = self.%s.compare(right.%s);\n",name_52,name_52);
        buffer_append_str(source,source2);
        buffer_append_format(source,"return result;\n");
        buffer_append_char(source,125);
        p=info->p;
        sline=info->sline;
        sname=(char* )come_increment_ref_count(info->sname, "43function3.nc", 591, 1170);
        source3=(struct buffer* )come_increment_ref_count(info->source, "43function3.nc", 592, 1171);
        head=info->head;
        __dec_obj145=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "43function3.nc", 595, 1173);
        come_call_finalizer(buffer_finalize, __dec_obj145,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 595, 1172);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        __dec_obj146=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(real_fun_name,"43function3.nc",602), "43function3.nc", 602, 1175);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 602, 1174);
        info->sline=1;
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "43function3.nc", 605, 1176);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "43function3.nc", 607, 1177, "struct sType* "), "43function3.nc", 607, 1178),(char*)come_increment_ref_count(xsprintf("int"), "43function3.nc", 607, 1179),(_Bool)0,info,(_Bool)0,0), "43function3.nc", 607, 1180);
        (name_52 = come_decrement_ref_count(name_52, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 608, 1181));
        __right_value0 = (void*)0;
        name_53=(char* )come_increment_ref_count((char* )come_memdup(real_fun_name, "43function3.nc", 608, 1182, "char* "), "43function3.nc", 608, 1183);
        __right_value0 = (void*)0;
        self_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 609, 1184);
        self_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        right_type=(struct sType* )come_increment_ref_count(sType_clone(type), "43function3.nc", 611, 1185);
        right_type->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values7__[0]=self_type,
__list_values7__[1]=right_type,
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "43function3.nc", 613, 1186, "struct list$1sType$ph"), "43function3.nc", 613, 1187),2,__list_values7__)), "43function3.nc", 613, 1188);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values8__[0]=((char* )(__right_value0=__builtin_string("self","43function3.nc",614))),
__list_values8__[1]=((char* )(__right_value1=__builtin_string("right","43function3.nc",614))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 614, 1189, "struct list$1char$ph"), "43function3.nc", 614, 1190),2,__list_values8__)), "43function3.nc", 614, 1191);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "43function3.nc", 615, 1192, "struct list$1char$ph*"), "43function3.nc", 615, 1193)), "43function3.nc", 615, 1194);
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        list$1char$ph_push_back(param_default_parametors,((void*)0));
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        result_type->mInline=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(name_53,"43function3.nc",623)))), "43function3.nc", 623, 1195);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "43function3.nc", 623, 1196));
        if(fun2==((void*)0)||fun2->mExternal) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "43function3.nc", 625, 1197, "struct sFun* "), "43function3.nc", 629, 1198),(char* )come_increment_ref_count(name_53, "43function3.nc", 629, 1199),(struct sType*)come_increment_ref_count(result_type, "43function3.nc", 629, 1200),(struct list$1sType$ph*)come_increment_ref_count(param_types, "43function3.nc", 629, 1201),(struct list$1char$ph*)come_increment_ref_count(param_names, "43function3.nc", 629, 1202),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "43function3.nc", 629, 1203),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "43function3.nc", 629, 1204),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 629, 1205),(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 629, 1206),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "43function3.nc", 629, 1207)), "43function3.nc", 629, 1208);
            fun->mGenericsFun=(_Bool)1;
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_53,"43function3.nc",632), "43function3.nc", 632, 1209),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 632, 1210),(_Bool)0);
            get_hash_key_fun=fun;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "43function3.nc", 636, 1214, "struct sNode");
            _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "43function3.nc", 636, 1211, "struct sFunNode* "), "43function3.nc", 636, 1212),(struct sFun*)come_increment_ref_count(fun, "43function3.nc", 636, 1213),info))), "43function3.nc", 636, 1215);
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sFunNode_finalize;
            _inf_value4->clone=(void*)sFunNode_clone;
            _inf_value4->compile=(void*)sFunNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sFunNode_kind;
            _inf_value4->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(_inf_value4, "43function3.nc", 636, 1216);
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 636, 1217);
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 647, 1218);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "43function3.nc", 647, 1219):(void*)0);
        }
        else {
            get_hash_key_fun=fun2;
        }
        __dec_obj147=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "43function3.nc", 647, 1221);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 647, 1220);
        info->sline=sline;
        __dec_obj148=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source3, "43function3.nc", 650, 1223);
        come_call_finalizer(buffer_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 650, 1222);
        if(info->p==((void*)0)) {
            info->p=info->source->buf;
        }
        info->p=info->source->buf;
        info->p=p;
        info->head=head;
        info->sline=sline;
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1224);
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1225);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 661, 1226));
        come_call_finalizer(buffer_finalize, source3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1227);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1228);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1229);
        (name_53 = come_decrement_ref_count(name_53, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 661, 1230));
        come_call_finalizer(sType_finalize, self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1231);
        come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1232);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1233);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1234);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1235);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 661, 1236);
    }
    info->no_output_come_code=no_output_come_code;
    __right_value0 = (void*)0;
    __dec_obj149=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname_top,"43function3.nc",662), "43function3.nc", 662, 1238);
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 662, 1237);
    info->sline=sline_top;
    __dec_obj150=info->module->mLastCode,
    info->module->mLastCode=(char* )come_increment_ref_count(last_code, "43function3.nc", 665, 1240);
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 665, 1239);
    __dec_obj151=info->module->mLastCode2,
    info->module->mLastCode2=(char* )come_increment_ref_count(last_code2, "43function3.nc", 666, 1242);
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "43function3.nc", 666, 1241);
    info->caller_fun=caller_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->num_conditional=num_conditional;
    info->max_conditional=max_conditional;
    info->in_conditional=in_conditional;
    __dec_obj152=info->if_expression_buffer,
    info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "43function3.nc", 677, 1244);
    come_call_finalizer(buffer_finalize, __dec_obj152,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 677, 1243);
    __dec_obj153=info->loop_expression_buffer,
    info->loop_expression_buffer=(struct buffer* )come_increment_ref_count(loop_expression_buffer, "43function3.nc", 678, 1246);
    come_call_finalizer(buffer_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 678, 1245);
    __dec_obj154=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "43function3.nc", 679, 1248);
    come_call_finalizer(buffer_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 679, 1247);
    info->current_stack_frame_struct=current_stack_frame_struct;
    __dec_obj155=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "43function3.nc", 681, 1250);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 681, 1249);
    __dec_obj156=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "43function3.nc", 682, 1252);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc", 682, 1251);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "43function3.nc", 662, 1253, "struct tuple2$2sFun$pchar$ph"), "43function3.nc", 662, 1254),get_hash_key_fun,(char* )come_increment_ref_count(real_fun_name, "43function3.nc", 662, 1255)))), "43function3.nc", 662, 1256);
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 662, 1257);
    come_call_finalizer(buffer_finalize, loop_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 662, 1258);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 662, 1259);
    (last_code = come_decrement_ref_count(last_code, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 662, 1260));
    (last_code2 = come_decrement_ref_count(last_code2, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 662, 1261));
    (sname_top = come_decrement_ref_count(sname_top, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 662, 1262));
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 662, 1263);
    (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "43function3.nc", 662, 1264));
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "43function3.nc}", 662, 1265);
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "43function3.nc}", 662, 1266);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "43function3.nc}", 662, 1267);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_50;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 1149);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 1150);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 1151);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 1152);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 1153);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 1154);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_50,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_50, "/usr/local/include/neo-c.h", 2169, 1155);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_50, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 1156);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 1157);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_51;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 1158);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 1159);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 1160);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 1161);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 1162);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 1163);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_51,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_51, "/usr/local/include/neo-c.h", 2169, 1164);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_51, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 1165);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 1166);
    return __result_obj__0;
}

