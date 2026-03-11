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

struct sNewNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
};

struct sDeferNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sBlock*  block  ;
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

struct sHeapSizeOfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  type  ;
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

struct sDynamicSizeOfExpNode
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

struct sRefNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct sOptionalNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* node;
};

struct tuple2$2sNode$phsNode$ph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct sSpanNode
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
struct sDeferNode* sDeferNode_initialize(struct sDeferNode* self, struct sBlock*  block  , struct sInfo*  info  );
char*  sDeferNode_kind(struct sDeferNode* self);
_Bool sDeferNode_compile(struct sDeferNode* self, struct sInfo*  info  );
static void sDeferNode_finalize(struct sDeferNode* self);
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
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
struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  );
char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self);
_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  );
static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self);
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
struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  );
char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self);
_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  );
static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self);
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
struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  );
char*  sRefNode_kind(struct sRefNode* self);
_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  );
static void sRefNode_finalize(struct sRefNode* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  );
char*  sOptionalNode_kind(struct sOptionalNode* self);
_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  );
static void sOptionalNode_finalize(struct sOptionalNode* self);
static _Bool is_buffer_like_type(struct sType*  type  );
struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  );
static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self);
static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  );
char*  sSpanNode_kind(struct sSpanNode* self);
_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  );
static void sSpanNode_finalize(struct sSpanNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
static struct sDeferNode* sDeferNode_clone(struct sDeferNode* self);
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
static struct sVar*  sVar_clone(struct sVar*  self  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
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
static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self);
static struct sRefNode* sRefNode_clone(struct sRefNode* self);
static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self);
static struct sGeneric* sGeneric_clone(struct sGeneric* self);
static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj35  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj36;
    struct sNode* __dec_obj37;
    struct sNewNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNewNode*)come_increment_ref_count(self, "40obj2.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 7, 3);
    __right_value0 = (void*)0;
    __dec_obj35=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 9, 210);
    come_call_finalizer(sType_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 9, 209);
    __dec_obj36=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer, "40obj2.nc", 10, 216);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 10, 215);
    __dec_obj37=self->initializer_num,
    self->initializer_num=(struct sNode*)come_increment_ref_count(initializer_num, "40obj2.nc", 11, 218);
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 11, 217) :0);
        __result_obj__0 = (struct sNewNode*)come_increment_ref_count(self, "40obj2.nc", 14, 219);
    come_call_finalizer(sNewNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 14, 225);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 14, 226);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 14, 227):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNewNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 14, 228);
    return __result_obj__0;
}

char*  sNewNode_kind(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNewNode","40obj2.nc",16))), "40obj2.nc", 16, 229);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 16, 230));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 16, 231));
    return __result_obj__0;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    struct sNode* initializer_num;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct buffer*  num_string  ;
    struct list$1sNode$ph* _o2_saved_3;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  cvalue  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    struct list$1sNode$ph* __dec_obj38;
    char*  type_name  ;
    char*  type_name2  ;
    char*  var_name  ;
    struct sType*  type3  ;
    char*  type_name3  ;
    struct buffer*  buf  ;
    char*  obj  ;
    void* __right_value2 = (void*)0;
    _Bool _conditional_value_X0;
    char*  __dec_obj39  ;
    char*  __dec_obj40  ;
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
    char*  __dec_obj41  ;
    struct sType*  __dec_obj42  ;
    char*  var_name_15  ;
    struct sType*  type3_16  ;
    char*  type_name3_17  ;
    struct buffer*  buf_18  ;
    char*  obj_19  ;
    _Bool _conditional_value_X1;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    struct sClass*  klass_20  ;
    int i;
    struct list$1tuple2$2char$phsNode$ph$ph* _o2_saved_4;
    struct tuple2$2char$phsNode$ph* it_22;
    struct tuple2$2char$phsNode$ph* multiple_assign_var1
;    char*  name  =0;
    struct sNode* exp=0;
    _Bool Value_24;
    struct CVALUE*  come_value2_25  ;
    struct sType*  left_type  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_5;
    struct tuple2$2char$phsType$ph* it2;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  field_name  =0;
    struct sType*  field_type  =0;
    struct sType*  __dec_obj48  ;
    struct sType*  right_type  ;
    struct sType*  __dec_obj49  ;
    char*  c_value  ;
    char*  __dec_obj50  ;
    struct sType*  __dec_obj51  ;
    struct sType*  type3_28  ;
    char*  type_name3_29  ;
    _Bool _conditional_value_X2;
    char*  __dec_obj52  ;
    char*  __dec_obj53  ;
    struct sType*  __dec_obj54  ;
    memset(&obj, 0, sizeof(obj));
    memset(&obj_19, 0, sizeof(obj_19));
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 21, 232);
    initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer, "40obj2.nc", 22, 233);
    initializer_num=(struct sNode*)come_increment_ref_count(self->initializer_num, "40obj2.nc", 23, 234);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 25, 235, "struct CVALUE* "), "40obj2.nc", 25, 236)), "40obj2.nc", 25, 237);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    num_string=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "40obj2.nc", 27, 238, "struct buffer* "), "40obj2.nc", 27, 239)), "40obj2.nc", 27, 240);
    buffer_append_str(num_string,"1");
    for(_o2_saved_3=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum, "40obj2.nc", 31, 241),it=list$1sNode$ph_begin(_o2_saved_3)    ;!list$1sNode$ph_end(_o2_saved_3);it=list$1sNode$ph_next(_o2_saved_3)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 33, 242);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 33, 243);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 33, 244):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 33, 250);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 33, 251);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 33, 252);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 36, 253);
        buffer_append_format(num_string,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 41, 254);
    }
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 41, 255);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 42, 256);
    __right_value0 = (void*)0;
    __dec_obj38=type2->mHeapArrayNum,
    type2->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(type2->mArrayNum), "40obj2.nc", 44, 258);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 44, 257);
    list$1sNode$ph_reset(type2->mArrayNum);
    type2->mNew=(_Bool)1;
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)1,(_Bool)0,(_Bool)0), "40obj2.nc", 48, 260);
    __right_value0 = (void*)0;
    type_name2=(char* )come_increment_ref_count(make_come_type_name_string(type2,info), "40obj2.nc", 50, 261);
    if(initializer_num) {
        static int var_num=1;
        var_num++;
        __right_value0 = (void*)0;
        var_name=(char* )come_increment_ref_count(xsprintf("__new_num__%d",var_num), "40obj2.nc", 56, 262);
        __right_value0 = (void*)0;
        type3=(struct sType* )come_increment_ref_count(sType_clone(type2), "40obj2.nc", 58, 263);
        type3->mPointerNum++;
        if(type3->mNoSolvedGenericsType) {
            type3->mNoSolvedGenericsType->mPointerNum++;
        }
        __right_value0 = (void*)0;
        type_name3=(char* )come_increment_ref_count(make_type_name_string(type3,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 64, 264);
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3,var_name,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 66, 265));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "40obj2.nc", 68, 266, "struct buffer* "), "40obj2.nc", 68, 267)), "40obj2.nc", 68, 268);
        buffer_append_str(buf,"({");
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 73, 325));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 73, 326);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj39=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3), "40obj2.nc", 74, 328);
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 74, 327);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 74, 329));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj40=obj,
            obj=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3), "40obj2.nc", 77, 331);
            __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 77, 330);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 77, 332));
        }
        buffer_append_str(buf,obj);
        buffer_append_str(buf,";");
        klass=type3->mClass;
        Value_10=node_compile(initializer_num,info);
        if(!Value_10) {
                        __result_obj__0 = (_Bool)0;
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 86, 333));
            come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 334);
            (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 86, 335));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 336);
            (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 86, 337));
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 338);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 339);
            ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 86, 340):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 341);
            come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 342);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 343);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 344);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 86, 345);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 86, 346));
            (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 86, 347));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 89, 348);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        buffer_append_str(buf,((char* )(__right_value14=string_operator_add(((char* )(__right_value13=string_operator_add(((char* )(__right_value12=string_operator_add(((char* )(__right_value11=charp_operator_add("*",var_name))),"= "))),come_value2->c_value))),";"))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 349));
        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 350));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 351));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 352));
        (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 353));
        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 354));
        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 355));
        (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 91, 356));
        buffer_append_str(buf,var_name);
        buffer_append_str(buf,"; })");
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_11=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 96, 357, "struct CVALUE* "), "40obj2.nc", 96, 358)), "40obj2.nc", 96, 359);
        __right_value0 = (void*)0;
        __dec_obj41=come_value_11->c_value,
        come_value_11->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "40obj2.nc", 98, 361);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 98, 360);
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj42=come_value_11->type,
        come_value_11->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "40obj2.nc", 108, 363);
        come_call_finalizer(sType_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 108, 362);
        come_value_11->var=((void*)0);
        append_object_to_right_values(come_value_11,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_11->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_11, "40obj2.nc", 115, 378));
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 379));
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 380);
        (type_name3 = come_decrement_ref_count(type_name3, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 381));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 382);
        (obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 383));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 384);
        come_call_finalizer(CVALUE_finalize, come_value_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 385);
    }
    else if(initializer) {
        static int var_num_14=1;
        var_num_14++;
        __right_value0 = (void*)0;
        var_name_15=(char* )come_increment_ref_count(xsprintf("__new_obj__%d",var_num_14), "40obj2.nc", 121, 386);
        __right_value0 = (void*)0;
        type3_16=(struct sType* )come_increment_ref_count(sType_clone(type2), "40obj2.nc", 123, 387);
        type3_16->mPointerNum++;
        if(type3_16->mNoSolvedGenericsType) {
            type3_16->mNoSolvedGenericsType->mPointerNum++;
        }
        __right_value0 = (void*)0;
        type_name3_17=(char* )come_increment_ref_count(make_type_name_string(type3_16,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 129, 388);
        __right_value0 = (void*)0;
        add_come_code_at_function_head(info,"%s;\n",((char* )(__right_value0=make_define_var(type3_16,var_name_15,info,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 131, 389));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_18=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "40obj2.nc", 133, 390, "struct buffer* "), "40obj2.nc", 133, 391)), "40obj2.nc", 133, 392);
        buffer_append_str(buf_18,"({");
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X1=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 138, 393));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 138, 394);
_conditional_value_X1;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj46=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_17), "40obj2.nc", 139, 396);
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 139, 395);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 139, 397));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj47=obj_19,
            obj_19=(char* )come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",var_name_15,type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_17), "40obj2.nc", 142, 399);
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 142, 398);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 142, 400));
        }
        buffer_append_str(buf_18,obj_19);
        buffer_append_str(buf_18,";");
        klass_20=type3_16->mClass;
        i=0;
        for(_o2_saved_4=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer, "40obj2.nc", 151, 401),it_22=list$1tuple2$2char$phsNode$ph$ph_begin(_o2_saved_4)        ;!list$1tuple2$2char$phsNode$ph$ph_end(_o2_saved_4);it_22=list$1tuple2$2char$phsNode$ph$ph_next(_o2_saved_4)){
            multiple_assign_var1=it_22;
            name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "40obj2.nc", 152, 402);
            exp=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2, "40obj2.nc", 152, 403);
            Value_24=node_compile(exp,info);
            if(!Value_24) {
                                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 155, 404));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 155, 405):(void*)0);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 155, 406));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 407);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 155, 408));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 409);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 155, 410));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 411);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 412);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 413);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 155, 414):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 415);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 416);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 417);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 418);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 155, 419);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 155, 420));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 155, 421));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value2_25=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 158, 422);
            left_type=((void*)0);
            for(_o2_saved_5=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass_20->mFields, "40obj2.nc", 161, 423),it2=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_5)            ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_5);it2=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_5)){
                multiple_assign_var2=it2;
                field_name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "40obj2.nc", 162, 424);
                field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "40obj2.nc", 162, 425);
                if(string_operator_equals(name,field_name)) {
                    __right_value0 = (void*)0;
                    __dec_obj48=left_type,
                    left_type=(struct sType* )come_increment_ref_count(sType_clone(field_type), "40obj2.nc", 165, 427);
                    come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 165, 426);
                    (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 166, 428));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 166, 429);
                    break;
                }
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 170, 430));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 170, 431);
            }
            if(left_type==((void*)0)) {
                err_msg(info,"field %s is not defined",name);
                                __result_obj__0 = (_Bool)1;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 172, 432));
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 172, 433):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value2_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 434);
                come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 435);
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 440);
                (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 172, 441));
                come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 442);
                (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 172, 443));
                come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 444);
                (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 172, 445));
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 446);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 447);
                come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 448);
                ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 172, 449):(void*)0);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 450);
                come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 451);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 452);
                come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 453);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 172, 454);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 172, 455));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 172, 456));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            right_type=(struct sType* )come_increment_ref_count(come_value2_25->type, "40obj2.nc", 175, 457);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            check_assign_type(((char*)(__right_value1=xsprintf("\%s is assining to",((char* )(__right_value0=string_to_string(name)))))),left_type,right_type,come_value2_25,info);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 177, 458));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 177, 459));
            __dec_obj49=right_type,
            right_type=(struct sType* )come_increment_ref_count(come_value2_25->type, "40obj2.nc", 179, 461);
            come_call_finalizer(sType_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 179, 460);
            if(left_type->mHeap&&right_type->mHeap&&left_type->mPointerNum>0&&right_type->mPointerNum>0) {
                __right_value0 = (void*)0;
                c_value=(char* )come_increment_ref_count(increment_ref_count_object(left_type,come_value2_25->c_value,info), "40obj2.nc", 182, 462);
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,c_value);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 189, 463));
            }
            else {
                buffer_append_format(buf_18,"%s->%s = %s",var_name_15,name,come_value2_25->c_value);
            }
            buffer_append_str(buf_18,";");
            i++;
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 194, 464));
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 194, 465):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value2_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 194, 466);
            come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 194, 467);
            come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 194, 468);
            come_call_finalizer(sType_finalize, right_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 194, 469);
        }
        buffer_append_str(buf_18,var_name_15);
        buffer_append_str(buf_18,"; })");
        __right_value0 = (void*)0;
        __dec_obj50=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf_18), "40obj2.nc", 197, 471);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 197, 470);
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj51=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "40obj2.nc", 207, 473);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 207, 472);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 214, 474));
        (var_name_15 = come_decrement_ref_count(var_name_15, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 475));
        come_call_finalizer(sType_finalize, type3_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 476);
        (type_name3_17 = come_decrement_ref_count(type_name3_17, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 477));
        come_call_finalizer(buffer_finalize, buf_18, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 478);
        (obj_19 = come_decrement_ref_count(obj_19, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 479));
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 480);
    }
    else {
        __right_value0 = (void*)0;
        type3_28=(struct sType* )come_increment_ref_count(sType_clone(type2), "40obj2.nc", 217, 481);
        type3_28->mPointerNum++;
        type3_28->mHeap=(_Bool)1;
        if(type3_28->mNoSolvedGenericsType) {
            type3_28->mNoSolvedGenericsType->mPointerNum++;
            type3_28->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        type_name3_29=(char* )come_increment_ref_count(make_type_name_string(type3_28,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 226, 482);
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X2=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 228, 483));
        come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 228, 484);
_conditional_value_X2;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj52=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_29), "40obj2.nc", 229, 486);
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 229, 485);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 229, 487));
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj53=come_value->c_value,
            come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, %d, \"%s\")",type_name,type_name,((char* )(__right_value0=buffer_to_string(num_string))),info->sname,info->sline,++info->id,type_name3_29), "40obj2.nc", 232, 489);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 232, 488);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 232, 490));
        }
        type2->mHeap=(_Bool)1;
        type2->mPointerNum++;
        if(type2->mNoSolvedGenericsType) {
            type2->mNoSolvedGenericsType->mPointerNum++;
            type2->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __right_value0 = (void*)0;
        __dec_obj54=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "40obj2.nc", 243, 492);
        come_call_finalizer(sType_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 243, 491);
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,type2,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 250, 493));
        come_call_finalizer(sType_finalize, type3_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 494);
        (type_name3_29 = come_decrement_ref_count(type_name3_29, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 495));
    }
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 496);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 497);
    ((initializer_num) ? initializer_num = come_decrement_ref_count(initializer_num, ((struct sNode*)initializer_num)->finalize, ((struct sNode*)initializer_num)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 253, 498):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 499);
    come_call_finalizer(buffer_finalize, num_string, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 500);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 501);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 502);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 253, 503);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 504));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 253, 505));
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
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 4, "struct sType* "), "sType_clone", 5, 5);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 39);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 38);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 41);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 40);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 71);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 70);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 73);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 72);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 82);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 81) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 84);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 83) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 85, "char* "), "sType_clone", 14, 87);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 86);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 88, "char* "), "sType_clone", 15, 90);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 89);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 91, "char* "), "sType_clone", 16, 93);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 92);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 94, "char* "), "sType_clone", 17, 96);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 95);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 97, "char* "), "sType_clone", 18, 99);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 98);
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
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 100, "char* "), "sType_clone", 49, 102);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 101);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 103, "char* "), "sType_clone", 51, 105);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 104);
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
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 106, "char* "), "sType_clone", 54, 108);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 107);
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
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 138);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 137);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 140);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 139);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 160);
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 159);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 162);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 161);
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
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 164);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 163);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 165, "char* "), "sType_clone", 67, 167);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 166);
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
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 169);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 168);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 201);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 200);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 203);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 202);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 205);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 204) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 207);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 206);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 208);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 6);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 7);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 10);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 11);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 12):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 13):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 14));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 15));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 16));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 17));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 18));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 19));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 20));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 21));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 24);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 25);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 27);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 28);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 29);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 30));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 31);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 34);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 35);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 36):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 37);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 9);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 8);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 23);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 22):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 26);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 33);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 32));
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 42);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 43);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 44, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 48)), "/usr/local/include/neo-c.h", 1513, 49);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 64));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 65));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 66);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 67);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 68);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 45);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 46);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 47);
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
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 50);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 51, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 52);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 54);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 53);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 55, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 56);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 58);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 57);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 59, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 60);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 62);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 61);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 63);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 69);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 74);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 75):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 76, "struct sNode*"), "sNode_clone", 5, 77);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 78);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 79):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 80):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 109);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 110);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 111, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 115)), "/usr/local/include/neo-c.h", 1513, 116);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 131));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 132));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 133);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 134);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 135);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 112);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 113);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 114);
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
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 117):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 118, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 119);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 121);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 120) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 122, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 123);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj19=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 125);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 124) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 126, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 127);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj20=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 129);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 128) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 130):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 136);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 141);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 142);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 143, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 147)), "/usr/local/include/neo-c.h", 1513, 148);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 155);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 156);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 157);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 144);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 145);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 146);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 149, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 150);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 151, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 152);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 153, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 154);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 158);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 170);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 171);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 172, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 176)), "/usr/local/include/neo-c.h", 1513, 177);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 192, "char* "), "/usr/local/include/neo-c.h", 1518, 193));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 194, "char* "), "/usr/local/include/neo-c.h", 1521, 195));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 196);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 198);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 173);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 174);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 175);
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
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 178));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 179, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 180);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 182);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 181);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 183, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 184);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 186);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 185);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 187, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 188);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 190);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 189);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 191));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 199);
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 214);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 213);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 211));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 212):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void sNewNode_finalize(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNewNode_finalize", 2, 220));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_finalize}", 3, 221);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self->initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_finalize}", 4, 223);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        ((self->initializer_num) ? self->initializer_num = come_decrement_ref_count(self->initializer_num, ((struct sNode*)self->initializer_num)->finalize, ((struct sNode*)self->initializer_num)->_protocol_obj, 0, 0,(void*)0, "sNewNode_finalize", 5, 224):(void*)0);
    }
        neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 222);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 245));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 246);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 247));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 248));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 249));
    }
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 259);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 269);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 296);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 297);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 298);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 299);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 300);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 301);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 302);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 303);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 304);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 305);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 306);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 307);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 308);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 309);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 270));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 271);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 272);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 273);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 274);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 275);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 282);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 285);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 286));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 287));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 288);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 289);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 290);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 291);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 292));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 293));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 294));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 295));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 281);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 280);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 276));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 277));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 278);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 279));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 283);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 284);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 310);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 311);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 312);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 313);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 314);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 315);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 316);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 317);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 318);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 319);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 320);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 321);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 322);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 323);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 324);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj43  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj44  ;
    struct list_item$1CVALUE$ph* litem_13;
    struct CVALUE*  __dec_obj45  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 364);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1619, 365, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1619, 366);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj43=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 368);
        come_call_finalizer(CVALUE_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 367);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1629, 369, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1629, 370);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        __dec_obj44=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 372);
        come_call_finalizer(CVALUE_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 371);
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "/usr/local/include/neo-c.h", 1639, 373, "struct list_item$1CVALUE$ph*"))), "/usr/local/include/neo-c.h", 1639, 374);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        __dec_obj45=litem_13->item,
        litem_13->item=(struct CVALUE* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 376);
        come_call_finalizer(CVALUE_finalize, __dec_obj45,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 375);
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 377);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* result;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    struct tuple2$2char$phsNode$ph* result_21;
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
    memset(&result_21,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_21;
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
    struct tuple2$2char$phsNode$ph* result_23;
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
    memset(&result_23,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__0 = result_23;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_26;
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
    memset(&result_26,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_26;
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
    struct tuple2$2char$phsType$ph* result_27;
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
    memset(&result_27,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_27;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 439);
    }
                    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 438);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 436));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 437);
    }
            neo_current_frame = fr.prev;
}

struct sDeferNode* sDeferNode_initialize(struct sDeferNode* self, struct sBlock*  block  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sBlock*  __dec_obj55  ;
    struct sDeferNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDeferNode*)come_increment_ref_count(self, "40obj2.nc", 261, 506),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 261, 507);
    __dec_obj55=self->block,
    self->block=(struct sBlock* )come_increment_ref_count(block, "40obj2.nc", 263, 509);
    come_call_finalizer(sBlock_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 263, 508);
        __result_obj__0 = (struct sDeferNode*)come_increment_ref_count(self, "40obj2.nc", 266, 510);
    come_call_finalizer(sDeferNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 266, 513);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 266, 514);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDeferNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 266, 515);
    return __result_obj__0;
}

char*  sDeferNode_kind(struct sDeferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDeferNode","40obj2.nc",268))), "40obj2.nc", 268, 516);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 268, 517));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 268, 518));
    return __result_obj__0;
}

_Bool sDeferNode_compile(struct sDeferNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_compile"; neo_current_frame = &fr;
    struct sBlock*  block  ;
    _Bool defer_block;
    _Bool __result_obj__0;
    block=(struct sBlock* )come_increment_ref_count(self->block, "40obj2.nc", 273, 519);
    defer_block=info->defer_block;
    info->defer_block=(_Bool)1;
    transpile_block(block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    info->defer_block=defer_block;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 282, 520);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDeferNode_finalize(struct sDeferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDeferNode_finalize", 2, 511));
    }
    if(self!=((void*)0)&&self->block!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sDeferNode_finalize}", 3, 512);
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_new_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNewNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 289, 523, "struct sNode");
    _inf_obj_value1=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "40obj2.nc", 289, 521, "struct sNewNode* "), "40obj2.nc", 289, 522),type,((void*)0),((void*)0),info))), "40obj2.nc", 289, 524);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "40obj2.nc", 289, 578);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 289, 579);
    come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 289, 580);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 289, 581):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 289, 582):(void*)0);
    return __result_obj__0;
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNewNode_clone"; neo_current_frame = &fr;
    struct sNewNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNewNode*  result  ;
    char*  __dec_obj56  ;
    struct sType*  __dec_obj57  ;
    struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj63;
    struct sNode* __dec_obj64;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "sNewNode_clone", 5, 525, "struct sNewNode* "), "sNewNode_clone", 5, 526);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj56=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNewNode_clone", 7, 527, "char* "), "sNewNode_clone", 7, 529);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "sNewNode_clone", 7, 528);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj57=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sNewNode_clone", 9, 531);
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_clone", 9, 530);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->initializer,
        result->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer), "sNewNode_clone", 10, 574);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sNewNode_clone", 10, 573);
    }
    if(self!=((void*)0)&&self->initializer_num!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj64=result->initializer_num,
        result->initializer_num=(struct sNode*)come_increment_ref_count(sNode_clone(self->initializer_num), "sNewNode_clone", 11, 576);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0, (void*)0, "sNewNode_clone", 11, 575) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sNewNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNewNode_clone}", 12, 577);
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
                __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 532);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 533);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1513, 534, "struct list$1tuple2$2char$phsNode$ph$ph*"), "/usr/local/include/neo-c.h", 1513, 538)), "/usr/local/include/neo-c.h", 1513, 539);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1518, 568));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phsNode$ph$ph_add(result,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it->item), "/usr/local/include/neo-c.h", 1521, 569));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 570);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 571);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 572);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 535);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 536);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 537);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj58;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_30;
    struct tuple2$2char$phsNode$ph* __dec_obj59;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_31;
    struct tuple2$2char$phsNode$ph* __dec_obj60;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 540);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1534, 541, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1534, 542);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj58=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 544);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 543);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1544, 545, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1544, 546);
        litem_30->prev=self->head;
        litem_30->next=((void*)0);
        __dec_obj59=litem_30->item,
        litem_30->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 548);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 547);
        self->tail=litem_30;
        self->head->next=litem_30;
    }
    else {
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "/usr/local/include/neo-c.h", 1554, 549, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "/usr/local/include/neo-c.h", 1554, 550);
        litem_31->prev=self->tail;
        litem_31->next=((void*)0);
        __dec_obj60=litem_31->item,
        litem_31->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 552);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 551);
        self->tail->next=litem_31;
        self->tail=litem_31;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 553);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsNode$ph* result;
    char*  __dec_obj61  ;
    struct sNode* __dec_obj62;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phsNode$ph_clone", 4, 554);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 4, 555);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 5, 556, "struct tuple2$2char$phsNode$ph*"), "tuple2$2char$phsNode$ph_clone", 5, 557);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj61=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 6, 558, "char* "), "tuple2$2char$phsNode$ph_clone", 6, 560);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 6, 559);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj62=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple2$2char$phsNode$ph_clone", 7, 562);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0, (void*)0, "tuple2$2char$phsNode$ph_clone", 7, 561) :0);
    }
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result, "tuple2$2char$phsNode$ph_clone", 8, 563);
    come_call_finalizer(tuple2$2char$phsNode$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 566);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phsNode$ph_clone}", 8, 567);
    return __result_obj__0;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph_finalize", 2, 564));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph_finalize", 3, 565):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType*  inf_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj65;
    struct sType*  __dec_obj66  ;
    struct sImplementsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sImplementsNode*)come_increment_ref_count(self, "40obj2.nc", 296, 583),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 296, 584);
    __right_value0 = (void*)0;
    __dec_obj65=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp), "40obj2.nc", 298, 586);
    (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 298, 585) :0);
    __right_value0 = (void*)0;
    __dec_obj66=self->inf_type,
    self->inf_type=(struct sType* )come_increment_ref_count(sType_clone(inf_type), "40obj2.nc", 299, 588);
    come_call_finalizer(sType_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 299, 587);
        __result_obj__0 = (struct sImplementsNode*)come_increment_ref_count(self, "40obj2.nc", 302, 589);
    come_call_finalizer(sImplementsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 302, 593);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 302, 594):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sImplementsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 302, 595);
    return __result_obj__0;
}

char*  sImplementsNode_kind(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sImplementsNode","40obj2.nc",304))), "40obj2.nc", 304, 596);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 304, 597));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 304, 598));
    return __result_obj__0;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_compile"; neo_current_frame = &fr;
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
    char*  __dec_obj67  ;
    struct sType*  type2_35  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var5
;    struct sFun*  fun2_36  =0;
    char*  real_fun_name_37  =0;
    char*  __dec_obj68  ;
    struct sClass*  klass2  ;
    char*  __dec_obj69  ;
    char*  __dec_obj70  ;
    struct sType*  type3  ;
    struct sType*  __dec_obj71  ;
    obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp), "40obj2.nc", 309, 599);
    __right_value0 = (void*)0;
    inf_type=(struct sType* )come_increment_ref_count(sType_clone(self->inf_type), "40obj2.nc", 310, 600);
    Value=node_compile(obj_exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 313, 601):(void*)0);
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 313, 602);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 316, 603);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "40obj2.nc", 318, 604);
    type->mPointerNum--;
    type->mHeap=(_Bool)0;
    klass=inf_type->mClass;
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 324, 605, "struct CVALUE* "), "40obj2.nc", 324, 606)), "40obj2.nc", 324, 607);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(sType_clone(inf_type), "40obj2.nc", 326, 608);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(inf_type,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "40obj2.nc", 328, 609);
    __right_value0 = (void*)0;
    type_name2=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0), "40obj2.nc", 329, 610);
    static int inf_num=0;
    ++inf_num;
    inf_num_stack=inf_num;
    __right_value0 = (void*)0;
    buf=(char* )come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name,inf_num_stack), "40obj2.nc", 335, 611);
    add_come_code_at_function_head(info,buf);
    __right_value0 = (void*)0;
    buf2=(char* )come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2,inf_num_stack), "40obj2.nc", 337, 612);
    add_come_code_at_function_head(info,buf2);
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(((struct sFun* )(__right_value2=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1=xsprintf("come_calloc_v2"))))))));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 340, 613));
    come_call_finalizer(sFun_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 340, 614);
_conditional_value_X0;})) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,++info->id,type_name);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, %d, \"%s\");\n",inf_num_stack,type_name,type_name,info->sname,info->sline,++info->id,type_name);
    }
    __right_value0 = (void*)0;
    c_value=(char* )come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info), "40obj2.nc", 347, 615);
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack,c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack,inf_num_stack);
    __right_value0 = (void*)0;
    typeX=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 351, 616);
    typeX->mPointerNum++;
    __right_value0 = (void*)0;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically(typeX,"finalize",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 354, 618);
    __right_value0 = (void*)0;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically(typeX,"clone",info)));
    come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 355, 619);
    for(i=1    ;i<list$1tuple2$2char$phsType$ph$ph_length(klass->mFields);i++){
        __right_value0 = (void*)0;
        multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass->mFields,i)));
        name=(char* )come_increment_ref_count(multiple_assign_var3->v1, "40obj2.nc", 358, 638);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2, "40obj2.nc", 358, 639);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 358, 640);
        __right_value0 = (void*)0;
        method_name=(char* )come_increment_ref_count(create_method_name(type,(_Bool)0,name,info,(_Bool)1), "40obj2.nc", 360, 641);
        __right_value0 = (void*)0;
        fun=((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,method_name,((void*)0),(_Bool)0)));
        if(fun==((void*)0)&&string_operator_equals(name,"to_string")) {
            __right_value0 = (void*)0;
            type2_34=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 365, 657);
            type2_34->mPointerNum++;
            if(require_explicit_method_in_low_memory_mode(type2_34,name,info)) {
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type2_34, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 658);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 369, 659));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 660);
                (method_name = come_decrement_ref_count(method_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 369, 661));
                ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 369, 662):(void*)0);
                come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 663);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 664);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 665);
                come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 666);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 667);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 369, 668));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 369, 669));
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 369, 670));
                (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 369, 671));
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 369, 672));
                come_call_finalizer(sType_finalize, typeX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 369, 673);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_to_string_automatically(type2_34,name,info)));
            fun2=multiple_assign_var4->v1;
            real_fun_name=(char* )come_increment_ref_count(multiple_assign_var4->v2, "40obj2.nc", 372, 674);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 372, 675);
            fun=fun2;
            __dec_obj67=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name, "40obj2.nc", 375, 677);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 375, 676);
            come_call_finalizer(sType_finalize, type2_34, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 377, 678);
            (real_fun_name = come_decrement_ref_count(real_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 377, 679));
        }
        if(fun==((void*)0)&&string_operator_equals(name,"equals")) {
            __right_value0 = (void*)0;
            type2_35=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 378, 680);
            type2_35->mPointerNum++;
            if(require_explicit_method_in_low_memory_mode(type2_35,name,info)) {
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type2_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 681);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 382, 682));
                come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 683);
                (method_name = come_decrement_ref_count(method_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 382, 684));
                ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 382, 685):(void*)0);
                come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 686);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 687);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 688);
                come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 689);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 690);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 382, 691));
                (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 382, 692));
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 382, 693));
                (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 382, 694));
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 382, 695));
                come_call_finalizer(sType_finalize, typeX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 382, 696);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_equals_automatically(type2_35,name,info)));
            fun2_36=multiple_assign_var5->v1;
            real_fun_name_37=(char* )come_increment_ref_count(multiple_assign_var5->v2, "40obj2.nc", 385, 697);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 385, 698);
            fun=fun2_36;
            __dec_obj68=method_name,
            method_name=(char* )come_increment_ref_count(real_fun_name_37, "40obj2.nc", 388, 700);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 388, 699);
            come_call_finalizer(sType_finalize, type2_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 391, 701);
            (real_fun_name_37 = come_decrement_ref_count(real_fun_name_37, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 391, 702));
        }
        if(fun==((void*)0)) {
            __right_value0 = (void*)0;
            klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type->mClass->mName)));
            while(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)))));            come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 393, 737);
_conditional_value_X0;})) {
                __right_value0 = (void*)0;
                klass2=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,klass2->mParentClassName)));
                __right_value0 = (void*)0;
                __dec_obj69=method_name,
                method_name=(char* )come_increment_ref_count(create_method_name_using_class(klass2,name,info), "40obj2.nc", 396, 739);
                __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 396, 738);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun=((struct sFun* )(__right_value1=map$2char$phsFun$ph_at(info->funcs,((char* )(__right_value0=__builtin_string(method_name,"40obj2.nc",398))),((void*)0),(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 398, 740));
                if(fun) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack,name,method_name);
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 412, 741));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 412, 742);
        (method_name = come_decrement_ref_count(method_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 412, 743));
    }
    __right_value0 = (void*)0;
    __dec_obj70=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack), "40obj2.nc", 412, 745);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 412, 744);
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(sType_clone(inf_type), "40obj2.nc", 414, 746);
    type3->mPointerNum++;
    type3->mHeap=(_Bool)1;
    type2->mHeap=(_Bool)1;
    __right_value0 = (void*)0;
    __dec_obj71=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(type2), "40obj2.nc", 419, 748);
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 419, 747);
    come_value2->type->mPointerNum++;
    come_value2->var=((void*)0);
    append_object_to_right_values(come_value2,type3,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 427, 749));
        __result_obj__0 = (_Bool)1;
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 429, 750):(void*)0);
    come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 429, 751);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 429, 752);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 429, 753);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 429, 754);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 429, 755);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 429, 756));
    (type_name2 = come_decrement_ref_count(type_name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 429, 757));
    (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 429, 758));
    (buf2 = come_decrement_ref_count(buf2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 429, 759));
    (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 429, 760));
    come_call_finalizer(sType_finalize, typeX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 429, 761);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 429, 762);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sImplementsNode_finalize(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sImplementsNode_finalize", 2, 590));
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0,(void*)0, "sImplementsNode_finalize", 3, 591):(void*)0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sImplementsNode_finalize}", 4, 592);
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 617));
    }
        neo_current_frame = fr.prev;
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

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_32;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 620);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 621);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 622);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 623);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 624);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 625);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_32,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_32, "/usr/local/include/neo-c.h", 2169, 626);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 627);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 628);
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_33;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 629);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 630);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 631);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 632);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 633);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 634);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_33,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_33, "/usr/local/include/neo-c.h", 2169, 635);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_33, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 636);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 637);
    return __result_obj__0;
}

static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_at"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 642);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 643);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 644);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 645);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 646);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 647);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 648);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 649);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 650);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 651);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 652);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 653);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 654);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 655);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 656);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 703);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 708);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 709);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 710);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 711);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 712);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 713);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 714);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 715);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 716);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 717);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 718);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 719);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 720);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 721);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 704));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 705);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 706));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 707));
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 722);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 723);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 724);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 725);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 726);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 727);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 728);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 729);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 730);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 731);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 732);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 733);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 734);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 735);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 736);
    return __result_obj__0;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sTrueNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTrueNode*)come_increment_ref_count(self, "40obj2.nc", 437, 763),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 437, 764);
        __result_obj__0 = (struct sTrueNode*)come_increment_ref_count(self, "40obj2.nc", 440, 765);
    come_call_finalizer(sTrueNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 440, 767);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTrueNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 440, 768);
    return __result_obj__0;
}

char*  sTrueNode_kind(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTrueNode","40obj2.nc",442))), "40obj2.nc", 442, 769);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 442, 770));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 442, 771));
    return __result_obj__0;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj72  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj73  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 447, 772, "struct CVALUE* "), "40obj2.nc", 447, 773)), "40obj2.nc", 447, 774);
    __right_value0 = (void*)0;
    __dec_obj72=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)1"), "40obj2.nc", 449, 776);
    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 449, 775);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj73=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 450, 777, "struct sType* "), "40obj2.nc", 450, 778),(char*)come_increment_ref_count(xsprintf("_Bool"), "40obj2.nc", 450, 779),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 450, 781);
    come_call_finalizer(sType_finalize, __dec_obj73,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 450, 780);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 455, 782));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 457, 783);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTrueNode_finalize(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTrueNode_finalize", 2, 766));
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_true_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_true_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sTrueNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 463, 786, "struct sNode");
    _inf_obj_value2=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "40obj2.nc", 463, 784, "struct sTrueNode* "), "40obj2.nc", 463, 785),info))), "40obj2.nc", 463, 787);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "40obj2.nc", 463, 794);
    come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 463, 795);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 463, 796):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 463, 797):(void*)0);
    return __result_obj__0;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTrueNode_clone"; neo_current_frame = &fr;
    struct sTrueNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sTrueNode*  result  ;
    char*  __dec_obj74  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "sTrueNode_clone", 5, 788, "struct sTrueNode* "), "sTrueNode_clone", 5, 789);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj74=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sTrueNode_clone", 7, 790, "char* "), "sTrueNode_clone", 7, 792);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "sTrueNode_clone", 7, 791);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sTrueNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sTrueNode_clone}", 9, 793);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sFalseNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sFalseNode*)come_increment_ref_count(self, "40obj2.nc", 470, 798),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 470, 799);
        __result_obj__0 = (struct sFalseNode*)come_increment_ref_count(self, "40obj2.nc", 473, 800);
    come_call_finalizer(sFalseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 473, 802);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFalseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 473, 803);
    return __result_obj__0;
}

char*  sFalseNode_kind(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sFalseNode","40obj2.nc",475))), "40obj2.nc", 475, 804);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 475, 805));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 475, 806));
    return __result_obj__0;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj75  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj76  ;
    _Bool __result_obj__0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 480, 807, "struct CVALUE* "), "40obj2.nc", 480, 808)), "40obj2.nc", 480, 809);
    __right_value0 = (void*)0;
    __dec_obj75=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(_Bool)0"), "40obj2.nc", 482, 811);
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 482, 810);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj76=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 483, 812, "struct sType* "), "40obj2.nc", 483, 813),(char*)come_increment_ref_count(xsprintf("_Bool"), "40obj2.nc", 483, 814),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 483, 816);
    come_call_finalizer(sType_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 483, 815);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 488, 817));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 490, 818);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFalseNode_finalize(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFalseNode_finalize", 2, 801));
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_false_object(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_false_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sFalseNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 496, 821, "struct sNode");
    _inf_obj_value3=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "40obj2.nc", 496, 819, "struct sFalseNode* "), "40obj2.nc", 496, 820),info))), "40obj2.nc", 496, 822);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "40obj2.nc", 496, 829);
    come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 496, 830);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 496, 831):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 496, 832):(void*)0);
    return __result_obj__0;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFalseNode_clone"; neo_current_frame = &fr;
    struct sFalseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFalseNode*  result  ;
    char*  __dec_obj77  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "sFalseNode_clone", 5, 823, "struct sFalseNode* "), "sFalseNode_clone", 5, 824);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj77=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFalseNode_clone", 7, 825, "char* "), "sFalseNode_clone", 7, 827);
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "sFalseNode_clone", 7, 826);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sFalseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFalseNode_clone}", 9, 828);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sGeneric* sGeneric_initialize(struct sGeneric* self, struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj78;
    struct list$1sType$ph* __dec_obj79;
    struct list$1sNode$ph* __dec_obj80;
    struct sNode* __dec_obj81;
    struct sGeneric* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGeneric*)come_increment_ref_count(self, "40obj2.nc", 503, 833),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 503, 834);
    __dec_obj78=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "40obj2.nc", 505, 836);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 505, 835) :0);
    __dec_obj79=self->types,
    self->types=(struct list$1sType$ph*)come_increment_ref_count(types, "40obj2.nc", 506, 838);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 506, 837);
    __dec_obj80=self->exps,
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(exps, "40obj2.nc", 507, 840);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 507, 839);
    __dec_obj81=self->default_exp,
    self->default_exp=(struct sNode*)come_increment_ref_count(default_exp, "40obj2.nc", 508, 842);
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 508, 841) :0);
        __result_obj__0 = (struct sGeneric*)come_increment_ref_count(self, "40obj2.nc", 511, 843);
    come_call_finalizer(sGeneric_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 511, 849);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 511, 850):(void*)0);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 511, 851);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 511, 852);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 511, 853):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGeneric_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 511, 854);
    return __result_obj__0;
}

char*  sGeneric_kind(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGeneric","40obj2.nc",513))), "40obj2.nc", 513, 855);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 513, 856));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 513, 857));
    return __result_obj__0;
}

_Bool sGeneric_compile(struct sGeneric* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_compile"; neo_current_frame = &fr;
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
    struct list$1sNode$ph* _o2_saved_6;
    struct sNode* it;
    struct sType*  type  ;
    _Bool Value_40;
    struct CVALUE*  come_value_41  ;
    struct sType*  __dec_obj82  ;
    _Bool Value_42;
    struct CVALUE*  come_value_43  ;
    int n_44;
    struct list$1sNode$ph* _o2_saved_7;
    struct sNode* it_45;
    struct sType*  type_46  ;
    _Bool Value_47;
    struct CVALUE*  come_value_48  ;
    struct sType*  __dec_obj83  ;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj84  ;
    struct sType*  __dec_obj85  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 518, 858);
    exps=(struct list$1sNode$ph*)come_increment_ref_count(self->exps, "40obj2.nc", 519, 859);
    types=(struct list$1sType$ph*)come_increment_ref_count(self->types, "40obj2.nc", 520, 860);
    default_exp=(struct sNode*)come_increment_ref_count(self->default_exp, "40obj2.nc", 521, 861);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "40obj2.nc", 523, 862, "struct buffer* "), "40obj2.nc", 523, 863)), "40obj2.nc", 523, 864);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 526, 865):(void*)0);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 526, 866);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 526, 867);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 526, 868):(void*)0);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 526, 869);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 528, 870);
    buffer_append_format(buf,"_Generic((%s), ",come_value->c_value);
    result_type=((void*)0);
    if(default_exp) {
        n=0;
        for(_o2_saved_6=(struct list$1sNode$ph*)come_increment_ref_count(exps, "40obj2.nc", 535, 871),it=list$1sNode$ph_begin(_o2_saved_6)        ;!list$1sNode$ph_end(_o2_saved_6);it=list$1sNode$ph_next(_o2_saved_6)){
            __right_value0 = (void*)0;
            type=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n), "40obj2.nc", 536, 890);
            Value_40=node_compile(it,info);
            if(!Value_40) {
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 539, 891);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 539, 892);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 539, 893):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 539, 894);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 539, 895);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 539, 896):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 539, 897);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 539, 898);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 539, 899);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_41=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 542, 900);
            __dec_obj82=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_41->type, "40obj2.nc", 544, 902);
            come_call_finalizer(sType_finalize, __dec_obj82,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 544, 901);
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_41->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 546, 903));
            buffer_append_format(buf,",");
            n++;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 553, 904);
            come_call_finalizer(CVALUE_finalize, come_value_41, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 553, 905);
        }
        Value_42=node_compile(default_exp,info);
        if(!Value_42) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 554, 906);
            ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 554, 907):(void*)0);
            come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 554, 908);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 554, 909);
            ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 554, 910):(void*)0);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 554, 911);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 554, 912);
            come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 554, 913);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        come_value_43=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 557, 914);
        buffer_append_format(buf,"default: %s",come_value_43->c_value);
        buffer_append_format(buf,")");
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 590, 915);
        come_call_finalizer(CVALUE_finalize, come_value_43, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 590, 916);
    }
    else {
        n_44=0;
        for(_o2_saved_7=(struct list$1sNode$ph*)come_increment_ref_count(exps, "40obj2.nc", 565, 917),it_45=list$1sNode$ph_begin(_o2_saved_7)        ;!list$1sNode$ph_end(_o2_saved_7);it_45=list$1sNode$ph_next(_o2_saved_7)){
            __right_value0 = (void*)0;
            type_46=(struct sType* )come_increment_ref_count(list$1sType$ph_operator_load_element(types,n_44), "40obj2.nc", 566, 918);
            Value_47=node_compile(it_45,info);
            if(!Value_47) {
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(sType_finalize, type_46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 569, 919);
                come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 569, 920);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 569, 921):(void*)0);
                come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 569, 922);
                come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 569, 923);
                ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 569, 924):(void*)0);
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 569, 925);
                come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 569, 926);
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 569, 927);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            come_value_48=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 572, 928);
            __dec_obj83=result_type,
            result_type=(struct sType* )come_increment_ref_count(come_value_48->type, "40obj2.nc", 574, 930);
            come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 574, 929);
            __right_value0 = (void*)0;
            buffer_append_format(buf,"%s: %s",((char* )(__right_value0=make_type_name_string(type_46,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),come_value_48->c_value);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 576, 931));
            if(n_44==list$1sNode$ph_length(exps)-1) {
                buffer_append_format(buf,")");
            }
            else {
                buffer_append_format(buf,",");
            }
            n_44++;
            come_call_finalizer(sType_finalize, type_46, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 587, 932);
            come_call_finalizer(CVALUE_finalize, come_value_48, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 587, 933);
        }
        come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 590, 934);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 590, 935, "struct CVALUE* "), "40obj2.nc", 590, 936)), "40obj2.nc", 590, 937);
    __right_value0 = (void*)0;
    __dec_obj84=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "40obj2.nc", 592, 939);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 592, 938);
    __dec_obj85=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(result_type, "40obj2.nc", 593, 941);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 593, 940);
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 598, 942));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 600, 943):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 600, 944);
    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 600, 945);
    ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 600, 946):(void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 600, 947);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 600, 948);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 600, 949);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 600, 950);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGeneric_finalize(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGeneric_finalize", 2, 844));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sGeneric_finalize", 3, 845):(void*)0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_finalize}", 4, 846);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_finalize}", 5, 847);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        ((self->default_exp) ? self->default_exp = come_decrement_ref_count(self->default_exp, ((struct sNode*)self->default_exp)->finalize, ((struct sNode*)self->default_exp)->_protocol_obj, 0, 0,(void*)0, "sGeneric_finalize", 6, 848):(void*)0);
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
    struct sType*  default_value_38  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 872);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 873);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 874);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 875);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 876);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 877);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_38,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_38, "/usr/local/include/neo-c.h", 2169, 878);
    come_call_finalizer(sType_finalize, default_value_38, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 879);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 880);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_39  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 881);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 882);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 883);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 884);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 885);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 886);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_39,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_39, "/usr/local/include/neo-c.h", 2169, 887);
    come_call_finalizer(sType_finalize, default_value_39, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 888);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 889);
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

struct sHeapSizeOfNode* sHeapSizeOfNode_initialize(struct sHeapSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj86  ;
    struct sHeapSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sHeapSizeOfNode*)come_increment_ref_count(self, "40obj2.nc", 608, 951),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 608, 952);
    __right_value0 = (void*)0;
    __dec_obj86=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 610, 954);
    come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 610, 953);
        __result_obj__0 = (struct sHeapSizeOfNode*)come_increment_ref_count(self, "40obj2.nc", 613, 955);
    come_call_finalizer(sHeapSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 613, 958);
    neo_current_frame = fr.prev;
    come_call_finalizer(sHeapSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 613, 959);
    return __result_obj__0;
}

char*  sHeapSizeOfNode_kind(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sHeapSizeOfNode","40obj2.nc",615))), "40obj2.nc", 615, 960);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 615, 961));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 615, 962));
    return __result_obj__0;
}

_Bool sHeapSizeOfNode_compile(struct sHeapSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    struct buffer*  buf  ;
    struct list$1sNode$ph* _o2_saved_8;
    struct sNode* it;
    _Bool Value;
    _Bool __result_obj__0;
    struct CVALUE*  cvalue  ;
    char*  __dec_obj87  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj88  ;
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 620, 963);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 622, 964, "struct CVALUE* "), "40obj2.nc", 622, 965)), "40obj2.nc", 622, 966);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 624, 967);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 625, 968);
    type2->mPointerNum--;
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0), "40obj2.nc", 629, 969);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "40obj2.nc", 631, 970, "struct buffer* "), "40obj2.nc", 631, 971)), "40obj2.nc", 631, 972);
    buffer_append_format(buf,"sizeof(%s)",type_name);
    for(_o2_saved_8=(struct list$1sNode$ph*)come_increment_ref_count(type->mHeapArrayNum, "40obj2.nc", 633, 973),it=list$1sNode$ph_begin(_o2_saved_8)    ;!list$1sNode$ph_end(_o2_saved_8);it=list$1sNode$ph_next(_o2_saved_8)){
        Value=node_compile(it,info);
        if(!Value) {
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 635, 974);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 635, 975);
            come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 635, 976);
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 635, 977);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 635, 978));
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 635, 979);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 635, 980);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 638, 981);
        buffer_append_format(buf,"*(%s)",cvalue->c_value);
        come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 643, 982);
    }
    __right_value0 = (void*)0;
    __dec_obj87=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "40obj2.nc", 643, 984);
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 643, 983);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj88=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 644, 985, "struct sType* "), "40obj2.nc", 644, 986),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 644, 987),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 644, 989);
    come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 644, 988);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 650, 990));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 652, 991);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 652, 992);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 652, 993);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 652, 994);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 652, 995));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 652, 996);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 652, 997);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sHeapSizeOfNode_finalize(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sHeapSizeOfNode_finalize", 2, 956));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sHeapSizeOfNode_finalize}", 3, 957);
    }
        neo_current_frame = fr.prev;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj89  ;
    struct sSizeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfNode*)come_increment_ref_count(self, "40obj2.nc", 660, 998),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 660, 999);
    __right_value0 = (void*)0;
    __dec_obj89=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 662, 1001);
    come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 662, 1000);
        __result_obj__0 = (struct sSizeOfNode*)come_increment_ref_count(self, "40obj2.nc", 665, 1002);
    come_call_finalizer(sSizeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 665, 1005);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 665, 1006);
    return __result_obj__0;
}

char*  sSizeOfNode_kind(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfNode","40obj2.nc",667))), "40obj2.nc", 667, 1007);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 667, 1008));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 667, 1009));
    return __result_obj__0;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj90  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj91  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 672, 1010);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 674, 1011, "struct CVALUE* "), "40obj2.nc", 674, 1012)), "40obj2.nc", 674, 1013);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 676, 1014);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 677, 1015);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)1,(_Bool)0), "40obj2.nc", 679, 1016);
    __right_value0 = (void*)0;
    __dec_obj90=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",type_name), "40obj2.nc", 681, 1018);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 681, 1017);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj91=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 682, 1019, "struct sType* "), "40obj2.nc", 682, 1020),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 682, 1021),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 682, 1023);
    come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 682, 1022);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 688, 1024));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 690, 1025);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 690, 1026);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 690, 1027);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 690, 1028);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 690, 1029));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSizeOfNode_finalize", 2, 1003));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sSizeOfNode_finalize}", 3, 1004);
    }
        neo_current_frame = fr.prev;
}

struct sOffsetOf* sOffsetOf_initialize(struct sOffsetOf* self, struct sType*  type  , char*  name  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj92  ;
    char*  __dec_obj93  ;
    struct sOffsetOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOffsetOf*)come_increment_ref_count(self, "40obj2.nc", 698, 1030),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 698, 1031);
    __right_value0 = (void*)0;
    __dec_obj92=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 700, 1033);
    come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 700, 1032);
    __right_value0 = (void*)0;
    __dec_obj93=self->name,
    self->name=(char* )come_increment_ref_count((char* )come_memdup(name, "40obj2.nc", 701, 1034, "char* "), "40obj2.nc", 701, 1036);
    __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 701, 1035);
        __result_obj__0 = (struct sOffsetOf*)come_increment_ref_count(self, "40obj2.nc", 704, 1037);
    come_call_finalizer(sOffsetOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 704, 1041);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 704, 1042));
    neo_current_frame = fr.prev;
    come_call_finalizer(sOffsetOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 704, 1043);
    return __result_obj__0;
}

char*  sOffsetOf_kind(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOffsetOf","40obj2.nc",706))), "40obj2.nc", 706, 1044);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 706, 1045));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 706, 1046));
    return __result_obj__0;
}

_Bool sOffsetOf_compile(struct sOffsetOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    char*  name  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj94  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj95  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 711, 1047);
    name=(char* )come_increment_ref_count(self->name, "40obj2.nc", 712, 1048);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 714, 1049, "struct CVALUE* "), "40obj2.nc", 714, 1050)), "40obj2.nc", 714, 1051);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 716, 1052);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 717, 1053);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 719, 1054);
    __right_value0 = (void*)0;
    __dec_obj94=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_offsetof(%s, %s)",type_name,name), "40obj2.nc", 721, 1056);
    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 721, 1055);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj95=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 722, 1057, "struct sType* "), "40obj2.nc", 722, 1058),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 722, 1059),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 722, 1061);
    come_call_finalizer(sType_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 722, 1060);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 728, 1062));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 730, 1063);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 730, 1064));
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 730, 1065);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 730, 1066);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 730, 1067);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 730, 1068));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOffsetOf_finalize(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOffsetOf_finalize", 2, 1038));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sOffsetOf_finalize}", 3, 1039);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "sOffsetOf_finalize", 4, 1040));
    }
        neo_current_frame = fr.prev;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj96;
    struct sSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSizeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 738, 1069),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 738, 1070);
    __right_value0 = (void*)0;
    __dec_obj96=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "40obj2.nc", 740, 1072);
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 740, 1071) :0);
        __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 742, 1073);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 742, 1076);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 742, 1077):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 742, 1078);
    return __result_obj__0;
        __result_obj__0 = (struct sSizeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 745, 1079);
    come_call_finalizer(sSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 745, 1080);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 745, 1081):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 745, 1082);
    return __result_obj__0;
}

char*  sSizeOfExpNode_kind(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode","40obj2.nc",747))), "40obj2.nc", 747, 1083);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 747, 1084));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 747, 1085));
    return __result_obj__0;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj97  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj98  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 752, 1086);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 755, 1087):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 758, 1088);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 760, 1089, "struct CVALUE* "), "40obj2.nc", 760, 1090)), "40obj2.nc", 760, 1091);
    __right_value0 = (void*)0;
    __dec_obj97=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("sizeof(%s)",come_value->c_value), "40obj2.nc", 762, 1093);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 762, 1092);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj98=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 763, 1094, "struct sType* "), "40obj2.nc", 763, 1095),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 763, 1096),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 763, 1098);
    come_call_finalizer(sType_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 763, 1097);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 769, 1099));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 771, 1100):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 771, 1101);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 771, 1102);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSizeOfExpNode_finalize", 2, 1074));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sSizeOfExpNode_finalize", 3, 1075):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_initialize(struct sDynamicSizeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 779, 1103),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 779, 1104);
    __right_value0 = (void*)0;
    __dec_obj99=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "40obj2.nc", 781, 1106);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 781, 1105) :0);
        __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 783, 1107);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 783, 1110);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 783, 1111):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 783, 1112);
    return __result_obj__0;
        __result_obj__0 = (struct sDynamicSizeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 786, 1113);
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 786, 1114);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 786, 1115):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 786, 1116);
    return __result_obj__0;
}

char*  sDynamicSizeOfExpNode_kind(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSizeOfExpNode","40obj2.nc",788))), "40obj2.nc", 788, 1117);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 788, 1118));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 788, 1119));
    return __result_obj__0;
}

_Bool sDynamicSizeOfExpNode_compile(struct sDynamicSizeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj100  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj101  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 793, 1120);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 796, 1121):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 799, 1122);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 801, 1123, "struct CVALUE* "), "40obj2.nc", 801, 1124)), "40obj2.nc", 801, 1125);
    __right_value0 = (void*)0;
    __dec_obj100=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("dynamic_sizeof(%s, \"%s\", %d)",come_value->c_value,info->sname,info->sline), "40obj2.nc", 803, 1127);
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 803, 1126);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj101=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 804, 1128, "struct sType* "), "40obj2.nc", 804, 1129),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 804, 1130),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 804, 1132);
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 804, 1131);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 810, 1133));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 812, 1134):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 812, 1135);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 812, 1136);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicSizeOfExpNode_finalize(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDynamicSizeOfExpNode_finalize", 2, 1108));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sDynamicSizeOfExpNode_finalize", 3, 1109):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj102  ;
    struct sTypeOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfNode*)come_increment_ref_count(self, "40obj2.nc", 820, 1137),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 820, 1138);
    __right_value0 = (void*)0;
    __dec_obj102=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 822, 1140);
    come_call_finalizer(sType_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 822, 1139);
        __result_obj__0 = (struct sTypeOfNode*)come_increment_ref_count(self, "40obj2.nc", 825, 1141);
    come_call_finalizer(sTypeOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 825, 1144);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 825, 1145);
    return __result_obj__0;
}

char*  sTypeOfNode_kind(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfNode","40obj2.nc",827))), "40obj2.nc", 827, 1146);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 827, 1147));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 827, 1148));
    return __result_obj__0;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj103  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj104  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 832, 1149);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 834, 1150, "struct CVALUE* "), "40obj2.nc", 834, 1151)), "40obj2.nc", 834, 1152);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 836, 1153);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 837, 1154);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 839, 1155);
    __right_value0 = (void*)0;
    __dec_obj103=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name), "40obj2.nc", 841, 1157);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 841, 1156);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj104=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 842, 1158, "struct sType* "), "40obj2.nc", 842, 1159),(char*)come_increment_ref_count(xsprintf("char*"), "40obj2.nc", 842, 1160),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 842, 1162);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 842, 1161);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 847, 1163));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 849, 1164);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 849, 1165);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 849, 1166);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 849, 1167);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 849, 1168));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeOfNode_finalize", 2, 1142));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sTypeOfNode_finalize}", 3, 1143);
    }
        neo_current_frame = fr.prev;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj105;
    struct sTypeOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sTypeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 857, 1169),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 857, 1170);
    __right_value0 = (void*)0;
    __dec_obj105=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "40obj2.nc", 859, 1172);
    (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 859, 1171) :0);
        __result_obj__0 = (struct sTypeOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 862, 1173);
    come_call_finalizer(sTypeOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 862, 1176);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 862, 1177):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sTypeOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 862, 1178);
    return __result_obj__0;
}

char*  sTypeOfExpNode_kind(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sTypeOfExpNode","40obj2.nc",864))), "40obj2.nc", 864, 1179);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 864, 1180));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 864, 1181));
    return __result_obj__0;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj106  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj107  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 869, 1182);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 872, 1183):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 875, 1184);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "40obj2.nc", 877, 1185);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 879, 1186);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 880, 1187);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 882, 1188);
    __right_value0 = (void*)0;
    __dec_obj106=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("\"%s\"",type_name), "40obj2.nc", 884, 1190);
    __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 884, 1189);
    __right_value0 = (void*)0;
    __dec_obj107=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 885, 1191, "struct sType* "), "40obj2.nc", 885, 1192),(char*)come_increment_ref_count(xsprintf("char*"), "40obj2.nc", 885, 1193),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 885, 1195);
    come_call_finalizer(sType_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 885, 1194);
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 890, 1196));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 892, 1197):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 892, 1198);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 892, 1199);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 892, 1200);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 892, 1201);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 892, 1202));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sTypeOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sTypeOfExpNode_finalize", 2, 1174));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sTypeOfExpNode_finalize", 3, 1175):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj108;
    struct sDynamicTypeOf* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDynamicTypeOf*)come_increment_ref_count(self, "40obj2.nc", 900, 1203),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 900, 1204);
    __right_value0 = (void*)0;
    __dec_obj108=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "40obj2.nc", 902, 1206);
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 902, 1205) :0);
        __result_obj__0 = (struct sDynamicTypeOf*)come_increment_ref_count(self, "40obj2.nc", 905, 1207);
    come_call_finalizer(sDynamicTypeOf_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 905, 1210);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 905, 1211):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDynamicTypeOf_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 905, 1212);
    return __result_obj__0;
}

char*  sDynamicTypeOf_kind(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDynamicTypeOf","40obj2.nc",907))), "40obj2.nc", 907, 1213);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 907, 1214));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 907, 1215));
    return __result_obj__0;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj109  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj110  ;
    struct CVALUE*  come_value2_49  ;
    char*  __dec_obj111  ;
    struct sType*  __dec_obj112  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 912, 1216);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 915, 1217):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 918, 1218);
    if(come_value->type->mPointerNum>0&&come_value->type->mHeap) {
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 921, 1219, "struct CVALUE* "), "40obj2.nc", 921, 1220)), "40obj2.nc", 921, 1221);
        __right_value0 = (void*)0;
        __dec_obj109=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("come_dynamic_typeof(%s, \"%s\", %d)",come_value->c_value,info->sname,info->sline), "40obj2.nc", 923, 1223);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 923, 1222);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj110=come_value2->type,
        come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 924, 1224, "struct sType* "), "40obj2.nc", 924, 1225),(char*)come_increment_ref_count(xsprintf("char*"), "40obj2.nc", 924, 1226),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 924, 1228);
        come_call_finalizer(sType_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 924, 1227);
        come_value2->var=((void*)0);
        add_come_last_code(info,"%s",come_value2->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 929, 1229));
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 945, 1230);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value2_49=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 932, 1231, "struct CVALUE* "), "40obj2.nc", 932, 1232)), "40obj2.nc", 932, 1233);
        __right_value0 = (void*)0;
        __dec_obj111=come_value2_49->c_value,
        come_value2_49->c_value=(char* )come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"), "40obj2.nc", 934, 1235);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 934, 1234);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj112=come_value2_49->type,
        come_value2_49->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 935, 1236, "struct sType* "), "40obj2.nc", 935, 1237),(char*)come_increment_ref_count(xsprintf("char*"), "40obj2.nc", 935, 1238),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 935, 1240);
        come_call_finalizer(sType_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 935, 1239);
        come_value2_49->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_49->c_value);
        append_object_to_right_values(come_value2_49,come_value2_49->type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2_49, "40obj2.nc", 942, 1241));
        come_call_finalizer(CVALUE_finalize, come_value2_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 945, 1242);
    }
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 945, 1243):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 945, 1244);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDynamicTypeOf_finalize", 2, 1208));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sDynamicTypeOf_finalize", 3, 1209):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj113  ;
    struct sAlignOfNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode*)come_increment_ref_count(self, "40obj2.nc", 953, 1245),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 953, 1246);
    __right_value0 = (void*)0;
    __dec_obj113=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 955, 1248);
    come_call_finalizer(sType_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 955, 1247);
        __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self, "40obj2.nc", 957, 1249);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 957, 1252);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 957, 1253);
    return __result_obj__0;
        __result_obj__0 = (struct sAlignOfNode*)come_increment_ref_count(self, "40obj2.nc", 960, 1254);
    come_call_finalizer(sAlignOfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 960, 1255);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 960, 1256);
    return __result_obj__0;
}

char*  sAlignOfNode_kind(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode","40obj2.nc",962))), "40obj2.nc", 962, 1257);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 962, 1258));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 962, 1259));
    return __result_obj__0;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj114  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj115  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 967, 1260);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 969, 1261, "struct CVALUE* "), "40obj2.nc", 969, 1262)), "40obj2.nc", 969, 1263);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 971, 1264);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 972, 1265);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 974, 1266);
    __right_value0 = (void*)0;
    __dec_obj114=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignof(%s)",type_name), "40obj2.nc", 976, 1268);
    __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 976, 1267);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj115=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 977, 1269, "struct sType* "), "40obj2.nc", 977, 1270),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 977, 1271),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 977, 1273);
    come_call_finalizer(sType_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 977, 1272);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 983, 1274));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 985, 1275);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 985, 1276);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 985, 1277);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 985, 1278);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 985, 1279));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfNode_finalize", 2, 1250));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode_finalize}", 3, 1251);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj116;
    struct sAlignOfExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 993, 1280),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 993, 1281);
    __right_value0 = (void*)0;
    __dec_obj116=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "40obj2.nc", 995, 1283);
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 995, 1282) :0);
        __result_obj__0 = (struct sAlignOfExpNode*)come_increment_ref_count(self, "40obj2.nc", 998, 1284);
    come_call_finalizer(sAlignOfExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 998, 1287);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 998, 1288):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 998, 1289);
    return __result_obj__0;
}

char*  sAlignOfExpNode_kind(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode","40obj2.nc",1000))), "40obj2.nc", 1000, 1290);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1000, 1291));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1000, 1292));
    return __result_obj__0;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj117  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj118  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 1005, 1293);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1008, 1294):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1011, 1295);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1013, 1296, "struct CVALUE* "), "40obj2.nc", 1013, 1297)), "40obj2.nc", 1013, 1298);
    __right_value0 = (void*)0;
    __dec_obj117=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value->c_value), "40obj2.nc", 1015, 1300);
    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1015, 1299);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj118=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1016, 1301, "struct sType* "), "40obj2.nc", 1016, 1302),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 1016, 1303),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1016, 1305);
    come_call_finalizer(sType_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1016, 1304);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 1022, 1306));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1024, 1307):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1024, 1308);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1024, 1309);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfExpNode_finalize", 2, 1285));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignOfExpNode_finalize", 3, 1286):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj119  ;
    struct sAlignOfNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfNode2*)come_increment_ref_count(self, "40obj2.nc", 1032, 1310),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1032, 1311);
    __right_value0 = (void*)0;
    __dec_obj119=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 1034, 1313);
    come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1034, 1312);
        __result_obj__0 = (struct sAlignOfNode2*)come_increment_ref_count(self, "40obj2.nc", 1037, 1314);
    come_call_finalizer(sAlignOfNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1037, 1317);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1037, 1318);
    return __result_obj__0;
}

char*  sAlignOfNode2_kind(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfNode2","40obj2.nc",1039))), "40obj2.nc", 1039, 1319);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1039, 1320));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1039, 1321));
    return __result_obj__0;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj120  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj121  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 1044, 1322);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1046, 1323, "struct CVALUE* "), "40obj2.nc", 1046, 1324)), "40obj2.nc", 1046, 1325);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 1048, 1326);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 1049, 1327);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 1051, 1328);
    __right_value0 = (void*)0;
    __dec_obj120=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",type_name), "40obj2.nc", 1053, 1330);
    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1053, 1329);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj121=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1054, 1331, "struct sType* "), "40obj2.nc", 1054, 1332),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 1054, 1333),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1054, 1335);
    come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1054, 1334);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1060, 1336));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1062, 1337);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1062, 1338);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1062, 1339);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1062, 1340);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1062, 1341));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfNode2_finalize", 2, 1315));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode2_finalize}", 3, 1316);
    }
        neo_current_frame = fr.prev;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj122;
    struct sAlignOfExpNode2* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(self, "40obj2.nc", 1070, 1342),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1070, 1343);
    __right_value0 = (void*)0;
    __dec_obj122=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "40obj2.nc", 1072, 1345);
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1072, 1344) :0);
        __result_obj__0 = (struct sAlignOfExpNode2*)come_increment_ref_count(self, "40obj2.nc", 1075, 1346);
    come_call_finalizer(sAlignOfExpNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1075, 1349);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1075, 1350):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignOfExpNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1075, 1351);
    return __result_obj__0;
}

char*  sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignOfExpNode2","40obj2.nc",1077))), "40obj2.nc", 1077, 1352);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1077, 1353));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1077, 1354));
    return __result_obj__0;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj123  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj124  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 1082, 1355);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1085, 1356):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1088, 1357);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1090, 1358, "struct CVALUE* "), "40obj2.nc", 1090, 1359)), "40obj2.nc", 1090, 1360);
    __right_value0 = (void*)0;
    __dec_obj123=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("__alignof__(%s)",come_value->c_value), "40obj2.nc", 1092, 1362);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1092, 1361);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj124=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1093, 1363, "struct sType* "), "40obj2.nc", 1093, 1364),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 1093, 1365),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1093, 1367);
    come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1093, 1366);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 1099, 1368));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1101, 1369):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1101, 1370);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1101, 1371);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignOfExpNode2_finalize", 2, 1347));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignOfExpNode2_finalize", 3, 1348):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj125  ;
    struct sAlignAsNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsNode*)come_increment_ref_count(self, "40obj2.nc", 1109, 1372),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1109, 1373);
    __right_value0 = (void*)0;
    __dec_obj125=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 1111, 1375);
    come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1111, 1374);
        __result_obj__0 = (struct sAlignAsNode*)come_increment_ref_count(self, "40obj2.nc", 1114, 1376);
    come_call_finalizer(sAlignAsNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1114, 1379);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1114, 1380);
    return __result_obj__0;
}

char*  sAlignAsNode_kind(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsNode","40obj2.nc",1116))), "40obj2.nc", 1116, 1381);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1116, 1382));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1116, 1383));
    return __result_obj__0;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    char*  type_name  ;
    char*  __dec_obj126  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj127  ;
    _Bool __result_obj__0;
    type=(struct sType* )come_increment_ref_count(self->type, "40obj2.nc", 1121, 1384);
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1123, 1385, "struct CVALUE* "), "40obj2.nc", 1123, 1386)), "40obj2.nc", 1123, 1387);
    __right_value0 = (void*)0;
    type2_=(struct sType* )come_increment_ref_count(solve_generics(type,info->generics_type,info), "40obj2.nc", 1125, 1388);
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 1126, 1389);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 1128, 1390);
    __right_value0 = (void*)0;
    __dec_obj126=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",type_name), "40obj2.nc", 1130, 1392);
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1130, 1391);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj127=come_value->type,
    come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1131, 1393, "struct sType* "), "40obj2.nc", 1131, 1394),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 1131, 1395),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1131, 1397);
    come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1131, 1396);
    come_value->type->mUnsigned=(_Bool)1;
    come_value->var=((void*)0);
    add_come_last_code(info,"%s",come_value->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1137, 1398));
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1139, 1399);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1139, 1400);
    come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1139, 1401);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1139, 1402);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1139, 1403));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignAsNode_finalize", 2, 1377));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignAsNode_finalize}", 3, 1378);
    }
        neo_current_frame = fr.prev;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj128;
    struct sAlignAsExpNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAlignAsExpNode*)come_increment_ref_count(self, "40obj2.nc", 1147, 1404),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1147, 1405);
    __right_value0 = (void*)0;
    __dec_obj128=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp), "40obj2.nc", 1149, 1407);
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1149, 1406) :0);
        __result_obj__0 = (struct sAlignAsExpNode*)come_increment_ref_count(self, "40obj2.nc", 1152, 1408);
    come_call_finalizer(sAlignAsExpNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1152, 1411);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1152, 1412):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAlignAsExpNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1152, 1413);
    return __result_obj__0;
}

char*  sAlignAsExpNode_kind(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAlignAsExpNode","40obj2.nc",1154))), "40obj2.nc", 1154, 1414);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1154, 1415));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1154, 1416));
    return __result_obj__0;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj129  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj130  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "40obj2.nc", 1159, 1417);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1162, 1418):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1165, 1419);
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1167, 1420, "struct CVALUE* "), "40obj2.nc", 1167, 1421)), "40obj2.nc", 1167, 1422);
    __right_value0 = (void*)0;
    __dec_obj129=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("_Alignas(%s)",come_value->c_value), "40obj2.nc", 1169, 1424);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1169, 1423);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj130=come_value2->type,
    come_value2->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1170, 1425, "struct sType* "), "40obj2.nc", 1170, 1426),(char*)come_increment_ref_count(xsprintf("long"), "40obj2.nc", 1170, 1427),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1170, 1429);
    come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1170, 1428);
    come_value2->type->mUnsigned=(_Bool)1;
    come_value2->var=((void*)0);
    add_come_last_code(info,"%s",come_value2->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "40obj2.nc", 1176, 1430));
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1178, 1431):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1178, 1432);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1178, 1433);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignAsExpNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAlignAsExpNode_finalize", 2, 1409));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sAlignAsExpNode_finalize", 3, 1410):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj131;
    struct sDeleteNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDeleteNode*)come_increment_ref_count(self, "40obj2.nc", 1186, 1434),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1186, 1435);
    __right_value0 = (void*)0;
    __dec_obj131=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1188, 1437);
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1188, 1436) :0);
        __result_obj__0 = (struct sDeleteNode*)come_increment_ref_count(self, "40obj2.nc", 1191, 1438);
    come_call_finalizer(sDeleteNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1191, 1441);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1191, 1442):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDeleteNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1191, 1443);
    return __result_obj__0;
}

char*  sDeleteNode_kind(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDeleteNode","40obj2.nc",1193))), "40obj2.nc", 1193, 1444);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1193, 1445));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1193, 1446));
    return __result_obj__0;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1198, 1447);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1201, 1448):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1204, 1449);
    if(come_value->type->mPointerNum>0) {
        __right_value0 = (void*)0;
        free_object(((struct sType* )(__right_value0=sType_clone(come_value->type))),come_value->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1207, 1450);
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1210, 1451):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1210, 1452);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDeleteNode_finalize(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDeleteNode_finalize", 2, 1439));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDeleteNode_finalize", 3, 1440):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj132;
    struct sBorrowNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sBorrowNode*)come_increment_ref_count(self, "40obj2.nc", 1218, 1453),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1218, 1454);
    __right_value0 = (void*)0;
    __dec_obj132=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1220, 1456);
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1220, 1455) :0);
        __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self, "40obj2.nc", 1222, 1457);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1222, 1460);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1222, 1461):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1222, 1462);
    return __result_obj__0;
        __result_obj__0 = (struct sBorrowNode*)come_increment_ref_count(self, "40obj2.nc", 1225, 1463);
    come_call_finalizer(sBorrowNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1225, 1464);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1225, 1465):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBorrowNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1225, 1466);
    return __result_obj__0;
}

char*  sBorrowNode_kind(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sBorrowNode","40obj2.nc",1227))), "40obj2.nc", 1227, 1467);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1227, 1468));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1227, 1469));
    return __result_obj__0;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    struct sType*  __dec_obj133  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1232, 1470);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1235, 1471):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1238, 1472);
    remove_value_from_right_value_objects(come_value,info);
    __right_value0 = (void*)0;
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "40obj2.nc", 1242, 1473);
    type->mHeap=(_Bool)0;
    __dec_obj133=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(type, "40obj2.nc", 1244, 1475);
    come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1244, 1474);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1246, 1476));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1248, 1477):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1248, 1478);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1248, 1479);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sBorrowNode_finalize(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sBorrowNode_finalize", 2, 1458));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sBorrowNode_finalize", 3, 1459):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj134;
    struct sCloneNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCloneNode*)come_increment_ref_count(self, "40obj2.nc", 1256, 1480),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1256, 1481);
    __right_value0 = (void*)0;
    __dec_obj134=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1258, 1483);
    (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1258, 1482) :0);
        __result_obj__0 = (struct sCloneNode*)come_increment_ref_count(self, "40obj2.nc", 1261, 1484);
    come_call_finalizer(sCloneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1261, 1487);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1261, 1488):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCloneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1261, 1489);
    return __result_obj__0;
}

char*  sCloneNode_kind(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCloneNode","40obj2.nc",1263))), "40obj2.nc", 1263, 1490);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1263, 1491));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1263, 1492));
    return __result_obj__0;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_compile"; neo_current_frame = &fr;
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
    char*  __dec_obj135  ;
    struct sType*  __dec_obj136  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1268, 1493);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1271, 1494):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1274, 1495);
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "40obj2.nc", 1276, 1496);
    if(left_type->mPointerNum==1&&string_operator_equals(left_type->mClass->mName,"void")&&left_type->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "40obj2.nc", 1279, 1497));
    }
    else if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "40obj2.nc", 1282, 1498));
    }
    else if(left_type->mPointerNum>0) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1285, 1499, "struct CVALUE* "), "40obj2.nc", 1285, 1500)), "40obj2.nc", 1285, 1501);
        __right_value0 = (void*)0;
        multiple_assign_var6=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "40obj2.nc", 1287, 1502);
        c_value=(char* )come_increment_ref_count(multiple_assign_var6->v2, "40obj2.nc", 1287, 1503);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1287, 1506);
        __dec_obj135=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value, "40obj2.nc", 1288, 1508);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1288, 1507);
        __right_value0 = (void*)0;
        __dec_obj136=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "40obj2.nc", 1289, 1510);
        come_call_finalizer(sType_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1289, 1509);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1295, 1511));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1298, 1512);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1298, 1513);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1298, 1514));
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1298, 1515):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1298, 1516);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1298, 1517);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCloneNode_finalize(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCloneNode_finalize", 2, 1485));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sCloneNode_finalize", 3, 1486):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize}", 2, 1504);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize", 3, 1505));
    }
            neo_current_frame = fr.prev;
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj137;
    struct sDupeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDupeNode*)come_increment_ref_count(self, "40obj2.nc", 1306, 1518),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1306, 1519);
    __right_value0 = (void*)0;
    __dec_obj137=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1308, 1521);
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1308, 1520) :0);
        __result_obj__0 = (struct sDupeNode*)come_increment_ref_count(self, "40obj2.nc", 1311, 1522);
    come_call_finalizer(sDupeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1311, 1525);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1311, 1526):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDupeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1311, 1527);
    return __result_obj__0;
}

char*  sDupeNode_kind(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDupeNode","40obj2.nc",1313))), "40obj2.nc", 1313, 1528);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1313, 1529));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1313, 1530));
    return __result_obj__0;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_compile"; neo_current_frame = &fr;
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
    char*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1318, 1531);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1321, 1532):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1324, 1533);
    __right_value0 = (void*)0;
    left_type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "40obj2.nc", 1326, 1534);
    if(left_type->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "40obj2.nc", 1329, 1535));
    }
    else if(left_type->mPointerNum>0&&left_type->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(left_value, "40obj2.nc", 1332, 1536));
    }
    else if(left_type->mPointerNum>0) {
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1335, 1537, "struct CVALUE* "), "40obj2.nc", 1335, 1538)), "40obj2.nc", 1335, 1539);
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple2$2sType$phchar$ph*)(__right_value0=(clone_object)(left_type,left_value->c_value,info)));
        result_type=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "40obj2.nc", 1337, 1540);
        c_value=(char* )come_increment_ref_count(multiple_assign_var7->v2, "40obj2.nc", 1337, 1541);
        come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1337, 1542);
        __dec_obj138=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(c_value, "40obj2.nc", 1338, 1544);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1338, 1543);
        __right_value0 = (void*)0;
        __dec_obj139=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_type), "40obj2.nc", 1339, 1546);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1339, 1545);
        come_value->type->mHeap=(_Bool)1;
        come_value->var=((void*)0);
        append_object_to_right_values(come_value,left_type,info,(_Bool)0,((void*)0),((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1345, 1547));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1348, 1548);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1348, 1549);
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1348, 1550));
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1348, 1551):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1348, 1552);
    come_call_finalizer(sType_finalize, left_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1348, 1553);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDupeNode_finalize(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDupeNode_finalize", 2, 1523));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDupeNode_finalize", 3, 1524):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj140;
    struct sDummyHeapNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDummyHeapNode*)come_increment_ref_count(self, "40obj2.nc", 1356, 1554),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1356, 1555);
    __right_value0 = (void*)0;
    __dec_obj140=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1358, 1557);
    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1358, 1556) :0);
        __result_obj__0 = (struct sDummyHeapNode*)come_increment_ref_count(self, "40obj2.nc", 1361, 1558);
    come_call_finalizer(sDummyHeapNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1361, 1561);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1361, 1562):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDummyHeapNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1361, 1563);
    return __result_obj__0;
}

char*  sDummyHeapNode_kind(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDummyHeapNode","40obj2.nc",1363))), "40obj2.nc", 1363, 1564);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1363, 1565));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1363, 1566));
    return __result_obj__0;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1368, 1567);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1371, 1568):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1374, 1569);
    if(come_value->type->mPointerNum>0) {
        come_value->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1380, 1570));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1382, 1571):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1382, 1572);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDummyHeapNode_finalize", 2, 1559));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sDummyHeapNode_finalize", 3, 1560):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj141;
    struct sGCIncNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCIncNode*)come_increment_ref_count(self, "40obj2.nc", 1390, 1573),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1390, 1574);
    __right_value0 = (void*)0;
    __dec_obj141=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1392, 1576);
    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1392, 1575) :0);
        __result_obj__0 = (struct sGCIncNode*)come_increment_ref_count(self, "40obj2.nc", 1395, 1577);
    come_call_finalizer(sGCIncNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1395, 1580);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1395, 1581):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCIncNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1395, 1582);
    return __result_obj__0;
}

char*  sGCIncNode_kind(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCIncNode","40obj2.nc",1397))), "40obj2.nc", 1397, 1583);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1397, 1584));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1397, 1585));
    return __result_obj__0;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    char*  type_name  ;
    char*  __dec_obj142  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1402, 1586);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1405, 1587):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1408, 1588);
    type=come_value->type;
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "40obj2.nc", 1413, 1589);
        __right_value0 = (void*)0;
        __dec_obj142=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(increment_ref_count_object(come_value->type,come_value->c_value,info), "40obj2.nc", 1414, 1591);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1414, 1590);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1417, 1592));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1417, 1593));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1419, 1594):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1419, 1595);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCIncNode_finalize(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCIncNode_finalize", 2, 1578));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCIncNode_finalize", 3, 1579):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj143;
    struct sGCDecNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNode*)come_increment_ref_count(self, "40obj2.nc", 1427, 1596),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1427, 1597);
    __right_value0 = (void*)0;
    __dec_obj143=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1429, 1599);
    (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1429, 1598) :0);
        __result_obj__0 = (struct sGCDecNode*)come_increment_ref_count(self, "40obj2.nc", 1432, 1600);
    come_call_finalizer(sGCDecNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1432, 1603);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1432, 1604):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1432, 1605);
    return __result_obj__0;
}

char*  sGCDecNode_kind(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNode","40obj2.nc",1434))), "40obj2.nc", 1434, 1606);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1434, 1607));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1434, 1608));
    return __result_obj__0;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1439, 1609);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1442, 1610):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1445, 1611);
    type=(struct sType* )come_increment_ref_count(come_value->type, "40obj2.nc", 1447, 1612);
    if(come_value->type->mHeap&&come_value->type->mPointerNum>0) {
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1453, 1613));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1455, 1614):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1455, 1615);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1455, 1616);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNode_finalize(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCDecNode_finalize", 2, 1601));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCDecNode_finalize", 3, 1602):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj144  ;
    struct sIsHeap* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsHeap*)come_increment_ref_count(self, "40obj2.nc", 1463, 1617),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1463, 1618);
    __right_value0 = (void*)0;
    __dec_obj144=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 1465, 1620);
    come_call_finalizer(sType_finalize, __dec_obj144,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1465, 1619);
        __result_obj__0 = (struct sIsHeap*)come_increment_ref_count(self, "40obj2.nc", 1468, 1621);
    come_call_finalizer(sIsHeap_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1468, 1624);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsHeap_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1468, 1625);
    return __result_obj__0;
}

char*  sIsHeap_kind(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsHeap","40obj2.nc",1470))), "40obj2.nc", 1470, 1626);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1470, 1627));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1470, 1628));
    return __result_obj__0;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj145  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj146  ;
    struct CVALUE*  come_value_50  ;
    char*  __dec_obj147  ;
    struct sType*  __dec_obj148  ;
    if(self->type->mHeap) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1476, 1629, "struct CVALUE* "), "40obj2.nc", 1476, 1630)), "40obj2.nc", 1476, 1631);
        __right_value0 = (void*)0;
        __dec_obj145=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("1"), "40obj2.nc", 1478, 1633);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1478, 1632);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj146=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1479, 1634, "struct sType* "), "40obj2.nc", 1479, 1635),(char*)come_increment_ref_count(xsprintf("int"), "40obj2.nc", 1479, 1636),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1479, 1638);
        come_call_finalizer(sType_finalize, __dec_obj146,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1479, 1637);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1482, 1639));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1498, 1640);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_50=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1487, 1641, "struct CVALUE* "), "40obj2.nc", 1487, 1642)), "40obj2.nc", 1487, 1643);
        __right_value0 = (void*)0;
        __dec_obj147=come_value_50->c_value,
        come_value_50->c_value=(char* )come_increment_ref_count(xsprintf("0"), "40obj2.nc", 1489, 1645);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1489, 1644);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj148=come_value_50->type,
        come_value_50->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1490, 1646, "struct sType* "), "40obj2.nc", 1490, 1647),(char*)come_increment_ref_count(xsprintf("int"), "40obj2.nc", 1490, 1648),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1490, 1650);
        come_call_finalizer(sType_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1490, 1649);
        come_value_50->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_50, "40obj2.nc", 1493, 1651));
        add_come_last_code(info,"%s",come_value_50->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1498, 1652);
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsHeap_finalize(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIsHeap_finalize", 2, 1622));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsHeap_finalize}", 3, 1623);
    }
        neo_current_frame = fr.prev;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj149  ;
    struct sIsPointer* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIsPointer*)come_increment_ref_count(self, "40obj2.nc", 1506, 1653),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1506, 1654);
    __right_value0 = (void*)0;
    __dec_obj149=self->type,
    self->type=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 1508, 1656);
    come_call_finalizer(sType_finalize, __dec_obj149,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1508, 1655);
        __result_obj__0 = (struct sIsPointer*)come_increment_ref_count(self, "40obj2.nc", 1511, 1657);
    come_call_finalizer(sIsPointer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1511, 1660);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIsPointer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1511, 1661);
    return __result_obj__0;
}

char*  sIsPointer_kind(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIsPointer","40obj2.nc",1513))), "40obj2.nc", 1513, 1662);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1513, 1663));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1513, 1664));
    return __result_obj__0;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj150  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj151  ;
    struct CVALUE*  come_value_51  ;
    char*  __dec_obj152  ;
    struct sType*  __dec_obj153  ;
    if(self->type->mPointerNum==0&&self->type->mArrayPointerNum==0) {
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1519, 1665, "struct CVALUE* "), "40obj2.nc", 1519, 1666)), "40obj2.nc", 1519, 1667);
        __right_value0 = (void*)0;
        __dec_obj150=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("0"), "40obj2.nc", 1521, 1669);
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1521, 1668);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj151=come_value->type,
        come_value->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1522, 1670, "struct sType* "), "40obj2.nc", 1522, 1671),(char*)come_increment_ref_count(xsprintf("int"), "40obj2.nc", 1522, 1672),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1522, 1674);
        come_call_finalizer(sType_finalize, __dec_obj151,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1522, 1673);
        come_value->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1525, 1675));
        add_come_last_code(info,"%s",come_value->c_value);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1541, 1676);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_51=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "40obj2.nc", 1530, 1677, "struct CVALUE* "), "40obj2.nc", 1530, 1678)), "40obj2.nc", 1530, 1679);
        __right_value0 = (void*)0;
        __dec_obj152=come_value_51->c_value,
        come_value_51->c_value=(char* )come_increment_ref_count(xsprintf("1"), "40obj2.nc", 1532, 1681);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "40obj2.nc", 1532, 1680);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj153=come_value_51->type,
        come_value_51->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1533, 1682, "struct sType* "), "40obj2.nc", 1533, 1683),(char*)come_increment_ref_count(xsprintf("int"), "40obj2.nc", 1533, 1684),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1533, 1686);
        come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1533, 1685);
        come_value_51->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_51, "40obj2.nc", 1536, 1687));
        add_come_last_code(info,"%s",come_value_51->c_value);
        come_call_finalizer(CVALUE_finalize, come_value_51, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1541, 1688);
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sIsPointer_finalize(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIsPointer_finalize", 2, 1658));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsPointer_finalize}", 3, 1659);
    }
        neo_current_frame = fr.prev;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj154;
    struct sGCDecNoFreeNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count(self, "40obj2.nc", 1549, 1689),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1549, 1690);
    __right_value0 = (void*)0;
    __dec_obj154=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node), "40obj2.nc", 1551, 1692);
    (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1551, 1691) :0);
        __result_obj__0 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self, "40obj2.nc", 1554, 1693);
    come_call_finalizer(sGCDecNoFreeNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1554, 1696);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1554, 1697):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGCDecNoFreeNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1554, 1698);
    return __result_obj__0;
}

char*  sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sGCDecNoFreeNode","40obj2.nc",1556))), "40obj2.nc", 1556, 1699);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1556, 1700));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1556, 1701));
    return __result_obj__0;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  type  ;
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1561, 1702);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1564, 1703):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1567, 1704);
    type=(struct sType* )come_increment_ref_count(come_value->type, "40obj2.nc", 1569, 1705);
    if(type->mHeap&&type->mPointerNum>0) {
        decrement_ref_count_object(type,come_value->c_value,info,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1575, 1706));
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1577, 1707):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1577, 1708);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1577, 1709);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sGCDecNoFreeNode_finalize", 2, 1694));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sGCDecNoFreeNode_finalize", 3, 1695):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sRefNode* sRefNode_initialize(struct sRefNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj155;
    struct sRefNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRefNode*)come_increment_ref_count(self, "40obj2.nc", 1588, 1710),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1588, 1711);
    __dec_obj155=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1590, 1713);
    (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1590, 1712) :0);
        __result_obj__0 = (struct sRefNode*)come_increment_ref_count(self, "40obj2.nc", 1593, 1714);
    come_call_finalizer(sRefNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1593, 1717);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1593, 1718):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRefNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1593, 1719);
    return __result_obj__0;
}

char*  sRefNode_kind(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRefNode","40obj2.nc",1595))), "40obj2.nc", 1595, 1720);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1595, 1721));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1595, 1722));
    return __result_obj__0;
}

_Bool sRefNode_compile(struct sRefNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  origin  ;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_52;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1600, 1723);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1603, 1724):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1606, 1725);
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "40obj2.nc", 1612, 1726);
    if(come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin->mPointerNum!=1) {
        err_msg(info,"require pointer for ref");
        show_type(come_value->type,info);
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1617, 1727):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1617, 1728);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1617, 1729);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else if(come_value->var) {
        if(come_value->type->mHeap) {
            err_msg(info,"require borrow and do not owned for ref");
            show_type(come_value->type,info);
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1623, 1730):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1623, 1731);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1623, 1732);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        global_=come_value->var->mGlobal;
        heap_=come_value->var->mType->mHeap;
        local_=!global_&&!heap_;
    }
    else if(come_value->mNullValue) {
        err_msg(info,"no assign to null for ref");
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1631, 1733):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1631, 1734);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1631, 1735);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        err_msg(info,"require variable name for ref");
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1635, 1736):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1635, 1737);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1635, 1738);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "40obj2.nc", 1638, 1739);
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1640, 1740, "struct sType* "), "40obj2.nc", 1640, 1741),(char*)come_increment_ref_count(xsprintf("ref"), "40obj2.nc", 1640, 1742),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1640, 1743);
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "40obj2.nc", 1641, 1744));
    if(type_->mArrayPointerNum==1) {
        type_->mArrayPointerNum=0;
        type_->mPointerNum=1;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1647, 1745, "struct sType* "), "40obj2.nc", 1647, 1746),(char*)come_increment_ref_count(xsprintf("ref"), "40obj2.nc", 1647, 1747),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1647, 1748);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1648, 1749, "struct sType* "), "40obj2.nc", 1648, 1750),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "40obj2.nc", 1648, 1751),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1648, 1752));
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "40obj2.nc", 1650, 1753);
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "40obj2.nc", 1652, 1754),info), "40obj2.nc", 1652, 1755);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "40obj2.nc", 1654, 1756, "struct list$1tuple2$2char$phsNode$ph$ph*"), "40obj2.nc", 1654, 1757)), "40obj2.nc", 1654, 1758);
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "40obj2.nc", 1656, 1759);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "40obj2.nc", 1657, 1760),(char*)come_increment_ref_count(xsprintf("stacktop"), "40obj2.nc", 1657, 1761),info), "40obj2.nc", 1657, 1762);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1659, 1763, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1659, 1773),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1659, 1774),(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1659, 1775)), "40obj2.nc", 1659, 1776));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1660, 1777, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1660, 1778),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1660, 1779),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1660, 1780)), "40obj2.nc", 1660, 1781));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1661, 1782, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1661, 1783),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1661, 1784),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1661, 1785)), "40obj2.nc", 1661, 1786));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1661, 1787):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1661, 1788):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1662, 1789, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1662, 1790),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1662, 1791),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1662, 1792)), "40obj2.nc", 1662, 1793));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1662, 1794):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1662, 1795):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1663, 1796, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1663, 1797),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1663, 1798),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1663, 1799)), "40obj2.nc", 1663, 1800));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1663, 1801):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1663, 1802):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1664, 1803, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1664, 1804),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1664, 1805),(struct sNode*)come_increment_ref_count(stacktop, "40obj2.nc", 1664, 1806)), "40obj2.nc", 1664, 1807));
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1666, 1808),params,((void*)0),0,((void*)0),info,(_Bool)0), "40obj2.nc", 1666, 1809);
    Value_52=node_compile(method_node,info);
    if(!Value_52) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1669, 1810):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1669, 1811);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1669, 1812);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1669, 1813);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1669, 1814);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1669, 1815);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1669, 1816);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1669, 1817):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1669, 1818);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1669, 1819):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1669, 1820):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1669, 1821):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1672, 1822):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1672, 1823);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1672, 1824);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1672, 1825);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1672, 1826);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1672, 1827);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1672, 1828);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1672, 1829):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1672, 1830);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1672, 1831):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1672, 1832):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1672, 1833):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sRefNode_finalize(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRefNode_finalize", 2, 1715));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sRefNode_finalize", 3, 1716):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj156  ;
    struct sNode* __dec_obj157;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    __dec_obj156=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3913, 1765);
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 1764);
    __dec_obj157=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3914, 1767);
    (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3914, 1766) :0);
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3916, 1768);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 1769);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3916, 1770));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3916, 1771):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 1772);
    return __result_obj__0;
}

struct sOptionalNode* sOptionalNode_initialize(struct sOptionalNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj158;
    struct sOptionalNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOptionalNode*)come_increment_ref_count(self, "40obj2.nc", 1680, 1834),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1680, 1835);
    __dec_obj158=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1682, 1837);
    (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1682, 1836) :0);
        __result_obj__0 = (struct sOptionalNode*)come_increment_ref_count(self, "40obj2.nc", 1685, 1838);
    come_call_finalizer(sOptionalNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1685, 1841);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1685, 1842):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOptionalNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1685, 1843);
    return __result_obj__0;
}

char*  sOptionalNode_kind(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOptionalNode","40obj2.nc",1687))), "40obj2.nc", 1687, 1844);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1687, 1845));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1687, 1846));
    return __result_obj__0;
}

_Bool sOptionalNode_compile(struct sOptionalNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  origin  ;
    int origin_pointer_num;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_53;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1692, 1847);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1695, 1848):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1698, 1849);
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "40obj2.nc", 1704, 1850);
    origin_pointer_num=((origin)?(origin->mPointerNum):(0));
    if(!come_value->mNullValue&&come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin_pointer_num!=1) {
        err_msg(info,"require pointer for opt");
        show_type(come_value->type,info);
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1714, 1851):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1714, 1852);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1714, 1853);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else if(come_value->var) {
        global_=come_value->var->mGlobal;
        heap_=come_value->var->mType->mHeap;
        local_=!global_&&!heap_;
    }
    else if(come_value->mNullValue) {
        global_=(_Bool)0;
        heap_=(_Bool)0;
        local_=(_Bool)0;
    }
    else {
        if(come_value->type->mHeap) {
            global_=(_Bool)0;
            heap_=(_Bool)1;
            local_=(_Bool)0;
        }
        else {
            err_msg(info,"require heap or variable name for opt");
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1734, 1854):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1734, 1855);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1734, 1856);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "40obj2.nc", 1738, 1857);
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1740, 1858, "struct sType* "), "40obj2.nc", 1740, 1859),(char*)come_increment_ref_count(xsprintf("optional"), "40obj2.nc", 1740, 1860),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1740, 1861);
    if(type_->mArrayPointerNum==1) {
        type_->mArrayPointerNum=0;
        type_->mPointerNum=1;
    }
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "40obj2.nc", 1745, 1862));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1747, 1863, "struct sType* "), "40obj2.nc", 1747, 1864),(char*)come_increment_ref_count(xsprintf("optional"), "40obj2.nc", 1747, 1865),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1747, 1866);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1748, 1867, "struct sType* "), "40obj2.nc", 1748, 1868),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "40obj2.nc", 1748, 1869),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1748, 1870));
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "40obj2.nc", 1750, 1871);
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "40obj2.nc", 1752, 1872),info), "40obj2.nc", 1752, 1873);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "40obj2.nc", 1754, 1874, "struct list$1tuple2$2char$phsNode$ph$ph*"), "40obj2.nc", 1754, 1875)), "40obj2.nc", 1754, 1876);
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "40obj2.nc", 1756, 1877);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "40obj2.nc", 1757, 1878),(char*)come_increment_ref_count(xsprintf("stacktop"), "40obj2.nc", 1757, 1879),info), "40obj2.nc", 1757, 1880);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1759, 1881, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1759, 1882),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1759, 1883),(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1759, 1884)), "40obj2.nc", 1759, 1885));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1760, 1886, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1760, 1887),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1760, 1888),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1760, 1889)), "40obj2.nc", 1760, 1890));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1761, 1891, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1761, 1892),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1761, 1893),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1761, 1894)), "40obj2.nc", 1761, 1895));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1761, 1896):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1761, 1897):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1762, 1898, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1762, 1899),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1762, 1900),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1762, 1901)), "40obj2.nc", 1762, 1902));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1762, 1903):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1762, 1904):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1763, 1905, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1763, 1906),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1763, 1907),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1763, 1908)), "40obj2.nc", 1763, 1909));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1763, 1910):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1763, 1911):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1764, 1912, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1764, 1913),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1764, 1914),(struct sNode*)come_increment_ref_count(stacktop, "40obj2.nc", 1764, 1915)), "40obj2.nc", 1764, 1916));
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1766, 1917),params,((void*)0),0,((void*)0),info,(_Bool)0), "40obj2.nc", 1766, 1918);
    Value_53=node_compile(method_node,info);
    if(!Value_53) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1769, 1919):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1769, 1920);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1769, 1921);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1769, 1922);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1769, 1923);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1769, 1924);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1769, 1925);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1769, 1926):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1769, 1927);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1769, 1928):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1769, 1929):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1769, 1930):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1772, 1931):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1772, 1932);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1772, 1933);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1772, 1934);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1772, 1935);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1772, 1936);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1772, 1937);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1772, 1938):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1772, 1939);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1772, 1940):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1772, 1941):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1772, 1942):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sOptionalNode_finalize(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOptionalNode_finalize", 2, 1839));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sOptionalNode_finalize", 3, 1840):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static _Bool is_buffer_like_type(struct sType*  type  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_buffer_like_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  it  ;
    int guard;
    char*  class_name  ;
    _Bool __result_obj__0;
    char*  original_name  ;
    struct sType*  __dec_obj159  ;
    if(type==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sType* )come_increment_ref_count(sType_clone(type), "40obj2.nc", 1782, 1943);
    guard=0;
    while(it!=((void*)0)&&guard<16) {
        if(it->mClass&&it->mClass->mName) {
            __right_value0 = (void*)0;
            class_name=(char* )come_increment_ref_count(__builtin_string(it->mClass->mName,"40obj2.nc",1787), "40obj2.nc", 1787, 1944);
            if(string_operator_equals(class_name,"buffer")||string_operator_equals(class_name,"buffer*")) {
                                __result_obj__0 = (_Bool)1;
                (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1789, 1945));
                come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1789, 1946);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1793, 1947));
        }
        if(it->mOriginalTypeName) {
            __right_value0 = (void*)0;
            original_name=(char* )come_increment_ref_count(__builtin_string(it->mOriginalTypeName,"40obj2.nc",1794), "40obj2.nc", 1794, 1948);
            if(string_operator_equals(original_name,"buffer")||string_operator_equals(original_name,"buffer*")) {
                                __result_obj__0 = (_Bool)1;
                (original_name = come_decrement_ref_count(original_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1796, 1949));
                come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1796, 1950);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (original_name = come_decrement_ref_count(original_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1800, 1951));
        }
        if(it->mTypedefOriginalType) {
            __right_value0 = (void*)0;
            __dec_obj159=it,
            it=(struct sType* )come_increment_ref_count(sType_clone(it->mTypedefOriginalType), "40obj2.nc", 1801, 1953);
            come_call_finalizer(sType_finalize, __dec_obj159,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1801, 1952);
            guard++;
            continue;
        }
        break;
    }
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(sType_finalize, it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1809, 1954);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct tuple2$2sNode$phsNode$ph* get_head_and_len(struct sNode* node, struct CVALUE*  come_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_head_and_len"; neo_current_frame = &fr;
    struct sNode* head;
    struct sNode* len;
    void* __right_value0 = (void*)0;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sType*  __dec_obj160  ;
    struct sType*  __dec_obj161  ;
    _Bool buffer_like;
    void* __right_value1 = (void*)0;
    struct sNode* __dec_obj162;
    struct sNode* len_field;
    void* __right_value2 = (void*)0;
    struct sNode* __dec_obj163;
    char*  var_name  ;
    struct sNode* svar;
    struct sNode* __dec_obj164;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* __dec_obj165;
    struct sNode* __dec_obj166;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params_54;
    struct sNode* method_node;
    struct sNode* __dec_obj167;
    struct sNode* __dec_obj168;
    struct sNode* _inf_value4;
    struct sHeapSizeOfNode* _inf_obj_value4;
    struct sNode* __dec_obj171;
    char*  var_name_56  ;
    struct sNode* svar_57;
    struct sNode* __dec_obj172;
    struct sNode* _inf_value5;
    struct sDynamicSizeOfExpNode* _inf_obj_value5;
    void* __right_value3 = (void*)0;
    struct sNode* __dec_obj175;
    struct sNode* __dec_obj176;
    struct sNode* _inf_value6;
    struct sDynamicSizeOfExpNode* _inf_obj_value6;
    struct sNode* __dec_obj177;
    struct sNode* __dec_obj178;
    _Bool _conditional_value_X0;
    struct sNode* _inf_value7;
    struct sSizeOfExpNode* _inf_obj_value7;
    struct sNode* __dec_obj181;
    struct sNode* _inf_value8;
    struct sSizeOfExpNode* _inf_obj_value8;
    struct sNode* __dec_obj182;
    struct sNode* __dec_obj183;
    struct sNode* _inf_value9;
    struct sSizeOfExpNode* _inf_obj_value9;
    struct sNode* __dec_obj184;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&len, 0, sizeof(len));
    memset(&type2, 0, sizeof(type2));
    type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "40obj2.nc", 1816, 1955);
    if(type->mNoSolvedGenericsType) {
        __dec_obj160=type2,
        type2=(struct sType* )come_increment_ref_count(type->mNoSolvedGenericsType, "40obj2.nc", 1819, 1957);
        come_call_finalizer(sType_finalize, __dec_obj160,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1819, 1956);
    }
    else {
        __dec_obj161=type2,
        type2=(struct sType* )come_increment_ref_count(type, "40obj2.nc", 1822, 1959);
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc", 1822, 1958);
    }
    buffer_like=is_buffer_like_type(type)||is_buffer_like_type(type2);
    if(buffer_like) {
        __right_value0 = (void*)0;
        __dec_obj162=head,
        head=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1828, 1960),(char*)come_increment_ref_count(xsprintf("buf"), "40obj2.nc", 1828, 1961),info), "40obj2.nc", 1828, 1963);
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1828, 1962) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        len_field=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1829, 1964),(char*)come_increment_ref_count(xsprintf("len"), "40obj2.nc", 1829, 1965),info), "40obj2.nc", 1829, 1966);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj163=len,
        len=(struct sNode*)come_increment_ref_count(add_node((struct sNode*)come_increment_ref_count(len_field, "40obj2.nc", 1830, 1967),(struct sNode*)come_increment_ref_count(create_int_node((char*)come_increment_ref_count(xsprintf("1"), "40obj2.nc", 1830, 1968),info), "40obj2.nc", 1830, 1969),info), "40obj2.nc", 1830, 1971);
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1830, 1970) :0);
        ((len_field) ? len_field = come_decrement_ref_count(len_field, ((struct sNode*)len_field)->finalize, ((struct sNode*)len_field)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 1972):(void*)0);
    }
    else if((type2->mOriginalTypeName&&string_operator_equals(type2->mOriginalTypeName,"string"))||(string_operator_equals(type2->mClass->mName,"char")&&type2->mPointerNum==1&&type2->mHeap)&&!type2->mNew) {
        static int n=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var_name=(char*)come_increment_ref_count(xsprintf("__tmp_string\%s",((char* )(__right_value0=int_to_string(++n)))), "40obj2.nc", 1834, 1973);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1834, 1974));
        __right_value0 = (void*)0;
        svar=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name, "40obj2.nc", 1836, 1975),((void*)0),((void*)0),type2,(_Bool)1,node,info,(_Bool)0), "40obj2.nc", 1836, 1976);
        __dec_obj164=head,
        head=(struct sNode*)come_increment_ref_count(svar, "40obj2.nc", 1838, 1978);
        (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1838, 1977) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "40obj2.nc", 1841, 1979, "struct list$1tuple2$2char$phsNode$ph$ph*"), "40obj2.nc", 1841, 1980)), "40obj2.nc", 1841, 1981);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1843, 1982, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1843, 1983),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1843, 1984),(struct sNode*)come_increment_ref_count(create_load_var(var_name,info), "40obj2.nc", 1843, 1985)), "40obj2.nc", 1843, 1986));
        __right_value0 = (void*)0;
        __dec_obj165=len,
        len=(struct sNode*)come_increment_ref_count(create_funcall("strlen",params,((void*)0),0,((void*)0),info,(_Bool)0), "40obj2.nc", 1845, 1988);
        (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1845, 1987) :0);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1899, 1989));
        ((svar) ? svar = come_decrement_ref_count(svar, ((struct sNode*)svar)->finalize, ((struct sNode*)svar)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 1990):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1899, 1991);
    }
    else if(string_operator_equals(type2->mClass->mName,"vector")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj166=head,
        head=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1849, 1992),(char*)come_increment_ref_count(xsprintf("items"), "40obj2.nc", 1849, 1993),info), "40obj2.nc", 1849, 1995);
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1849, 1994) :0);
        obj=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1851, 1996);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        params_54=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "40obj2.nc", 1853, 1997, "struct list$1tuple2$2char$phsNode$ph$ph*"), "40obj2.nc", 1853, 1998)), "40obj2.nc", 1853, 1999);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params_54,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1855, 2000, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1855, 2001),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1855, 2002),(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1855, 2003)), "40obj2.nc", 1855, 2004));
        __right_value0 = (void*)0;
        method_node=(struct sNode*)come_increment_ref_count(create_method_call("alloc_size",(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1857, 2005),params_54,((void*)0),0,((void*)0),info,(_Bool)0), "40obj2.nc", 1857, 2006);
        __dec_obj167=len,
        len=(struct sNode*)come_increment_ref_count(method_node, "40obj2.nc", 1859, 2008);
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1859, 2007) :0);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 2009):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params_54, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1899, 2010);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 2011):(void*)0);
    }
    else if(string_operator_equals(type2->mClass->mName,"map")||string_operator_equals(type2->mClass->mName,"list")) {
        err_msg(info,"can't get serialize memory of this type(%s).require to use to_vector method.",type2->mClass->mName);
        exit(1);
    }
    else if(type2->mHeap&&type2->mPointerNum==1&&type2->mNew) {
        __dec_obj168=head,
        head=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1866, 2013);
        (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1866, 2012) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 1867, 2016, "struct sNode");
        _inf_obj_value4=(struct sHeapSizeOfNode*)come_increment_ref_count(((struct sHeapSizeOfNode*)(__right_value1=sHeapSizeOfNode_initialize((struct sHeapSizeOfNode* )come_increment_ref_count((struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), "40obj2.nc", 1867, 2014, "struct sHeapSizeOfNode* "), "40obj2.nc", 1867, 2015),type2,info))), "40obj2.nc", 1867, 2017);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sHeapSizeOfNode_finalize;
        _inf_value4->clone=(void*)sHeapSizeOfNode_clone;
        _inf_value4->compile=(void*)sHeapSizeOfNode_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sHeapSizeOfNode_kind;
        _inf_value4->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj171=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value4, "40obj2.nc", 1867, 2027);
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1867, 2026) :0);
        come_call_finalizer(sHeapSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1867, 2028);
    }
    else if(type2->mHeap&&type2->mPointerNum==1) {
        static int n_55=0;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        var_name_56=(char*)come_increment_ref_count(xsprintf("__tmp_heap\%s",((char* )(__right_value0=int_to_string(++n_55)))), "40obj2.nc", 1871, 2029);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1871, 2030));
        __right_value0 = (void*)0;
        svar_57=(struct sNode*)come_increment_ref_count(store_var((char* )come_increment_ref_count(var_name_56, "40obj2.nc", 1873, 2031),((void*)0),((void*)0),type2,(_Bool)1,node,info,(_Bool)0), "40obj2.nc", 1873, 2032);
        __dec_obj172=head,
        head=(struct sNode*)come_increment_ref_count(svar_57, "40obj2.nc", 1875, 2034);
        (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1875, 2033) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 1876, 2038, "struct sNode");
        _inf_obj_value5=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value2=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "40obj2.nc", 1876, 2035, "struct sDynamicSizeOfExpNode* "), "40obj2.nc", 1876, 2036),(struct sNode*)come_increment_ref_count(create_load_var(var_name_56,info), "40obj2.nc", 1876, 2037),info))), "40obj2.nc", 1876, 2039);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value5->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value5->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __dec_obj175=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value5, "40obj2.nc", 1876, 2049);
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1876, 2048) :0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1876, 2050);
        (var_name_56 = come_decrement_ref_count(var_name_56, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 1899, 2051));
        ((svar_57) ? svar_57 = come_decrement_ref_count(svar_57, ((struct sNode*)svar_57)->finalize, ((struct sNode*)svar_57)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 2052):(void*)0);
    }
    else if(type2->mPointerNum==1&&((come_value->var&&come_value->var->mType->mHeap)||(come_value->mLoadField&&come_value->var&&is_buffer_like_type(come_value->var->mType)))) {
        __dec_obj176=head,
        head=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1882, 2054);
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1882, 2053) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 1883, 2058, "struct sNode");
        _inf_obj_value6=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value1=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "40obj2.nc", 1883, 2055, "struct sDynamicSizeOfExpNode* "), "40obj2.nc", 1883, 2056),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1883, 2057),info))), "40obj2.nc", 1883, 2059);
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value6->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value6->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value6->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj177=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value6, "40obj2.nc", 1883, 2061);
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1883, 2060) :0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1883, 2062);
    }
    else if(type2->mPointerNum==1) {
        __dec_obj178=head,
        head=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1886, 2064);
        (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1886, 2063) :0);
        if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X0=(string_operator_equals(((char* )(__right_value1=node->kind(node->_protocol_obj))),"sRefferenceNode")));        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1887, 2065));
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 1888, 2069, "struct sNode");
            _inf_obj_value7=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value2=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "40obj2.nc", 1888, 2066, "struct sSizeOfExpNode* "), "40obj2.nc", 1888, 2067),(struct sNode*)come_increment_ref_count(sNode_clone(node->left_value(node->_protocol_obj)), "40obj2.nc", 1888, 2068),info))), "40obj2.nc", 1888, 2070);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value7->clone=(void*)sSizeOfExpNode_clone;
            _inf_value7->compile=(void*)sSizeOfExpNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sSizeOfExpNode_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __dec_obj181=len,
            len=(struct sNode*)come_increment_ref_count(_inf_value7, "40obj2.nc", 1888, 2080);
            (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1888, 2079) :0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1888, 2081);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 1891, 2085, "struct sNode");
            _inf_obj_value8=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "40obj2.nc", 1891, 2082, "struct sSizeOfExpNode* "), "40obj2.nc", 1891, 2083),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1891, 2084),info))), "40obj2.nc", 1891, 2086);
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value8->clone=(void*)sSizeOfExpNode_clone;
            _inf_value8->compile=(void*)sSizeOfExpNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sSizeOfExpNode_kind;
            _inf_value8->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj182=len,
            len=(struct sNode*)come_increment_ref_count(_inf_value8, "40obj2.nc", 1891, 2088);
            (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1891, 2087) :0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1891, 2089);
        }
    }
    else {
        __dec_obj183=head,
        head=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1895, 2091);
        (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1895, 2090) :0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 1896, 2095, "struct sNode");
        _inf_obj_value9=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "40obj2.nc", 1896, 2092, "struct sSizeOfExpNode* "), "40obj2.nc", 1896, 2093),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1896, 2094),info))), "40obj2.nc", 1896, 2096);
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sSizeOfExpNode_finalize;
        _inf_value9->clone=(void*)sSizeOfExpNode_clone;
        _inf_value9->compile=(void*)sSizeOfExpNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sSizeOfExpNode_kind;
        _inf_value9->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __dec_obj184=len,
        len=(struct sNode*)come_increment_ref_count(_inf_value9, "40obj2.nc", 1896, 2098);
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1896, 2097) :0);
        come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1896, 2099);
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(((struct tuple2$2sNode$phsNode$ph*)(__right_value1=tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "40obj2.nc", 1899, 2100, "struct tuple2$2sNode$phsNode$ph"), "40obj2.nc", 1899, 2112),(struct sNode*)come_increment_ref_count(head, "40obj2.nc", 1899, 2113),(struct sNode*)come_increment_ref_count(len, "40obj2.nc", 1899, 2114)))), "40obj2.nc", 1899, 2115);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 2116):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1899, 2117);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 2118):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1899, 2119):(void*)0);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1899, 2120);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1899, 2121);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1899, 2122);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1899, 2123);
    return __result_obj__0;
}

static struct sHeapSizeOfNode* sHeapSizeOfNode_clone(struct sHeapSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sHeapSizeOfNode_clone"; neo_current_frame = &fr;
    struct sHeapSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sHeapSizeOfNode*  result  ;
    char*  __dec_obj169  ;
    struct sType*  __dec_obj170  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sHeapSizeOfNode* )come_increment_ref_count((struct sHeapSizeOfNode *)come_calloc(1, sizeof(struct sHeapSizeOfNode )*(1), "sHeapSizeOfNode_clone", 5, 2018, "struct sHeapSizeOfNode* "), "sHeapSizeOfNode_clone", 5, 2019);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj169=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sHeapSizeOfNode_clone", 7, 2020, "char* "), "sHeapSizeOfNode_clone", 7, 2022);
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "sHeapSizeOfNode_clone", 7, 2021);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj170=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sHeapSizeOfNode_clone", 9, 2024);
        come_call_finalizer(sType_finalize, __dec_obj170,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sHeapSizeOfNode_clone", 9, 2023);
    }
        __result_obj__0 = result;
    come_call_finalizer(sHeapSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sHeapSizeOfNode_clone}", 10, 2025);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicSizeOfExpNode* sDynamicSizeOfExpNode_clone(struct sDynamicSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sDynamicSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicSizeOfExpNode*  result  ;
    char*  __dec_obj173  ;
    struct sNode* __dec_obj174;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "sDynamicSizeOfExpNode_clone", 5, 2040, "struct sDynamicSizeOfExpNode* "), "sDynamicSizeOfExpNode_clone", 5, 2041);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj173=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDynamicSizeOfExpNode_clone", 7, 2042, "char* "), "sDynamicSizeOfExpNode_clone", 7, 2044);
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0, (void*)0, "sDynamicSizeOfExpNode_clone", 7, 2043);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj174=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sDynamicSizeOfExpNode_clone", 9, 2046);
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0, (void*)0, "sDynamicSizeOfExpNode_clone", 9, 2045) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDynamicSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDynamicSizeOfExpNode_clone}", 10, 2047);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfExpNode_clone"; neo_current_frame = &fr;
    struct sSizeOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfExpNode*  result  ;
    char*  __dec_obj179  ;
    struct sNode* __dec_obj180;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "sSizeOfExpNode_clone", 5, 2071, "struct sSizeOfExpNode* "), "sSizeOfExpNode_clone", 5, 2072);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj179=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfExpNode_clone", 7, 2073, "char* "), "sSizeOfExpNode_clone", 7, 2075);
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0, (void*)0, "sSizeOfExpNode_clone", 7, 2074);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj180=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sSizeOfExpNode_clone", 9, 2077);
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0, (void*)0, "sSizeOfExpNode_clone", 9, 2076) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sSizeOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSizeOfExpNode_clone}", 10, 2078);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph_initialize"; neo_current_frame = &fr;
    struct sNode* __dec_obj185;
    struct sNode* __dec_obj186;
    struct tuple2$2sNode$phsNode$ph* __result_obj__0;
    __dec_obj185=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3913, 2102);
    (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3913, 2101) :0);
    __dec_obj186=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3914, 2104);
    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3914, 2103) :0);
        __result_obj__0 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3916, 2105);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 2108);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3916, 2109):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 3916, 2110):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3916, 2111);
    return __result_obj__0;
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sNode$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0,(void*)0, "tuple2$2sNode$phsNode$ph$p_finalize", 2, 2106):(void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2sNode$phsNode$ph$p_finalize", 3, 2107):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sSpanNode* sSpanNode_initialize(struct sSpanNode* self, struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj187;
    struct sSpanNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sSpanNode*)come_increment_ref_count(self, "40obj2.nc", 1906, 2124),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1906, 2125);
    __dec_obj187=self->node,
    self->node=(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1908, 2127);
    (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 1908, 2126) :0);
        __result_obj__0 = (struct sSpanNode*)come_increment_ref_count(self, "40obj2.nc", 1911, 2128);
    come_call_finalizer(sSpanNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1911, 2131);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1911, 2132):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sSpanNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "40obj2.nc}", 1911, 2133);
    return __result_obj__0;
}

char*  sSpanNode_kind(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sSpanNode","40obj2.nc",1913))), "40obj2.nc", 1913, 2134);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "40obj2.nc", 1913, 2135));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "40obj2.nc", 1913, 2136));
    return __result_obj__0;
}

_Bool sSpanNode_compile(struct sSpanNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_compile"; neo_current_frame = &fr;
    struct sNode* node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sType*  origin  ;
    _Bool global_;
    _Bool heap_;
    _Bool local_;
    struct sType*  type_  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sType*  generics_type  ;
    struct sType*  type  ;
    struct sType*  type2  ;
    struct sNode* obj;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct tuple2$2sNode$phsNode$ph* multiple_assign_var8
;    struct sNode* head=0;
    struct sNode* len=0;
    struct sNode* node2;
    struct sNode* stacktop;
    void* __right_value3 = (void*)0;
    struct sNode* method_node;
    _Bool Value_58;
    memset(&global_, 0, sizeof(global_));
    memset(&heap_, 0, sizeof(heap_));
    memset(&local_, 0, sizeof(local_));
    node=(struct sNode*)come_increment_ref_count(self->node, "40obj2.nc", 1918, 2137);
    Value=node_compile(node,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1921, 2138):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "40obj2.nc", 1924, 2139);
    origin=(struct sType* )come_increment_ref_count(come_value->type->mTypedefOriginalType, "40obj2.nc", 1926, 2140);
    if(come_value->type->mPointerNum!=1&&come_value->type->mArrayPointerNum!=1&&origin->mPointerNum!=1) {
        err_msg(info,"require pointer for span");
        show_type(come_value->type,info);
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1931, 2141):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1931, 2142);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1931, 2143);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(come_value->var) {
        if(come_value->type->mHeap) {
            err_msg(info,"require borrow and do not owned for span");
            show_type(come_value->type,info);
                        __result_obj__0 = (_Bool)1;
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1942, 2144):(void*)0);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1942, 2145);
            come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1942, 2146);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        global_=come_value->var->mGlobal;
        heap_=come_value->var->mType->mHeap;
        local_=!global_&&!heap_;
    }
    else {
        err_msg(info,"require variable name for span");
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1950, 2147):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1950, 2148);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1950, 2149);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "40obj2.nc", 1953, 2150);
    if(type_->mPointerNum==1&&list$1sNode$ph_length(type_->mArrayNum)>0) {
        type_->mPointerNum=1;
        list$1sNode$ph_reset(type_->mArrayNum);
        type_->mArrayPointerNum=0;
        type_->mArrayPointerType=(_Bool)0;
    }
    __right_value0 = (void*)0;
    generics_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1963, 2151, "struct sType* "), "40obj2.nc", 1963, 2152),(char*)come_increment_ref_count(xsprintf("span"), "40obj2.nc", 1963, 2153),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1963, 2154);
    list$1sType$ph_add(generics_type->mGenericsTypes,(struct sType* )come_increment_ref_count(type_, "40obj2.nc", 1964, 2155));
    if(type_->mArrayPointerNum==1) {
        type_->mArrayPointerNum=0;
        type_->mPointerNum=1;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1970, 2156, "struct sType* "), "40obj2.nc", 1970, 2157),(char*)come_increment_ref_count(xsprintf("span"), "40obj2.nc", 1970, 2158),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1970, 2159);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1sType$ph_add(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "40obj2.nc", 1971, 2160, "struct sType* "), "40obj2.nc", 1971, 2161),(char*)come_increment_ref_count(xsprintf("__generics_type0"), "40obj2.nc", 1971, 2162),(_Bool)0,info,(_Bool)0,0), "40obj2.nc", 1971, 2163));
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(type,generics_type,info), "40obj2.nc", 1973, 2164);
    __right_value0 = (void*)0;
    obj=(struct sNode*)come_increment_ref_count(create_new_object((struct sType* )come_increment_ref_count(type2, "40obj2.nc", 1975, 2165),info), "40obj2.nc", 1975, 2166);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "40obj2.nc", 1977, 2167, "struct list$1tuple2$2char$phsNode$ph$ph*"), "40obj2.nc", 1977, 2168)), "40obj2.nc", 1977, 2169);
    __right_value0 = (void*)0;
    multiple_assign_var8=((struct tuple2$2sNode$phsNode$ph*)(__right_value0=get_head_and_len((struct sNode*)come_increment_ref_count(node, "40obj2.nc", 1979, 2170),(struct CVALUE* )come_increment_ref_count(come_value, "40obj2.nc", 1979, 2171),info)));
    head=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v1, "40obj2.nc", 1979, 2172);
    len=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2, "40obj2.nc", 1979, 2173);
    come_call_finalizer(tuple2$2sNode$phsNode$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 1979, 2174);
    __right_value0 = (void*)0;
    node2=(struct sNode*)come_increment_ref_count(create_load_var("neo_current_frame",info), "40obj2.nc", 1981, 2175);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    stacktop=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node2, "40obj2.nc", 1982, 2176),(char*)come_increment_ref_count(xsprintf("stacktop"), "40obj2.nc", 1982, 2177),info), "40obj2.nc", 1982, 2178);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1984, 2179, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1984, 2180),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1984, 2181),(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1984, 2182)), "40obj2.nc", 1984, 2183));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1985, 2184, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1985, 2185),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1985, 2186),(struct sNode*)come_increment_ref_count(head, "40obj2.nc", 1985, 2187)), "40obj2.nc", 1985, 2188));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1986, 2189, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1986, 2190),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1986, 2191),(struct sNode*)come_increment_ref_count(len, "40obj2.nc", 1986, 2192)), "40obj2.nc", 1986, 2193));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1987, 2194, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1987, 2195),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1987, 2196),(struct sNode*)come_increment_ref_count(((local_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1987, 2197)), "40obj2.nc", 1987, 2198));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1987, 2199):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1987, 2200):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1988, 2201, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1988, 2202),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1988, 2203),(struct sNode*)come_increment_ref_count(((heap_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1988, 2204)), "40obj2.nc", 1988, 2205));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1988, 2206):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1988, 2207):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1989, 2208, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1989, 2209),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1989, 2210),(struct sNode*)come_increment_ref_count(((global_)?(((struct sNode*)(__right_value0=create_true_object(info)))):(((struct sNode*)(__right_value1=create_false_object(info))))), "40obj2.nc", 1989, 2211)), "40obj2.nc", 1989, 2212));
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1989, 2213):(void*)0);
    ((__right_value1) ? __right_value1 = come_decrement_ref_count(__right_value1, ((struct sNode*)__right_value1)->finalize, ((struct sNode*)__right_value1)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 1989, 2214):(void*)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 1990, 2215, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 1990, 2216),(char* )come_increment_ref_count((char* )((void*)0), "40obj2.nc", 1990, 2217),(struct sNode*)come_increment_ref_count(stacktop, "40obj2.nc", 1990, 2218)), "40obj2.nc", 1990, 2219));
    __right_value0 = (void*)0;
    method_node=(struct sNode*)come_increment_ref_count(create_method_call("initialize",(struct sNode*)come_increment_ref_count(obj, "40obj2.nc", 1992, 2220),params,((void*)0),0,((void*)0),info,(_Bool)0), "40obj2.nc", 1992, 2221);
    Value_58=node_compile(method_node,info);
    if(!Value_58) {
                __result_obj__0 = (_Bool)0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1995, 2222):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1995, 2223);
        come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1995, 2224);
        come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1995, 2225);
        come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1995, 2226);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1995, 2227);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1995, 2228);
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1995, 2229):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1995, 2230);
        ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1995, 2231):(void*)0);
        ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1995, 2232):(void*)0);
        ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1995, 2233):(void*)0);
        ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1995, 2234):(void*)0);
        ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1995, 2235):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (_Bool)1;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1998, 2236):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1998, 2237);
    come_call_finalizer(sType_finalize, origin, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1998, 2238);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1998, 2239);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1998, 2240);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1998, 2241);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1998, 2242);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1998, 2243):(void*)0);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 1998, 2244);
    ((head) ? head = come_decrement_ref_count(head, ((struct sNode*)head)->finalize, ((struct sNode*)head)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1998, 2245):(void*)0);
    ((len) ? len = come_decrement_ref_count(len, ((struct sNode*)len)->finalize, ((struct sNode*)len)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1998, 2246):(void*)0);
    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1998, 2247):(void*)0);
    ((stacktop) ? stacktop = come_decrement_ref_count(stacktop, ((struct sNode*)stacktop)->finalize, ((struct sNode*)stacktop)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1998, 2248):(void*)0);
    ((method_node) ? method_node = come_decrement_ref_count(method_node, ((struct sNode*)method_node)->finalize, ((struct sNode*)method_node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 1998, 2249):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sSpanNode_finalize(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sSpanNode_finalize", 2, 2129));
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0,(void*)0, "sSpanNode_finalize", 3, 2130):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var9
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct sNode* exp;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value10;
    struct sNewNode* _inf_obj_value10;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* _inf_value11;
    struct sNewNode* _inf_obj_value11;
    struct sNode* obj;
    char*  fun_name  ;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
    char*  word  ;
    _Bool no_comma;
    struct sNode* exp_59;
    struct sNode* exp_60;
    struct sNode* _inf_value12;
    struct sNewNode* _inf_obj_value12;
    struct sNode* _inf_value13;
    struct sNewNode* _inf_obj_value13;
    struct sNode* _inf_value14;
    struct sTrueNode* _inf_obj_value14;
    struct sBlock*  block  ;
    struct sNode* _inf_value15;
    struct sDeferNode* _inf_obj_value15;
    struct sNode* _inf_value16;
    struct sFalseNode* _inf_obj_value16;
    struct sNode* node;
    struct sNode* _inf_value17;
    struct sDeleteNode* _inf_obj_value17;
    struct sNode* node_76;
    struct sNode* _inf_value18;
    struct sBorrowNode* _inf_obj_value18;
    struct sNode* node_77;
    struct sNode* _inf_value19;
    struct sCloneNode* _inf_obj_value19;
    struct sNode* node_78;
    struct sNode* _inf_value20;
    struct sDupeNode* _inf_obj_value20;
    struct sNode* node_79;
    struct sNode* _inf_value21;
    struct sDummyHeapNode* _inf_obj_value21;
    struct sNode* node_80;
    struct sNode* _inf_value22;
    struct sGCIncNode* _inf_obj_value22;
    struct sNode* node_81;
    struct sNode* _inf_value23;
    struct sGCDecNode* _inf_obj_value23;
    struct sNode* node_82;
    struct sNode* _inf_value24;
    struct sGCDecNoFreeNode* _inf_obj_value24;
    struct sNode* node_83;
    struct sNode* _inf_value25;
    struct sGCDecNoFreeNode* _inf_obj_value25;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var10
;    struct sType*  param_type  =0;
    char*  param_name  =0;
    _Bool err_84=0;
    struct sType*  type2_  ;
    struct sType*  type2  ;
    struct sNode* _inf_value26;
    struct sIsHeap* _inf_obj_value26;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var11
;    struct sType*  param_type_85  =0;
    char*  param_name_86  =0;
    _Bool err_87=0;
    struct sType*  type2__88  ;
    struct sType*  type2_89  ;
    struct sNode* _inf_value27;
    struct sIsPointer* _inf_obj_value27;
    struct sNode* node_90;
    struct sNode* _inf_value28;
    struct sOptionalNode* _inf_obj_value28;
    struct sNode* node_91;
    struct sNode* _inf_value29;
    struct sRefNode* _inf_obj_value29;
    struct sNode* node_92;
    struct sNode* _inf_value30;
    struct sSpanNode* _inf_obj_value30;
    _Bool come_c;
    struct sNode* node_93;
    _Bool come_safe;
    struct sNode* node_94;
    _Bool come_safe_95;
    struct sNode* node_96;
    _Bool no_comma_97;
    struct sNode* exp_98;
    struct list$1sType$ph* types;
    struct list$1sNode$ph* exps;
    struct sNode* default_exp;
    _Bool no_comma_99;
    struct sNode* __dec_obj228;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var12
;    struct sType*  type_100  =0;
    char*  name_101  =0;
    _Bool err_102=0;
    _Bool no_comma_103;
    struct sNode* node_104;
    struct sNode* _inf_value31;
    struct sGeneric* _inf_obj_value31;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var13
;    struct sType*  type_105  =0;
    char*  name_106  =0;
    _Bool err_107=0;
    char*  word_108  ;
    struct sNode* _inf_value32;
    struct sOffsetOf* _inf_obj_value32;
    _Bool paren;
    _Bool is_type_name_flag;
    char* p;
    int sline;
    char*  word_109  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var14
;    struct sType*  type_110  =0;
    char*  name_111  =0;
    _Bool err_112=0;
    struct sNode* _inf_value33;
    struct sSizeOfNode* _inf_obj_value33;
    struct sNode* exp_113;
    _Bool no_comma_114;
    struct sNode* __dec_obj239;
    struct sNode* __dec_obj240;
    struct sNode* _inf_value34;
    struct sSizeOfExpNode* _inf_obj_value34;
    _Bool paren_115;
    struct sNode* exp_116;
    _Bool no_comma_117;
    struct sNode* __dec_obj241;
    struct sNode* __dec_obj242;
    struct sNode* _inf_value35;
    struct sDynamicTypeOf* _inf_obj_value35;
    _Bool paren_118;
    struct sNode* exp_119;
    _Bool no_comma_120;
    struct sNode* __dec_obj245;
    struct sNode* __dec_obj246;
    struct sNode* _inf_value36;
    struct sDynamicSizeOfExpNode* _inf_obj_value36;
    _Bool paren_121;
    _Bool is_type_name_flag_122;
    char* p_123;
    int sline_124;
    char*  word_125  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var15
;    struct sType*  type_126  =0;
    char*  name_127  =0;
    _Bool err_128=0;
    struct sNode* _inf_value37;
    struct sAlignOfNode* _inf_obj_value37;
    struct sNode* exp_129;
    _Bool no_comma_130;
    struct sNode* __dec_obj249;
    struct sNode* __dec_obj250;
    struct sNode* _inf_value38;
    struct sAlignOfExpNode* _inf_obj_value38;
    _Bool paren_131;
    _Bool is_type_name_flag_132;
    char* p_133;
    int sline_134;
    char*  word_135  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var16
;    struct sType*  type_136  =0;
    char*  name_137  =0;
    _Bool err_138=0;
    struct sNode* _inf_value39;
    struct sAlignOfNode2* _inf_obj_value39;
    struct sNode* exp_139;
    _Bool no_comma_140;
    struct sNode* __dec_obj255;
    struct sNode* __dec_obj256;
    struct sNode* _inf_value40;
    struct sAlignOfExpNode2* _inf_obj_value40;
    memset(&exp_113, 0, sizeof(exp_113));
    memset(&exp_116, 0, sizeof(exp_116));
    memset(&exp_119, 0, sizeof(exp_119));
    memset(&exp_129, 0, sizeof(exp_129));
    memset(&exp_139, 0, sizeof(exp_139));
    if(!gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var9=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type=(struct sType* )come_increment_ref_count(multiple_assign_var9->v1, "40obj2.nc", 2006, 2250);
        name=(char* )come_increment_ref_count(multiple_assign_var9->v2, "40obj2.nc", 2006, 2251);
        err=multiple_assign_var9->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2006, 2254);
        if(!err) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(span$1char$p_operator_derefference(info->p)==40) {
            if(type->mClass->mNumber) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2016, 2255);
                expected_next_character(41,info);
                                __right_value0 = (void*)0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2020, 2259, "struct sNode");
                _inf_obj_value10=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "40obj2.nc", 2020, 2256, "struct sNewNode* "), "40obj2.nc", 2020, 2257),type,((void*)0),(struct sNode*)come_increment_ref_count(exp, "40obj2.nc", 2020, 2258),info))), "40obj2.nc", 2020, 2260);
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sNewNode_finalize;
                _inf_value10->clone=(void*)sNewNode_clone;
                _inf_value10->compile=(void*)sNewNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sNewNode_kind;
                _inf_value10->left_value=(void*)sNodeBase_left_value;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "40obj2.nc", 2020, 2261);
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2020, 2262):(void*)0);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2020, 2263);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2020, 2264));
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2020, 2265);
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2020, 2266):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2020, 2267):(void*)0);
                return __result_obj__0;
                ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2028, 2268):(void*)0);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2023, 2271, "struct sNode");
                _inf_obj_value11=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "40obj2.nc", 2023, 2269, "struct sNewNode* "), "40obj2.nc", 2023, 2270),type,((void*)0),((void*)0),info))), "40obj2.nc", 2023, 2272);
                _inf_value11->_protocol_obj=_inf_obj_value11;
                _inf_value11->finalize=(void*)sNewNode_finalize;
                _inf_value11->clone=(void*)sNewNode_clone;
                _inf_value11->compile=(void*)sNewNode_compile;
                _inf_value11->sline=(void*)sNodeBase_sline;
                _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                _inf_value11->sname=(void*)sNodeBase_sname;
                _inf_value11->terminated=(void*)sNodeBase_terminated;
                _inf_value11->kind=(void*)sNewNode_kind;
                _inf_value11->left_value=(void*)sNodeBase_left_value;
                __right_value2 = (void*)0;
                obj=(struct sNode*)come_increment_ref_count(_inf_value11, "40obj2.nc", 2023, 2273);
                come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2023, 2274);
                __right_value0 = (void*)0;
                fun_name=(char* )come_increment_ref_count(__builtin_string("initialize","40obj2.nc",2024), "40obj2.nc", 2024, 2275);
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj), "40obj2.nc", 2026, 2276),(char* )come_increment_ref_count(__builtin_string(fun_name,"40obj2.nc",2026), "40obj2.nc", 2026, 2277),info,(_Bool)0))), "40obj2.nc", 2026, 2278);
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2026, 2279):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2026, 2280));
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2026, 2281);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2026, 2282));
                ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2026, 2283):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2026, 2284):(void*)0);
                return __result_obj__0;
                ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2028, 2285):(void*)0);
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2028, 2286));
            }
        }
        else if(span$1char$p_operator_derefference(info->p)==123) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "40obj2.nc", 2033, 2287, "struct list$1tuple2$2char$phsNode$ph$ph*"), "40obj2.nc", 2033, 2288)), "40obj2.nc", 2033, 2289);
            while((_Bool)1) {
                __right_value0 = (void*)0;
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "40obj2.nc", 2036, 2290);
                if(span$1char$p_operator_derefference(info->p)==58) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    no_comma=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __right_value0 = (void*)0;
                    exp_59=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2044, 2291);
                    info->no_comma=no_comma;
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 2047, 2292, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 2047, 2293),(char* )come_increment_ref_count(word, "40obj2.nc", 2047, 2294),(struct sNode*)come_increment_ref_count(exp_59, "40obj2.nc", 2047, 2295)), "40obj2.nc", 2047, 2296));
                    ((exp_59) ? exp_59 = come_decrement_ref_count(exp_59, ((struct sNode*)exp_59)->finalize, ((struct sNode*)exp_59)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2059, 2297):(void*)0);
                }
                else if(span$1char$p_operator_derefference(info->p)==44) {
                    __right_value0 = (void*)0;
                    exp_60=(struct sNode*)come_increment_ref_count(create_load_var(word,info), "40obj2.nc", 2050, 2298);
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "40obj2.nc", 2052, 2299, "struct tuple2$2char$phsNode$ph"), "40obj2.nc", 2052, 2300),(char* )come_increment_ref_count(word, "40obj2.nc", 2052, 2301),(struct sNode*)come_increment_ref_count(exp_60, "40obj2.nc", 2052, 2302)), "40obj2.nc", 2052, 2303));
                    ((exp_60) ? exp_60 = come_decrement_ref_count(exp_60, ((struct sNode*)exp_60)->finalize, ((struct sNode*)exp_60)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2059, 2304):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",span$1char$p_operator_derefference(info->p));
                    exit(2);
                }
                if(span$1char$p_operator_derefference(info->p)==44) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(span$1char$p_operator_derefference(info->p)==125) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2066, 2305));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",span$1char$p_operator_derefference(info->p));
                    exit(2);
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2073, 2306));
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2073, 2310, "struct sNode");
            _inf_obj_value12=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "40obj2.nc", 2073, 2307, "struct sNewNode* "), "40obj2.nc", 2073, 2308),type,(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer, "40obj2.nc", 2073, 2309),((void*)0),info))), "40obj2.nc", 2073, 2311);
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sNewNode_finalize;
            _inf_value12->clone=(void*)sNewNode_clone;
            _inf_value12->compile=(void*)sNewNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sNewNode_kind;
            _inf_value12->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "40obj2.nc", 2073, 2312);
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2073, 2313);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2073, 2314);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2073, 2315));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2073, 2316);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2073, 2317):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2073, 2318):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2078, 2319);
        }
        else {
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2076, 2322, "struct sNode");
            _inf_obj_value13=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value1=sNewNode_initialize((struct sNewNode* )come_increment_ref_count((struct sNewNode *)come_calloc(1, sizeof(struct sNewNode )*(1), "40obj2.nc", 2076, 2320, "struct sNewNode* "), "40obj2.nc", 2076, 2321),type,((void*)0),((void*)0),info))), "40obj2.nc", 2076, 2323);
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sNewNode_finalize;
            _inf_value13->clone=(void*)sNewNode_clone;
            _inf_value13->compile=(void*)sNewNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sNewNode_kind;
            _inf_value13->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "40obj2.nc", 2076, 2324);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2076, 2325);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2076, 2326));
            come_call_finalizer(sNewNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2076, 2327);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2076, 2328):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2076, 2329):(void*)0);
            return __result_obj__0;
        }
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2330);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2720, 2331));
    }
    else if(charp_operator_equals(buf,"true")) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2080, 2334, "struct sNode");
        _inf_obj_value14=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value1=sTrueNode_initialize((struct sTrueNode* )come_increment_ref_count((struct sTrueNode *)come_calloc(1, sizeof(struct sTrueNode )*(1), "40obj2.nc", 2080, 2332, "struct sTrueNode* "), "40obj2.nc", 2080, 2333),info))), "40obj2.nc", 2080, 2335);
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sTrueNode_finalize;
        _inf_value14->clone=(void*)sTrueNode_clone;
        _inf_value14->compile=(void*)sTrueNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sTrueNode_kind;
        _inf_value14->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "40obj2.nc", 2080, 2336);
        come_call_finalizer(sTrueNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2080, 2337);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2080, 2338):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2080, 2339):(void*)0);
        return __result_obj__0;
    }
    else if(charp_operator_equals(buf,"defer")) {
        __right_value0 = (void*)0;
        block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "40obj2.nc", 2083, 2340);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2085, 2344, "struct sNode");
        _inf_obj_value15=(struct sDeferNode*)come_increment_ref_count(((struct sDeferNode*)(__right_value1=sDeferNode_initialize((struct sDeferNode* )come_increment_ref_count((struct sDeferNode *)come_calloc(1, sizeof(struct sDeferNode )*(1), "40obj2.nc", 2085, 2341, "struct sDeferNode* "), "40obj2.nc", 2085, 2342),(struct sBlock* )come_increment_ref_count(block, "40obj2.nc", 2085, 2343),info))), "40obj2.nc", 2085, 2345);
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sDeferNode_finalize;
        _inf_value15->clone=(void*)sDeferNode_clone;
        _inf_value15->compile=(void*)sDeferNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sDeferNode_kind;
        _inf_value15->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "40obj2.nc", 2085, 2497);
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2085, 2498);
        come_call_finalizer(sDeferNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2085, 2499);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2085, 2500):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2085, 2501):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2502);
    }
    else if(charp_operator_equals(buf,"false")) {
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2088, 2505, "struct sNode");
        _inf_obj_value16=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value1=sFalseNode_initialize((struct sFalseNode* )come_increment_ref_count((struct sFalseNode *)come_calloc(1, sizeof(struct sFalseNode )*(1), "40obj2.nc", 2088, 2503, "struct sFalseNode* "), "40obj2.nc", 2088, 2504),info))), "40obj2.nc", 2088, 2506);
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFalseNode_finalize;
        _inf_value16->clone=(void*)sFalseNode_clone;
        _inf_value16->compile=(void*)sFalseNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFalseNode_kind;
        _inf_value16->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "40obj2.nc", 2088, 2507);
        come_call_finalizer(sFalseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2088, 2508);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2088, 2509):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2088, 2510):(void*)0);
        return __result_obj__0;
    }
    else if(!gComeC&&charp_operator_equals(buf,"delete")&&span$1char$p_operator_derefference(info->p)!=40) {
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2091, 2511);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2093, 2515, "struct sNode");
        _inf_obj_value17=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value1=sDeleteNode_initialize((struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), "40obj2.nc", 2093, 2512, "struct sDeleteNode* "), "40obj2.nc", 2093, 2513),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 2093, 2514),info))), "40obj2.nc", 2093, 2516);
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sDeleteNode_finalize;
        _inf_value17->clone=(void*)sDeleteNode_clone;
        _inf_value17->compile=(void*)sDeleteNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sDeleteNode_kind;
        _inf_value17->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value17)), "40obj2.nc", 2093, 2525);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2093, 2526):(void*)0);
        come_call_finalizer(sDeleteNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2093, 2527);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2093, 2528):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2093, 2529):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2530):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"borrow")&&span$1char$p_operator_derefference(info->p)!=40) {
        __right_value0 = (void*)0;
        node_76=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2096, 2531);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2098, 2535, "struct sNode");
        _inf_obj_value18=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value1=sBorrowNode_initialize((struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), "40obj2.nc", 2098, 2532, "struct sBorrowNode* "), "40obj2.nc", 2098, 2533),(struct sNode*)come_increment_ref_count(node_76, "40obj2.nc", 2098, 2534),info))), "40obj2.nc", 2098, 2536);
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sBorrowNode_finalize;
        _inf_value18->clone=(void*)sBorrowNode_clone;
        _inf_value18->compile=(void*)sBorrowNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sBorrowNode_kind;
        _inf_value18->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value18)), "40obj2.nc", 2098, 2545);
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2098, 2546):(void*)0);
        come_call_finalizer(sBorrowNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2098, 2547);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2098, 2548):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2098, 2549):(void*)0);
        return __result_obj__0;
        ((node_76) ? node_76 = come_decrement_ref_count(node_76, ((struct sNode*)node_76)->finalize, ((struct sNode*)node_76)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2550):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"clone")&&span$1char$p_operator_derefference(info->p)!=40) {
        __right_value0 = (void*)0;
        node_77=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2101, 2551);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2103, 2555, "struct sNode");
        _inf_obj_value19=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value1=sCloneNode_initialize((struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), "40obj2.nc", 2103, 2552, "struct sCloneNode* "), "40obj2.nc", 2103, 2553),(struct sNode*)come_increment_ref_count(node_77, "40obj2.nc", 2103, 2554),info))), "40obj2.nc", 2103, 2556);
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sCloneNode_finalize;
        _inf_value19->clone=(void*)sCloneNode_clone;
        _inf_value19->compile=(void*)sCloneNode_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sline_real=(void*)sNodeBase_sline_real;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sCloneNode_kind;
        _inf_value19->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)), "40obj2.nc", 2103, 2565);
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2103, 2566):(void*)0);
        come_call_finalizer(sCloneNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2103, 2567);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2103, 2568):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2103, 2569):(void*)0);
        return __result_obj__0;
        ((node_77) ? node_77 = come_decrement_ref_count(node_77, ((struct sNode*)node_77)->finalize, ((struct sNode*)node_77)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2570):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dupe")) {
        __right_value0 = (void*)0;
        node_78=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2106, 2571);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2108, 2575, "struct sNode");
        _inf_obj_value20=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value1=sDupeNode_initialize((struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), "40obj2.nc", 2108, 2572, "struct sDupeNode* "), "40obj2.nc", 2108, 2573),(struct sNode*)come_increment_ref_count(node_78, "40obj2.nc", 2108, 2574),info))), "40obj2.nc", 2108, 2576);
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sDupeNode_finalize;
        _inf_value20->clone=(void*)sDupeNode_clone;
        _inf_value20->compile=(void*)sDupeNode_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sline_real=(void*)sNodeBase_sline_real;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sDupeNode_kind;
        _inf_value20->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value20)), "40obj2.nc", 2108, 2585);
        ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2108, 2586):(void*)0);
        come_call_finalizer(sDupeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2108, 2587);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2108, 2588):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2108, 2589):(void*)0);
        return __result_obj__0;
        ((node_78) ? node_78 = come_decrement_ref_count(node_78, ((struct sNode*)node_78)->finalize, ((struct sNode*)node_78)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2590):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        __right_value0 = (void*)0;
        node_79=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2111, 2591);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2113, 2595, "struct sNode");
        _inf_obj_value21=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value1=sDummyHeapNode_initialize((struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), "40obj2.nc", 2113, 2592, "struct sDummyHeapNode* "), "40obj2.nc", 2113, 2593),(struct sNode*)come_increment_ref_count(node_79, "40obj2.nc", 2113, 2594),info))), "40obj2.nc", 2113, 2596);
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value21->clone=(void*)sDummyHeapNode_clone;
        _inf_value21->compile=(void*)sDummyHeapNode_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sDummyHeapNode_kind;
        _inf_value21->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value21)), "40obj2.nc", 2113, 2605);
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2113, 2606):(void*)0);
        come_call_finalizer(sDummyHeapNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2113, 2607);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2113, 2608):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2113, 2609):(void*)0);
        return __result_obj__0;
        ((node_79) ? node_79 = come_decrement_ref_count(node_79, ((struct sNode*)node_79)->finalize, ((struct sNode*)node_79)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2610):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_inc")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_80=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2119, 2611);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2123, 2615, "struct sNode");
        _inf_obj_value22=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value1=sGCIncNode_initialize((struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), "40obj2.nc", 2123, 2612, "struct sGCIncNode* "), "40obj2.nc", 2123, 2613),(struct sNode*)come_increment_ref_count(node_80, "40obj2.nc", 2123, 2614),info))), "40obj2.nc", 2123, 2616);
        _inf_value22->_protocol_obj=_inf_obj_value22;
        _inf_value22->finalize=(void*)sGCIncNode_finalize;
        _inf_value22->clone=(void*)sGCIncNode_clone;
        _inf_value22->compile=(void*)sGCIncNode_compile;
        _inf_value22->sline=(void*)sNodeBase_sline;
        _inf_value22->sline_real=(void*)sNodeBase_sline_real;
        _inf_value22->sname=(void*)sNodeBase_sname;
        _inf_value22->terminated=(void*)sNodeBase_terminated;
        _inf_value22->kind=(void*)sGCIncNode_kind;
        _inf_value22->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value22)), "40obj2.nc", 2123, 2625);
        ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2123, 2626):(void*)0);
        come_call_finalizer(sGCIncNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2123, 2627);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2123, 2628):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2123, 2629):(void*)0);
        return __result_obj__0;
        ((node_80) ? node_80 = come_decrement_ref_count(node_80, ((struct sNode*)node_80)->finalize, ((struct sNode*)node_80)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2630):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_81=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2129, 2631);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2133, 2635, "struct sNode");
        _inf_obj_value23=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value1=sGCDecNode_initialize((struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), "40obj2.nc", 2133, 2632, "struct sGCDecNode* "), "40obj2.nc", 2133, 2633),(struct sNode*)come_increment_ref_count(node_81, "40obj2.nc", 2133, 2634),info))), "40obj2.nc", 2133, 2636);
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sGCDecNode_finalize;
        _inf_value23->clone=(void*)sGCDecNode_clone;
        _inf_value23->compile=(void*)sGCDecNode_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sGCDecNode_kind;
        _inf_value23->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value23)), "40obj2.nc", 2133, 2645);
        ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2133, 2646):(void*)0);
        come_call_finalizer(sGCDecNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2133, 2647);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2133, 2648):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2133, 2649):(void*)0);
        return __result_obj__0;
        ((node_81) ? node_81 = come_decrement_ref_count(node_81, ((struct sNode*)node_81)->finalize, ((struct sNode*)node_81)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2650):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_82=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2139, 2651);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2143, 2655, "struct sNode");
        _inf_obj_value24=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "40obj2.nc", 2143, 2652, "struct sGCDecNoFreeNode* "), "40obj2.nc", 2143, 2653),(struct sNode*)come_increment_ref_count(node_82, "40obj2.nc", 2143, 2654),info))), "40obj2.nc", 2143, 2656);
        _inf_value24->_protocol_obj=_inf_obj_value24;
        _inf_value24->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value24->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value24->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value24->sline=(void*)sNodeBase_sline;
        _inf_value24->sline_real=(void*)sNodeBase_sline_real;
        _inf_value24->sname=(void*)sNodeBase_sname;
        _inf_value24->terminated=(void*)sNodeBase_terminated;
        _inf_value24->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value24->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value24)), "40obj2.nc", 2143, 2665);
        ((node_82) ? node_82 = come_decrement_ref_count(node_82, ((struct sNode*)node_82)->finalize, ((struct sNode*)node_82)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2143, 2666):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2143, 2667);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2143, 2668):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2143, 2669):(void*)0);
        return __result_obj__0;
        ((node_82) ? node_82 = come_decrement_ref_count(node_82, ((struct sNode*)node_82)->finalize, ((struct sNode*)node_82)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2670):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"lock")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_83=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2149, 2671);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2153, 2675, "struct sNode");
        _inf_obj_value25=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value1=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "40obj2.nc", 2153, 2672, "struct sGCDecNoFreeNode* "), "40obj2.nc", 2153, 2673),(struct sNode*)come_increment_ref_count(node_83, "40obj2.nc", 2153, 2674),info))), "40obj2.nc", 2153, 2676);
        _inf_value25->_protocol_obj=_inf_obj_value25;
        _inf_value25->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value25->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value25->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value25->sline=(void*)sNodeBase_sline;
        _inf_value25->sline_real=(void*)sNodeBase_sline_real;
        _inf_value25->sname=(void*)sNodeBase_sname;
        _inf_value25->terminated=(void*)sNodeBase_terminated;
        _inf_value25->kind=(void*)sGCDecNoFreeNode_kind;
        _inf_value25->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value25)), "40obj2.nc", 2153, 2677);
        ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2153, 2678):(void*)0);
        come_call_finalizer(sGCDecNoFreeNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2153, 2679);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2153, 2680):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2153, 2681):(void*)0);
        return __result_obj__0;
        ((node_83) ? node_83 = come_decrement_ref_count(node_83, ((struct sNode*)node_83)->finalize, ((struct sNode*)node_83)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2682):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"isheap")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var10=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type=(struct sType* )come_increment_ref_count(multiple_assign_var10->v1, "40obj2.nc", 2159, 2683);
        param_name=(char* )come_increment_ref_count(multiple_assign_var10->v2, "40obj2.nc", 2159, 2684);
        err_84=multiple_assign_var10->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2159, 2685);
        if(!err_84) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        __right_value0 = (void*)0;
        type2_=(struct sType* )come_increment_ref_count(solve_generics(param_type,info->generics_type,info), "40obj2.nc", 2165, 2686);
        __right_value0 = (void*)0;
        type2=(struct sType* )come_increment_ref_count(solve_method_generics(type2_,info), "40obj2.nc", 2166, 2687);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2170, 2690, "struct sNode");
        _inf_obj_value26=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value1=sIsHeap_initialize((struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), "40obj2.nc", 2170, 2688, "struct sIsHeap* "), "40obj2.nc", 2170, 2689),type2,info))), "40obj2.nc", 2170, 2691);
        _inf_value26->_protocol_obj=_inf_obj_value26;
        _inf_value26->finalize=(void*)sIsHeap_finalize;
        _inf_value26->clone=(void*)sIsHeap_clone;
        _inf_value26->compile=(void*)sIsHeap_compile;
        _inf_value26->sline=(void*)sNodeBase_sline;
        _inf_value26->sline_real=(void*)sNodeBase_sline_real;
        _inf_value26->sname=(void*)sNodeBase_sname;
        _inf_value26->terminated=(void*)sNodeBase_terminated;
        _inf_value26->kind=(void*)sIsHeap_kind;
        _inf_value26->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value26)), "40obj2.nc", 2170, 2700);
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2170, 2701);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2170, 2702));
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2170, 2703);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2170, 2704);
        come_call_finalizer(sIsHeap_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2170, 2705);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2170, 2706):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2170, 2707):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2708);
        (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2720, 2709));
        come_call_finalizer(sType_finalize, type2_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2710);
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2711);
    }
    else if(charp_operator_equals(buf,"ispointer")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var11=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_85=(struct sType* )come_increment_ref_count(multiple_assign_var11->v1, "40obj2.nc", 2176, 2712);
        param_name_86=(char* )come_increment_ref_count(multiple_assign_var11->v2, "40obj2.nc", 2176, 2713);
        err_87=multiple_assign_var11->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2176, 2714);
        if(!err_87) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        __right_value0 = (void*)0;
        type2__88=(struct sType* )come_increment_ref_count(solve_generics(param_type_85,info->generics_type,info), "40obj2.nc", 2182, 2715);
        __right_value0 = (void*)0;
        type2_89=(struct sType* )come_increment_ref_count(solve_method_generics(type2__88,info), "40obj2.nc", 2183, 2716);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2187, 2719, "struct sNode");
        _inf_obj_value27=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value1=sIsPointer_initialize((struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), "40obj2.nc", 2187, 2717, "struct sIsPointer* "), "40obj2.nc", 2187, 2718),type2_89,info))), "40obj2.nc", 2187, 2720);
        _inf_value27->_protocol_obj=_inf_obj_value27;
        _inf_value27->finalize=(void*)sIsPointer_finalize;
        _inf_value27->clone=(void*)sIsPointer_clone;
        _inf_value27->compile=(void*)sIsPointer_compile;
        _inf_value27->sline=(void*)sNodeBase_sline;
        _inf_value27->sline_real=(void*)sNodeBase_sline_real;
        _inf_value27->sname=(void*)sNodeBase_sname;
        _inf_value27->terminated=(void*)sNodeBase_terminated;
        _inf_value27->kind=(void*)sIsPointer_kind;
        _inf_value27->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value27)), "40obj2.nc", 2187, 2729);
        come_call_finalizer(sType_finalize, param_type_85, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2187, 2730);
        (param_name_86 = come_decrement_ref_count(param_name_86, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2187, 2731));
        come_call_finalizer(sType_finalize, type2__88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2187, 2732);
        come_call_finalizer(sType_finalize, type2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2187, 2733);
        come_call_finalizer(sIsPointer_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2187, 2734);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2187, 2735):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2187, 2736):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, param_type_85, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2737);
        (param_name_86 = come_decrement_ref_count(param_name_86, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2720, 2738));
        come_call_finalizer(sType_finalize, type2__88, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2739);
        come_call_finalizer(sType_finalize, type2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2740);
    }
    else if(!gComeC&&charp_operator_equals(buf,"opt")&&span$1char$p_operator_derefference(info->p)!=60) {
        __right_value0 = (void*)0;
        node_90=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2191, 2741);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2193, 2745, "struct sNode");
        _inf_obj_value28=(struct sOptionalNode*)come_increment_ref_count(((struct sOptionalNode*)(__right_value1=sOptionalNode_initialize((struct sOptionalNode* )come_increment_ref_count((struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), "40obj2.nc", 2193, 2742, "struct sOptionalNode* "), "40obj2.nc", 2193, 2743),(struct sNode*)come_increment_ref_count(node_90, "40obj2.nc", 2193, 2744),info))), "40obj2.nc", 2193, 2746);
        _inf_value28->_protocol_obj=_inf_obj_value28;
        _inf_value28->finalize=(void*)sOptionalNode_finalize;
        _inf_value28->clone=(void*)sOptionalNode_clone;
        _inf_value28->compile=(void*)sOptionalNode_compile;
        _inf_value28->sline=(void*)sNodeBase_sline;
        _inf_value28->sline_real=(void*)sNodeBase_sline_real;
        _inf_value28->sname=(void*)sNodeBase_sname;
        _inf_value28->terminated=(void*)sNodeBase_terminated;
        _inf_value28->kind=(void*)sOptionalNode_kind;
        _inf_value28->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value28)), "40obj2.nc", 2193, 2755);
        ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2193, 2756):(void*)0);
        come_call_finalizer(sOptionalNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2193, 2757);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2193, 2758):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2193, 2759):(void*)0);
        return __result_obj__0;
        ((node_90) ? node_90 = come_decrement_ref_count(node_90, ((struct sNode*)node_90)->finalize, ((struct sNode*)node_90)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2760):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"ref")&&span$1char$p_operator_derefference(info->p)!=60) {
        __right_value0 = (void*)0;
        node_91=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2196, 2761);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2198, 2765, "struct sNode");
        _inf_obj_value29=(struct sRefNode*)come_increment_ref_count(((struct sRefNode*)(__right_value1=sRefNode_initialize((struct sRefNode* )come_increment_ref_count((struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), "40obj2.nc", 2198, 2762, "struct sRefNode* "), "40obj2.nc", 2198, 2763),(struct sNode*)come_increment_ref_count(node_91, "40obj2.nc", 2198, 2764),info))), "40obj2.nc", 2198, 2766);
        _inf_value29->_protocol_obj=_inf_obj_value29;
        _inf_value29->finalize=(void*)sRefNode_finalize;
        _inf_value29->clone=(void*)sRefNode_clone;
        _inf_value29->compile=(void*)sRefNode_compile;
        _inf_value29->sline=(void*)sNodeBase_sline;
        _inf_value29->sline_real=(void*)sNodeBase_sline_real;
        _inf_value29->sname=(void*)sNodeBase_sname;
        _inf_value29->terminated=(void*)sNodeBase_terminated;
        _inf_value29->kind=(void*)sRefNode_kind;
        _inf_value29->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value29)), "40obj2.nc", 2198, 2775);
        ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2198, 2776):(void*)0);
        come_call_finalizer(sRefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2198, 2777);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2198, 2778):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2198, 2779):(void*)0);
        return __result_obj__0;
        ((node_91) ? node_91 = come_decrement_ref_count(node_91, ((struct sNode*)node_91)->finalize, ((struct sNode*)node_91)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2780):(void*)0);
    }
    else if(!gComeC&&charp_operator_equals(buf,"span")&&span$1char$p_operator_derefference(info->p)!=60) {
        __right_value0 = (void*)0;
        node_92=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2201, 2781);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2203, 2785, "struct sNode");
        _inf_obj_value30=(struct sSpanNode*)come_increment_ref_count(((struct sSpanNode*)(__right_value1=sSpanNode_initialize((struct sSpanNode* )come_increment_ref_count((struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), "40obj2.nc", 2203, 2782, "struct sSpanNode* "), "40obj2.nc", 2203, 2783),(struct sNode*)come_increment_ref_count(node_92, "40obj2.nc", 2203, 2784),info))), "40obj2.nc", 2203, 2786);
        _inf_value30->_protocol_obj=_inf_obj_value30;
        _inf_value30->finalize=(void*)sSpanNode_finalize;
        _inf_value30->clone=(void*)sSpanNode_clone;
        _inf_value30->compile=(void*)sSpanNode_compile;
        _inf_value30->sline=(void*)sNodeBase_sline;
        _inf_value30->sline_real=(void*)sNodeBase_sline_real;
        _inf_value30->sname=(void*)sNodeBase_sname;
        _inf_value30->terminated=(void*)sNodeBase_terminated;
        _inf_value30->kind=(void*)sSpanNode_kind;
        _inf_value30->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value30)), "40obj2.nc", 2203, 2795);
        ((node_92) ? node_92 = come_decrement_ref_count(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2203, 2796):(void*)0);
        come_call_finalizer(sSpanNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2203, 2797);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2203, 2798):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2203, 2799):(void*)0);
        return __result_obj__0;
        ((node_92) ? node_92 = come_decrement_ref_count(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2800):(void*)0);
    }
    else if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2212, 2801);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2212, 2802):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2212, 2803):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            info->p->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2220, 2804);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2220, 2805):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2220, 2806):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2226, 2807);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2226, 2808):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2226, 2809):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2234, 2810);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2234, 2811):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2234, 2812):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c=gComeC;
            gComeC=(_Bool)1;
            if(span$1char$p_operator_derefference(info->p)==123) {
                __right_value0 = (void*)0;
                node_93=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info), "40obj2.nc", 2244, 2813);
                gComeC=come_c;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_93, "40obj2.nc", 2248, 2814);
                ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2248, 2815):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2248, 2816):(void*)0);
                return __result_obj__0;
                ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2253, 2817):(void*)0);
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2251, 2818);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2251, 2819):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2251, 2820):(void*)0);
                return __result_obj__0;
            }
        }
        else if(parsecmp("unsafe",info)) {
            info->p->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            come_safe=gComeSafe;
            gComeSafe=(_Bool)0;
            if(span$1char$p_operator_derefference(info->p)==123) {
                __right_value0 = (void*)0;
                node_94=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)0,(_Bool)1,info), "40obj2.nc", 2262, 2821);
                gComeSafe=come_safe;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_94, "40obj2.nc", 2266, 2822);
                ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2266, 2823):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2266, 2824):(void*)0);
                return __result_obj__0;
                ((node_94) ? node_94 = come_decrement_ref_count(node_94, ((struct sNode*)node_94)->finalize, ((struct sNode*)node_94)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2271, 2825):(void*)0);
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2269, 2826);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2269, 2827):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2269, 2828):(void*)0);
                return __result_obj__0;
            }
        }
        else if(parsecmp("safe",info)) {
            info->p->p+=strlen("safe");
            skip_spaces_and_lf(info);
            come_safe_95=gComeSafe;
            gComeSafe=(_Bool)1;
            if(span$1char$p_operator_derefference(info->p)==123) {
                __right_value0 = (void*)0;
                node_96=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)0,(_Bool)0,info), "40obj2.nc", 2280, 2829);
                gComeSafe=come_safe_95;
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(node_96, "40obj2.nc", 2284, 2830);
                ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2284, 2831):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2284, 2832):(void*)0);
                return __result_obj__0;
                ((node_96) ? node_96 = come_decrement_ref_count(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2289, 2833):(void*)0);
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2287, 2834);
                ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2287, 2835):(void*)0);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2287, 2836):(void*)0);
                return __result_obj__0;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(charp_operator_equals(buf,"_Generic")&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        no_comma_97=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        exp_98=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2301, 2837);
        info->no_comma=no_comma_97;
        expected_next_character(44,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "40obj2.nc", 2306, 2838, "struct list$1sType$ph*"), "40obj2.nc", 2306, 2839)), "40obj2.nc", 2306, 2840);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "40obj2.nc", 2307, 2841, "struct list$1sNode$ph*"), "40obj2.nc", 2307, 2842)), "40obj2.nc", 2307, 2843);
        default_exp=((void*)0);
        while(1) {
            if(strncmp(info->p->p,"default",strlen("default"))==0) {
                info->p->p+=strlen("default");
                skip_spaces_and_lf(info);
                expected_next_character(58,info);
                no_comma_99=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj228=default_exp,
                default_exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2319, 2845);
                (__dec_obj228 ? __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2319, 2844) :0);
                info->no_comma=no_comma_99;
            }
            else {
                __right_value0 = (void*)0;
                multiple_assign_var12=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_100=(struct sType* )come_increment_ref_count(multiple_assign_var12->v1, "40obj2.nc", 2323, 2846);
                name_101=(char* )come_increment_ref_count(multiple_assign_var12->v2, "40obj2.nc", 2323, 2847);
                err_102=multiple_assign_var12->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2323, 2848);
                list$1sType$ph_add(types,(struct sType* )come_increment_ref_count(type_100, "40obj2.nc", 2325, 2849));
                expected_next_character(58,info);
                no_comma_103=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                node_104=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2331, 2850);
                info->no_comma=no_comma_103;
                list$1sNode$ph_add(exps,(struct sNode*)come_increment_ref_count(node_104, "40obj2.nc", 2334, 2851));
                come_call_finalizer(sType_finalize, type_100, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2337, 2852);
                (name_101 = come_decrement_ref_count(name_101, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2337, 2853));
                ((node_104) ? node_104 = come_decrement_ref_count(node_104, ((struct sNode*)node_104)->finalize, ((struct sNode*)node_104)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2337, 2854):(void*)0);
            }
            if(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            else if(span$1char$p_operator_derefference(info->p)==0) {
                err_msg(info,"invalid source end");
                exit(2);
            }
            else if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2352, 2861, "struct sNode");
        _inf_obj_value31=(struct sGeneric*)come_increment_ref_count(((struct sGeneric*)(__right_value1=sGeneric_initialize((struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), "40obj2.nc", 2352, 2855, "struct sGeneric* "), "40obj2.nc", 2352, 2856),(struct sNode*)come_increment_ref_count(exp_98, "40obj2.nc", 2352, 2857),(struct list$1sType$ph*)come_increment_ref_count(types, "40obj2.nc", 2352, 2858),(struct list$1sNode$ph*)come_increment_ref_count(exps, "40obj2.nc", 2352, 2859),(struct sNode*)come_increment_ref_count(default_exp, "40obj2.nc", 2352, 2860),info))), "40obj2.nc", 2352, 2862);
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sGeneric_finalize;
        _inf_value31->clone=(void*)sGeneric_clone;
        _inf_value31->compile=(void*)sGeneric_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sline_real=(void*)sNodeBase_sline_real;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sGeneric_kind;
        _inf_value31->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value31)), "40obj2.nc", 2352, 2877);
        ((exp_98) ? exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2352, 2878):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2352, 2879);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2352, 2880);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2352, 2881):(void*)0);
        come_call_finalizer(sGeneric_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2352, 2882);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2352, 2883):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2352, 2884):(void*)0);
        return __result_obj__0;
        ((exp_98) ? exp_98 = come_decrement_ref_count(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2885):(void*)0);
        come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2886);
        come_call_finalizer(list$1sNode$ph$p_finalize, exps, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2887);
        ((default_exp) ? default_exp = come_decrement_ref_count(default_exp, ((struct sNode*)default_exp)->finalize, ((struct sNode*)default_exp)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2888):(void*)0);
    }
    else if(charp_operator_equals(buf,"offsetof")||charp_operator_equals(buf,"__builtin_offsetof")) {
        expected_next_character(40,info);
        info->in_offsetof=(_Bool)1;
        __right_value0 = (void*)0;
        multiple_assign_var13=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type_105=(struct sType* )come_increment_ref_count(multiple_assign_var13->v1, "40obj2.nc", 2358, 2889);
        name_106=(char* )come_increment_ref_count(multiple_assign_var13->v2, "40obj2.nc", 2358, 2890);
        err_107=multiple_assign_var13->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2358, 2891);
        info->in_offsetof=(_Bool)0;
        if(!err_107) {
            err_msg(info,"parse type");
            exit(2);
        }
        expected_next_character(44,info);
        __right_value0 = (void*)0;
        word_108=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "40obj2.nc", 2368, 2892);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2372, 2896, "struct sNode");
        _inf_obj_value32=(struct sOffsetOf*)come_increment_ref_count(((struct sOffsetOf*)(__right_value1=sOffsetOf_initialize((struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), "40obj2.nc", 2372, 2893, "struct sOffsetOf* "), "40obj2.nc", 2372, 2894),type_105,(char* )come_increment_ref_count(word_108, "40obj2.nc", 2372, 2895),info))), "40obj2.nc", 2372, 2897);
        _inf_value32->_protocol_obj=_inf_obj_value32;
        _inf_value32->finalize=(void*)sOffsetOf_finalize;
        _inf_value32->clone=(void*)sOffsetOf_clone;
        _inf_value32->compile=(void*)sOffsetOf_compile;
        _inf_value32->sline=(void*)sNodeBase_sline;
        _inf_value32->sline_real=(void*)sNodeBase_sline_real;
        _inf_value32->sname=(void*)sNodeBase_sname;
        _inf_value32->terminated=(void*)sNodeBase_terminated;
        _inf_value32->kind=(void*)sOffsetOf_kind;
        _inf_value32->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value32)), "40obj2.nc", 2372, 2909);
        come_call_finalizer(sType_finalize, type_105, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2372, 2910);
        (name_106 = come_decrement_ref_count(name_106, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2372, 2911));
        (word_108 = come_decrement_ref_count(word_108, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2372, 2912));
        come_call_finalizer(sOffsetOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2372, 2913);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2372, 2914):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2372, 2915):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type_105, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2720, 2916);
        (name_106 = come_decrement_ref_count(name_106, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2720, 2917));
        (word_108 = come_decrement_ref_count(word_108, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2720, 2918));
    }
    else if(charp_operator_equals(buf,"sizeof")) {
        paren=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren=(_Bool)1;
        }
        is_type_name_flag=(_Bool)0;
        {
            p=info->p->p;
            sline=info->sline;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_109=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "40obj2.nc", 2390, 2919);
                if(is_type_name(word_109,info)) {
                    is_type_name_flag=(_Bool)1;
                }
                (word_109 = come_decrement_ref_count(word_109, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2397, 2920));
            }
            info->p->p=p;
            info->sline=sline;
        }
        if(is_type_name_flag) {
            __right_value0 = (void*)0;
            multiple_assign_var14=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_110=(struct sType* )come_increment_ref_count(multiple_assign_var14->v1, "40obj2.nc", 2402, 2921);
            name_111=(char* )come_increment_ref_count(multiple_assign_var14->v2, "40obj2.nc", 2402, 2922);
            err_112=multiple_assign_var14->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2402, 2923);
            if(!err_112) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2415, 2926, "struct sNode");
            _inf_obj_value33=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value1=sSizeOfNode_initialize((struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), "40obj2.nc", 2415, 2924, "struct sSizeOfNode* "), "40obj2.nc", 2415, 2925),type_110,info))), "40obj2.nc", 2415, 2927);
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sSizeOfNode_finalize;
            _inf_value33->clone=(void*)sSizeOfNode_clone;
            _inf_value33->compile=(void*)sSizeOfNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sSizeOfNode_kind;
            _inf_value33->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value33)), "40obj2.nc", 2415, 2936);
            come_call_finalizer(sType_finalize, type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2415, 2937);
            (name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2415, 2938));
            come_call_finalizer(sSizeOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2415, 2939);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2415, 2940):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2415, 2941):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_110, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2438, 2942);
            (name_111 = come_decrement_ref_count(name_111, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2438, 2943));
        }
        else {
            if(!paren) {
                no_comma_114=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj239=exp_113,
                exp_113=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "40obj2.nc", 2422, 2945);
                (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2422, 2944) :0);
                info->no_comma=no_comma_114;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj240=exp_113,
                exp_113=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2426, 2947);
                (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2426, 2946) :0);
            }
            if(paren&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2436, 2951, "struct sNode");
            _inf_obj_value34=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value1=sSizeOfExpNode_initialize((struct sSizeOfExpNode* )come_increment_ref_count((struct sSizeOfExpNode *)come_calloc(1, sizeof(struct sSizeOfExpNode )*(1), "40obj2.nc", 2436, 2948, "struct sSizeOfExpNode* "), "40obj2.nc", 2436, 2949),(struct sNode*)come_increment_ref_count(exp_113, "40obj2.nc", 2436, 2950),info))), "40obj2.nc", 2436, 2952);
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value34->clone=(void*)sSizeOfExpNode_clone;
            _inf_value34->compile=(void*)sSizeOfExpNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sSizeOfExpNode_kind;
            _inf_value34->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value34)), "40obj2.nc", 2436, 2953);
            ((exp_113) ? exp_113 = come_decrement_ref_count(exp_113, ((struct sNode*)exp_113)->finalize, ((struct sNode*)exp_113)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2436, 2954):(void*)0);
            come_call_finalizer(sSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2436, 2955);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2436, 2956):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2436, 2957):(void*)0);
            return __result_obj__0;
            ((exp_113) ? exp_113 = come_decrement_ref_count(exp_113, ((struct sNode*)exp_113)->finalize, ((struct sNode*)exp_113)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2438, 2958):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"dynamic_typeof")) {
        paren_115=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_115=(_Bool)1;
        }
        if(!paren_115) {
            no_comma_117=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj241=exp_116,
            exp_116=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "40obj2.nc", 2521, 2960);
            (__dec_obj241 ? __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2521, 2959) :0);
            info->no_comma=no_comma_117;
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj242=exp_116,
            exp_116=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2525, 2962);
            (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2525, 2961) :0);
        }
        if(paren_115&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2535, 2966, "struct sNode");
        _inf_obj_value35=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value1=sDynamicTypeOf_initialize((struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), "40obj2.nc", 2535, 2963, "struct sDynamicTypeOf* "), "40obj2.nc", 2535, 2964),(struct sNode*)come_increment_ref_count(exp_116, "40obj2.nc", 2535, 2965),info))), "40obj2.nc", 2535, 2967);
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value35->clone=(void*)sDynamicTypeOf_clone;
        _inf_value35->compile=(void*)sDynamicTypeOf_compile;
        _inf_value35->sline=(void*)sNodeBase_sline;
        _inf_value35->sline_real=(void*)sNodeBase_sline_real;
        _inf_value35->sname=(void*)sNodeBase_sname;
        _inf_value35->terminated=(void*)sNodeBase_terminated;
        _inf_value35->kind=(void*)sDynamicTypeOf_kind;
        _inf_value35->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value35)), "40obj2.nc", 2535, 2976);
        ((exp_116) ? exp_116 = come_decrement_ref_count(exp_116, ((struct sNode*)exp_116)->finalize, ((struct sNode*)exp_116)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2535, 2977):(void*)0);
        come_call_finalizer(sDynamicTypeOf_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2535, 2978);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2535, 2979):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2535, 2980):(void*)0);
        return __result_obj__0;
        ((exp_116) ? exp_116 = come_decrement_ref_count(exp_116, ((struct sNode*)exp_116)->finalize, ((struct sNode*)exp_116)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2981):(void*)0);
    }
    else if(charp_operator_equals(buf,"dynamic_sizeof")) {
        paren_118=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_118=(_Bool)1;
        }
        if(!paren_118) {
            no_comma_120=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj245=exp_119,
            exp_119=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "40obj2.nc", 2551, 2983);
            (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2551, 2982) :0);
            info->no_comma=no_comma_120;
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj246=exp_119,
            exp_119=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2555, 2985);
            (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2555, 2984) :0);
        }
        if(paren_118&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2565, 2989, "struct sNode");
        _inf_obj_value36=(struct sDynamicSizeOfExpNode*)come_increment_ref_count(((struct sDynamicSizeOfExpNode*)(__right_value1=sDynamicSizeOfExpNode_initialize((struct sDynamicSizeOfExpNode* )come_increment_ref_count((struct sDynamicSizeOfExpNode *)come_calloc(1, sizeof(struct sDynamicSizeOfExpNode )*(1), "40obj2.nc", 2565, 2986, "struct sDynamicSizeOfExpNode* "), "40obj2.nc", 2565, 2987),(struct sNode*)come_increment_ref_count(exp_119, "40obj2.nc", 2565, 2988),info))), "40obj2.nc", 2565, 2990);
        _inf_value36->_protocol_obj=_inf_obj_value36;
        _inf_value36->finalize=(void*)sDynamicSizeOfExpNode_finalize;
        _inf_value36->clone=(void*)sDynamicSizeOfExpNode_clone;
        _inf_value36->compile=(void*)sDynamicSizeOfExpNode_compile;
        _inf_value36->sline=(void*)sNodeBase_sline;
        _inf_value36->sline_real=(void*)sNodeBase_sline_real;
        _inf_value36->sname=(void*)sNodeBase_sname;
        _inf_value36->terminated=(void*)sNodeBase_terminated;
        _inf_value36->kind=(void*)sDynamicSizeOfExpNode_kind;
        _inf_value36->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value36)), "40obj2.nc", 2565, 2991);
        ((exp_119) ? exp_119 = come_decrement_ref_count(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2565, 2992):(void*)0);
        come_call_finalizer(sDynamicSizeOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2565, 2993);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2565, 2994):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2565, 2995):(void*)0);
        return __result_obj__0;
        ((exp_119) ? exp_119 = come_decrement_ref_count(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2720, 2996):(void*)0);
    }
    else if(charp_operator_equals(buf,"_Alignof")) {
        paren_121=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            paren_121=(_Bool)1;
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_122=(_Bool)0;
        {
            p_123=info->p->p;
            sline_124=info->sline;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_125=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "40obj2.nc", 2582, 2997);
                if(is_type_name(word_125,info)) {
                    is_type_name_flag_122=(_Bool)1;
                }
                (word_125 = come_decrement_ref_count(word_125, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2589, 2998));
            }
            info->p->p=p_123;
            info->sline=sline_124;
        }
        if(is_type_name_flag_122) {
            __right_value0 = (void*)0;
            multiple_assign_var15=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_126=(struct sType* )come_increment_ref_count(multiple_assign_var15->v1, "40obj2.nc", 2594, 2999);
            name_127=(char* )come_increment_ref_count(multiple_assign_var15->v2, "40obj2.nc", 2594, 3000);
            err_128=multiple_assign_var15->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2594, 3001);
            if(!err_128) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_121&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2605, 3004, "struct sNode");
            _inf_obj_value37=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value1=sAlignOfNode_initialize((struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), "40obj2.nc", 2605, 3002, "struct sAlignOfNode* "), "40obj2.nc", 2605, 3003),type_126,info))), "40obj2.nc", 2605, 3005);
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sAlignOfNode_finalize;
            _inf_value37->clone=(void*)sAlignOfNode_clone;
            _inf_value37->compile=(void*)sAlignOfNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sAlignOfNode_kind;
            _inf_value37->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value37)), "40obj2.nc", 2605, 3014);
            come_call_finalizer(sType_finalize, type_126, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2605, 3015);
            (name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2605, 3016));
            come_call_finalizer(sAlignOfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2605, 3017);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2605, 3018):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2605, 3019):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_126, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2621, 3020);
            (name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2621, 3021));
        }
        else {
            if(!paren_121) {
                no_comma_130=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj249=exp_129,
                exp_129=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "40obj2.nc", 2612, 3023);
                (__dec_obj249 ? __dec_obj249 = come_decrement_ref_count(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2612, 3022) :0);
                info->no_comma=no_comma_130;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj250=exp_129,
                exp_129=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2616, 3025);
                (__dec_obj250 ? __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2616, 3024) :0);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2619, 3029, "struct sNode");
            _inf_obj_value38=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value1=sAlignOfExpNode_initialize((struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), "40obj2.nc", 2619, 3026, "struct sAlignOfExpNode* "), "40obj2.nc", 2619, 3027),(struct sNode*)come_increment_ref_count(exp_129, "40obj2.nc", 2619, 3028),info))), "40obj2.nc", 2619, 3030);
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value38->clone=(void*)sAlignOfExpNode_clone;
            _inf_value38->compile=(void*)sAlignOfExpNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sAlignOfExpNode_kind;
            _inf_value38->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value38)), "40obj2.nc", 2619, 3039);
            ((exp_129) ? exp_129 = come_decrement_ref_count(exp_129, ((struct sNode*)exp_129)->finalize, ((struct sNode*)exp_129)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2619, 3040):(void*)0);
            come_call_finalizer(sAlignOfExpNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2619, 3041);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2619, 3042):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2619, 3043):(void*)0);
            return __result_obj__0;
            ((exp_129) ? exp_129 = come_decrement_ref_count(exp_129, ((struct sNode*)exp_129)->finalize, ((struct sNode*)exp_129)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2621, 3044):(void*)0);
        }
    }
    else if(charp_operator_equals(buf,"__alignof__")) {
        paren_131=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            paren_131=(_Bool)1;
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_132=(_Bool)0;
        {
            p_133=info->p->p;
            sline_134=info->sline;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_135=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "40obj2.nc", 2637, 3045);
                if(is_type_name(word_135,info)) {
                    is_type_name_flag_132=(_Bool)1;
                }
                (word_135 = come_decrement_ref_count(word_135, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2644, 3046));
            }
            info->p->p=p_133;
            info->sline=sline_134;
        }
        if(is_type_name_flag_132) {
            __right_value0 = (void*)0;
            multiple_assign_var16=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_136=(struct sType* )come_increment_ref_count(multiple_assign_var16->v1, "40obj2.nc", 2649, 3047);
            name_137=(char* )come_increment_ref_count(multiple_assign_var16->v2, "40obj2.nc", 2649, 3048);
            err_138=multiple_assign_var16->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2649, 3049);
            if(!err_138) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(paren_131&&span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2660, 3052, "struct sNode");
            _inf_obj_value39=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value1=sAlignOfNode2_initialize((struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), "40obj2.nc", 2660, 3050, "struct sAlignOfNode2* "), "40obj2.nc", 2660, 3051),type_136,info))), "40obj2.nc", 2660, 3053);
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value39->clone=(void*)sAlignOfNode2_clone;
            _inf_value39->compile=(void*)sAlignOfNode2_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAlignOfNode2_kind;
            _inf_value39->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value39)), "40obj2.nc", 2660, 3062);
            come_call_finalizer(sType_finalize, type_136, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2660, 3063);
            (name_137 = come_decrement_ref_count(name_137, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2660, 3064));
            come_call_finalizer(sAlignOfNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2660, 3065);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2660, 3066):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2660, 3067):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_136, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2676, 3068);
            (name_137 = come_decrement_ref_count(name_137, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2676, 3069));
        }
        else {
            if(!paren_131) {
                no_comma_140=info->no_comma;
                info->no_comma=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj255=exp_139,
                exp_139=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "40obj2.nc", 2667, 3071);
                (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2667, 3070) :0);
                info->no_comma=no_comma_140;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj256=exp_139,
                exp_139=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "40obj2.nc", 2671, 3073);
                (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0, (void*)0, "40obj2.nc", 2671, 3072) :0);
            }
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2674, 3077, "struct sNode");
            _inf_obj_value40=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value1=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), "40obj2.nc", 2674, 3074, "struct sAlignOfExpNode2* "), "40obj2.nc", 2674, 3075),(struct sNode*)come_increment_ref_count(exp_139, "40obj2.nc", 2674, 3076),info))), "40obj2.nc", 2674, 3078);
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value40->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value40->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAlignOfExpNode2_kind;
            _inf_value40->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value40)), "40obj2.nc", 2674, 3087);
            ((exp_139) ? exp_139 = come_decrement_ref_count(exp_139, ((struct sNode*)exp_139)->finalize, ((struct sNode*)exp_139)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2674, 3088):(void*)0);
            come_call_finalizer(sAlignOfExpNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2674, 3089);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2674, 3090):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2674, 3091):(void*)0);
            return __result_obj__0;
            ((exp_139) ? exp_139 = come_decrement_ref_count(exp_139, ((struct sNode*)exp_139)->finalize, ((struct sNode*)exp_139)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2676, 3092):(void*)0);
        }
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v20(buf,head,head_sline,info))), "40obj2.nc", 2720, 3093);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2720, 3094):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2720, 3095):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 2252);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 2253));
    }
            neo_current_frame = fr.prev;
}

static char span$1char$p$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

static char span$1char$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

static struct sDeferNode* sDeferNode_clone(struct sDeferNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeferNode_clone"; neo_current_frame = &fr;
    struct sDeferNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeferNode*  result  ;
    char*  __dec_obj188  ;
    struct sBlock*  __dec_obj201  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDeferNode* )come_increment_ref_count((struct sDeferNode *)come_calloc(1, sizeof(struct sDeferNode )*(1), "sDeferNode_clone", 5, 2346, "struct sDeferNode* "), "sDeferNode_clone", 5, 2347);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj188=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDeferNode_clone", 7, 2348, "char* "), "sDeferNode_clone", 7, 2350);
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "sDeferNode_clone", 7, 2349);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->block!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj201=result->block,
        result->block=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->block), "sDeferNode_clone", 9, 2495);
        come_call_finalizer(sBlock_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sDeferNode_clone", 9, 2494);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDeferNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDeferNode_clone}", 10, 2496);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj189;
    struct sVarTable*  __dec_obj200  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 2351);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 2352);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 2353, "struct sBlock* "), "sBlock_clone", 5, 2354);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj189=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 2356);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj189,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 2355);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj200=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 2490);
        come_call_finalizer(sVarTable_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 2489);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 2491);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 2492);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 2493);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj199;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 2357);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 2358);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 2359, "struct sVarTable* "), "sVarTable_clone", 5, 2360);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj199=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 6, 2485);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 6, 2484);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 2486);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 2487);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 2488);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj191;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 3073, 2361);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3073, 2366);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "/usr/local/include/neo-c.h", 3076, 2367, "struct map$2char$phsVar$ph*"), "/usr/local/include/neo-c.h", 3076, 2381)), "/usr/local/include/neo-c.h", 3076, 2382);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj191=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3078, 2383, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3078, 2384)), "/usr/local/include/neo-c.h", 3078, 2386);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3078, 2385);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3084, 2402),(_Bool)0), "/usr/local/include/neo-c.h", 3084, 2403);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3087, 2447, "char* "), "/usr/local/include/neo-c.h", 3087, 2448),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3087, 2467),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "/usr/local/include/neo-c.h", 3090, 2468, "char* "), "/usr/local/include/neo-c.h", 3090, 2469),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3090, 2470),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3093, 2471),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3093, 2472),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "/usr/local/include/neo-c.h", 3096, 2473),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "/usr/local/include/neo-c.h", 3096, 2474),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3100, 2475);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3100, 2476);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 3100, 2477);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3100, 2478);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3100, 2479);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_61;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3049, 2362);
            }
        }
    }
    come_free((char*)self->items);
    for(i_61=0    ;i_61<self->size;i_61++){
        if(self->item_existance[i_61]) {
            if(1) {
                (self->keys[i_61] = come_decrement_ref_count(self->keys[i_61], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3058, 2363));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3064, 2364);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3066, 2365));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj190;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "/usr/local/include/neo-c.h", 2999, 2368, "char** "))), "/usr/local/include/neo-c.h", 2999, 2369);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "/usr/local/include/neo-c.h", 3000, 2370, "struct sVar** "))), "/usr/local/include/neo-c.h", 3000, 2371);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 3001, 2372, "_Bool*"))), "/usr/local/include/neo-c.h", 3001, 2373);
    for(i=0    ;i<128;i++){
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj190=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 3011, 2374, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 3011, 2375)), "/usr/local/include/neo-c.h", 3011, 2377);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3011, 2376);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3015, 2378);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3015, 2379);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3015, 2380);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_62  ;
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
    memset(&result_62,0,sizeof(char* ));
        __result_obj__0 = result_62;
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
    char*  result_63  ;
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
    memset(&result_63,0,sizeof(char* ));
        __result_obj__0 = result_63;
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 2387);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 2388);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 2389);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 2390);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 2391);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 2392);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 2393);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 2394);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 2395);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 2396);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 2397);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 2398);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 2399);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 2400);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 2401);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3430, 2404));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3430, 2405);
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3445, 2420));
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3447, 2425);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3454, 2426);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3455, 2427);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3477, 2428);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3483, 2429);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3503, 2444));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3506, 2445));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3506, 2446);
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
    struct sVar*  default_value_64  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 2406, "char** "))), "/usr/local/include/neo-c.h", 3272, 2407);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 2408, "struct sVar** "))), "/usr/local/include/neo-c.h", 3273, 2409);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 2410, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 2411);
    len=0;
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 2412),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 2413);
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
                memset(&default_value_64,0,sizeof(struct sVar* ));
                __right_value0 = (void*)0;
                items[n]=((struct sVar* )(__right_value0=map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value_64, "/usr/local/include/neo-c.h", 3304, 2414),(_Bool)0)));
                len++;
                come_call_finalizer(sVar_finalize, default_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 2415);
                break;
                come_call_finalizer(sVar_finalize, default_value_64, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3309, 2416);
            }
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 2417);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 2418);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 2419));
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
    struct list_item$1char$ph* it_65;
    int i_66;
    struct list_item$1char$ph* prev_it_67;
    struct list_item$1char$ph* it_68;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_69;
    struct list_item$1char$ph* prev_it_70;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 2422);
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
        it_65=self->head;
        i_66=0;
        while(it_65!=((void*)0)) {
            if(i_66==head) {
                self->tail=it_65->prev;
                self->tail->next=((void*)0);
            }
            if(i_66>=head) {
                prev_it_67=it_65;
                it_65=it_65->next;
                i_66++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_67, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 2423);
                self->len--;
            }
            else {
                it_65=it_65->next;
                i_66++;
            }
        }
    }
    else {
        it_68=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_69=0;
        while(it_68!=((void*)0)) {
            if(i_69==head) {
                head_prev_it=it_68->prev;
            }
            if(i_69==tail) {
                tail_it=it_68;
            }
            if(i_69>=head&&i_69<tail) {
                prev_it_70=it_68;
                it_68=it_68->next;
                i_69++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 2424);
                self->len--;
            }
            else {
                it_68=it_68->next;
                i_69++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 2421);
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
    char*  result_71  ;
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
    memset(&result_71,0,sizeof(char* ));
        __result_obj__0 = result_71;
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
    char*  result_72  ;
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
    memset(&result_72,0,sizeof(char* ));
        __result_obj__0 = result_72;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj192  ;
    struct list_item$1char$ph* litem_73;
    char*  __dec_obj193  ;
    struct list_item$1char$ph* litem_74;
    char*  __dec_obj194  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 2430));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 2431, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 2432);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj192=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 2434);
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 2433);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_73=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 2435, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 2436);
        litem_73->prev=self->head;
        litem_73->next=((void*)0);
        __dec_obj193=litem_73->item,
        litem_73->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 2438);
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 2437);
        self->tail=litem_73;
        self->head->next=litem_73;
    }
    else {
        __right_value0 = (void*)0;
        litem_74=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 2439, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 2440);
        litem_74->prev=self->tail;
        litem_74->next=((void*)0);
        __dec_obj194=litem_74->item,
        litem_74->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 2442);
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 2441);
        self->tail->next=litem_74;
        self->tail=litem_74;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 2443));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj195  ;
    char*  __dec_obj196  ;
    struct sType*  __dec_obj197  ;
    char*  __dec_obj198  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 2449);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 2450);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 2451, "struct sVar* "), "sVar_clone", 5, 2452);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj195=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 2453, "char* "), "sVar_clone", 6, 2455);
        __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 2454);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj196=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 2456, "char* "), "sVar_clone", 7, 2458);
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 2457);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj197=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 2460);
        come_call_finalizer(sType_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 2459);
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
        __dec_obj198=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 2461, "char* "), "sVar_clone", 12, 2463);
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 2462);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 2464);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 2465);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 2466);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_75;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3049, 2480);
            }
        }
    }
    come_free((char*)self->items);
    for(i_75=0    ;i_75<self->size;i_75++){
        if(self->item_existance[i_75]) {
            if(1) {
                (self->keys[i_75] = come_decrement_ref_count(self->keys[i_75], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3058, 2481));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3064, 2482);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3066, 2483));
            neo_current_frame = fr.prev;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDeleteNode_clone"; neo_current_frame = &fr;
    struct sDeleteNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDeleteNode*  result  ;
    char*  __dec_obj202  ;
    struct sNode* __dec_obj203;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDeleteNode* )come_increment_ref_count((struct sDeleteNode *)come_calloc(1, sizeof(struct sDeleteNode )*(1), "sDeleteNode_clone", 5, 2517, "struct sDeleteNode* "), "sDeleteNode_clone", 5, 2518);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj202=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDeleteNode_clone", 7, 2519, "char* "), "sDeleteNode_clone", 7, 2521);
        __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0,0, (void*)0, "sDeleteNode_clone", 7, 2520);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj203=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDeleteNode_clone", 9, 2523);
        (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0, (void*)0, "sDeleteNode_clone", 9, 2522) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDeleteNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDeleteNode_clone}", 10, 2524);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBorrowNode_clone"; neo_current_frame = &fr;
    struct sBorrowNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sBorrowNode*  result  ;
    char*  __dec_obj204  ;
    struct sNode* __dec_obj205;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sBorrowNode* )come_increment_ref_count((struct sBorrowNode *)come_calloc(1, sizeof(struct sBorrowNode )*(1), "sBorrowNode_clone", 5, 2537, "struct sBorrowNode* "), "sBorrowNode_clone", 5, 2538);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj204=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sBorrowNode_clone", 7, 2539, "char* "), "sBorrowNode_clone", 7, 2541);
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0, "sBorrowNode_clone", 7, 2540);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj205=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sBorrowNode_clone", 9, 2543);
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0, (void*)0, "sBorrowNode_clone", 9, 2542) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sBorrowNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBorrowNode_clone}", 10, 2544);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCloneNode_clone"; neo_current_frame = &fr;
    struct sCloneNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCloneNode*  result  ;
    char*  __dec_obj206  ;
    struct sNode* __dec_obj207;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sCloneNode* )come_increment_ref_count((struct sCloneNode *)come_calloc(1, sizeof(struct sCloneNode )*(1), "sCloneNode_clone", 5, 2557, "struct sCloneNode* "), "sCloneNode_clone", 5, 2558);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj206=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCloneNode_clone", 7, 2559, "char* "), "sCloneNode_clone", 7, 2561);
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0, "sCloneNode_clone", 7, 2560);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj207=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sCloneNode_clone", 9, 2563);
        (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0, (void*)0, "sCloneNode_clone", 9, 2562) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sCloneNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCloneNode_clone}", 10, 2564);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDupeNode_clone"; neo_current_frame = &fr;
    struct sDupeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDupeNode*  result  ;
    char*  __dec_obj208  ;
    struct sNode* __dec_obj209;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDupeNode* )come_increment_ref_count((struct sDupeNode *)come_calloc(1, sizeof(struct sDupeNode )*(1), "sDupeNode_clone", 5, 2577, "struct sDupeNode* "), "sDupeNode_clone", 5, 2578);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj208=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDupeNode_clone", 7, 2579, "char* "), "sDupeNode_clone", 7, 2581);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0,0, (void*)0, "sDupeNode_clone", 7, 2580);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj209=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDupeNode_clone", 9, 2583);
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0, "sDupeNode_clone", 9, 2582) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDupeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDupeNode_clone}", 10, 2584);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDummyHeapNode_clone"; neo_current_frame = &fr;
    struct sDummyHeapNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDummyHeapNode*  result  ;
    char*  __dec_obj210  ;
    struct sNode* __dec_obj211;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDummyHeapNode* )come_increment_ref_count((struct sDummyHeapNode *)come_calloc(1, sizeof(struct sDummyHeapNode )*(1), "sDummyHeapNode_clone", 5, 2597, "struct sDummyHeapNode* "), "sDummyHeapNode_clone", 5, 2598);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj210=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDummyHeapNode_clone", 7, 2599, "char* "), "sDummyHeapNode_clone", 7, 2601);
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0, "sDummyHeapNode_clone", 7, 2600);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj211=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sDummyHeapNode_clone", 9, 2603);
        (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0, (void*)0, "sDummyHeapNode_clone", 9, 2602) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDummyHeapNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDummyHeapNode_clone}", 10, 2604);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCIncNode_clone"; neo_current_frame = &fr;
    struct sGCIncNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCIncNode*  result  ;
    char*  __dec_obj212  ;
    struct sNode* __dec_obj213;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCIncNode* )come_increment_ref_count((struct sGCIncNode *)come_calloc(1, sizeof(struct sGCIncNode )*(1), "sGCIncNode_clone", 5, 2617, "struct sGCIncNode* "), "sGCIncNode_clone", 5, 2618);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj212=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCIncNode_clone", 7, 2619, "char* "), "sGCIncNode_clone", 7, 2621);
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0, "sGCIncNode_clone", 7, 2620);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj213=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCIncNode_clone", 9, 2623);
        (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0, (void*)0, "sGCIncNode_clone", 9, 2622) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGCIncNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCIncNode_clone}", 10, 2624);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNode_clone"; neo_current_frame = &fr;
    struct sGCDecNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNode*  result  ;
    char*  __dec_obj214  ;
    struct sNode* __dec_obj215;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNode* )come_increment_ref_count((struct sGCDecNode *)come_calloc(1, sizeof(struct sGCDecNode )*(1), "sGCDecNode_clone", 5, 2637, "struct sGCDecNode* "), "sGCDecNode_clone", 5, 2638);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj214=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNode_clone", 7, 2639, "char* "), "sGCDecNode_clone", 7, 2641);
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0,0, (void*)0, "sGCDecNode_clone", 7, 2640);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj215=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCDecNode_clone", 9, 2643);
        (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0, (void*)0, "sGCDecNode_clone", 9, 2642) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGCDecNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCDecNode_clone}", 10, 2644);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGCDecNoFreeNode_clone"; neo_current_frame = &fr;
    struct sGCDecNoFreeNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGCDecNoFreeNode*  result  ;
    char*  __dec_obj216  ;
    struct sNode* __dec_obj217;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGCDecNoFreeNode* )come_increment_ref_count((struct sGCDecNoFreeNode *)come_calloc(1, sizeof(struct sGCDecNoFreeNode )*(1), "sGCDecNoFreeNode_clone", 5, 2657, "struct sGCDecNoFreeNode* "), "sGCDecNoFreeNode_clone", 5, 2658);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj216=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGCDecNoFreeNode_clone", 7, 2659, "char* "), "sGCDecNoFreeNode_clone", 7, 2661);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0, "sGCDecNoFreeNode_clone", 7, 2660);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj217=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sGCDecNoFreeNode_clone", 9, 2663);
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0, "sGCDecNoFreeNode_clone", 9, 2662) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGCDecNoFreeNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGCDecNoFreeNode_clone}", 10, 2664);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsHeap_clone"; neo_current_frame = &fr;
    struct sIsHeap* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsHeap*  result  ;
    char*  __dec_obj218  ;
    struct sType*  __dec_obj219  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsHeap* )come_increment_ref_count((struct sIsHeap *)come_calloc(1, sizeof(struct sIsHeap )*(1), "sIsHeap_clone", 5, 2692, "struct sIsHeap* "), "sIsHeap_clone", 5, 2693);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj218=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsHeap_clone", 7, 2694, "char* "), "sIsHeap_clone", 7, 2696);
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0, "sIsHeap_clone", 7, 2695);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj219=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sIsHeap_clone", 9, 2698);
        come_call_finalizer(sType_finalize, __dec_obj219,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsHeap_clone", 9, 2697);
    }
        __result_obj__0 = result;
    come_call_finalizer(sIsHeap_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIsHeap_clone}", 10, 2699);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIsPointer_clone"; neo_current_frame = &fr;
    struct sIsPointer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIsPointer*  result  ;
    char*  __dec_obj220  ;
    struct sType*  __dec_obj221  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sIsPointer* )come_increment_ref_count((struct sIsPointer *)come_calloc(1, sizeof(struct sIsPointer )*(1), "sIsPointer_clone", 5, 2721, "struct sIsPointer* "), "sIsPointer_clone", 5, 2722);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj220=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIsPointer_clone", 7, 2723, "char* "), "sIsPointer_clone", 7, 2725);
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0,0, (void*)0, "sIsPointer_clone", 7, 2724);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj221=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sIsPointer_clone", 9, 2727);
        come_call_finalizer(sType_finalize, __dec_obj221,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIsPointer_clone", 9, 2726);
    }
        __result_obj__0 = result;
    come_call_finalizer(sIsPointer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIsPointer_clone}", 10, 2728);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOptionalNode* sOptionalNode_clone(struct sOptionalNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOptionalNode_clone"; neo_current_frame = &fr;
    struct sOptionalNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOptionalNode*  result  ;
    char*  __dec_obj222  ;
    struct sNode* __dec_obj223;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOptionalNode* )come_increment_ref_count((struct sOptionalNode *)come_calloc(1, sizeof(struct sOptionalNode )*(1), "sOptionalNode_clone", 5, 2747, "struct sOptionalNode* "), "sOptionalNode_clone", 5, 2748);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj222=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOptionalNode_clone", 7, 2749, "char* "), "sOptionalNode_clone", 7, 2751);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0, (void*)0, "sOptionalNode_clone", 7, 2750);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj223=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sOptionalNode_clone", 9, 2753);
        (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0, (void*)0, "sOptionalNode_clone", 9, 2752) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOptionalNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOptionalNode_clone}", 10, 2754);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sRefNode* sRefNode_clone(struct sRefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefNode_clone"; neo_current_frame = &fr;
    struct sRefNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRefNode*  result  ;
    char*  __dec_obj224  ;
    struct sNode* __dec_obj225;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sRefNode* )come_increment_ref_count((struct sRefNode *)come_calloc(1, sizeof(struct sRefNode )*(1), "sRefNode_clone", 5, 2767, "struct sRefNode* "), "sRefNode_clone", 5, 2768);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj224=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRefNode_clone", 7, 2769, "char* "), "sRefNode_clone", 7, 2771);
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0, "sRefNode_clone", 7, 2770);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj225=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sRefNode_clone", 9, 2773);
        (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0, (void*)0, "sRefNode_clone", 9, 2772) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sRefNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRefNode_clone}", 10, 2774);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSpanNode* sSpanNode_clone(struct sSpanNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSpanNode_clone"; neo_current_frame = &fr;
    struct sSpanNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSpanNode*  result  ;
    char*  __dec_obj226  ;
    struct sNode* __dec_obj227;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSpanNode* )come_increment_ref_count((struct sSpanNode *)come_calloc(1, sizeof(struct sSpanNode )*(1), "sSpanNode_clone", 5, 2787, "struct sSpanNode* "), "sSpanNode_clone", 5, 2788);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj226=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSpanNode_clone", 7, 2789, "char* "), "sSpanNode_clone", 7, 2791);
        __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0,0, (void*)0, "sSpanNode_clone", 7, 2790);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj227=result->node,
        result->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node), "sSpanNode_clone", 9, 2793);
        (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0, (void*)0, "sSpanNode_clone", 9, 2792) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sSpanNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSpanNode_clone}", 10, 2794);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sGeneric* sGeneric_clone(struct sGeneric* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGeneric_clone"; neo_current_frame = &fr;
    struct sGeneric* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sGeneric*  result  ;
    char*  __dec_obj229  ;
    struct sNode* __dec_obj230;
    struct list$1sType$ph* __dec_obj231;
    struct list$1sNode$ph* __dec_obj232;
    struct sNode* __dec_obj233;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sGeneric* )come_increment_ref_count((struct sGeneric *)come_calloc(1, sizeof(struct sGeneric )*(1), "sGeneric_clone", 5, 2863, "struct sGeneric* "), "sGeneric_clone", 5, 2864);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj229=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sGeneric_clone", 7, 2865, "char* "), "sGeneric_clone", 7, 2867);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0,0, (void*)0, "sGeneric_clone", 7, 2866);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj230=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sGeneric_clone", 9, 2869);
        (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0, (void*)0, "sGeneric_clone", 9, 2868) :0);
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj231=result->types,
        result->types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->types), "sGeneric_clone", 10, 2871);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj231,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_clone", 10, 2870);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj232=result->exps,
        result->exps=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->exps), "sGeneric_clone", 11, 2873);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj232,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sGeneric_clone", 11, 2872);
    }
    if(self!=((void*)0)&&self->default_exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj233=result->default_exp,
        result->default_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->default_exp), "sGeneric_clone", 12, 2875);
        (__dec_obj233 ? __dec_obj233 = come_decrement_ref_count(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0, (void*)0, "sGeneric_clone", 12, 2874) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sGeneric_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sGeneric_clone}", 13, 2876);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sOffsetOf* sOffsetOf_clone(struct sOffsetOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOffsetOf_clone"; neo_current_frame = &fr;
    struct sOffsetOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOffsetOf*  result  ;
    char*  __dec_obj234  ;
    struct sType*  __dec_obj235  ;
    char*  __dec_obj236  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sOffsetOf* )come_increment_ref_count((struct sOffsetOf *)come_calloc(1, sizeof(struct sOffsetOf )*(1), "sOffsetOf_clone", 5, 2898, "struct sOffsetOf* "), "sOffsetOf_clone", 5, 2899);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj234=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOffsetOf_clone", 7, 2900, "char* "), "sOffsetOf_clone", 7, 2902);
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0,0, (void*)0, "sOffsetOf_clone", 7, 2901);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj235=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sOffsetOf_clone", 9, 2904);
        come_call_finalizer(sType_finalize, __dec_obj235,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sOffsetOf_clone", 9, 2903);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj236=result->name,
        result->name=(char* )come_increment_ref_count((char* )come_memdup(self->name, "sOffsetOf_clone", 10, 2905, "char* "), "sOffsetOf_clone", 10, 2907);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0,0, (void*)0, "sOffsetOf_clone", 10, 2906);
    }
        __result_obj__0 = result;
    come_call_finalizer(sOffsetOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOffsetOf_clone}", 11, 2908);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sSizeOfNode_clone"; neo_current_frame = &fr;
    struct sSizeOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sSizeOfNode*  result  ;
    char*  __dec_obj237  ;
    struct sType*  __dec_obj238  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sSizeOfNode* )come_increment_ref_count((struct sSizeOfNode *)come_calloc(1, sizeof(struct sSizeOfNode )*(1), "sSizeOfNode_clone", 5, 2928, "struct sSizeOfNode* "), "sSizeOfNode_clone", 5, 2929);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj237=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sSizeOfNode_clone", 7, 2930, "char* "), "sSizeOfNode_clone", 7, 2932);
        __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0,0, (void*)0, "sSizeOfNode_clone", 7, 2931);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj238=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sSizeOfNode_clone", 9, 2934);
        come_call_finalizer(sType_finalize, __dec_obj238,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sSizeOfNode_clone", 9, 2933);
    }
        __result_obj__0 = result;
    come_call_finalizer(sSizeOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sSizeOfNode_clone}", 10, 2935);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDynamicTypeOf_clone"; neo_current_frame = &fr;
    struct sDynamicTypeOf* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDynamicTypeOf*  result  ;
    char*  __dec_obj243  ;
    struct sNode* __dec_obj244;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sDynamicTypeOf* )come_increment_ref_count((struct sDynamicTypeOf *)come_calloc(1, sizeof(struct sDynamicTypeOf )*(1), "sDynamicTypeOf_clone", 5, 2968, "struct sDynamicTypeOf* "), "sDynamicTypeOf_clone", 5, 2969);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj243=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDynamicTypeOf_clone", 7, 2970, "char* "), "sDynamicTypeOf_clone", 7, 2972);
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0, (void*)0, "sDynamicTypeOf_clone", 7, 2971);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj244=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sDynamicTypeOf_clone", 9, 2974);
        (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0, (void*)0, "sDynamicTypeOf_clone", 9, 2973) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sDynamicTypeOf_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDynamicTypeOf_clone}", 10, 2975);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode_clone"; neo_current_frame = &fr;
    struct sAlignOfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode*  result  ;
    char*  __dec_obj247  ;
    struct sType*  __dec_obj248  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode* )come_increment_ref_count((struct sAlignOfNode *)come_calloc(1, sizeof(struct sAlignOfNode )*(1), "sAlignOfNode_clone", 5, 3006, "struct sAlignOfNode* "), "sAlignOfNode_clone", 5, 3007);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj247=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode_clone", 7, 3008, "char* "), "sAlignOfNode_clone", 7, 3010);
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfNode_clone", 7, 3009);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj248=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sAlignOfNode_clone", 9, 3012);
        come_call_finalizer(sType_finalize, __dec_obj248,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode_clone", 9, 3011);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfNode_clone}", 10, 3013);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode*  result  ;
    char*  __dec_obj251  ;
    struct sNode* __dec_obj252;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode* )come_increment_ref_count((struct sAlignOfExpNode *)come_calloc(1, sizeof(struct sAlignOfExpNode )*(1), "sAlignOfExpNode_clone", 5, 3031, "struct sAlignOfExpNode* "), "sAlignOfExpNode_clone", 5, 3032);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj251=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode_clone", 7, 3033, "char* "), "sAlignOfExpNode_clone", 7, 3035);
        __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfExpNode_clone", 7, 3034);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj252=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sAlignOfExpNode_clone", 9, 3037);
        (__dec_obj252 ? __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0, (void*)0, "sAlignOfExpNode_clone", 9, 3036) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfExpNode_clone}", 10, 3038);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfNode2*  result  ;
    char*  __dec_obj253  ;
    struct sType*  __dec_obj254  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfNode2* )come_increment_ref_count((struct sAlignOfNode2 *)come_calloc(1, sizeof(struct sAlignOfNode2 )*(1), "sAlignOfNode2_clone", 5, 3054, "struct sAlignOfNode2* "), "sAlignOfNode2_clone", 5, 3055);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj253=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfNode2_clone", 7, 3056, "char* "), "sAlignOfNode2_clone", 7, 3058);
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfNode2_clone", 7, 3057);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj254=result->type,
        result->type=(struct sType* )come_increment_ref_count(sType_clone(self->type), "sAlignOfNode2_clone", 9, 3060);
        come_call_finalizer(sType_finalize, __dec_obj254,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sAlignOfNode2_clone", 9, 3059);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfNode2_clone}", 10, 3061);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAlignOfExpNode2_clone"; neo_current_frame = &fr;
    struct sAlignOfExpNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAlignOfExpNode2*  result  ;
    char*  __dec_obj257  ;
    struct sNode* __dec_obj258;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sAlignOfExpNode2* )come_increment_ref_count((struct sAlignOfExpNode2 *)come_calloc(1, sizeof(struct sAlignOfExpNode2 )*(1), "sAlignOfExpNode2_clone", 5, 3079, "struct sAlignOfExpNode2* "), "sAlignOfExpNode2_clone", 5, 3080);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj257=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAlignOfExpNode2_clone", 7, 3081, "char* "), "sAlignOfExpNode2_clone", 7, 3083);
        __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0,0, (void*)0, "sAlignOfExpNode2_clone", 7, 3082);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj258=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sAlignOfExpNode2_clone", 9, 3085);
        (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0, (void*)0, "sAlignOfExpNode2_clone", 9, 3084) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sAlignOfExpNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAlignOfExpNode2_clone}", 10, 3086);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v94"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __result_obj__0;
    _Bool come_c;
    _Bool come_safe;
    _Bool come_safe_141;
    if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c-pthread",info)) {
            info->p->p+=strlen("neo-c-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2732, 3096);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2732, 3097):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2732, 3098):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("comelang",info)) {
            info->p->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComelang=(_Bool)1;
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2740, 3099);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2740, 3100):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2740, 3101):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c-net",info)) {
            info->p->p+=strlen("neo-c-net");
            skip_spaces_and_lf(info);
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2746, 3102);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2746, 3103):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2746, 3104):(void*)0);
            return __result_obj__0;
        }
        else if(parsecmp("neo-c",info)) {
            info->p->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(parsecmp("c",info)||parsecmp("C",info)) {
            info->p->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                info->p->p++;
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
            info->p->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                info->p->p++;
                skip_spaces_and_lf(info);
                come_safe=gComeSafe;
                gComeSafe=(_Bool)0;
                transpile_toplevel((_Bool)1,info);
                gComeSafe=come_safe;
            }
            else {
                gComeSafe=(_Bool)0;
            }
        }
        else if(parsecmp("safe",info)) {
            info->p->p+=strlen("safe");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                info->p->p++;
                skip_spaces_and_lf(info);
                come_safe_141=gComeSafe;
                gComeSafe=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeSafe=come_safe_141;
            }
            else {
                gComeSafe=(_Bool)1;
            }
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=create_nothing_node(info))), "40obj2.nc", 2816, 3105);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2816, 3106):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2816, 3107):(void*)0);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v93(buf,head,head_sline,info))), "40obj2.nc", 2819, 3108);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2819, 3109):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2819, 3110):(void*)0);
    return __result_obj__0;
}

struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_implements"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value41;
    struct sImplementsNode* _inf_obj_value41;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2824, 3114, "struct sNode");
    _inf_obj_value41=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), "40obj2.nc", 2824, 3111, "struct sImplementsNode* "), "40obj2.nc", 2824, 3112),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 2824, 3113),inf_type,info))), "40obj2.nc", 2824, 3115);
    _inf_value41->_protocol_obj=_inf_obj_value41;
    _inf_value41->finalize=(void*)sImplementsNode_finalize;
    _inf_value41->clone=(void*)sImplementsNode_clone;
    _inf_value41->compile=(void*)sImplementsNode_compile;
    _inf_value41->sline=(void*)sNodeBase_sline;
    _inf_value41->sline_real=(void*)sNodeBase_sline_real;
    _inf_value41->sname=(void*)sNodeBase_sname;
    _inf_value41->terminated=(void*)sNodeBase_terminated;
    _inf_value41->kind=(void*)sImplementsNode_kind;
    _inf_value41->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value41)), "40obj2.nc", 2824, 3126);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2824, 3127):(void*)0);
    come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2824, 3128);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2824, 3129):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2824, 3130):(void*)0);
    return __result_obj__0;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sImplementsNode_clone"; neo_current_frame = &fr;
    struct sImplementsNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sImplementsNode*  result  ;
    char*  __dec_obj259  ;
    struct sNode* __dec_obj260;
    struct sType*  __dec_obj261  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), "sImplementsNode_clone", 5, 3116, "struct sImplementsNode* "), "sImplementsNode_clone", 5, 3117);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj259=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sImplementsNode_clone", 7, 3118, "char* "), "sImplementsNode_clone", 7, 3120);
        __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0,0, (void*)0, "sImplementsNode_clone", 7, 3119);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj260=result->obj_exp,
        result->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp), "sImplementsNode_clone", 9, 3122);
        (__dec_obj260 ? __dec_obj260 = come_decrement_ref_count(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0, (void*)0, "sImplementsNode_clone", 9, 3121) :0);
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj261=result->inf_type,
        result->inf_type=(struct sType* )come_increment_ref_count(sType_clone(self->inf_type), "sImplementsNode_clone", 10, 3124);
        come_call_finalizer(sType_finalize, __dec_obj261,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sImplementsNode_clone", 10, 3123);
    }
        __result_obj__0 = result;
    come_call_finalizer(sImplementsNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sImplementsNode_clone}", 11, 3125);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "post_position_operator_v21"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var17
;    struct sType*  type3  =0;
    char*  name2  =0;
    _Bool err=0;
    struct sType*  inf_type  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value42;
    struct sImplementsNode* _inf_obj_value42;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    if(!node->terminated(node->_protocol_obj)&&!gComeC&&parsecmp("implements",info)) {
        info->p->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var17=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3=(struct sType* )come_increment_ref_count(multiple_assign_var17->v1, "40obj2.nc", 2833, 3131);
        name2=(char* )come_increment_ref_count(multiple_assign_var17->v2, "40obj2.nc", 2833, 3132);
        err=multiple_assign_var17->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2833, 3133);
        if(!err) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        __right_value0 = (void*)0;
        inf_type=(struct sType* )come_increment_ref_count(sType_clone(type3), "40obj2.nc", 2839, 3134);
                __right_value0 = (void*)0;
        _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "40obj2.nc", 2841, 3138, "struct sNode");
        _inf_obj_value42=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value1=sImplementsNode_initialize((struct sImplementsNode* )come_increment_ref_count((struct sImplementsNode *)come_calloc(1, sizeof(struct sImplementsNode )*(1), "40obj2.nc", 2841, 3135, "struct sImplementsNode* "), "40obj2.nc", 2841, 3136),(struct sNode*)come_increment_ref_count(node, "40obj2.nc", 2841, 3137),inf_type,info))), "40obj2.nc", 2841, 3139);
        _inf_value42->_protocol_obj=_inf_obj_value42;
        _inf_value42->finalize=(void*)sImplementsNode_finalize;
        _inf_value42->clone=(void*)sImplementsNode_clone;
        _inf_value42->compile=(void*)sImplementsNode_compile;
        _inf_value42->sline=(void*)sNodeBase_sline;
        _inf_value42->sline_real=(void*)sNodeBase_sline_real;
        _inf_value42->sname=(void*)sNodeBase_sname;
        _inf_value42->terminated=(void*)sNodeBase_terminated;
        _inf_value42->kind=(void*)sImplementsNode_kind;
        _inf_value42->left_value=(void*)sNodeBase_left_value;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value42)), "40obj2.nc", 2841, 3140);
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2841, 3141);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2841, 3142));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2841, 3143);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2841, 3144):(void*)0);
        come_call_finalizer(sImplementsNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "40obj2.nc}", 2841, 3145);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2841, 3146):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2841, 3147):(void*)0);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2851, 3148);
        (name2 = come_decrement_ref_count(name2, (void*)0, (void*)0, 0, 0, (void*)0, "40obj2.nc", 2851, 3149));
        come_call_finalizer(sType_finalize, inf_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "40obj2.nc}", 2851, 3150);
    }
    else if(span$1char$p_operator_derefference(info->p)==64) {
        info->p->p++;
        while(xisalnum(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            info->p->p++;
        }
        skip_spaces_and_lf(info);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=post_position_operator_v19((struct sNode*)come_increment_ref_count(node, "40obj2.nc", 2851, 3151),info))), "40obj2.nc", 2851, 3152);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "40obj2.nc", 2851, 3153):(void*)0);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "40obj2.nc", 2851, 3154):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "40obj2.nc", 2851, 3155):(void*)0);
    return __result_obj__0;
}

