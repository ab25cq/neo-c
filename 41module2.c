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

struct sStaticAssert
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* exp;
    struct sNode* exp2;
};

struct sUndefNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  str  ;
};

struct sNoneNode
{
    int sline;
    char*  sname  ;
    int sline_real;
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
struct sStaticAssert* sStaticAssert_initialize(struct sStaticAssert* self, struct sNode* exp, struct sNode* exp2, struct sInfo*  info  );
char*  sStaticAssert_kind(struct sStaticAssert* self);
_Bool sStaticAssert_compile(struct sStaticAssert* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStaticAssert_finalize(struct sStaticAssert* self);
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
struct sUndefNode* sUndefNode_initialize(struct sUndefNode* self, char*  str  , struct sInfo*  info  );
char*  sUndefNode_kind(struct sUndefNode* self);
_Bool sUndefNode_compile(struct sUndefNode* self, struct sInfo*  info  );
static void sUndefNode_finalize(struct sUndefNode* self);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_remove(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static struct map$2char$phsType$ph* map$2char$phsType$ph_remove(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sInfo*  info  );
char*  sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo*  info  );
static void sNoneNode_finalize(struct sNoneNode* self);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo*  info  );
static struct sStaticAssert* sStaticAssert_clone(struct sStaticAssert* self);
static struct sNode* sNode_clone(struct sNode* self);
int sizeof_struct(struct sType*  type  , struct sInfo*  info  );
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
int sizeof_union(struct sType*  type  , struct sInfo*  info  );
int sizeof_type(struct sType*  type  , struct sInfo*  info  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sType*  sType_clone(struct sType*  self  );
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
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
int alignof_type(struct sType*  type  , struct sInfo*  info  );
char*  reflection_node(struct sInfo*  info  );
static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static char*  map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
static char*  map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char*  key  );
char*  reflection_expression_mult(struct sInfo*  info  );
char*  reflection_expression_add(struct sInfo*  info  );
char*  reflection_expression_comp(struct sInfo*  info  );
char*  reflection_expression_eq(struct sInfo*  info  );
char*  reflection_expression_oror(struct sInfo*  info  );
char*  reflection_expression_andand(struct sInfo*  info  );
char*  reflection_expression(struct sInfo*  info  );
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo*  info  );
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool by_pointer);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer*  map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  default_value  , _Bool by_pointer);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
static struct sUndefNode* sUndefNode_clone(struct sUndefNode* self);
static struct span$1buffer$p* span$1buffer$p_initialize(struct span$1buffer$p* self, void* head, unsigned long  len  , _Bool local, _Bool heap, _Bool global, void* stacktop);
static void span$1buffer$p$p_finalize(struct span$1buffer$p* self);
static void span$1char$p$p_finalize(struct span$1char$p* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char*  key  , char*  item  , _Bool by_pointer);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char*  map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char*  map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char*  map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char*  key  , char*  default_value  , _Bool by_pointer);
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
static inline int align_up(int x, int align)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "align_up"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (x+align-1)&~(align-1);
    neo_current_frame = fr.prev;
}

// body function
struct sStaticAssert* sStaticAssert_initialize(struct sStaticAssert* self, struct sNode* exp, struct sNode* exp2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStaticAssert_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj1;
    struct sNode* __dec_obj2;
    struct sStaticAssert* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sStaticAssert*)come_increment_ref_count(self, "41module2.nc", 6, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 6, 3);
    __dec_obj1=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp, "41module2.nc", 8, 5);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "41module2.nc", 8, 4) :0);
    __dec_obj2=self->exp2,
    self->exp2=(struct sNode*)come_increment_ref_count(exp2, "41module2.nc", 9, 7);
    (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "41module2.nc", 9, 6) :0);
        __result_obj__0 = (struct sStaticAssert*)come_increment_ref_count(self, "41module2.nc", 12, 8);
    come_call_finalizer(sStaticAssert_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "41module2.nc}", 12, 12);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 12, 13):(void*)0);
    ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 12, 14):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sStaticAssert_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "41module2.nc}", 12, 15);
    return __result_obj__0;
}

char*  sStaticAssert_kind(struct sStaticAssert* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStaticAssert_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sStaticAssert","41module2.nc",14))), "41module2.nc", 14, 16);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 14, 17));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 14, 18));
    return __result_obj__0;
}

_Bool sStaticAssert_compile(struct sStaticAssert* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStaticAssert_compile"; neo_current_frame = &fr;
    struct sNode* exp;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    struct sNode* exp2;
    _Bool Value_0;
    struct CVALUE*  come_value2  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value3  ;
    char*  __dec_obj3  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj4  ;
    exp=(struct sNode*)come_increment_ref_count(self->exp, "41module2.nc", 19, 19);
    Value=node_compile(exp,info);
    if(!Value) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 22, 20):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "41module2.nc", 25, 21);
    exp2=(struct sNode*)come_increment_ref_count(self->exp2, "41module2.nc", 27, 22);
    Value_0=node_compile(exp2,info);
    if(!Value_0) {
                __result_obj__0 = (_Bool)0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 30, 23):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 30, 61);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 30, 62):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "41module2.nc", 33, 63);
    __right_value0 = (void*)0;
    come_value3=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "41module2.nc", 35, 64, "struct CVALUE* "), "41module2.nc", 35, 65)), "41module2.nc", 35, 66);
    __right_value0 = (void*)0;
    __dec_obj3=come_value3->c_value,
    come_value3->c_value=(char* )come_increment_ref_count(xsprintf("_Static_assert(%s, %s)",come_value->c_value,come_value2->c_value), "41module2.nc", 37, 68);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 37, 67);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj4=come_value3->type,
    come_value3->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "41module2.nc", 38, 69, "struct sType* "), "41module2.nc", 38, 70),(char*)come_increment_ref_count(xsprintf("void"), "41module2.nc", 38, 71),(_Bool)0,info,(_Bool)0,0), "41module2.nc", 38, 73);
    come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 38, 72);
    come_value3->var=((void*)0);
    add_come_last_code(info,"%s",come_value3->c_value);
        __result_obj__0 = (_Bool)1;
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 43, 74):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 43, 75);
    ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 43, 76):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 43, 77);
    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 43, 78);
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

static void sStaticAssert_finalize(struct sStaticAssert* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStaticAssert_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sStaticAssert_finalize", 2, 9));
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0,(void*)0, "sStaticAssert_finalize", 3, 10):(void*)0);
    }
    if(self!=((void*)0)&&self->exp2!=((void*)0)) {
        ((self->exp2) ? self->exp2 = come_decrement_ref_count(self->exp2, ((struct sNode*)self->exp2)->finalize, ((struct sNode*)self->exp2)->_protocol_obj, 0, 0,(void*)0, "sStaticAssert_finalize", 4, 11):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 24));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 57);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 58));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 59));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 60));
    }
            neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 25);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 26);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 29);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 30);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 31):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 32):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 33));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 34));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 35));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 36));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 37));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 38));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 39));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 40));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 43);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 44);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 46);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 47);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 48);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 49));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 50);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 53);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 54);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 55):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 56);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 28);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 27);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 42);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 41):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 45);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 52);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 51));
    }
            neo_current_frame = fr.prev;
}

struct sUndefNode* sUndefNode_initialize(struct sUndefNode* self, char*  str  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUndefNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj5  ;
    struct sUndefNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sUndefNode*)come_increment_ref_count(self, "41module2.nc", 49, 79),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 49, 80);
    __dec_obj5=self->str,
    self->str=(char* )come_increment_ref_count(str, "41module2.nc", 51, 82);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 51, 81);
        __result_obj__0 = (struct sUndefNode*)come_increment_ref_count(self, "41module2.nc", 54, 83);
    come_call_finalizer(sUndefNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "41module2.nc}", 54, 86);
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 54, 87));
    neo_current_frame = fr.prev;
    come_call_finalizer(sUndefNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "41module2.nc}", 54, 88);
    return __result_obj__0;
}

char*  sUndefNode_kind(struct sUndefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUndefNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sUndefNode","41module2.nc",56))), "41module2.nc", 56, 89);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 56, 90));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 56, 91));
    return __result_obj__0;
}

_Bool sUndefNode_compile(struct sUndefNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUndefNode_compile"; neo_current_frame = &fr;
    char*  str  ;
    _Bool __result_obj__0;
    str=(char* )come_increment_ref_count(self->str, "41module2.nc", 61, 92);
    map$2char$phbuffer$ph_remove(info->struct_definition,(char* )come_increment_ref_count(str, "41module2.nc", 63, 101),(_Bool)0);
    map$2char$phsFun$ph_remove(info->funcs,(char* )come_increment_ref_count(str, "41module2.nc", 64, 132),(_Bool)0);
    map$2char$phsGenericsFun$ph_remove(info->generics_funcs,(char* )come_increment_ref_count(str, "41module2.nc", 65, 147),(_Bool)0);
    map$2char$phsType$ph_remove(info->types,(char* )come_increment_ref_count(str, "41module2.nc", 66, 152),(_Bool)0);
    map$2char$phbuffer$ph_remove(info->typedef_definition,(char* )come_increment_ref_count(str, "41module2.nc", 67, 153),(_Bool)0);
        __result_obj__0 = (_Bool)1;
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 69, 154));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sUndefNode_finalize(struct sUndefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUndefNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sUndefNode_finalize", 2, 84));
    }
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        (self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0, (void*)0, "sUndefNode_finalize", 3, 85));
    }
        neo_current_frame = fr.prev;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_remove(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3175, 93));
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3190, 98));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3195, 99);
                }
                memset(self->items+it,0,sizeof(struct buffer* ));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3217, 100));
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
    struct list_item$1char$ph* it_1;
    int i_2;
    struct list_item$1char$ph* prev_it_3;
    struct list_item$1char$ph* it_4;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_5;
    struct list_item$1char$ph* prev_it_6;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 95);
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
        it_1=self->head;
        i_2=0;
        while(it_1!=((void*)0)) {
            if(i_2==head) {
                self->tail=it_1->prev;
                self->tail->next=((void*)0);
            }
            if(i_2>=head) {
                prev_it_3=it_1;
                it_1=it_1->next;
                i_2++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 96);
                self->len--;
            }
            else {
                it_1=it_1->next;
                i_2++;
            }
        }
    }
    else {
        it_4=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_5=0;
        while(it_4!=((void*)0)) {
            if(i_5==head) {
                head_prev_it=it_4->prev;
            }
            if(i_5==tail) {
                tail_it=it_4;
            }
            if(i_5>=head&&i_5<tail) {
                prev_it_6=it_4;
                it_4=it_4->next;
                i_5++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 97);
                self->len--;
            }
            else {
                it_4=it_4->next;
                i_5++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 94);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3175, 102));
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3190, 103));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3195, 130);
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3217, 131));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 104));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 105);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 106);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 107);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 108);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 109);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 116);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 119);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 120));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 121));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 122);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 123);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 124);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 125);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 126));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 127));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 128));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 129));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 115);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 114);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 110));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 111));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 112);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 113));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 117);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 118);
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_remove(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3175, 133));
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3190, 134));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3195, 145);
                }
                memset(self->items+it,0,sizeof(struct sGenericsFun* ));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3217, 146));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 135);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 136);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 137);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 138));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 139);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 140);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 141);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 142);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 143));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 144));
    }
                        neo_current_frame = fr.prev;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_remove(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_remove"; neo_current_frame = &fr;
    struct map$2char$phsType$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3175, 148));
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3190, 149));
                }
                self->keys[it]=((void*)0);
                if(1) {
                    come_call_finalizer(sType_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3195, 150);
                }
                memset(self->items+it,0,sizeof(struct sType* ));
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
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3217, 151));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNoneNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNoneNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNoneNode*)come_increment_ref_count(self, "41module2.nc", 75, 155),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 75, 156);
        __result_obj__0 = (struct sNoneNode*)come_increment_ref_count(self, "41module2.nc", 78, 157);
    come_call_finalizer(sNoneNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "41module2.nc}", 78, 159);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNoneNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "41module2.nc}", 78, 160);
    return __result_obj__0;
}

char*  sNoneNode_kind(struct sNoneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNoneNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNoneNode","41module2.nc",80))), "41module2.nc", 80, 161);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 80, 162));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 80, 163));
    return __result_obj__0;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNoneNode_compile"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sNoneNode_finalize(struct sNoneNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNoneNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNoneNode_finalize", 2, 158));
    }
        neo_current_frame = fr.prev;
}

struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "static_assert_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sStaticAssert* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 92, 168, "struct sNode");
    _inf_obj_value1=(struct sStaticAssert*)come_increment_ref_count(((struct sStaticAssert*)(__right_value1=sStaticAssert_initialize((struct sStaticAssert* )come_increment_ref_count((struct sStaticAssert *)come_calloc(1, sizeof(struct sStaticAssert )*(1), "41module2.nc", 92, 164, "struct sStaticAssert* "), "41module2.nc", 92, 165),(struct sNode*)come_increment_ref_count(exp, "41module2.nc", 92, 166),(struct sNode*)come_increment_ref_count(exp2, "41module2.nc", 92, 167),info))), "41module2.nc", 92, 169);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStaticAssert_finalize;
    _inf_value1->clone=(void*)sStaticAssert_clone;
    _inf_value1->compile=(void*)sStaticAssert_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStaticAssert_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "41module2.nc", 92, 187);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 92, 188):(void*)0);
    ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 92, 189):(void*)0);
    come_call_finalizer(sStaticAssert_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 92, 190);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 92, 191):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 92, 192):(void*)0);
    return __result_obj__0;
}

static struct sStaticAssert* sStaticAssert_clone(struct sStaticAssert* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sStaticAssert_clone"; neo_current_frame = &fr;
    struct sStaticAssert* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sStaticAssert*  result  ;
    char*  __dec_obj6  ;
    struct sNode* __dec_obj7;
    struct sNode* __dec_obj8;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sStaticAssert* )come_increment_ref_count((struct sStaticAssert *)come_calloc(1, sizeof(struct sStaticAssert )*(1), "sStaticAssert_clone", 5, 170, "struct sStaticAssert* "), "sStaticAssert_clone", 5, 171);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sStaticAssert_clone", 7, 172, "char* "), "sStaticAssert_clone", 7, 174);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "sStaticAssert_clone", 7, 173);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->exp,
        result->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp), "sStaticAssert_clone", 9, 183);
        (__dec_obj7 ? __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0, (void*)0, "sStaticAssert_clone", 9, 182) :0);
    }
    if(self!=((void*)0)&&self->exp2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->exp2,
        result->exp2=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp2), "sStaticAssert_clone", 10, 185);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sStaticAssert_clone", 10, 184) :0);
    }
        __result_obj__0 = result;
    come_call_finalizer(sStaticAssert_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sStaticAssert_clone}", 11, 186);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 175);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 176):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 177, "struct sNode*"), "sNode_clone", 5, 178);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 179);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 180):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 181):(void*)0);
    return __result_obj__0;
}

int sizeof_struct(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sizeof_struct"; neo_current_frame = &fr;
    int offset;
    int max_align;
    int n;
    int i;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* multiple_assign_var1
;    char*  name  =0;
    struct sType*  field_type  =0;
    int align;
    int size;
    offset=0;
    max_align=1;
    n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
    for(i=0    ;i<n;i++){
        multiple_assign_var1=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
        name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "41module2.nc", 114, 213);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var1->v2, "41module2.nc", 114, 214);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 114, 215);
        align=alignof_type(field_type,info);
        size=(sizeof_type)(field_type,info);
        offset=align_up(offset,align);
        offset+=size;
        if(align>max_align) {
            max_align=align;
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 127, 216));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 127, 217);
    }
    offset=align_up(offset,max_align);
        neo_current_frame = fr.prev;
    return offset;
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
    struct tuple2$2char$phsType$ph* default_value_7;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 193);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 196);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 197);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 198);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 199);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 200);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_7,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_7, "/usr/local/include/neo-c.h", 2169, 201);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_7, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 202);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 203);
    return __result_obj__0;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 194));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 195);
    }
            neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_operator_load_element"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* default_value;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    int i;
    struct tuple2$2char$phsType$ph* default_value_8;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct tuple2$2char$phsType$ph*));
                __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 204);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 205);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 206);
        return __result_obj__0;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 207);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 208);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 209);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_8,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_8, "/usr/local/include/neo-c.h", 2169, 210);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, default_value_8, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 211);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 212);
    return __result_obj__0;
}

int sizeof_union(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sizeof_union"; neo_current_frame = &fr;
    int max_size;
    int max_align;
    int n;
    int i;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* multiple_assign_var2
;    char*  name  =0;
    struct sType*  field_type  =0;
    int size;
    int align;
    max_size=0;
    max_align=1;
    n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
    for(i=0    ;i<n;i++){
        multiple_assign_var2=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
        name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "41module2.nc", 138, 218);
        field_type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v2, "41module2.nc", 138, 219);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 138, 220);
        size=(sizeof_type)(field_type,info);
        align=alignof_type(field_type,info);
        if(size>max_size) {
            max_size=size;
        }
        if(align>max_align) {
            max_align=align;
        }
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 151, 221));
        come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 151, 222);
    }
        neo_current_frame = fr.prev;
    return align_up(max_size,max_align);
    neo_current_frame = fr.prev;
}

int sizeof_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sizeof_type"; neo_current_frame = &fr;
    int element_num;
    int i;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    _Bool no_output_come_code;
    _Bool Value;
    struct CVALUE*  cvalue  ;
    struct sType*  element_type  ;
    int __result_obj__0;
    if(list$1sNode$ph_length(type->mArrayNum)>0) {
        element_num=0;
        for(i=0        ;i<list$1sNode$ph_length(type->mArrayNum);i++){
            node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,i), "41module2.nc", 160, 241);
            no_output_come_code=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            Value=node_compile(node,info);
            if(!Value) {
                err_msg(info,"invalid array num");
                exit(2);
            }
            info->no_output_come_code=no_output_come_code;
            __right_value0 = (void*)0;
            cvalue=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "41module2.nc", 170, 242);
            element_num+=atoi(cvalue->c_value);
            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 174, 243):(void*)0);
            come_call_finalizer(CVALUE_finalize, cvalue, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 174, 244);
        }
        __right_value0 = (void*)0;
        element_type=(struct sType* )come_increment_ref_count(sType_clone(type), "41module2.nc", 174, 411);
        list$1sNode$ph_reset(element_type->mArrayNum);
                __result_obj__0 = (sizeof_type)(element_type,info)*element_num;
        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 177, 413);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 180, 414);
    }
    if(type->mPointerNum>0) {
                neo_current_frame = fr.prev;
        return 8;
    }
    if(type->mClass->mStruct) {
                neo_current_frame = fr.prev;
        return (sizeof_struct)(type,info);
    }
    if(type->mClass->mUnion) {
                neo_current_frame = fr.prev;
        return (sizeof_union)(type,info);
    }
    if(string_operator_equals(type->mClass->mName,"char")) {
                neo_current_frame = fr.prev;
        return 1;
    }
    if(string_operator_equals(type->mClass->mName,"short")) {
                neo_current_frame = fr.prev;
        return 2;
    }
    if(string_operator_equals(type->mClass->mName,"int")) {
                neo_current_frame = fr.prev;
        return 4;
    }
    if(string_operator_equals(type->mClass->mName,"long")) {
                neo_current_frame = fr.prev;
        return 8;
    }
    err_msg(info,"sizeof: unsupported type");
    exit(2);
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

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_9;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 223);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 224):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 225):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2153, 226):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 227);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2161, 228):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_9,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_9, "/usr/local/include/neo-c.h", 2169, 229);
    ((default_value_9) ? default_value_9 = come_decrement_ref_count(default_value_9, ((struct sNode*)default_value_9)->finalize, ((struct sNode*)default_value_9)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 230):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 231):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_10;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 232);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 233):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2150, 234):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 2153, 235):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 236);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2161, 237):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_10,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_10, "/usr/local/include/neo-c.h", 2169, 238);
    ((default_value_10) ? default_value_10 = come_decrement_ref_count(default_value_10, ((struct sNode*)default_value_10)->finalize, ((struct sNode*)default_value_10)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 239):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "/usr/local/include/neo-c.h", 2169, 240):(void*)0);
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
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 245, "struct sType* "), "sType_clone", 5, 246);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 248);
        come_call_finalizer(sType_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 247);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 250);
        come_call_finalizer(sType_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 249);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 280);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 279);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj15=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 282);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 281);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 284);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 283) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 286);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 285) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 287, "char* "), "sType_clone", 14, 289);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 288);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 290, "char* "), "sType_clone", 15, 292);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 291);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 293, "char* "), "sType_clone", 16, 295);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 294);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 296, "char* "), "sType_clone", 17, 298);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 297);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 299, "char* "), "sType_clone", 18, 301);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 300);
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
        __dec_obj23=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 302, "char* "), "sType_clone", 49, 304);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 303);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 305, "char* "), "sType_clone", 51, 307);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 306);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 308, "char* "), "sType_clone", 54, 310);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 309);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 340);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj29,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 339);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj30=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 342);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 341);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 362);
        come_call_finalizer(list$1int$_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 361);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 364);
        come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 363);
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
        __dec_obj33=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 366);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 365);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 367, "char* "), "sType_clone", 67, 369);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 368);
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
        __dec_obj35=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 371);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 370);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj39=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 403);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 402);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj40=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 405);
        come_call_finalizer(sType_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 404);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj41=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 407);
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 406) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj42=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 409);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj42,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 408);
    }
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 410);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 251);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 252);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 253, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 257)), "/usr/local/include/neo-c.h", 1513, 258);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 273));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 274));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 275);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 276);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 277);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 254);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 255);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 256);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj11  ;
    struct list_item$1sType$ph* litem_11;
    struct sType*  __dec_obj12  ;
    struct list_item$1sType$ph* litem_12;
    struct sType*  __dec_obj13  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 259);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 260, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 261);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj11=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 263);
        come_call_finalizer(sType_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 262);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 264, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 265);
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj12=litem_11->item,
        litem_11->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 267);
        come_call_finalizer(sType_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 266);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 268, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 269);
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj13=litem_12->item,
        litem_12->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 271);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 270);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 272);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 278);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 311);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 312);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 313, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 317)), "/usr/local/include/neo-c.h", 1513, 318);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 333));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 334));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 335);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 336);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 337);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 314);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 315);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 316);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj26;
    struct list_item$1sNode$ph* litem_13;
    struct sNode* __dec_obj27;
    struct list_item$1sNode$ph* litem_14;
    struct sNode* __dec_obj28;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 319):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 320, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 321);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj26=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 323);
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 322) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 324, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 325);
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj27=litem_13->item,
        litem_13->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 327);
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 326) :0);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 328, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 329);
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj28=litem_14->item,
        litem_14->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 331);
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 330) :0);
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 332):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 338);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 343);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 344);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 345, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 349)), "/usr/local/include/neo-c.h", 1513, 350);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 357);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 358);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 359);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 346);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 347);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 348);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_15;
    struct list_item$1int$* litem_16;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 351, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 352);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 353, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 354);
        litem_15->prev=self->head;
        litem_15->next=((void*)0);
        litem_15->item=item;
        self->tail=litem_15;
        self->head->next=litem_15;
    }
    else {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 355, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 356);
        litem_16->prev=self->tail;
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail->next=litem_16;
        self->tail=litem_16;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 360);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 372);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 373);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 374, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 378)), "/usr/local/include/neo-c.h", 1513, 379);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 394, "char* "), "/usr/local/include/neo-c.h", 1518, 395));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 396, "char* "), "/usr/local/include/neo-c.h", 1521, 397));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 398);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 399);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 400);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 375);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 376);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 377);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj36  ;
    struct list_item$1char$ph* litem_17;
    char*  __dec_obj37  ;
    struct list_item$1char$ph* litem_18;
    char*  __dec_obj38  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 380));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 381, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 382);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj36=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 384);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 383);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 385, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 386);
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        __dec_obj37=litem_17->item,
        litem_17->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 388);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 387);
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 389, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 390);
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        __dec_obj38=litem_18->item,
        litem_18->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 392);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 391);
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 393));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 401);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 412);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int alignof_type(struct sType*  type  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "alignof_type"; neo_current_frame = &fr;
    int max_align;
    int n;
    int i;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phsType$ph* multiple_assign_var3
;    char*  name  =0;
    struct sType*  field_type  =0;
    int a;
    if(type->mPointerNum>0) {
                neo_current_frame = fr.prev;
        return 8;
    }
    if(type->mClass->mStruct||type->mClass->mUnion) {
        max_align=1;
        n=list$1tuple2$2char$phsType$ph$ph_length(type->mClass->mFields);
        for(i=0        ;i<n;i++){
            multiple_assign_var3=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(type->mClass->mFields,i)));
            name=(char* )come_increment_ref_count(multiple_assign_var3->v1, "41module2.nc", 210, 415);
            field_type=(struct sType* )come_increment_ref_count(multiple_assign_var3->v2, "41module2.nc", 210, 416);
            come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 210, 417);
            a=alignof_type(field_type,info);
            if(a>max_align) {
                max_align=a;
            }
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 217, 418));
            come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 217, 419);
        }
                neo_current_frame = fr.prev;
        return max_align;
    }
    if(string_operator_equals(type->mClass->mName,"char")) {
                neo_current_frame = fr.prev;
        return 1;
    }
    if(string_operator_equals(type->mClass->mName,"short")) {
                neo_current_frame = fr.prev;
        return 2;
    }
    if(string_operator_equals(type->mClass->mName,"int")) {
                neo_current_frame = fr.prev;
        return 4;
    }
    if(string_operator_equals(type->mClass->mName,"long")) {
                neo_current_frame = fr.prev;
        return 8;
    }
    err_msg(info,"sizeof: unsupported type");
    exit(2);
    neo_current_frame = fr.prev;
}

char*  reflection_node(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  exp  ;
    char*  result  ;
    struct sType*  Value  ;
    _Bool _conditional_value_X0;
    unsigned long  size  ;
    char*  __dec_obj43  ;
    char*  __result_obj__0  ;
    char*  exp_19  ;
    char*  result_20  ;
    struct sType*  Value_21  ;
    _Bool _conditional_value_X1;
    unsigned long  size_22  ;
    char*  __dec_obj44  ;
    char*  exp_23  ;
    _Bool defined;
    struct buffer*  Value_24  ;
    _Bool _conditional_value_X2;
    struct sFun*  Value_25  ;
    _Bool _conditional_value_X3;
    struct sGenericsFun*  Value_26  ;
    _Bool _conditional_value_X4;
    struct sType*  Value_27  ;
    _Bool _conditional_value_X5;
    struct sVar*  Value_28  ;
    char*  exp_29  ;
    _Bool defined_30;
    char*  exp_31  ;
    char*  result_32  ;
    char*  __dec_obj45  ;
    char*  exp_33  ;
    char*  args  ;
    char*  __dec_obj46  ;
    char*  result_34  ;
    char*  __dec_obj47  ;
    char*  exp_36  ;
    char*  exp_37  ;
    char*  exp_38  ;
    char*  exp_39  ;
    char*  exp_40  ;
    _Bool defined_41;
    struct sType*  Value_42  ;
    _Bool _conditional_value_X6;
    char*  exp_43  ;
    char*  result_44  ;
    struct sFun*  Value_45  ;
    _Bool _conditional_value_X7;
    char*  __dec_obj48  ;
    struct sVar*  Value_46  ;
    char*  __dec_obj49  ;
    char*  exp_47  ;
    char*  result_48  ;
    struct sFun*  Value_49  ;
    _Bool _conditional_value_X8;
    char*  __dec_obj50  ;
    char*  exp_50  ;
    char*  exp2  ;
    char*  result_51  ;
    struct sFun*  Value_52  ;
    _Bool _conditional_value_X9;
    struct sType*  type  ;
    char*  __dec_obj51  ;
    char*  exp_55  ;
    char*  exp2_56  ;
    char*  result_57  ;
    struct sFun*  Value_58  ;
    _Bool _conditional_value_X10;
    char*  __dec_obj52  ;
    char*  exp_61  ;
    char*  result_62  ;
    struct sFun*  Value_63  ;
    _Bool _conditional_value_X11;
    char*  __dec_obj53  ;
    char*  exp_64  ;
    char*  result_65  ;
    struct sClass*  Value_66  ;
    _Bool _conditional_value_X12;
    char*  __dec_obj54  ;
    char*  exp_67  ;
    char*  exp2_68  ;
    char*  result_69  ;
    struct sClass*  Value_70  ;
    _Bool _conditional_value_X13;
    int n;
    struct tuple2$2char$phsType$ph* multiple_assign_var4
;    char*  name  =0;
    struct sType*  type_71  =0;
    char*  __dec_obj55  ;
    char*  exp_72  ;
    _Bool defined_73;
    struct sFun*  Value_74  ;
    _Bool _conditional_value_X14;
    char*  exp_75  ;
    _Bool defined_76;
    struct sClass*  Value_77  ;
    _Bool _conditional_value_X15;
    char*  exp_78  ;
    _Bool defined_79;
    struct sClass*  Value_80  ;
    _Bool _conditional_value_X16;
    char*  exp_81  ;
    _Bool defined_82;
    struct sClass*  Value_83  ;
    _Bool _conditional_value_X17;
    char*  exp_84  ;
    _Bool defined_85;
    struct sClass*  Value_86  ;
    _Bool _conditional_value_X18;
    char*  exp_87  ;
    _Bool defined_88;
    struct sClass*  Value_89  ;
    _Bool _conditional_value_X19;
    int sline_real;
    int sline;
    void* __right_value1 = (void*)0;
    struct buffer*  value_90  ;
    char* p;
    int sline_91;
    char*  exp_92  ;
    int sline2;
    char*  var_name  ;
    char*  value_93  ;
    struct buffer*  buf  ;
    int n_94;
    int n_95;
    char*  exp_96  ;
    if(parsecmp("sizeof",info)) {
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 232, 420));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 241, 421);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result=((void*)0);
        __right_value0 = (void*)0;
        Value=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp), "41module2.nc", 252, 452);
        if(({(_conditional_value_X0=(Value));_conditional_value_X0;})) {
            size=(sizeof_type)(Value,info);
            __right_value0 = (void*)0;
            __dec_obj43=result,
            result=(char* )come_increment_ref_count(size_t_to_string(size), "41module2.nc", 254, 454);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 254, 453);
        }
        if(result) {
                        __result_obj__0 = (char* )come_increment_ref_count(result, "41module2.nc", 258, 455);
            (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 258, 456));
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 258, 457));
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 258, 458);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 258, 459));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 261, 460);
            (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 261, 461));
            (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 261, 462));
            come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 261, 463);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 261, 464));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 261, 465));
            return __result_obj__0;
        }
        (exp = come_decrement_ref_count(exp, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 466));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 467));
        come_call_finalizer(sType_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 468);
    }
    else if(parsecmp("alignof",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 265, 469));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_19=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 274, 470);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_20=((void*)0);
        __right_value0 = (void*)0;
        Value_21=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_19), "41module2.nc", 285, 471);
        if(({(_conditional_value_X1=(Value_21));_conditional_value_X1;})) {
            size_22=alignof_type(Value_21,info);
            __right_value0 = (void*)0;
            __dec_obj44=result_20,
            result_20=(char* )come_increment_ref_count(size_t_to_string(size_22), "41module2.nc", 287, 473);
            __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 287, 472);
        }
        if(result_20) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_20, "41module2.nc", 291, 474);
            (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 291, 475));
            (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 291, 476));
            come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 291, 477);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 291, 478));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 294, 479);
            (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 294, 480));
            (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 294, 481));
            come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 294, 482);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 294, 483));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 294, 484));
            return __result_obj__0;
        }
        (exp_19 = come_decrement_ref_count(exp_19, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 485));
        (result_20 = come_decrement_ref_count(result_20, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 486));
        come_call_finalizer(sType_finalize, Value_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 487);
    }
    else if(parsecmp("defined",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 298, 488));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_23=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 307, 489);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined=(_Bool)0;
        __right_value0 = (void*)0;
        Value_24=(struct buffer* )come_increment_ref_count(map$2char$phbuffer$ph_operator_load_element(info->struct_definition,exp_23), "41module2.nc", 317, 520);
        if(({(_conditional_value_X2=(Value_24));_conditional_value_X2;})) {
            defined=(_Bool)1;
        }
        come_call_finalizer(buffer_finalize, Value_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 320, 521);
        __right_value0 = (void*)0;
        Value_25=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_23), "41module2.nc", 320, 552);
        if(({(_conditional_value_X3=(Value_25));_conditional_value_X3;})) {
            defined=(_Bool)1;
        }
        come_call_finalizer(sFun_finalize, Value_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 323, 553);
        __right_value0 = (void*)0;
        Value_26=(struct sGenericsFun* )come_increment_ref_count(map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,exp_23), "41module2.nc", 323, 584);
        if(({(_conditional_value_X4=(Value_26));_conditional_value_X4;})) {
            defined=(_Bool)1;
        }
        come_call_finalizer(sGenericsFun_finalize, Value_26, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 326, 585);
        __right_value0 = (void*)0;
        Value_27=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_23), "41module2.nc", 326, 586);
        if(({(_conditional_value_X5=(Value_27));_conditional_value_X5;})) {
            defined=(_Bool)1;
        }
        come_call_finalizer(sType_finalize, Value_27, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 329, 587);
        Value_28=get_variable_from_table(info->gv_table,exp_23);
        if(Value_28) {
            defined=(_Bool)1;
        }
        if(defined) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 334, 588);
            (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 334, 589));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 334, 590));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 334, 591));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 337, 592);
            (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 337, 593));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 337, 594));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 337, 595));
            return __result_obj__0;
        }
        (exp_23 = come_decrement_ref_count(exp_23, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 596));
    }
    else if(parsecmp("macro_defined",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 341, 597));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_29=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 350, 598);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_30=get_macro(exp_29)!=((void*)0);
        if(defined_30) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 362, 599);
            (exp_29 = come_decrement_ref_count(exp_29, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 362, 600));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 362, 601));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 362, 602));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 365, 603);
            (exp_29 = come_decrement_ref_count(exp_29, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 365, 604));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 365, 605));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 365, 606));
            return __result_obj__0;
        }
        (exp_29 = come_decrement_ref_count(exp_29, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 607));
    }
    else if(parsecmp("macro_value",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 369, 608));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_31=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 378, 609);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_32=((void*)0);
        const char* value=get_macro(exp_31);
        if(value) {
            __right_value0 = (void*)0;
            __dec_obj45=result_32,
            result_32=(char* )come_increment_ref_count(charp_to_string(value), "41module2.nc", 392, 611);
            __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 392, 610);
        }
        if(result_32) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_32, "41module2.nc", 396, 612);
            (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 396, 613));
            (result_32 = come_decrement_ref_count(result_32, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 396, 614));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 396, 615));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 399, 616);
            (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 399, 617));
            (result_32 = come_decrement_ref_count(result_32, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 399, 618));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 399, 619));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 399, 620));
            return __result_obj__0;
        }
        (exp_31 = come_decrement_ref_count(exp_31, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 621));
        (result_32 = come_decrement_ref_count(result_32, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 622));
    }
    else if(parsecmp("macro_call",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 403, 623));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_33=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 412, 624);
        __right_value0 = (void*)0;
        args=(char*)come_increment_ref_count(xsprintf(""), "41module2.nc", 413, 625);
        if(*info->p->p==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj46=args,
            args=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 418, 627);
            __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 418, 626);
        }
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_34=((void*)0);
        const char* value_35=call_func_macro(exp_33,args,info->sname,info->sline);
        if(value_35) {
            __right_value0 = (void*)0;
            __dec_obj47=result_34,
            result_34=(char* )come_increment_ref_count(charp_to_string(value_35), "41module2.nc", 433, 629);
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 433, 628);
        }
        if(result_34) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_34, "41module2.nc", 437, 630);
            (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 437, 631));
            (args = come_decrement_ref_count(args, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 437, 632));
            (result_34 = come_decrement_ref_count(result_34, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 437, 633));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 437, 634));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 440, 635);
            (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 440, 636));
            (args = come_decrement_ref_count(args, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 440, 637));
            (result_34 = come_decrement_ref_count(result_34, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 440, 638));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 440, 639));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 440, 640));
            return __result_obj__0;
        }
        (exp_33 = come_decrement_ref_count(exp_33, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 641));
        (args = come_decrement_ref_count(args, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 642));
        (result_34 = come_decrement_ref_count(result_34, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 643));
    }
    else if(parsecmp("is_static",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 444, 644));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        if(*info->p->p==34) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_36=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 458, 645);
        if(*info->p->p==34) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_36,"static ")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 473, 646);
            (exp_36 = come_decrement_ref_count(exp_36, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 473, 647));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 473, 648));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 473, 649));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 476, 650);
            (exp_36 = come_decrement_ref_count(exp_36, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 476, 651));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 476, 652));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 476, 653));
            return __result_obj__0;
        }
        (exp_36 = come_decrement_ref_count(exp_36, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 654));
    }
    else if(parsecmp("is_heap",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 480, 655));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_37=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 489, 656);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_37,"%")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 499, 657);
            (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 499, 658));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 499, 659));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 499, 660));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 502, 661);
            (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 502, 662));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 502, 663));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 502, 664));
            return __result_obj__0;
        }
        (exp_37 = come_decrement_ref_count(exp_37, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 665));
    }
    else if(parsecmp("is_const",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 506, 666));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_38=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 515, 667);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_38,"const ")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 525, 668);
            (exp_38 = come_decrement_ref_count(exp_38, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 525, 669));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 525, 670));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 525, 671));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 528, 672);
            (exp_38 = come_decrement_ref_count(exp_38, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 528, 673));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 528, 674));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 528, 675));
            return __result_obj__0;
        }
        (exp_38 = come_decrement_ref_count(exp_38, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 676));
    }
    else if(parsecmp("is_uniq",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 532, 677));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_39=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 541, 678);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(strstr(exp_39,"uniq ")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 551, 679);
            (exp_39 = come_decrement_ref_count(exp_39, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 551, 680));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 551, 681));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 551, 682));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 554, 683);
            (exp_39 = come_decrement_ref_count(exp_39, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 554, 684));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 554, 685));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 554, 686));
            return __result_obj__0;
        }
        (exp_39 = come_decrement_ref_count(exp_39, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 687));
    }
    else if(parsecmp("is_type",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 558, 688));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_40=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 567, 689);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_41=(_Bool)0;
        __right_value0 = (void*)0;
        Value_42=(struct sType* )come_increment_ref_count(map$2char$phsType$ph_operator_load_element(info->types,exp_40), "41module2.nc", 578, 690);
        if(({(_conditional_value_X6=(Value_42));_conditional_value_X6;})) {
            defined_41=(_Bool)1;
        }
        if(defined_41) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 583, 691);
            (exp_40 = come_decrement_ref_count(exp_40, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 583, 692));
            come_call_finalizer(sType_finalize, Value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 583, 693);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 583, 694));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 583, 695));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 586, 696);
            (exp_40 = come_decrement_ref_count(exp_40, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 586, 697));
            come_call_finalizer(sType_finalize, Value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 586, 698);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 586, 699));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 586, 700));
            return __result_obj__0;
        }
        (exp_40 = come_decrement_ref_count(exp_40, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 701));
        come_call_finalizer(sType_finalize, Value_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 702);
    }
    else if(parsecmp("type",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 590, 703));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_43=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 599, 704);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_44=((void*)0);
        __right_value0 = (void*)0;
        Value_45=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_43), "41module2.nc", 610, 705);
        if(({(_conditional_value_X7=(Value_45));_conditional_value_X7;})) {
            __right_value0 = (void*)0;
            __dec_obj48=result_44,
            result_44=(char* )come_increment_ref_count(make_come_type_name_string(Value_45->mResultType,info), "41module2.nc", 611, 707);
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 611, 706);
        }
        come_call_finalizer(sFun_finalize, Value_45, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 614, 708);
        Value_46=get_variable_from_table(info->gv_table,exp_43);
        if(Value_46) {
            __right_value0 = (void*)0;
            __dec_obj49=result_44,
            result_44=(char* )come_increment_ref_count(make_come_type_name_string(Value_46->mType,info), "41module2.nc", 615, 710);
            __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 615, 709);
        }
        if(result_44) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_44, "41module2.nc", 619, 711);
            (exp_43 = come_decrement_ref_count(exp_43, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 619, 712));
            (result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 619, 713));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 619, 714));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 622, 715);
            (exp_43 = come_decrement_ref_count(exp_43, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 622, 716));
            (result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 622, 717));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 622, 718));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 622, 719));
            return __result_obj__0;
        }
        (exp_43 = come_decrement_ref_count(exp_43, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 720));
        (result_44 = come_decrement_ref_count(result_44, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 721));
    }
    else if(parsecmp("result_type",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 626, 722));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_47=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 635, 723);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_48=((void*)0);
        __right_value0 = (void*)0;
        Value_49=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_47), "41module2.nc", 646, 724);
        if(({(_conditional_value_X8=(Value_49));_conditional_value_X8;})) {
            __right_value0 = (void*)0;
            __dec_obj50=result_48,
            result_48=(char* )come_increment_ref_count(make_come_type_name_string(Value_49->mResultType,info), "41module2.nc", 647, 726);
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 647, 725);
        }
        if(result_48) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_48, "41module2.nc", 651, 727);
            (exp_47 = come_decrement_ref_count(exp_47, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 651, 728));
            (result_48 = come_decrement_ref_count(result_48, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 651, 729));
            come_call_finalizer(sFun_finalize, Value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 651, 730);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 651, 731));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 654, 732);
            (exp_47 = come_decrement_ref_count(exp_47, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 654, 733));
            (result_48 = come_decrement_ref_count(result_48, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 654, 734));
            come_call_finalizer(sFun_finalize, Value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 654, 735);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 654, 736));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 654, 737));
            return __result_obj__0;
        }
        (exp_47 = come_decrement_ref_count(exp_47, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 738));
        (result_48 = come_decrement_ref_count(result_48, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 739));
        come_call_finalizer(sFun_finalize, Value_49, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 740);
    }
    else if(parsecmp("param_types",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 658, 741));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_50=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 667, 742);
        if(*info->p->p==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp2=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 674, 743);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_51=((void*)0);
        __right_value0 = (void*)0;
        Value_52=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_50), "41module2.nc", 685, 744);
        if(({(_conditional_value_X9=(Value_52));_conditional_value_X9;})) {
            __right_value0 = (void*)0;
            type=((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(Value_52->mParamTypes,atoi(exp2))));
            if(type) {
                __right_value0 = (void*)0;
                __dec_obj51=result_51,
                result_51=(char* )come_increment_ref_count(make_come_type_name_string(type,info), "41module2.nc", 688, 764);
                __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 688, 763);
            }
        }
        if(result_51) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_51, "41module2.nc", 693, 765);
            (exp_50 = come_decrement_ref_count(exp_50, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 693, 766));
            (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 693, 767));
            (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 693, 768));
            come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 693, 769);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 693, 770));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 696, 771);
            (exp_50 = come_decrement_ref_count(exp_50, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 696, 772));
            (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 696, 773));
            (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 696, 774));
            come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 696, 775);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 696, 776));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 696, 777));
            return __result_obj__0;
        }
        (exp_50 = come_decrement_ref_count(exp_50, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 778));
        (exp2 = come_decrement_ref_count(exp2, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 779));
        (result_51 = come_decrement_ref_count(result_51, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 780));
        come_call_finalizer(sFun_finalize, Value_52, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 781);
    }
    else if(parsecmp("param_names",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 700, 782));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_55=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 709, 783);
        if(*info->p->p==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp2_56=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 716, 784);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_57=((void*)0);
        __right_value0 = (void*)0;
        Value_58=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_55), "41module2.nc", 727, 785);
        if(({(_conditional_value_X10=(Value_58));_conditional_value_X10;})) {
            __right_value0 = (void*)0;
            __dec_obj52=result_57,
            result_57=(char* )come_increment_ref_count(list$1char$ph_operator_load_element(Value_58->mParamNames,atoi(exp2_56)), "41module2.nc", 728, 805);
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 728, 804);
        }
        if(result_57) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_57, "41module2.nc", 732, 806);
            (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 732, 807));
            (exp2_56 = come_decrement_ref_count(exp2_56, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 732, 808));
            (result_57 = come_decrement_ref_count(result_57, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 732, 809));
            come_call_finalizer(sFun_finalize, Value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 732, 810);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 732, 811));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 735, 812);
            (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 735, 813));
            (exp2_56 = come_decrement_ref_count(exp2_56, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 735, 814));
            (result_57 = come_decrement_ref_count(result_57, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 735, 815));
            come_call_finalizer(sFun_finalize, Value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 735, 816);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 735, 817));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 735, 818));
            return __result_obj__0;
        }
        (exp_55 = come_decrement_ref_count(exp_55, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 819));
        (exp2_56 = come_decrement_ref_count(exp2_56, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 820));
        (result_57 = come_decrement_ref_count(result_57, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 821));
        come_call_finalizer(sFun_finalize, Value_58, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 822);
    }
    else if(parsecmp("num_param_types",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 739, 823));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_61=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 748, 824);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_62=((void*)0);
        __right_value0 = (void*)0;
        Value_63=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_61), "41module2.nc", 759, 825);
        if(({(_conditional_value_X11=(Value_63));_conditional_value_X11;})) {
            __right_value0 = (void*)0;
            __dec_obj53=result_62,
            result_62=(char* )come_increment_ref_count(xsprintf("%d",list$1sType$ph_length(Value_63->mParamTypes)), "41module2.nc", 760, 827);
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 760, 826);
        }
        if(result_62) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_62, "41module2.nc", 764, 828);
            (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 764, 829));
            (result_62 = come_decrement_ref_count(result_62, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 764, 830));
            come_call_finalizer(sFun_finalize, Value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 764, 831);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 764, 832));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 767, 833);
            (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 767, 834));
            (result_62 = come_decrement_ref_count(result_62, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 767, 835));
            come_call_finalizer(sFun_finalize, Value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 767, 836);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 767, 837));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 767, 838));
            return __result_obj__0;
        }
        (exp_61 = come_decrement_ref_count(exp_61, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 839));
        (result_62 = come_decrement_ref_count(result_62, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 840));
        come_call_finalizer(sFun_finalize, Value_63, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 841);
    }
    else if(parsecmp("num_fields",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 771, 842));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_64=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 780, 843);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_65=((void*)0);
        __right_value0 = (void*)0;
        Value_66=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_64), "41module2.nc", 791, 880);
        if(({(_conditional_value_X12=(Value_66));_conditional_value_X12;})) {
            if(Value_66->mStruct) {
                __right_value0 = (void*)0;
                __dec_obj54=result_65,
                result_65=(char* )come_increment_ref_count(xsprintf("%d",list$1tuple2$2char$phsType$ph$ph_length(Value_66->mFields)), "41module2.nc", 793, 882);
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 793, 881);
            }
        }
        if(result_65) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_65, "41module2.nc", 798, 883);
            (exp_64 = come_decrement_ref_count(exp_64, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 798, 884));
            (result_65 = come_decrement_ref_count(result_65, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 798, 885));
            come_call_finalizer(sClass_finalize, Value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 798, 886);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 798, 887));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 801, 888);
            (exp_64 = come_decrement_ref_count(exp_64, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 801, 889));
            (result_65 = come_decrement_ref_count(result_65, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 801, 890));
            come_call_finalizer(sClass_finalize, Value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 801, 891);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 801, 892));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 801, 893));
            return __result_obj__0;
        }
        (exp_64 = come_decrement_ref_count(exp_64, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 894));
        (result_65 = come_decrement_ref_count(result_65, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 895));
        come_call_finalizer(sClass_finalize, Value_66, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 896);
    }
    else if(parsecmp("field_types",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 805, 897));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_67=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 814, 898);
        if(*info->p->p==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp2_68=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 821, 899);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        result_69=((void*)0);
        __right_value0 = (void*)0;
        Value_70=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_67), "41module2.nc", 832, 900);
        if(({(_conditional_value_X13=(Value_70));_conditional_value_X13;})) {
            if(Value_70->mStruct) {
                n=atoi(exp2_68);
                if(n<list$1tuple2$2char$phsType$ph$ph_length(Value_70->mFields)) {
                    __right_value0 = (void*)0;
                    multiple_assign_var4=((struct tuple2$2char$phsType$ph*)(__right_value0=list$1tuple2$2char$phsType$ph$ph_operator_load_element(Value_70->mFields,n)));
                    name=(char* )come_increment_ref_count(multiple_assign_var4->v1, "41module2.nc", 836, 901);
                    type_71=(struct sType* )come_increment_ref_count(multiple_assign_var4->v2, "41module2.nc", 836, 902);
                    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 836, 903);
                    if(type_71) {
                        __right_value0 = (void*)0;
                        __dec_obj55=result_69,
                        result_69=(char* )come_increment_ref_count(make_come_type_name_string(type_71,info), "41module2.nc", 838, 905);
                        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 838, 904);
                    }
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 841, 906));
                    come_call_finalizer(sType_finalize, type_71, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 841, 907);
                }
            }
        }
        if(result_69) {
                        __result_obj__0 = (char* )come_increment_ref_count(result_69, "41module2.nc", 845, 908);
            (exp_67 = come_decrement_ref_count(exp_67, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 845, 909));
            (exp2_68 = come_decrement_ref_count(exp2_68, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 845, 910));
            (result_69 = come_decrement_ref_count(result_69, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 845, 911));
            come_call_finalizer(sClass_finalize, Value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 845, 912);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 845, 913));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 848, 914);
            (exp_67 = come_decrement_ref_count(exp_67, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 848, 915));
            (exp2_68 = come_decrement_ref_count(exp2_68, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 848, 916));
            (result_69 = come_decrement_ref_count(result_69, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 848, 917));
            come_call_finalizer(sClass_finalize, Value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 848, 918);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 848, 919));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 848, 920));
            return __result_obj__0;
        }
        (exp_67 = come_decrement_ref_count(exp_67, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 921));
        (exp2_68 = come_decrement_ref_count(exp2_68, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 922));
        (result_69 = come_decrement_ref_count(result_69, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 923));
        come_call_finalizer(sClass_finalize, Value_70, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 924);
    }
    else if(parsecmp("is_inline",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 852, 925));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_72=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 861, 926);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_73=(_Bool)0;
        __right_value0 = (void*)0;
        Value_74=(struct sFun* )come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,exp_72), "41module2.nc", 872, 927);
        if(({(_conditional_value_X14=(Value_74));_conditional_value_X14;})) {
            if(Value_74->mResultType->mInline) {
                defined_73=(_Bool)1;
            }
        }
        if(defined_73) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 879, 928);
            (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 879, 929));
            come_call_finalizer(sFun_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 879, 930);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 879, 931));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 879, 932));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 882, 933);
            (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 882, 934));
            come_call_finalizer(sFun_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 882, 935);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 882, 936));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 882, 937));
            return __result_obj__0;
        }
        (exp_72 = come_decrement_ref_count(exp_72, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 938));
        come_call_finalizer(sFun_finalize, Value_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 939);
    }
    else if(parsecmp("is_struct",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 886, 940));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_75=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 895, 941);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_76=(_Bool)0;
        __right_value0 = (void*)0;
        Value_77=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_75), "41module2.nc", 906, 942);
        if(({(_conditional_value_X15=(Value_77));_conditional_value_X15;})) {
            if(Value_77->mStruct) {
                defined_76=(_Bool)1;
            }
        }
        if(defined_76) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 913, 943);
            (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 913, 944));
            come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 913, 945);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 913, 946));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 913, 947));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 916, 948);
            (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 916, 949));
            come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 916, 950);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 916, 951));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 916, 952));
            return __result_obj__0;
        }
        (exp_75 = come_decrement_ref_count(exp_75, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 953));
        come_call_finalizer(sClass_finalize, Value_77, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 954);
    }
    else if(parsecmp("is_union",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 920, 955));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_78=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 929, 956);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_79=(_Bool)0;
        __right_value0 = (void*)0;
        Value_80=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_78), "41module2.nc", 940, 957);
        if(({(_conditional_value_X16=(Value_80));_conditional_value_X16;})) {
            if(Value_80->mUnion) {
                defined_79=(_Bool)1;
            }
        }
        if(defined_79) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 947, 958);
            (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 947, 959));
            come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 947, 960);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 947, 961));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 947, 962));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 950, 963);
            (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 950, 964));
            come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 950, 965);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 950, 966));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 950, 967));
            return __result_obj__0;
        }
        (exp_78 = come_decrement_ref_count(exp_78, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 968));
        come_call_finalizer(sClass_finalize, Value_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 969);
    }
    else if(parsecmp("is_enum",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 954, 970));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_81=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 963, 971);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_82=(_Bool)0;
        __right_value0 = (void*)0;
        Value_83=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_81), "41module2.nc", 974, 972);
        if(({(_conditional_value_X17=(Value_83));_conditional_value_X17;})) {
            if(Value_83->mEnum) {
                defined_82=(_Bool)1;
            }
        }
        if(defined_82) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 981, 973);
            (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 981, 974));
            come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 981, 975);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 981, 976));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 981, 977));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 984, 978);
            (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 984, 979));
            come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 984, 980);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 984, 981));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 984, 982));
            return __result_obj__0;
        }
        (exp_81 = come_decrement_ref_count(exp_81, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 983));
        come_call_finalizer(sClass_finalize, Value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 984);
    }
    else if(parsecmp("is_interface",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 988, 985));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_84=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 997, 986);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_85=(_Bool)0;
        __right_value0 = (void*)0;
        Value_86=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_84), "41module2.nc", 1008, 987);
        if(({(_conditional_value_X18=(Value_86));_conditional_value_X18;})) {
            if(Value_86->mProtocol) {
                defined_85=(_Bool)1;
            }
        }
        if(defined_85) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1015, 988);
            (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1015, 989));
            come_call_finalizer(sClass_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1015, 990);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1015, 991));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1015, 992));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1018, 993);
            (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1018, 994));
            come_call_finalizer(sClass_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1018, 995);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1018, 996));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1018, 997));
            return __result_obj__0;
        }
        (exp_84 = come_decrement_ref_count(exp_84, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 998));
        come_call_finalizer(sClass_finalize, Value_86, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 999);
    }
    else if(parsecmp("is_generics",info)) {
        __right_value0 = (void*)0;
        (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1022, 1000));
        skip_spaces_and_lf(info);
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_87=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1031, 1001);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        defined_88=(_Bool)0;
        __right_value0 = (void*)0;
        Value_89=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,exp_87), "41module2.nc", 1042, 1002);
        if(({(_conditional_value_X19=(Value_89));_conditional_value_X19;})) {
            if(Value_89->mGenerics) {
                defined_88=(_Bool)1;
            }
        }
        if(defined_88) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1049, 1003);
            (exp_87 = come_decrement_ref_count(exp_87, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1049, 1004));
            come_call_finalizer(sClass_finalize, Value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1049, 1005);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1049, 1006));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1049, 1007));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1052, 1008);
            (exp_87 = come_decrement_ref_count(exp_87, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1052, 1009));
            come_call_finalizer(sClass_finalize, Value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1052, 1010);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1052, 1011));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1052, 1012));
            return __result_obj__0;
        }
        (exp_87 = come_decrement_ref_count(exp_87, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 1013));
        come_call_finalizer(sClass_finalize, Value_89, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 1014);
    }
    else if(*info->p->p==34) {
        sline_real=info->sline_real;
        info->sline_real=info->sline;
        info->p->p++;
        sline=info->sline;
        __right_value0 = (void*)0;
        value_90=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "41module2.nc", 1093, 1015, "struct buffer* "), "41module2.nc", 1093, 1016)), "41module2.nc", 1093, 1017);
        while(1) {
            if(*info->p->p==34) {
                info->p->p++;
                p=info->p->p;
                sline_91=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(*info->p->p==34) {
                    info->p->p++;
                }
                else {
                    info->p->p=p;
                    info->sline=sline_91;
                    break;
                }
            }
            else if(*info->p->p==92) {
                info->p->p++;
                if(*info->p->p==123) {
                    info->p->p++;
                    __right_value0 = (void*)0;
                    exp_92=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1121, 1018);
                    expected_next_character(125,info);
                    buffer_append_str(value_90,exp_92);
                    (exp_92 = come_decrement_ref_count(exp_92, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1137, 1019));
                }
                else if(*info->p->p==34) {
                    buffer_append_char(value_90,92);
                    buffer_append_char(value_90,34);
                    info->p->p++;
                }
                else {
                    buffer_append_char(value_90,92);
                    buffer_append_char(value_90,*info->p->p);
                    info->p->p++;
                }
            }
            else if(*info->p->p==0) {
                sline2=info->sline;
                info->sline=sline;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2;
                exit(2);
            }
            else {
                if(*info->p->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_90,*info->p->p);
                info->p->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real;
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(value_90))), "41module2.nc", 1156, 1020);
        come_call_finalizer(buffer_finalize, value_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1156, 1021);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1156, 1022));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1156, 1023));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, value_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 1024);
    }
    else if(*info->p->p==36) {
        info->p->p++;
        __right_value0 = (void*)0;
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "41module2.nc", 1160, 1025);
        __right_value0 = (void*)0;
        value_93=(char* )come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->reflection_vars,var_name), "41module2.nc", 1162, 1056);
        if(value_93==((void*)0)) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "41module2.nc", 1166, 1057);
            (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1166, 1058));
            (value_93 = come_decrement_ref_count(value_93, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1166, 1059));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1166, 1060));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1166, 1061));
            return __result_obj__0;
        }
                __result_obj__0 = (char* )come_increment_ref_count(value_93, "41module2.nc", 1169, 1062);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1169, 1063));
        (value_93 = come_decrement_ref_count(value_93, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1169, 1064));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1169, 1065));
        return __result_obj__0;
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 1066));
        (value_93 = come_decrement_ref_count(value_93, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 1067));
    }
    else if(xisalpha(*info->p->p)||*info->p->p==95) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "41module2.nc", 1172, 1068, "struct buffer* "), "41module2.nc", 1172, 1069)), "41module2.nc", 1172, 1070);
        while(xisalnum(*info->p->p)||*info->p->p==95||*info->p->p==42||*info->p->p==37||*info->p->p==60||*info->p->p==62) {
            buffer_append_char(buf,*info->p->p);
            info->p->p++;
        }
        skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "41module2.nc", 1179, 1071);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1179, 1072);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1179, 1073));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1179, 1074));
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1216, 1075);
    }
    else if(*info->p->p==45&&xisdigit(*(info->p->p+1))) {
        n_94=0;
        while(xisdigit(*info->p->p)) {
            n_94=n_94*10+(*info->p->p-48);
            info->p->p++;
        }
        skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("-%d",n_94))), "41module2.nc", 1188, 1076);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1188, 1077));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1188, 1078));
        return __result_obj__0;
    }
    else if(xisdigit(*info->p->p)) {
        n_95=0;
        while(xisdigit(*info->p->p)) {
            n_95=n_95*10+(*info->p->p-48);
            info->p->p++;
        }
        skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",n_95))), "41module2.nc", 1197, 1079);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1197, 1080));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1197, 1081));
        return __result_obj__0;
    }
    else if(*info->p->p==33) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        exp_96=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1203, 1082);
        if(string_operator_equals(exp_96,"true")) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1206, 1083);
            (exp_96 = come_decrement_ref_count(exp_96, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1206, 1084));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1206, 1085));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1206, 1086));
            return __result_obj__0;
        }
        else {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1209, 1087);
            (exp_96 = come_decrement_ref_count(exp_96, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1209, 1088));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1209, 1089));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1209, 1090));
            return __result_obj__0;
        }
        (exp_96 = come_decrement_ref_count(exp_96, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1216, 1091));
    }
    else {
        err_msg(info,"invalid character(%c)",*info->p->p);
    }
    err_msg(info,"invalid character(%c)",*info->p->p);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf(""))), "41module2.nc", 1218, 1092);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1218, 1093));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1218, 1094));
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
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 422);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 423);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 424);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 425);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 426);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 427);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 428);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 429);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 430);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 431);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 432);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 433);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 434);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 435);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 436);
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
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 437);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 438);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 439);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 440);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 441);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 442);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 443);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 444);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 445);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 446);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 447);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 448);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 449);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 450);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 451);
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
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 490);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 491);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 492);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 493);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 494);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 495);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 496);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 497);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 498);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 499);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 500);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 501);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 502);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 503);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 504);
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
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 505);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 506);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 507);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 508);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 509);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 510);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 511);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 512);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 513);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 514);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 515);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 516);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 517);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 518);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 519);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 522);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 523);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 524);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 525);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 526);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 527);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 528);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 529);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 530);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 531);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 532);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 533);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 534);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 535);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 536);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 537);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 538);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 539);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 540);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 541);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 542);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 543);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 544);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 545);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 546);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 547);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 548);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 549);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 550);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 551);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 554);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 555);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 556);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 557);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 558);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 559);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 560);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 561);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 562);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 563);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 564);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 565);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 566);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 567);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 568);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 569);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 570);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 571);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 572);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 573);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 574);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 575);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 576);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 577);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 578);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 579);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 580);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 581);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 582);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 583);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_53  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 745);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 746);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 747);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 748);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 749);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 750);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_53,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_53, "/usr/local/include/neo-c.h", 2169, 751);
    come_call_finalizer(sType_finalize, default_value_53, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 752);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 753);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_54  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 754);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 755);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2150, 756);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2153, 757);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 758);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2161, 759);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_54,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_54, "/usr/local/include/neo-c.h", 2169, 760);
    come_call_finalizer(sType_finalize, default_value_54, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 761);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2169, 762);
    return __result_obj__0;
}

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_59  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 786);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 787));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 788));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2153, 789));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 790);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2161, 791));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_59,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_59, "/usr/local/include/neo-c.h", 2169, 792);
    (default_value_59 = come_decrement_ref_count(default_value_59, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 793));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 794));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_60  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 795);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 796));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 797));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2153, 798));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 799);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2161, 800));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_60,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_60, "/usr/local/include/neo-c.h", 2169, 801);
    (default_value_60 = come_decrement_ref_count(default_value_60, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 802));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 803));
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

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 844);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 851);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 852);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 853);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 854);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 855);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 856);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 857);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 858);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 859);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 860);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 861);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 862);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 863);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 864);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 845));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 848);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 849));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 850));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 847);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 846);
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
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 865);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 866);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 867);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 868);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 869);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 870);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 871);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 872);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 873);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 874);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 875);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 876);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 877);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 878);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 879);
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
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 1026);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3515, 1027));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3515, 1028));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 1029);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3526, 1030));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3526, 1031));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 1032);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3535, 1033));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3535, 1034));
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 1035);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3539, 1036));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3539, 1037));
            return __result_obj__0;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 1038);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3543, 1039));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3543, 1040));
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
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 1041);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3515, 1042));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3515, 1043));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 1044);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3526, 1045));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3526, 1046));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 1047);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3535, 1048));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3535, 1049));
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 1050);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3539, 1051));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3539, 1052));
            return __result_obj__0;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 1053);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3543, 1054));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3543, 1055));
    return __result_obj__0;
}

char*  reflection_expression_mult(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    char*  right_97  ;
    char*  right_98  ;
    node=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1223, 1095);
    skip_spaces_and_lf(info);
    while(*info->p->p) {
        if(*info->p->p==42) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1232, 1096);
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)*atoi(right))))), "41module2.nc", 1234, 1097);
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1234, 1098));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1234, 1099));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1234, 1100));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1234, 1101));
            return __result_obj__0;
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1255, 1102));
        }
        else if(*info->p->p==47) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_97=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1240, 1103);
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)/atoi(right_97))))), "41module2.nc", 1242, 1104);
            (right_97 = come_decrement_ref_count(right_97, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1242, 1105));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1242, 1106));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1242, 1107));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1242, 1108));
            return __result_obj__0;
            (right_97 = come_decrement_ref_count(right_97, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1255, 1109));
        }
        else if(*info->p->p==37) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_98=(char* )come_increment_ref_count(reflection_node(info), "41module2.nc", 1248, 1110);
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)%atoi(right_98))))), "41module2.nc", 1250, 1111);
            (right_98 = come_decrement_ref_count(right_98, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1250, 1112));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1250, 1113));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1250, 1114));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1250, 1115));
            return __result_obj__0;
            (right_98 = come_decrement_ref_count(right_98, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1255, 1116));
        }
        else {
            break;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1257, 1117);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1257, 1118));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1257, 1119));
    return __result_obj__0;
}

char*  reflection_expression_add(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    char*  right_99  ;
    char*  right_100  ;
    node=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1262, 1120);
    skip_spaces_and_lf(info);
    while(*info->p->p) {
        if(*info->p->p==46) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1271, 1121);
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=string_operator_add(node,right))), "41module2.nc", 1273, 1122);
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1273, 1123));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1273, 1124));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1273, 1125));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1273, 1126));
            return __result_obj__0;
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1294, 1127));
        }
        else if(*info->p->p==43) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_99=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1279, 1128);
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)+atoi(right_99))))), "41module2.nc", 1281, 1129);
            (right_99 = come_decrement_ref_count(right_99, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1281, 1130));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1281, 1131));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1281, 1132));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1281, 1133));
            return __result_obj__0;
            (right_99 = come_decrement_ref_count(right_99, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1294, 1134));
        }
        else if(*info->p->p==45) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_100=(char* )come_increment_ref_count(reflection_expression_mult(info), "41module2.nc", 1287, 1135);
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string((atoi(node)-atoi(right_100))))), "41module2.nc", 1289, 1136);
            (right_100 = come_decrement_ref_count(right_100, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1289, 1137));
            (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1289, 1138));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1289, 1139));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1289, 1140));
            return __result_obj__0;
            (right_100 = come_decrement_ref_count(right_100, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1294, 1141));
        }
        else {
            break;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1296, 1142);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1296, 1143));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1296, 1144));
    return __result_obj__0;
}

char*  reflection_expression_comp(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_comp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    char*  right_101  ;
    char*  right_102  ;
    char*  right_103  ;
    node=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1301, 1145);
    skip_spaces_and_lf(info);
    while(*info->p->p) {
        if(*info->p->p==62&&*(info->p->p+1)==61) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1310, 1146);
            if(atoi(node)>=atoi(right)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1313, 1147);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1313, 1148));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1313, 1149));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1313, 1150));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1313, 1151));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1316, 1152);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1316, 1153));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1316, 1154));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1316, 1155));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1316, 1156));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1361, 1157));
        }
        else if(*info->p->p==60&&*(info->p->p+1)==61) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_101=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1323, 1158);
            if(atoi(node)<=atoi(right_101)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1326, 1159);
                (right_101 = come_decrement_ref_count(right_101, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1326, 1160));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1326, 1161));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1326, 1162));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1326, 1163));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1329, 1164);
                (right_101 = come_decrement_ref_count(right_101, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1329, 1165));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1329, 1166));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1329, 1167));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1329, 1168));
                return __result_obj__0;
            }
            (right_101 = come_decrement_ref_count(right_101, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1361, 1169));
        }
        else if(*info->p->p==62) {
            info->p->p+=1;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_102=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1336, 1170);
            if(atoi(node)>atoi(right_102)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1339, 1171);
                (right_102 = come_decrement_ref_count(right_102, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1339, 1172));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1339, 1173));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1339, 1174));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1339, 1175));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1342, 1176);
                (right_102 = come_decrement_ref_count(right_102, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1342, 1177));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1342, 1178));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1342, 1179));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1342, 1180));
                return __result_obj__0;
            }
            (right_102 = come_decrement_ref_count(right_102, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1361, 1181));
        }
        else if(*info->p->p==60) {
            info->p->p+=1;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_103=(char* )come_increment_ref_count(reflection_expression_add(info), "41module2.nc", 1349, 1182);
            if(atoi(node)<atoi(right_103)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1352, 1183);
                (right_103 = come_decrement_ref_count(right_103, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1352, 1184));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1352, 1185));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1352, 1186));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1352, 1187));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1355, 1188);
                (right_103 = come_decrement_ref_count(right_103, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1355, 1189));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1355, 1190));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1355, 1191));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1355, 1192));
                return __result_obj__0;
            }
            (right_103 = come_decrement_ref_count(right_103, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1361, 1193));
        }
        else {
            break;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1363, 1194);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1363, 1195));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1363, 1196));
    return __result_obj__0;
}

char*  reflection_expression_eq(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_eq"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    char*  right_104  ;
    node=(char* )come_increment_ref_count(reflection_expression_comp(info), "41module2.nc", 1368, 1197);
    skip_spaces_and_lf(info);
    while(*info->p->p) {
        if(*info->p->p==61&&*(info->p->p+1)==61&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_comp(info), "41module2.nc", 1377, 1198);
            if(string_operator_equals(node,right)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1380, 1199);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1380, 1200));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1380, 1201));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1380, 1202));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1380, 1203));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1383, 1204);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1383, 1205));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1383, 1206));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1383, 1207));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1383, 1208));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1402, 1209));
        }
        else if(*info->p->p==33&&*(info->p->p+1)==61&&*(info->p->p+2)!=61) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right_104=(char* )come_increment_ref_count(reflection_expression_comp(info), "41module2.nc", 1390, 1210);
            if(string_operator_equals(node,right_104)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1393, 1211);
                (right_104 = come_decrement_ref_count(right_104, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1393, 1212));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1393, 1213));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1393, 1214));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1393, 1215));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1396, 1216);
                (right_104 = come_decrement_ref_count(right_104, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1396, 1217));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1396, 1218));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1396, 1219));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1396, 1220));
                return __result_obj__0;
            }
            (right_104 = come_decrement_ref_count(right_104, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1402, 1221));
        }
        else {
            break;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1404, 1222);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1404, 1223));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1404, 1224));
    return __result_obj__0;
}

char*  reflection_expression_oror(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_oror"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    node=(char* )come_increment_ref_count(reflection_expression_eq(info), "41module2.nc", 1409, 1225);
    skip_spaces_and_lf(info);
    while(*info->p->p) {
        if(*info->p->p==124&&*(info->p->p+1)==124) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_eq(info), "41module2.nc", 1418, 1226);
            if(string_operator_equals(node,"true")||string_operator_equals(right,"true")) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1421, 1227);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1421, 1228));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1421, 1229));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1421, 1230));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1421, 1231));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1424, 1232);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1424, 1233));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1424, 1234));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1424, 1235));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1424, 1236));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1430, 1237));
        }
        else {
            break;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1432, 1238);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1432, 1239));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1432, 1240));
    return __result_obj__0;
}

char*  reflection_expression_andand(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression_andand"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  node  ;
    char*  right  ;
    char*  __result_obj__0  ;
    node=(char* )come_increment_ref_count(reflection_expression_oror(info), "41module2.nc", 1437, 1241);
    skip_spaces_and_lf(info);
    while(*info->p->p) {
        if(*info->p->p==38&&*(info->p->p+1)==38) {
            info->p->p+=2;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            right=(char* )come_increment_ref_count(reflection_expression_oror(info), "41module2.nc", 1446, 1242);
            if(string_operator_equals(node,"true")&&string_operator_equals(right,"true")) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("true"))), "41module2.nc", 1449, 1243);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1449, 1244));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1449, 1245));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1449, 1246));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1449, 1247));
                return __result_obj__0;
            }
            else {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char*)(__right_value0=xsprintf("false"))), "41module2.nc", 1452, 1248);
                (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1452, 1249));
                (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1452, 1250));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1452, 1251));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1452, 1252));
                return __result_obj__0;
            }
            (right = come_decrement_ref_count(right, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1458, 1253));
        }
        else {
            break;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(node, "41module2.nc", 1460, 1254);
    (node = come_decrement_ref_count(node, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1460, 1255));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1460, 1256));
    return __result_obj__0;
}

char*  reflection_expression(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reflection_expression"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=reflection_expression_andand(info))), "41module2.nc", 1465, 1257);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1465, 1258));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "41module2.nc", 1465, 1259));
    return __result_obj__0;
}

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v91"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  block_text  ;
    char* p;
    char*  contents  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sNothingNode* _inf_obj_value2;
    struct sNode* __result_obj__0;
    char*  block_text_112  ;
    char* p_113;
    char*  contents_114  ;
    struct sNode* _inf_value3;
    struct sNothingNode* _inf_obj_value3;
    _Bool no_comma;
    struct sNode* exp;
    struct sNode* exp2;
    struct sNode* _inf_value4;
    struct sStaticAssert* _inf_obj_value4;
    char*  word  ;
    struct sNode* _inf_value5;
    struct sUndefNode* _inf_obj_value5;
    int quoted;
    struct buffer*  buf_116  ;
    char*  path  ;
    struct MacroSnapshot*  snap  ;
    struct _IO_FILE*  out  ;
    char* macro_defines;
    struct buffer*  source  ;
    char* p_117;
    char* head_118;
    char* end;
    char*  sname  ;
    int sline;
    struct buffer*  __dec_obj62  ;
    struct span$1char$p* __dec_obj63;
    char*  __dec_obj64  ;
    struct buffer*  __dec_obj65  ;
    struct span$1char$p* __dec_obj66;
    char*  __dec_obj67  ;
    struct sNode* _inf_value6;
    struct sNothingNode* _inf_obj_value6;
    char*  reflection_condtional  ;
    _Bool match_;
    char*  reflection_condtional_119  ;
    struct sNode* _inf_value7;
    struct sNothingNode* _inf_obj_value7;
    char*  value  ;
    struct buffer*  source2  ;
    char* p_120;
    struct buffer*  source_121  ;
    char* head_122;
    char* end_123;
    char*  sname_124  ;
    int sline_125;
    struct buffer*  __dec_obj68  ;
    struct span$1char$p* __dec_obj69;
    char*  __dec_obj70  ;
    struct buffer*  __dec_obj71  ;
    struct span$1char$p* __dec_obj72;
    char*  __dec_obj73  ;
    struct sNode* _inf_value8;
    struct sNothingNode* _inf_obj_value8;
    char*  var_name  ;
    char*  value_126  ;
    struct sNode* _inf_value9;
    struct sNothingNode* _inf_obj_value9;
    char*  exp_130  ;
    struct sNode* _inf_value10;
    struct sNothingNode* _inf_obj_value10;
    char*  exp_131  ;
    char*  exp2_132  ;
    char*  __dec_obj74  ;
    char*  def  ;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char*  __dec_obj75  ;
    struct sNode* _inf_value11;
    struct sNothingNode* _inf_obj_value11;
    char*  exp_133  ;
    struct sNode* _inf_value12;
    struct sNothingNode* _inf_obj_value12;
    if(charp_operator_equals(buf,"__c__")&&*info->p->p==123) {
        block_text=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "41module2.nc", 1471, 1260);
        p=block_text+strlen(block_text);
        while(*p&&p>=block_text&&*p!=125) {
            p--;
        }
        p--;
        __right_value0 = (void*)0;
        contents=(char* )come_increment_ref_count(charp_substring(block_text,1,p-(block_text+strlen(block_text))-1), "41module2.nc", 1480, 1261);
        static int n=0;
        n++;
        __right_value0 = (void*)0;
        map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(xsprintf("__c__\%s",((char* )(__right_value0=int_to_string(n)))), "41module2.nc", 1485, 1316),(struct buffer* )come_increment_ref_count(charp_to_buffer(contents), "41module2.nc", 1485, 1317),(_Bool)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1485, 1318));
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1487, 1321, "struct sNode");
        _inf_obj_value2=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1487, 1319, "struct sNothingNode* "), "41module2.nc", 1487, 1320),info))), "41module2.nc", 1487, 1322);
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sNothingNode_finalize;
        _inf_value2->clone=(void*)sNothingNode_clone;
        _inf_value2->compile=(void*)sNothingNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sNothingNode_terminated;
        _inf_value2->kind=(void*)sNothingNode_kind;
        _inf_value2->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "41module2.nc", 1487, 1330);
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1487, 1331));
        (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1487, 1332));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1487, 1333);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1487, 1334):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1487, 1335):(void*)0);
        return __result_obj__0;
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1336));
        (contents = come_decrement_ref_count(contents, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1337));
    }
    else if(charp_operator_equals(buf,"c_include")&&*info->p->p==123) {
        __right_value0 = (void*)0;
        block_text_112=(char* )come_increment_ref_count(skip_block(info,(_Bool)0), "41module2.nc", 1490, 1338);
        p_113=block_text_112+strlen(block_text_112);
        while(*p_113&&p_113>=block_text_112&&*p_113!=125) {
            p_113--;
        }
        p_113--;
        __right_value0 = (void*)0;
        contents_114=(char* )come_increment_ref_count(charp_substring(block_text_112,1,p_113-(block_text_112+strlen(block_text_112))-1), "41module2.nc", 1499, 1339);
        static int n_115=0;
        n_115++;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        map$2char$phbuffer$ph_insert(info->c_include_definition,(char*)come_increment_ref_count(xsprintf("c_include\%s",((char* )(__right_value0=int_to_string(n_115)))), "41module2.nc", 1504, 1340),(struct buffer* )come_increment_ref_count(charp_to_buffer(contents_114), "41module2.nc", 1504, 1341),(_Bool)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1504, 1342));
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1506, 1345, "struct sNode");
        _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1506, 1343, "struct sNothingNode* "), "41module2.nc", 1506, 1344),info))), "41module2.nc", 1506, 1346);
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sNothingNode_finalize;
        _inf_value3->clone=(void*)sNothingNode_clone;
        _inf_value3->compile=(void*)sNothingNode_compile;
        _inf_value3->sline=(void*)sNodeBase_sline;
        _inf_value3->sline_real=(void*)sNodeBase_sline_real;
        _inf_value3->sname=(void*)sNodeBase_sname;
        _inf_value3->terminated=(void*)sNothingNode_terminated;
        _inf_value3->kind=(void*)sNothingNode_kind;
        _inf_value3->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "41module2.nc", 1506, 1347);
        (block_text_112 = come_decrement_ref_count(block_text_112, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1506, 1348));
        (contents_114 = come_decrement_ref_count(contents_114, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1506, 1349));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1506, 1350);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1506, 1351):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1506, 1352):(void*)0);
        return __result_obj__0;
        (block_text_112 = come_decrement_ref_count(block_text_112, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1353));
        (contents_114 = come_decrement_ref_count(contents_114, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1354));
    }
    else if(charp_operator_equals(buf,"_Static_assert")||charp_operator_equals(buf,"static_assert")||charp_operator_equals(buf,"__STATIC_ASSERT")) {
        expected_next_character(40,info);
        no_comma=info->no_comma;
        info->no_comma=(_Bool)1;
        __right_value0 = (void*)0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "41module2.nc", 1513, 1355);
        info->no_comma=no_comma;
        expected_next_character(44,info);
        __right_value0 = (void*)0;
        exp2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "41module2.nc", 1518, 1356);
        expected_next_character(41,info);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1522, 1361, "struct sNode");
        _inf_obj_value4=(struct sStaticAssert*)come_increment_ref_count(((struct sStaticAssert*)(__right_value1=sStaticAssert_initialize((struct sStaticAssert* )come_increment_ref_count((struct sStaticAssert *)come_calloc(1, sizeof(struct sStaticAssert )*(1), "41module2.nc", 1522, 1357, "struct sStaticAssert* "), "41module2.nc", 1522, 1358),(struct sNode*)come_increment_ref_count(exp, "41module2.nc", 1522, 1359),(struct sNode*)come_increment_ref_count(exp2, "41module2.nc", 1522, 1360),info))), "41module2.nc", 1522, 1362);
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sStaticAssert_finalize;
        _inf_value4->clone=(void*)sStaticAssert_clone;
        _inf_value4->compile=(void*)sStaticAssert_compile;
        _inf_value4->sline=(void*)sNodeBase_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sNodeBase_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sStaticAssert_kind;
        _inf_value4->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "41module2.nc", 1522, 1363);
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1522, 1364):(void*)0);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1522, 1365):(void*)0);
        come_call_finalizer(sStaticAssert_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1522, 1366);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1522, 1367):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1522, 1368):(void*)0);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1819, 1369):(void*)0);
        ((exp2) ? exp2 = come_decrement_ref_count(exp2, ((struct sNode*)exp2)->finalize, ((struct sNode*)exp2)->_protocol_obj, 0, 0,(void*)0, "41module2.nc", 1819, 1370):(void*)0);
    }
    else if(charp_operator_equals(buf,"undef")) {
        __right_value0 = (void*)0;
        word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "41module2.nc", 1525, 1371);
        if(*info->p->p==59) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1532, 1375, "struct sNode");
        _inf_obj_value5=(struct sUndefNode*)come_increment_ref_count(((struct sUndefNode*)(__right_value1=sUndefNode_initialize((struct sUndefNode* )come_increment_ref_count((struct sUndefNode *)come_calloc(1, sizeof(struct sUndefNode )*(1), "41module2.nc", 1532, 1372, "struct sUndefNode* "), "41module2.nc", 1532, 1373),(char* )come_increment_ref_count(word, "41module2.nc", 1532, 1374),info))), "41module2.nc", 1532, 1376);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sUndefNode_finalize;
        _inf_value5->clone=(void*)sUndefNode_clone;
        _inf_value5->compile=(void*)sUndefNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sUndefNode_kind;
        _inf_value5->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "41module2.nc", 1532, 1386);
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1532, 1387));
        come_call_finalizer(sUndefNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1532, 1388);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1532, 1389):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1532, 1390):(void*)0);
        return __result_obj__0;
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1391));
    }
    else if(charp_operator_equals(buf,"macro_include")) {
        quoted=0;
        if(*info->p->p==34) {
            quoted=1;
            info->p->p++;
        }
        else if(*info->p->p==60) {
            info->p->p++;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        buf_116=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "41module2.nc", 1544, 1392, "struct buffer* "), "41module2.nc", 1544, 1393)), "41module2.nc", 1544, 1394);
        while(*info->p->p) {
            if(*info->p->p==92) {
                info->p->p++;
                buffer_append_char(buf_116,*info->p->p);
                info->p->p++;
            }
            else if(*info->p->p==34) {
                info->p->p++;
                break;
            }
            else if(*info->p->p==62) {
                info->p->p++;
                break;
            }
            else {
                buffer_append_char(buf_116,*info->p->p);
                info->p->p++;
            }
        }
        __right_value0 = (void*)0;
        path=(char* )come_increment_ref_count(buffer_to_string(buf_116), "41module2.nc", 1565, 1395);
        static int macro_include_id=0;
        snap=macro_snapshot_create();
        out=fopen("__ccpp_tmp","w");
        incldue_file_neo_c(path,quoted,out);
        fclose(out);
        macro_defines=macro_snapshot_diff_defines(snap);
        macro_snapshot_free(snap);
        if(macro_defines&&*macro_defines) {
            macro_include_id++;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(xsprintf("__macro_include__\%s",((char* )(__right_value0=int_to_string(macro_include_id)))), "41module2.nc", 1579, 1396),(struct buffer* )come_increment_ref_count(charp_to_buffer(macro_defines), "41module2.nc", 1579, 1397),(_Bool)0);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1579, 1398));
        }
        if(macro_defines) {
            free(macro_defines);
        }
        source=(struct buffer* )come_increment_ref_count(info->source, "41module2.nc", 1585, 1399);
        p_117=info->p->p;
        head_118=info->head;
        end=info->end;
        sname=(char* )come_increment_ref_count(info->sname, "41module2.nc", 1589, 1400);
        sline=info->sline;
        __right_value0 = (void*)0;
        __dec_obj62=info->source,
        info->source=(struct buffer* )come_increment_ref_count(charp_read("__ccpp_tmp"), "41module2.nc", 1592, 1402);
        come_call_finalizer(buffer_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1592, 1401);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj63=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "41module2.nc", 1594, 1403, "struct span$1buffer$p*"), "41module2.nc", 1594, 1407),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "41module2.nc", 1594, 1409);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1594, 1408);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->head=info->source->buf;
        info->end=info->source->buf+info->source->len;
        __right_value0 = (void*)0;
        __dec_obj64=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string(path,"41module2.nc",1601), "41module2.nc", 1601, 1411);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1601, 1410);
        info->sline=1;
        transpile_toplevel((_Bool)0,info);
        __dec_obj65=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source, "41module2.nc", 1606, 1413);
        come_call_finalizer(buffer_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1606, 1412);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj66=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "41module2.nc", 1608, 1414, "struct span$1buffer$p*"), "41module2.nc", 1608, 1415),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "41module2.nc", 1608, 1417);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1608, 1416);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->p->p=p_117;
        info->head=head_118;
        info->end=end;
        __dec_obj67=info->sname,
        info->sname=(char* )come_increment_ref_count(sname, "41module2.nc", 1616, 1419);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1616, 1418);
        info->sline=sline;
        remove("__ccpp_tmp");
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1621, 1422, "struct sNode");
        _inf_obj_value6=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1621, 1420, "struct sNothingNode* "), "41module2.nc", 1621, 1421),info))), "41module2.nc", 1621, 1423);
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNothingNode_finalize;
        _inf_value6->clone=(void*)sNothingNode_clone;
        _inf_value6->compile=(void*)sNothingNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNothingNode_terminated;
        _inf_value6->kind=(void*)sNothingNode_kind;
        _inf_value6->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "41module2.nc", 1621, 1424);
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1621, 1425);
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1621, 1426));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1621, 1427);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1621, 1428));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1621, 1429);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1621, 1430):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1621, 1431):(void*)0);
        return __result_obj__0;
        come_call_finalizer(buffer_finalize, buf_116, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1819, 1432);
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1433));
        come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1819, 1434);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1435));
    }
    else if(charp_operator_equals(buf,"if")) {
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        reflection_condtional=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1628, 1436);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        match_=(_Bool)0;
        if(string_operator_not_equals(reflection_condtional,"false")) {
            expected_next_character(123,info);
            transpile_toplevel((_Bool)1,info);
            match_=(_Bool)1;
        }
        else {
            __right_value0 = (void*)0;
            ((char* )(__right_value0=skip_block(info,(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1641, 1437));
        }
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        while(1) {
            if(parsecmp("elif",info)) {
                __right_value0 = (void*)0;
                (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1649, 1438));
                if(*info->p->p==40) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                __right_value0 = (void*)0;
                reflection_condtional_119=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1656, 1439);
                if(*info->p->p==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                if(!match_&&string_operator_not_equals(reflection_condtional_119,"false")) {
                    expected_next_character(123,info);
                    transpile_toplevel((_Bool)1,info);
                    match_=(_Bool)1;
                }
                else {
                    __right_value0 = (void*)0;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1669, 1440));
                    parse_sharp_v5(info);
                }
                (reflection_condtional_119 = come_decrement_ref_count(reflection_condtional_119, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1676, 1441));
            }
            else {
                break;
            }
        }
        if(parsecmp("else",info)) {
            __right_value0 = (void*)0;
            (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1679, 1442));
            if(!match_) {
                expected_next_character(123,info);
                transpile_toplevel((_Bool)1,info);
            }
            else {
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1686, 1443));
                parse_sharp_v5(info);
            }
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1691, 1446, "struct sNode");
        _inf_obj_value7=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1691, 1444, "struct sNothingNode* "), "41module2.nc", 1691, 1445),info))), "41module2.nc", 1691, 1447);
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sNothingNode_finalize;
        _inf_value7->clone=(void*)sNothingNode_clone;
        _inf_value7->compile=(void*)sNothingNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNothingNode_terminated;
        _inf_value7->kind=(void*)sNothingNode_kind;
        _inf_value7->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value7)), "41module2.nc", 1691, 1448);
        (reflection_condtional = come_decrement_ref_count(reflection_condtional, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1691, 1449));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1691, 1450);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1691, 1451):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1691, 1452):(void*)0);
        return __result_obj__0;
        (reflection_condtional = come_decrement_ref_count(reflection_condtional, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1453));
    }
    else if(charp_operator_equals(buf,"eval")) {
        __right_value0 = (void*)0;
        value=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1694, 1454);
        __right_value0 = (void*)0;
        source2=(struct buffer* )come_increment_ref_count(charp_to_buffer(value), "41module2.nc", 1696, 1455);
        p_120=info->p->p;
        source_121=(struct buffer* )come_increment_ref_count(info->source, "41module2.nc", 1699, 1456);
        head_122=info->head;
        end_123=info->end;
        sname_124=(char* )come_increment_ref_count(info->sname, "41module2.nc", 1702, 1457);
        sline_125=info->sline;
        __dec_obj68=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source2, "41module2.nc", 1705, 1459);
        come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1705, 1458);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj69=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "41module2.nc", 1707, 1460, "struct span$1buffer$p*"), "41module2.nc", 1707, 1461),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "41module2.nc", 1707, 1463);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1707, 1462);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->head=source2->buf;
        info->end=source2->buf+source2->len;
        __right_value0 = (void*)0;
        __dec_obj70=info->sname,
        info->sname=(char* )come_increment_ref_count(__builtin_string("eval","41module2.nc",1715), "41module2.nc", 1715, 1465);
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1715, 1464);
        info->sline=1;
        transpile_toplevel((_Bool)0,info);
        __dec_obj71=info->source,
        info->source=(struct buffer* )come_increment_ref_count(source_121, "41module2.nc", 1720, 1467);
        come_call_finalizer(buffer_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1720, 1466);
        if(info->p==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj72=info->p,
            info->p=(struct span$1buffer$p*)come_increment_ref_count(span$1buffer$p_initialize((struct span$1buffer$p*)come_increment_ref_count((struct span$1buffer$p*)come_calloc(1, sizeof(struct span$1buffer$p)*(1), "41module2.nc", 1722, 1468, "struct span$1buffer$p*"), "41module2.nc", 1722, 1469),info->source->buf,info->source->len+1,(_Bool)1,(_Bool)0,(_Bool)0,neo_current_frame->stacktop), "41module2.nc", 1722, 1471);
            come_call_finalizer(span$1char$p$p_finalize, __dec_obj72,(void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc", 1722, 1470);
        }
        info->p->memory=info->source->buf;
        info->p->len=info->source->len+2;
        info->p->p=info->source->buf;
        info->p->p=p_120;
        info->head=head_122;
        info->end=end_123;
        __dec_obj73=info->sname,
        info->sname=(char* )come_increment_ref_count(sname_124, "41module2.nc", 1731, 1473);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1731, 1472);
        info->sline=sline_125;
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1734, 1476, "struct sNode");
        _inf_obj_value8=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1734, 1474, "struct sNothingNode* "), "41module2.nc", 1734, 1475),info))), "41module2.nc", 1734, 1477);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sNothingNode_finalize;
        _inf_value8->clone=(void*)sNothingNode_clone;
        _inf_value8->compile=(void*)sNothingNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNothingNode_terminated;
        _inf_value8->kind=(void*)sNothingNode_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "41module2.nc", 1734, 1478);
        (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1734, 1479));
        come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1734, 1480);
        come_call_finalizer(buffer_finalize, source_121, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1734, 1481);
        (sname_124 = come_decrement_ref_count(sname_124, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1734, 1482));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1734, 1483);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1734, 1484):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1734, 1485):(void*)0);
        return __result_obj__0;
        (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1486));
        come_call_finalizer(buffer_finalize, source2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1819, 1487);
        come_call_finalizer(buffer_finalize, source_121, (void*)0, (void*)0, 0, 0, 0, (void*)0, "41module2.nc}", 1819, 1488);
        (sname_124 = come_decrement_ref_count(sname_124, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1489));
    }
    else if(charp_operator_equals(buf,"var")) {
        __right_value0 = (void*)0;
        var_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "41module2.nc", 1737, 1490);
        expected_next_character(61,info);
        __right_value0 = (void*)0;
        value_126=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1741, 1491);
        map$2char$phchar$ph_insert(info->reflection_vars,(char* )come_increment_ref_count(var_name, "41module2.nc", 1743, 1532),(char* )come_increment_ref_count(value_126, "41module2.nc", 1743, 1533),(_Bool)0);
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1745, 1536, "struct sNode");
        _inf_obj_value9=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1745, 1534, "struct sNothingNode* "), "41module2.nc", 1745, 1535),info))), "41module2.nc", 1745, 1537);
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sNothingNode_finalize;
        _inf_value9->clone=(void*)sNothingNode_clone;
        _inf_value9->compile=(void*)sNothingNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNothingNode_terminated;
        _inf_value9->kind=(void*)sNothingNode_kind;
        _inf_value9->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "41module2.nc", 1745, 1538);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1745, 1539));
        (value_126 = come_decrement_ref_count(value_126, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1745, 1540));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1745, 1541);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1745, 1542):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1745, 1543):(void*)0);
        return __result_obj__0;
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1544));
        (value_126 = come_decrement_ref_count(value_126, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1545));
    }
    else if(charp_operator_equals(buf,"puts")) {
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_130=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1753, 1546);
        puts(exp_130);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1762, 1549, "struct sNode");
        _inf_obj_value10=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1762, 1547, "struct sNothingNode* "), "41module2.nc", 1762, 1548),info))), "41module2.nc", 1762, 1550);
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sNothingNode_finalize;
        _inf_value10->clone=(void*)sNothingNode_clone;
        _inf_value10->compile=(void*)sNothingNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNothingNode_terminated;
        _inf_value10->kind=(void*)sNothingNode_kind;
        _inf_value10->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "41module2.nc", 1762, 1551);
        (exp_130 = come_decrement_ref_count(exp_130, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1762, 1552));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1762, 1553);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1762, 1554):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1762, 1555):(void*)0);
        return __result_obj__0;
        (exp_130 = come_decrement_ref_count(exp_130, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1556));
    }
    else if(charp_operator_equals(buf,"macro_define")) {
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_131=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1770, 1557);
        exp2_132=((void*)0);
        if(*info->p->p==44) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj74=exp2_132,
            exp2_132=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1776, 1559);
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1776, 1558);
        }
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        def=(char* )come_increment_ref_count(exp_131, "41module2.nc", 1786, 1560);
        if(exp2_132) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj75=def,
            def=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value5=string_operator_add(exp_131,((char*)(__right_value4=xsprintf(" ")))))),exp2_132), "41module2.nc", 1788, 1562);
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "41module2.nc", 1788, 1561);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1788, 1563));
            (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1788, 1564));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "41module2.nc", 1788, 1565));
        }
        if(def) {
            macro_define(def);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1795, 1568, "struct sNode");
        _inf_obj_value11=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1795, 1566, "struct sNothingNode* "), "41module2.nc", 1795, 1567),info))), "41module2.nc", 1795, 1569);
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sNothingNode_finalize;
        _inf_value11->clone=(void*)sNothingNode_clone;
        _inf_value11->compile=(void*)sNothingNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNothingNode_terminated;
        _inf_value11->kind=(void*)sNothingNode_kind;
        _inf_value11->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "41module2.nc", 1795, 1570);
        (exp_131 = come_decrement_ref_count(exp_131, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1795, 1571));
        (exp2_132 = come_decrement_ref_count(exp2_132, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1795, 1572));
        (def = come_decrement_ref_count(def, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1795, 1573));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1795, 1574);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1795, 1575):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1795, 1576):(void*)0);
        return __result_obj__0;
        (exp_131 = come_decrement_ref_count(exp_131, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1577));
        (exp2_132 = come_decrement_ref_count(exp2_132, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1578));
        (def = come_decrement_ref_count(def, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1579));
    }
    else if(charp_operator_equals(buf,"macro_undef")) {
        if(*info->p->p==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        exp_133=(char* )come_increment_ref_count(reflection_expression(info), "41module2.nc", 1803, 1580);
        if(*info->p->p==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        skip_spaces_and_lf(info);
        if(exp_133) {
            macro_undef(exp_133);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "41module2.nc", 1816, 1583, "struct sNode");
        _inf_obj_value12=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value1=sNothingNode_initialize((struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "41module2.nc", 1816, 1581, "struct sNothingNode* "), "41module2.nc", 1816, 1582),info))), "41module2.nc", 1816, 1584);
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sNothingNode_finalize;
        _inf_value12->clone=(void*)sNothingNode_clone;
        _inf_value12->compile=(void*)sNothingNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNothingNode_terminated;
        _inf_value12->kind=(void*)sNothingNode_kind;
        _inf_value12->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "41module2.nc", 1816, 1585);
        (exp_133 = come_decrement_ref_count(exp_133, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1816, 1586));
        come_call_finalizer(sNothingNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "41module2.nc}", 1816, 1587);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1816, 1588):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1816, 1589):(void*)0);
        return __result_obj__0;
        (exp_133 = come_decrement_ref_count(exp_133, (void*)0, (void*)0, 0, 0, (void*)0, "41module2.nc", 1819, 1590));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v1(buf,head,head_sline,info))), "41module2.nc", 1819, 1591);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "41module2.nc", 1819, 1592):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "41module2.nc", 1819, 1593):(void*)0);
    return __result_obj__0;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phbuffer$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3348, 1262));
        come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3348, 1263);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3364, 1293));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3365, 1294);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3372, 1295);
                    self->items[it]=(struct buffer* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3373, 1296);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3395, 1297);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct buffer* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3401, 1298);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3421, 1313));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3424, 1314));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3424, 1315);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct buffer**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct buffer*  default_value  ;
    struct buffer*  it2  ;
    unsigned int hash;
    int n;
    struct buffer*  default_value_107  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 1264, "char** "))), "/usr/local/include/neo-c.h", 3272, 1265);
    __right_value0 = (void*)0;
    items=(struct buffer** )come_increment_ref_count(((struct buffer** )(__right_value0=(struct buffer* *)come_calloc(1, sizeof(struct buffer* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 1266, "struct buffer** "))), "/usr/local/include/neo-c.h", 3273, 1267);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 1268, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 1269);
    len=0;
    for(it=map$2char$phbuffer$ph_begin(self)    ;!map$2char$phbuffer$ph_end(self);it=map$2char$phbuffer$ph_next(self)){
        memset(&default_value,0,sizeof(struct buffer* ));
        __right_value0 = (void*)0;
        it2=(struct buffer* )come_increment_ref_count(map$2char$phbuffer$ph_at(self,it,(struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 1285),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 1286);
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
                memset(&default_value_107,0,sizeof(struct buffer* ));
                __right_value0 = (void*)0;
                items[n]=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_at(self,it,(struct buffer* )come_increment_ref_count(default_value_107, "/usr/local/include/neo-c.h", 3304, 1287),(_Bool)0)));
                len++;
                come_call_finalizer(buffer_finalize, default_value_107, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 1288);
                break;
                come_call_finalizer(buffer_finalize, default_value_107, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3309, 1289);
            }
        }
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1290);
        come_call_finalizer(buffer_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1291);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 1292));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_105  ;
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
    memset(&result_105,0,sizeof(char* ));
        __result_obj__0 = result_105;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_106  ;
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
    memset(&result_106,0,sizeof(char* ));
        __result_obj__0 = result_106;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct buffer*  map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_at"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 1270);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1271);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1272);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 1273);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1274);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1275);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 1276);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1277);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1278);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 1279);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1280);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1281);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 1282);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1283);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1284);
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_108  ;
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
    memset(&result_108,0,sizeof(char* ));
        __result_obj__0 = result_108;
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
    char*  result_109  ;
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
    memset(&result_109,0,sizeof(char* ));
        __result_obj__0 = result_109;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj56  ;
    struct list_item$1char$ph* litem_110;
    char*  __dec_obj57  ;
    struct list_item$1char$ph* litem_111;
    char*  __dec_obj58  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 1299));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1300, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 1301);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj56=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1303);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1302);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_110=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1304, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 1305);
        litem_110->prev=self->head;
        litem_110->next=((void*)0);
        __dec_obj57=litem_110->item,
        litem_110->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1307);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1306);
        self->tail=litem_110;
        self->head->next=litem_110;
    }
    else {
        __right_value0 = (void*)0;
        litem_111=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1308, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 1309);
        litem_111->prev=self->tail;
        litem_111->next=((void*)0);
        __dec_obj58=litem_111->item,
        litem_111->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1311);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1310);
        self->tail->next=litem_111;
        self->tail=litem_111;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 1312));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNothingNode_finalize(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNothingNode_finalize", 2, 1323));
    }
            neo_current_frame = fr.prev;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNothingNode_clone"; neo_current_frame = &fr;
    struct sNothingNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNothingNode*  result  ;
    char*  __dec_obj59  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sNothingNode* )come_increment_ref_count((struct sNothingNode *)come_calloc(1, sizeof(struct sNothingNode )*(1), "sNothingNode_clone", 5, 1324, "struct sNothingNode* "), "sNothingNode_clone", 5, 1325);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj59=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNothingNode_clone", 7, 1326, "char* "), "sNothingNode_clone", 7, 1328);
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "sNothingNode_clone", 7, 1327);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
        __result_obj__0 = result;
    come_call_finalizer(sNothingNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNothingNode_clone}", 9, 1329);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sUndefNode* sUndefNode_clone(struct sUndefNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sUndefNode_clone"; neo_current_frame = &fr;
    struct sUndefNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sUndefNode*  result  ;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sUndefNode* )come_increment_ref_count((struct sUndefNode *)come_calloc(1, sizeof(struct sUndefNode )*(1), "sUndefNode_clone", 5, 1377, "struct sUndefNode* "), "sUndefNode_clone", 5, 1378);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj60=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sUndefNode_clone", 7, 1379, "char* "), "sUndefNode_clone", 7, 1381);
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "sUndefNode_clone", 7, 1380);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj61=result->str,
        result->str=(char* )come_increment_ref_count((char* )come_memdup(self->str, "sUndefNode_clone", 9, 1382, "char* "), "sUndefNode_clone", 9, 1384);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "sUndefNode_clone", 9, 1383);
    }
        __result_obj__0 = result;
    come_call_finalizer(sUndefNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sUndefNode_clone}", 10, 1385);
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
        __result_obj__0 = (struct span$1buffer$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1026, 1404);
    come_call_finalizer(span$1buffer$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1026, 1405);
    neo_current_frame = fr.prev;
    come_call_finalizer(span$1buffer$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1026, 1406);
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

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char*  key  , char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phchar$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3348, 1492));
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3348, 1493));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3364, 1523));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3365, 1524);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    (self->items[it] = come_decrement_ref_count(self->items[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3372, 1525));
                    self->items[it]=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3373, 1526);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3395, 1527);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3401, 1528);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3421, 1529));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3424, 1530));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3424, 1531));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    char**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    char*  default_value  ;
    char*  it2  ;
    unsigned int hash;
    int n;
    char*  default_value_129  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 1494, "char** "))), "/usr/local/include/neo-c.h", 3272, 1495);
    __right_value0 = (void*)0;
    items=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 1496, "char** "))), "/usr/local/include/neo-c.h", 3273, 1497);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 1498, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 1499);
    len=0;
    for(it=map$2char$phchar$ph_begin(self)    ;!map$2char$phchar$ph_end(self);it=map$2char$phchar$ph_next(self)){
        memset(&default_value,0,sizeof(char* ));
        __right_value0 = (void*)0;
        it2=(char* )come_increment_ref_count(map$2char$phchar$ph_at(self,it,(char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 1515),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 1516);
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
                memset(&default_value_129,0,sizeof(char* ));
                __right_value0 = (void*)0;
                items[n]=((char* )(__right_value0=map$2char$phchar$ph_at(self,it,(char* )come_increment_ref_count(default_value_129, "/usr/local/include/neo-c.h", 3304, 1517),(_Bool)0)));
                len++;
                (default_value_129 = come_decrement_ref_count(default_value_129, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3307, 1518));
                break;
                (default_value_129 = come_decrement_ref_count(default_value_129, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3309, 1519));
            }
        }
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3312, 1520));
        (it2 = come_decrement_ref_count(it2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3312, 1521));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 1522));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static char*  map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_127  ;
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
    memset(&result_127,0,sizeof(char* ));
        __result_obj__0 = result_127;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phchar$ph_next(struct map$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_128  ;
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
    memset(&result_128,0,sizeof(char* ));
        __result_obj__0 = result_128;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char*  key  , char*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phchar$ph_at"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 1500);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3141, 1501));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3141, 1502));
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (char* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 1503);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3152, 1504));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3152, 1505));
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 1506);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3161, 1507));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3161, 1508));
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 1509);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3165, 1510));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3165, 1511));
            return __result_obj__0;
        }
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 1512);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3169, 1513));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 3169, 1514));
    return __result_obj__0;
}

