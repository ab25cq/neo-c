/// c_include definition ///
/// typedef definition ///
typedef char* string;

typedef unsigned long  int size_t;

typedef __builtin_va_list  __gnuc_va_list  ;

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

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long  int );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long  int );

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

typedef __builtin_va_list  va_list  ;

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
    long  int (*(*read))(void*,char*,unsigned long  int )  ;
    long  int (*(*write))(void*,const char*,unsigned long  int )  ;
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

struct sRefferenceNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sParenBlockNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct list$1sNode$ph* paren_block;
};

struct sDerefferenceNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
    _Bool mQuote;
};

struct sLogicalDenial
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sLogicalDenial2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sReverseNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sMinusNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sPlusPlusNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sMinusMinusNode2
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sNormalBlock
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sBlock*  mBlock  ;
    _Bool clang;
    _Bool unsafe_block;
};

struct sComplement
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sParenNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mLeft;
};

struct sCastNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sType*  mType  ;
    struct sNode* mLeft;
};

struct sArrayInitializer
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  initializer  ;
    struct sType*  type_  ;
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
struct _IO_FILE*  fmemopen(void* __s, unsigned long  int  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long  int*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  int  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  int  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int printf(const char* __restrict __format, ...);
int sprintf(char* __restrict __s, const char* __restrict __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  int  __maxlen  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  int  __maxlen  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
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
long  int  __getdelim(char** __restrict __lineptr, unsigned long  int* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long  int* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long  int* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  int  fread(void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  int  fwrite(const void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  int  fread_unlocked(void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  int  fwrite_unlocked(const void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __stream  );
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
unsigned long  int  __ctype_get_mb_cur_max();
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
int strfromd(char* __dest, unsigned long  int  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  int  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  int  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  int  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  int  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  int  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  int  __size  , const char* __format, long  double  __f  );
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
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  int  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  int  __statelen  , struct random_data* __restrict  __buf  );
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
void arc4random_buf(void* __buf, unsigned long  int  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  int  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  int  __nmemb  , unsigned long  int  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  int  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  int  __nmemb  , unsigned long  int  __size  );
void* alloca(unsigned long  int  __size  );
void* valloc(unsigned long  int  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  int  __alignment  , unsigned long  int  __size  );
void* aligned_alloc(unsigned long  int  __alignment  , unsigned long  int  __size  ) __attribute__ ((__malloc__)) 
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
void* bsearch(const void* __key, const void* __base, unsigned long  int  __nmemb  , unsigned long  int  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  int  __nmemb  , unsigned long  int  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  int  __nmemb  , unsigned long  int  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
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
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int mblen(const char* __s, unsigned long  int  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  int  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  int  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  int  __n  );
unsigned long  int  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  int  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  int  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  int  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  int  __n  );
void* memset(void* __s, int __c, unsigned long  int  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  int  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  int  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  int  strxfrm_l(char* __dest, const char* __src, unsigned long  int  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  int  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  int  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  int  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  int  __haystacklen  , const void* __needle, unsigned long  int  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  int  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  int  __n  );
unsigned long  int  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  int  strnlen(const char* __string, unsigned long  int  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  int  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  int  __n  );
void bzero(void* __s, unsigned long  int  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  int  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
unsigned long  int  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
unsigned long  int  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  int  __n  );
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
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
unsigned long  int  wcslcpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
unsigned long  int  wcslcat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
int*  wcscat(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  int  wcsxfrm(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  int  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  int  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  int  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  int  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  int  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int* __restrict  __s  , const int* __restrict  __delim  , int** __restrict  __ptr  );
unsigned long  int  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  int  wcsnlen(const int*  __s  , unsigned long  int  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  int  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  int  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  int  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  int  __n  );
int*  wmempcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  int  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX1*  __ps  ) __attribute__ ((__pure__));
unsigned long  int  mbrtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  int  __n  , struct anonymous_typeX1* __restrict  __p  );
unsigned long  int  wcrtomb(char* __restrict __s, int  __wc  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  __mbrlen(const char* __restrict __s, unsigned long  int  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  mbrlen(const char* __restrict __s, unsigned long  int  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  mbsrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  wcsrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  mbsnrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  int  __nmc  , unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  wcsnrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  int  __nwc  , unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  int  __n  );
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
int*  wcpncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long  int*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wprintf(const int* __restrict  __format  , ...);
int swprintf(int* __restrict  __s  , unsigned long  int  __n  , const int* __restrict  __format  , ...);
int vfwprintf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwprintf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswprintf(int* __restrict  __s  , unsigned long  int  __n  , const int* __restrict  __format  , __builtin_va_list  __arg  );
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
unsigned long  int  wcsftime(int* __restrict  __s  , unsigned long  int  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  );
unsigned long  int  wcsftime_l(int* __restrict  __s  , unsigned long  int  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  int  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  int  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
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
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  );
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
struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  );
char*  buffer_printable(struct buffer*  self  );
struct list$1char$* chara_to_list(char* self, unsigned long  int  len  );
struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  );
struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  );
struct list$1int$* inta_to_list(int* self, unsigned long  int  len  );
struct list$1long$* longa_to_list(long* self, unsigned long  int  len  );
struct list$1float$* floata_to_list(float* self, unsigned long  int  len  );
struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  );
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  );
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
_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str);
unsigned long  int  shorta_length(short* self, unsigned long  int  len  );
unsigned long  int  inta_length(int* self, unsigned long  int  len  );
unsigned long  int  longa_length(long* self, unsigned long  int  len  );
unsigned long  int  floata_length(float* self, unsigned long  int  len  );
unsigned long  int  doublea_length(double* self, unsigned long  int  len  );
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int  value  );
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
unsigned long  int  size_t_clone(unsigned long  int  self  );
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
char*  size_t_to_string(unsigned long  int  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int  left  , unsigned long  int  right  );
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
unsigned long  int  xwcslen(const int*  wstr  );
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
void add_parse_variable_to_table(char* name, struct sInfo*  info  );
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
struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
_Bool create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  );
_Bool is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
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
char* parsecmp_forward(const char* p2, struct sInfo*  info  );
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
int transpile(struct sInfo*  info  );
void parse_sharp_v5(struct sInfo*  info  );
char*  create_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_non_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  );
struct sNode* create_null_return_value(struct sInfo*  info  );
struct sNode* create_some(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_str_node(char*  value  , int sline, struct sInfo*  info  );
struct sNode* create_buffer_node(struct buffer*  value  , unsigned long  int  size  , struct sInfo*  info  );
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
struct sNode* create_try_operator_node(struct sNode* node, struct sInfo*  info  );
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
struct sType*  normalize_loadvar_type_for_compare(struct sType*  type  , struct sInfo*  info  );
struct sType*  expand_typedef_for_assign(struct sType*  type  , struct sInfo*  info  );
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
_Bool operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo*  info  );
char*  sRefferenceNode_kind(struct sRefferenceNode* self);
struct sNode* sRefferenceNode_left_value(struct sRefferenceNode* self);
_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo*  info  );
char*  sParenBlockNode_kind(struct sParenBlockNode* self);
_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo*  info  );
static void sParenBlockNode_finalize(struct sParenBlockNode* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo*  info  );
char*  sDerefferenceNode_kind(struct sDerefferenceNode* self);
struct sNode* sDerefferenceNode_left_value(struct sDerefferenceNode* self);
_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo*  info  );
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo*  info  );
char*  sLogicalDenial_kind(struct sLogicalDenial* self);
_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo*  info  );
static void sLogicalDenial_finalize(struct sLogicalDenial* self);
struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo*  info  );
char*  sLogicalDenial2_kind(struct sLogicalDenial2* self);
_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo*  info  );
static void sLogicalDenial2_finalize(struct sLogicalDenial2* self);
struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo*  info  );
char*  sReverseNode_kind(struct sReverseNode* self);
_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo*  info  );
static void sReverseNode_finalize(struct sReverseNode* self);
struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo*  info  );
char*  sMinusNode2_kind(struct sMinusNode2* self);
_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo*  info  );
static void sMinusNode2_finalize(struct sMinusNode2* self);
struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo*  info  );
char*  sPlusPlusNode2_kind(struct sPlusPlusNode2* self);
_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo*  info  );
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo*  info  );
char*  sMinusMinusNode2_kind(struct sMinusMinusNode2* self);
_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo*  info  );
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock*  block  , _Bool clang, _Bool unsafe_block, struct sInfo*  info  );
_Bool sNormalBlock_terminated(struct sNormalBlock* self);
char*  sNormalBlock_kind(struct sNormalBlock* self);
_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo*  info  );
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar*  map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  default_value  , _Bool by_pointer);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sVar*  sVar_clone(struct sVar*  self  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock*  self  );
static void sNormalBlock_finalize(struct sNormalBlock* self);
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo*  info  );
char*  sComplement_kind(struct sComplement* self);
_Bool sComplement_compile(struct sComplement* self, struct sInfo*  info  );
static void sComplement_finalize(struct sComplement* self);
struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo*  info  );
char*  sParenNode_kind(struct sParenNode* self);
_Bool sParenNode_compile(struct sParenNode* self, struct sInfo*  info  );
static void sParenNode_finalize(struct sParenNode* self);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType*  type  , struct sNode* left, struct sInfo*  info  );
char*  sCastNode_kind(struct sCastNode* self);
_Bool sCastNode_compile(struct sCastNode* self, struct sInfo*  info  );
static void sCastNode_finalize(struct sCastNode* self);
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  );
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  );
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  );
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct sType*  type_  , char*  initializer  , struct sInfo*  info  );
char*  sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo*  info  );
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
struct sNode* create_defference_node(struct sNode* value, _Bool quote, struct sInfo*  info  );
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
struct sNode* pre_position_operator(struct sInfo*  info  );
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v97(struct sInfo*  info  );
// uniq global variable
// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
    # 38 "/usr/include/bits/byteswap.h"
        return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
    # 51 "/usr/include/bits/byteswap.h"
        return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
    # 64 "/usr/include/bits/byteswap.h"
        return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
    # 35 "/usr/include/bits/uintn-identity.h"
        return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
    # 41 "/usr/include/bits/uintn-identity.h"
        return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
    # 47 "/usr/include/bits/uintn-identity.h"
        return __x;
}

// body function
_Bool operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "operator_overload_fun_self"; neo_current_frame = &fr;
    _Bool __result_obj__0;
    struct sType*  generics_type  ;
    struct sType*  __dec_obj1  ;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj36  ;
    struct sType*  type_  ;
    struct sType*  __dec_obj37  ;
    struct sType*  __dec_obj38  ;
    struct sClass*  klass  ;
    char*  class_name  ;
    struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var1
;    char*  fun_name2  =0;
    struct sFun*  operator_fun  =0;
    struct sGenericsFun*  generics_fun  =0;
    _Bool result;
    struct sRightValueObject*  right_value_object  ;
    struct sNode* obj;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct sNode* node_10;
    _Bool Value;
    memset(&generics_type, 0, sizeof(generics_type));
    memset(&type_, 0, sizeof(type_));
    memset(&klass, 0, sizeof(klass));
    memset(&class_name, 0, sizeof(class_name));
    memset(&result, 0, sizeof(result));
    memset(&right_value_object, 0, sizeof(right_value_object));
    memset(&obj, 0, sizeof(obj));
    memset(&params, 0, sizeof(params));
    memset(&node_10, 0, sizeof(node_10));
    memset(&Value, 0, sizeof(Value));
    # 11 "09pre_op.nc"
    if((charp_operator_equals(fun_name,"operator_plus_plus")||charp_operator_equals(fun_name,"operator_minus_minus"))&&reject_ref_optional_unary_operator(fun_name,left_value,info)) {
        # 8 "09pre_op.nc"
                __result_obj__0 = (_Bool)1;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 8, 1):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 11 "09pre_op.nc"
    # 19 "09pre_op.nc"
    if(type->mNoSolvedGenericsType) {
        # 13 "09pre_op.nc"
        __dec_obj1=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(type->mNoSolvedGenericsType, "09pre_op.nc", 13, 35);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 13, 34);
    }
    else {
        # 16 "09pre_op.nc"
        __dec_obj36=generics_type,
        generics_type=(struct sType* )come_increment_ref_count(sType_clone(type), "09pre_op.nc", 16, 210);
        come_call_finalizer(sType_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 16, 209);
    }
    # 19 "09pre_op.nc"
    # 26 "09pre_op.nc"
    if(type->mNoSolvedGenericsType) {
        # 21 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj37=type_,
        type_=(struct sType* )come_increment_ref_count(sType_clone(type->mNoSolvedGenericsType), "09pre_op.nc", 21, 212);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 21, 211);
    }
    else {
        # 24 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj38=type_,
        type_=(struct sType* )come_increment_ref_count(sType_clone(type), "09pre_op.nc", 24, 214);
        come_call_finalizer(sType_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 24, 213);
    }
    # 26 "09pre_op.nc"
    klass=type_->mClass;
    # 27 "09pre_op.nc"
    class_name=(char* )come_increment_ref_count(klass->mName, "09pre_op.nc", 27, 215);
    # 29 "09pre_op.nc"
    __right_value0 = (void*)0;
    multiple_assign_var1=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value0=get_method(fun_name,type_,info,(_Bool)0)));
    fun_name2=(char* )come_increment_ref_count(multiple_assign_var1->v1, "09pre_op.nc", 29, 216);
    operator_fun=multiple_assign_var1->v2;
    generics_fun=multiple_assign_var1->v3;
    come_call_finalizer(tuple3$3char$phsFun$psGenericsFun$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 29, 218);
    # 31 "09pre_op.nc"
    result=(_Bool)0;
    # 52 "09pre_op.nc"
    if(operator_fun) {
        # 34 "09pre_op.nc"
        right_value_object=left_value->right_value_objects;
        # 40 "09pre_op.nc"
        if(right_value_object) {
            # 37 "09pre_op.nc"
            right_value_object->mFreed=(_Bool)1;
        }
        # 40 "09pre_op.nc"
        obj=(struct sNode*)come_increment_ref_count(node, "09pre_op.nc", 40, 219);
        # 41 "09pre_op.nc"
        __right_value0 = (void*)0;
        params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "09pre_op.nc", 41, 220, "struct list$1tuple2$2char$phsNode$ph$ph*"), "09pre_op.nc", 41, 228)), "09pre_op.nc", 41, 229);
        # 43 "09pre_op.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsNode$ph$ph_add(params,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "09pre_op.nc", 43, 244, "struct tuple2$2char$phsNode$ph"), "09pre_op.nc", 3, 254),(char* )come_increment_ref_count((char* )((void*)0), "09pre_op.nc", 3, 255),(struct sNode*)come_increment_ref_count(obj, "09pre_op.nc", 3, 256)), "09pre_op.nc", 43, 257));
        # 45 "09pre_op.nc"
        __right_value0 = (void*)0;
        node_10=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj, "09pre_op.nc", 45, 258),params,((void*)0),0,((void*)0),info,(_Bool)0), "09pre_op.nc", 45, 259);
        # 50 "09pre_op.nc"
        Value=node_compile(node_10,info);
        if(Value) {
            # 48 "09pre_op.nc"
            result=(_Bool)1;
        }
        ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 52, 260):(void*)0);
        come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, params, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 52, 261);
        ((node_10) ? node_10 = come_decrement_ref_count(node_10, ((struct sNode*)node_10)->finalize, ((struct sNode*)node_10)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 52, 262):(void*)0);
    }
    # 52 "09pre_op.nc"
        __result_obj__0 = result;
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 52, 263):(void*)0);
    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 52, 264);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 52, 265);
    (class_name = come_decrement_ref_count(class_name, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 52, 266));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 52, 267));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    # 1 "sType_finalize"
    # 3 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 2 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 2);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 3);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 6);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 7);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 8):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 9):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 10));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 11));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 12));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 13));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 14));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 15));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 16));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 17));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 20);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 21);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 23);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 24);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 25);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 26));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 27);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 30);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 31);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 32):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 33);
    }
            neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 5);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1sType$ph$p_finalize"
    # 3 "list_item$1sType$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1sType$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 4);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 19);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1sNode$ph$p_finalize"
    # 3 "list_item$1sNode$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1sNode$ph$p_finalize"
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 18):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 22);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$$p_finalize"
            neo_current_frame = fr.prev;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 29);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1char$ph$p_finalize"
    # 3 "list_item$1char$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1char$ph$p_finalize"
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 28));
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
    memset(&result, 0, sizeof(result));
    # 3 "sType_clone"
    # 5 "sType_clone"
    if(self==(void*)0) {
        # 4 "sType_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 36, "struct sType* "), "sType_clone", 5, 37);
    # 7 "sType_clone"
    if(self!=((void*)0)) {
        # 6 "sType_clone"
        result->mClass=self->mClass;
    }
    # 8 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 7 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj2=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 39);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 38);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj3=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 41);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 40);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj7=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 71);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 70);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj8=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 73);
        come_call_finalizer(sType_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 72);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj9=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 82);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 81) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj10=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 84);
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 83) :0);
    }
    # 14 "sType_clone"
    if(self!=((void*)0)) {
        # 13 "sType_clone"
        result->mAlignasDouble=self->mAlignasDouble;
    }
    # 15 "sType_clone"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 14 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj11=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 85, "char* "), "sType_clone", 14, 87);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 86);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj12=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 88, "char* "), "sType_clone", 15, 90);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 89);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj13=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 91, "char* "), "sType_clone", 16, 93);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 92);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj14=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 94, "char* "), "sType_clone", 17, 96);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 95);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj15=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 97, "char* "), "sType_clone", 18, 99);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 98);
    }
    # 20 "sType_clone"
    if(self!=((void*)0)) {
        # 19 "sType_clone"
        result->mNew=self->mNew;
    }
    # 21 "sType_clone"
    if(self!=((void*)0)) {
        # 20 "sType_clone"
        result->mAllocaValue=self->mAllocaValue;
    }
    # 22 "sType_clone"
    if(self!=((void*)0)) {
        # 21 "sType_clone"
        result->mUnsigned=self->mUnsigned;
    }
    # 23 "sType_clone"
    if(self!=((void*)0)) {
        # 22 "sType_clone"
        result->mShort=self->mShort;
    }
    # 24 "sType_clone"
    if(self!=((void*)0)) {
        # 23 "sType_clone"
        result->mLong=self->mLong;
    }
    # 25 "sType_clone"
    if(self!=((void*)0)) {
        # 24 "sType_clone"
        result->mLongLong=self->mLongLong;
    }
    # 26 "sType_clone"
    if(self!=((void*)0)) {
        # 25 "sType_clone"
        result->mConstant=self->mConstant;
    }
    # 27 "sType_clone"
    if(self!=((void*)0)) {
        # 26 "sType_clone"
        result->mAtomic=self->mAtomic;
    }
    # 28 "sType_clone"
    if(self!=((void*)0)) {
        # 27 "sType_clone"
        result->mThreadLocal=self->mThreadLocal;
    }
    # 29 "sType_clone"
    if(self!=((void*)0)) {
        # 28 "sType_clone"
        result->mNorecord=self->mNorecord;
    }
    # 30 "sType_clone"
    if(self!=((void*)0)) {
        # 29 "sType_clone"
        result->mThread=self->mThread;
    }
    # 31 "sType_clone"
    if(self!=((void*)0)) {
        # 30 "sType_clone"
        result->mComplex=self->mComplex;
    }
    # 32 "sType_clone"
    if(self!=((void*)0)) {
        # 31 "sType_clone"
        result->mRegister=self->mRegister;
    }
    # 33 "sType_clone"
    if(self!=((void*)0)) {
        # 32 "sType_clone"
        result->mVolatile=self->mVolatile;
    }
    # 34 "sType_clone"
    if(self!=((void*)0)) {
        # 33 "sType_clone"
        result->mNoreturn=self->mNoreturn;
    }
    # 35 "sType_clone"
    if(self!=((void*)0)) {
        # 34 "sType_clone"
        result->mStatic=self->mStatic;
    }
    # 36 "sType_clone"
    if(self!=((void*)0)) {
        # 35 "sType_clone"
        result->mWeak=self->mWeak;
    }
    # 37 "sType_clone"
    if(self!=((void*)0)) {
        # 36 "sType_clone"
        result->mUniq=self->mUniq;
    }
    # 38 "sType_clone"
    if(self!=((void*)0)) {
        # 37 "sType_clone"
        result->mExtern=self->mExtern;
    }
    # 39 "sType_clone"
    if(self!=((void*)0)) {
        # 38 "sType_clone"
        result->mRestrict=self->mRestrict;
    }
    # 40 "sType_clone"
    if(self!=((void*)0)) {
        # 39 "sType_clone"
        result->mHeap=self->mHeap;
    }
    # 41 "sType_clone"
    if(self!=((void*)0)) {
        # 40 "sType_clone"
        result->mChannel=self->mChannel;
    }
    # 42 "sType_clone"
    if(self!=((void*)0)) {
        # 41 "sType_clone"
        result->mDefferRightValue=self->mDefferRightValue;
    }
    # 43 "sType_clone"
    if(self!=((void*)0)) {
        # 42 "sType_clone"
        result->mNoHeap=self->mNoHeap;
    }
    # 44 "sType_clone"
    if(self!=((void*)0)) {
        # 43 "sType_clone"
        result->mRefference=self->mRefference;
    }
    # 45 "sType_clone"
    if(self!=((void*)0)) {
        # 44 "sType_clone"
        result->mSlice=self->mSlice;
    }
    # 46 "sType_clone"
    if(self!=((void*)0)) {
        # 45 "sType_clone"
        result->mOptional=self->mOptional;
    }
    # 47 "sType_clone"
    if(self!=((void*)0)) {
        # 46 "sType_clone"
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    # 48 "sType_clone"
    if(self!=((void*)0)) {
        # 47 "sType_clone"
        result->mTypeName=self->mTypeName;
    }
    # 49 "sType_clone"
    if(self!=((void*)0)) {
        # 48 "sType_clone"
        result->mAnonymous=self->mAnonymous;
    }
    # 50 "sType_clone"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 49 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj16=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 100, "char* "), "sType_clone", 49, 102);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 101);
    }
    # 51 "sType_clone"
    if(self!=((void*)0)) {
        # 50 "sType_clone"
        result->mInnerStruct=self->mInnerStruct;
    }
    # 52 "sType_clone"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 51 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj17=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 103, "char* "), "sType_clone", 51, 105);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 104);
    }
    # 53 "sType_clone"
    if(self!=((void*)0)) {
        # 52 "sType_clone"
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    # 54 "sType_clone"
    if(self!=((void*)0)) {
        # 53 "sType_clone"
        result->mInline=self->mInline;
    }
    # 55 "sType_clone"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 54 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj18=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 106, "char* "), "sType_clone", 54, 108);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 107);
    }
    # 56 "sType_clone"
    if(self!=((void*)0)) {
        # 55 "sType_clone"
        result->mTypedef=self->mTypedef;
    }
    # 57 "sType_clone"
    if(self!=((void*)0)) {
        # 56 "sType_clone"
        result->mMultipleTypes=self->mMultipleTypes;
    }
    # 58 "sType_clone"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 57 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj22=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 138);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 137);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj23=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 140);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 139);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 160);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 159);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj25=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 162);
        come_call_finalizer(list$1int$_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 161);
    }
    # 62 "sType_clone"
    if(self!=((void*)0)) {
        # 61 "sType_clone"
        result->mPointerNum=self->mPointerNum;
    }
    # 63 "sType_clone"
    if(self!=((void*)0)) {
        # 62 "sType_clone"
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    # 64 "sType_clone"
    if(self!=((void*)0)) {
        # 63 "sType_clone"
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    # 65 "sType_clone"
    if(self!=((void*)0)) {
        # 64 "sType_clone"
        result->mPointerParen=self->mPointerParen;
    }
    # 66 "sType_clone"
    if(self!=((void*)0)) {
        # 65 "sType_clone"
        result->mMinusPointerNum=self->mMinusPointerNum;
    }
    # 67 "sType_clone"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 66 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj26=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 164);
        come_call_finalizer(sType_finalize, __dec_obj26,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 163);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj27=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 165, "char* "), "sType_clone", 67, 167);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 166);
    }
    # 69 "sType_clone"
    if(self!=((void*)0)) {
        # 68 "sType_clone"
        result->mOriginalTypePointerNum=self->mOriginalTypePointerNum;
    }
    # 70 "sType_clone"
    if(self!=((void*)0)) {
        # 69 "sType_clone"
        result->mOriginalTypePointerHeap=self->mOriginalTypePointerHeap;
    }
    # 71 "sType_clone"
    if(self!=((void*)0)) {
        # 70 "sType_clone"
        result->mArrayPointerType=self->mArrayPointerType;
    }
    # 72 "sType_clone"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 71 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj28=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 169);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj28,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 168);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj32=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 201);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 200);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj33=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 203);
        come_call_finalizer(sType_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 202);
    }
    # 75 "sType_clone"
    if(self!=((void*)0)) {
        # 74 "sType_clone"
        result->mVarArgs=self->mVarArgs;
    }
    # 76 "sType_clone"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 75 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj34=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 205);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 204) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj35=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 207);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 206);
    }
    # 77 "sType_clone"
        __result_obj__0 = result;
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 208);
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
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 42);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 43);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 44, "struct list$1sType$ph*"), "./neo-c.h", 1513, 48)), "./neo-c.h", 1513, 49);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 64));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 65));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 66);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 67);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 68);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 45);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 46);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 47);
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
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 50);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 51, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 52);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj4=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 54);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 53);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 55, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 56);
        # 1546 "./neo-c.h"
        litem_0->prev=self->head;
        # 1547 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj5=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 58);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 57);
        # 1550 "./neo-c.h"
        self->tail=litem_0;
        # 1551 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 59, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 60);
        # 1556 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj6=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 62);
        come_call_finalizer(sType_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 61);
        # 1560 "./neo-c.h"
        self->tail->next=litem_1;
        # 1561 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 63);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 69);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    memset(&result, 0, sizeof(result));
    # 3 "sNode_clone"
    # 5 "sNode_clone"
    if(self==(void*)0) {
        # 4 "sNode_clone"
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 74);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 75):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 76, "struct sNode*"), "sNode_clone", 5, 77);
    # 7 "sNode_clone"
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        # 6 "sNode_clone"
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    # 8 "sNode_clone"
    if(self!=((void*)0)) {
        # 7 "sNode_clone"
        result->finalize=self->finalize;
    }
    # 9 "sNode_clone"
    if(self!=((void*)0)) {
        # 8 "sNode_clone"
        result->clone=self->clone;
    }
    # 10 "sNode_clone"
    if(self!=((void*)0)) {
        # 9 "sNode_clone"
        result->compile=self->compile;
    }
    # 11 "sNode_clone"
    if(self!=((void*)0)) {
        # 10 "sNode_clone"
        result->sline=self->sline;
    }
    # 12 "sNode_clone"
    if(self!=((void*)0)) {
        # 11 "sNode_clone"
        result->sline_real=self->sline_real;
    }
    # 13 "sNode_clone"
    if(self!=((void*)0)) {
        # 12 "sNode_clone"
        result->sname=self->sname;
    }
    # 14 "sNode_clone"
    if(self!=((void*)0)) {
        # 13 "sNode_clone"
        result->terminated=self->terminated;
    }
    # 15 "sNode_clone"
    if(self!=((void*)0)) {
        # 14 "sNode_clone"
        result->kind=self->kind;
    }
    # 16 "sNode_clone"
    if(self!=((void*)0)) {
        # 15 "sNode_clone"
        result->left_value=self->left_value;
    }
    # 16 "sNode_clone"
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
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 109);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 110);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 111, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 115)), "./neo-c.h", 1513, 116);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 131));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 132));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 133);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 134);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 135);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 112);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 113);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 114);
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
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 117):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 118, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 119);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj19=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 121);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 120) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 122, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 123);
        # 1546 "./neo-c.h"
        litem_2->prev=self->head;
        # 1547 "./neo-c.h"
        litem_2->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj20=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 125);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 124) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_2;
        # 1551 "./neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 126, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 127);
        # 1556 "./neo-c.h"
        litem_3->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_3->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj21=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 129);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 128) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_3;
        # 1561 "./neo-c.h"
        self->tail=litem_3;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 130):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 136);
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
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 141);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 142);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 143, "struct list$1int$*"), "./neo-c.h", 1513, 147)), "./neo-c.h", 1513, 148);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(0) {
            # 1518 "./neo-c.h"
            list$1int$_add(result,it->item);
        }
        else {
            # 1521 "./neo-c.h"
            list$1int$_add(result,it->item);
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 155);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 156);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 157);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 144);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 145);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 146);
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
    memset(&litem, 0, sizeof(litem));
    memset(&litem_4, 0, sizeof(litem_4));
    memset(&litem_5, 0, sizeof(litem_5));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 149, "struct list_item$1int$*"))), "./neo-c.h", 1534, 150);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        litem->item=item;
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 151, "struct list_item$1int$*"))), "./neo-c.h", 1544, 152);
        # 1546 "./neo-c.h"
        litem_4->prev=self->head;
        # 1547 "./neo-c.h"
        litem_4->next=((void*)0);
        # 1548 "./neo-c.h"
        litem_4->item=item;
        # 1550 "./neo-c.h"
        self->tail=litem_4;
        # 1551 "./neo-c.h"
        self->head->next=litem_4;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 153, "struct list_item$1int$*"))), "./neo-c.h", 1554, 154);
        # 1556 "./neo-c.h"
        litem_5->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_5->next=((void*)0);
        # 1558 "./neo-c.h"
        litem_5->item=item;
        # 1560 "./neo-c.h"
        self->tail->next=litem_5;
        # 1561 "./neo-c.h"
        self->tail=litem_5;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 158);
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
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 170);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 171);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 172, "struct list$1char$ph*"), "./neo-c.h", 1513, 176)), "./neo-c.h", 1513, 177);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 192, "char* "), "./neo-c.h", 1518, 193));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 194, "char* "), "./neo-c.h", 1521, 195));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 196);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 198);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 173);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 174);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 175);
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
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 178));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 179, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 180);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj29=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 182);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 181);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 183, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 184);
        # 1546 "./neo-c.h"
        litem_6->prev=self->head;
        # 1547 "./neo-c.h"
        litem_6->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj30=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 186);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 185);
        # 1550 "./neo-c.h"
        self->tail=litem_6;
        # 1551 "./neo-c.h"
        self->head->next=litem_6;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 187, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 188);
        # 1556 "./neo-c.h"
        litem_7->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_7->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj31=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 190);
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 189);
        # 1560 "./neo-c.h"
        self->tail->next=litem_7;
        # 1561 "./neo-c.h"
        self->tail=litem_7;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 191));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 199);
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"
    # 3 "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple3$3char$phsFun$psGenericsFun$p$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsFun$psGenericsFun$p$p_finalize", 2, 217));
    }
        neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 221);
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 226);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phsNode$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 227);
    return __result_obj__0;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 225);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"
    # 3 "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize"
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsNode$ph$ph$p_finalize}", 2, 224);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$phsNode$ph$p_finalize"
    # 3 "tuple2$2char$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$phsNode$ph$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsNode$ph$p_finalize", 2, 222));
    }
    # 4 "tuple2$2char$phsNode$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsNode$ph$p_finalize"
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple2$2char$phsNode$ph$p_finalize", 3, 223):(void*)0);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsNode$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem;
    struct tuple2$2char$phsNode$ph* __dec_obj39;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_8;
    struct tuple2$2char$phsNode$ph* __dec_obj40;
    struct list_item$1tuple2$2char$phsNode$ph$ph* litem_9;
    struct tuple2$2char$phsNode$ph* __dec_obj41;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 230);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1534, 231, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1534, 232);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj39=litem->item,
        litem->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 234);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 233);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1544, 235, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1544, 236);
        # 1546 "./neo-c.h"
        litem_8->prev=self->head;
        # 1547 "./neo-c.h"
        litem_8->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj40=litem_8->item,
        litem_8->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 238);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 237);
        # 1550 "./neo-c.h"
        self->tail=litem_8;
        # 1551 "./neo-c.h"
        self->head->next=litem_8;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./neo-c.h", 1554, 239, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))), "./neo-c.h", 1554, 240);
        # 1556 "./neo-c.h"
        litem_9->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_9->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj41=litem_9->item,
        litem_9->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 242);
        come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 241);
        # 1560 "./neo-c.h"
        self->tail->next=litem_9;
        # 1561 "./neo-c.h"
        self->tail=litem_9;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 243);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char*  v1  , struct sNode* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsNode$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj42  ;
    struct sNode* __dec_obj43;
    struct tuple2$2char$phsNode$ph* __result_obj__0;
    # 4455 "./neo-c.h"
    __dec_obj42=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4455, 246);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4455, 245);
    # 4456 "./neo-c.h"
    __dec_obj43=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4456, 248);
    (__dec_obj43 ? __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4456, 247) :0);
    # 4458 "./neo-c.h"
        __result_obj__0 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self, "./neo-c.h", 4458, 249);
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 250);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4458, 251));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4458, 252):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 253);
    return __result_obj__0;
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj44;
    struct sRefferenceNode* __result_obj__0;
    # 59 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sRefferenceNode*)come_increment_ref_count(self, "09pre_op.nc", 59, 268),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 59, 270);
    # 61 "09pre_op.nc"
    __dec_obj44=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 61, 272);
    (__dec_obj44 ? __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 61, 271) :0);
    # 64 "09pre_op.nc"
        __result_obj__0 = (struct sRefferenceNode*)come_increment_ref_count(self, "09pre_op.nc", 64, 273);
    come_call_finalizer(sRefferenceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 64, 276);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 64, 277):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sRefferenceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 64, 278);
    return __result_obj__0;
}

char*  sRefferenceNode_kind(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 66 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sRefferenceNode","09pre_op.nc",66))), "09pre_op.nc", 66, 279);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 66, 280));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 66, 281));
    return __result_obj__0;
}

struct sNode* sRefferenceNode_left_value(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_left_value"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    # 71 "09pre_op.nc"
        __result_obj__0 = self->value;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_compile"; neo_current_frame = &fr;
    struct sNode* value;
    _Bool in_refference;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj45  ;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    struct sType*  __dec_obj48  ;
    _Bool __result_obj__0;
    memset(&value, 0, sizeof(value));
    memset(&in_refference, 0, sizeof(in_refference));
    memset(&left_value, 0, sizeof(left_value));
    memset(&come_value, 0, sizeof(come_value));
    # 80 "09pre_op.nc"
    if(gComeSafe) {
        # 77 "09pre_op.nc"
        err_msg(info,"Refference is not safe code");
        # 78 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 80 "09pre_op.nc"
    value=self->value;
    # 82 "09pre_op.nc"
    in_refference=info->in_refference;
    # 83 "09pre_op.nc"
    info->in_refference=(_Bool)1;
    # 87 "09pre_op.nc"
    if(!node_compile(value,info)) {
        # 85 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 87 "09pre_op.nc"
    info->in_refference=in_refference;
    # 89 "09pre_op.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 89, 282);
    # 91 "09pre_op.nc"
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 91, 283, "struct CVALUE* "), "09pre_op.nc", 91, 284)), "09pre_op.nc", 91, 285);
    # 103 "09pre_op.nc"
    if(left_value->c_value_without_null_checker) {
        # 94 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj45=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",left_value->c_value_without_null_checker), "09pre_op.nc", 94, 287);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 94, 286);
    }
    else if(left_value->c_value_without_cast_object_value) {
        # 97 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj46=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",left_value->c_value_without_cast_object_value), "09pre_op.nc", 97, 289);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 97, 288);
    }
    else {
        # 100 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj47=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("&%s",left_value->c_value), "09pre_op.nc", 100, 291);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 100, 290);
    }
    # 103 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj48=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 103, 293);
    come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 103, 292);
    # 104 "09pre_op.nc"
    come_value->type->mPointerNum++;
    # 105 "09pre_op.nc"
    come_value->var=left_value->var;
    # 107 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 109 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 109, 313));
    # 111 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 111, 314);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 111, 315);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    # 1 "sNodeBase_finalize"
    # 3 "sNodeBase_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sNodeBase_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 269));
    }
        neo_current_frame = fr.prev;
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_finalize"; neo_current_frame = &fr;
    # 1 "sRefferenceNode_finalize"
    # 3 "sRefferenceNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sRefferenceNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sRefferenceNode_finalize", 2, 274));
    }
    # 4 "sRefferenceNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sRefferenceNode_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sRefferenceNode_finalize", 3, 275):(void*)0);
    }
        neo_current_frame = fr.prev;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj49  ;
    struct list_item$1CVALUE$ph* litem_11;
    struct CVALUE*  __dec_obj50  ;
    struct list_item$1CVALUE$ph* litem_12;
    struct CVALUE*  __dec_obj51  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_11, 0, sizeof(litem_11));
    memset(&litem_12, 0, sizeof(litem_12));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 299);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1619, 300, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1619, 301);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj49=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1623, 303);
        come_call_finalizer(CVALUE_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 302);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1629, 304, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1629, 305);
        # 1631 "./neo-c.h"
        litem_11->prev=self->head;
        # 1632 "./neo-c.h"
        litem_11->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj50=litem_11->item,
        litem_11->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1633, 307);
        come_call_finalizer(CVALUE_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 306);
        # 1635 "./neo-c.h"
        self->tail=litem_11;
        # 1636 "./neo-c.h"
        self->head->next=litem_11;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1639, 308, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1639, 309);
        # 1641 "./neo-c.h"
        litem_12->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_12->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj51=litem_12->item,
        litem_12->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1643, 311);
        come_call_finalizer(CVALUE_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 310);
        # 1645 "./neo-c.h"
        self->tail->next=litem_12;
        # 1646 "./neo-c.h"
        self->tail=litem_12;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 312);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    # 1 "CVALUE_finalize"
    # 3 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        # 2 "CVALUE_finalize"
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 294));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 295);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 296));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 297));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 298));
    }
            neo_current_frame = fr.prev;
}

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNode$ph* paren_block, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1sNode$ph* __dec_obj52;
    struct sParenBlockNode* __result_obj__0;
    # 119 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sParenBlockNode*)come_increment_ref_count(self, "09pre_op.nc", 119, 316),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 119, 317);
    # 121 "09pre_op.nc"
    __dec_obj52=self->paren_block,
    self->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(paren_block, "09pre_op.nc", 121, 319);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 121, 318);
    # 124 "09pre_op.nc"
        __result_obj__0 = (struct sParenBlockNode*)come_increment_ref_count(self, "09pre_op.nc", 124, 320);
    come_call_finalizer(sParenBlockNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 124, 323);
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 124, 324);
    neo_current_frame = fr.prev;
    come_call_finalizer(sParenBlockNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 124, 325);
    return __result_obj__0;
}

char*  sParenBlockNode_kind(struct sParenBlockNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 126 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sParenBlockNode","09pre_op.nc",126))), "09pre_op.nc", 126, 326);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 126, 327));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 126, 328));
    return __result_obj__0;
}

_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_compile"; neo_current_frame = &fr;
    struct list$1sNode$ph* paren_block;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct buffer*  paren_block_buffer  ;
    struct buffer*  __dec_obj53  ;
    struct sType*  come_type  ;
    struct list$1sNode$ph* _o2_saved_3;
    struct sNode* it;
    _Bool __result_obj__0;
    struct buffer*  __dec_obj54  ;
    struct CVALUE*  come_value  ;
    struct sType*  __dec_obj55  ;
    char*  __dec_obj56  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    char*  __dec_obj59  ;
    struct buffer*  __dec_obj60  ;
    struct CVALUE*  come_value_15  ;
    char*  __dec_obj61  ;
    struct sType*  __dec_obj62  ;
    memset(&paren_block, 0, sizeof(paren_block));
    memset(&buf, 0, sizeof(buf));
    memset(&paren_block_buffer, 0, sizeof(paren_block_buffer));
    memset(&come_type, 0, sizeof(come_type));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value_15, 0, sizeof(come_value_15));
    # 131 "09pre_op.nc"
    paren_block=(struct list$1sNode$ph*)come_increment_ref_count(self->paren_block, "09pre_op.nc", 131, 329);
    # 133 "09pre_op.nc"
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 133, 330, "struct buffer* "), "09pre_op.nc", 133, 331)), "09pre_op.nc", 133, 332);
    # 135 "09pre_op.nc"
    buffer_append_str(buf,"({");
    # 143 "09pre_op.nc"
    paren_block_buffer=(struct buffer* )come_increment_ref_count(info->paren_block_buffer, "09pre_op.nc", 143, 333);
    # 144 "09pre_op.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj53=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 144, 334, "struct buffer* "), "09pre_op.nc", 144, 335)), "09pre_op.nc", 144, 337);
    come_call_finalizer(buffer_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 144, 336);
    # 145 "09pre_op.nc"
    come_type=((void*)0);
    # 188 "09pre_op.nc"
    for(_o2_saved_3=(struct list$1sNode$ph*)come_increment_ref_count(paren_block, "09pre_op.nc", 146, 338),it=list$1sNode$ph_begin(_o2_saved_3)    ;!list$1sNode$ph_end(_o2_saved_3);it=list$1sNode$ph_next(_o2_saved_3)){
        # 151 "09pre_op.nc"
        if(!node_compile(it,info)) {
            # 148 "09pre_op.nc"
                        __result_obj__0 = (_Bool)0;
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 339);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 340);
            come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 341);
            come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 342);
            come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 148, 343);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 156 "09pre_op.nc"
        if(buffer_length(info->paren_block_buffer)>0) {
            # 152 "09pre_op.nc"
            __right_value0 = (void*)0;
            buffer_append_str(buf,((char* )(__right_value0=buffer_to_string(info->paren_block_buffer))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 152, 344));
            # 153 "09pre_op.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj54=info->paren_block_buffer,
            info->paren_block_buffer=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 153, 345, "struct buffer* "), "09pre_op.nc", 153, 346)), "09pre_op.nc", 153, 348);
            come_call_finalizer(buffer_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 153, 347);
        }
        # 187 "09pre_op.nc"
        if(list$1CVALUE$ph_length(info->stack)>0) {
            # 157 "09pre_op.nc"
            __right_value0 = (void*)0;
            come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 157, 349);
            # 168 "09pre_op.nc"
            if(!info->no_output_come_code) {
                # 166 "09pre_op.nc"
                if(buf) {
                    # 161 "09pre_op.nc"
                    __right_value0 = (void*)0;
                    buffer_append_str(buf,((char* )(__right_value0=string_operator_add(come_value->c_value,"; "))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 161, 350));
                }
                else {
                    # 164 "09pre_op.nc"
                    __right_value0 = (void*)0;
                    add_come_code(info,((char* )(__right_value0=string_operator_add(come_value->c_value,"; "))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 164, 351));
                }
            }
            # 168 "09pre_op.nc"
            __right_value0 = (void*)0;
            __dec_obj55=come_type,
            come_type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 168, 353);
            come_call_finalizer(sType_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 168, 352);
            # 170 "09pre_op.nc"
            __dec_obj56=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 170, 354);
            # 171 "09pre_op.nc"
            __dec_obj57=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 171, 355);
            come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 187, 356);
        }
        else {
            # 186 "09pre_op.nc"
            if(buf) {
                # 180 "09pre_op.nc"
                if(!info->no_output_come_code) {
                    # 177 "09pre_op.nc"
                    if(info->module->mLastCode) {
                        # 176 "09pre_op.nc"
                        __right_value0 = (void*)0;
                        buffer_append_str(buf,((char* )(__right_value0=string_operator_add(info->module->mLastCode,"; "))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 176, 357));
                    }
                    # 178 "09pre_op.nc"
                    if(info->module->mLastCode2) {
                        # 177 "09pre_op.nc"
                        __right_value0 = (void*)0;
                        buffer_append_str(buf,((char* )(__right_value0=string_operator_add(info->module->mLastCode2,"; "))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 177, 358));
                    }
                }
                # 180 "09pre_op.nc"
                __dec_obj58=info->module->mLastCode,
                info->module->mLastCode=((void*)0);
                __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 180, 359);
                # 181 "09pre_op.nc"
                __dec_obj59=info->module->mLastCode2,
                info->module->mLastCode2=((void*)0);
                __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 181, 360);
            }
            else {
                # 184 "09pre_op.nc"
                add_last_code_to_source(info);
            }
        }
    }
    # 188 "09pre_op.nc"
    __dec_obj60=info->paren_block_buffer,
    info->paren_block_buffer=(struct buffer* )come_increment_ref_count(paren_block_buffer, "09pre_op.nc", 188, 362);
    come_call_finalizer(buffer_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 188, 361);
    # 207 "09pre_op.nc"
    if(buf) {
        # 191 "09pre_op.nc"
        buffer_append_str(buf,"})");
        # 193 "09pre_op.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_15=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 193, 363, "struct CVALUE* "), "09pre_op.nc", 193, 364)), "09pre_op.nc", 193, 365);
        # 195 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj61=come_value_15->c_value,
        come_value_15->c_value=(char* )come_increment_ref_count(buffer_to_string(buf), "09pre_op.nc", 195, 367);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 195, 366);
        # 196 "09pre_op.nc"
        __dec_obj62=come_value_15->type,
        come_value_15->type=(struct sType* )come_increment_ref_count(come_type, "09pre_op.nc", 196, 369);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 196, 368);
        # 197 "09pre_op.nc"
        come_value_15->var=((void*)0);
        # 199 "09pre_op.nc"
        add_come_last_code(info,"%s",come_value_15->c_value);
        # 201 "09pre_op.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_15, "09pre_op.nc", 201, 370));
        come_call_finalizer(CVALUE_finalize, come_value_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 371);
    }
    else {
        # 204 "09pre_op.nc"
        add_come_code(info,"});");
    }
    # 207 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 372);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 373);
    come_call_finalizer(buffer_finalize, paren_block_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 374);
    come_call_finalizer(sType_finalize, come_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 375);
    come_call_finalizer(list$1sNode$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 207, 376);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sParenBlockNode_finalize(struct sParenBlockNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_finalize"; neo_current_frame = &fr;
    # 1 "sParenBlockNode_finalize"
    # 3 "sParenBlockNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sParenBlockNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sParenBlockNode_finalize", 2, 321));
    }
    # 4 "sParenBlockNode_finalize"
    if(self!=((void*)0)&&self->paren_block!=((void*)0)) {
        # 3 "sParenBlockNode_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sParenBlockNode_finalize}", 3, 322);
    }
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_begin"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_13;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(struct sNode*));
        # 1687 "./neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1689 "./neo-c.h"
    self->it=self->head;
    # 1695 "./neo-c.h"
    if(self->it) {
        # 1692 "./neo-c.h"
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1695 "./neo-c.h"
    # 1696 "./neo-c.h"
    memset(&result_13,0,sizeof(struct sNode*));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_13;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_next"; neo_current_frame = &fr;
    struct sNode* result;
    struct sNode* __result_obj__0;
    struct sNode* result_14;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(struct sNode*));
        # 1706 "./neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1709 "./neo-c.h"
    self->it=self->it->next;
    # 1715 "./neo-c.h"
    if(self->it) {
        # 1712 "./neo-c.h"
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1715 "./neo-c.h"
    # 1716 "./neo-c.h"
    memset(&result_14,0,sizeof(struct sNode*));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_14;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_length"; neo_current_frame = &fr;
    # 1772 "./neo-c.h"
    if(self==((void*)0)) {
        # 1770 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 1772 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj63;
    struct sDerefferenceNode* __result_obj__0;
    # 216 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sDerefferenceNode*)come_increment_ref_count(self, "09pre_op.nc", 216, 377),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 216, 378);
    # 218 "09pre_op.nc"
    __dec_obj63=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 218, 380);
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 218, 379) :0);
    # 219 "09pre_op.nc"
    self->mQuote=quote;
    # 222 "09pre_op.nc"
        __result_obj__0 = (struct sDerefferenceNode*)come_increment_ref_count(self, "09pre_op.nc", 222, 381);
    come_call_finalizer(sDerefferenceNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 222, 384);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 222, 385):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sDerefferenceNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 222, 386);
    return __result_obj__0;
}

char*  sDerefferenceNode_kind(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 224 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sDerefferenceNode","09pre_op.nc",224))), "09pre_op.nc", 224, 387);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 224, 388));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 224, 389));
    return __result_obj__0;
}

struct sNode* sDerefferenceNode_left_value(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_left_value"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    # 229 "09pre_op.nc"
        __result_obj__0 = self->value;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_compile"; neo_current_frame = &fr;
    struct sNode* value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj64  ;
    struct sType*  __dec_obj65  ;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value, 0, sizeof(come_value));
    # 238 "09pre_op.nc"
    if(gComeSafe) {
        # 235 "09pre_op.nc"
        err_msg(info,"Derefference is not safe code");
        # 236 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 238 "09pre_op.nc"
    value=(struct sNode*)come_increment_ref_count(self->value, "09pre_op.nc", 238, 390);
    # 244 "09pre_op.nc"
    if(!node_compile(value,info)) {
        # 241 "09pre_op.nc"
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 241, 391):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 244 "09pre_op.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 244, 392);
    # 247 "09pre_op.nc"
    type=(struct sType* )come_increment_ref_count(left_value->type, "09pre_op.nc", 247, 393);
    # 249 "09pre_op.nc"
    const char* fun_name="operator_derefference";
    # 251 "09pre_op.nc"
    # 259 "09pre_op.nc"
    if(self->mQuote) {
        # 253 "09pre_op.nc"
        calling_fun=(_Bool)0;
    }
    else {
        # 256 "09pre_op.nc"
        calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 256, 394),left_value,info);
    }
    # 272 "09pre_op.nc"
    if(!calling_fun) {
        # 260 "09pre_op.nc"
        __right_value0 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 260, 395, "struct CVALUE* "), "09pre_op.nc", 260, 396)), "09pre_op.nc", 260, 397);
        # 262 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj64=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("*%s",left_value->c_value), "09pre_op.nc", 262, 399);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 262, 398);
        # 263 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj65=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 263, 401);
        come_call_finalizer(sType_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 263, 400);
        # 264 "09pre_op.nc"
        come_value->type->mPointerNum--;
        # 265 "09pre_op.nc"
        come_value->var=((void*)0);
        # 267 "09pre_op.nc"
        add_come_last_code(info,"%s",come_value->c_value);
        # 269 "09pre_op.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 269, 402));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 272, 403);
    }
    # 272 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 272, 404):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 272, 405);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 272, 406);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_finalize"; neo_current_frame = &fr;
    # 1 "sDerefferenceNode_finalize"
    # 3 "sDerefferenceNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sDerefferenceNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sDerefferenceNode_finalize", 2, 382));
    }
    # 4 "sDerefferenceNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sDerefferenceNode_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sDerefferenceNode_finalize", 3, 383):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj66;
    struct sLogicalDenial* __result_obj__0;
    # 280 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLogicalDenial*)come_increment_ref_count(self, "09pre_op.nc", 280, 407),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 280, 408);
    # 282 "09pre_op.nc"
    __dec_obj66=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 282, 410);
    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 282, 409) :0);
    # 285 "09pre_op.nc"
        __result_obj__0 = (struct sLogicalDenial*)come_increment_ref_count(self, "09pre_op.nc", 285, 411);
    come_call_finalizer(sLogicalDenial_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 285, 414);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 285, 415):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLogicalDenial_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 285, 416);
    return __result_obj__0;
}

char*  sLogicalDenial_kind(struct sLogicalDenial* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 287 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLogicalDenial","09pre_op.nc",287))), "09pre_op.nc", 287, 417);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 287, 418));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 287, 419));
    return __result_obj__0;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj67  ;
    struct sType*  __dec_obj68  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 296 "09pre_op.nc"
    if(!node_compile(self->value,info)) {
        # 293 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 296 "09pre_op.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 296, 420);
    # 298 "09pre_op.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 298, 421, "struct CVALUE* "), "09pre_op.nc", 298, 422)), "09pre_op.nc", 298, 423);
    # 300 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj67=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("!%s",come_value->c_value), "09pre_op.nc", 300, 425);
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 300, 424);
    # 301 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj68=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 301, 427);
    come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 301, 426);
    # 302 "09pre_op.nc"
    come_value2->var=((void*)0);
    # 304 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 304, 428));
    # 306 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 308 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 308, 429);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 308, 430);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_finalize"; neo_current_frame = &fr;
    # 1 "sLogicalDenial_finalize"
    # 3 "sLogicalDenial_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sLogicalDenial_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLogicalDenial_finalize", 2, 412));
    }
    # 4 "sLogicalDenial_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sLogicalDenial_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sLogicalDenial_finalize", 3, 413):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj69;
    struct sLogicalDenial2* __result_obj__0;
    # 316 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sLogicalDenial2*)come_increment_ref_count(self, "09pre_op.nc", 316, 431),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 316, 432);
    # 318 "09pre_op.nc"
    __dec_obj69=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 318, 434);
    (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 318, 433) :0);
    # 321 "09pre_op.nc"
        __result_obj__0 = (struct sLogicalDenial2*)come_increment_ref_count(self, "09pre_op.nc", 321, 435);
    come_call_finalizer(sLogicalDenial2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 321, 438);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 321, 439):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sLogicalDenial2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 321, 440);
    return __result_obj__0;
}

char*  sLogicalDenial2_kind(struct sLogicalDenial2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 323 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sLogicalDenial2","09pre_op.nc",323))), "09pre_op.nc", 323, 441);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 323, 442));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 323, 443));
    return __result_obj__0;
}

_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj70  ;
    struct sType*  __dec_obj71  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 332 "09pre_op.nc"
    if(!node_compile(self->value,info)) {
        # 329 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 332 "09pre_op.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 332, 444);
    # 334 "09pre_op.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 334, 445, "struct CVALUE* "), "09pre_op.nc", 334, 446)), "09pre_op.nc", 334, 447);
    # 336 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj70=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("!!%s",come_value->c_value), "09pre_op.nc", 336, 449);
    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 336, 448);
    # 337 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj71=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 337, 451);
    come_call_finalizer(sType_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 337, 450);
    # 338 "09pre_op.nc"
    come_value2->var=((void*)0);
    # 340 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 340, 452));
    # 342 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 344 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 344, 453);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 344, 454);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sLogicalDenial2_finalize(struct sLogicalDenial2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_finalize"; neo_current_frame = &fr;
    # 1 "sLogicalDenial2_finalize"
    # 3 "sLogicalDenial2_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sLogicalDenial2_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sLogicalDenial2_finalize", 2, 436));
    }
    # 4 "sLogicalDenial2_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sLogicalDenial2_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sLogicalDenial2_finalize", 3, 437):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj72;
    struct sReverseNode* __result_obj__0;
    # 352 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sReverseNode*)come_increment_ref_count(self, "09pre_op.nc", 352, 455),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 352, 456);
    # 354 "09pre_op.nc"
    __dec_obj72=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 354, 458);
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 354, 457) :0);
    # 357 "09pre_op.nc"
        __result_obj__0 = (struct sReverseNode*)come_increment_ref_count(self, "09pre_op.nc", 357, 459);
    come_call_finalizer(sReverseNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 357, 462);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 357, 463):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sReverseNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 357, 464);
    return __result_obj__0;
}

char*  sReverseNode_kind(struct sReverseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 359 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sReverseNode","09pre_op.nc",359))), "09pre_op.nc", 359, 465);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 359, 466));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 359, 467));
    return __result_obj__0;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_compile"; neo_current_frame = &fr;
    struct sNode* value;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj73  ;
    struct sType*  __dec_obj74  ;
    _Bool __result_obj__0;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&come_value, 0, sizeof(come_value));
    # 364 "09pre_op.nc"
    value=self->value;
    # 370 "09pre_op.nc"
    if(!node_compile(value,info)) {
        # 367 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 370 "09pre_op.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 370, 468);
    # 372 "09pre_op.nc"
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 372, 469, "struct CVALUE* "), "09pre_op.nc", 372, 470)), "09pre_op.nc", 372, 471);
    # 374 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj73=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("!%s",left_value->c_value), "09pre_op.nc", 374, 473);
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 374, 472);
    # 375 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj74=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 375, 475);
    come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 375, 474);
    # 376 "09pre_op.nc"
    come_value->type->mPointerNum--;
    # 377 "09pre_op.nc"
    come_value->var=((void*)0);
    # 379 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 381 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 381, 476));
    # 383 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 383, 477);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 383, 478);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sReverseNode_finalize(struct sReverseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_finalize"; neo_current_frame = &fr;
    # 1 "sReverseNode_finalize"
    # 3 "sReverseNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sReverseNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sReverseNode_finalize", 2, 460));
    }
    # 4 "sReverseNode_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sReverseNode_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sReverseNode_finalize", 3, 461):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj75;
    struct sMinusNode2* __result_obj__0;
    # 391 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMinusNode2*)come_increment_ref_count(self, "09pre_op.nc", 391, 479),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 391, 480);
    # 393 "09pre_op.nc"
    __dec_obj75=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 393, 482);
    (__dec_obj75 ? __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 393, 481) :0);
    # 396 "09pre_op.nc"
        __result_obj__0 = (struct sMinusNode2*)come_increment_ref_count(self, "09pre_op.nc", 396, 483);
    come_call_finalizer(sMinusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 396, 486);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 396, 487):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMinusNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 396, 488);
    return __result_obj__0;
}

char*  sMinusNode2_kind(struct sMinusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 398 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMinusNode2","09pre_op.nc",398))), "09pre_op.nc", 398, 489);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 398, 490));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 398, 491));
    return __result_obj__0;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj76  ;
    struct sType*  __dec_obj77  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 407 "09pre_op.nc"
    if(!node_compile(self->value,info)) {
        # 404 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 407 "09pre_op.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 407, 492);
    # 409 "09pre_op.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 409, 493, "struct CVALUE* "), "09pre_op.nc", 409, 494)), "09pre_op.nc", 409, 495);
    # 411 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj76=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("-%s",come_value->c_value), "09pre_op.nc", 411, 497);
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 411, 496);
    # 412 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj77=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 412, 499);
    come_call_finalizer(sType_finalize, __dec_obj77,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 412, 498);
    # 413 "09pre_op.nc"
    come_value2->var=((void*)0);
    # 415 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 415, 500));
    # 417 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 419 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 419, 501);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 419, 502);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMinusNode2_finalize(struct sMinusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_finalize"; neo_current_frame = &fr;
    # 1 "sMinusNode2_finalize"
    # 3 "sMinusNode2_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sMinusNode2_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMinusNode2_finalize", 2, 484));
    }
    # 4 "sMinusNode2_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sMinusNode2_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sMinusNode2_finalize", 3, 485):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj78;
    struct sPlusPlusNode2* __result_obj__0;
    # 427 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPlusPlusNode2*)come_increment_ref_count(self, "09pre_op.nc", 427, 503),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 427, 504);
    # 429 "09pre_op.nc"
    __dec_obj78=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 429, 506);
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 429, 505) :0);
    # 432 "09pre_op.nc"
        __result_obj__0 = (struct sPlusPlusNode2*)come_increment_ref_count(self, "09pre_op.nc", 432, 507);
    come_call_finalizer(sPlusPlusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 432, 510);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 432, 511):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sPlusPlusNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 432, 512);
    return __result_obj__0;
}

char*  sPlusPlusNode2_kind(struct sPlusPlusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 434 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPlusPlusNode2","09pre_op.nc",434))), "09pre_op.nc", 434, 513);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 434, 514));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 434, 515));
    return __result_obj__0;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_compile"; neo_current_frame = &fr;
    struct sNode* value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj79  ;
    struct sType*  __dec_obj80  ;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value2, 0, sizeof(come_value2));
    # 439 "09pre_op.nc"
    value=(struct sNode*)come_increment_ref_count(self->value, "09pre_op.nc", 439, 516);
    # 445 "09pre_op.nc"
    if(!node_compile(value,info)) {
        # 442 "09pre_op.nc"
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 442, 517):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 445 "09pre_op.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 445, 518);
    # 451 "09pre_op.nc"
    if(reject_ref_optional_unary_operator("operator_plus_plus",left_value,info)) {
        # 448 "09pre_op.nc"
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 448, 519):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 448, 520);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 451 "09pre_op.nc"
    type=(struct sType* )come_increment_ref_count(left_value->type, "09pre_op.nc", 451, 521);
    # 453 "09pre_op.nc"
    const char* fun_name="operator_plus_plus";
    # 455 "09pre_op.nc"
    calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 455, 522),left_value,info);
    # 469 "09pre_op.nc"
    if(!calling_fun) {
        # 458 "09pre_op.nc"
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 458, 523, "struct CVALUE* "), "09pre_op.nc", 458, 524)), "09pre_op.nc", 458, 525);
        # 460 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj79=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("++%s",left_value->c_value), "09pre_op.nc", 460, 527);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 460, 526);
        # 461 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj80=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 461, 529);
        come_call_finalizer(sType_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 461, 528);
        # 462 "09pre_op.nc"
        come_value2->var=((void*)0);
        # 464 "09pre_op.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 464, 530));
        # 466 "09pre_op.nc"
        add_come_last_code(info,"%s",come_value2->c_value);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 469, 531);
    }
    # 469 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 469, 532):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 469, 533);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 469, 534);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_finalize"; neo_current_frame = &fr;
    # 1 "sPlusPlusNode2_finalize"
    # 3 "sPlusPlusNode2_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sPlusPlusNode2_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPlusPlusNode2_finalize", 2, 508));
    }
    # 4 "sPlusPlusNode2_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sPlusPlusNode2_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sPlusPlusNode2_finalize", 3, 509):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj81;
    struct sMinusMinusNode2* __result_obj__0;
    # 477 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMinusMinusNode2*)come_increment_ref_count(self, "09pre_op.nc", 477, 535),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 477, 536);
    # 479 "09pre_op.nc"
    __dec_obj81=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 479, 538);
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 479, 537) :0);
    # 482 "09pre_op.nc"
        __result_obj__0 = (struct sMinusMinusNode2*)come_increment_ref_count(self, "09pre_op.nc", 482, 539);
    come_call_finalizer(sMinusMinusNode2_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 482, 542);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 482, 543):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMinusMinusNode2_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 482, 544);
    return __result_obj__0;
}

char*  sMinusMinusNode2_kind(struct sMinusMinusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 484 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMinusMinusNode2","09pre_op.nc",484))), "09pre_op.nc", 484, 545);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 484, 546));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 484, 547));
    return __result_obj__0;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_compile"; neo_current_frame = &fr;
    struct sNode* value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    struct sType*  type  ;
    _Bool calling_fun;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj82  ;
    struct sType*  __dec_obj83  ;
    memset(&value, 0, sizeof(value));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type, 0, sizeof(type));
    memset(&calling_fun, 0, sizeof(calling_fun));
    memset(&come_value2, 0, sizeof(come_value2));
    # 489 "09pre_op.nc"
    value=(struct sNode*)come_increment_ref_count(self->value, "09pre_op.nc", 489, 548);
    # 495 "09pre_op.nc"
    if(!node_compile(value,info)) {
        # 492 "09pre_op.nc"
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 492, 549):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 495 "09pre_op.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 495, 550);
    # 501 "09pre_op.nc"
    if(reject_ref_optional_unary_operator("operator_minus_minus",left_value,info)) {
        # 498 "09pre_op.nc"
                __result_obj__0 = (_Bool)0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 498, 551):(void*)0);
        come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 498, 552);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 501 "09pre_op.nc"
    type=(struct sType* )come_increment_ref_count(left_value->type, "09pre_op.nc", 501, 553);
    # 503 "09pre_op.nc"
    const char* fun_name="operator_minus_minus";
    # 505 "09pre_op.nc"
    calling_fun=operator_overload_fun_self(type,fun_name,(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 505, 554),left_value,info);
    # 519 "09pre_op.nc"
    if(!calling_fun) {
        # 508 "09pre_op.nc"
        __right_value0 = (void*)0;
        come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 508, 555, "struct CVALUE* "), "09pre_op.nc", 508, 556)), "09pre_op.nc", 508, 557);
        # 510 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj82=come_value2->c_value,
        come_value2->c_value=(char* )come_increment_ref_count(xsprintf("--%s",left_value->c_value), "09pre_op.nc", 510, 559);
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 510, 558);
        # 511 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj83=come_value2->type,
        come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 511, 561);
        come_call_finalizer(sType_finalize, __dec_obj83,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 511, 560);
        # 512 "09pre_op.nc"
        come_value2->var=((void*)0);
        # 514 "09pre_op.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 514, 562));
        # 516 "09pre_op.nc"
        add_come_last_code(info,"%s",come_value2->c_value);
        come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 519, 563);
    }
    # 519 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 519, 564):(void*)0);
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 519, 565);
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 519, 566);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_finalize"; neo_current_frame = &fr;
    # 1 "sMinusMinusNode2_finalize"
    # 3 "sMinusMinusNode2_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sMinusMinusNode2_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMinusMinusNode2_finalize", 2, 540));
    }
    # 4 "sMinusMinusNode2_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sMinusMinusNode2_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sMinusMinusNode2_finalize", 3, 541):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock*  block  , _Bool clang, _Bool unsafe_block, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sBlock*  __dec_obj96  ;
    struct sNormalBlock* __result_obj__0;
    # 527 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNormalBlock*)come_increment_ref_count(self, "09pre_op.nc", 527, 567),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 527, 568);
    # 529 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj96=self->mBlock,
    self->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(block), "09pre_op.nc", 529, 715);
    come_call_finalizer(sBlock_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 529, 714);
    # 530 "09pre_op.nc"
    self->clang=clang;
    # 531 "09pre_op.nc"
    self->unsafe_block=unsafe_block;
    # 534 "09pre_op.nc"
        __result_obj__0 = (struct sNormalBlock*)come_increment_ref_count(self, "09pre_op.nc", 534, 716);
    come_call_finalizer(sNormalBlock_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 534, 719);
    neo_current_frame = fr.prev;
    come_call_finalizer(sNormalBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 534, 720);
    return __result_obj__0;
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_terminated"; neo_current_frame = &fr;
    # 536 "09pre_op.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sNormalBlock_kind(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 541 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sNormalBlock","09pre_op.nc",541))), "09pre_op.nc", 541, 721);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 541, 722));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 541, 723));
    return __result_obj__0;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_compile"; neo_current_frame = &fr;
    struct sBlock*  block  ;
    _Bool come_c;
    _Bool safe;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    memset(&block, 0, sizeof(block));
    memset(&come_c, 0, sizeof(come_c));
    memset(&safe, 0, sizeof(safe));
    # 546 "09pre_op.nc"
    block=self->mBlock;
    # 548 "09pre_op.nc"
    add_come_code(info,"{\n");
    # 550 "09pre_op.nc"
    come_c=gComeC;
    # 552 "09pre_op.nc"
    if(self->clang) {
        # 551 "09pre_op.nc"
        gComeC=(_Bool)1;
    }
    # 552 "09pre_op.nc"
    safe=gComeSafe;
    # 555 "09pre_op.nc"
    if(self->unsafe_block) {
        # 553 "09pre_op.nc"
        gComeSafe=(_Bool)0;
    }
    # 555 "09pre_op.nc"
    transpile_block(block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    # 557 "09pre_op.nc"
    add_come_code(info,"}\n");
    # 559 "09pre_op.nc"
    gComeC=come_c;
    # 560 "09pre_op.nc"
    gComeSafe=safe;
    # 562 "09pre_op.nc"
    __dec_obj97=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 562, 724);
    # 563 "09pre_op.nc"
    __dec_obj98=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 563, 725);
    # 565 "09pre_op.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj84;
    struct sVarTable*  __dec_obj95  ;
    memset(&result, 0, sizeof(result));
    # 3 "sBlock_clone"
    # 5 "sBlock_clone"
    if(self==(void*)0) {
        # 4 "sBlock_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sBlock_clone"
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 569, "struct sBlock* "), "sBlock_clone", 5, 570);
    # 7 "sBlock_clone"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 6 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj84=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 572);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 571);
    }
    # 8 "sBlock_clone"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 7 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj95=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 710);
        come_call_finalizer(sVarTable_finalize, __dec_obj95,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 709);
    }
    # 9 "sBlock_clone"
    if(self!=((void*)0)) {
        # 8 "sBlock_clone"
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    # 9 "sBlock_clone"
        __result_obj__0 = result;
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 713);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj94;
    memset(&result, 0, sizeof(result));
    # 3 "sVarTable_clone"
    # 5 "sVarTable_clone"
    if(self==(void*)0) {
        # 4 "sVarTable_clone"
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 573);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 574);
        return __result_obj__0;
    }
    # 5 "sVarTable_clone"
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 575, "struct sVarTable* "), "sVarTable_clone", 5, 576);
    # 7 "sVarTable_clone"
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        # 6 "sVarTable_clone"
        __right_value0 = (void*)0;
        __dec_obj94=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 13, 705);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 13, 704);
    }
    # 8 "sVarTable_clone"
    if(self!=((void*)0)) {
        # 7 "sVarTable_clone"
        result->mGlobal=self->mGlobal;
    }
    # 9 "sVarTable_clone"
    if(self!=((void*)0)) {
        # 8 "sVarTable_clone"
        result->mParent=self->mParent;
    }
    # 9 "sVarTable_clone"
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 706);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 707);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 708);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj86;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&it2, 0, sizeof(it2));
    # 3441 "./neo-c.h"
    # 3447 "./neo-c.h"
    if(self==((void*)0)) {
        # 3444 "./neo-c.h"
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3444, 577);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 587);
        return __result_obj__0;
    }
    # 3447 "./neo-c.h"
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3447, 588, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3447, 604)), "./neo-c.h", 3447, 605);
    # 3449 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj86=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3449, 606, "struct list$1char$ph*"), "./neo-c.h", 3449, 607)), "./neo-c.h", 3449, 609);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3449, 608);
    # 3471 "./neo-c.h"
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        # 3452 "./neo-c.h"
        # 3453 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sVar* ));
        # 3455 "./neo-c.h"
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3455, 625),(_Bool)1), "./neo-c.h", 3455, 626);
        # 3469 "./neo-c.h"
        if(1&&1) {
            # 3458 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3458, 666, "char* "), "./neo-c.h", 3458, 667),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3458, 686),(_Bool)0);
        }
        else if(1) {
            # 3461 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3461, 687, "char* "), "./neo-c.h", 3461, 688),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3461, 689),(_Bool)0);
        }
        else if(1) {
            # 3464 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3464, 690),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3464, 691),(_Bool)0);
        }
        else {
            # 3467 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3467, 692),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3467, 693),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 694);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 695);
    }
    # 3471 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3471, 696);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 697);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 698);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_16;
    memset(&i, 0, sizeof(i));
    memset(&i_16, 0, sizeof(i_16));
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 582);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_16=0    ;i_16<self->size;i_16++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_16]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_16] = come_decrement_ref_count(self->keys[i_16], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 583));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 584);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 585));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 586));
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    # 1 "sVar_finalize"
    # 3 "sVar_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sVar_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 578));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 579));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 580);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 581));
    }
                    neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj85;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 3338 "./neo-c.h"
    # 3340 "./neo-c.h"
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3340, 589, "char** "))), "./neo-c.h", 3340, 590);
    # 3341 "./neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3341, 591, "struct sVar** "))), "./neo-c.h", 3341, 592);
    # 3342 "./neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3342, 593, "unsigned int*"))), "./neo-c.h", 3342, 594);
    # 3343 "./neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3343, 595, "_Bool*"))), "./neo-c.h", 3343, 596);
    # 3351 "./neo-c.h"
    for(i=0    ;i<128;i++){
        # 3347 "./neo-c.h"
        self->hashes[i]=0;
        # 3348 "./neo-c.h"
        self->item_existance[i]=(_Bool)0;
    }
    # 3351 "./neo-c.h"
    self->size=128;
    # 3352 "./neo-c.h"
    self->len=0;
    # 3354 "./neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj85=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3354, 597, "struct list$1char$ph*"), "./neo-c.h", 3354, 598)), "./neo-c.h", 3354, 600);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3354, 599);
    # 3356 "./neo-c.h"
    self->it=0;
    # 3358 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3358, 601);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 602);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 603);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_17  ;
    # 3764 "./neo-c.h"
    # 3771 "./neo-c.h"
    if(self==((void*)0)) {
        # 3767 "./neo-c.h"
        # 3768 "./neo-c.h"
        memset(&result,0,sizeof(char* ));
        # 3769 "./neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3771 "./neo-c.h"
    self->key_list->it=self->key_list->head;
    # 3777 "./neo-c.h"
    if(self->key_list->it) {
        # 3774 "./neo-c.h"
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3777 "./neo-c.h"
    # 3778 "./neo-c.h"
    memset(&result_17,0,sizeof(char* ));
    # 3779 "./neo-c.h"
        __result_obj__0 = result_17;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
    # 3802 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_18  ;
    # 3783 "./neo-c.h"
    # 3790 "./neo-c.h"
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        # 3786 "./neo-c.h"
        # 3787 "./neo-c.h"
        memset(&result,0,sizeof(char* ));
        # 3788 "./neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3790 "./neo-c.h"
    self->key_list->it=self->key_list->it->next;
    # 3796 "./neo-c.h"
    if(self->key_list->it) {
        # 3793 "./neo-c.h"
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3796 "./neo-c.h"
    # 3797 "./neo-c.h"
    memset(&result_18,0,sizeof(char* ));
    # 3798 "./neo-c.h"
        __result_obj__0 = result_18;
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 3509 "./neo-c.h"
    # 3515 "./neo-c.h"
    if(self==((void*)0)) {
        # 3512 "./neo-c.h"
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 610);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 611);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 612);
        return __result_obj__0;
    }
    # 3515 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3516 "./neo-c.h"
    hash=key_hash%self->size;
    # 3517 "./neo-c.h"
    it=hash;
    # 3540 "./neo-c.h"
    while((_Bool)1) {
        # 3538 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3528 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3525 "./neo-c.h"
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 613);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 614);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 615);
                return __result_obj__0;
            }
            # 3531 "./neo-c.h"
            if(++it>=self->size) {
                # 3529 "./neo-c.h"
                it=0;
            }
            # 3534 "./neo-c.h"
            if(it==hash) {
                # 3532 "./neo-c.h"
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 616);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 617);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 618);
                return __result_obj__0;
            }
        }
        else {
            # 3536 "./neo-c.h"
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 619);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 620);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 621);
            return __result_obj__0;
        }
    }
    # 3540 "./neo-c.h"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 622);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 623);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 624);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char*  key  , struct sVar*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_put"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    int it;
    memset(&add_to_key_list, 0, sizeof(add_to_key_list));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 3968 "./neo-c.h"
    # 3974 "./neo-c.h"
    if(self==((void*)0)) {
        # 3971 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 627));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3971, 628);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3977 "./neo-c.h"
    if(self->len*2>=self->size) {
        # 3975 "./neo-c.h"
        map$2char$phsVar$ph_rehash(self);
    }
    # 3977 "./neo-c.h"
    add_to_key_list=(_Bool)0;
    # 3978 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3979 "./neo-c.h"
    hash=key_hash%self->size;
    # 3980 "./neo-c.h"
    it=hash;
    # 4040 "./neo-c.h"
    while((_Bool)1) {
        # 4038 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4008 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3988 "./neo-c.h"
                map$2char$phsVar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3996 "./neo-c.h"
                if(1) {
                    # 3990 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3990, 643));
                    # 3991 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3991, 644);
                }
                else {
                    # 3994 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 4003 "./neo-c.h"
                if(1) {
                    # 3997 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3997, 645);
                    # 3998 "./neo-c.h"
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 3998, 646);
                }
                else {
                    # 4001 "./neo-c.h"
                    self->items[it]=item;
                }
                # 4003 "./neo-c.h"
                self->hashes[it]=key_hash;
                # 4004 "./neo-c.h"
                add_to_key_list=(_Bool)1;
                # 4005 "./neo-c.h"
                break;
            }
            # 4011 "./neo-c.h"
            if(++it>=self->size) {
                # 4009 "./neo-c.h"
                it=0;
            }
            # 4016 "./neo-c.h"
            if(it==hash) {
                # 4012 "./neo-c.h"
                printf("unexpected error in map.insert\n");
                # 4013 "./neo-c.h"
                stackframe2(self);
                # 4014 "./neo-c.h"
                exit(2);
            }
        }
        else {
            # 4018 "./neo-c.h"
            self->item_existance[it]=(_Bool)1;
            # 4019 "./neo-c.h"
            self->hashes[it]=key_hash;
            # 4026 "./neo-c.h"
            if(1) {
                # 4021 "./neo-c.h"
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4021, 647);
            }
            else {
                # 4024 "./neo-c.h"
                self->keys[it]=key;
            }
            # 4033 "./neo-c.h"
            if(1) {
                # 4027 "./neo-c.h"
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4027, 648);
            }
            else {
                # 4030 "./neo-c.h"
                self->items[it]=item;
            }
            # 4033 "./neo-c.h"
            self->len++;
            # 4034 "./neo-c.h"
            add_to_key_list=(_Bool)1;
            # 4036 "./neo-c.h"
            break;
        }
    }
    # 4044 "./neo-c.h"
    if(add_to_key_list) {
        # 4041 "./neo-c.h"
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4041, 663));
    }
    # 4044 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4044, 664));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4044, 665);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sVar**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_19;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    memset(&old_size, 0, sizeof(old_size));
    memset(&size, 0, sizeof(size));
    memset(&keys, 0, sizeof(keys));
    memset(&items, 0, sizeof(items));
    memset(&hashes, 0, sizeof(hashes));
    memset(&item_existance, 0, sizeof(item_existance));
    memset(&i, 0, sizeof(i));
    memset(&len, 0, sizeof(len));
    memset(&i_19, 0, sizeof(i_19));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 629, "char** "))), "./neo-c.h", 3810, 630);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3811, 631, "struct sVar** "))), "./neo-c.h", 3811, 632);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 633, "unsigned int*"))), "./neo-c.h", 3812, 634);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 635, "_Bool*"))), "./neo-c.h", 3813, 636);
    # 3819 "./neo-c.h"
    for(i=0    ;i<size;i++){
        # 3815 "./neo-c.h"
        hashes[i]=0;
        # 3816 "./neo-c.h"
        item_existance[i]=(_Bool)0;
    }
    # 3819 "./neo-c.h"
    len=0;
    # 3854 "./neo-c.h"
    for(i_19=0    ;i_19<old_size;i_19++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_19]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_19];
        # 3827 "./neo-c.h"
        hash=key_hash%size;
        # 3828 "./neo-c.h"
        n=hash;
        # 3852 "./neo-c.h"
        while((_Bool)1) {
            # 3851 "./neo-c.h"
            if(item_existance[n]) {
                # 3836 "./neo-c.h"
                if(++n>=size) {
                    # 3834 "./neo-c.h"
                    n=0;
                }
                # 3841 "./neo-c.h"
                if(n==hash) {
                    # 3837 "./neo-c.h"
                    printf("unexpected error in map.rehash(1)\n");
                    # 3838 "./neo-c.h"
                    stackframe2(self);
                    # 3839 "./neo-c.h"
                    exit(2);
                }
            }
            else {
                # 3843 "./neo-c.h"
                item_existance[n]=(_Bool)1;
                # 3844 "./neo-c.h"
                hashes[n]=key_hash;
                # 3845 "./neo-c.h"
                keys[n]=self->keys[i_19];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_19];
                # 3848 "./neo-c.h"
                len++;
                # 3849 "./neo-c.h"
                break;
            }
        }
    }
    # 3854 "./neo-c.h"
    come_free((char*)self->items);
    # 3855 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 637));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 638));
    # 3857 "./neo-c.h"
    come_free((char*)self->keys);
    # 3859 "./neo-c.h"
    self->keys=keys;
    # 3860 "./neo-c.h"
    self->items=items;
    # 3861 "./neo-c.h"
    self->hashes=hashes;
    # 3862 "./neo-c.h"
    self->item_existance=item_existance;
    # 3864 "./neo-c.h"
    self->size=size;
    # 3865 "./neo-c.h"
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    # 3434 "./neo-c.h"
    pos=map$2char$phsVar$ph_key_position(self,key,by_pointer);
    # 3438 "./neo-c.h"
    if(pos>=0) {
        # 3436 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    memset(&pos, 0, sizeof(pos));
    memset(&it, 0, sizeof(it));
    # 3420 "./neo-c.h"
    if(self==((void*)0)) {
        # 3417 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 3420 "./neo-c.h"
    pos=0;
    # 3421 "./neo-c.h"
    it=self->key_list->head;
    # 3430 "./neo-c.h"
    while(it!=((void*)0)) {
        # 3426 "./neo-c.h"
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
            # 3424 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return pos;
        }
        # 3426 "./neo-c.h"
        it=it->next;
        # 3427 "./neo-c.h"
        pos++;
    }
    # 3430 "./neo-c.h"
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_20;
    int i_21;
    struct list_item$1char$ph* prev_it_22;
    struct list_item$1char$ph* it_23;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_24;
    struct list_item$1char$ph* prev_it_25;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_20, 0, sizeof(it_20));
    memset(&i_21, 0, sizeof(i_21));
    memset(&prev_it_22, 0, sizeof(prev_it_22));
    memset(&it_23, 0, sizeof(it_23));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_24, 0, sizeof(i_24));
    memset(&prev_it_25, 0, sizeof(prev_it_25));
    # 1899 "./neo-c.h"
    if(self==((void*)0)) {
        # 1896 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1902 "./neo-c.h"
    if(head<0) {
        # 1900 "./neo-c.h"
        head+=self->len;
    }
    # 1906 "./neo-c.h"
    if(tail<0) {
        # 1903 "./neo-c.h"
        tail+=self->len+1;
    }
    # 1912 "./neo-c.h"
    if(head>tail) {
        # 1907 "./neo-c.h"
        tmp=tail;
        # 1908 "./neo-c.h"
        tail=head;
        # 1909 "./neo-c.h"
        head=tmp;
    }
    # 1916 "./neo-c.h"
    if(head<0) {
        # 1913 "./neo-c.h"
        head=0;
    }
    # 1920 "./neo-c.h"
    if(tail>self->len) {
        # 1917 "./neo-c.h"
        tail=self->len;
    }
    # 1924 "./neo-c.h"
    if(head>=self->len) {
        # 1921 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1928 "./neo-c.h"
    if(head==tail) {
        # 1925 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2023 "./neo-c.h"
    if(head==0&&tail==self->len) {
        # 1930 "./neo-c.h"
        list$1char$ph_reset(self);
    }
    else if(head==0) {
        # 1933 "./neo-c.h"
        it=self->head;
        # 1934 "./neo-c.h"
        i=0;
        # 1956 "./neo-c.h"
        while(it!=((void*)0)) {
            # 1955 "./neo-c.h"
            if(i<tail) {
                # 1937 "./neo-c.h"
                prev_it=it;
                # 1939 "./neo-c.h"
                it=it->next;
                # 1940 "./neo-c.h"
                i++;
                # 1942 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 640);
                # 1944 "./neo-c.h"
                self->len--;
            }
            else if(i==tail) {
                # 1947 "./neo-c.h"
                self->head=it;
                # 1948 "./neo-c.h"
                self->head->prev=((void*)0);
                # 1949 "./neo-c.h"
                break;
            }
            else {
                # 1952 "./neo-c.h"
                it=it->next;
                # 1953 "./neo-c.h"
                i++;
            }
        }
    }
    else if(tail==self->len) {
        # 1958 "./neo-c.h"
        it_20=self->head;
        # 1959 "./neo-c.h"
        i_21=0;
        # 1981 "./neo-c.h"
        while(it_20!=((void*)0)) {
            # 1966 "./neo-c.h"
            if(i_21==head) {
                # 1962 "./neo-c.h"
                self->tail=it_20->prev;
                # 1963 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "./neo-c.h"
            if(i_21>=head) {
                # 1967 "./neo-c.h"
                prev_it_22=it_20;
                # 1969 "./neo-c.h"
                it_20=it_20->next;
                # 1970 "./neo-c.h"
                i_21++;
                # 1972 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_22, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 641);
                # 1974 "./neo-c.h"
                self->len--;
            }
            else {
                # 1977 "./neo-c.h"
                it_20=it_20->next;
                # 1978 "./neo-c.h"
                i_21++;
            }
        }
    }
    else {
        # 1983 "./neo-c.h"
        it_23=self->head;
        # 1985 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "./neo-c.h"
        tail_it=((void*)0);
        # 1989 "./neo-c.h"
        i_24=0;
        # 2015 "./neo-c.h"
        while(it_23!=((void*)0)) {
            # 1994 "./neo-c.h"
            if(i_24==head) {
                # 1992 "./neo-c.h"
                head_prev_it=it_23->prev;
            }
            # 1998 "./neo-c.h"
            if(i_24==tail) {
                # 1995 "./neo-c.h"
                tail_it=it_23;
            }
            # 2013 "./neo-c.h"
            if(i_24>=head&&i_24<tail) {
                # 2000 "./neo-c.h"
                prev_it_25=it_23;
                # 2002 "./neo-c.h"
                it_23=it_23->next;
                # 2003 "./neo-c.h"
                i_24++;
                # 2005 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 642);
                # 2007 "./neo-c.h"
                self->len--;
            }
            else {
                # 2010 "./neo-c.h"
                it_23=it_23->next;
                # 2011 "./neo-c.h"
                i_24++;
            }
        }
        # 2018 "./neo-c.h"
        if(head_prev_it!=((void*)0)) {
            # 2016 "./neo-c.h"
            head_prev_it->next=tail_it;
        }
        # 2021 "./neo-c.h"
        if(tail_it!=((void*)0)) {
            # 2019 "./neo-c.h"
            tail_it->prev=head_prev_it;
        }
    }
    # 2023 "./neo-c.h"
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
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1860 "./neo-c.h"
    if(self==((void*)0)) {
        # 1857 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1860 "./neo-c.h"
    it=self->head;
    # 1867 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1862 "./neo-c.h"
        prev_it=it;
        # 1863 "./neo-c.h"
        it=it->next;
        # 1864 "./neo-c.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 639);
    }
    # 1867 "./neo-c.h"
    self->head=((void*)0);
    # 1868 "./neo-c.h"
    self->tail=((void*)0);
    # 1870 "./neo-c.h"
    self->len=0;
    # 1872 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj87  ;
    struct list_item$1char$ph* litem_26;
    char*  __dec_obj88  ;
    struct list_item$1char$ph* litem_27;
    char*  __dec_obj89  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_26, 0, sizeof(litem_26));
    memset(&litem_27, 0, sizeof(litem_27));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 649));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 650, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 651);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj87=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 653);
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 652);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 654, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 655);
        # 1631 "./neo-c.h"
        litem_26->prev=self->head;
        # 1632 "./neo-c.h"
        litem_26->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj88=litem_26->item,
        litem_26->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 657);
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 656);
        # 1635 "./neo-c.h"
        self->tail=litem_26;
        # 1636 "./neo-c.h"
        self->head->next=litem_26;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 658, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 659);
        # 1641 "./neo-c.h"
        litem_27->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_27->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj89=litem_27->item,
        litem_27->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 661);
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 660);
        # 1645 "./neo-c.h"
        self->tail->next=litem_27;
        # 1646 "./neo-c.h"
        self->tail=litem_27;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 662));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj90  ;
    char*  __dec_obj91  ;
    struct sType*  __dec_obj92  ;
    char*  __dec_obj93  ;
    memset(&result, 0, sizeof(result));
    # 3 "sVar_clone"
    # 5 "sVar_clone"
    if(self==(void*)0) {
        # 4 "sVar_clone"
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 668);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 669);
        return __result_obj__0;
    }
    # 5 "sVar_clone"
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 670, "struct sVar* "), "sVar_clone", 5, 671);
    # 7 "sVar_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj90=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 672, "char* "), "sVar_clone", 6, 674);
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 673);
    }
    # 8 "sVar_clone"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 7 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj91=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 675, "char* "), "sVar_clone", 7, 677);
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 676);
    }
    # 9 "sVar_clone"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 8 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj92=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 679);
        come_call_finalizer(sType_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 678);
    }
    # 10 "sVar_clone"
    if(self!=((void*)0)) {
        # 9 "sVar_clone"
        result->mGlobal=self->mGlobal;
    }
    # 11 "sVar_clone"
    if(self!=((void*)0)) {
        # 10 "sVar_clone"
        result->mAllocaValue=self->mAllocaValue;
    }
    # 12 "sVar_clone"
    if(self!=((void*)0)) {
        # 11 "sVar_clone"
        result->mNoFree=self->mNoFree;
    }
    # 13 "sVar_clone"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 12 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj93=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 680, "char* "), "sVar_clone", 12, 682);
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 681);
    }
    # 14 "sVar_clone"
    if(self!=((void*)0)) {
        # 13 "sVar_clone"
        result->no_output_come_code=self->no_output_come_code;
    }
    # 14 "sVar_clone"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 683);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 684);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 685);
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_28;
    memset(&i, 0, sizeof(i));
    memset(&i_28, 0, sizeof(i_28));
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 699);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_28=0    ;i_28<self->size;i_28++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_28]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_28] = come_decrement_ref_count(self->keys[i_28], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 700));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 701);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 702));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 703));
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    # 1 "sBlock_finalize"
    # 3 "sBlock_finalize"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 2 "sBlock_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 711);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 712);
    }
        neo_current_frame = fr.prev;
}

static void sNormalBlock_finalize(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_finalize"; neo_current_frame = &fr;
    # 1 "sNormalBlock_finalize"
    # 3 "sNormalBlock_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sNormalBlock_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNormalBlock_finalize", 2, 717));
    }
    # 4 "sNormalBlock_finalize"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 3 "sNormalBlock_finalize"
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sNormalBlock_finalize}", 3, 718);
    }
        neo_current_frame = fr.prev;
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj99;
    struct sComplement* __result_obj__0;
    # 574 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sComplement*)come_increment_ref_count(self, "09pre_op.nc", 574, 726),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 574, 727);
    # 576 "09pre_op.nc"
    __dec_obj99=self->value,
    self->value=(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 576, 729);
    (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 576, 728) :0);
    # 579 "09pre_op.nc"
        __result_obj__0 = (struct sComplement*)come_increment_ref_count(self, "09pre_op.nc", 579, 730);
    come_call_finalizer(sComplement_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 579, 733);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 579, 734):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sComplement_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 579, 735);
    return __result_obj__0;
}

char*  sComplement_kind(struct sComplement* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 581 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sComplement","09pre_op.nc",581))), "09pre_op.nc", 581, 736);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 581, 737));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 581, 738));
    return __result_obj__0;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_compile"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value2  ;
    char*  __dec_obj100  ;
    struct sType*  __dec_obj101  ;
    _Bool __result_obj__0;
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value2, 0, sizeof(come_value2));
    # 590 "09pre_op.nc"
    if(!node_compile(self->value,info)) {
        # 587 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 590 "09pre_op.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 590, 739);
    # 592 "09pre_op.nc"
    __right_value0 = (void*)0;
    come_value2=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 592, 740, "struct CVALUE* "), "09pre_op.nc", 592, 741)), "09pre_op.nc", 592, 742);
    # 594 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj100=come_value2->c_value,
    come_value2->c_value=(char* )come_increment_ref_count(xsprintf("~%s",come_value->c_value), "09pre_op.nc", 594, 744);
    __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 594, 743);
    # 595 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj101=come_value2->type,
    come_value2->type=(struct sType* )come_increment_ref_count(sType_clone(come_value->type), "09pre_op.nc", 595, 746);
    come_call_finalizer(sType_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 595, 745);
    # 596 "09pre_op.nc"
    come_value2->var=((void*)0);
    # 598 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value2, "09pre_op.nc", 598, 747));
    # 600 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value2->c_value);
    # 602 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 602, 748);
    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 602, 749);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sComplement_finalize(struct sComplement* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_finalize"; neo_current_frame = &fr;
    # 1 "sComplement_finalize"
    # 3 "sComplement_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sComplement_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sComplement_finalize", 2, 731));
    }
    # 4 "sComplement_finalize"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 3 "sComplement_finalize"
        ((self->value) ? self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0,(void*)0, "sComplement_finalize", 3, 732):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj102;
    struct sParenNode* __result_obj__0;
    # 610 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sParenNode*)come_increment_ref_count(self, "09pre_op.nc", 610, 750),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 610, 751);
    # 612 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj102=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "09pre_op.nc", 612, 753);
    (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 612, 752) :0);
    # 615 "09pre_op.nc"
        __result_obj__0 = (struct sParenNode*)come_increment_ref_count(self, "09pre_op.nc", 615, 754);
    come_call_finalizer(sParenNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 615, 757);
    neo_current_frame = fr.prev;
    come_call_finalizer(sParenNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 615, 758);
    return __result_obj__0;
}

char*  sParenNode_kind(struct sParenNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 617 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sParenNode","09pre_op.nc",617))), "09pre_op.nc", 617, 759);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 617, 760));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 617, 761));
    return __result_obj__0;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_compile"; neo_current_frame = &fr;
    struct sNode* left;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj103  ;
    struct sType*  __dec_obj104  ;
    _Bool __result_obj__0;
    memset(&left, 0, sizeof(left));
    memset(&left_value, 0, sizeof(left_value));
    memset(&come_value, 0, sizeof(come_value));
    # 622 "09pre_op.nc"
    left=self->mLeft;
    # 628 "09pre_op.nc"
    if(!node_compile(left,info)) {
        # 625 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 628 "09pre_op.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 628, 762);
    # 630 "09pre_op.nc"
    __right_value0 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 630, 763, "struct CVALUE* "), "09pre_op.nc", 630, 764)), "09pre_op.nc", 630, 765);
    # 632 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj103=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s)",left_value->c_value), "09pre_op.nc", 632, 767);
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 632, 766);
    # 633 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj104=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(left_value->type), "09pre_op.nc", 633, 769);
    come_call_finalizer(sType_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 633, 768);
    # 634 "09pre_op.nc"
    come_value->var=((void*)0);
    # 636 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 638 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 638, 770));
    # 640 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 640, 771);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 640, 772);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sParenNode_finalize(struct sParenNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_finalize"; neo_current_frame = &fr;
    # 1 "sParenNode_finalize"
    # 3 "sParenNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sParenNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sParenNode_finalize", 2, 755));
    }
    # 4 "sParenNode_finalize"
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        # 3 "sParenNode_finalize"
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sParenNode_finalize", 3, 756):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType*  type  , struct sNode* left, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  __dec_obj105  ;
    struct sNode* __dec_obj106;
    struct sCastNode* __result_obj__0;
    # 648 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sCastNode*)come_increment_ref_count(self, "09pre_op.nc", 648, 773),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 648, 774);
    # 650 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj105=self->mType,
    self->mType=(struct sType* )come_increment_ref_count(sType_clone(type), "09pre_op.nc", 650, 776);
    come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 650, 775);
    # 651 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj106=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left), "09pre_op.nc", 651, 778);
    (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 651, 777) :0);
    # 654 "09pre_op.nc"
        __result_obj__0 = (struct sCastNode*)come_increment_ref_count(self, "09pre_op.nc", 654, 779);
    come_call_finalizer(sCastNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 654, 783);
    neo_current_frame = fr.prev;
    come_call_finalizer(sCastNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 654, 784);
    return __result_obj__0;
}

char*  sCastNode_kind(struct sCastNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 656 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sCastNode","09pre_op.nc",656))), "09pre_op.nc", 656, 785);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 656, 786));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 656, 787));
    return __result_obj__0;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_compile"; neo_current_frame = &fr;
    struct sType*  type  ;
    struct sNode* left;
    void* __right_value0 = (void*)0;
    struct CVALUE*  left_value  ;
    void* __right_value1 = (void*)0;
    struct sType*  type2  ;
    struct sType*  type3  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj107  ;
    struct sType*  __dec_obj108  ;
    _Bool __result_obj__0;
    memset(&type, 0, sizeof(type));
    memset(&left, 0, sizeof(left));
    memset(&left_value, 0, sizeof(left_value));
    memset(&type2, 0, sizeof(type2));
    memset(&type3, 0, sizeof(type3));
    memset(&come_value, 0, sizeof(come_value));
    # 665 "09pre_op.nc"
    if(gComeSafe) {
        # 662 "09pre_op.nc"
        err_msg(info,"Cast is not safe code");
        # 663 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 665 "09pre_op.nc"
    type=self->mType;
    # 666 "09pre_op.nc"
    left=self->mLeft;
    # 672 "09pre_op.nc"
    if(!node_compile(left,info)) {
        # 669 "09pre_op.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 672 "09pre_op.nc"
    left_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "09pre_op.nc", 672, 788);
    # 674 "09pre_op.nc"
    __right_value0 = (void*)0;
    type2=(struct sType* )come_increment_ref_count(solve_generics(((struct sType* )(__right_value0=sType_clone(type))),info->generics_type,info), "09pre_op.nc", 674, 789);
    come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 674, 790);
    # 676 "09pre_op.nc"
    __right_value0 = (void*)0;
    type3=(struct sType* )come_increment_ref_count(solve_method_generics(type2,info), "09pre_op.nc", 676, 791);
    # 678 "09pre_op.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 678, 792, "struct CVALUE* "), "09pre_op.nc", 678, 793)), "09pre_op.nc", 678, 794);
    # 680 "09pre_op.nc"
    cast_type(type3,left_value->type,left_value,info);
    # 682 "09pre_op.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj107=come_value->c_value,
    come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s)%s",((char* )(__right_value0=make_type_name_string(type3,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0))),left_value->c_value), "09pre_op.nc", 682, 796);
    __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 682, 795);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 682, 797));
    # 683 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj108=come_value->type,
    come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type3), "09pre_op.nc", 683, 799);
    come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 683, 798);
    # 684 "09pre_op.nc"
    come_value->var=left_value->var;
    # 685 "09pre_op.nc"
    come_value->mCastValue=(_Bool)1;
    # 687 "09pre_op.nc"
    add_come_last_code(info,"%s",come_value->c_value);
    # 689 "09pre_op.nc"
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 689, 800));
    # 691 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(CVALUE_finalize, left_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 801);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 802);
    come_call_finalizer(sType_finalize, type3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 803);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 691, 804);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sCastNode_finalize(struct sCastNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_finalize"; neo_current_frame = &fr;
    # 1 "sCastNode_finalize"
    # 3 "sCastNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sCastNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sCastNode_finalize", 2, 780));
    }
    # 4 "sCastNode_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 3 "sCastNode_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sCastNode_finalize}", 3, 781);
    }
    # 5 "sCastNode_finalize"
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        # 4 "sCastNode_finalize"
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0,(void*)0, "sCastNode_finalize", 4, 782):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_normal_block"; neo_current_frame = &fr;
    int sline_real;
    void* __right_value0 = (void*)0;
    struct sBlock*  block  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value1;
    struct sNormalBlock* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&block, 0, sizeof(block));
    # 697 "09pre_op.nc"
    sline_real=info->sline_real;
    # 698 "09pre_op.nc"
    info->sline_real=info->sline;
    # 699 "09pre_op.nc"
    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "09pre_op.nc", 699, 805);
    # 701 "09pre_op.nc"
    info->sline_real=sline_real;
    # 703 "09pre_op.nc"
        __right_value0 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 703, 808, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value1=sNormalBlock_initialize((struct sNormalBlock* )come_increment_ref_count((struct sNormalBlock *)come_calloc(1, sizeof(struct sNormalBlock )*(1), "09pre_op.nc", 703, 806, "struct sNormalBlock* "), "09pre_op.nc", 703, 807),block,clang,unsafe_block,info))), "09pre_op.nc", 703, 809);
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    _inf_value1->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value1)), "09pre_op.nc", 703, 818);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 703, 819);
    come_call_finalizer(sNormalBlock_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 703, 820);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 703, 821):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 703, 822):(void*)0);
    return __result_obj__0;
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNormalBlock_clone"; neo_current_frame = &fr;
    struct sNormalBlock* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNormalBlock*  result  ;
    char*  __dec_obj109  ;
    struct sBlock*  __dec_obj110  ;
    memset(&result, 0, sizeof(result));
    # 3 "sNormalBlock_clone"
    # 5 "sNormalBlock_clone"
    if(self==(void*)0) {
        # 4 "sNormalBlock_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sNormalBlock_clone"
    result=(struct sNormalBlock* )come_increment_ref_count((struct sNormalBlock *)come_calloc(1, sizeof(struct sNormalBlock )*(1), "sNormalBlock_clone", 5, 810, "struct sNormalBlock* "), "sNormalBlock_clone", 5, 811);
    # 7 "sNormalBlock_clone"
    if(self!=((void*)0)) {
        # 6 "sNormalBlock_clone"
        result->sline=self->sline;
    }
    # 8 "sNormalBlock_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sNormalBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj109=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sNormalBlock_clone", 7, 812, "char* "), "sNormalBlock_clone", 7, 814);
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "sNormalBlock_clone", 7, 813);
    }
    # 9 "sNormalBlock_clone"
    if(self!=((void*)0)) {
        # 8 "sNormalBlock_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sNormalBlock_clone"
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        # 9 "sNormalBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj110=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sNormalBlock_clone", 9, 816);
        come_call_finalizer(sBlock_finalize, __dec_obj110,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sNormalBlock_clone", 9, 815);
    }
    # 11 "sNormalBlock_clone"
    if(self!=((void*)0)) {
        # 10 "sNormalBlock_clone"
        result->clang=self->clang;
    }
    # 12 "sNormalBlock_clone"
    if(self!=((void*)0)) {
        # 11 "sNormalBlock_clone"
        result->unsafe_block=self->unsafe_block;
    }
    # 12 "sNormalBlock_clone"
        __result_obj__0 = result;
    come_call_finalizer(sNormalBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sNormalBlock_clone}", 12, 817);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "craete_logical_denial"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value2;
    struct sLogicalDenial* _inf_obj_value2;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    # 708 "09pre_op.nc"
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 708, 826, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value2=sLogicalDenial_initialize((struct sLogicalDenial* )come_increment_ref_count((struct sLogicalDenial *)come_calloc(1, sizeof(struct sLogicalDenial )*(1), "09pre_op.nc", 708, 823, "struct sLogicalDenial* "), "09pre_op.nc", 708, 824),(struct sNode*)come_increment_ref_count(sNode_clone(node), "09pre_op.nc", 708, 825),info))), "09pre_op.nc", 708, 827);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value2)), "09pre_op.nc", 708, 836);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 708, 837):(void*)0);
    come_call_finalizer(sLogicalDenial_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 708, 838);
    ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 708, 839):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 708, 840):(void*)0);
    return __result_obj__0;
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial_clone"; neo_current_frame = &fr;
    struct sLogicalDenial* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLogicalDenial*  result  ;
    char*  __dec_obj111  ;
    struct sNode* __dec_obj112;
    memset(&result, 0, sizeof(result));
    # 3 "sLogicalDenial_clone"
    # 5 "sLogicalDenial_clone"
    if(self==(void*)0) {
        # 4 "sLogicalDenial_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sLogicalDenial_clone"
    result=(struct sLogicalDenial* )come_increment_ref_count((struct sLogicalDenial *)come_calloc(1, sizeof(struct sLogicalDenial )*(1), "sLogicalDenial_clone", 5, 828, "struct sLogicalDenial* "), "sLogicalDenial_clone", 5, 829);
    # 7 "sLogicalDenial_clone"
    if(self!=((void*)0)) {
        # 6 "sLogicalDenial_clone"
        result->sline=self->sline;
    }
    # 8 "sLogicalDenial_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sLogicalDenial_clone"
        __right_value0 = (void*)0;
        __dec_obj111=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLogicalDenial_clone", 7, 830, "char* "), "sLogicalDenial_clone", 7, 832);
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0, (void*)0, "sLogicalDenial_clone", 7, 831);
    }
    # 9 "sLogicalDenial_clone"
    if(self!=((void*)0)) {
        # 8 "sLogicalDenial_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sLogicalDenial_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sLogicalDenial_clone"
        __right_value0 = (void*)0;
        __dec_obj112=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sLogicalDenial_clone", 9, 834);
        (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0, (void*)0, "sLogicalDenial_clone", 9, 833) :0);
    }
    # 10 "sLogicalDenial_clone"
        __result_obj__0 = result;
    come_call_finalizer(sLogicalDenial_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLogicalDenial_clone}", 10, 835);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cast_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sCastNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 713 "09pre_op.nc"
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 713, 843, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value1=sCastNode_initialize((struct sCastNode* )come_increment_ref_count((struct sCastNode *)come_calloc(1, sizeof(struct sCastNode )*(1), "09pre_op.nc", 713, 841, "struct sCastNode* "), "09pre_op.nc", 713, 842),type,node,info))), "09pre_op.nc", 713, 844);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "09pre_op.nc", 713, 855);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 713, 856):(void*)0);
    come_call_finalizer(sCastNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 713, 857);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 713, 858):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 713, 859):(void*)0);
    return __result_obj__0;
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sCastNode_clone"; neo_current_frame = &fr;
    struct sCastNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sCastNode*  result  ;
    char*  __dec_obj113  ;
    struct sType*  __dec_obj114  ;
    struct sNode* __dec_obj115;
    memset(&result, 0, sizeof(result));
    # 3 "sCastNode_clone"
    # 5 "sCastNode_clone"
    if(self==(void*)0) {
        # 4 "sCastNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sCastNode_clone"
    result=(struct sCastNode* )come_increment_ref_count((struct sCastNode *)come_calloc(1, sizeof(struct sCastNode )*(1), "sCastNode_clone", 5, 845, "struct sCastNode* "), "sCastNode_clone", 5, 846);
    # 7 "sCastNode_clone"
    if(self!=((void*)0)) {
        # 6 "sCastNode_clone"
        result->sline=self->sline;
    }
    # 8 "sCastNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sCastNode_clone"
        __right_value0 = (void*)0;
        __dec_obj113=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sCastNode_clone", 7, 847, "char* "), "sCastNode_clone", 7, 849);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "sCastNode_clone", 7, 848);
    }
    # 9 "sCastNode_clone"
    if(self!=((void*)0)) {
        # 8 "sCastNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sCastNode_clone"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 9 "sCastNode_clone"
        __right_value0 = (void*)0;
        __dec_obj114=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sCastNode_clone", 9, 851);
        come_call_finalizer(sType_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sCastNode_clone", 9, 850);
    }
    # 11 "sCastNode_clone"
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        # 10 "sCastNode_clone"
        __right_value0 = (void*)0;
        __dec_obj115=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sCastNode_clone", 10, 853);
        (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0, (void*)0, "sCastNode_clone", 10, 852) :0);
    }
    # 11 "sCastNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sCastNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sCastNode_clone}", 11, 854);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reffence_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value4;
    struct sRefferenceNode* _inf_obj_value4;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 718 "09pre_op.nc"
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 718, 863, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value1=sRefferenceNode_initialize((struct sRefferenceNode* )come_increment_ref_count((struct sRefferenceNode *)come_calloc(1, sizeof(struct sRefferenceNode )*(1), "09pre_op.nc", 718, 860, "struct sRefferenceNode* "), "09pre_op.nc", 718, 861),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 718, 862),info))), "09pre_op.nc", 718, 864);
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    _inf_value4->left_value=(void*)sRefferenceNode_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value4)), "09pre_op.nc", 718, 873);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 718, 874):(void*)0);
    come_call_finalizer(sRefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 718, 875);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 718, 876):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 718, 877):(void*)0);
    return __result_obj__0;
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRefferenceNode_clone"; neo_current_frame = &fr;
    struct sRefferenceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sRefferenceNode*  result  ;
    char*  __dec_obj116  ;
    struct sNode* __dec_obj117;
    memset(&result, 0, sizeof(result));
    # 3 "sRefferenceNode_clone"
    # 5 "sRefferenceNode_clone"
    if(self==(void*)0) {
        # 4 "sRefferenceNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sRefferenceNode_clone"
    result=(struct sRefferenceNode* )come_increment_ref_count((struct sRefferenceNode *)come_calloc(1, sizeof(struct sRefferenceNode )*(1), "sRefferenceNode_clone", 5, 865, "struct sRefferenceNode* "), "sRefferenceNode_clone", 5, 866);
    # 7 "sRefferenceNode_clone"
    if(self!=((void*)0)) {
        # 6 "sRefferenceNode_clone"
        result->sline=self->sline;
    }
    # 8 "sRefferenceNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sRefferenceNode_clone"
        __right_value0 = (void*)0;
        __dec_obj116=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sRefferenceNode_clone", 7, 867, "char* "), "sRefferenceNode_clone", 7, 869);
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0, (void*)0, "sRefferenceNode_clone", 7, 868);
    }
    # 9 "sRefferenceNode_clone"
    if(self!=((void*)0)) {
        # 8 "sRefferenceNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sRefferenceNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sRefferenceNode_clone"
        __right_value0 = (void*)0;
        __dec_obj117=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sRefferenceNode_clone", 9, 871);
        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0, (void*)0, "sRefferenceNode_clone", 9, 870) :0);
    }
    # 10 "sRefferenceNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sRefferenceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sRefferenceNode_clone}", 10, 872);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "reverse_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value5;
    struct sReverseNode* _inf_obj_value5;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 723 "09pre_op.nc"
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 723, 881, "struct sNode");
    _inf_obj_value5=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value1=sReverseNode_initialize((struct sReverseNode* )come_increment_ref_count((struct sReverseNode *)come_calloc(1, sizeof(struct sReverseNode )*(1), "09pre_op.nc", 723, 878, "struct sReverseNode* "), "09pre_op.nc", 723, 879),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 723, 880),info))), "09pre_op.nc", 723, 882);
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReverseNode_finalize;
    _inf_value5->clone=(void*)sReverseNode_clone;
    _inf_value5->compile=(void*)sReverseNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReverseNode_kind;
    _inf_value5->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value5)), "09pre_op.nc", 723, 891);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 723, 892):(void*)0);
    come_call_finalizer(sReverseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 723, 893);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 723, 894):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 723, 895):(void*)0);
    return __result_obj__0;
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sReverseNode_clone"; neo_current_frame = &fr;
    struct sReverseNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sReverseNode*  result  ;
    char*  __dec_obj118  ;
    struct sNode* __dec_obj119;
    memset(&result, 0, sizeof(result));
    # 3 "sReverseNode_clone"
    # 5 "sReverseNode_clone"
    if(self==(void*)0) {
        # 4 "sReverseNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sReverseNode_clone"
    result=(struct sReverseNode* )come_increment_ref_count((struct sReverseNode *)come_calloc(1, sizeof(struct sReverseNode )*(1), "sReverseNode_clone", 5, 883, "struct sReverseNode* "), "sReverseNode_clone", 5, 884);
    # 7 "sReverseNode_clone"
    if(self!=((void*)0)) {
        # 6 "sReverseNode_clone"
        result->sline=self->sline;
    }
    # 8 "sReverseNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sReverseNode_clone"
        __right_value0 = (void*)0;
        __dec_obj118=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sReverseNode_clone", 7, 885, "char* "), "sReverseNode_clone", 7, 887);
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0, (void*)0, "sReverseNode_clone", 7, 886);
    }
    # 9 "sReverseNode_clone"
    if(self!=((void*)0)) {
        # 8 "sReverseNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sReverseNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sReverseNode_clone"
        __right_value0 = (void*)0;
        __dec_obj119=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sReverseNode_clone", 9, 889);
        (__dec_obj119 ? __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0, (void*)0, "sReverseNode_clone", 9, 888) :0);
    }
    # 10 "sReverseNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sReverseNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sReverseNode_clone}", 10, 890);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct sType*  type_  , char*  initializer  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj120  ;
    struct sType*  __dec_obj121  ;
    struct sArrayInitializer* __result_obj__0;
    # 730 "09pre_op.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sArrayInitializer*)come_increment_ref_count(self, "09pre_op.nc", 730, 896),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 730, 897);
    # 732 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj120=self->initializer,
    self->initializer=(char* )come_increment_ref_count((char* )come_memdup(initializer, "09pre_op.nc", 732, 898, "char* "), "09pre_op.nc", 732, 900);
    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 732, 899);
    # 733 "09pre_op.nc"
    __right_value0 = (void*)0;
    __dec_obj121=self->type_,
    self->type_=(struct sType* )come_increment_ref_count(sType_clone(type_), "09pre_op.nc", 733, 902);
    come_call_finalizer(sType_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 733, 901);
    # 736 "09pre_op.nc"
        __result_obj__0 = (struct sArrayInitializer*)come_increment_ref_count(self, "09pre_op.nc", 736, 903);
    come_call_finalizer(sArrayInitializer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 736, 907);
    (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 736, 908));
    neo_current_frame = fr.prev;
    come_call_finalizer(sArrayInitializer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "09pre_op.nc}", 736, 909);
    return __result_obj__0;
}

char*  sArrayInitializer_kind(struct sArrayInitializer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 738 "09pre_op.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sArrayInitializer","09pre_op.nc",738))), "09pre_op.nc", 738, 910);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 738, 911));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "09pre_op.nc", 738, 912));
    return __result_obj__0;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_compile"; neo_current_frame = &fr;
    struct sType*  type_  ;
    char*  initializer  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct CVALUE*  come_value  ;
    char*  __dec_obj122  ;
    struct sType*  __dec_obj123  ;
    struct CVALUE*  come_value_29  ;
    char*  __dec_obj124  ;
    void* __right_value2 = (void*)0;
    struct sType*  __dec_obj125  ;
    _Bool __result_obj__0;
    memset(&type_, 0, sizeof(type_));
    memset(&initializer, 0, sizeof(initializer));
    memset(&come_value, 0, sizeof(come_value));
    memset(&come_value_29, 0, sizeof(come_value_29));
    # 743 "09pre_op.nc"
    type_=(struct sType* )come_increment_ref_count(self->type_, "09pre_op.nc", 743, 913);
    # 744 "09pre_op.nc"
    initializer=(char* )come_increment_ref_count(self->initializer, "09pre_op.nc", 744, 914);
    # 767 "09pre_op.nc"
    if(type_) {
        # 747 "09pre_op.nc"
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 747, 915, "struct CVALUE* "), "09pre_op.nc", 747, 916)), "09pre_op.nc", 747, 917);
        # 749 "09pre_op.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj122=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(xsprintf("(%s)%s",((char* )(__right_value0=make_type_name_string(type_,info,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0))),initializer), "09pre_op.nc", 749, 919);
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 749, 918);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "09pre_op.nc", 749, 920));
        # 751 "09pre_op.nc"
        __right_value0 = (void*)0;
        __dec_obj123=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(type_), "09pre_op.nc", 751, 922);
        come_call_finalizer(sType_finalize, __dec_obj123,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 751, 921);
        # 752 "09pre_op.nc"
        come_value->var=((void*)0);
        # 754 "09pre_op.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "09pre_op.nc", 754, 923));
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 767, 924);
    }
    else {
        # 757 "09pre_op.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value_29=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "09pre_op.nc", 757, 925, "struct CVALUE* "), "09pre_op.nc", 757, 926)), "09pre_op.nc", 757, 927);
        # 759 "09pre_op.nc"
        __dec_obj124=come_value_29->c_value,
        come_value_29->c_value=(char* )come_increment_ref_count(initializer, "09pre_op.nc", 759, 929);
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 759, 928);
        # 760 "09pre_op.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj125=come_value_29->type,
        come_value_29->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "09pre_op.nc", 760, 930, "struct sType* "), "09pre_op.nc", 760, 931),(char*)come_increment_ref_count(xsprintf("void"), "09pre_op.nc", 760, 932),(_Bool)0,info,(_Bool)0,0), "09pre_op.nc", 760, 934);
        come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc", 760, 933);
        # 761 "09pre_op.nc"
        come_value_29->type->mPointerNum++;
        # 762 "09pre_op.nc"
        come_value_29->var=((void*)0);
        # 764 "09pre_op.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value_29, "09pre_op.nc", 764, 935));
        come_call_finalizer(CVALUE_finalize, come_value_29, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 767, 936);
    }
    # 767 "09pre_op.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 767, 937);
    (initializer = come_decrement_ref_count(initializer, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 767, 938));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_finalize"; neo_current_frame = &fr;
    # 1 "sArrayInitializer_finalize"
    # 3 "sArrayInitializer_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sArrayInitializer_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sArrayInitializer_finalize", 2, 904));
    }
    # 4 "sArrayInitializer_finalize"
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        # 3 "sArrayInitializer_finalize"
        (self->initializer = come_decrement_ref_count(self->initializer, (void*)0, (void*)0, 0, 0, (void*)0, "sArrayInitializer_finalize", 3, 905));
    }
    # 5 "sArrayInitializer_finalize"
    if(self!=((void*)0)&&self->type_!=((void*)0)) {
        # 4 "sArrayInitializer_finalize"
        come_call_finalizer(sType_finalize, self->type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sArrayInitializer_finalize}", 4, 906);
    }
        neo_current_frame = fr.prev;
}

struct sNode* create_defference_node(struct sNode* value, _Bool quote, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_defference_node"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value6;
    struct sDerefferenceNode* _inf_obj_value6;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    # 773 "09pre_op.nc"
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 773, 942, "struct sNode");
    _inf_obj_value6=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value1=sDerefferenceNode_initialize((struct sDerefferenceNode* )come_increment_ref_count((struct sDerefferenceNode *)come_calloc(1, sizeof(struct sDerefferenceNode )*(1), "09pre_op.nc", 773, 939, "struct sDerefferenceNode* "), "09pre_op.nc", 773, 940),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 773, 941),quote,info))), "09pre_op.nc", 773, 943);
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sDerefferenceNode_finalize;
    _inf_value6->clone=(void*)sDerefferenceNode_clone;
    _inf_value6->compile=(void*)sDerefferenceNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sDerefferenceNode_kind;
    _inf_value6->left_value=(void*)sDerefferenceNode_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value6)), "09pre_op.nc", 773, 952);
    ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 773, 953):(void*)0);
    come_call_finalizer(sDerefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 773, 954);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 773, 955):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 773, 956):(void*)0);
    return __result_obj__0;
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sDerefferenceNode_clone"; neo_current_frame = &fr;
    struct sDerefferenceNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sDerefferenceNode*  result  ;
    char*  __dec_obj126  ;
    struct sNode* __dec_obj127;
    memset(&result, 0, sizeof(result));
    # 3 "sDerefferenceNode_clone"
    # 5 "sDerefferenceNode_clone"
    if(self==(void*)0) {
        # 4 "sDerefferenceNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sDerefferenceNode_clone"
    result=(struct sDerefferenceNode* )come_increment_ref_count((struct sDerefferenceNode *)come_calloc(1, sizeof(struct sDerefferenceNode )*(1), "sDerefferenceNode_clone", 5, 944, "struct sDerefferenceNode* "), "sDerefferenceNode_clone", 5, 945);
    # 7 "sDerefferenceNode_clone"
    if(self!=((void*)0)) {
        # 6 "sDerefferenceNode_clone"
        result->sline=self->sline;
    }
    # 8 "sDerefferenceNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sDerefferenceNode_clone"
        __right_value0 = (void*)0;
        __dec_obj126=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sDerefferenceNode_clone", 7, 946, "char* "), "sDerefferenceNode_clone", 7, 948);
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "sDerefferenceNode_clone", 7, 947);
    }
    # 9 "sDerefferenceNode_clone"
    if(self!=((void*)0)) {
        # 8 "sDerefferenceNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sDerefferenceNode_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sDerefferenceNode_clone"
        __right_value0 = (void*)0;
        __dec_obj127=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sDerefferenceNode_clone", 9, 950);
        (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0, (void*)0, "sDerefferenceNode_clone", 9, 949) :0);
    }
    # 11 "sDerefferenceNode_clone"
    if(self!=((void*)0)) {
        # 10 "sDerefferenceNode_clone"
        result->mQuote=self->mQuote;
    }
    # 11 "sDerefferenceNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sDerefferenceNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sDerefferenceNode_clone}", 11, 951);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* pre_position_operator(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "pre_position_operator"; neo_current_frame = &fr;
    _Bool refference;
    char* p;
    int sline;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    _Bool squort;
    _Bool dquort;
    int nest;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value7;
    struct sArrayInitializer* _inf_obj_value7;
    void* __right_value3 = (void*)0;
    struct sNode* __result_obj__0;
    struct sNode* node;
    struct sNode* _inf_value8;
    struct sLogicalDenial* _inf_obj_value8;
    struct sNode* node_30;
    struct sNode* _inf_value9;
    struct sLogicalDenial2* _inf_obj_value9;
    struct sNode* node_31;
    struct sNode* _inf_value10;
    struct sMinusMinusNode2* _inf_obj_value10;
    struct sNode* node_32;
    struct sNode* _inf_value11;
    struct sMinusNode2* _inf_obj_value11;
    struct sNode* node_33;
    struct sNode* _inf_value12;
    struct sPlusPlusNode2* _inf_obj_value12;
    struct sNode* node_34;
    struct sNode* _inf_value13;
    struct sComplement* _inf_obj_value13;
    _Bool quote;
    _Bool no_assign;
    struct sNode* value;
    struct sNode* _inf_value14;
    struct sDerefferenceNode* _inf_obj_value14;
    struct sNode* value_35;
    struct sNode* _inf_value15;
    struct sRefferenceNode* _inf_obj_value15;
    struct sNode* value_36;
    struct sNode* _inf_value16;
    struct sReverseNode* _inf_obj_value16;
    _Bool cast_expression_flag;
    _Bool struct_initializer_flag;
    char* p_37;
    int sline_38;
    char* p2;
    int sline2;
    char*  word  ;
    char*  __dec_obj141  ;
    _Bool tuple_expression_flag;
    _Bool named_tuple_expression_flag;
    struct list$1sNode$ph* paren_block;
    struct sNode* node2;
    struct sNode* _inf_value17;
    struct sParenBlockNode* _inf_obj_value17;
    struct sNode* node_39;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct buffer*  buf_40  ;
    _Bool squort_41;
    _Bool dquort_42;
    int nest_43;
    struct sNode* _inf_value18;
    struct sArrayInitializer* _inf_obj_value18;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  type_44  =0;
    char*  name_45  =0;
    _Bool err_46=0;
    struct sNode* node_47;
    struct sNode* _inf_value19;
    struct sCastNode* _inf_obj_value19;
    struct sNode* node_48;
    _Bool no_assign_49;
    _Bool no_comma;
    struct sNode* __dec_obj144;
    struct sNode* __dec_obj145;
    struct sNode* _inf_value20;
    struct sParenNode* _inf_obj_value20;
    struct sNode* __dec_obj148;
    memset(&refference, 0, sizeof(refference));
    memset(&p, 0, sizeof(p));
    memset(&sline, 0, sizeof(sline));
    memset(&buf, 0, sizeof(buf));
    memset(&squort, 0, sizeof(squort));
    memset(&dquort, 0, sizeof(dquort));
    memset(&nest, 0, sizeof(nest));
    memset(&node, 0, sizeof(node));
    memset(&node_30, 0, sizeof(node_30));
    memset(&node_31, 0, sizeof(node_31));
    memset(&node_32, 0, sizeof(node_32));
    memset(&node_33, 0, sizeof(node_33));
    memset(&node_34, 0, sizeof(node_34));
    memset(&quote, 0, sizeof(quote));
    memset(&no_assign, 0, sizeof(no_assign));
    memset(&value, 0, sizeof(value));
    memset(&value_35, 0, sizeof(value_35));
    memset(&value_36, 0, sizeof(value_36));
    memset(&cast_expression_flag, 0, sizeof(cast_expression_flag));
    memset(&struct_initializer_flag, 0, sizeof(struct_initializer_flag));
    memset(&p_37, 0, sizeof(p_37));
    memset(&sline_38, 0, sizeof(sline_38));
    memset(&p2, 0, sizeof(p2));
    memset(&sline2, 0, sizeof(sline2));
    memset(&word, 0, sizeof(word));
    memset(&tuple_expression_flag, 0, sizeof(tuple_expression_flag));
    memset(&named_tuple_expression_flag, 0, sizeof(named_tuple_expression_flag));
    memset(&paren_block, 0, sizeof(paren_block));
    memset(&node2, 0, sizeof(node2));
    memset(&node_39, 0, sizeof(node_39));
    memset(&buf_40, 0, sizeof(buf_40));
    memset(&squort_41, 0, sizeof(squort_41));
    memset(&dquort_42, 0, sizeof(dquort_42));
    memset(&nest_43, 0, sizeof(nest_43));
    memset(&node_47, 0, sizeof(node_47));
    memset(&node_48, 0, sizeof(node_48));
    memset(&no_assign_49, 0, sizeof(no_assign_49));
    memset(&no_comma, 0, sizeof(no_comma));
    # 778 "09pre_op.nc"
    skip_spaces_and_lf(info);
    # 780 "09pre_op.nc"
    refference=(_Bool)0;
    # 815 "09pre_op.nc"
    {
        # 782 "09pre_op.nc"
        p=info->p;
        # 783 "09pre_op.nc"
        sline=info->sline;
        # 810 "09pre_op.nc"
        if(*info->p==38&&*(info->p+1)!=38) {
            # 786 "09pre_op.nc"
            info->p++;
            # 787 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 808 "09pre_op.nc"
            if(*info->p==34) {
                # 790 "09pre_op.nc"
                refference=(_Bool)1;
            }
            else if(xisalpha(*info->p)||*info->p==95) {
                # 793 "09pre_op.nc"
                refference=(_Bool)1;
            }
            else if(*info->p==40||*info->p==42) {
                # 801 "09pre_op.nc"
                while(*info->p==40||*info->p==42) {
                    # 798 "09pre_op.nc"
                    info->p++;
                    # 798 "09pre_op.nc"
                    skip_spaces_and_lf(info);
                }
                # 807 "09pre_op.nc"
                if(*info->p==38) {
                    # 802 "09pre_op.nc"
                    refference=(_Bool)1;
                }
                else if(xisalpha(*info->p)||*info->p==95) {
                    # 805 "09pre_op.nc"
                    refference=(_Bool)1;
                }
            }
        }
        # 810 "09pre_op.nc"
        info->p=p;
        # 811 "09pre_op.nc"
        info->sline=sline;
    }
    # 815 "09pre_op.nc"
    skip_spaces_and_lf(info);
    # 1257 "09pre_op.nc"
    if(*info->p==123) {
        # 888 "09pre_op.nc"
        if(info->array_initializer) {
            # 819 "09pre_op.nc"
            buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 819, 957, "struct buffer* "), "09pre_op.nc", 819, 958)), "09pre_op.nc", 819, 959);
            # 821 "09pre_op.nc"
            buffer_append_char(buf,*info->p);
            # 822 "09pre_op.nc"
            info->p++;
            # 824 "09pre_op.nc"
            squort=(_Bool)0;
            # 825 "09pre_op.nc"
            dquort=(_Bool)0;
            # 826 "09pre_op.nc"
            nest=1;
            # 883 "09pre_op.nc"
            while(1) {
                # 882 "09pre_op.nc"
                if(*info->p==0) {
                    # 829 "09pre_op.nc"
                    err_msg(info,"unexpected source end in array initiailizer");
                    # 830 "09pre_op.nc"
                    exit(2);
                }
                else if(*info->p==92) {
                    # 833 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 834 "09pre_op.nc"
                    info->p++;
                    # 838 "09pre_op.nc"
                    if(*info->p==10) {
                        # 836 "09pre_op.nc"
                        info->sline++;
                    }
                    # 838 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 839 "09pre_op.nc"
                    info->p++;
                }
                else if(!squort&&*info->p==34) {
                    # 842 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 843 "09pre_op.nc"
                    info->p++;
                    # 844 "09pre_op.nc"
                    dquort=!dquort;
                }
                else if(!dquort&&*info->p==39) {
                    # 847 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 848 "09pre_op.nc"
                    info->p++;
                    # 849 "09pre_op.nc"
                    squort=!squort;
                }
                else if(squort||dquort) {
                    # 855 "09pre_op.nc"
                    if(*info->p==10) {
                        # 853 "09pre_op.nc"
                        info->sline++;
                    }
                    # 855 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 856 "09pre_op.nc"
                    info->p++;
                }
                else if(*info->p==123) {
                    # 859 "09pre_op.nc"
                    nest++;
                    # 860 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 861 "09pre_op.nc"
                    info->p++;
                }
                else if(*info->p==125) {
                    # 864 "09pre_op.nc"
                    nest--;
                    # 865 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 866 "09pre_op.nc"
                    info->p++;
                    # 872 "09pre_op.nc"
                    if(nest==0) {
                        # 869 "09pre_op.nc"
                        skip_spaces_and_lf(info);
                        # 870 "09pre_op.nc"
                        break;
                    }
                }
                else if(*info->p==10) {
                    # 874 "09pre_op.nc"
                    info->sline++;
                    # 875 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 876 "09pre_op.nc"
                    info->p++;
                }
                else {
                    # 879 "09pre_op.nc"
                    buffer_append_char(buf,*info->p);
                    # 880 "09pre_op.nc"
                    info->p++;
                }
            }
            # 883 "09pre_op.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 883, 963, "struct sNode");
            _inf_obj_value7=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value2=sArrayInitializer_initialize((struct sArrayInitializer* )come_increment_ref_count((struct sArrayInitializer *)come_calloc(1, sizeof(struct sArrayInitializer )*(1), "09pre_op.nc", 883, 960, "struct sArrayInitializer* "), "09pre_op.nc", 883, 961),((void*)0),(char* )come_increment_ref_count(buffer_to_string(buf), "09pre_op.nc", 883, 962),info))), "09pre_op.nc", 883, 964);
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sArrayInitializer_finalize;
            _inf_value7->clone=(void*)sArrayInitializer_clone;
            _inf_value7->compile=(void*)sArrayInitializer_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sArrayInitializer_kind;
            _inf_value7->left_value=(void*)sNodeBase_left_value;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value7)), "09pre_op.nc", 883, 976);
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 883, 977);
            come_call_finalizer(sArrayInitializer_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 883, 978);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 883, 979):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 883, 980):(void*)0);
            return __result_obj__0;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 888, 981);
        }
        else {
            # 886 "09pre_op.nc"
                        __right_value0 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_normal_block((_Bool)0,(_Bool)0,info))), "09pre_op.nc", 886, 982);
            ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 886, 983):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 886, 984):(void*)0);
            return __result_obj__0;
        }
    }
    else if(*info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        # 890 "09pre_op.nc"
        info->p++;
        # 891 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 893 "09pre_op.nc"
        __right_value0 = (void*)0;
        node=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 893, 985);
        # 895 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 895, 989, "struct sNode");
        _inf_obj_value8=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value1=sLogicalDenial_initialize((struct sLogicalDenial* )come_increment_ref_count((struct sLogicalDenial *)come_calloc(1, sizeof(struct sLogicalDenial )*(1), "09pre_op.nc", 895, 986, "struct sLogicalDenial* "), "09pre_op.nc", 895, 987),(struct sNode*)come_increment_ref_count(node, "09pre_op.nc", 895, 988),info))), "09pre_op.nc", 895, 990);
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sLogicalDenial_finalize;
        _inf_value8->clone=(void*)sLogicalDenial_clone;
        _inf_value8->compile=(void*)sLogicalDenial_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sLogicalDenial_kind;
        _inf_value8->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value8)), "09pre_op.nc", 895, 991);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 895, 992):(void*)0);
        come_call_finalizer(sLogicalDenial_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 895, 993);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 895, 994):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 895, 995):(void*)0);
        return __result_obj__0;
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 996):(void*)0);
    }
    else if(*info->p==33&&*(info->p+1)==33) {
        # 898 "09pre_op.nc"
        info->p+=2;
        # 899 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 901 "09pre_op.nc"
        __right_value0 = (void*)0;
        node_30=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 901, 997);
        # 903 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 903, 1001, "struct sNode");
        _inf_obj_value9=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value1=sLogicalDenial2_initialize((struct sLogicalDenial2* )come_increment_ref_count((struct sLogicalDenial2 *)come_calloc(1, sizeof(struct sLogicalDenial2 )*(1), "09pre_op.nc", 903, 998, "struct sLogicalDenial2* "), "09pre_op.nc", 903, 999),(struct sNode*)come_increment_ref_count(node_30, "09pre_op.nc", 903, 1000),info))), "09pre_op.nc", 903, 1002);
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value9->clone=(void*)sLogicalDenial2_clone;
        _inf_value9->compile=(void*)sLogicalDenial2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sLogicalDenial2_kind;
        _inf_value9->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value9)), "09pre_op.nc", 903, 1011);
        ((node_30) ? node_30 = come_decrement_ref_count(node_30, ((struct sNode*)node_30)->finalize, ((struct sNode*)node_30)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 903, 1012):(void*)0);
        come_call_finalizer(sLogicalDenial2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 903, 1013);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 903, 1014):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 903, 1015):(void*)0);
        return __result_obj__0;
        ((node_30) ? node_30 = come_decrement_ref_count(node_30, ((struct sNode*)node_30)->finalize, ((struct sNode*)node_30)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1016):(void*)0);
    }
    else if(*info->p==45&&*(info->p+1)==45) {
        # 906 "09pre_op.nc"
        info->p+=2;
        # 907 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 909 "09pre_op.nc"
        __right_value0 = (void*)0;
        node_31=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 909, 1017);
        # 911 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 911, 1021, "struct sNode");
        _inf_obj_value10=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value1=sMinusMinusNode2_initialize((struct sMinusMinusNode2* )come_increment_ref_count((struct sMinusMinusNode2 *)come_calloc(1, sizeof(struct sMinusMinusNode2 )*(1), "09pre_op.nc", 911, 1018, "struct sMinusMinusNode2* "), "09pre_op.nc", 911, 1019),(struct sNode*)come_increment_ref_count(node_31, "09pre_op.nc", 911, 1020),info))), "09pre_op.nc", 911, 1022);
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value10->clone=(void*)sMinusMinusNode2_clone;
        _inf_value10->compile=(void*)sMinusMinusNode2_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sMinusMinusNode2_kind;
        _inf_value10->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value10)), "09pre_op.nc", 911, 1031);
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 911, 1032):(void*)0);
        come_call_finalizer(sMinusMinusNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 911, 1033);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 911, 1034):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 911, 1035):(void*)0);
        return __result_obj__0;
        ((node_31) ? node_31 = come_decrement_ref_count(node_31, ((struct sNode*)node_31)->finalize, ((struct sNode*)node_31)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1036):(void*)0);
    }
    else if(*info->p==45&&!xisdigit(*(info->p+1))) {
        # 914 "09pre_op.nc"
        info->p++;
        # 915 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 917 "09pre_op.nc"
        __right_value0 = (void*)0;
        node_32=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 917, 1037);
        # 919 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 919, 1041, "struct sNode");
        _inf_obj_value11=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value1=sMinusNode2_initialize((struct sMinusNode2* )come_increment_ref_count((struct sMinusNode2 *)come_calloc(1, sizeof(struct sMinusNode2 )*(1), "09pre_op.nc", 919, 1038, "struct sMinusNode2* "), "09pre_op.nc", 919, 1039),(struct sNode*)come_increment_ref_count(node_32, "09pre_op.nc", 919, 1040),info))), "09pre_op.nc", 919, 1042);
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sMinusNode2_finalize;
        _inf_value11->clone=(void*)sMinusNode2_clone;
        _inf_value11->compile=(void*)sMinusNode2_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sMinusNode2_kind;
        _inf_value11->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value11)), "09pre_op.nc", 919, 1051);
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 919, 1052):(void*)0);
        come_call_finalizer(sMinusNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 919, 1053);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 919, 1054):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 919, 1055):(void*)0);
        return __result_obj__0;
        ((node_32) ? node_32 = come_decrement_ref_count(node_32, ((struct sNode*)node_32)->finalize, ((struct sNode*)node_32)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1056):(void*)0);
    }
    else if(*info->p==43&&*(info->p+1)==43) {
        # 922 "09pre_op.nc"
        info->p+=2;
        # 923 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 925 "09pre_op.nc"
        __right_value0 = (void*)0;
        node_33=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 925, 1057);
        # 927 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 927, 1061, "struct sNode");
        _inf_obj_value12=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value1=sPlusPlusNode2_initialize((struct sPlusPlusNode2* )come_increment_ref_count((struct sPlusPlusNode2 *)come_calloc(1, sizeof(struct sPlusPlusNode2 )*(1), "09pre_op.nc", 927, 1058, "struct sPlusPlusNode2* "), "09pre_op.nc", 927, 1059),(struct sNode*)come_increment_ref_count(node_33, "09pre_op.nc", 927, 1060),info))), "09pre_op.nc", 927, 1062);
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value12->clone=(void*)sPlusPlusNode2_clone;
        _inf_value12->compile=(void*)sPlusPlusNode2_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sPlusPlusNode2_kind;
        _inf_value12->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value12)), "09pre_op.nc", 927, 1071);
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 927, 1072):(void*)0);
        come_call_finalizer(sPlusPlusNode2_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 927, 1073);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 927, 1074):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 927, 1075):(void*)0);
        return __result_obj__0;
        ((node_33) ? node_33 = come_decrement_ref_count(node_33, ((struct sNode*)node_33)->finalize, ((struct sNode*)node_33)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1076):(void*)0);
    }
    else if(*info->p==126) {
        # 930 "09pre_op.nc"
        info->p++;
        # 931 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 933 "09pre_op.nc"
        __right_value0 = (void*)0;
        node_34=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 933, 1077);
        # 935 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 935, 1081, "struct sNode");
        _inf_obj_value13=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value1=sComplement_initialize((struct sComplement* )come_increment_ref_count((struct sComplement *)come_calloc(1, sizeof(struct sComplement )*(1), "09pre_op.nc", 935, 1078, "struct sComplement* "), "09pre_op.nc", 935, 1079),(struct sNode*)come_increment_ref_count(node_34, "09pre_op.nc", 935, 1080),info))), "09pre_op.nc", 935, 1082);
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sComplement_finalize;
        _inf_value13->clone=(void*)sComplement_clone;
        _inf_value13->compile=(void*)sComplement_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sComplement_kind;
        _inf_value13->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value13)), "09pre_op.nc", 935, 1091);
        ((node_34) ? node_34 = come_decrement_ref_count(node_34, ((struct sNode*)node_34)->finalize, ((struct sNode*)node_34)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 935, 1092):(void*)0);
        come_call_finalizer(sComplement_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 935, 1093);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 935, 1094):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 935, 1095):(void*)0);
        return __result_obj__0;
        ((node_34) ? node_34 = come_decrement_ref_count(node_34, ((struct sNode*)node_34)->finalize, ((struct sNode*)node_34)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1096):(void*)0);
    }
    else if((*info->p==92&&*(info->p+1)==42)||*info->p==42) {
        # 938 "09pre_op.nc"
        # 950 "09pre_op.nc"
        if(*info->p==92) {
            # 940 "09pre_op.nc"
            info->p+=2;
            # 941 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 942 "09pre_op.nc"
            quote=(_Bool)1;
        }
        else {
            # 945 "09pre_op.nc"
            info->p++;
            # 946 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 947 "09pre_op.nc"
            quote=(_Bool)0;
        }
        # 950 "09pre_op.nc"
        no_assign=info->no_assign;
        # 951 "09pre_op.nc"
        info->no_assign=(_Bool)1;
        # 952 "09pre_op.nc"
        __right_value0 = (void*)0;
        value=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 952, 1097);
        # 953 "09pre_op.nc"
        info->no_assign=no_assign;
        # 955 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 955, 1101, "struct sNode");
        _inf_obj_value14=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value1=sDerefferenceNode_initialize((struct sDerefferenceNode* )come_increment_ref_count((struct sDerefferenceNode *)come_calloc(1, sizeof(struct sDerefferenceNode )*(1), "09pre_op.nc", 955, 1098, "struct sDerefferenceNode* "), "09pre_op.nc", 955, 1099),(struct sNode*)come_increment_ref_count(value, "09pre_op.nc", 955, 1100),quote,info))), "09pre_op.nc", 955, 1102);
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value14->clone=(void*)sDerefferenceNode_clone;
        _inf_value14->compile=(void*)sDerefferenceNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sDerefferenceNode_kind;
        _inf_value14->left_value=(void*)sDerefferenceNode_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value14)), "09pre_op.nc", 955, 1103);
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 955, 1104):(void*)0);
        come_call_finalizer(sDerefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 955, 1105);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 955, 1106):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 955, 1107):(void*)0);
        return __result_obj__0;
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1108):(void*)0);
    }
    else if(*info->p==38&&refference) {
        # 958 "09pre_op.nc"
        info->p++;
        # 959 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 961 "09pre_op.nc"
        __right_value0 = (void*)0;
        value_35=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 961, 1109);
        # 963 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 963, 1113, "struct sNode");
        _inf_obj_value15=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value1=sRefferenceNode_initialize((struct sRefferenceNode* )come_increment_ref_count((struct sRefferenceNode *)come_calloc(1, sizeof(struct sRefferenceNode )*(1), "09pre_op.nc", 963, 1110, "struct sRefferenceNode* "), "09pre_op.nc", 963, 1111),(struct sNode*)come_increment_ref_count(value_35, "09pre_op.nc", 963, 1112),info))), "09pre_op.nc", 963, 1114);
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sRefferenceNode_finalize;
        _inf_value15->clone=(void*)sRefferenceNode_clone;
        _inf_value15->compile=(void*)sRefferenceNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sRefferenceNode_kind;
        _inf_value15->left_value=(void*)sRefferenceNode_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value15)), "09pre_op.nc", 963, 1115);
        ((value_35) ? value_35 = come_decrement_ref_count(value_35, ((struct sNode*)value_35)->finalize, ((struct sNode*)value_35)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 963, 1116):(void*)0);
        come_call_finalizer(sRefferenceNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 963, 1117);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 963, 1118):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 963, 1119):(void*)0);
        return __result_obj__0;
        ((value_35) ? value_35 = come_decrement_ref_count(value_35, ((struct sNode*)value_35)->finalize, ((struct sNode*)value_35)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1120):(void*)0);
    }
    else if(*info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        # 976 "09pre_op.nc"
        info->p++;
        # 977 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 979 "09pre_op.nc"
        __right_value0 = (void*)0;
        value_36=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 979, 1121);
        # 981 "09pre_op.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 981, 1125, "struct sNode");
        _inf_obj_value16=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value1=sReverseNode_initialize((struct sReverseNode* )come_increment_ref_count((struct sReverseNode *)come_calloc(1, sizeof(struct sReverseNode )*(1), "09pre_op.nc", 981, 1122, "struct sReverseNode* "), "09pre_op.nc", 981, 1123),(struct sNode*)come_increment_ref_count(value_36, "09pre_op.nc", 981, 1124),info))), "09pre_op.nc", 981, 1126);
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sReverseNode_finalize;
        _inf_value16->clone=(void*)sReverseNode_clone;
        _inf_value16->compile=(void*)sReverseNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sReverseNode_kind;
        _inf_value16->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value16)), "09pre_op.nc", 981, 1127);
        ((value_36) ? value_36 = come_decrement_ref_count(value_36, ((struct sNode*)value_36)->finalize, ((struct sNode*)value_36)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 981, 1128):(void*)0);
        come_call_finalizer(sReverseNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 981, 1129);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 981, 1130):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 981, 1131):(void*)0);
        return __result_obj__0;
        ((value_36) ? value_36 = come_decrement_ref_count(value_36, ((struct sNode*)value_36)->finalize, ((struct sNode*)value_36)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1257, 1132):(void*)0);
    }
    else if(*info->p==40) {
        # 984 "09pre_op.nc"
        info->p++;
        # 985 "09pre_op.nc"
        skip_spaces_and_lf(info);
        # 988 "09pre_op.nc"
        cast_expression_flag=(_Bool)0;
        # 989 "09pre_op.nc"
        struct_initializer_flag=(_Bool)0;
        # 1028 "09pre_op.nc"
        {
            # 991 "09pre_op.nc"
            p_37=info->p;
            # 992 "09pre_op.nc"
            sline_38=info->sline;
            # 994 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 996 "09pre_op.nc"
            p2=info->p;
            # 997 "09pre_op.nc"
            sline2=info->sline;
            # 999 "09pre_op.nc"
            __right_value0 = (void*)0;
            word=(char* )come_increment_ref_count(__builtin_string("","09pre_op.nc",999), "09pre_op.nc", 999, 1133);
            # 1021 "09pre_op.nc"
            if(xisalpha(*info->p)||*info->p==95) {
                # 1001 "09pre_op.nc"
                __right_value0 = (void*)0;
                __dec_obj141=word,
                word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "09pre_op.nc", 1001, 1135);
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "09pre_op.nc", 1001, 1134);
                # 1019 "09pre_op.nc"
                if(is_type_name(word,info)) {
                    # 1003 "09pre_op.nc"
                    info->p=p2;
                    # 1004 "09pre_op.nc"
                    info->sline=sline2;
                    # 1006 "09pre_op.nc"
                    __right_value0 = (void*)0;
                    ((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1006, 1138);
                    # 1018 "09pre_op.nc"
                    if(*info->p==41) {
                        # 1009 "09pre_op.nc"
                        info->p++;
                        # 1010 "09pre_op.nc"
                        skip_spaces_and_lf(info);
                        # 1017 "09pre_op.nc"
                        if(*info->p==123) {
                            # 1012 "09pre_op.nc"
                            struct_initializer_flag=(_Bool)1;
                        }
                        else {
                            # 1015 "09pre_op.nc"
                            cast_expression_flag=(_Bool)1;
                        }
                    }
                }
            }
            # 1021 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1023 "09pre_op.nc"
            info->p=p_37;
            # 1024 "09pre_op.nc"
            info->sline=sline_38;
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1028, 1139));
        }
        # 1028 "09pre_op.nc"
        tuple_expression_flag=(_Bool)0;
        # 1029 "09pre_op.nc"
        named_tuple_expression_flag=(_Bool)0;
        # 1253 "09pre_op.nc"
        if(*info->p==123) {
            # 1082 "09pre_op.nc"
            info->p++;
            # 1083 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1085 "09pre_op.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "09pre_op.nc", 1085, 1140, "struct list$1sNode$ph*"), "09pre_op.nc", 1085, 1141)), "09pre_op.nc", 1085, 1142);
            # 1112 "09pre_op.nc"
            while((_Bool)1) {
                # 1088 "09pre_op.nc"
                skip_spaces_and_lf(info);
                # 1090 "09pre_op.nc"
                __right_value0 = (void*)0;
                node2=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "09pre_op.nc", 1090, 1143);
                # 1092 "09pre_op.nc"
                skip_spaces_and_lf(info);
                # 1094 "09pre_op.nc"
                list$1sNode$ph_add(paren_block,(struct sNode*)come_increment_ref_count(node2, "09pre_op.nc", 1094, 1144));
                # 1101 "09pre_op.nc"
                while(*info->p==59) {
                    # 1097 "09pre_op.nc"
                    info->p++;
                    # 1098 "09pre_op.nc"
                    skip_spaces_and_lf(info);
                }
                # 1110 "09pre_op.nc"
                if(*info->p==125) {
                    # 1102 "09pre_op.nc"
                    info->p++;
                    # 1103 "09pre_op.nc"
                    skip_spaces_and_lf(info);
                    # 1104 "09pre_op.nc"
                    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1104, 1145):(void*)0);
                    break;
                }
                else if(*info->p==0) {
                    # 1107 "09pre_op.nc"
                    err_msg(info,"invalid source end in paren block");
                    # 1108 "09pre_op.nc"
                    exit(0);
                }
                ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1112, 1146):(void*)0);
            }
            # 1112 "09pre_op.nc"
            expected_next_character(41,info);
            # 1114 "09pre_op.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1114, 1150, "struct sNode");
            _inf_obj_value17=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value1=sParenBlockNode_initialize((struct sParenBlockNode* )come_increment_ref_count((struct sParenBlockNode *)come_calloc(1, sizeof(struct sParenBlockNode )*(1), "09pre_op.nc", 1114, 1147, "struct sParenBlockNode* "), "09pre_op.nc", 1114, 1148),(struct list$1sNode$ph*)come_increment_ref_count(paren_block, "09pre_op.nc", 1114, 1149),info))), "09pre_op.nc", 1114, 1151);
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sParenBlockNode_finalize;
            _inf_value17->clone=(void*)sParenBlockNode_clone;
            _inf_value17->compile=(void*)sParenBlockNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sParenBlockNode_kind;
            _inf_value17->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            node_39=(struct sNode*)come_increment_ref_count(_inf_value17, "09pre_op.nc", 1114, 1160);
            come_call_finalizer(sParenBlockNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1114, 1161);
            # 1116 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1118 "09pre_op.nc"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_39, "09pre_op.nc", 1118, 1162);
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1118, 1163);
            ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1118, 1164):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1118, 1165):(void*)0);
            return __result_obj__0;
            come_call_finalizer(list$1sNode$ph$p_finalize, paren_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1166);
            ((node_39) ? node_39 = come_decrement_ref_count(node_39, ((struct sNode*)node_39)->finalize, ((struct sNode*)node_39)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1253, 1167):(void*)0);
        }
        else if(struct_initializer_flag) {
            # 1132 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1133 "09pre_op.nc"
            __right_value0 = (void*)0;
            multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "09pre_op.nc", 1133, 1168);
            name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "09pre_op.nc", 1133, 1169);
            err=multiple_assign_var2->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1133, 1170);
            # 1140 "09pre_op.nc"
            if(!err) {
                # 1136 "09pre_op.nc"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 1137 "09pre_op.nc"
                exit(2);
            }
            # 1140 "09pre_op.nc"
            expected_next_character(41,info);
            # 1141 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1143 "09pre_op.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            buf_40=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "09pre_op.nc", 1143, 1171, "struct buffer* "), "09pre_op.nc", 1143, 1172)), "09pre_op.nc", 1143, 1173);
            # 1145 "09pre_op.nc"
            buffer_append_char(buf_40,*info->p);
            # 1146 "09pre_op.nc"
            info->p++;
            # 1148 "09pre_op.nc"
            squort_41=(_Bool)0;
            # 1149 "09pre_op.nc"
            dquort_42=(_Bool)0;
            # 1150 "09pre_op.nc"
            nest_43=1;
            # 1207 "09pre_op.nc"
            while(1) {
                # 1206 "09pre_op.nc"
                if(*info->p==0) {
                    # 1153 "09pre_op.nc"
                    err_msg(info,"unexpected source end in array initiailizer");
                    # 1154 "09pre_op.nc"
                    exit(2);
                }
                else if(*info->p==92) {
                    # 1157 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1158 "09pre_op.nc"
                    info->p++;
                    # 1162 "09pre_op.nc"
                    if(*info->p==10) {
                        # 1160 "09pre_op.nc"
                        info->sline++;
                    }
                    # 1162 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1163 "09pre_op.nc"
                    info->p++;
                }
                else if(!squort_41&&*info->p==34) {
                    # 1166 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1167 "09pre_op.nc"
                    info->p++;
                    # 1168 "09pre_op.nc"
                    dquort_42=!dquort_42;
                }
                else if(!dquort_42&&*info->p==39) {
                    # 1171 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1172 "09pre_op.nc"
                    info->p++;
                    # 1173 "09pre_op.nc"
                    squort_41=!squort_41;
                }
                else if(squort_41||dquort_42) {
                    # 1179 "09pre_op.nc"
                    if(*info->p==10) {
                        # 1177 "09pre_op.nc"
                        info->sline++;
                    }
                    # 1179 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1180 "09pre_op.nc"
                    info->p++;
                }
                else if(*info->p==123) {
                    # 1183 "09pre_op.nc"
                    nest_43++;
                    # 1184 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1185 "09pre_op.nc"
                    info->p++;
                }
                else if(*info->p==125) {
                    # 1188 "09pre_op.nc"
                    nest_43--;
                    # 1189 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1190 "09pre_op.nc"
                    info->p++;
                    # 1196 "09pre_op.nc"
                    if(nest_43==0) {
                        # 1193 "09pre_op.nc"
                        skip_spaces_and_lf(info);
                        # 1194 "09pre_op.nc"
                        break;
                    }
                }
                else if(*info->p==10) {
                    # 1198 "09pre_op.nc"
                    info->sline++;
                    # 1199 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1200 "09pre_op.nc"
                    info->p++;
                }
                else {
                    # 1203 "09pre_op.nc"
                    buffer_append_char(buf_40,*info->p);
                    # 1204 "09pre_op.nc"
                    info->p++;
                }
            }
            # 1207 "09pre_op.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1207, 1177, "struct sNode");
            _inf_obj_value18=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value2=sArrayInitializer_initialize((struct sArrayInitializer* )come_increment_ref_count((struct sArrayInitializer *)come_calloc(1, sizeof(struct sArrayInitializer )*(1), "09pre_op.nc", 1207, 1174, "struct sArrayInitializer* "), "09pre_op.nc", 1207, 1175),type,(char* )come_increment_ref_count(buffer_to_string(buf_40), "09pre_op.nc", 1207, 1176),info))), "09pre_op.nc", 1207, 1178);
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sArrayInitializer_finalize;
            _inf_value18->clone=(void*)sArrayInitializer_clone;
            _inf_value18->compile=(void*)sArrayInitializer_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sArrayInitializer_kind;
            _inf_value18->left_value=(void*)sNodeBase_left_value;
            __right_value3 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value3=_inf_value18)), "09pre_op.nc", 1207, 1179);
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1207, 1180);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1207, 1181));
            come_call_finalizer(buffer_finalize, buf_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1207, 1182);
            come_call_finalizer(sArrayInitializer_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1207, 1183);
            ((__right_value3) ? __right_value3 = come_decrement_ref_count(__right_value3, ((struct sNode*)__right_value3)->finalize, ((struct sNode*)__right_value3)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 1207, 1184):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1207, 1185):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1186);
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1253, 1187));
            come_call_finalizer(buffer_finalize, buf_40, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1188);
        }
        else if(cast_expression_flag) {
            # 1210 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1211 "09pre_op.nc"
            __right_value0 = (void*)0;
            multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_44=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "09pre_op.nc", 1211, 1189);
            name_45=(char* )come_increment_ref_count(multiple_assign_var3->v2, "09pre_op.nc", 1211, 1190);
            err_46=multiple_assign_var3->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1211, 1191);
            # 1218 "09pre_op.nc"
            if(!err_46) {
                # 1214 "09pre_op.nc"
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                # 1215 "09pre_op.nc"
                exit(2);
            }
            # 1218 "09pre_op.nc"
            expected_next_character(41,info);
            # 1219 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1221 "09pre_op.nc"
            __right_value0 = (void*)0;
            node_47=(struct sNode*)come_increment_ref_count(expression_node_v99(info), "09pre_op.nc", 1221, 1192);
            # 1223 "09pre_op.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1223, 1195, "struct sNode");
            _inf_obj_value19=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value1=sCastNode_initialize((struct sCastNode* )come_increment_ref_count((struct sCastNode *)come_calloc(1, sizeof(struct sCastNode )*(1), "09pre_op.nc", 1223, 1193, "struct sCastNode* "), "09pre_op.nc", 1223, 1194),type_44,node_47,info))), "09pre_op.nc", 1223, 1196);
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sCastNode_finalize;
            _inf_value19->clone=(void*)sCastNode_clone;
            _inf_value19->compile=(void*)sCastNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sCastNode_kind;
            _inf_value19->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value19)), "09pre_op.nc", 1223, 1197);
            come_call_finalizer(sType_finalize, type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1223, 1198);
            (name_45 = come_decrement_ref_count(name_45, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1223, 1199));
            ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1223, 1200):(void*)0);
            come_call_finalizer(sCastNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1223, 1201);
            ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 1223, 1202):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1223, 1203):(void*)0);
            return __result_obj__0;
            come_call_finalizer(sType_finalize, type_44, (void*)0, (void*)0, 0, 0, 0, (void*)0, "09pre_op.nc}", 1253, 1204);
            (name_45 = come_decrement_ref_count(name_45, (void*)0, (void*)0, 0, 0, (void*)0, "09pre_op.nc", 1253, 1205));
            ((node_47) ? node_47 = come_decrement_ref_count(node_47, ((struct sNode*)node_47)->finalize, ((struct sNode*)node_47)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1253, 1206):(void*)0);
        }
        else {
            # 1226 "09pre_op.nc"
            # 1227 "09pre_op.nc"
            no_assign_49=info->no_assign;
            # 1228 "09pre_op.nc"
            info->no_assign=(_Bool)0;
            # 1244 "09pre_op.nc"
            if(gComeC&&info->in_fun_param) {
                # 1231 "09pre_op.nc"
                no_comma=info->no_comma;
                # 1232 "09pre_op.nc"
                info->no_comma=(_Bool)0;
                # 1233 "09pre_op.nc"
                skip_spaces_and_lf(info);
                # 1234 "09pre_op.nc"
                __right_value0 = (void*)0;
                __dec_obj144=node_48,
                node_48=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "09pre_op.nc", 1234, 1208);
                (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 1234, 1207) :0);
                # 1235 "09pre_op.nc"
                skip_spaces_and_lf(info);
                # 1236 "09pre_op.nc"
                info->no_comma=no_comma;
            }
            else {
                # 1239 "09pre_op.nc"
                skip_spaces_and_lf(info);
                # 1240 "09pre_op.nc"
                __right_value0 = (void*)0;
                __dec_obj145=node_48,
                node_48=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "09pre_op.nc", 1240, 1210);
                (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 1240, 1209) :0);
                # 1241 "09pre_op.nc"
                skip_spaces_and_lf(info);
            }
            # 1244 "09pre_op.nc"
            info->no_assign=no_assign_49;
            # 1246 "09pre_op.nc"
            expected_next_character(41,info);
            # 1247 "09pre_op.nc"
            skip_spaces_and_lf(info);
            # 1249 "09pre_op.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09pre_op.nc", 1249, 1213, "struct sNode");
            _inf_obj_value20=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value1=sParenNode_initialize((struct sParenNode* )come_increment_ref_count((struct sParenNode *)come_calloc(1, sizeof(struct sParenNode )*(1), "09pre_op.nc", 1249, 1211, "struct sParenNode* "), "09pre_op.nc", 1249, 1212),node_48,info))), "09pre_op.nc", 1249, 1214);
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sParenNode_finalize;
            _inf_value20->clone=(void*)sParenNode_clone;
            _inf_value20->compile=(void*)sParenNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sParenNode_kind;
            _inf_value20->left_value=(void*)sNodeBase_left_value;
            __right_value2 = (void*)0;
            __dec_obj148=node_48,
            node_48=(struct sNode*)come_increment_ref_count(_inf_value20, "09pre_op.nc", 1249, 1224);
            (__dec_obj148 ? __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0, (void*)0, "09pre_op.nc", 1249, 1223) :0);
            come_call_finalizer(sParenNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "09pre_op.nc}", 1249, 1225);
            # 1251 "09pre_op.nc"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(node_48, "09pre_op.nc", 1251, 1226);
            ((node_48) ? node_48 = come_decrement_ref_count(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1251, 1227):(void*)0);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1251, 1228):(void*)0);
            return __result_obj__0;
            ((node_48) ? node_48 = come_decrement_ref_count(node_48, ((struct sNode*)node_48)->finalize, ((struct sNode*)node_48)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1253, 1229):(void*)0);
        }
    }
    else {
        # 1255 "09pre_op.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "09pre_op.nc", 1255, 1230);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1255, 1231):(void*)0);
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sArrayInitializer_clone"; neo_current_frame = &fr;
    struct sArrayInitializer* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sArrayInitializer*  result  ;
    char*  __dec_obj128  ;
    char*  __dec_obj129  ;
    struct sType*  __dec_obj130  ;
    memset(&result, 0, sizeof(result));
    # 3 "sArrayInitializer_clone"
    # 5 "sArrayInitializer_clone"
    if(self==(void*)0) {
        # 4 "sArrayInitializer_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sArrayInitializer_clone"
    result=(struct sArrayInitializer* )come_increment_ref_count((struct sArrayInitializer *)come_calloc(1, sizeof(struct sArrayInitializer )*(1), "sArrayInitializer_clone", 5, 965, "struct sArrayInitializer* "), "sArrayInitializer_clone", 5, 966);
    # 7 "sArrayInitializer_clone"
    if(self!=((void*)0)) {
        # 6 "sArrayInitializer_clone"
        result->sline=self->sline;
    }
    # 8 "sArrayInitializer_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sArrayInitializer_clone"
        __right_value0 = (void*)0;
        __dec_obj128=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sArrayInitializer_clone", 7, 967, "char* "), "sArrayInitializer_clone", 7, 969);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "sArrayInitializer_clone", 7, 968);
    }
    # 9 "sArrayInitializer_clone"
    if(self!=((void*)0)) {
        # 8 "sArrayInitializer_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sArrayInitializer_clone"
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        # 9 "sArrayInitializer_clone"
        __right_value0 = (void*)0;
        __dec_obj129=result->initializer,
        result->initializer=(char* )come_increment_ref_count((char* )come_memdup(self->initializer, "sArrayInitializer_clone", 9, 970, "char* "), "sArrayInitializer_clone", 9, 972);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "sArrayInitializer_clone", 9, 971);
    }
    # 11 "sArrayInitializer_clone"
    if(self!=((void*)0)&&self->type_!=((void*)0)) {
        # 10 "sArrayInitializer_clone"
        __right_value0 = (void*)0;
        __dec_obj130=result->type_,
        result->type_=(struct sType* )come_increment_ref_count(sType_clone(self->type_), "sArrayInitializer_clone", 10, 974);
        come_call_finalizer(sType_finalize, __dec_obj130,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sArrayInitializer_clone", 10, 973);
    }
    # 11 "sArrayInitializer_clone"
        __result_obj__0 = result;
    come_call_finalizer(sArrayInitializer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sArrayInitializer_clone}", 11, 975);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sLogicalDenial2_clone"; neo_current_frame = &fr;
    struct sLogicalDenial2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sLogicalDenial2*  result  ;
    char*  __dec_obj131  ;
    struct sNode* __dec_obj132;
    memset(&result, 0, sizeof(result));
    # 3 "sLogicalDenial2_clone"
    # 5 "sLogicalDenial2_clone"
    if(self==(void*)0) {
        # 4 "sLogicalDenial2_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sLogicalDenial2_clone"
    result=(struct sLogicalDenial2* )come_increment_ref_count((struct sLogicalDenial2 *)come_calloc(1, sizeof(struct sLogicalDenial2 )*(1), "sLogicalDenial2_clone", 5, 1003, "struct sLogicalDenial2* "), "sLogicalDenial2_clone", 5, 1004);
    # 7 "sLogicalDenial2_clone"
    if(self!=((void*)0)) {
        # 6 "sLogicalDenial2_clone"
        result->sline=self->sline;
    }
    # 8 "sLogicalDenial2_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sLogicalDenial2_clone"
        __right_value0 = (void*)0;
        __dec_obj131=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sLogicalDenial2_clone", 7, 1005, "char* "), "sLogicalDenial2_clone", 7, 1007);
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0, (void*)0, "sLogicalDenial2_clone", 7, 1006);
    }
    # 9 "sLogicalDenial2_clone"
    if(self!=((void*)0)) {
        # 8 "sLogicalDenial2_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sLogicalDenial2_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sLogicalDenial2_clone"
        __right_value0 = (void*)0;
        __dec_obj132=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sLogicalDenial2_clone", 9, 1009);
        (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0, (void*)0, "sLogicalDenial2_clone", 9, 1008) :0);
    }
    # 10 "sLogicalDenial2_clone"
        __result_obj__0 = result;
    come_call_finalizer(sLogicalDenial2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sLogicalDenial2_clone}", 10, 1010);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusMinusNode2_clone"; neo_current_frame = &fr;
    struct sMinusMinusNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMinusMinusNode2*  result  ;
    char*  __dec_obj133  ;
    struct sNode* __dec_obj134;
    memset(&result, 0, sizeof(result));
    # 3 "sMinusMinusNode2_clone"
    # 5 "sMinusMinusNode2_clone"
    if(self==(void*)0) {
        # 4 "sMinusMinusNode2_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sMinusMinusNode2_clone"
    result=(struct sMinusMinusNode2* )come_increment_ref_count((struct sMinusMinusNode2 *)come_calloc(1, sizeof(struct sMinusMinusNode2 )*(1), "sMinusMinusNode2_clone", 5, 1023, "struct sMinusMinusNode2* "), "sMinusMinusNode2_clone", 5, 1024);
    # 7 "sMinusMinusNode2_clone"
    if(self!=((void*)0)) {
        # 6 "sMinusMinusNode2_clone"
        result->sline=self->sline;
    }
    # 8 "sMinusMinusNode2_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sMinusMinusNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj133=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMinusMinusNode2_clone", 7, 1025, "char* "), "sMinusMinusNode2_clone", 7, 1027);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "sMinusMinusNode2_clone", 7, 1026);
    }
    # 9 "sMinusMinusNode2_clone"
    if(self!=((void*)0)) {
        # 8 "sMinusMinusNode2_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sMinusMinusNode2_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sMinusMinusNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj134=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sMinusMinusNode2_clone", 9, 1029);
        (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0, (void*)0, "sMinusMinusNode2_clone", 9, 1028) :0);
    }
    # 10 "sMinusMinusNode2_clone"
        __result_obj__0 = result;
    come_call_finalizer(sMinusMinusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMinusMinusNode2_clone}", 10, 1030);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMinusNode2_clone"; neo_current_frame = &fr;
    struct sMinusNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMinusNode2*  result  ;
    char*  __dec_obj135  ;
    struct sNode* __dec_obj136;
    memset(&result, 0, sizeof(result));
    # 3 "sMinusNode2_clone"
    # 5 "sMinusNode2_clone"
    if(self==(void*)0) {
        # 4 "sMinusNode2_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sMinusNode2_clone"
    result=(struct sMinusNode2* )come_increment_ref_count((struct sMinusNode2 *)come_calloc(1, sizeof(struct sMinusNode2 )*(1), "sMinusNode2_clone", 5, 1043, "struct sMinusNode2* "), "sMinusNode2_clone", 5, 1044);
    # 7 "sMinusNode2_clone"
    if(self!=((void*)0)) {
        # 6 "sMinusNode2_clone"
        result->sline=self->sline;
    }
    # 8 "sMinusNode2_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sMinusNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj135=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMinusNode2_clone", 7, 1045, "char* "), "sMinusNode2_clone", 7, 1047);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "sMinusNode2_clone", 7, 1046);
    }
    # 9 "sMinusNode2_clone"
    if(self!=((void*)0)) {
        # 8 "sMinusNode2_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sMinusNode2_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sMinusNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj136=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sMinusNode2_clone", 9, 1049);
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "sMinusNode2_clone", 9, 1048) :0);
    }
    # 10 "sMinusNode2_clone"
        __result_obj__0 = result;
    come_call_finalizer(sMinusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMinusNode2_clone}", 10, 1050);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPlusPlusNode2_clone"; neo_current_frame = &fr;
    struct sPlusPlusNode2* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPlusPlusNode2*  result  ;
    char*  __dec_obj137  ;
    struct sNode* __dec_obj138;
    memset(&result, 0, sizeof(result));
    # 3 "sPlusPlusNode2_clone"
    # 5 "sPlusPlusNode2_clone"
    if(self==(void*)0) {
        # 4 "sPlusPlusNode2_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sPlusPlusNode2_clone"
    result=(struct sPlusPlusNode2* )come_increment_ref_count((struct sPlusPlusNode2 *)come_calloc(1, sizeof(struct sPlusPlusNode2 )*(1), "sPlusPlusNode2_clone", 5, 1063, "struct sPlusPlusNode2* "), "sPlusPlusNode2_clone", 5, 1064);
    # 7 "sPlusPlusNode2_clone"
    if(self!=((void*)0)) {
        # 6 "sPlusPlusNode2_clone"
        result->sline=self->sline;
    }
    # 8 "sPlusPlusNode2_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sPlusPlusNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj137=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPlusPlusNode2_clone", 7, 1065, "char* "), "sPlusPlusNode2_clone", 7, 1067);
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "sPlusPlusNode2_clone", 7, 1066);
    }
    # 9 "sPlusPlusNode2_clone"
    if(self!=((void*)0)) {
        # 8 "sPlusPlusNode2_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sPlusPlusNode2_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sPlusPlusNode2_clone"
        __right_value0 = (void*)0;
        __dec_obj138=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sPlusPlusNode2_clone", 9, 1069);
        (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0, (void*)0, "sPlusPlusNode2_clone", 9, 1068) :0);
    }
    # 10 "sPlusPlusNode2_clone"
        __result_obj__0 = result;
    come_call_finalizer(sPlusPlusNode2_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPlusPlusNode2_clone}", 10, 1070);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sComplement* sComplement_clone(struct sComplement* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sComplement_clone"; neo_current_frame = &fr;
    struct sComplement* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sComplement*  result  ;
    char*  __dec_obj139  ;
    struct sNode* __dec_obj140;
    memset(&result, 0, sizeof(result));
    # 3 "sComplement_clone"
    # 5 "sComplement_clone"
    if(self==(void*)0) {
        # 4 "sComplement_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sComplement_clone"
    result=(struct sComplement* )come_increment_ref_count((struct sComplement *)come_calloc(1, sizeof(struct sComplement )*(1), "sComplement_clone", 5, 1083, "struct sComplement* "), "sComplement_clone", 5, 1084);
    # 7 "sComplement_clone"
    if(self!=((void*)0)) {
        # 6 "sComplement_clone"
        result->sline=self->sline;
    }
    # 8 "sComplement_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sComplement_clone"
        __right_value0 = (void*)0;
        __dec_obj139=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sComplement_clone", 7, 1085, "char* "), "sComplement_clone", 7, 1087);
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "sComplement_clone", 7, 1086);
    }
    # 9 "sComplement_clone"
    if(self!=((void*)0)) {
        # 8 "sComplement_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sComplement_clone"
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        # 9 "sComplement_clone"
        __right_value0 = (void*)0;
        __dec_obj140=result->value,
        result->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value), "sComplement_clone", 9, 1089);
        (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0, (void*)0, "sComplement_clone", 9, 1088) :0);
    }
    # 10 "sComplement_clone"
        __result_obj__0 = result;
    come_call_finalizer(sComplement_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sComplement_clone}", 10, 1090);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    # 3 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1136);
    }
    # 4 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1137));
    }
                        neo_current_frame = fr.prev;
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenBlockNode_clone"; neo_current_frame = &fr;
    struct sParenBlockNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sParenBlockNode*  result  ;
    char*  __dec_obj142  ;
    struct list$1sNode$ph* __dec_obj143;
    memset(&result, 0, sizeof(result));
    # 3 "sParenBlockNode_clone"
    # 5 "sParenBlockNode_clone"
    if(self==(void*)0) {
        # 4 "sParenBlockNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sParenBlockNode_clone"
    result=(struct sParenBlockNode* )come_increment_ref_count((struct sParenBlockNode *)come_calloc(1, sizeof(struct sParenBlockNode )*(1), "sParenBlockNode_clone", 5, 1152, "struct sParenBlockNode* "), "sParenBlockNode_clone", 5, 1153);
    # 7 "sParenBlockNode_clone"
    if(self!=((void*)0)) {
        # 6 "sParenBlockNode_clone"
        result->sline=self->sline;
    }
    # 8 "sParenBlockNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sParenBlockNode_clone"
        __right_value0 = (void*)0;
        __dec_obj142=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sParenBlockNode_clone", 7, 1154, "char* "), "sParenBlockNode_clone", 7, 1156);
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0, (void*)0, "sParenBlockNode_clone", 7, 1155);
    }
    # 9 "sParenBlockNode_clone"
    if(self!=((void*)0)) {
        # 8 "sParenBlockNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sParenBlockNode_clone"
    if(self!=((void*)0)&&self->paren_block!=((void*)0)) {
        # 9 "sParenBlockNode_clone"
        __right_value0 = (void*)0;
        __dec_obj143=result->paren_block,
        result->paren_block=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->paren_block), "sParenBlockNode_clone", 9, 1158);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sParenBlockNode_clone", 9, 1157);
    }
    # 10 "sParenBlockNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sParenBlockNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sParenBlockNode_clone}", 10, 1159);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sParenNode_clone"; neo_current_frame = &fr;
    struct sParenNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sParenNode*  result  ;
    char*  __dec_obj146  ;
    struct sNode* __dec_obj147;
    memset(&result, 0, sizeof(result));
    # 3 "sParenNode_clone"
    # 5 "sParenNode_clone"
    if(self==(void*)0) {
        # 4 "sParenNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sParenNode_clone"
    result=(struct sParenNode* )come_increment_ref_count((struct sParenNode *)come_calloc(1, sizeof(struct sParenNode )*(1), "sParenNode_clone", 5, 1215, "struct sParenNode* "), "sParenNode_clone", 5, 1216);
    # 7 "sParenNode_clone"
    if(self!=((void*)0)) {
        # 6 "sParenNode_clone"
        result->sline=self->sline;
    }
    # 8 "sParenNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sParenNode_clone"
        __right_value0 = (void*)0;
        __dec_obj146=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sParenNode_clone", 7, 1217, "char* "), "sParenNode_clone", 7, 1219);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "sParenNode_clone", 7, 1218);
    }
    # 9 "sParenNode_clone"
    if(self!=((void*)0)) {
        # 8 "sParenNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sParenNode_clone"
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        # 9 "sParenNode_clone"
        __right_value0 = (void*)0;
        __dec_obj147=result->mLeft,
        result->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft), "sParenNode_clone", 9, 1221);
        (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0, (void*)0, "sParenNode_clone", 9, 1220) :0);
    }
    # 10 "sParenNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sParenNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sParenNode_clone}", 10, 1222);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* expression_node_v97(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "expression_node_v97"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* node;
    struct sNode* __result_obj__0;
    memset(&node, 0, sizeof(node));
    # 1261 "09pre_op.nc"
    node=(struct sNode*)come_increment_ref_count(pre_position_operator(info), "09pre_op.nc", 1261, 1232);
    # 1269 "09pre_op.nc"
    if(node==((void*)0)) {
        # 1264 "09pre_op.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=expression_node_v96(info))), "09pre_op.nc", 1264, 1233);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1264, 1234):(void*)0);
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "09pre_op.nc", 1264, 1235):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1264, 1236):(void*)0);
        return __result_obj__0;
    }
    else {
        # 1267 "09pre_op.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(node, "09pre_op.nc", 1267, 1237);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1267, 1238):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "09pre_op.nc", 1267, 1239):(void*)0);
        return __result_obj__0;
    }
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "09pre_op.nc", 1270, 1240):(void*)0);
    neo_current_frame = fr.prev;
}

