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

struct span$1char$p
{
    char* memory;
    char* p;
    unsigned long  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
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
    struct span$1char$p* p;
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

struct sSemicolonNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sFun*  mFun  ;
};

struct sRawCodeNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  mCode  ;
};

struct span$1buffer$p
{
    char* memory;
    struct buffer*  p  ;
    unsigned long  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
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
_Bool parsecmp(const char* p2, struct sInfo*  info  );
char*  parse_word(_Bool digits, struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct sNode* statment(struct sInfo*  info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* expression_node_v1(struct sInfo*  info  );
struct sNode* expression_node_v99(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
struct sNode* expression_node_v97(struct sInfo*  info  );
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo*  info  );
char*  sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo*  info  );
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sRawCodeNode* sRawCodeNode_initialize(struct sRawCodeNode* self, char*  code  , struct sInfo*  info  );
_Bool sRawCodeNode_terminated(struct sRawCodeNode* self);
char*  sRawCodeNode_kind(struct sRawCodeNode* self);
_Bool sRawCodeNode_compile(struct sRawCodeNode* self, struct sInfo*  info  );
static void sRawCodeNode_finalize(struct sRawCodeNode* self);
struct sNode* create_fun_node(struct sFun*  fun  , struct sInfo*  info  );
static void sFunNode_finalize(struct sFunNode* self);
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
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
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sBlock*  parse_block(struct sInfo*  info  , _Bool return_self_at_last, _Bool in_function);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct sRawCodeNode* sRawCodeNode_clone(struct sRawCodeNode* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  len  , _Bool local, _Bool heap, _Bool global, void* stacktop);
static void span$1buffer$p$p_finalize(struct span$1buffer$p* self);
static void span$1char$p$p_finalize(struct span$1char$p* self);
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value, _Bool iter_, _Bool loop_result_type);
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject*  self  );
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo*  info  , int top);
char*  skip_block(struct sInfo*  info  , _Bool return_self_at_last);
void parse_function_attribute_skip_paren(struct sInfo*  info  );
_Bool parse_function_attribute_keyword(struct buffer*  result  , const char* keyword, struct sInfo*  info  );
_Bool parse_common_function_attribute_keyword(struct buffer*  result  , struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char*  v1  , char*  v2  );
void transpile_toplevel(_Bool block, struct sInfo*  info  );
int transpile(struct sInfo*  info  );
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char*  map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char*  map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
_Bool is_function_attribute_word(char* buf);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo*  info  );
static void tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
struct sNode* parse_function(struct sInfo*  info  );
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  item  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char*  map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char*  map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sSemicolonNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSemicolonNode*)come_increment_ref_count(self, "07function.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 7, 3);
        __result_obj__0 = (struct sSemicolonNode*)come_increment_ref_count(self, "07function.nc", 10, 4);
    come_call_finalizer(sSemicolonNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 10, 6);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSemicolonNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 10, 7);
    return __result_obj__0;
}

char*  sSemicolonNode_kind(struct sSemicolonNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSemicolonNode","07function.nc",12))), "07function.nc", 12, 8);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 12, 9));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "07function.nc", 12, 10));
    return __result_obj__0;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_compile"; neo_current_frame = &fr;
    add_come_code(info,";\n");
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
    }
        neo_current_frame = fr.prev;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSemicolonNode_finalize", 2, 5));
    }
        neo_current_frame = fr.prev;
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sLambdaNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLambdaNode*)come_increment_ref_count(self, "07function.nc", 27, 11),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 27, 12);
    self->mFun=fun;
        __result_obj__0 = (struct sLambdaNode*)come_increment_ref_count(self, "07function.nc", 32, 13);
    come_call_finalizer(sLambdaNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 32, 15);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLambdaNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 32, 16);
    return __result_obj__0;
}

char*  sLambdaNode_kind(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLambdaNode","07function.nc",34))), "07function.nc", 34, 17);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 34, 18));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "07function.nc", 34, 19));
    return __result_obj__0;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_compile"; neo_current_frame = &fr;
    struct sFun*  come_fun  ;
    int right_value_max;
    int right_value_num;
    int block_level;
    int max_conditional;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj1  ;
    struct sType*  __dec_obj36  ;
    _Bool __result_obj__0;
    come_fun=info->come_fun;
    info->come_fun=self->mFun;
    right_value_max=info->right_value_max;
    info->right_value_max=0;
    right_value_num=info->right_value_num;
    info->right_value_num=0;
    block_level=info->block_level;
    info->block_level=0;
    max_conditional=info->max_conditional;
    info->max_conditional=0;
    if(!gComeC&&!info->come_fun->mResultType->mNorecord) {
        add_come_code_at_function_head(info,((char*)(__right_value1=xsprintf("struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = \"\%s\"; neo_current_frame = &fr;\n",((char* )(__right_value0=string_to_string(info->come_fun->mName)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 55, 20));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 55, 21));
    }
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    if(!gComeC&&!info->inhibits_output_code2&&!info->come_fun->mResultType->mNorecord) {
        add_come_code_no_indent(info,"neo_current_frame = fr.prev;\n");
    }
    info->block_level=block_level;
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "07function.nc", 67, 22, "struct CVALUE* "), "07function.nc", 67, 23)), "07function.nc", 67, 24);
    __right_value0 = (void*)0;
    __dec_obj1=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("%s",self->mFun->mName), "07function.nc", 69, 26);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 69, 25);
    __right_value0 = (void*)0;
    __dec_obj36=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(self->mFun->mLambdaType), "07function.nc", 70, 237);
    come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 70, 236);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "07function.nc", 75, 257));
    info->come_fun=come_fun;
    info->right_value_max=right_value_max;
    info->right_value_num=right_value_num;
    info->max_conditional=max_conditional;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 83, 258);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLambdaNode_finalize(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLambdaNode_finalize", 2, 14));
    }
        neo_current_frame = fr.prev;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj2  ;
    struct sType*  __dec_obj3  ;
    struct list$1sType$ph* __dec_obj7;
    struct sType*  __dec_obj8  ;
    struct sNode* __dec_obj9;
    struct sNode* __dec_obj10;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    char*  __dec_obj18  ;
    struct list$1sNode$ph* __dec_obj22;
    struct list$1sNode$ph* __dec_obj23;
    struct list$1int$* __dec_obj24;
    struct list$1int$* __dec_obj25;
    struct sType*  __dec_obj26  ;
    char*  __dec_obj27  ;
    struct list$1sType$ph* __dec_obj28;
    struct list$1char$ph* __dec_obj32;
    struct sType*  __dec_obj33  ;
    struct sNode* __dec_obj34;
    struct list$1sNode$ph* __dec_obj35;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 27);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 60);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 61, "struct sType* "), "sType_clone", 5, 62);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 64);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 63);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 66);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 65);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 96);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 95);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 98);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 97);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 107);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 106) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 109);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 108) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 110, "char* "), "sType_clone", 14, 112);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 111);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 113, "char* "), "sType_clone", 15, 115);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 114);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 116, "char* "), "sType_clone", 16, 118);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 117);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 119, "char* "), "sType_clone", 17, 121);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 120);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 122, "char* "), "sType_clone", 18, 124);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 123);
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
        __dec_obj16=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 125, "char* "), "sType_clone", 49, 127);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 126);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 128, "char* "), "sType_clone", 51, 130);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 129);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 131, "char* "), "sType_clone", 54, 133);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 132);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 163);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 162);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 165);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 164);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 185);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 184);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 187);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 186);
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
        __dec_obj26=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 189);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 188);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 190, "char* "), "sType_clone", 67, 192);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 191);
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
        __dec_obj28=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 194);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 193);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 226);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 225);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 228);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 227);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 230);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 229) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 232);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 231);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 233);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 234);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 235);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 28);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 29);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 32);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 33);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 34):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 35):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 36));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 37));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 38));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 39));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 40));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 41));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 42));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 43));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 46);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 47);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 49);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 50);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 51);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 52));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 53);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 56);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 57);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 58):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 59);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 31);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 30);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 45);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 44):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 48);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 55);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 54));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 67);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 68);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 69, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 73)), "/usr/local/include/neo-c.h", 1513, 74);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 89));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 90));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 91);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 92);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 93);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 70);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 71);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 72);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj5  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj6  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 75);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 76, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 77);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 79);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 78);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 80, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 81);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 83);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 82);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 84, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 85);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 87);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 86);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 88);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 94);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 99);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 100):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 101, "struct sNode*"), "sNode_clone", 5, 102);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 103);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 104):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 105):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 134);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 135);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 136, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 140)), "/usr/local/include/neo-c.h", 1513, 141);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 156));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 157));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 158);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 159);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 160);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 137);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 138);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 139);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj20;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj21;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 142):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 143, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 144);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 146);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 145) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 147, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 148);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 150);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 149) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 151, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 152);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 154);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 153) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 155):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 161);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 166);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 167);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 168, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 172)), "/usr/local/include/neo-c.h", 1513, 173);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 180);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 181);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 182);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 169);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 170);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 171);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 174, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 175);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 176, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 177);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 178, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 179);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 183);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 195);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 196);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 197, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 201)), "/usr/local/include/neo-c.h", 1513, 202);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 217, "char* "), "/usr/local/include/neo-c.h", 1518, 218));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 219, "char* "), "/usr/local/include/neo-c.h", 1521, 220));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 221);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 222);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 223);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 198);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 199);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 200);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj30  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj31  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 203));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 204, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 205);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 207);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 206);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 208, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 209);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 211);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 210);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 212, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 213);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 215);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 214);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 216));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 224);
    }
            neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj37  ;
    struct list_item$1CVALUE$ph* litem_8;
    struct CVALUE*  __dec_obj38  ;
    struct list_item$1CVALUE$ph* litem_9;
    struct CVALUE*  __dec_obj39  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 243);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1619, 244, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1619, 245);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj37=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 247);
        come_call_finalizer(CVALUE_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 246);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1629, 248, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1629, 249);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        __dec_obj38=litem_8->item,
        litem_8->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 251);
        come_call_finalizer(CVALUE_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 250);
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1639, 252, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1639, 253);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        __dec_obj39=litem_9->item,
        litem_9->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 255);
        come_call_finalizer(CVALUE_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 254);
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 256);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 238));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 239);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 240));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 241));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 242));
    }
            neo_current_frame = fr.prev;
}

struct sRawCodeNode* sRawCodeNode_initialize(struct sRawCodeNode* self, char*  code  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj40  ;
    struct sRawCodeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRawCodeNode*)come_increment_ref_count(self, "07function.nc", 91, 259),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 91, 260);
    __right_value0 = (void*)0;
    __dec_obj40=self->mCode,
    self->mCode=(char* )come_increment_ref_count(__builtin_string(code,"07function.nc",92), "07function.nc", 92, 262);
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 92, 261);
        __result_obj__0 = (struct sRawCodeNode*)come_increment_ref_count(self, "07function.nc", 95, 263);
    come_call_finalizer(sRawCodeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 95, 266);
    (code = come_decrement_ref_count(code, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 95, 267));
    neo_current_frame = fr.prev;
    come_call_finalizer(sRawCodeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 95, 268);
    return __result_obj__0;
}

_Bool sRawCodeNode_terminated(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sRawCodeNode_kind(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRawCodeNode","07function.nc",102))), "07function.nc", 102, 269);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 102, 270));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "07function.nc", 102, 271));
    return __result_obj__0;
}

_Bool sRawCodeNode_compile(struct sRawCodeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_compile"; neo_current_frame = &fr;
    add_come_code(info,"%s\n",self->mCode);
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sRawCodeNode_finalize(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRawCodeNode_finalize", 2, 264));
    }
    if(self!=((void*)0)&&self->mCode!=((void*)0)) {
        (self->mCode = come_decrement_ref_count(self->mCode, (void*)0, (void*)0, 0, 0, (void*)0, "sRawCodeNode_finalize", 3, 265));
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_fun_node(struct sFun*  fun  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_fun_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sFunNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 116, 275, "struct sNode");
    _inf_obj_value1=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "07function.nc", 116, 272, "struct sFunNode* "), "07function.nc", 116, 273),(struct sFun* )come_increment_ref_count(fun, "07function.nc", 116, 274),info))), "07function.nc", 116, 276);
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
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "07function.nc", 116, 534);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 116, 535);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 116, 536);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 116, 537):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 116, 538):(void*)0);
    return __result_obj__0;
}

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 277));
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 304);
    }
        neo_current_frame = fr.prev;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 278));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 279);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 280);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 281);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 282);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 283);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 290);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 293);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 294));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 295));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 296);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 297);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 298);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 299);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 300));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 301));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 302));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 303));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 289);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 288);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 284));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 285));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 286);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 287));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 291);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 292);
    }
            neo_current_frame = fr.prev;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode*  result  ;
    char*  __dec_obj41  ;
    struct sFun*  __dec_obj75  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "sFunNode_clone", 5, 305, "struct sFunNode* "), "sFunNode_clone", 5, 306);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj41=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunNode_clone", 7, 307, "char* "), "sFunNode_clone", 7, 309);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "sFunNode_clone", 7, 308);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj75=result->mFun,
        result->mFun=(struct sFun* )come_increment_ref_count(sFun_clone(self->mFun), "sFunNode_clone", 9, 532);
        come_call_finalizer(sFun_finalize, __dec_obj75,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_clone", 9, 531);
    }
        __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunNode_clone}", 10, 533);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  sFun_clone(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun*  result  ;
    char*  __dec_obj42  ;
    struct sType*  __dec_obj43  ;
    struct list$1sType$ph* __dec_obj44;
    struct list$1char$ph* __dec_obj45;
    struct list$1char$ph* __dec_obj46;
    struct sType*  __dec_obj47  ;
    struct list$1sVar$ph* __dec_obj55;
    struct sBlock*  __dec_obj64  ;
    char*  __dec_obj65  ;
    char*  __dec_obj66  ;
    struct buffer*  __dec_obj67  ;
    struct buffer*  __dec_obj68  ;
    struct buffer*  __dec_obj69  ;
    struct buffer*  __dec_obj70  ;
    char*  __dec_obj71  ;
    char*  __dec_obj72  ;
    char*  __dec_obj73  ;
    char*  __dec_obj74  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count((void*)0, "sFun_clone", 4, 310);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 4, 311);
        return __result_obj__0;
    }
    result=(struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "sFun_clone", 5, 312, "struct sFun* "), "sFun_clone", 5, 313);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj42=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sFun_clone", 6, 314, "char* "), "sFun_clone", 6, 316);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 6, 315);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj43=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sFun_clone", 7, 318);
        come_call_finalizer(sType_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 7, 317);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj44=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sFun_clone", 8, 320);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 8, 319);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj45=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sFun_clone", 9, 322);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 9, 321);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj46=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors), "sFun_clone", 10, 324);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 10, 323);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj47=result->mLambdaType,
        result->mLambdaType=(struct sType* )come_increment_ref_count(sType_clone(self->mLambdaType), "sFun_clone", 11, 326);
        come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 11, 325);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj55=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar), "sFun_clone", 12, 374);
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 12, 373);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj64=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sFun_clone", 13, 501);
        come_call_finalizer(sBlock_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 500);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj65=result->mTextBlock,
        result->mTextBlock=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlock, "sFun_clone", 14, 502, "char* "), "sFun_clone", 14, 504);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 14, 503);
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj66=result->mTextBlockSName,
        result->mTextBlockSName=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlockSName, "sFun_clone", 15, 505, "char* "), "sFun_clone", 15, 507);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 15, 506);
    }
    if(self!=((void*)0)) {
        result->mTextBlockSline=self->mTextBlockSline;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj67=result->mSource,
        result->mSource=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSource), "sFun_clone", 17, 509);
        come_call_finalizer(buffer_finalize, __dec_obj67,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 17, 508);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj68=result->mSourceHead,
        result->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead), "sFun_clone", 18, 511);
        come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 18, 510);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj69=result->mSourceHead2,
        result->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead2), "sFun_clone", 19, 513);
        come_call_finalizer(buffer_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 19, 512);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj70=result->mSourceEnd,
        result->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceEnd), "sFun_clone", 20, 515);
        come_call_finalizer(buffer_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 20, 514);
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
        __dec_obj71=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sFun_clone", 28, 516, "char* "), "sFun_clone", 28, 518);
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 28, 517);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj72=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sFun_clone", 29, 519, "char* "), "sFun_clone", 29, 521);
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 29, 520);
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj73=result->mFunAttribute,
        result->mFunAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mFunAttribute, "sFun_clone", 30, 522, "char* "), "sFun_clone", 30, 524);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 30, 523);
    }
    if(self!=((void*)0)) {
        result->mGenericsFun=self->mGenericsFun;
    }
    if(self!=((void*)0)) {
        result->mDefineReturnVar=self->mDefineReturnVar;
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj74=result->mAsmFun,
        result->mAsmFun=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmFun, "sFun_clone", 33, 525, "char* "), "sFun_clone", 33, 527);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 33, 526);
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(result, "sFun_clone", 34, 528);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 529);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 530);
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
                __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 327);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 328);
        return __result_obj__0;
    }
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1513, 329, "struct list$1sVar$ph*"), "/usr/local/include/neo-c.h", 1513, 333)), "/usr/local/include/neo-c.h", 1513, 334);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "/usr/local/include/neo-c.h", 1518, 367));
        }
        else {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "/usr/local/include/neo-c.h", 1521, 368));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 369);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 370);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 371);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 330);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 331);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 332);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj48  ;
    struct list_item$1sVar$ph* litem_10;
    struct sVar*  __dec_obj49  ;
    struct list_item$1sVar$ph* litem_11;
    struct sVar*  __dec_obj50  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 335);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1534, 336, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1534, 337);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj48=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 339);
        come_call_finalizer(sVar_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 338);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1544, 340, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1544, 341);
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        __dec_obj49=litem_10->item,
        litem_10->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 343);
        come_call_finalizer(sVar_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 342);
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "/usr/local/include/neo-c.h", 1554, 344, "struct list_item$1sVar$ph*"))), "/usr/local/include/neo-c.h", 1554, 345);
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        __dec_obj50=litem_11->item,
        litem_11->item=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 347);
        come_call_finalizer(sVar_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 346);
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 348);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj51  ;
    char*  __dec_obj52  ;
    struct sType*  __dec_obj53  ;
    char*  __dec_obj54  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 349);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 350);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 351, "struct sVar* "), "sVar_clone", 5, 352);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj51=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 353, "char* "), "sVar_clone", 6, 355);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 354);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj52=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 356, "char* "), "sVar_clone", 7, 358);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 357);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj53=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 360);
        come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 359);
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
        __dec_obj54=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 361, "char* "), "sVar_clone", 12, 363);
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 362);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 364);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 365);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 366);
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 372);
    }
            neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj56;
    struct sVarTable*  __dec_obj63  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 375);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 376);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 377, "struct sBlock* "), "sBlock_clone", 5, 378);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj56=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 380);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 379);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 496);
        come_call_finalizer(sVarTable_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 495);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 497);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 498);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 499);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj62;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 381);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 382);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 383, "struct sVarTable* "), "sVarTable_clone", 5, 384);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj62=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 6, 491);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 6, 490);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 492);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 493);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 494);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj58;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 3073, 385);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3073, 390);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 3076, 391, "struct map$2char$phsVar$ph*"), "/usr/local/include/neo-c.h", 3076, 405)), "/usr/local/include/neo-c.h", 3076, 406);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj58=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3078, 407, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3078, 408)), "/usr/local/include/neo-c.h", 3078, 410);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3078, 409);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3084, 426),(_Bool)0), "/usr/local/include/neo-c.h", 3084, 427);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3087, 471, "char* "), "/usr/local/include/neo-c.h", 3087, 472),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3087, 473),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3090, 474, "char* "), "/usr/local/include/neo-c.h", 3090, 475),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3090, 476),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3093, 477),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3093, 478),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3096, 479),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3096, 480),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3100, 481);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3100, 482);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 3100, 483);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3100, 484);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3100, 485);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_12;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3049, 386);
            }
        }
    }
    come_free((char*)self->items);
    for(i_12=0    ;i_12<self->size;i_12++){
        if(self->item_existance[i_12]) {
            if(1) {
                (self->keys[i_12] = come_decrement_ref_count(self->keys[i_12], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3058, 387));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3064, 388);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3066, 389));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj57;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "/usr/local/include/neo-c.h", 2999, 392, "char** "))), "/usr/local/include/neo-c.h", 2999, 393);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "/usr/local/include/neo-c.h", 3000, 394, "struct sVar** "))), "/usr/local/include/neo-c.h", 3000, 395);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 3001, 396, "_Bool*"))), "/usr/local/include/neo-c.h", 3001, 397);
    for(i=0    ;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj57=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3011, 398, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3011, 399)), "/usr/local/include/neo-c.h", 3011, 401);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3011, 400);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3015, 402);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3015, 403);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3015, 404);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_13  ;
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
    memset(&result_13,0,sizeof(char* ));
        __result_obj__0 = result_13;
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
    char*  result_14  ;
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
    memset(&result_14,0,sizeof(char* ));
        __result_obj__0 = result_14;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_at"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 411);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 412);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 413);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 414);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 415);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 416);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 417);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 418);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 419);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 420);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 421);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 422);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 423);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 424);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 425);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    unsigned int hash;
    int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3430, 428));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3430, 429);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3445, 444));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3447, 449);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3454, 450);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3455, 451);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3477, 452);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3483, 453);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3503, 468));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3506, 469));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3506, 470);
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
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    unsigned int hash;
    int n;
    struct sVar*  default_value_15  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 430, "char** "))), "/usr/local/include/neo-c.h", 3272, 431);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 432, "struct sVar** "))), "/usr/local/include/neo-c.h", 3273, 433);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 434, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 435);
    len=0;
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 436),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 437);
        hash=string_get_hash_key(((char* )it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_15,0,sizeof(struct sVar* ));
                __right_value0 = (void*)0;
                items[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value_15, "/usr/local/include/neo-c.h", 3304, 438),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 439);
                break;
                come_call_finalizer(sVar_finalize, default_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3309, 440);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 441);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 442);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 443));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
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
    struct list_item$1char$ph* it_16;
    int i_17;
    struct list_item$1char$ph* prev_it_18;
    struct list_item$1char$ph* it_19;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_20;
    struct list_item$1char$ph* prev_it_21;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 446);
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
        it_16=self->head;
        i_17=0;
        while(it_16!=((void*)0)) {
            if(i_17==head) {
                self->tail=it_16->prev;
                self->tail->next=((void*)0);
            }
            if(i_17>=head) {
                prev_it_18=it_16;
                it_16=it_16->next;
                i_17++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 447);
                self->len--;
            }
            else {
                it_16=it_16->next;
                i_17++;
            }
        }
    }
    else {
        it_19=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_20=0;
        while(it_19!=((void*)0)) {
            if(i_20==head) {
                head_prev_it=it_19->prev;
            }
            if(i_20==tail) {
                tail_it=it_19;
            }
            if(i_20>=head&&i_20<tail) {
                prev_it_21=it_19;
                it_19=it_19->next;
                i_20++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 448);
                self->len--;
            }
            else {
                it_19=it_19->next;
                i_20++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 445);
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
    char*  result_22  ;
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
    memset(&result_22,0,sizeof(char* ));
        __result_obj__0 = result_22;
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
    char*  result_23  ;
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
    memset(&result_23,0,sizeof(char* ));
        __result_obj__0 = result_23;
    neo_current_frame = fr.prev;
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 454));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 455, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 456);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj59=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 458);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 457);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 459, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 460);
        litem_24->prev=self->head;
        litem_24->next=((void*)0);
        __dec_obj60=litem_24->item,
        litem_24->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 462);
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 461);
        self->tail=litem_24;
        self->head->next=litem_24;
    }
    else {
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 463, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 464);
        litem_25->prev=self->tail;
        litem_25->next=((void*)0);
        __dec_obj61=litem_25->item,
        litem_25->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 466);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 465);
        self->tail->next=litem_25;
        self->tail=litem_25;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 467));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_26;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3049, 486);
            }
        }
    }
    come_free((char*)self->items);
    for(i_26=0    ;i_26<self->size;i_26++){
        if(self->item_existance[i_26]) {
            if(1) {
                (self->keys[i_26] = come_decrement_ref_count(self->keys[i_26], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3058, 487));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3064, 488);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3066, 489));
            neo_current_frame = fr.prev;
}

struct sBlock*  parse_block(struct sInfo*  info  , _Bool return_self_at_last, _Bool in_function)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sBlock* result;
    int sline_top;
    int block_level;
    char* p;
    int sline;
    char*  sname  ;
    struct sNode* node;
    struct sNode* nested_fun;
    char* head;
    int head_sline;
    char*  head_sname  ;
    char* p0;
    int sline0;
    char*  word  ;
    _Bool is_type;
    _Bool no_output_come_code;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var1
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct tuple2$2char$phchar$ph* multiple_assign_var2
;    char*  asm_name  =0;
    char*  fun_attr  =0;
    char*  block  ;
    char* tail;
    struct buffer*  buf  ;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sRawCodeNode* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* __dec_obj78;
    struct sNode* __dec_obj79;
    char*  __dec_obj80  ;
    struct sNode* __dec_obj81;
    char*  __dec_obj82  ;
    struct sBlock*  __result_obj__0  ;
    _Bool omit_semicolon;
    struct sNode* node2;
    struct sNode* node_29;
    struct sNode* _inf_value3;
    struct sSemicolonNode* _inf_obj_value3;
    struct sNode* __dec_obj87;
    struct sNode* __dec_obj88;
    _Bool omit_semicolon_30;
    char* p_31;
    char* head_32;
    struct buffer*  source2  ;
    struct buffer*  __dec_obj89  ;
    struct span$1char$p* __dec_obj90;
    struct sNode* node_33;
    struct buffer*  __dec_obj91  ;
    struct span$1char$p* __dec_obj92;
    memset(&node_29, 0, sizeof(node_29));
    result=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "07function.nc", 121, 539, "struct sBlock* "), "07function.nc", 121, 540)), "07function.nc", 121, 541);
    sline_top=info->sline_top;
    info->sline_top=info->sline;
    block_level=info->block_level;
    info->block_level++;
    if(*info->p->p==123) {
        info->p->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            skip_spaces_and_lf(info);
            if(*info->p->p==125) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p->p==59) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            skip_spaces_and_lf(info);
            p=info->p->p;
            sline=info->sline;
            __right_value0 = (void*)0;
            sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",148), "07function.nc", 148, 542);
            if(*info->p->p==123) {
                info->sline_top=sline;
            }
            node=((void*)0);
            if(in_function) {
                nested_fun=((void*)0);
                head=info->p->p;
                head_sline=info->sline;
                __right_value0 = (void*)0;
                head_sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",160), "07function.nc", 160, 543);
                if(xisalpha(*info->p->p)||*info->p->p==95) {
                    p0=info->p->p;
                    sline0=info->sline;
                    __right_value0 = (void*)0;
                    word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 165, 544);
                    is_type=is_type_name(word,info);
                    info->p->p=p0;
                    info->sline=sline0;
                    if(is_type) {
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_come_code=(_Bool)1;
                        __right_value0 = (void*)0;
                        multiple_assign_var1=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v1, "07function.nc", 174, 545);
                        name=(char* )come_increment_ref_count(multiple_assign_var1->v2, "07function.nc", 174, 546);
                        err=multiple_assign_var1->v3;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 174, 549);
                        skip_spaces_and_lf(info);
                        if(err&&*info->p->p==40) {
                            skip_paren(info);
                            skip_spaces_and_lf(info);
                            __right_value0 = (void*)0;
                            multiple_assign_var2=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
                            asm_name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "07function.nc", 180, 550);
                            fun_attr=(char* )come_increment_ref_count(multiple_assign_var2->v2, "07function.nc", 180, 551);
                            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 180, 554);
                            skip_spaces_and_lf(info);
                            if(*info->p->p==123) {
                                __right_value0 = (void*)0;
                                block=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "07function.nc", 184, 555);
                                tail=info->p->p;
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "07function.nc", 187, 556, "struct buffer* "), "07function.nc", 187, 557)), "07function.nc", 187, 558);
                                buffer_append(buf,head,tail-head);
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 190, 562, "struct sNode");
                                _inf_obj_value2=(struct sRawCodeNode*)come_increment_ref_count(((struct sRawCodeNode*)(__right_value2=sRawCodeNode_initialize((struct sRawCodeNode* )come_increment_ref_count((struct sRawCodeNode *)come_calloc(1, sizeof(struct sRawCodeNode )*(1), "07function.nc", 190, 559, "struct sRawCodeNode* "), "07function.nc", 190, 560),(char* )come_increment_ref_count(buffer_to_string(buf), "07function.nc", 190, 561),info))), "07function.nc", 190, 563);
                                _inf_value2->_protocol_obj=_inf_obj_value2;
                                _inf_value2->finalize=(void*)sRawCodeNode_finalize;
                                _inf_value2->clone=(void*)sRawCodeNode_clone;
                                _inf_value2->compile=(void*)sRawCodeNode_compile;
                                _inf_value2->sline=(void*)sNodeBase_sline;
                                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                                _inf_value2->sname=(void*)sNodeBase_sname;
                                _inf_value2->terminated=(void*)sRawCodeNode_terminated;
                                _inf_value2->kind=(void*)sRawCodeNode_kind;
                                _inf_value2->left_value=(void*)sNodeBase_left_value;
                                __dec_obj78=nested_fun,
                                nested_fun=(struct sNode*)come_increment_ref_count(_inf_value2, "07function.nc", 190, 574);
                                (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0, "07function.nc", 190, 573) :0);
                                come_call_finalizer(sRawCodeNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 190, 575);
                                (block = come_decrement_ref_count(block, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 192, 576));
                                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 192, 577);
                            }
                            (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 194, 578));
                            (fun_attr = come_decrement_ref_count(fun_attr, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 194, 579));
                        }
                        info->no_output_come_code=no_output_come_code;
                        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 196, 580);
                        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 196, 581));
                    }
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 198, 582));
                }
                if(nested_fun) {
                    __dec_obj79=node,
                    node=(struct sNode*)come_increment_ref_count(nested_fun, "07function.nc", 199, 584);
                    (__dec_obj79 ? __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0, (void*)0, "07function.nc", 199, 583) :0);
                }
                else {
                    info->p->p=head;
                    info->sline=head_sline;
                    __right_value0 = (void*)0;
                    __dec_obj80=info->sname,
                    info->sname=(char* )come_increment_ref_count(__builtin_string(head_sname,"07function.nc",204), "07function.nc", 204, 586);
                    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 204, 585);
                }
                ((nested_fun) ? nested_fun = come_decrement_ref_count(nested_fun, ((struct sNode*)nested_fun)->finalize, ((struct sNode*)nested_fun)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 208, 587):(void*)0);
                (head_sname = come_decrement_ref_count(head_sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 208, 588));
            }
            if(node==((void*)0)) {
                __right_value0 = (void*)0;
                __dec_obj81=node,
                node=(struct sNode*)come_increment_ref_count(statment(info), "07function.nc", 209, 590);
                (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0, "07function.nc", 209, 589) :0);
            }
            __right_value0 = (void*)0;
            __dec_obj82=info->sname,
            info->sname=(char* )come_increment_ref_count(node->sname(node->_protocol_obj), "07function.nc", 212, 592);
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 212, 591);
            info->sline=node->sline(node->_protocol_obj);
            if(node==((void*)0)) {
                err_msg(info,"Invalid expression");
                                __result_obj__0 = (struct sBlock* )come_increment_ref_count(((void*)0), "07function.nc", 217, 593);
                (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 217, 594));
                ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 217, 595):(void*)0);
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 217, 596);
                neo_current_frame = fr.prev;
                come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 217, 597);
                return __result_obj__0;
            }
            skip_spaces_and_lf(info);
            if(node->terminated(node->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon=(_Bool)1;
            if(node->terminated(node->_protocol_obj)) {
                omit_semicolon=(_Bool)0;
            }
            while(*info->p->p==59) {
                info->p->p++;
                skip_spaces_and_lf(info);
                omit_semicolon=(_Bool)0;
            }
            skip_spaces_and_lf(info);
            if(*info->p->p==125) {
                result->mOmitSemicolon=omit_semicolon;
                if(omit_semicolon&&in_function) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    __right_value0 = (void*)0;
                    node2=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(node, "07function.nc", 245, 598),info), "07function.nc", 245, 599);
                    list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node2, "07function.nc", 247, 614));
                    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 249, 615):(void*)0);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 249, 616));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 249, 617):(void*)0);
                    break;
                    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 257, 618):(void*)0);
                }
                else {
                    list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node, "07function.nc", 252, 619));
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 255, 620));
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 255, 621):(void*)0);
                    break;
                }
            }
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node, "07function.nc", 259, 622));
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 261, 623));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 261, 624):(void*)0);
        }
    }
    else {
        info->sline_block=info->sline;
        skip_spaces_and_lf(info);
        if(*info->p->p==59) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 273, 627, "struct sNode");
            _inf_obj_value3=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value1=sSemicolonNode_initialize((struct sSemicolonNode* )come_increment_ref_count((struct sSemicolonNode *)come_calloc(1, sizeof(struct sSemicolonNode )*(1), "07function.nc", 273, 625, "struct sSemicolonNode* "), "07function.nc", 273, 626),info))), "07function.nc", 273, 628);
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sSemicolonNode_finalize;
            _inf_value3->clone=(void*)sSemicolonNode_clone;
            _inf_value3->compile=(void*)sSemicolonNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sSemicolonNode_kind;
            _inf_value3->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj87=node_29,
            node_29=(struct sNode*)come_increment_ref_count(_inf_value3, "07function.nc", 273, 636);
            (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0, (void*)0, "07function.nc", 273, 635) :0);
            come_call_finalizer(sSemicolonNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 273, 637);
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_29, "07function.nc", 275, 638));
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj88=node_29,
            node_29=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "07function.nc", 278, 640);
            (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0, (void*)0, "07function.nc", 278, 639) :0);
            skip_spaces_and_lf(info);
            if(node_29==((void*)0)) {
                err_msg(info,"Invalid expression");
                                __result_obj__0 = (struct sBlock* )come_increment_ref_count(((void*)0), "07function.nc", 283, 641);
                ((node_29) ? node_29 = come_decrement_ref_count(node_29, ((struct sNode*)node_29)->finalize, ((struct sNode*)node_29)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 283, 642):(void*)0);
                come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 283, 643);
                neo_current_frame = fr.prev;
                come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 283, 644);
                return __result_obj__0;
            }
            skip_spaces_and_lf(info);
            if(node_29->terminated(node_29->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_30=(_Bool)1;
            if(node_29->terminated(node_29->_protocol_obj)) {
                omit_semicolon_30=(_Bool)0;
            }
            while(*info->p->p==59) {
                info->p->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_30=(_Bool)0;
            }
            skip_spaces_and_lf(info);
            result->mOmitSemicolon=omit_semicolon_30;
            list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_29, "07function.nc", 305, 645));
        }
        ((node_29) ? node_29 = come_decrement_ref_count(node_29, ((struct sNode*)node_29)->finalize, ((struct sNode*)node_29)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 309, 646):(void*)0);
    }
    if(return_self_at_last) {
        p_31=info->p->p;
        head_32=info->head;
        source2=(struct buffer* )come_increment_ref_count(info->source, "07function.nc", 312, 647);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj89=info->source,
        info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(((char* )(__right_value0=__builtin_string("return self;","07function.nc",314)))), "07function.nc", 314, 649);
        come_call_finalizer(buffer_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 314, 648);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 314, 650));
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj90=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "07function.nc", 316, 651, "struct span$1buffer$p*"), "07function.nc", 316, 655),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "07function.nc", 316, 657);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 316, 656);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->head=info->source->buf;
        __right_value0 = (void*)0;
        node_33=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "07function.nc", 323, 658);
        if(node_33==((void*)0)) {
            err_msg(info,"Invalid expression");
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(((void*)0), "07function.nc", 327, 659);
            come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 327, 660);
            ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 327, 661):(void*)0);
            come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 327, 662);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 327, 663);
            return __result_obj__0;
        }
        list$1sNode$ph_push_back(result->mNodes,(struct sNode*)come_increment_ref_count(node_33, "07function.nc", 330, 664));
        __dec_obj91=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source2, "07function.nc", 332, 666);
        come_call_finalizer(buffer_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 332, 665);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj92=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "07function.nc", 334, 667, "struct span$1buffer$p*"), "07function.nc", 334, 668),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "07function.nc", 334, 670);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 334, 669);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->p->p=p_31;
        info->head=head_32;
        come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 343, 671);
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 343, 672):(void*)0);
    }
    info->block_level=block_level;
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "07function.nc", 345, 673);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 345, 674);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 345, 675);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 547);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 548));
    }
                            neo_current_frame = fr.prev;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 2, 552));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 3, 553));
    }
                                neo_current_frame = fr.prev;
}

static struct sRawCodeNode* sRawCodeNode_clone(struct sRawCodeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRawCodeNode_clone"; neo_current_frame = &fr;
    struct sRawCodeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRawCodeNode*  result  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRawCodeNode* )come_increment_ref_count((struct sRawCodeNode *)come_calloc(1, sizeof(struct sRawCodeNode )*(1), "sRawCodeNode_clone", 5, 564, "struct sRawCodeNode* "), "sRawCodeNode_clone", 5, 565);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj76=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRawCodeNode_clone", 7, 566, "char* "), "sRawCodeNode_clone", 7, 568);
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "sRawCodeNode_clone", 7, 567);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mCode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj77=result->mCode,
        result->mCode=(char* )come_increment_ref_count((char* )come_memdup(self->mCode, "sRawCodeNode_clone", 9, 569, "char* "), "sRawCodeNode_clone", 9, 571);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "sRawCodeNode_clone", 9, 570);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRawCodeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRawCodeNode_clone}", 10, 572);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj83;
    struct list_item$1sNode$ph* litem_27;
    struct sNode* __dec_obj84;
    struct list_item$1sNode$ph* litem_28;
    struct sNode* __dec_obj85;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1615, 600):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1619, 601, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1619, 602);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj83=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 604);
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 603) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1629, 605, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1629, 606);
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj84=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 608);
        (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 607) :0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1639, 609, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1639, 610);
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj85=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 612);
        (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 611) :0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1651, 613):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSemicolonNode_clone"; neo_current_frame = &fr;
    struct sSemicolonNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSemicolonNode*  result  ;
    char*  __dec_obj86  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSemicolonNode* )come_increment_ref_count((struct sSemicolonNode *)come_calloc(1, sizeof(struct sSemicolonNode )*(1), "sSemicolonNode_clone", 5, 629, "struct sSemicolonNode* "), "sSemicolonNode_clone", 5, 630);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj86=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSemicolonNode_clone", 7, 631, "char* "), "sSemicolonNode_clone", 7, 633);
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "sSemicolonNode_clone", 7, 632);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sSemicolonNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSemicolonNode_clone}", 9, 634);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  len  , _Bool local, _Bool heap, _Bool global, void* stacktop)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p_initialize"; neo_current_frame = &fr;
    struct span$1buffer$p* __result_obj__0;
    if(!1) {
        puts("invalid span");
        stackframe2(self);
        exit(2);
    }
    self->memory=(char*)head;
    self->p=(struct buffer* )head;
    self->len=len;
    self->local=local;
    self->heap=heap;
    self->global=global;
    self->stacktop=stacktop;
        __result_obj__0 = (struct span$1buffer$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1026, 652);
    come_call_finalizer(span$1buffer$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1026, 653);
    neo_current_frame = fr.prev;
    come_call_finalizer(span$1buffer$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1026, 654);
    return __result_obj__0;
}

static void span$1buffer$p$p_finalize(struct span$1buffer$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1buffer$p$p_finalize"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void span$1char$p$p_finalize(struct span$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "span$1char$p$p_finalize"; neo_current_frame = &fr;
                neo_current_frame = fr.prev;
}

int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value, _Bool iter_, _Bool loop_result_type)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "transpile_block"; neo_current_frame = &fr;
    _Bool inhibits_output_code;
    _Bool omit_semicolon;
    struct sVarTable*  old_table  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sVarTable*  __dec_obj93  ;
    struct sVarTable*  current_loop_vtable  ;
    int i;
    struct list$1char$ph* _o2_saved_3;
    char*  name  ;
    struct sType*  type  ;
    int block_level;
    int i_36;
    struct list$1sNode$ph* _o2_saved_4;
    struct sNode* node;
    int num_conditional;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct list$1sRightValueObject$ph* __dec_obj94;
    char*  __dec_obj95  ;
    char*  __dec_obj96  ;
    int stack_num_before;
    int sline;
    char*  sname  ;
    char*  __dec_obj97  ;
    _Bool Value;
    int __result_obj__0;
    char*  __dec_obj98  ;
    struct CVALUE*  come_value  ;
    struct sType*  right_type__  ;
    struct sType*  right_type_  ;
    struct sType*  right_type2  ;
    char*  var_name  ;
    struct sType*  result_type  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    struct sType*  __dec_obj99  ;
    struct sType*  result_type_39  ;
    struct sType*  left_type  ;
    struct CVALUE*  come_value_40  ;
    struct sType*  right_type___41  ;
    struct sType*  right_type__42  ;
    struct sType*  right_type2_43  ;
    char*  var_name_44  ;
    struct sType*  result_type_45  ;
    _Bool _conditional_value_X1;
    struct sType*  __dec_obj100  ;
    struct sType*  result_type_46  ;
    struct sType*  left_type_47  ;
    struct list$1sRightValueObject$ph* __dec_obj101;
    struct list$1sVar$ph* _o2_saved_5;
    struct sVar*  it  ;
    struct list$1sVar$ph* __dec_obj102;
    memset(&i, 0, sizeof(i));
    memset(&i_36, 0, sizeof(i_36));
    inhibits_output_code=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    omit_semicolon=block->mOmitSemicolon;
    old_table=info->lv_table;
    if(!no_var_table) {
        __dec_obj93=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "07function.nc", 357, 676, "struct sVarTable* "), "07function.nc", 357, 677),(_Bool)0,old_table), "07function.nc", 357, 679);
        come_call_finalizer(sVarTable_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 357, 678);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(param_types&&param_names) {
        for(_o2_saved_3=param_names,name=list$1char$ph_begin(_o2_saved_3)        ;!list$1char$ph_end(_o2_saved_3);name=list$1char$ph_next(_o2_saved_3)){
            __right_value0 = (void*)0;
            type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i), "07function.nc", 369, 698);
            type->mAllocaValue=(_Bool)0;
            __right_value0 = (void*)0;
            add_variable_to_table(name,((struct sType* )(__right_value0=sType_clone(type))),info,(_Bool)1,(_Bool)0,(_Bool)0);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 371, 699);
            i++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 374, 700);
        }
    }
    block_level=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(_o2_saved_4=(struct list$1sNode$ph*)come_increment_ref_count(block->mNodes, "07function.nc", 385, 701),node=list$1sNode$ph_begin(_o2_saved_4)        ;!list$1sNode$ph_end(_o2_saved_4);node=list$1sNode$ph_next(_o2_saved_4)){
            num_conditional=info->num_conditional;
            if(info->block_level==1) {
                info->num_conditional=0;
            }
            right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects, "07function.nc", 389, 702);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj94=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "07function.nc", 390, 703, "struct list$1sRightValueObject$ph*"), "07function.nc", 390, 714)), "07function.nc", 390, 717);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 390, 716);
            __dec_obj95=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 392, 718);
            __dec_obj96=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 393, 719);
            stack_num_before=list$1CVALUE$ph_length(info->stack);
            info->writing_source_file_position=(_Bool)1;
            sline=info->sline;
            __right_value0 = (void*)0;
            sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",399), "07function.nc", 399, 720);
            info->last_statment_is_return=(_Bool)0;
            info->sline=node->sline(node->_protocol_obj);
            __right_value0 = (void*)0;
            __dec_obj97=info->sname,
            info->sname=(char* )come_increment_ref_count(node->sname(node->_protocol_obj), "07function.nc", 404, 722);
            __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 404, 721);
            Value=node_compile(node,info);
            if(!Value) {
                if(gComeDebug) {
                    __right_value0 = (void*)0;
                    puts(((char* )(__right_value0=node->kind(node->_protocol_obj))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 408, 723));
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                }
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 411, 724);
                (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 411, 725));
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 411, 726);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            info->sline=sline;
            __right_value0 = (void*)0;
            __dec_obj98=info->sname,
            info->sname=(char* )come_increment_ref_count(__builtin_string(sname,"07function.nc",415), "07function.nc", 415, 728);
            __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 415, 727);
            if(omit_semicolon&&if_result_value&&i_36==list$1sNode$ph_length(block->mNodes)-1) {
                __right_value0 = (void*)0;
                come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "07function.nc", 421, 729);
                __right_value0 = (void*)0;
                right_type__=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "07function.nc", 422, 730);
                __right_value0 = (void*)0;
                right_type_=(struct sType* )come_increment_ref_count(solve_generics(right_type__,info->generics_type,info), "07function.nc", 423, 731);
                __right_value0 = (void*)0;
                right_type2=(struct sType* )come_increment_ref_count(solve_method_generics(right_type_,info), "07function.nc", 424, 732);
                if(!info->if_result_value_name_defined) {
                    info->if_result_value_name_defined=(_Bool)1;
                    var_name=(char* )come_increment_ref_count(info->if_result_value_name, "07function.nc", 428, 733);
                    __right_value0 = (void*)0;
                    result_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "07function.nc", 429, 734);
                    __right_value0 = (void*)0;
                    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(result_type,var_name,info,(_Bool)0,(_Bool)0))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 430, 735));
                    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(string_operator_not_equals(info->come_fun->mName,"memset")&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 431, 766));
                    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 431, 767);
_conditional_value_X0;})) {
                        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name,var_name);
                    }
                    add_variable_to_table(var_name,result_type,info,(_Bool)0,(_Bool)0,(_Bool)1);
                    __right_value0 = (void*)0;
                    __dec_obj99=info->if_result_type,
                    info->if_result_type=(struct sType* )come_increment_ref_count(sType_clone(result_type), "07function.nc", 436, 769);
                    come_call_finalizer(sType_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 436, 768);
                    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 442, 770));
                    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 442, 771);
                }
                else {
                    __right_value0 = (void*)0;
                    result_type_39=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "07function.nc", 439, 772);
                    check_assign_type("invalid if result type",info->if_result_type,result_type_39,come_value,info);
                    come_call_finalizer(sType_finalize, result_type_39, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 442, 773);
                }
                if(come_value->type->mHeap) {
                    __right_value0 = (void*)0;
                    left_type=(struct sType* )come_increment_ref_count(sType_clone(right_type2), "07function.nc", 444, 774);
                    std_move(left_type,right_type2,come_value,info);
                    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 446, 775);
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                add_come_code(info,((char*)(__right_value1=xsprintf("\%s = %%s;\n",((char* )(__right_value0=string_to_string(info->if_result_value_name)))))),come_value->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 446, 776));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 446, 777));
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 778);
                come_call_finalizer(sType_finalize, right_type__, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 779);
                come_call_finalizer(sType_finalize, right_type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 780);
                come_call_finalizer(sType_finalize, right_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 781);
            }
            else if(iter_&&i_36==list$1sNode$ph_length(block->mNodes)-1) {
            }
            else if(omit_semicolon&&loop_result_type&&i_36==list$1sNode$ph_length(block->mNodes)-1) {
                __right_value0 = (void*)0;
                come_value_40=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "07function.nc", 453, 782);
                __right_value0 = (void*)0;
                right_type___41=(struct sType* )come_increment_ref_count(sType_clone(come_value_40->type), "07function.nc", 454, 783);
                __right_value0 = (void*)0;
                right_type__42=(struct sType* )come_increment_ref_count(solve_generics(right_type___41,info->generics_type,info), "07function.nc", 455, 784);
                __right_value0 = (void*)0;
                right_type2_43=(struct sType* )come_increment_ref_count(solve_method_generics(right_type__42,info), "07function.nc", 456, 785);
                if(!info->loop_result_value_name_defined) {
                    info->loop_result_value_name_defined=(_Bool)1;
                    var_name_44=(char* )come_increment_ref_count(info->loop_result_value_name, "07function.nc", 460, 786);
                    __right_value0 = (void*)0;
                    result_type_45=(struct sType* )come_increment_ref_count(sType_clone(come_value_40->type), "07function.nc", 461, 787);
                    __right_value0 = (void*)0;
                    add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(result_type_45,var_name_44,info,(_Bool)0,(_Bool)0))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 462, 788));
                    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X1=(string_operator_not_equals(info->come_fun->mName,"memset")&&((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("memset"))))))));                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 463, 789));
                    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 463, 790);
_conditional_value_X1;})) {
                        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_44,var_name_44);
                    }
                    add_variable_to_table(var_name_44,result_type_45,info,(_Bool)0,(_Bool)0,(_Bool)1);
                    __right_value0 = (void*)0;
                    __dec_obj100=info->loop_result_type,
                    info->loop_result_type=(struct sType* )come_increment_ref_count(sType_clone(result_type_45), "07function.nc", 468, 792);
                    come_call_finalizer(sType_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 468, 791);
                    (var_name_44 = come_decrement_ref_count(var_name_44, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 474, 793));
                    come_call_finalizer(sType_finalize, result_type_45, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 474, 794);
                }
                else {
                    __right_value0 = (void*)0;
                    result_type_46=(struct sType* )come_increment_ref_count(sType_clone(come_value_40->type), "07function.nc", 471, 795);
                    check_assign_type("invalid loop result type",info->loop_result_type,result_type_46,come_value_40,info);
                    come_call_finalizer(sType_finalize, result_type_46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 474, 796);
                }
                if(come_value_40->type->mHeap) {
                    __right_value0 = (void*)0;
                    left_type_47=(struct sType* )come_increment_ref_count(sType_clone(right_type2_43), "07function.nc", 476, 797);
                    std_move(left_type_47,right_type2_43,come_value_40,info);
                    come_call_finalizer(sType_finalize, left_type_47, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 478, 798);
                }
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                add_come_code(info,((char*)(__right_value1=xsprintf("\%s = %%s;\n",((char* )(__right_value0=string_to_string(info->loop_result_value_name)))))),come_value_40->c_value);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 478, 799));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 478, 800));
                come_call_finalizer(CVALUE_finalize, come_value_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 801);
                come_call_finalizer(sType_finalize, right_type___41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 802);
                come_call_finalizer(sType_finalize, right_type__42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 803);
                come_call_finalizer(sType_finalize, right_type2_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 486, 804);
            }
            else {
                add_last_code_to_source(info);
                arrange_stack(info,stack_num_before);
            }
            free_right_value_objects(info);
            if(info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj101=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "07function.nc", 489, 807);
            come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 489, 806);
            i_36++;
            if(info->block_level==1) {
                info->num_conditional=num_conditional;
            }
            come_call_finalizer(list$1sRightValueObject$ph$p_finalize, right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 493, 808);
            (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 493, 809));
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 495, 810);
    }
    if(!no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info,(_Bool)0);
        if(info->match_it_var&&block_level==0) {
            for(_o2_saved_5=(struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var, "07function.nc", 499, 811),it=list$1sVar$ph_begin(_o2_saved_5)            ;!list$1sVar$ph_end(_o2_saved_5);it=list$1sVar$ph_next(_o2_saved_5)){
                __right_value0 = (void*)0;
                free_object(((struct sType* )(__right_value0=sType_clone(it->mType))),it->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 500, 812);
            }
            __dec_obj102=info->match_it_var,
            info->match_it_var=((void*)0);
            come_call_finalizer(list$1sVar$ph_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 502, 813);
            come_call_finalizer(list$1sVar$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 504, 814);
        }
    }
    info->lv_table=old_table;
    info->block_level=block_level;
    info->inhibits_output_code2=info->inhibits_output_code;
    info->current_loop_vtable=current_loop_vtable;
    info->inhibits_output_code=inhibits_output_code;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_34  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 680);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 681);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 682);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 683);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 684);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 685);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_34,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_34, "/usr/local/include/neo-c.h", 2169, 686);
    come_call_finalizer(sType_finalize, default_value_34, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 687);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 688);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_35  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 689);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 690);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 691);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 692);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 693);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 694);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_35,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_35, "/usr/local/include/neo-c.h", 2169, 695);
    come_call_finalizer(sType_finalize, default_value_35, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 696);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 697);
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

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_37;
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
    memset(&result_37,0,sizeof(struct sNode*));
        __result_obj__0 = result_37;
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
    struct sNode* result_38;
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
    memset(&result_38,0,sizeof(struct sNode*));
        __result_obj__0 = result_38;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_initialize"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 704);
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 712);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sRightValueObject$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 713);
    return __result_obj__0;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 711);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sRightValueObject$ph$p_finalize}", 2, 710);
    }
            neo_current_frame = fr.prev;
}

static void sRightValueObject_finalize(struct sRightValueObject*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRightValueObject_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 2, 705);
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 3, 706));
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 4, 707));
    }
    if(self!=((void*)0)&&self->mObjType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 5, 708);
    }
    if(self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 6, 709));
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
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 715);
    }
                neo_current_frame = fr.prev;
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

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 736);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 737);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 738);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 739);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 740);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 741);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 742);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 743);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 744);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 745);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 746);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 747);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 748);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 749);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 750);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 751);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 752);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 753);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 754);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 755);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 756);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 757);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 758);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 759);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 760);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 761);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 762);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 763);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 764);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 765);
    return __result_obj__0;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_reset"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* __result_obj__0;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 805);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  list$1sVar$ph_begin(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_begin"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_48  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_48,0,sizeof(struct sVar* ));
        __result_obj__0 = result_48;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                neo_current_frame = fr.prev;
}

static struct sVar*  list$1sVar$ph_next(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_next"; neo_current_frame = &fr;
    struct sVar*  result  ;
    struct sVar*  __result_obj__0  ;
    struct sVar*  result_49  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sVar* ));
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
    memset(&result_49,0,sizeof(struct sVar* ));
        __result_obj__0 = result_49;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void arrange_stack(struct sInfo*  info  , int top)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "arrange_stack"; neo_current_frame = &fr;
    if(list$1CVALUE$ph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(list$1CVALUE$ph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
    neo_current_frame = fr.prev;
}

char*  skip_block(struct sInfo*  info  , _Bool return_self_at_last)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "skip_block"; neo_current_frame = &fr;
    char* head;
    _Bool dquort;
    _Bool squort;
    int sline;
    int nest;
    char* tail;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __result_obj__0  ;
    head=info->p->p;
    if(*info->p->p==123) {
        info->p->p++;
        dquort=(_Bool)0;
        squort=(_Bool)0;
        sline=0;
        nest=0;
        while(1) {
            parse_sharp_v5(info);
            if(dquort) {
                if(*info->p->p==92) {
                    info->p->p++;
                    if(*info->p->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(*info->p->p==10) {
                        info->p->p++;
                    }
                    info->p->p++;
                }
                else if(*info->p->p==34) {
                    info->p->p++;
                    dquort=!dquort;
                }
                else if(*info->p->p==10) {
                    info->p->p++;
                    info->sline++;
                    if(*info->p->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p->p++;
                    if(*info->p->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(squort) {
                if(*info->p->p==92) {
                    info->p->p++;
                    if(*info->p->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                    if(*info->p->p==10) {
                        info->sline++;
                    }
                    info->p->p++;
                }
                else if(*info->p->p==39) {
                    info->p->p++;
                    squort=!squort;
                }
                else if(*info->p->p==10) {
                    info->p->p++;
                    info->sline++;
                    if(*info->p->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
                else {
                    info->p->p++;
                    if(*info->p->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline);
                        exit(2);
                    }
                }
            }
            else if(*info->p->p==39) {
                sline=info->sline;
                info->p->p++;
                squort=!squort;
            }
            else if(*info->p->p==34) {
                sline=info->sline;
                info->p->p++;
                dquort=!dquort;
            }
            else if(*info->p->p==35) {
                skip_spaces_and_lf(info);
            }
            else if(*info->p->p==47&&*(info->p->p+1)==42) {
                skip_spaces_and_lf(info);
            }
            else if(*info->p->p==47&&*(info->p->p+1)==47) {
                skip_spaces_and_lf(info);
            }
            else if(*info->p->p==92) {
                info->p->p++;
                if(*info->p->p) {
                    info->p->p++;
                }
            }
            else if(*info->p->p==123) {
                info->p->p++;
                nest++;
            }
            else if(*info->p->p==125) {
                info->p->p++;
                if(nest==0) {
                    break;
                }
                nest--;
            }
            else if(*info->p->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(*info->p->p==10) {
                info->p->p++;
                info->sline++;
            }
            else {
                info->p->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p->p);
        exit(1);
    }
    tail=info->p->p;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "07function.nc", 666, 815, "struct buffer* "), "07function.nc", 666, 816)), "07function.nc", 666, 817);
    buffer_append(buf,head,tail-head-1);
    if(return_self_at_last) {
        buffer_append_str(buf,"return self; }");
    }
    else {
        buffer_append_str(buf,"}");
    }
    skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "07function.nc", 679, 818);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 679, 819);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 679, 820));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "07function.nc", 679, 821));
    return __result_obj__0;
}

void parse_function_attribute_skip_paren(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function_attribute_skip_paren"; neo_current_frame = &fr;
    int nest;
    skip_spaces_and_lf(info);
    if(*info->p->p==40) {
        nest=0;
        while(1) {
            if(*info->p->p==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
                nest++;
            }
            else if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                nest--;
                if(nest==0) {
                    break;
                }
            }
            else if(*info->p->p==0) {
                break;
            }
            else {
                info->p->p++;
            }
        }
    }
    skip_spaces_and_lf(info);
    neo_current_frame = fr.prev;
}

_Bool parse_function_attribute_keyword(struct buffer*  result  , const char* keyword, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function_attribute_keyword"; neo_current_frame = &fr;
    char* head;
    char* tail;
    if(parsecmp(keyword,info)) {
        head=info->p->p;
        info->p->p+=strlen(keyword);
        parse_function_attribute_skip_paren(info);
        tail=info->p->p;
        buffer_append(result,head,tail-head);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool parse_common_function_attribute_keyword(struct buffer*  result  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_common_function_attribute_keyword"; neo_current_frame = &fr;
    if(parse_function_attribute_keyword(result,"__aligned_largest",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__aligned_u64",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__aligned",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__section",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__visibility",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__alias",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__format_arg",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__format",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__printf",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__scanf",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__assume_aligned",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__cleanup",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__optimize",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__target",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__error",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__warning",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__no_sanitize_address",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__no_sanitize_thread",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__no_sanitize_coverage",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__no_sanitize",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__constructor",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__destructor",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__packed",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__used",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__unused",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__maybe_unused",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__always_unused",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__deprecated",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__cold",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__hot",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__weak_ref",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__weak",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__noinline",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__always_inline",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__flatten",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__leaf",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__naked",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__noclone",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__no_profile",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__no_instrument_function",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__warn_unused_result",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__must_check",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__returns_nonnull",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__malloc",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__init",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__initdata",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__initconst",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__init_rodata",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__exit",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__exitdata",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__exitconst",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__ref",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__meminit",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__meminitdata",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__meminitconst",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__ro_after_init",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__read_mostly",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__latent_entropy",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_function_attribute_keyword(result,"__percpu",info)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function_attribute"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  asm_fun_name  ;
    struct buffer*  result  ;
    char* head;
    char* tail;
    char*  attr  ;
    char* head_50;
    char* tail_51;
    char* head_52;
    char* tail_53;
    char* head_54;
    char* tail_55;
    char* head_56;
    char* tail_57;
    char* head_58;
    char* tail_59;
    char* head_60;
    char* tail_61;
    char* head_62;
    char* tail_63;
    char* head_64;
    char* tail_65;
    char* head_66;
    char* tail_67;
    char* head_68;
    char* tail_69;
    char* head_70;
    char* tail_71;
    char* head_72;
    char* tail_73;
    char* head_74;
    char* tail_75;
    char* head_76;
    char* tail_77;
    char* head_78;
    char* tail_79;
    char* head_80;
    char* tail_81;
    char* head_82;
    char* tail_83;
    char* head0;
    int sline0;
    char* head_84;
    int sline;
    int nest;
    char* tail_85;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    asm_fun_name=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "07function.nc", 1059, 822, "struct buffer* "), "07function.nc", 1059, 823)), "07function.nc", 1059, 824);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "07function.nc", 1060, 825, "struct buffer* "), "07function.nc", 1060, 826)), "07function.nc", 1060, 827);
    while((_Bool)1) {
        if(parsecmp("__attribute__",info)) {
            head=info->p->p;
            info->p->p+=strlen("__attribute__");
            parse_function_attribute_skip_paren(info);
            tail=info->p->p;
            buffer_append(result,head,tail-head);
        }
        else if(parsecmp("__declspec",info)) {
            __right_value0 = (void*)0;
            attr=(char* )come_increment_ref_count(parse_declspec_attribute(info), "07function.nc", 1074, 828);
            if(string_operator_not_equals(attr,"")) {
                if(buffer_length(result)>0) {
                    buffer_append_str(result," ");
                }
                buffer_append_str(result,attr);
            }
            (attr = come_decrement_ref_count(attr, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1317, 829));
        }
        else if(parsecmp("_Noreturn",info)) {
            head_50=info->p->p;
            info->p->p+=strlen("_Noreturn");
            parse_function_attribute_skip_paren(info);
            tail_51=info->p->p;
            buffer_append(result,head_50,tail_51-head_50);
        }
        else if(parsecmp("_Nonnull",info)) {
            head_52=info->p->p;
            info->p->p+=strlen("_Nonnull");
            parse_function_attribute_skip_paren(info);
            tail_53=info->p->p;
            buffer_append(result,head_52,tail_53-head_52);
        }
        else if(parsecmp("__noreturn",info)) {
            head_54=info->p->p;
            info->p->p+=strlen("__noreturn");
            parse_function_attribute_skip_paren(info);
            tail_55=info->p->p;
            buffer_append(result,head_54,tail_55-head_54);
        }
        else if(parsecmp("__asm__",info)) {
            head_56=info->p->p;
            info->p->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(((info->end-info->p->p)>=strlen("__ASMNAME"))&&memcmp(info->p->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            parse_function_attribute_skip_paren(info);
            tail_57=info->p->p;
            buffer_append(result,head_56,tail_57-head_56);
        }
        else if(parsecmp("__attribute_pure__",info)) {
            head_58=info->p->p;
            info->p->p+=strlen("__attribute_pure__");
            parse_function_attribute_skip_paren(info);
            tail_59=info->p->p;
            buffer_append(result,head_58,tail_59-head_58);
        }
        else if(parsecmp("__malloc_like",info)) {
            head_60=info->p->p;
            info->p->p+=strlen("__malloc_like");
            parse_function_attribute_skip_paren(info);
            tail_61=info->p->p;
            buffer_append(result,head_60,tail_61-head_60);
        }
        else if(parsecmp("__result_use_check",info)) {
            head_62=info->p->p;
            info->p->p+=strlen("__result_use_check");
            parse_function_attribute_skip_paren(info);
            tail_63=info->p->p;
            buffer_append(result,head_62,tail_63-head_62);
        }
        else if(parsecmp("__alloc_size2",info)) {
            head_64=info->p->p;
            info->p->p+=strlen("__alloc_size2");
            parse_function_attribute_skip_paren(info);
            tail_65=info->p->p;
            buffer_append(result,head_64,tail_65-head_64);
        }
        else if(parsecmp("__alloc_size",info)) {
            head_66=info->p->p;
            info->p->p+=strlen("__alloc_size");
            parse_function_attribute_skip_paren(info);
            tail_67=info->p->p;
            buffer_append(result,head_66,tail_67-head_66);
        }
        else if(parsecmp("__nonnull",info)) {
            head_68=info->p->p;
            info->p->p+=strlen("__nonnull");
            parse_function_attribute_skip_paren(info);
            tail_69=info->p->p;
            buffer_append(result,head_68,tail_69-head_68);
        }
        else if(parsecmp("__alloc_align",info)) {
            head_70=info->p->p;
            info->p->p+=strlen("__alloc_align");
            parse_function_attribute_skip_paren(info);
            tail_71=info->p->p;
            buffer_append(result,head_70,tail_71-head_70);
        }
        else if(parsecmp("__attribute_malloc__",info)) {
            head_72=info->p->p;
            info->p->p+=strlen("__attribute_malloc__");
            parse_function_attribute_skip_paren(info);
            tail_73=info->p->p;
            buffer_append(result,head_72,tail_73-head_72);
        }
        else if(parsecmp("__attr_dealloc_fclose",info)) {
            head_74=info->p->p;
            info->p->p+=strlen("__attr_dealloc_fclose");
            parse_function_attribute_skip_paren(info);
            tail_75=info->p->p;
            buffer_append(result,head_74,tail_75-head_74);
        }
        else if(parsecmp("__wur",info)) {
            head_76=info->p->p;
            info->p->p+=strlen("__wur");
            parse_function_attribute_skip_paren(info);
            tail_77=info->p->p;
            buffer_append(result,head_76,tail_77-head_76);
        }
        else if(parsecmp("__pure2",info)) {
            head_78=info->p->p;
            info->p->p+=strlen("__pure2");
            parse_function_attribute_skip_paren(info);
            tail_79=info->p->p;
            buffer_append(result,head_78,tail_79-head_78);
        }
        else if(parsecmp("__pure",info)) {
            head_80=info->p->p;
            info->p->p+=strlen("__pure");
            parse_function_attribute_skip_paren(info);
            tail_81=info->p->p;
            buffer_append(result,head_80,tail_81-head_80);
        }
        else if(parsecmp("__THROW",info)) {
            head_82=info->p->p;
            info->p->p+=strlen("__THROW");
            parse_function_attribute_skip_paren(info);
            tail_83=info->p->p;
            buffer_append(result,head_82,tail_83-head_82);
        }
        else if(parsecmp("__asm",info)) {
            head0=info->p->p;
            sline0=info->sline;
            info->p->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            head_84=info->p->p;
            sline=info->sline;
            nest=0;
            while(*info->p->p) {
                if(*info->p->p==40) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest++;
                }
                else if(*info->p->p==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    nest--;
                    if(nest==0) {
                        break;
                    }
                }
                else if(*info->p->p==34) {
                    info->p->p++;
                    while(*info->p->p!=0&&*info->p->p!=34) {
                        buffer_append_char(asm_fun_name,*info->p->p);
                        info->p->p++;
                    }
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    info->p->p++;
                }
            }
            info->p->p=head0;
            info->sline=sline0;
            info->p->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            parse_function_attribute_skip_paren(info);
            tail_85=info->p->p;
            buffer_append(result,head0,tail_85-head0);
        }
        else if(parse_common_function_attribute_keyword(result,info)) {
        }
        else {
            break;
        }
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value3=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "07function.nc", 1319, 830, "struct tuple2$2char$phchar$ph"), "07function.nc", 1319, 840),(char* )come_increment_ref_count(buffer_to_string(asm_fun_name), "07function.nc", 1319, 841),(char* )come_increment_ref_count(buffer_to_string(result), "07function.nc", 1319, 842)))), "07function.nc", 1319, 843);
    come_call_finalizer(buffer_finalize, asm_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1319, 844);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1319, 845);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1319, 846);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07function.nc}", 1319, 847);
    return __result_obj__0;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char*  v1  , char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj103  ;
    char*  __dec_obj104  ;
    struct tuple2$2char$phchar$ph* __result_obj__0;
    __dec_obj103=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3913, 832);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 831);
    __dec_obj104=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3914, 834);
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3914, 833);
        __result_obj__0 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3916, 835);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 836);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3916, 837));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3916, 838));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 839);
    return __result_obj__0;
}

void transpile_toplevel(_Bool block, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "transpile_toplevel"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj105  ;
    char* head;
    int head_sline;
    char*  buf  ;
    char*  __dec_obj106  ;
    char*  __dec_obj107  ;
    struct sNode* node;
    _Bool Value;
    while(*info->p->p) {
        __dec_obj105=info->sname_at_head,
        info->sname_at_head=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "07function.nc", 1326, 848, "char* "), "07function.nc", 1326, 850);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1326, 849);
        skip_spaces_and_lf(info);
        if(*info->p->p==0) {
            break;
        }
        if(block&&*info->p->p==125) {
            info->p->p++;
            skip_spaces_and_lf(info);
            break;
        }
        while(*info->p->p==59) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        head=info->p->p;
        head_sline=info->sline;
        buf=((void*)0);
        if(*info->p->p==91&&*(info->p->p+1)==91) {
            __right_value0 = (void*)0;
            __dec_obj106=buf,
            buf=(char*)come_increment_ref_count(xsprintf("__attribute__"), "07function.nc", 1347, 852);
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1347, 851);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj107=buf,
            buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1350, 854);
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1350, 853);
        }
        skip_spaces_and_lf(info);
        if(block&&*info->p->p==125) {
            info->p->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1358, 855));
            break;
        }
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(top_level_v99(buf,head,head_sline,info), "07function.nc", 1361, 856);
        skip_spaces_and_lf(info);
        while(*info->p->p==59) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(node!=((void*)0)) {
            Value=node_compile(node,info);
            if(!Value) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        skip_spaces_and_lf(info);
        if(block&&*info->p->p==125) {
            info->p->p++;
            skip_spaces_and_lf(info);
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1383, 857));
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 1383, 858):(void*)0);
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1386, 859));
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 1386, 860):(void*)0);
    }
    neo_current_frame = fr.prev;
}

int transpile(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "transpile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  name  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType* result_type;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun;
    char*  name_89  ;
    struct sType* result_type_90;
    struct list$1sType$ph* param_types_91;
    struct list$1char$ph* param_names_92;
    struct list$1char$ph* param_default_parametors_93;
    struct sFun* fun_94;
    skip_spaces_and_lf(info);
    {
        name=(char* )come_increment_ref_count(__builtin_string("__builtin_va_start","07function.nc",1393), "07function.nc", 1393, 861);
        __right_value0 = (void*)0;
        result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "07function.nc", 1394, 862, "struct sType* "), "07function.nc", 1394, 863),(char*)come_increment_ref_count(xsprintf("void"), "07function.nc", 1394, 864),(_Bool)0,info,(_Bool)0,0), "07function.nc", 1394, 865);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 1395, 866, "struct list$1sType$ph*"), "07function.nc", 1395, 867)), "07function.nc", 1395, 868);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 1396, 869, "struct list$1char$ph*"), "07function.nc", 1396, 870)), "07function.nc", 1396, 871);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 1397, 872, "struct list$1char$ph*"), "07function.nc", 1397, 873)), "07function.nc", 1397, 874);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 1398, 875, "struct sFun* "), "07function.nc", 1401, 876),(char* )come_increment_ref_count(name, "07function.nc", 1401, 877),(struct sType*)come_increment_ref_count(result_type, "07function.nc", 1401, 878),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 1401, 879),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 1401, 880),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 1401, 881),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1401, 882),(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1401, 883),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1401, 884)), "07function.nc", 1401, 885);
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name,"07function.nc",1403), "07function.nc", 1403, 926),(struct sFun*)come_increment_ref_count(fun, "07function.nc", 1403, 927),(_Bool)0);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1405, 928));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1405, 929);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1405, 930);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1405, 931);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1405, 932);
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1405, 933);
    }
    {
        __right_value0 = (void*)0;
        name_89=(char* )come_increment_ref_count(__builtin_string("__builtin_va_end","07function.nc",1406), "07function.nc", 1406, 934);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        result_type_90=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "07function.nc", 1407, 935, "struct sType* "), "07function.nc", 1407, 936),(char*)come_increment_ref_count(xsprintf("void"), "07function.nc", 1407, 937),(_Bool)0,info,(_Bool)0,0), "07function.nc", 1407, 938);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_types_91=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 1408, 939, "struct list$1sType$ph*"), "07function.nc", 1408, 940)), "07function.nc", 1408, 941);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_names_92=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 1409, 942, "struct list$1char$ph*"), "07function.nc", 1409, 943)), "07function.nc", 1409, 944);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        param_default_parametors_93=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 1410, 945, "struct list$1char$ph*"), "07function.nc", 1410, 946)), "07function.nc", 1410, 947);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        fun_94=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 1411, 948, "struct sFun* "), "07function.nc", 1414, 949),(char* )come_increment_ref_count(name_89, "07function.nc", 1414, 950),(struct sType*)come_increment_ref_count(result_type_90, "07function.nc", 1414, 951),(struct list$1sType$ph*)come_increment_ref_count(param_types_91, "07function.nc", 1414, 952),(struct list$1char$ph*)come_increment_ref_count(param_names_92, "07function.nc", 1414, 953),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_93, "07function.nc", 1414, 954),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1414, 955),(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1414, 956),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1414, 957)), "07function.nc", 1414, 958);
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(name_89,"07function.nc",1416), "07function.nc", 1416, 959),(struct sFun*)come_increment_ref_count(fun_94, "07function.nc", 1416, 960),(_Bool)0);
        (name_89 = come_decrement_ref_count(name_89, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1418, 961));
        come_call_finalizer(sType_finalize, result_type_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1418, 962);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_91, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1418, 963);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_92, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1418, 964);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_93, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1418, 965);
        come_call_finalizer(sFun_finalize, fun_94, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1418, 966);
    }
    transpile_toplevel((_Bool)0,info);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3348, 886));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3348, 887);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3364, 917));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3365, 918);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3372, 919);
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3373, 920);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3395, 921);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3401, 922);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3421, 923));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3424, 924));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3424, 925);
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
    struct sFun*  default_value_88  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 888, "char** "))), "/usr/local/include/neo-c.h", 3272, 889);
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 890, "struct sFun** "))), "/usr/local/include/neo-c.h", 3273, 891);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 892, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 893);
    len=0;
    for(it=map$2char$phsFun$ph_begin(self)    ;!map$2char$phsFun$ph_end(self);it=map$2char$phsFun$ph_next(self)){
        memset(&default_value,0,sizeof(struct sFun* ));
        __right_value0 = (void*)0;
        it2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_at(self,it,(struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 909),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 910);
        hash=string_get_hash_key(((char* )it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_88,0,sizeof(struct sFun* ));
                __right_value0 = (void*)0;
                items[n]=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(self,it,(struct sFun* )come_increment_ref_count(default_value_88, "/usr/local/include/neo-c.h", 3304, 911),(_Bool)0)));
                len++;
                come_call_finalizer(sFun_finalize, default_value_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 912);
                break;
                come_call_finalizer(sFun_finalize, default_value_88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3309, 913);
            }
        }
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 914);
        come_call_finalizer(sFun_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 915);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 916));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
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
    char*  result_86  ;
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
    memset(&result_86,0,sizeof(char* ));
        __result_obj__0 = result_86;
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
    char*  result_87  ;
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
    memset(&result_87,0,sizeof(char* ));
        __result_obj__0 = result_87;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 894);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 895);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 896);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 897);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 898);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 899);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 900);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 901);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 902);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 903);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 904);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 905);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 906);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 907);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 908);
    return __result_obj__0;
}

_Bool is_function_attribute_word(char* buf)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_function_attribute_word"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"_Nonnull")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"__asm__")||charp_operator_equals(buf,"__attribute_pure__")||charp_operator_equals(buf,"__malloc_like")||charp_operator_equals(buf,"__result_use_check")||charp_operator_equals(buf,"__alloc_size2")||charp_operator_equals(buf,"__alloc_size")||charp_operator_equals(buf,"__nonnull")||charp_operator_equals(buf,"__alloc_align")||charp_operator_equals(buf,"__attribute_malloc__")||charp_operator_equals(buf,"__attr_dealloc_fclose")||charp_operator_equals(buf,"__wur")||charp_operator_equals(buf,"__pure2")||charp_operator_equals(buf,"__pure")||charp_operator_equals(buf,"__THROW")||charp_operator_equals(buf,"__asm")||charp_operator_equals(buf,"__aligned_largest")||charp_operator_equals(buf,"__aligned_u64")||charp_operator_equals(buf,"__aligned")||charp_operator_equals(buf,"__section")||charp_operator_equals(buf,"__visibility")||charp_operator_equals(buf,"__alias")||charp_operator_equals(buf,"__format_arg")||charp_operator_equals(buf,"__format")||charp_operator_equals(buf,"__printf")||charp_operator_equals(buf,"__scanf")||charp_operator_equals(buf,"__assume_aligned")||charp_operator_equals(buf,"__cleanup")||charp_operator_equals(buf,"__optimize")||charp_operator_equals(buf,"__target")||charp_operator_equals(buf,"__error")||charp_operator_equals(buf,"__warning")||charp_operator_equals(buf,"__no_sanitize_address")||charp_operator_equals(buf,"__no_sanitize_thread")||charp_operator_equals(buf,"__no_sanitize_coverage")||charp_operator_equals(buf,"__no_sanitize")||charp_operator_equals(buf,"__constructor")||charp_operator_equals(buf,"__destructor")||charp_operator_equals(buf,"__packed")||charp_operator_equals(buf,"__used")||charp_operator_equals(buf,"__unused")||charp_operator_equals(buf,"__maybe_unused")||charp_operator_equals(buf,"__always_unused")||charp_operator_equals(buf,"__deprecated")||charp_operator_equals(buf,"__cold")||charp_operator_equals(buf,"__hot")||charp_operator_equals(buf,"__weak_ref")||charp_operator_equals(buf,"__weak")||charp_operator_equals(buf,"__noinline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__flatten")||charp_operator_equals(buf,"__leaf")||charp_operator_equals(buf,"__naked")||charp_operator_equals(buf,"__noclone")||charp_operator_equals(buf,"__no_profile")||charp_operator_equals(buf,"__no_instrument_function")||charp_operator_equals(buf,"__warn_unused_result")||charp_operator_equals(buf,"__must_check")||charp_operator_equals(buf,"__returns_nonnull")||charp_operator_equals(buf,"__malloc")||charp_operator_equals(buf,"__init")||charp_operator_equals(buf,"__initdata")||charp_operator_equals(buf,"__initconst")||charp_operator_equals(buf,"__init_rodata")||charp_operator_equals(buf,"__exit")||charp_operator_equals(buf,"__exitdata")||charp_operator_equals(buf,"__exitconst")||charp_operator_equals(buf,"__ref")||charp_operator_equals(buf,"__meminit")||charp_operator_equals(buf,"__meminitdata")||charp_operator_equals(buf,"__meminitconst")||charp_operator_equals(buf,"__ro_after_init")||charp_operator_equals(buf,"__read_mostly")||charp_operator_equals(buf,"__latent_entropy")||charp_operator_equals(buf,"__percpu");
    neo_current_frame = fr.prev;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v99"; neo_current_frame = &fr;
    char* source_head;
    _Bool is_type_name_flag;
    int sline;
    void* __right_value0 = (void*)0;
    struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* multiple_assign_var3
;    _Bool define_only=0;
    _Bool anonymous_name=0;
    _Bool struct_=0;
    _Bool union_=0;
    _Bool enum_=0;
    _Bool square_attribute_head;
    _Bool define_struct_nobody;
    _Bool no_output_come_code;
    char* p;
    int sline_95;
    char*  word  ;
    _Bool uniq_class;
    _Bool no_output_come_code_96;
    char* p_97;
    int sline_98;
    char*  buf2  ;
    _Bool define_function_pointer_result_function;
    _Bool define_variable_between_brace;
    _Bool no_output_come_code_99;
    char* p_100;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var4
;    struct sType*  result_type  =0;
    char*  fun_name  =0;
    _Bool err=0;
    char*  word_101  ;
    _Bool define_function_flag;
    _Bool no_output_come_code_102;
    char* p_103;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  result_type_104  =0;
    char*  fun_name_105  =0;
    _Bool err_106=0;
    char*  word_107  ;
    char*  __dec_obj108  ;
    char*  __dec_obj109  ;
    char*  __dec_obj110  ;
    char*  __dec_obj111  ;
    _Bool define_variable;
    _Bool no_output_come_code_108;
    char* p_109;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType*  result_type_110  =0;
    char*  fun_name_111  =0;
    _Bool err_112=0;
    char*  word_113  ;
    char*  word_114  ;
    _Bool no_output_come_code_115;
    char* p_116;
    char*  word_117  ;
    char*  __dec_obj112  ;
    char*  buf2_118  ;
    struct sNode* __result_obj__0;
    char*  word_119  ;
    char*  word_120  ;
    struct sNode* node;
    char* header_head;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var7
;    struct sType*  result_type_121  =0;
    char*  fun_name_122  =0;
    _Bool err_123=0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* param_types;
    struct list$1char$ph* param_names;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType*  param_type  =0;
    char*  param_name  =0;
    _Bool err_124=0;
    struct list$1sType$ph* param_types2;
    struct list$1char$ph* param_names2;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  param_type_127  =0;
    char*  param_name_128  =0;
    _Bool err_129=0;
    char* header_tail;
    void* __right_value2 = (void*)0;
    struct sType*  result_type2  ;
    struct sType*  __dec_obj116  ;
    struct list$1sType$ph* __dec_obj117;
    struct list$1char$ph* __dec_obj118;
    _Bool var_args;
    struct list$1char$ph* param_default_parametors;
    struct sFun* fun;
    struct sNode* _inf_value4;
    struct sFunNode* _inf_obj_value4;
    struct sNode* result;
    char*  struct_attribute0  ;
    char*  word_130  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char*  struct_attribute  ;
    char*  __dec_obj119  ;
    char*  struct_attribute_131  ;
    char*  __dec_obj120  ;
    char*  struct_attribute_132  ;
    char*  __dec_obj121  ;
    _Bool attribute_define_function;
    _Bool no_output_come_code_133;
    char* p_134;
    int sline2;
    char*  declaration_word  ;
    _Bool type_word;
    struct sNode* node_135;
    struct sNode* __dec_obj122;
    struct sNode* __dec_obj123;
    struct sNode* node_136;
    struct sNode* node_137;
    struct sNode* node_138;
    char* source_tail;
    struct buffer*  header  ;
    char*  buf2_139  ;
    memset(&node_135, 0, sizeof(node_135));
    info->in_top_level=(_Bool)1;
    source_head=info->p->p;
    is_type_name_flag=is_type_name(buf,info);
    sline=info->sline;
    info->p->p=head;
    info->sline=head_sline;
    multiple_assign_var3=((struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$*)(__right_value0=backtrace_struct_union_enum(info)));
    define_only=multiple_assign_var3->v1;
    anonymous_name=multiple_assign_var3->v2;
    struct_=multiple_assign_var3->v3;
    union_=multiple_assign_var3->v4;
    enum_=multiple_assign_var3->v5;
    come_call_finalizer(tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1515, 967);
    square_attribute_head=*head==91&&*(head+1)==91;
    define_struct_nobody=(_Bool)0;
    {
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p=info->p->p;
        sline_95=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            __right_value0 = (void*)0;
            ((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 1534, 968));
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1537, 969);
                if(*info->p->p==59) {
                    define_struct_nobody=(_Bool)1;
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1543, 970));
            }
        }
        info->no_output_come_code=no_output_come_code;
        info->p->p=p;
        info->sline=sline_95;
    }
    uniq_class=(_Bool)0;
    if(charp_operator_equals(buf,"uniq")) {
        no_output_come_code_96=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_97=info->p->p;
        info->p->p=head;
        sline_98=info->sline;
        if(xisalpha(*info->p->p)||*info->p->p==95) {
            __right_value0 = (void*)0;
            ((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 1562, 971));
        }
        if(xisalpha(*info->p->p)||*info->p->p==95) {
            __right_value0 = (void*)0;
            buf2=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1566, 972);
            if(string_operator_equals(buf2,"class")) {
                uniq_class=(_Bool)1;
            }
            (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1573, 973));
        }
        info->p->p=p_97;
        info->sline=sline_98;
        info->no_output_come_code=no_output_come_code_96;
    }
    define_function_pointer_result_function=(_Bool)0;
    define_variable_between_brace=(_Bool)0;
    if(is_type_name_flag&&!uniq_class&&!square_attribute_head) {
        no_output_come_code_99=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_100=info->p->p;
        info->p->p=head;
        if(xisalpha(*info->p->p)||*info->p->p==95||(*info->p->p==91&&*(info->p->p+1)==91)) {
            __right_value0 = (void*)0;
            multiple_assign_var4=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type=(struct sType* )come_increment_ref_count(multiple_assign_var4->v1, "07function.nc", 1590, 974);
            fun_name=(char* )come_increment_ref_count(multiple_assign_var4->v2, "07function.nc", 1590, 975);
            err=multiple_assign_var4->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1590, 976);
            if(*info->p->p==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
                if(*info->p->p!=42) {
                    define_function_pointer_result_function=(_Bool)1;
                    if(xisalpha(*info->p->p)||*info->p->p==95) {
                        __right_value0 = (void*)0;
                        word_101=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1600, 977);
                        if(!is_type_name(word_101,info)&&*info->p->p==41) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p->p==40) {
                            }
                            else {
                                define_variable_between_brace=(_Bool)1;
                            }
                        }
                        (word_101 = come_decrement_ref_count(word_101, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1613, 978));
                    }
                }
            }
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1617, 979);
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1617, 980));
        }
        info->no_output_come_code=no_output_come_code_99;
        info->p->p=head;
        info->sline=sline;
    }
    define_function_flag=(_Bool)0;
    if(is_type_name_flag&&!define_function_pointer_result_function&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class&&!square_attribute_head) {
        no_output_come_code_102=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_103=info->p->p;
        info->p->p=head;
        if(xisalpha(*info->p->p)||*info->p->p==95||(*info->p->p==91&&*(info->p->p+1)==91)) {
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type_104=(struct sType* )come_increment_ref_count(multiple_assign_var5->v1, "07function.nc", 1633, 981);
            fun_name_105=(char* )come_increment_ref_count(multiple_assign_var5->v2, "07function.nc", 1633, 982);
            err_106=multiple_assign_var5->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1633, 983);
            come_call_finalizer(sType_finalize, result_type_104, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1635, 984);
            (fun_name_105 = come_decrement_ref_count(fun_name_105, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1635, 985));
        }
        if(*info->p->p==40||(*info->p->p==58&&*(info->p->p+1)==58)) {
            define_function_flag=(_Bool)1;
        }
        if(!define_only) {
            word_107=((void*)0);
            if(xisalnum(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                __dec_obj108=word_107,
                word_107=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1642, 987);
                __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1642, 986);
                if(string_operator_equals(word_107,"extern")) {
                    __right_value0 = (void*)0;
                    __dec_obj109=word_107,
                    word_107=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1645, 989);
                    __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1645, 988);
                }
            }
            else {
                __dec_obj110=word_107,
                word_107=((void*)0);
                __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1649, 990);
            }
            if(word_107) {
                if(is_type_name(word_107,info)) {
                    while(*info->p->p==42) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p->p==91&&*(info->p->p+1)==93) {
                        info->p->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p->p==58) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p->p==58) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info->p->p)||*info->p->p==95) {
                        __right_value0 = (void*)0;
                        __dec_obj111=word_107,
                        word_107=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1671, 992);
                        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1671, 991);
                    }
                }
                if(strlen(word_107)>0&&(*info->p->p==40||(*info->p->p==58&&*(info->p->p+1)==58))) {
                    if(is_type_name_flag) {
                        define_function_flag=(_Bool)1;
                    }
                }
            }
            (word_107 = come_decrement_ref_count(word_107, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1684, 993));
        }
        info->no_output_come_code=no_output_come_code_102;
        info->p->p=p_103;
        info->sline=sline;
    }
    define_variable=(_Bool)1;
    if(is_type_name_flag&&!define_function_pointer_result_function&&!uniq_class&&!square_attribute_head) {
        no_output_come_code_108=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_109=info->p->p;
        info->p->p=head;
        if(!is_type_name_flag) {
            define_variable=(_Bool)0;
        }
        if(xisalpha(*info->p->p)||*info->p->p==95||(*info->p->p==91&&*(info->p->p+1)==91)) {
            __right_value0 = (void*)0;
            multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=backtrace_parse_type((_Bool)0,info)));
            result_type_110=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "07function.nc", 1704, 994);
            fun_name_111=(char* )come_increment_ref_count(multiple_assign_var6->v2, "07function.nc", 1704, 995);
            err_112=multiple_assign_var6->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1704, 996);
            if(*info->p->p==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
                if(*info->p->p==42) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p->p)||*info->p->p==95) {
                        __right_value0 = (void*)0;
                        word_113=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1715, 997);
                        if(*info->p->p==41) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p->p==40) {
                                define_variable=(_Bool)1;
                            }
                        }
                        (word_113 = come_decrement_ref_count(word_113, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1726, 998));
                    }
                }
                else if(xisalpha(*info->p->p)||*info->p->p==95) {
                    __right_value0 = (void*)0;
                    word_114=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1728, 999);
                    if(*info->p->p==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        if(!is_type_name(word_114,info)&&*info->p->p!=40) {
                            define_variable=(_Bool)1;
                        }
                    }
                    (word_114 = come_decrement_ref_count(word_114, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1739, 1000));
                }
            }
            come_call_finalizer(sType_finalize, result_type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1742, 1001);
            (fun_name_111 = come_decrement_ref_count(fun_name_111, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1742, 1002));
        }
        if(define_only) {
            define_variable=(_Bool)0;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p->p)||*info->p->p==95)) {
                define_variable=(_Bool)0;
            }
            while(xisalpha(*info->p->p)||*info->p->p==95) {
                info->p->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p->p==40||*info->p->p==58) {
                define_variable=(_Bool)0;
            }
        }
        info->p->p=p_109;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code_108;
    }
    else {
        define_variable=(_Bool)0;
    }
    if(!define_function_pointer_result_function) {
        no_output_come_code_115=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        p_116=info->p->p;
        info->p->p=head;
        if(charp_operator_equals(buf,"struct")) {
            __right_value0 = (void*)0;
            ((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 1780, 1003));
            if(xisalpha(*info->p->p)||*info->p->p==95) {
                __right_value0 = (void*)0;
                ((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 1782, 1004));
                if(xisalpha(*info->p->p)||*info->p->p==95) {
                    __right_value0 = (void*)0;
                    word_117=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1784, 1005);
                    if(xisalpha(*info->p->p)||*info->p->p==95) {
                        __right_value0 = (void*)0;
                        __dec_obj112=word_117,
                        word_117=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1786, 1007);
                        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 1786, 1006);
                        if(string_operator_equals(word_117,"extends")) {
                            define_variable=(_Bool)0;
                        }
                    }
                    (word_117 = come_decrement_ref_count(word_117, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1793, 1008));
                }
            }
        }
        if(define_only) {
            define_variable=(_Bool)0;
        }
        else if(define_variable) {
        }
        else {
            if(!(xisalpha(*info->p->p)||*info->p->p==95)) {
                define_variable=(_Bool)0;
            }
            while(xisalpha(*info->p->p)||*info->p->p==95) {
                info->p->p++;
            }
            skip_spaces_and_lf(info);
            if(*info->p->p==40||*info->p->p==58) {
                define_variable=(_Bool)0;
            }
        }
        info->p->p=p_116;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code_115;
    }
    info->p->p=head;
    info->sline=head_sline;
    if(uniq_class) {
        info->p->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        buf2_118=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1828, 1009);
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v98(buf2_118,head,head_sline,info))), "07function.nc", 1830, 1010);
        (buf2_118 = come_decrement_ref_count(buf2_118, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1830, 1011));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 1830, 1012):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 1830, 1013):(void*)0);
        return __result_obj__0;
        (buf2_118 = come_decrement_ref_count(buf2_118, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2122, 1014));
    }
    else if(charp_operator_equals(buf,"template")) {
        __right_value0 = (void*)0;
        word_119=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1833, 1015);
        if(*info->p->p==60) {
            info->p->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(*info->p->p==62) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p->p==44) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    __right_value0 = (void*)0;
                    word_120=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 1856, 1016);
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(info->method_generics_type_names,(char* )come_increment_ref_count((char* )come_memdup(word_120, "07function.nc", 1857, 1017, "char* "), "07function.nc", 1857, 1018));
                    (word_120 = come_decrement_ref_count(word_120, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1859, 1019));
                }
            }
            __right_value0 = (void*)0;
            node=(struct sNode*)come_increment_ref_count(parse_function(info), "07function.nc", 1861, 1020);
            list$1char$ph_reset(info->method_generics_type_names);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "07function.nc", 1865, 1021);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 1865, 1022):(void*)0);
            (word_119 = come_decrement_ref_count(word_119, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1865, 1023));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 1865, 1024):(void*)0);
            return __result_obj__0;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 1867, 1025):(void*)0);
        }
        (word_119 = come_decrement_ref_count(word_119, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2122, 1026));
    }
    else if(charp_operator_equals(buf,"enum")&&*info->p->p==123) {
    }
    else if(define_struct_nobody) {
    }
    else if(define_variable_between_brace) {
        info->p->p=head;
        info->sline=sline;
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_global_variable(info))), "07function.nc", 1876, 1027);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 1876, 1028):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 1876, 1029):(void*)0);
        return __result_obj__0;
    }
    else if(define_function_pointer_result_function) {
        header_head=info->p->p;
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_121=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "07function.nc", 1880, 1030);
        fun_name_122=(char* )come_increment_ref_count(multiple_assign_var7->v2, "07function.nc", 1880, 1031);
        err_123=multiple_assign_var7->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1880, 1032);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 1886, 1033, "struct list$1sType$ph*"), "07function.nc", 1886, 1034)), "07function.nc", 1886, 1035);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 1887, 1036, "struct list$1char$ph*"), "07function.nc", 1887, 1037)), "07function.nc", 1887, 1038);
            if(*info->p->p==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    __right_value0 = (void*)0;
                    multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type=(struct sType* )come_increment_ref_count(multiple_assign_var8->v1, "07function.nc", 1895, 1039);
                    param_name=(char* )come_increment_ref_count(multiple_assign_var8->v2, "07function.nc", 1895, 1040);
                    err_124=multiple_assign_var8->v3;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1895, 1041);
                    if(!err_124) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types,(struct sType* )come_increment_ref_count(param_type, "07function.nc", 1902, 1056));
                    static int num_function_pointer_result_var_name_a=0;
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(param_names,(char* )come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a), "07function.nc", 1905, 1057));
                    if(xisalpha(*info->p->p)||*info->p->p==95) {
                        __right_value0 = (void*)0;
                        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 1908, 1058));
                    }
                    if(*info->p->p==44) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(*info->p->p==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1918, 1059);
                        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1918, 1060));
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p->p);
                        exit(2);
                    }
                    come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1925, 1061);
                    (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1925, 1062));
                }
            }
            expected_next_character(41,info);
            if(*info->p->p==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                param_types2=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "07function.nc", 1933, 1063, "struct list$1sType$ph*"), "07function.nc", 1933, 1064)), "07function.nc", 1933, 1065);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                param_names2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 1934, 1066, "struct list$1char$ph*"), "07function.nc", 1934, 1067)), "07function.nc", 1934, 1068);
                if(*info->p->p==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        __right_value0 = (void*)0;
                        multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_127=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1, "07function.nc", 1942, 1069);
                        param_name_128=(char* )come_increment_ref_count(multiple_assign_var9->v2, "07function.nc", 1942, 1070);
                        err_129=multiple_assign_var9->v3;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1942, 1071);
                        if(!err_129) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2,(struct sType* )come_increment_ref_count(param_type_127, "07function.nc", 1949, 1072));
                        static int num_function_pointer_result_var_name_b=0;
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(param_names2,(char* )come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b), "07function.nc", 1952, 1073));
                        if(xisalpha(*info->p->p)||*info->p->p==95) {
                            __right_value0 = (void*)0;
                            (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 1955, 1074));
                        }
                        if(*info->p->p==44) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(*info->p->p==41) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer(sType_finalize, param_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1965, 1075);
                            (param_name_128 = come_decrement_ref_count(param_name_128, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1965, 1076));
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer(sType_finalize, param_type_127, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1972, 1077);
                        (param_name_128 = come_decrement_ref_count(param_name_128, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1972, 1078));
                    }
                }
                header_tail=info->p->p;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                result_type2=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "07function.nc", 1976, 1079, "struct sType* "), "07function.nc", 1976, 1080),(char*)come_increment_ref_count(xsprintf("lambda"), "07function.nc", 1976, 1081),(_Bool)0,info,(_Bool)0,0), "07function.nc", 1976, 1082);
                __dec_obj116=result_type2->mResultType,
                result_type2->mResultType=(struct sType* )come_increment_ref_count(result_type_121, "07function.nc", 1978, 1084);
                come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 1978, 1083);
                __right_value0 = (void*)0;
                __dec_obj117=result_type2->mParamTypes,
                result_type2->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2), "07function.nc", 1979, 1086);
                come_call_finalizer(list$1sType$ph_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 1979, 1085);
                __right_value0 = (void*)0;
                __dec_obj118=result_type2->mParamNames,
                result_type2->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2), "07function.nc", 1980, 1088);
                come_call_finalizer(list$1char$ph_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 1980, 1087);
                result_type2->mVarArgs=(_Bool)0;
                result_type2->mStatic=(_Bool)0;
                var_args=(_Bool)0;
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07function.nc", 1986, 1089, "struct list$1char$ph*"), "07function.nc", 1986, 1090)), "07function.nc", 1986, 1091);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 1988, 1092, "struct sFun* "), "07function.nc", 1993, 1093),(char* )come_increment_ref_count(__builtin_string(fun_name_122,"07function.nc",1988), "07function.nc", 1993, 1094),(struct sType* )come_increment_ref_count(result_type2, "07function.nc", 1993, 1095),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 1993, 1096),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 1993, 1097),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 1993, 1098),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1993, 1099),(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1993, 1100),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 1993, 1101)), "07function.nc", 1993, 1102);
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name_122,"07function.nc",1995), "07function.nc", 1995, 1103),(struct sFun*)come_increment_ref_count(fun, "07function.nc", 1995, 1104),(_Bool)0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 1997, 1108, "struct sNode");
                _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "07function.nc", 1997, 1105, "struct sFunNode* "), "07function.nc", 1997, 1106),(struct sFun*)come_increment_ref_count(fun, "07function.nc", 1997, 1107),info))), "07function.nc", 1997, 1109);
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
                result=(struct sNode*)come_increment_ref_count(_inf_value4, "07function.nc", 1997, 1110);
                come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 1997, 1111);
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "07function.nc", 1999, 1112);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1113);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1114);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1115);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1116);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1117);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 1999, 1118):(void*)0);
                come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1119);
                come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1120);
                come_call_finalizer(sType_finalize, result_type_121, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 1999, 1121);
                (fun_name_122 = come_decrement_ref_count(fun_name_122, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 1999, 1122));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 1999, 1123):(void*)0);
                return __result_obj__0;
                come_call_finalizer(list$1sType$ph$p_finalize, param_types2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2005, 1124);
                come_call_finalizer(list$1char$ph$p_finalize, param_names2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2005, 1125);
                come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2005, 1126);
                come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2005, 1127);
                come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2005, 1128);
                ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 2005, 1129):(void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2006, 1130);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2006, 1131);
        }
        come_call_finalizer(sType_finalize, result_type_121, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2122, 1132);
        (fun_name_122 = come_decrement_ref_count(fun_name_122, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2122, 1133));
    }
    else if(charp_operator_equals(buf,"__attribute__")||charp_operator_equals(buf,"__declspec")) {
        info->p->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        struct_attribute0=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "07function.nc", 2011, 1134);
        if(xisalpha(*info->p->p)||*info->p->p==95) {
            __right_value0 = (void*)0;
            word_130=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2014, 1135);
            if(string_operator_equals(word_130,"struct")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                struct_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value5=string_operator_add(((char* )(__right_value4=parse_struct_attribute(info,(_Bool)1)))," "))),struct_attribute0), "07function.nc", 2017, 1136);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2017, 1137));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2017, 1138));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2017, 1139));
                __right_value0 = (void*)0;
                __dec_obj119=word_130,
                word_130=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2018, 1141);
                __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2018, 1140);
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_struct((char* )come_increment_ref_count(word_130, "07function.nc", 2019, 1142),(char* )come_increment_ref_count(struct_attribute, "07function.nc", 2019, 1143),info,(_Bool)0))), "07function.nc", 2019, 1144);
                (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2019, 1145));
                (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2019, 1146));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2019, 1147));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2019, 1148):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2019, 1149):(void*)0);
                return __result_obj__0;
                (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2086, 1150));
            }
            else if(string_operator_equals(word_130,"union")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                __right_value4 = (void*)0;
                __right_value5 = (void*)0;
                __right_value6 = (void*)0;
                struct_attribute_131=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value5=string_operator_add(((char* )(__right_value4=parse_struct_attribute(info,(_Bool)1)))," "))),struct_attribute0), "07function.nc", 2022, 1151);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2022, 1152));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2022, 1153));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2022, 1154));
                __right_value0 = (void*)0;
                __dec_obj120=word_130,
                word_130=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2023, 1156);
                __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2023, 1155);
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_union((char* )come_increment_ref_count(word_130, "07function.nc", 2024, 1157),(char* )come_increment_ref_count(struct_attribute_131, "07function.nc", 2024, 1158),info,(_Bool)0))), "07function.nc", 2024, 1159);
                (struct_attribute_131 = come_decrement_ref_count(struct_attribute_131, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2024, 1160));
                (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2024, 1161));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2024, 1162));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2024, 1163):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2024, 1164):(void*)0);
                return __result_obj__0;
                (struct_attribute_131 = come_decrement_ref_count(struct_attribute_131, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2086, 1165));
            }
            else if(string_operator_equals(word_130,"enum")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __right_value3 = (void*)0;
                __right_value4 = (void*)0;
                __right_value5 = (void*)0;
                __right_value6 = (void*)0;
                struct_attribute_132=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value5=string_operator_add(((char* )(__right_value4=parse_struct_attribute(info,(_Bool)1)))," "))),struct_attribute0), "07function.nc", 2027, 1166);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2027, 1167));
                (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2027, 1168));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2027, 1169));
                __right_value0 = (void*)0;
                __dec_obj121=word_130,
                word_130=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2028, 1171);
                __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2028, 1170);
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_enum((char* )come_increment_ref_count(word_130, "07function.nc", 2029, 1172),(char* )come_increment_ref_count(struct_attribute_132, "07function.nc", 2029, 1173),info))), "07function.nc", 2029, 1174);
                (struct_attribute_132 = come_decrement_ref_count(struct_attribute_132, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2029, 1175));
                (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2029, 1176));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2029, 1177));
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2029, 1178):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2029, 1179):(void*)0);
                return __result_obj__0;
                (struct_attribute_132 = come_decrement_ref_count(struct_attribute_132, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2086, 1180));
            }
            else if(is_type_name(word_130,info)) {
                attribute_define_function=define_function_flag;
                if(!attribute_define_function) {
                    no_output_come_code_133=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    p_134=info->p->p;
                    sline2=info->sline;
                    info->p->p=head;
                    info->sline=head_sline;
                    __right_value0 = (void*)0;
                    (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2042, 1181));
                    while(xisalnum(*info->p->p)||*info->p->p==95) {
                        __right_value0 = (void*)0;
                        declaration_word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2044, 1182);
                        type_word=is_type_name(declaration_word,info);
                        if(!type_word) {
                            if(*info->p->p==40||(*info->p->p==58&&*(info->p->p+1)==58)) {
                                attribute_define_function=(_Bool)1;
                            }
                            (declaration_word = come_decrement_ref_count(declaration_word, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2051, 1183));
                            break;
                        }
                        while(*info->p->p==42) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p->p==91&&*(info->p->p+1)==93) {
                            info->p->p+=2;
                            skip_spaces_and_lf(info);
                        }
                        (declaration_word = come_decrement_ref_count(declaration_word, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2064, 1184));
                    }
                    info->p->p=p_134;
                    info->sline=sline2;
                    info->no_output_come_code=no_output_come_code_133;
                }
                info->p->p=head;
                info->sline=sline;
                if(attribute_define_function) {
                    __right_value0 = (void*)0;
                    __dec_obj122=node_135,
                    node_135=(struct sNode*)come_increment_ref_count(parse_function(info), "07function.nc", 2074, 1186);
                    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0, "07function.nc", 2074, 1185) :0);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj123=node_135,
                    node_135=(struct sNode*)come_increment_ref_count(parse_global_variable(info), "07function.nc", 2077, 1188);
                    (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0, (void*)0, "07function.nc", 2077, 1187) :0);
                }
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_135, "07function.nc", 2080, 1189);
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2080, 1190):(void*)0);
                (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2080, 1191));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2080, 1192));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2080, 1193):(void*)0);
                return __result_obj__0;
                ((node_135) ? node_135 = come_decrement_ref_count(node_135, ((struct sNode*)node_135)->finalize, ((struct sNode*)node_135)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 2086, 1194):(void*)0);
            }
            else {
                err_msg(info,"invalid attribute declaration");
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "07function.nc", 2084, 1195);
                (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2084, 1196));
                (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2084, 1197));
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2084, 1198):(void*)0);
                return __result_obj__0;
            }
            (word_130 = come_decrement_ref_count(word_130, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2091, 1199));
        }
        else {
            err_msg(info,"invalid attribute declaration");
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "07function.nc", 2089, 1200);
            (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2089, 1201));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2089, 1202):(void*)0);
            return __result_obj__0;
        }
        (struct_attribute0 = come_decrement_ref_count(struct_attribute0, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2122, 1203));
    }
    else if(is_function_attribute_word(buf)) {
        info->p->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        node_136=(struct sNode*)come_increment_ref_count(parse_function(info), "07function.nc", 2096, 1204);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_136, "07function.nc", 2098, 1205);
        ((node_136) ? node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2098, 1206):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2098, 1207):(void*)0);
        return __result_obj__0;
        ((node_136) ? node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 2122, 1208):(void*)0);
    }
    else if(define_function_flag) {
        info->p->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        node_137=(struct sNode*)come_increment_ref_count(parse_function(info), "07function.nc", 2104, 1209);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_137, "07function.nc", 2106, 1210);
        ((node_137) ? node_137 = come_decrement_ref_count(node_137, ((struct sNode*)node_137)->finalize, ((struct sNode*)node_137)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2106, 1211):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2106, 1212):(void*)0);
        return __result_obj__0;
        ((node_137) ? node_137 = come_decrement_ref_count(node_137, ((struct sNode*)node_137)->finalize, ((struct sNode*)node_137)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 2122, 1213):(void*)0);
    }
    else if(define_variable) {
        info->p->p=head;
        info->sline=sline;
        __right_value0 = (void*)0;
        node_138=(struct sNode*)come_increment_ref_count(parse_global_variable(info), "07function.nc", 2112, 1214);
        source_tail=info->p->p;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        header=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "07function.nc", 2116, 1215, "struct buffer* "), "07function.nc", 2116, 1216)), "07function.nc", 2116, 1217);
        buffer_append(header,source_head,source_tail-source_head);
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_138, "07function.nc", 2119, 1218);
        ((node_138) ? node_138 = come_decrement_ref_count(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2119, 1219):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2119, 1220);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2119, 1221):(void*)0);
        return __result_obj__0;
        ((node_138) ? node_138 = come_decrement_ref_count(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 0,(void*)0, "07function.nc", 2122, 1222):(void*)0);
        come_call_finalizer(buffer_finalize, header, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2122, 1223);
    }
    info->p->p=head;
    info->sline=sline;
    __right_value0 = (void*)0;
    buf2_139=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2125, 1224);
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v98(buf2_139,head,head_sline,info))), "07function.nc", 2127, 1225);
    (buf2_139 = come_decrement_ref_count(buf2_139, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2127, 1226));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2127, 1227):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2127, 1228):(void*)0);
    return __result_obj__0;
}

static void tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize(struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$$p_finalize"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj113  ;
    struct list_item$1sType$ph* litem_125;
    struct sType*  __dec_obj114  ;
    struct list_item$1sType$ph* litem_126;
    struct sType*  __dec_obj115  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 1042);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1043, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1619, 1044);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj113=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1046);
        come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1045);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_125=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1047, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1629, 1048);
        litem_125->prev=self->head;
        litem_125->next=((void*)0);
        __dec_obj114=litem_125->item,
        litem_125->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1050);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1049);
        self->tail=litem_125;
        self->head->next=litem_125;
    }
    else {
        __right_value0 = (void*)0;
        litem_126=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1051, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1639, 1052);
        litem_126->prev=self->tail;
        litem_126->next=((void*)0);
        __dec_obj115=litem_126->item,
        litem_126->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1054);
        come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1053);
        self->tail->next=litem_126;
        self->tail=litem_126;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 1055);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_function(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_function"; neo_current_frame = &fr;
    char* header_head;
    char* source_head;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phchar$ph* multiple_assign_var10
;    char*  asm_fun  =0;
    char*  fun_attribute_prefix  =0;
    char*  fun_attribute  ;
    char*  fun_attribute_middle  ;
    struct sType*  result_type  ;
    char*  var_name  ;
    _Bool constructor_;
    struct sType*  __dec_obj124  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType*  result_type2  =0;
    char*  var_name2  =0;
    _Bool err=0;
    struct sType*  __dec_obj125  ;
    char*  __dec_obj126  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj129  ;
    char*  __dec_obj130  ;
    char*  __dec_obj131  ;
    _Bool method_definition;
    char* p;
    int sline;
    _Bool flag;
    char*  fun_name  ;
    char* base_fun_name;
    struct sType*  obj_type2  ;
    char* __dec_obj132;
    char*  __dec_obj133  ;
    struct sType*  __dec_obj134  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var12
;    struct sType*  obj_type  =0;
    char*  name  =0;
    _Bool err_140=0;
    char* __dec_obj135;
    char*  __dec_obj136  ;
    struct sType*  __dec_obj137  ;
    char* __dec_obj138;
    char*  __dec_obj139  ;
    struct sType*  __dec_obj140  ;
    char* __dec_obj141;
    char*  __dec_obj142  ;
    struct sType*  __dec_obj143  ;
    char* __dec_obj144;
    char*  __dec_obj145  ;
    struct sType*  __dec_obj146  ;
    char*  __dec_obj147  ;
    char* __dec_obj148;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var13
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    char* header_tail;
    _Bool const_fun;
    int version;
    int n;
    struct tuple2$2char$phchar$ph* multiple_assign_var14
;    char*  asm_fun2  =0;
    char*  fun_attribute2  =0;
    char*  __dec_obj149  ;
    char*  __dec_obj150  ;
    _Bool in_top_level;
    struct sBlock*  block  ;
    char*  fun_name_141  ;
    struct sFun* fun;
    char*  __dec_obj151  ;
    struct sFun*  fun2  ;
    struct sNode* _inf_value5;
    struct sLambdaNode* _inf_obj_value5;
    struct sNode* __result_obj__0;
    char*  none_generics_name  ;
    char*  generics_sname  ;
    int generics_sline;
    char*  block_142  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    struct sGenericsFun* fun_143;
    char*  fun_name3  ;
    char*  none_generics_name_147  ;
    char*  generics_sname_148  ;
    int generics_sline_149;
    char*  block_150  ;
    struct sGenericsFun* fun_151;
    char*  fun_name3_152  ;
    char*  generics_sname_153  ;
    int generics_sline_154;
    char*  block_155  ;
    struct sGenericsFun* fun_156;
    char* source_tail;
    char*  new_fun_name  ;
    char*  __dec_obj153  ;
    _Bool static_fun;
    _Bool inline_fun;
    _Bool uniq_fun;
    char*  generics_sname_157  ;
    int generics_sline_158;
    char*  block_159  ;
    char* p_160;
    int sline_161;
    int sline_real;
    int sline_top;
    char*  sname  ;
    char* head;
    struct buffer*  source  ;
    struct buffer*  __dec_obj154  ;
    struct span$1char$p* __dec_obj155;
    char*  __dec_obj156  ;
    struct buffer*  __dec_obj157  ;
    struct span$1char$p* __dec_obj158;
    char*  __dec_obj159  ;
    struct sFun* fun_162;
    char*  __dec_obj160  ;
    struct sNode* _inf_value6;
    struct sFunNode* _inf_obj_value6;
    struct sBlock*  block_163  ;
    struct sFun* fun_164;
    char*  __dec_obj161  ;
    struct sNode* _inf_value7;
    struct sFunNode* _inf_obj_value7;
    char*  new_fun_name_165  ;
    char*  __dec_obj162  ;
    struct sFun* fun_166;
    char*  __dec_obj163  ;
    struct sNode* _inf_value8;
    struct sFunNode* _inf_obj_value8;
    struct tuple2$2char$phchar$ph* multiple_assign_var15
;    char*  asm_fun_167  =0;
    char*  fun_attribute2_168  =0;
    char*  __dec_obj164  ;
    char*  __dec_obj165  ;
    struct sFun* fun_169;
    char*  __dec_obj166  ;
    struct sNode* _inf_value9;
    struct sFunNode* _inf_obj_value9;
    memset(&fun_name, 0, sizeof(fun_name));
    header_head=info->p->p;
    source_head=info->p->p;
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun=(char* )come_increment_ref_count(multiple_assign_var10->v1, "07function.nc", 2135, 1229);
    fun_attribute_prefix=(char* )come_increment_ref_count(multiple_assign_var10->v2, "07function.nc", 2135, 1230);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2135, 1231);
    __right_value0 = (void*)0;
    fun_attribute=(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2136, 1232);
    __right_value0 = (void*)0;
    fun_attribute_middle=(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2137, 1233);
    result_type=((void*)0);
    var_name=((void*)0);
    constructor_=(_Bool)0;
    if(info->in_class&&(info->end-info->p->p)>=strlen("new(")&&memcmp(info->p->p,"new(",4)==0) {
        __right_value0 = (void*)0;
        ((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2145, 1234));
        __right_value0 = (void*)0;
        __dec_obj124=result_type,
        result_type=(struct sType* )come_increment_ref_count(sType_clone(info->class_type), "07function.nc", 2146, 1236);
        come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2146, 1235);
        result_type->mHeap=(_Bool)1;
        constructor_=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        __right_value0 = (void*)0;
        multiple_assign_var11=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2=(struct sType* )come_increment_ref_count(multiple_assign_var11->v1, "07function.nc", 2153, 1237);
        var_name2=(char* )come_increment_ref_count(multiple_assign_var11->v2, "07function.nc", 2153, 1238);
        err=multiple_assign_var11->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2153, 1239);
        __dec_obj125=result_type,
        result_type=(struct sType* )come_increment_ref_count(result_type2, "07function.nc", 2155, 1241);
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2155, 1240);
        __dec_obj126=var_name,
        var_name=(char* )come_increment_ref_count(var_name2, "07function.nc", 2156, 1243);
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2156, 1242);
        if(result_type->mAttribute!=((void*)0)&&string_operator_not_equals(result_type->mAttribute,"")) {
            __dec_obj127=fun_attribute_middle,
            fun_attribute_middle=(char* )come_increment_ref_count(result_type->mAttribute, "07function.nc", 2159, 1245);
            __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2159, 1244);
            __right_value0 = (void*)0;
            __dec_obj128=result_type->mAttribute,
            result_type->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2160, 1247);
            __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2160, 1246);
        }
        if(result_type->mVarAttribute!=((void*)0)&&string_operator_not_equals(result_type->mVarAttribute,"")) {
            if(string_operator_not_equals(fun_attribute_middle,"")) {
                __right_value0 = (void*)0;
                __dec_obj129=fun_attribute_middle,
                fun_attribute_middle=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(fun_attribute_middle," "))),result_type->mVarAttribute), "07function.nc", 2164, 1249);
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2164, 1248);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2164, 1250));
            }
            else {
                __dec_obj130=fun_attribute_middle,
                fun_attribute_middle=(char* )come_increment_ref_count(result_type->mVarAttribute, "07function.nc", 2167, 1252);
                __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2167, 1251);
            }
            __right_value0 = (void*)0;
            __dec_obj131=result_type->mVarAttribute,
            result_type->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2169, 1254);
            __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2169, 1253);
        }
        if(!err) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer(sType_finalize, result_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2179, 1255);
        (var_name2 = come_decrement_ref_count(var_name2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2179, 1256));
    }
    method_definition=(_Bool)0;
    {
        p=info->p->p;
        sline=info->sline;
        flag=(_Bool)0;
        while(xisalnum(*info->p->p)||*info->p->p==95) {
            flag=(_Bool)1;
            __right_value0 = (void*)0;
            ((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2187, 1257));
        }
        while(*info->p->p==42) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p->p==91&&*(info->p->p+1)==93) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p->p==37) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        if(flag&&*info->p->p==58&&*(info->p->p+1)==58) {
            method_definition=(_Bool)1;
        }
        info->p->p=p;
        info->sline=sline;
    }
    base_fun_name=((void*)0);
    obj_type2=((void*)0);
    if(constructor_) {
        __right_value0 = (void*)0;
        __dec_obj132=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(__builtin_string("initialize","07function.nc",2215), "07function.nc", 2215, 1259);
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2215, 1258);
        __right_value0 = (void*)0;
        __dec_obj133=fun_name,
        fun_name=(char* )come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1), "07function.nc", 2216, 1261);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2216, 1260);
        __right_value0 = (void*)0;
        __dec_obj134=obj_type2,
        obj_type2=(struct sType* )come_increment_ref_count(sType_clone(info->class_type), "07function.nc", 2218, 1263);
        come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2218, 1262);
    }
    else if(method_definition) {
        __right_value0 = (void*)0;
        multiple_assign_var12=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type=(struct sType* )come_increment_ref_count(multiple_assign_var12->v1, "07function.nc", 2221, 1264);
        name=(char* )come_increment_ref_count(multiple_assign_var12->v2, "07function.nc", 2221, 1265);
        err_140=multiple_assign_var12->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2221, 1266);
        if(!err_140) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __right_value0 = (void*)0;
        __dec_obj135=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2231, 1268);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2231, 1267);
        __right_value0 = (void*)0;
        __dec_obj136=fun_name,
        fun_name=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,base_fun_name,info,(_Bool)1), "07function.nc", 2232, 1270);
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2232, 1269);
        __right_value0 = (void*)0;
        __dec_obj137=obj_type2,
        obj_type2=(struct sType* )come_increment_ref_count(sType_clone(obj_type), "07function.nc", 2234, 1272);
        come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2234, 1271);
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2264, 1273);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2264, 1274));
    }
    else if(info->impl_type) {
        if(result_type->mClass->mIter) {
            __right_value0 = (void*)0;
            __dec_obj138=base_fun_name,
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2238, 1276);
            __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2238, 1275);
            __right_value0 = (void*)0;
            __dec_obj139=fun_name,
            fun_name=(char* )come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name,info,(_Bool)1), "07function.nc", 2240, 1278);
            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2240, 1277);
            __right_value0 = (void*)0;
            __dec_obj140=obj_type2,
            obj_type2=(struct sType* )come_increment_ref_count(sType_clone(info->impl_type), "07function.nc", 2242, 1280);
            come_call_finalizer(sType_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2242, 1279);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj141=base_fun_name,
            base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2245, 1282);
            __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2245, 1281);
            __right_value0 = (void*)0;
            __dec_obj142=fun_name,
            fun_name=(char* )come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name,info,(_Bool)1), "07function.nc", 2247, 1284);
            __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2247, 1283);
            __right_value0 = (void*)0;
            __dec_obj143=obj_type2,
            obj_type2=(struct sType* )come_increment_ref_count(sType_clone(info->impl_type), "07function.nc", 2249, 1286);
            come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2249, 1285);
        }
    }
    else if(info->class_type) {
        __right_value0 = (void*)0;
        __dec_obj144=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2253, 1288);
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2253, 1287);
        __right_value0 = (void*)0;
        __dec_obj145=fun_name,
        fun_name=(char* )come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name,info,(_Bool)1), "07function.nc", 2255, 1290);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2255, 1289);
        __right_value0 = (void*)0;
        __dec_obj146=obj_type2,
        obj_type2=(struct sType* )come_increment_ref_count(sType_clone(info->class_type), "07function.nc", 2257, 1292);
        come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2257, 1291);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj147=fun_name,
        fun_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "07function.nc", 2260, 1294);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2260, 1293);
        __right_value0 = (void*)0;
        __dec_obj148=base_fun_name,
        base_fun_name=(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2261), "07function.nc", 2261, 1296);
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2261, 1295);
    }
    if(info->in_class&&charp_operator_equals(base_fun_name,"initialize")) {
        info->in_class=(_Bool)0;
    }
    __right_value0 = (void*)0;
    multiple_assign_var13=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,constructor_)));
    param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var13->v1, "07function.nc", 2268, 1297);
    param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var13->v2, "07function.nc", 2268, 1298);
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var13->v3, "07function.nc", 2268, 1299);
    var_args=multiple_assign_var13->v4;
    come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2268, 1303);
    header_tail=info->p->p;
    if(info->in_class&&charp_operator_equals(base_fun_name,"initialize")) {
        info->in_class=(_Bool)1;
    }
    const_fun=(_Bool)0;
    version=0;
    if(parsecmp("version",info)) {
        info->p->p+=strlen("version");
        skip_spaces_and_lf(info);
        n=0;
        while(xisdigit(*info->p->p)) {
            n=n*10+(*info->p->p-48);
            info->p->p++;
        }
        skip_spaces_and_lf(info);
        version=n;
    }
    __right_value0 = (void*)0;
    multiple_assign_var14=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
    asm_fun2=(char* )come_increment_ref_count(multiple_assign_var14->v1, "07function.nc", 2291, 1304);
    fun_attribute2=(char* )come_increment_ref_count(multiple_assign_var14->v2, "07function.nc", 2291, 1305);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2291, 1306);
    if(string_operator_not_equals(fun_attribute2,"")) {
        if(string_operator_not_equals(fun_attribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj149=fun_attribute,
            fun_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2), "07function.nc", 2295, 1308);
            __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2295, 1307);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2295, 1309));
        }
        else {
            __dec_obj150=fun_attribute,
            fun_attribute=(char* )come_increment_ref_count(fun_attribute2, "07function.nc", 2298, 1311);
            __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2298, 1310);
        }
    }
    in_top_level=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(charp_operator_equals(base_fun_name,"lambda")) {
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1), "07function.nc", 2315, 1312);
        static int lambda_num=0;
        lambda_num++;
        __right_value0 = (void*)0;
        fun_name_141=(char* )come_increment_ref_count(xsprintf("lambda%d",lambda_num), "07function.nc", 2320, 1313);
        result_type->mInline=(_Bool)0;
        result_type->mStatic=(_Bool)0;
        result_type->mUniq=(_Bool)0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 2326, 1314, "struct sFun* "), "07function.nc", 2329, 1315),(char* )come_increment_ref_count(__builtin_string(fun_name_141,"07function.nc",2326), "07function.nc", 2329, 1316),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2329, 1317),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2329, 1318),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2329, 1319),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2329, 1320),(_Bool)0,var_args,(struct sBlock* )come_increment_ref_count(block, "07function.nc", 2329, 1321),(_Bool)1,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2329, 1322),(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2329, 1323),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2329, 1324)), "07function.nc", 2329, 1325);
        __dec_obj151=fun->mMiddleAttribute,
        fun->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "07function.nc", 2330, 1327);
        __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2330, 1326);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        fun2=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char* )(__right_value1=__builtin_string(fun_name_141,"07function.nc",2332)))), "07function.nc", 2332, 1328);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2332, 1329));
        __right_value0 = (void*)0;
        map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name_141,"07function.nc",2333), "07function.nc", 2333, 1330),(struct sFun*)come_increment_ref_count(fun, "07function.nc", 2333, 1331),(_Bool)0);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 2335, 1334, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value1=sLambdaNode_initialize((struct sLambdaNode* )come_increment_ref_count((struct sLambdaNode *)come_calloc(1, sizeof(struct sLambdaNode )*(1), "07function.nc", 2335, 1332, "struct sLambdaNode* "), "07function.nc", 2335, 1333),fun,info))), "07function.nc", 2335, 1335);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "07function.nc", 2335, 1342);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1343);
        (fun_name_141 = come_decrement_ref_count(fun_name_141, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1344));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1345);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1346);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1347));
        (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1348));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1349));
        (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1350));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1351);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1352));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1353));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1354));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1355);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1356);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1357);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2335, 1358);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1359));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2335, 1360));
        come_call_finalizer(sLambdaNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2335, 1361);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2335, 1362):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2335, 1363):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2581, 1364);
        (fun_name_141 = come_decrement_ref_count(fun_name_141, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2581, 1365));
        come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2581, 1366);
        come_call_finalizer(sFun_finalize, fun2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2581, 1367);
    }
    else if(info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        if(result_type->mClass->mIter) {
            __right_value0 = (void*)0;
            none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName), "07function.nc", 2339, 1368);
            __right_value0 = (void*)0;
            generics_sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",2341), "07function.nc", 2341, 1369);
            generics_sline=info->sline;
            __right_value0 = (void*)0;
            block_142=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "07function.nc", 2344, 1370);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_143=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun* )come_increment_ref_count((struct sGenericsFun *)come_calloc(1, sizeof(struct sGenericsFun )*(1), "07function.nc", 2346, 1371, "struct sGenericsFun* "), "07function.nc", 2346, 1372),(struct sType* )come_increment_ref_count(info->impl_type, "07function.nc", 2346, 1373),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2346), "07function.nc", 2346, 1374),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2346, 1375),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2346, 1376),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2346, 1377),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2346, 1378),var_args,(char* )come_increment_ref_count(block_142, "07function.nc", 2346, 1379),info,(char* )come_increment_ref_count(__builtin_string(generics_sname,"07function.nc",2346), "07function.nc", 2346, 1380),generics_sline,const_fun), "07function.nc", 2346, 1381);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2346, 1382);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2346, 1383);
            __right_value0 = (void*)0;
            fun_name3=(char* )come_increment_ref_count(xsprintf("%s_iter_%s",none_generics_name,base_fun_name), "07function.nc", 2348, 1384);
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name3,"07function.nc",2350), "07function.nc", 2350, 1435),(struct sGenericsFun*)come_increment_ref_count(fun_143, "07function.nc", 2350, 1436),(_Bool)0);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "07function.nc", 2352, 1437);
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1438));
            (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1439));
            (block_142 = come_decrement_ref_count(block_142, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1440));
            come_call_finalizer(sGenericsFun_finalize, fun_143, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2352, 1441);
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1442));
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1443));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1444));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1445));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1446));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2352, 1447);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1448));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1449));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1450));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2352, 1451);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2352, 1452);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2352, 1453);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2352, 1454);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1455));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2352, 1456));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2352, 1457):(void*)0);
            return __result_obj__0;
            (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1458));
            (generics_sname = come_decrement_ref_count(generics_sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1459));
            (block_142 = come_decrement_ref_count(block_142, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1460));
            come_call_finalizer(sGenericsFun_finalize, fun_143, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2370, 1461);
            (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1462));
        }
        else {
            __right_value0 = (void*)0;
            none_generics_name_147=(char* )come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName), "07function.nc", 2355, 1463);
            __right_value0 = (void*)0;
            generics_sname_148=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",2357), "07function.nc", 2357, 1464);
            generics_sline_149=info->sline;
            __right_value0 = (void*)0;
            block_150=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "07function.nc", 2360, 1465);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            __right_value4 = (void*)0;
            __right_value5 = (void*)0;
            fun_151=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun* )come_increment_ref_count((struct sGenericsFun *)come_calloc(1, sizeof(struct sGenericsFun )*(1), "07function.nc", 2362, 1466, "struct sGenericsFun* "), "07function.nc", 2362, 1467),(struct sType* )come_increment_ref_count(info->impl_type, "07function.nc", 2362, 1468),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2362), "07function.nc", 2362, 1469),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2362, 1470),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2362, 1471),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2362, 1472),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2362, 1473),var_args,(char* )come_increment_ref_count(block_150, "07function.nc", 2362, 1474),info,(char* )come_increment_ref_count(__builtin_string(generics_sname_148,"07function.nc",2362), "07function.nc", 2362, 1475),generics_sline_149,const_fun), "07function.nc", 2362, 1476);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2362, 1477);
            come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2362, 1478);
            __right_value0 = (void*)0;
            fun_name3_152=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name_147,base_fun_name), "07function.nc", 2364, 1479);
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name3_152,"07function.nc",2366), "07function.nc", 2366, 1480),(struct sGenericsFun*)come_increment_ref_count(fun_151, "07function.nc", 2366, 1481),(_Bool)0);
                        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "07function.nc", 2368, 1482);
            (none_generics_name_147 = come_decrement_ref_count(none_generics_name_147, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1483));
            (generics_sname_148 = come_decrement_ref_count(generics_sname_148, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1484));
            (block_150 = come_decrement_ref_count(block_150, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1485));
            come_call_finalizer(sGenericsFun_finalize, fun_151, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2368, 1486);
            (fun_name3_152 = come_decrement_ref_count(fun_name3_152, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1487));
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1488));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1489));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1490));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1491));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2368, 1492);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1493));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1494));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1495));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2368, 1496);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2368, 1497);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2368, 1498);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2368, 1499);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1500));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2368, 1501));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2368, 1502):(void*)0);
            return __result_obj__0;
            (none_generics_name_147 = come_decrement_ref_count(none_generics_name_147, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1503));
            (generics_sname_148 = come_decrement_ref_count(generics_sname_148, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1504));
            (block_150 = come_decrement_ref_count(block_150, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1505));
            come_call_finalizer(sGenericsFun_finalize, fun_151, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2370, 1506);
            (fun_name3_152 = come_decrement_ref_count(fun_name3_152, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2370, 1507));
        }
    }
    else if(list$1char$ph_length(info->method_generics_type_names)>0) {
        __right_value0 = (void*)0;
        generics_sname_153=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",2372), "07function.nc", 2372, 1508);
        generics_sline_154=info->sline;
        __right_value0 = (void*)0;
        block_155=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "07function.nc", 2375, 1509);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        fun_156=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun* )come_increment_ref_count((struct sGenericsFun *)come_calloc(1, sizeof(struct sGenericsFun )*(1), "07function.nc", 2377, 1510, "struct sGenericsFun* "), "07function.nc", 2377, 1511),(struct sType* )come_increment_ref_count(info->impl_type, "07function.nc", 2377, 1512),((struct list$1char$ph*)(__right_value1=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value2=list$1char$ph$p_clone(info->method_generics_type_names))),(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2377), "07function.nc", 2377, 1513),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2377, 1514),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2377, 1515),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2377, 1516),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2377, 1517),var_args,(char* )come_increment_ref_count(block_155, "07function.nc", 2377, 1518),info,(char* )come_increment_ref_count(__builtin_string(generics_sname_153,"07function.nc",2377), "07function.nc", 2377, 1519),generics_sline_154,const_fun), "07function.nc", 2377, 1520);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2377, 1521);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2377, 1522);
        if(method_definition) {
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2380), "07function.nc", 2380, 1523),(struct sGenericsFun*)come_increment_ref_count(fun_156, "07function.nc", 2380, 1524),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(base_fun_name,"07function.nc",2383), "07function.nc", 2383, 1525),(struct sGenericsFun*)come_increment_ref_count(fun_156, "07function.nc", 2383, 1526),(_Bool)0);
        }
                __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "07function.nc", 2386, 1527);
        (generics_sname_153 = come_decrement_ref_count(generics_sname_153, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1528));
        (block_155 = come_decrement_ref_count(block_155, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1529));
        come_call_finalizer(sGenericsFun_finalize, fun_156, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2386, 1530);
        (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1531));
        (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1532));
        (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1533));
        (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1534));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2386, 1535);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1536));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1537));
        (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1538));
        come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2386, 1539);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2386, 1540);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2386, 1541);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2386, 1542);
        (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1543));
        (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2386, 1544));
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2386, 1545):(void*)0);
        return __result_obj__0;
        (generics_sname_153 = come_decrement_ref_count(generics_sname_153, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2581, 1546));
        (block_155 = come_decrement_ref_count(block_155, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2581, 1547));
        come_call_finalizer(sGenericsFun_finalize, fun_156, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2581, 1548);
    }
    else if(*info->p->p==123) {
        source_tail=info->p->p-1;
        if(version>0) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",((char* )(__right_value0=__builtin_string(fun_name,"07function.nc",2392))),version), "07function.nc", 2392, 1549);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2392, 1550));
            __right_value0 = (void*)0;
            __dec_obj153=fun_name,
            fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"07function.nc",2393), "07function.nc", 2393, 1552);
            __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2393, 1551);
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2396, 1553));
        }
        static_fun=(_Bool)0;
        if(result_type->mStatic) {
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            static_fun=(_Bool)1;
        }
        inline_fun=(_Bool)0;
        if(result_type->mInline) {
            result_type->mInline=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            inline_fun=(_Bool)1;
        }
        uniq_fun=(_Bool)0;
        if(result_type->mUniq) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
            uniq_fun=(_Bool)1;
        }
        if(result_type->mUniq) {
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            result_type->mStatic=(_Bool)0;
        }
        if(info->defining_class&&info->defining_class->mUniq) {
            uniq_fun=(_Bool)1;
        }
        if(uniq_fun) {
            __right_value0 = (void*)0;
            generics_sname_157=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",2427), "07function.nc", 2427, 1554);
            generics_sline_158=info->sline;
            __right_value0 = (void*)0;
            block_159=(char* )come_increment_ref_count(skip_block(info,constructor_), "07function.nc", 2430, 1555);
            if(constructor_&&info->defining_class&&info->defining_class->mUniq) {
                p_160=info->p->p;
                sline_161=info->sline;
                sline_real=info->sline_real;
                sline_top=info->sline_top;
                __right_value0 = (void*)0;
                sname=(char* )come_increment_ref_count(__builtin_string(info->sname,"07function.nc",2437), "07function.nc", 2437, 1556);
                head=info->head;
                source=(struct buffer* )come_increment_ref_count(info->source, "07function.nc", 2439, 1557);
                __right_value0 = (void*)0;
                __dec_obj154=info->source,
                info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(block_159), "07function.nc", 2441, 1559);
                come_call_finalizer(buffer_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2441, 1558);
                if(info->p==((void*)0)) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj155=info->p,
                    info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "07function.nc", 2443, 1560, "struct span$1buffer$p*"), "07function.nc", 2443, 1561),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "07function.nc", 2443, 1563);
                    come_call_finalizer(span$1char$p$p_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2443, 1562);
                }
                info->p->memory=info->source->buf;
                info->p->len=info->source->len+2;
                info->p->p=info->source->buf;
                info->head=info->source->buf;
                info->sline=generics_sline_158;
                info->sline_real=generics_sline_158;
                info->sline_top=generics_sline_158;
                __right_value0 = (void*)0;
                __dec_obj156=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(generics_sname_157,"07function.nc",2453), "07function.nc", 2453, 1565);
                __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2453, 1564);
                __right_value0 = (void*)0;
                ((struct sBlock* )(__right_value0=parse_block(info,(_Bool)0,(_Bool)1)));
                come_call_finalizer(sBlock_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2455, 1566);
                info->head=head;
                __dec_obj157=info->source,
                info->source=(struct buffer* )come_increment_ref_count(source, "07function.nc", 2458, 1568);
                come_call_finalizer(buffer_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2458, 1567);
                if(info->p==((void*)0)) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __dec_obj158=info->p,
                    info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "07function.nc", 2460, 1569, "struct span$1buffer$p*"), "07function.nc", 2460, 1570),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "07function.nc", 2460, 1572);
                    come_call_finalizer(span$1char$p$p_finalize, __dec_obj158,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc", 2460, 1571);
                }
                info->p->memory=info->source->buf;
                info->p->len=info->source->len+2;
                info->p->p=info->source->buf;
                info->p->p=p_160;
                info->sline=sline_161;
                info->sline_real=sline_real;
                info->sline_top=sline_top;
                __right_value0 = (void*)0;
                __dec_obj159=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(sname,"07function.nc",2469), "07function.nc", 2469, 1574);
                __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2469, 1573);
                (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2472, 1575));
                come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2472, 1576);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_162=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 2472, 1577, "struct sFun* "), "07function.nc", 2478, 1580),(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2472), "07function.nc", 2478, 1581),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2478, 1582),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2478, 1583),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2478, 1584),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2478, 1585),(_Bool)0,var_args,((void*)0),static_fun,info,inline_fun,uniq_fun,(char* )come_increment_ref_count(fun_attribute_prefix, "07function.nc", 2478, 1586),(char* )come_increment_ref_count(fun_attribute, "07function.nc", 2478, 1587),const_fun,(char* )come_increment_ref_count(block_159, "07function.nc", 2478, 1578),(char* )come_increment_ref_count(generics_sname_157, "07function.nc", 2478, 1579),generics_sline_158,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2478, 1588)), "07function.nc", 2478, 1589);
            __dec_obj160=fun_162->mMiddleAttribute,
            fun_162->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "07function.nc", 2479, 1591);
            __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2479, 1590);
            if(info->in_class) {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2482), "07function.nc", 2482, 1592),(struct sFun*)come_increment_ref_count(fun_162, "07function.nc", 2482, 1593),(_Bool)0);
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2483), "07function.nc", 2483, 1594),(struct sFun*)come_increment_ref_count(fun_162, "07function.nc", 2483, 1595),(_Bool)0);
            }
            else {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2486), "07function.nc", 2486, 1596),(struct sFun*)come_increment_ref_count(fun_162, "07function.nc", 2486, 1597),(_Bool)0);
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->uniq_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2487), "07function.nc", 2487, 1598),(struct sFun*)come_increment_ref_count(fun_162, "07function.nc", 2487, 1599),(_Bool)0);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 2490, 1603, "struct sNode");
            _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "07function.nc", 2490, 1600, "struct sFunNode* "), "07function.nc", 2490, 1601),(struct sFun*)come_increment_ref_count(fun_162, "07function.nc", 2490, 1602),info))), "07function.nc", 2490, 1604);
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sFunNode_finalize;
            _inf_value6->clone=(void*)sFunNode_clone;
            _inf_value6->compile=(void*)sFunNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sFunNode_kind;
            _inf_value6->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "07function.nc", 2490, 1605);
            (generics_sname_157 = come_decrement_ref_count(generics_sname_157, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1606));
            (block_159 = come_decrement_ref_count(block_159, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1607));
            come_call_finalizer(sFun_finalize, fun_162, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2490, 1608);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1609));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1610));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1611));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1612));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2490, 1613);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1614));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1615));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1616));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2490, 1617);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2490, 1618);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2490, 1619);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2490, 1620);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1621));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2490, 1622));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2490, 1623);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2490, 1624):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2490, 1625):(void*)0);
            return __result_obj__0;
            (generics_sname_157 = come_decrement_ref_count(generics_sname_157, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2513, 1626));
            (block_159 = come_decrement_ref_count(block_159, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2513, 1627));
            come_call_finalizer(sFun_finalize, fun_162, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2513, 1628);
        }
        else {
            __right_value0 = (void*)0;
            block_163=(struct sBlock* )come_increment_ref_count(parse_block(info,constructor_,(_Bool)1), "07function.nc", 2493, 1629);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            fun_164=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 2495, 1630, "struct sFun* "), "07function.nc", 2500, 1631),(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2495), "07function.nc", 2500, 1632),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2500, 1633),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2500, 1634),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2500, 1635),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2500, 1636),(_Bool)0,var_args,(struct sBlock* )come_increment_ref_count(sBlock_clone(block_163), "07function.nc", 2500, 1637),static_fun,info,inline_fun,uniq_fun,(char* )come_increment_ref_count(fun_attribute_prefix, "07function.nc", 2500, 1638),(char* )come_increment_ref_count(fun_attribute, "07function.nc", 2500, 1639),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "07function.nc", 2500, 1640)), "07function.nc", 2500, 1641);
            __dec_obj161=fun_164->mMiddleAttribute,
            fun_164->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "07function.nc", 2501, 1643);
            __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2501, 1642);
            if(info->in_class) {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2505), "07function.nc", 2505, 1644),(struct sFun*)come_increment_ref_count(fun_164, "07function.nc", 2505, 1645),(_Bool)0);
            }
            else {
                __right_value0 = (void*)0;
                map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2508), "07function.nc", 2508, 1646),(struct sFun*)come_increment_ref_count(fun_164, "07function.nc", 2508, 1647),(_Bool)0);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 2511, 1651, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "07function.nc", 2511, 1648, "struct sFunNode* "), "07function.nc", 2511, 1649),(struct sFun*)come_increment_ref_count(fun_164, "07function.nc", 2511, 1650),info))), "07function.nc", 2511, 1652);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)), "07function.nc", 2511, 1653);
            come_call_finalizer(sBlock_finalize, block_163, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2511, 1654);
            come_call_finalizer(sFun_finalize, fun_164, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2511, 1655);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1656));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1657));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1658));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1659));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2511, 1660);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1661));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1662));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1663));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2511, 1664);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2511, 1665);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2511, 1666);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2511, 1667);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1668));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2511, 1669));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2511, 1670);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2511, 1671):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2511, 1672):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sBlock_finalize, block_163, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2513, 1673);
            come_call_finalizer(sFun_finalize, fun_164, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2513, 1674);
        }
    }
    else if(xisalpha(*info->p->p)||*info->p->p==95||*info->p->p==59) {
        if(version>0) {
            __right_value0 = (void*)0;
            new_fun_name_165=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name,version), "07function.nc", 2516, 1675);
            __right_value0 = (void*)0;
            __dec_obj162=fun_name,
            fun_name=(char* )come_increment_ref_count(__builtin_string(new_fun_name_165,"07function.nc",2517), "07function.nc", 2517, 1677);
            __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2517, 1676);
            (new_fun_name_165 = come_decrement_ref_count(new_fun_name_165, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2520, 1678));
        }
        if(*info->p->p==59) {
            info->p->p++;
            skip_spaces_and_lf(info);
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_166=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 2528, 1679, "struct sFun* "), "07function.nc", 2534, 1681),(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2528), "07function.nc", 2534, 1682),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2534, 1683),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2534, 1684),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2534, 1685),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2534, 1686),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(char* )come_increment_ref_count(fun_attribute_prefix, "07function.nc", 2534, 1687),(char* )come_increment_ref_count(fun_attribute, "07function.nc", 2534, 1688),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char* )come_increment_ref_count(asm_fun2, "07function.nc", 2534, 1680)), "07function.nc", 2534, 1689);
            __dec_obj163=fun_166->mMiddleAttribute,
            fun_166->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "07function.nc", 2535, 1691);
            __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2535, 1690);
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2537), "07function.nc", 2537, 1692),(struct sFun*)come_increment_ref_count(fun_166, "07function.nc", 2537, 1693),(_Bool)0);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 2539, 1697, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "07function.nc", 2539, 1694, "struct sFunNode* "), "07function.nc", 2539, 1695),(struct sFun*)come_increment_ref_count(fun_166, "07function.nc", 2539, 1696),info))), "07function.nc", 2539, 1698);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "07function.nc", 2539, 1699);
            come_call_finalizer(sFun_finalize, fun_166, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2539, 1700);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1701));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1702));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1703));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1704));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2539, 1705);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1706));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1707));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1708));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2539, 1709);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2539, 1710);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2539, 1711);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2539, 1712);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1713));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2539, 1714));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2539, 1715);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2539, 1716):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2539, 1717):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sFun_finalize, fun_166, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2575, 1718);
        }
        else {
            __right_value0 = (void*)0;
            multiple_assign_var15=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_function_attribute(info)));
            asm_fun_167=(char* )come_increment_ref_count(multiple_assign_var15->v1, "07function.nc", 2542, 1719);
            fun_attribute2_168=(char* )come_increment_ref_count(multiple_assign_var15->v2, "07function.nc", 2542, 1720);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2542, 1721);
            if(string_operator_not_equals(fun_attribute2_168,"")) {
                if(string_operator_not_equals(fun_attribute,"")) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj164=fun_attribute,
                    fun_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(fun_attribute," "))),fun_attribute2_168), "07function.nc", 2552, 1723);
                    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2552, 1722);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07function.nc", 2552, 1724));
                }
                else {
                    __dec_obj165=fun_attribute,
                    fun_attribute=(char* )come_increment_ref_count(fun_attribute2_168, "07function.nc", 2555, 1726);
                    __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2555, 1725);
                }
            }
            result_type->mStatic=(_Bool)0;
            result_type->mUniq=(_Bool)0;
            result_type->mInline=(_Bool)0;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            fun_169=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "07function.nc", 2563, 1727, "struct sFun* "), "07function.nc", 2568, 1729),(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2563), "07function.nc", 2568, 1730),(struct sType* )come_increment_ref_count(result_type, "07function.nc", 2568, 1731),(struct list$1sType$ph*)come_increment_ref_count(param_types, "07function.nc", 2568, 1732),(struct list$1char$ph*)come_increment_ref_count(param_names, "07function.nc", 2568, 1733),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "07function.nc", 2568, 1734),(_Bool)1,var_args,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(char* )come_increment_ref_count(fun_attribute_prefix, "07function.nc", 2568, 1735),(char* )come_increment_ref_count(fun_attribute, "07function.nc", 2568, 1736),const_fun,((void*)0),((void*)0),0,(_Bool)0,(char* )come_increment_ref_count(asm_fun_167, "07function.nc", 2568, 1728)), "07function.nc", 2568, 1737);
            __dec_obj166=fun_169->mMiddleAttribute,
            fun_169->mMiddleAttribute=(char* )come_increment_ref_count(fun_attribute_middle, "07function.nc", 2569, 1739);
            __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0, (void*)0, "07function.nc", 2569, 1738);
            __right_value0 = (void*)0;
            map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"07function.nc",2571), "07function.nc", 2571, 1740),(struct sFun*)come_increment_ref_count(fun_169, "07function.nc", 2571, 1741),(_Bool)0);
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07function.nc", 2573, 1745, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "07function.nc", 2573, 1742, "struct sFunNode* "), "07function.nc", 2573, 1743),(struct sFun*)come_increment_ref_count(fun_169, "07function.nc", 2573, 1744),info))), "07function.nc", 2573, 1746);
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            _inf_value9->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "07function.nc", 2573, 1747);
            (asm_fun_167 = come_decrement_ref_count(asm_fun_167, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1748));
            (fun_attribute2_168 = come_decrement_ref_count(fun_attribute2_168, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1749));
            come_call_finalizer(sFun_finalize, fun_169, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2573, 1750);
            (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1751));
            (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1752));
            (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1753));
            (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1754));
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2573, 1755);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1756));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1757));
            (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1758));
            come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2573, 1759);
            come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2573, 1760);
            come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2573, 1761);
            come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2573, 1762);
            (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1763));
            (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2573, 1764));
            come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "07function.nc}", 2573, 1765);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "07function.nc", 2573, 1766):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2573, 1767):(void*)0);
            return __result_obj__0;
            (asm_fun_167 = come_decrement_ref_count(asm_fun_167, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2575, 1768));
            (fun_attribute2_168 = come_decrement_ref_count(fun_attribute2_168, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2575, 1769));
            come_call_finalizer(sFun_finalize, fun_169, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2575, 1770);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)",*info->p->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level;
        __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "07function.nc", 2585, 1771);
    (asm_fun = come_decrement_ref_count(asm_fun, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1772));
    (fun_attribute_prefix = come_decrement_ref_count(fun_attribute_prefix, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1773));
    (fun_attribute = come_decrement_ref_count(fun_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1774));
    (fun_attribute_middle = come_decrement_ref_count(fun_attribute_middle, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1775));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2585, 1776);
    (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1777));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1778));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1779));
    come_call_finalizer(sType_finalize, obj_type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2585, 1780);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2585, 1781);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2585, 1782);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07function.nc}", 2585, 1783);
    (asm_fun2 = come_decrement_ref_count(asm_fun2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1784));
    (fun_attribute2 = come_decrement_ref_count(fun_attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "07function.nc", 2585, 1785));
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "07function.nc", 2585, 1786):(void*)0);
    return __result_obj__0;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 2, 1300);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 3, 1301);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 4, 1302);
    }
        neo_current_frame = fr.prev;
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLambdaNode_clone"; neo_current_frame = &fr;
    struct sLambdaNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLambdaNode*  result  ;
    char*  __dec_obj152  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sLambdaNode* )come_increment_ref_count((struct sLambdaNode *)come_calloc(1, sizeof(struct sLambdaNode )*(1), "sLambdaNode_clone", 5, 1336, "struct sLambdaNode* "), "sLambdaNode_clone", 5, 1337);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj152=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLambdaNode_clone", 7, 1338, "char* "), "sLambdaNode_clone", 7, 1340);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "sLambdaNode_clone", 7, 1339);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->mFun=self->mFun;
    }
        __result_obj__0 = result;
    come_call_finalizer(sLambdaNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLambdaNode_clone}", 10, 1341);
    neo_current_frame = fr.prev;
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
    return self->len;
        neo_current_frame = fr.prev;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3348, 1385));
        come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3348, 1396);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3364, 1426));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3365, 1427);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3372, 1428);
                    self->items[it]=(struct sGenericsFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3373, 1429);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3395, 1430);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sGenericsFun* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3401, 1431);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3421, 1432));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3424, 1433));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3424, 1434);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 1386);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 1387);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 1388);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 1389));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 1390);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 1391);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 1392);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 1393);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 1394));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 1395));
    }
            neo_current_frame = fr.prev;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sGenericsFun**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  it2  ;
    unsigned int hash;
    int n;
    struct sGenericsFun*  default_value_146  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 1397, "char** "))), "/usr/local/include/neo-c.h", 3272, 1398);
    __right_value0 = (void*)0;
    items=(struct sGenericsFun** )come_increment_ref_count(((struct sGenericsFun** )(__right_value0=(struct sGenericsFun* *)come_calloc(1, sizeof(struct sGenericsFun* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 1399, "struct sGenericsFun** "))), "/usr/local/include/neo-c.h", 3273, 1400);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 1401, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 1402);
    len=0;
    for(it=map$2char$phsGenericsFun$ph_begin(self)    ;!map$2char$phsGenericsFun$ph_end(self);it=map$2char$phsGenericsFun$ph_next(self)){
        memset(&default_value,0,sizeof(struct sGenericsFun* ));
        __right_value0 = (void*)0;
        it2=(struct sGenericsFun* )come_increment_ref_count(map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 1418),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 1419);
        hash=string_get_hash_key(((char* )it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_146,0,sizeof(struct sGenericsFun* ));
                __right_value0 = (void*)0;
                items[n]=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(self,it,(struct sGenericsFun* )come_increment_ref_count(default_value_146, "/usr/local/include/neo-c.h", 3304, 1420),(_Bool)0)));
                len++;
                come_call_finalizer(sGenericsFun_finalize, default_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 1421);
                break;
                come_call_finalizer(sGenericsFun_finalize, default_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3309, 1422);
            }
        }
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1423);
        come_call_finalizer(sGenericsFun_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1424);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 1425));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_144  ;
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
    memset(&result_144,0,sizeof(char* ));
        __result_obj__0 = result_144;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_145  ;
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
    memset(&result_145,0,sizeof(char* ));
        __result_obj__0 = result_145;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 1403);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1404);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1405);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 1406);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1407);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1408);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 1409);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1410);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1411);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 1412);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1413);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1414);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 1415);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1416);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1417);
    return __result_obj__0;
}

