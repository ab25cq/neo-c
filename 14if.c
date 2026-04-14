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

struct list_item$1sBlock$ph
{
    struct sBlock*  item  ;
    struct list_item$1sBlock$ph* prev;
    struct list_item$1sBlock$ph* next;
};

struct list$1sBlock$ph
{
    struct list_item$1sBlock$ph* head;
    struct list_item$1sBlock$ph* tail;
    int len;
    struct list_item$1sBlock$ph* it;
};

struct sIfNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock*  mIfBlock  ;
    struct list$1sNode$ph* mElifExpressionNodes;
    struct list$1sBlock$ph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    _Bool existance_result_value;
    struct sBlock*  mElseBlock  ;
};

struct sMatchNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sIfMethodNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock*  mIfBlock  ;
};

struct sAndStatmentNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock*  mIfBlock  ;
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock*  if_block  , struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock*  else_block  , _Bool guard_, _Bool existance_result_value, struct sInfo*  info  );
_Bool sIfNode_terminated(struct sIfNode* self);
char*  sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock*  sBlock_clone(struct sBlock*  self  );
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  );
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
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
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static void list$1int$_finalize(struct list$1int$* self);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void sBlock_finalize(struct sBlock*  self  );
static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self);
static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self);
static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self);
static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  );
static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  );
static void CVALUE_finalize(struct CVALUE*  self  );
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo*  info  );
_Bool sMatchNode_terminated(struct sMatchNode* self);
char*  sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo*  info  );
static void sMatchNode_finalize(struct sMatchNode* self);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo*  info  );
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char*  sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo*  info  );
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock*  if_block  , struct sInfo*  info  );
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char*  sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo*  info  );
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock*  if_block  , struct sInfo*  info  );
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char*  sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo*  info  );
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo*  info  );
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock*  item  );
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo*  info  );
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo*  info  );
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo*  info  );
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_catch(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo*  info  );
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo*  info  );
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock*  if_block  , struct list$1sNode$ph* elif_expression_nodes, struct list$1sBlock$ph* elif_blocks, int elif_num, struct sBlock*  else_block  , _Bool guard_, _Bool existance_result_value, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj1;
    struct sBlock*  __dec_obj48  ;
    struct list$1sNode$ph* __dec_obj49;
    struct list$1sBlock$ph* __dec_obj53;
    struct sBlock*  __dec_obj54  ;
    struct sBlock*  __dec_obj55  ;
    struct sIfNode* __result_obj__0;
    # 7 "14if.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIfNode*)come_increment_ref_count(self, "14if.nc", 7, 1),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 7, 3);
    # 9 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj1=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node), "14if.nc", 9, 12);
    (__dec_obj1 ? __dec_obj1 = come_decrement_ref_count(__dec_obj1, ((struct sNode*)__dec_obj1)->finalize, ((struct sNode*)__dec_obj1)->_protocol_obj, 0,0, (void*)0, "14if.nc", 9, 11) :0);
    # 10 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj48=self->mIfBlock,
    self->mIfBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(if_block), "14if.nc", 10, 371);
    come_call_finalizer(sBlock_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 10, 370);
    # 11 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj49=self->mElifExpressionNodes,
    self->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(elif_expression_nodes), "14if.nc", 11, 373);
    come_call_finalizer(list$1sNode$ph_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 11, 372);
    # 12 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj53=self->mElifBlocks,
    self->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(elif_blocks), "14if.nc", 2, 405);
    come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 2, 404);
    # 13 "14if.nc"
    self->mElifNum=elif_num;
    # 14 "14if.nc"
    self->mGuard=guard_;
    # 15 "14if.nc"
    self->existance_result_value=existance_result_value;
    # 17 "14if.nc"
    ((void*)0);
    # 24 "14if.nc"
    if(else_block) {
        # 19 "14if.nc"
        __right_value0 = (void*)0;
        __dec_obj54=self->mElseBlock,
        self->mElseBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(else_block), "14if.nc", 19, 407);
        come_call_finalizer(sBlock_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 19, 406);
    }
    else {
        # 22 "14if.nc"
        __dec_obj55=self->mElseBlock,
        self->mElseBlock=((void*)0);
        come_call_finalizer(sBlock_finalize, __dec_obj55,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 22, 408);
    }
    # 26 "14if.nc"
        __result_obj__0 = (struct sIfNode*)come_increment_ref_count(self, "14if.nc", 26, 409);
    come_call_finalizer(sIfNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 26, 416);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 26, 417):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIfNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 26, 418);
    return __result_obj__0;
}

_Bool sIfNode_terminated(struct sIfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfNode_terminated"; neo_current_frame = &fr;
    # 28 "14if.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sIfNode_kind(struct sIfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 33 "14if.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIfNode","14if.nc",33))), "14if.nc", 33, 419);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 33, 420));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "14if.nc", 33, 421));
    return __result_obj__0;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfNode_compile"; neo_current_frame = &fr;
    struct sBlock*  else_block  ;
    int elif_num;
    _Bool guard_;
    _Bool existance_result_value;
    void* __right_value0 = (void*)0;
    struct buffer*  if_expression_buffer  ;
    char*  if_result_value_name  ;
    _Bool if_result_value_name_defined;
    struct sType*  if_result_type  ;
    void* __right_value1 = (void*)0;
    struct buffer*  __dec_obj56  ;
    char*  __dec_obj57  ;
    struct sType*  __dec_obj58  ;
    struct sNode* expression_node;
    int sline;
    char* sname;
    _Bool Value;
    _Bool __result_obj__0;
    _Bool in_conditional;
    struct sBlock*  if_block  ;
    int i;
    struct sNode* expression_node2;
    _Bool Value_25;
    _Bool in_conditional_26;
    struct sBlock*  elif_node_block  ;
    char*  __dec_obj59  ;
    char*  __dec_obj60  ;
    struct CVALUE*  come_value  ;
    char*  __dec_obj61  ;
    struct sType*  __dec_obj62  ;
    struct buffer*  __dec_obj66  ;
    char*  __dec_obj67  ;
    struct sType*  __dec_obj68  ;
    memset(&else_block, 0, sizeof(else_block));
    memset(&elif_num, 0, sizeof(elif_num));
    memset(&guard_, 0, sizeof(guard_));
    memset(&existance_result_value, 0, sizeof(existance_result_value));
    memset(&if_expression_buffer, 0, sizeof(if_expression_buffer));
    memset(&if_result_value_name, 0, sizeof(if_result_value_name));
    memset(&if_result_value_name_defined, 0, sizeof(if_result_value_name_defined));
    memset(&if_result_type, 0, sizeof(if_result_type));
    memset(&expression_node, 0, sizeof(expression_node));
    memset(&sline, 0, sizeof(sline));
    memset(&sname, 0, sizeof(sname));
    memset(&Value, 0, sizeof(Value));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&if_block, 0, sizeof(if_block));
    memset(&i, 0, sizeof(i));
    memset(&expression_node2, 0, sizeof(expression_node2));
    memset(&Value_25, 0, sizeof(Value_25));
    memset(&in_conditional_26, 0, sizeof(in_conditional_26));
    memset(&elif_node_block, 0, sizeof(elif_node_block));
    memset(&come_value, 0, sizeof(come_value));
    # 38 "14if.nc"
    else_block=self->mElseBlock;
    # 39 "14if.nc"
    elif_num=self->mElifNum;
    # 40 "14if.nc"
    guard_=self->mGuard;
    # 41 "14if.nc"
    existance_result_value=self->existance_result_value;
    # 43 "14if.nc"
    if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_clone(info->if_expression_buffer), "14if.nc", 43, 422);
    # 44 "14if.nc"
    __right_value0 = (void*)0;
    if_result_value_name=(char* )come_increment_ref_count((char* )come_memdup(info->if_result_value_name, "14if.nc", 44, 423, "char* "), "14if.nc", 44, 424);
    # 45 "14if.nc"
    if_result_value_name_defined=info->if_result_value_name_defined;
    # 46 "14if.nc"
    __right_value0 = (void*)0;
    if_result_type=(struct sType* )come_increment_ref_count(sType_clone(info->if_result_type), "14if.nc", 46, 425);
    # 60 "14if.nc"
    if(existance_result_value) {
        # 49 "14if.nc"
        __right_value0 = (void*)0;
        __dec_obj56=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "14if.nc", 49, 426, "struct buffer* "), "14if.nc", 49, 427)), "14if.nc", 49, 429);
        come_call_finalizer(buffer_finalize, __dec_obj56,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 49, 428);
        # 51 "14if.nc"
        static int n=0;
        # 52 "14if.nc"
        n++;
        # 53 "14if.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj57=info->if_result_value_name,
        info->if_result_value_name=(char*)come_increment_ref_count(xsprintf("_if_result_value\%s",((char* )(__right_value0=int_to_string(n)))), "14if.nc", 53, 431);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 53, 430);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 53, 432));
        # 55 "14if.nc"
        info->if_result_value_name_defined=(_Bool)0;
        # 57 "14if.nc"
        __dec_obj58=info->if_result_type,
        info->if_result_type=((void*)0);
        come_call_finalizer(sType_finalize, __dec_obj58,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 57, 433);
    }
    # 65 "14if.nc"
    if(existance_result_value) {
        # 61 "14if.nc"
        add_come_code(info,"({");
    }
    # 65 "14if.nc"
    expression_node=self->mExpressionNode;
    # 67 "14if.nc"
    sline=info->sline;
    # 68 "14if.nc"
    sname=info->sname;
    # 70 "14if.nc"
    add_come_code(info,"if(");
    # 76 "14if.nc"
    Value=transpile_conditional_with_free_right_object_value(expression_node,info);
    if(!Value) {
        # 73 "14if.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 73, 434);
        (if_result_value_name = come_decrement_ref_count(if_result_value_name, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 73, 435));
        come_call_finalizer(sType_finalize, if_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 73, 436);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 76 "14if.nc"
    in_conditional=info->in_conditional;
    # 77 "14if.nc"
    info->in_conditional=(_Bool)1;
    # 78 "14if.nc"
    add_come_code(info,") {\n");
    # 79 "14if.nc"
    info->in_conditional=in_conditional;
    # 81 "14if.nc"
    if_block=self->mIfBlock;
    # 83 "14if.nc"
    transpile_block(if_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,existance_result_value,(_Bool)0,(_Bool)0);
    # 85 "14if.nc"
    add_come_code(info,"}\n");
    # 111 "14if.nc"
    if(elif_num>0) {
        # 109 "14if.nc"
        for(i=0        ;i<elif_num;i++){
            # 90 "14if.nc"
            __right_value0 = (void*)0;
            expression_node2=((struct sNode*)(__right_value0=list$1sNode$ph_operator_load_element(self->mElifExpressionNodes,i)));
            # 92 "14if.nc"
            add_come_code(info,"else if(");
            # 98 "14if.nc"
            Value_25=transpile_conditional_with_free_right_object_value(expression_node2,info);
            if(!Value_25) {
                # 95 "14if.nc"
                                __result_obj__0 = (_Bool)0;
                come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 95, 455);
                (if_result_value_name = come_decrement_ref_count(if_result_value_name, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 95, 456));
                come_call_finalizer(sType_finalize, if_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 95, 457);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 98 "14if.nc"
            in_conditional_26=info->in_conditional;
            # 99 "14if.nc"
            info->in_conditional=(_Bool)1;
            # 100 "14if.nc"
            add_come_code(info,") {\n");
            # 101 "14if.nc"
            info->in_conditional=in_conditional_26;
            # 103 "14if.nc"
            __right_value0 = (void*)0;
            elif_node_block=((struct sBlock* )(__right_value0=list$1sBlock$ph_operator_load_element(self->mElifBlocks,i)));
            # 105 "14if.nc"
            transpile_block(elif_node_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,existance_result_value,(_Bool)0,(_Bool)0);
            # 107 "14if.nc"
            add_come_code(info,"}\n");
        }
    }
    # 119 "14if.nc"
    if(else_block) {
        # 112 "14if.nc"
        add_come_code(info,"else {\n");
        # 114 "14if.nc"
        transpile_block(else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,existance_result_value,(_Bool)0,(_Bool)0);
        # 116 "14if.nc"
        add_come_code(info,"}\n");
    }
    # 119 "14if.nc"
    __dec_obj59=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 119, 476);
    # 120 "14if.nc"
    __dec_obj60=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 120, 477);
    # 141 "14if.nc"
    if(existance_result_value) {
        # 123 "14if.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        add_come_code(info,((char*)(__right_value1=xsprintf("\%s;})",((char* )(__right_value0=string_to_string(info->if_result_value_name)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 123, 478));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 123, 479));
        # 125 "14if.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        come_value=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE* )come_increment_ref_count((struct CVALUE *)come_calloc(1, sizeof(struct CVALUE )*(1), "14if.nc", 125, 480, "struct CVALUE* "), "14if.nc", 125, 481)), "14if.nc", 125, 482);
        # 127 "14if.nc"
        __right_value0 = (void*)0;
        __dec_obj61=come_value->c_value,
        come_value->c_value=(char* )come_increment_ref_count(buffer_to_string(info->if_expression_buffer), "14if.nc", 127, 484);
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 127, 483);
        # 128 "14if.nc"
        __right_value0 = (void*)0;
        __dec_obj62=come_value->type,
        come_value->type=(struct sType* )come_increment_ref_count(sType_clone(info->if_result_type), "14if.nc", 128, 486);
        come_call_finalizer(sType_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 128, 485);
        # 129 "14if.nc"
        come_value->var=((void*)0);
        # 131 "14if.nc"
        add_come_last_code(info,"%s",come_value->c_value);
        # 133 "14if.nc"
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE* )come_increment_ref_count(come_value, "14if.nc", 133, 506));
        # 135 "14if.nc"
        __dec_obj66=info->if_expression_buffer,
        info->if_expression_buffer=(struct buffer* )come_increment_ref_count(if_expression_buffer, "14if.nc", 135, 508);
        come_call_finalizer(buffer_finalize, __dec_obj66,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 135, 507);
        # 136 "14if.nc"
        __dec_obj67=info->if_result_value_name,
        info->if_result_value_name=(char* )come_increment_ref_count(if_result_value_name, "14if.nc", 136, 510);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 136, 509);
        # 137 "14if.nc"
        info->if_result_value_name_defined=if_result_value_name_defined;
        # 138 "14if.nc"
        __dec_obj68=info->if_result_type,
        info->if_result_type=(struct sType* )come_increment_ref_count(if_result_type, "14if.nc", 138, 512);
        come_call_finalizer(sType_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 138, 511);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 141, 513);
    }
    # 141 "14if.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(buffer_finalize, if_expression_buffer, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 141, 514);
    (if_result_value_name = come_decrement_ref_count(if_result_value_name, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 141, 515));
    come_call_finalizer(sType_finalize, if_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 141, 516);
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
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 2));
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 4);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 5):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 6, "struct sNode*"), "sNode_clone", 5, 7);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 8);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 9):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 10):(void*)0);
    return __result_obj__0;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj5;
    struct sVarTable*  __dec_obj47  ;
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
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 13, "struct sBlock* "), "sBlock_clone", 5, 14);
    # 7 "sBlock_clone"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 6 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj5=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 2, 46);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 2, 45);
    }
    # 8 "sBlock_clone"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 7 "sBlock_clone"
        __right_value0 = (void*)0;
        __dec_obj47=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 366);
        come_call_finalizer(sVarTable_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 365);
    }
    # 9 "sBlock_clone"
    if(self!=((void*)0)) {
        # 8 "sBlock_clone"
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
    # 9 "sBlock_clone"
        __result_obj__0 = result;
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 369);
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
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 15);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 18);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 19, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 23)), "./neo-c.h", 1513, 24);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 39));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 40));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 41);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 42);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 43);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 17);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 16):(void*)0);
    }
            neo_current_frame = fr.prev;
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 20);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 21);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 22);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj2;
    struct list_item$1sNode$ph* litem_0;
    struct sNode* __dec_obj3;
    struct list_item$1sNode$ph* litem_1;
    struct sNode* __dec_obj4;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 25):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 26, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 27);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj2=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 29);
        (__dec_obj2 ? __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 28) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 30, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 31);
        # 1546 "./neo-c.h"
        litem_0->prev=self->head;
        # 1547 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj3=litem_0->item,
        litem_0->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 33);
        (__dec_obj3 ? __dec_obj3 = come_decrement_ref_count(__dec_obj3, ((struct sNode*)__dec_obj3)->finalize, ((struct sNode*)__dec_obj3)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 32) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_0;
        # 1551 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 34, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 35);
        # 1556 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj4=litem_1->item,
        litem_1->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 37);
        (__dec_obj4 ? __dec_obj4 = come_decrement_ref_count(__dec_obj4, ((struct sNode*)__dec_obj4)->finalize, ((struct sNode*)__dec_obj4)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 36) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_1;
        # 1561 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 38):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 44);
    }
            neo_current_frame = fr.prev;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj46;
    memset(&result, 0, sizeof(result));
    # 3 "sVarTable_clone"
    # 5 "sVarTable_clone"
    if(self==(void*)0) {
        # 4 "sVarTable_clone"
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 47);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 48);
        return __result_obj__0;
    }
    # 5 "sVarTable_clone"
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 49, "struct sVarTable* "), "sVarTable_clone", 5, 50);
    # 7 "sVarTable_clone"
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        # 6 "sVarTable_clone"
        __right_value0 = (void*)0;
        __dec_obj46=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 76, 361);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 76, 360);
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
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 362);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 363);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 364);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj7;
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
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3444, 51);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 8, 91);
        return __result_obj__0;
    }
    # 3447 "./neo-c.h"
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3447, 92, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3447, 112)), "./neo-c.h", 3447, 113);
    # 3449 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj7=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3449, 114, "struct list$1char$ph*"), "./neo-c.h", 3449, 115)), "./neo-c.h", 3449, 117);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3449, 116);
    # 3471 "./neo-c.h"
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        # 3452 "./neo-c.h"
        # 3453 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sVar* ));
        # 3455 "./neo-c.h"
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3455, 133),(_Bool)1), "./neo-c.h", 3455, 134);
        # 3469 "./neo-c.h"
        if(1&&1) {
            # 3458 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3458, 174, "char* "), "./neo-c.h", 3458, 175),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3458, 342),(_Bool)0);
        }
        else if(1) {
            # 3461 "./neo-c.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3461, 343, "char* "), "./neo-c.h", 3461, 344),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3461, 345),(_Bool)0);
        }
        else if(1) {
            # 3464 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3464, 346),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3464, 347),(_Bool)0);
        }
        else {
            # 3467 "./neo-c.h"
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3467, 348),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3467, 349),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 350);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 351);
    }
    # 3471 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3471, 352);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 353);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 354);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_2;
    memset(&i, 0, sizeof(i));
    memset(&i_2, 0, sizeof(i_2));
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 86);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_2=0    ;i_2<self->size;i_2++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_2]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_2] = come_decrement_ref_count(self->keys[i_2], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 87));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 88);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 89));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 90));
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    # 1 "sVar_finalize"
    # 3 "sVar_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sVar_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 52));
    }
    # 4 "sVar_finalize"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 3 "sVar_finalize"
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 53));
    }
    # 5 "sVar_finalize"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 4 "sVar_finalize"
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 84);
    }
    # 6 "sVar_finalize"
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        # 5 "sVar_finalize"
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 85));
    }
                    neo_current_frame = fr.prev;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    # 1 "sType_finalize"
    # 3 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 2 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 54);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 55);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 58);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 59);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 60):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 61):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 62));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 63));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 64));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 65));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 66));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 67));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 68));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 69));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 70);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 71);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 73);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 74);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 75);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 76));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 77);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 80);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 81);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 82):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 83);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 57);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 56);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 72);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 79);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 78));
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj6;
    struct map$2char$phsVar$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 3338 "./neo-c.h"
    # 3340 "./neo-c.h"
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3340, 93, "char** "))), "./neo-c.h", 3340, 94);
    # 3341 "./neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3341, 95, "struct sVar** "))), "./neo-c.h", 3341, 96);
    # 3342 "./neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3342, 97, "unsigned int*"))), "./neo-c.h", 3342, 98);
    # 3343 "./neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3343, 99, "_Bool*"))), "./neo-c.h", 3343, 100);
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
    __dec_obj6=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3354, 101, "struct list$1char$ph*"), "./neo-c.h", 3354, 105)), "./neo-c.h", 2, 108);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 2, 107);
    # 3356 "./neo-c.h"
    self->it=0;
    # 3358 "./neo-c.h"
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3358, 109);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 110);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 111);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 102);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 103);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 104);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 106);
    }
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_3  ;
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
    memset(&result_3,0,sizeof(char* ));
    # 3779 "./neo-c.h"
        __result_obj__0 = result_3;
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
    char*  result_4  ;
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
    memset(&result_4,0,sizeof(char* ));
    # 3798 "./neo-c.h"
        __result_obj__0 = result_4;
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 118);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 119);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 120);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 121);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 122);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 123);
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
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 124);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 125);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 126);
                return __result_obj__0;
            }
        }
        else {
            # 3536 "./neo-c.h"
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 127);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 128);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 129);
            return __result_obj__0;
        }
    }
    # 3540 "./neo-c.h"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 130);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 131);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 132);
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
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 135));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3971, 136);
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
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3990, 151));
                    # 3991 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3991, 152);
                }
                else {
                    # 3994 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 4003 "./neo-c.h"
                if(1) {
                    # 3997 "./neo-c.h"
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3997, 153);
                    # 3998 "./neo-c.h"
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 3998, 154);
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4021, 155);
            }
            else {
                # 4024 "./neo-c.h"
                self->keys[it]=key;
            }
            # 4033 "./neo-c.h"
            if(1) {
                # 4027 "./neo-c.h"
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4027, 156);
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
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4041, 171));
    }
    # 4044 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4044, 172));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4044, 173);
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
    int i_5;
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
    memset(&i_5, 0, sizeof(i_5));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    # 3806 "./neo-c.h"
    # 3808 "./neo-c.h"
    old_size=self->size;
    # 3809 "./neo-c.h"
    size=self->size*10;
    # 3810 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 137, "char** "))), "./neo-c.h", 3810, 138);
    # 3811 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3811, 139, "struct sVar** "))), "./neo-c.h", 3811, 140);
    # 3812 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 141, "unsigned int*"))), "./neo-c.h", 3812, 142);
    # 3813 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 143, "_Bool*"))), "./neo-c.h", 3813, 144);
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
    for(i_5=0    ;i_5<old_size;i_5++){
        # 3826 "./neo-c.h"
        if(!self->item_existance[i_5]) {
            # 3823 "./neo-c.h"
            continue;
        }
        # 3826 "./neo-c.h"
        key_hash=self->hashes[i_5];
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
                keys[n]=self->keys[i_5];
                # 3846 "./neo-c.h"
                items[n]=self->items[i_5];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 145));
    # 3856 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 146));
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
    struct list_item$1char$ph* it_6;
    int i_7;
    struct list_item$1char$ph* prev_it_8;
    struct list_item$1char$ph* it_9;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_10;
    struct list_item$1char$ph* prev_it_11;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_6, 0, sizeof(it_6));
    memset(&i_7, 0, sizeof(i_7));
    memset(&prev_it_8, 0, sizeof(prev_it_8));
    memset(&it_9, 0, sizeof(it_9));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_10, 0, sizeof(i_10));
    memset(&prev_it_11, 0, sizeof(prev_it_11));
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 148);
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
        it_6=self->head;
        # 1959 "./neo-c.h"
        i_7=0;
        # 1981 "./neo-c.h"
        while(it_6!=((void*)0)) {
            # 1966 "./neo-c.h"
            if(i_7==head) {
                # 1962 "./neo-c.h"
                self->tail=it_6->prev;
                # 1963 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "./neo-c.h"
            if(i_7>=head) {
                # 1967 "./neo-c.h"
                prev_it_8=it_6;
                # 1969 "./neo-c.h"
                it_6=it_6->next;
                # 1970 "./neo-c.h"
                i_7++;
                # 1972 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 149);
                # 1974 "./neo-c.h"
                self->len--;
            }
            else {
                # 1977 "./neo-c.h"
                it_6=it_6->next;
                # 1978 "./neo-c.h"
                i_7++;
            }
        }
    }
    else {
        # 1983 "./neo-c.h"
        it_9=self->head;
        # 1985 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "./neo-c.h"
        tail_it=((void*)0);
        # 1989 "./neo-c.h"
        i_10=0;
        # 2015 "./neo-c.h"
        while(it_9!=((void*)0)) {
            # 1994 "./neo-c.h"
            if(i_10==head) {
                # 1992 "./neo-c.h"
                head_prev_it=it_9->prev;
            }
            # 1998 "./neo-c.h"
            if(i_10==tail) {
                # 1995 "./neo-c.h"
                tail_it=it_9;
            }
            # 2013 "./neo-c.h"
            if(i_10>=head&&i_10<tail) {
                # 2000 "./neo-c.h"
                prev_it_11=it_9;
                # 2002 "./neo-c.h"
                it_9=it_9->next;
                # 2003 "./neo-c.h"
                i_10++;
                # 2005 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 150);
                # 2007 "./neo-c.h"
                self->len--;
            }
            else {
                # 2010 "./neo-c.h"
                it_9=it_9->next;
                # 2011 "./neo-c.h"
                i_10++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 147);
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
    char*  __dec_obj8  ;
    struct list_item$1char$ph* litem_12;
    char*  __dec_obj9  ;
    struct list_item$1char$ph* litem_13;
    char*  __dec_obj10  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 157));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 158, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 159);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj8=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 161);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 160);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 162, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 163);
        # 1631 "./neo-c.h"
        litem_12->prev=self->head;
        # 1632 "./neo-c.h"
        litem_12->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj9=litem_12->item,
        litem_12->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 165);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 164);
        # 1635 "./neo-c.h"
        self->tail=litem_12;
        # 1636 "./neo-c.h"
        self->head->next=litem_12;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 166, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 167);
        # 1641 "./neo-c.h"
        litem_13->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_13->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj10=litem_13->item,
        litem_13->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 169);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 168);
        # 1645 "./neo-c.h"
        self->tail->next=litem_13;
        # 1646 "./neo-c.h"
        self->tail=litem_13;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 170));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    struct sType*  __dec_obj44  ;
    char*  __dec_obj45  ;
    memset(&result, 0, sizeof(result));
    # 3 "sVar_clone"
    # 5 "sVar_clone"
    if(self==(void*)0) {
        # 4 "sVar_clone"
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 176);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 177);
        return __result_obj__0;
    }
    # 5 "sVar_clone"
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 178, "struct sVar* "), "sVar_clone", 5, 179);
    # 7 "sVar_clone"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 6 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj11=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 180, "char* "), "sVar_clone", 6, 182);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 181);
    }
    # 8 "sVar_clone"
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        # 7 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj12=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 183, "char* "), "sVar_clone", 7, 185);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 184);
    }
    # 9 "sVar_clone"
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        # 8 "sVar_clone"
        __right_value0 = (void*)0;
        __dec_obj44=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 335);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 334);
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
        __dec_obj45=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 336, "char* "), "sVar_clone", 12, 338);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 337);
    }
    # 14 "sVar_clone"
    if(self!=((void*)0)) {
        # 13 "sVar_clone"
        result->no_output_come_code=self->no_output_come_code;
    }
    # 14 "sVar_clone"
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 339);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 340);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 341);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj13  ;
    struct sType*  __dec_obj14  ;
    struct list$1sType$ph* __dec_obj18;
    struct sType*  __dec_obj19  ;
    struct sNode* __dec_obj20;
    struct sNode* __dec_obj21;
    char*  __dec_obj22  ;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    struct list$1sNode$ph* __dec_obj30;
    struct list$1sNode$ph* __dec_obj31;
    struct list$1int$* __dec_obj32;
    struct list$1int$* __dec_obj33;
    struct sType*  __dec_obj34  ;
    char*  __dec_obj35  ;
    struct list$1sType$ph* __dec_obj36;
    struct list$1char$ph* __dec_obj40;
    struct sType*  __dec_obj41  ;
    struct sNode* __dec_obj42;
    struct list$1sNode$ph* __dec_obj43;
    memset(&result, 0, sizeof(result));
    # 3 "sType_clone"
    # 5 "sType_clone"
    if(self==(void*)0) {
        # 4 "sType_clone"
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 186);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 187);
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 188, "struct sType* "), "sType_clone", 5, 189);
    # 7 "sType_clone"
    if(self!=((void*)0)) {
        # 6 "sType_clone"
        result->mClass=self->mClass;
    }
    # 8 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 7 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj13=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 191);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 190);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj14=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 193);
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 192);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj18=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mGenericsTypes), "sType_clone", 76, 223);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 222);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj19=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 225);
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 224);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj20=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 227);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 226) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj21=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 229);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 228) :0);
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
        __dec_obj22=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 230, "char* "), "sType_clone", 14, 232);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 231);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj23=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 233, "char* "), "sType_clone", 15, 235);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 234);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj24=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 236, "char* "), "sType_clone", 16, 238);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 237);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj25=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 239, "char* "), "sType_clone", 17, 241);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 240);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj26=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 242, "char* "), "sType_clone", 18, 244);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 243);
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
        __dec_obj27=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 245, "char* "), "sType_clone", 49, 247);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 246);
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
        __dec_obj28=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 248, "char* "), "sType_clone", 51, 250);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 249);
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
        __dec_obj29=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 251, "char* "), "sType_clone", 54, 253);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 252);
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
        __dec_obj30=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mArrayNum), "sType_clone", 57, 265);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj30,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 264);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj31=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mVarNameArrayNum), "sType_clone", 58, 267);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 266);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj32=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$_clone(self->mArrayStatic), "sType_clone", 76, 287);
        come_call_finalizer(list$1int$_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 286);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj33=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$_clone(self->mArrayRestrict), "sType_clone", 60, 289);
        come_call_finalizer(list$1int$_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 288);
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
        __dec_obj34=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 291);
        come_call_finalizer(sType_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 290);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj35=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 292, "char* "), "sType_clone", 67, 294);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 293);
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
        __dec_obj36=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->mParamTypes), "sType_clone", 71, 296);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 295);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj40=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_clone(self->mParamNames), "sType_clone", 72, 324);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj40,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 323);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj41=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 326);
        come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 325);
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
        __dec_obj42=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 328);
        (__dec_obj42 ? __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 327) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj43=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_clone(self->mHeapArrayNum), "sType_clone", 76, 330);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 329);
    }
    # 77 "sType_clone"
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 331);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 332);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 333);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_clone"; neo_current_frame = &fr;
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 194);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 195);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 196, "struct list$1sType$ph*"), "./neo-c.h", 1513, 200)), "./neo-c.h", 1513, 201);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 216));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 217));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 218);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 219);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 220);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 197);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 198);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 199);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj15  ;
    struct list_item$1sType$ph* litem_14;
    struct sType*  __dec_obj16  ;
    struct list_item$1sType$ph* litem_15;
    struct sType*  __dec_obj17  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_14, 0, sizeof(litem_14));
    memset(&litem_15, 0, sizeof(litem_15));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 202);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 203, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 204);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj15=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 206);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 205);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 207, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 208);
        # 1546 "./neo-c.h"
        litem_14->prev=self->head;
        # 1547 "./neo-c.h"
        litem_14->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj16=litem_14->item,
        litem_14->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 210);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 209);
        # 1550 "./neo-c.h"
        self->tail=litem_14;
        # 1551 "./neo-c.h"
        self->head->next=litem_14;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 211, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 212);
        # 1556 "./neo-c.h"
        litem_15->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_15->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj17=litem_15->item,
        litem_15->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 214);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 213);
        # 1560 "./neo-c.h"
        self->tail->next=litem_15;
        # 1561 "./neo-c.h"
        self->tail=litem_15;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 215);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 221);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_clone"; neo_current_frame = &fr;
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 254);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 255);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 256, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 257)), "./neo-c.h", 1513, 258);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 259));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 260));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 261);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 262);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 263);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_clone"; neo_current_frame = &fr;
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 268);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 269);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 270, "struct list$1int$*"), "./neo-c.h", 1513, 274)), "./neo-c.h", 1513, 275);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 282);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 283);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 284);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 271);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 272);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 273);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_16;
    struct list_item$1int$* litem_17;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_16, 0, sizeof(litem_16));
    memset(&litem_17, 0, sizeof(litem_17));
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 276, "struct list_item$1int$*"))), "./neo-c.h", 1534, 277);
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
        litem_16=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 278, "struct list_item$1int$*"))), "./neo-c.h", 1544, 279);
        # 1546 "./neo-c.h"
        litem_16->prev=self->head;
        # 1547 "./neo-c.h"
        litem_16->next=((void*)0);
        # 1548 "./neo-c.h"
        litem_16->item=item;
        # 1550 "./neo-c.h"
        self->tail=litem_16;
        # 1551 "./neo-c.h"
        self->head->next=litem_16;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 280, "struct list_item$1int$*"))), "./neo-c.h", 1554, 281);
        # 1556 "./neo-c.h"
        litem_17->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_17->next=((void*)0);
        # 1558 "./neo-c.h"
        litem_17->item=item;
        # 1560 "./neo-c.h"
        self->tail->next=litem_17;
        # 1561 "./neo-c.h"
        self->tail=litem_17;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 285);
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_clone"; neo_current_frame = &fr;
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 297);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 298);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 299, "struct list$1char$ph*"), "./neo-c.h", 1513, 300)), "./neo-c.h", 1513, 301);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 316, "char* "), "./neo-c.h", 1518, 317));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 318, "char* "), "./neo-c.h", 1521, 319));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 320);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 321);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 322);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj37  ;
    struct list_item$1char$ph* litem_18;
    char*  __dec_obj38  ;
    struct list_item$1char$ph* litem_19;
    char*  __dec_obj39  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_18, 0, sizeof(litem_18));
    memset(&litem_19, 0, sizeof(litem_19));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 302));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 303, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 304);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj37=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 306);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 305);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 307, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 308);
        # 1546 "./neo-c.h"
        litem_18->prev=self->head;
        # 1547 "./neo-c.h"
        litem_18->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj38=litem_18->item,
        litem_18->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 310);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 309);
        # 1550 "./neo-c.h"
        self->tail=litem_18;
        # 1551 "./neo-c.h"
        self->head->next=litem_18;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 311, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 312);
        # 1556 "./neo-c.h"
        litem_19->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_19->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj39=litem_19->item,
        litem_19->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 314);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 313);
        # 1560 "./neo-c.h"
        self->tail->next=litem_19;
        # 1561 "./neo-c.h"
        self->tail=litem_19;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 315));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_20;
    memset(&i, 0, sizeof(i));
    memset(&i_20, 0, sizeof(i_20));
    # 3389 "./neo-c.h"
    # 3398 "./neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3397 "./neo-c.h"
        if(self->item_existance[i]) {
            # 3396 "./neo-c.h"
            if(1) {
                # 3394 "./neo-c.h"
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 355);
            }
        }
    }
    # 3398 "./neo-c.h"
    come_free((char*)self->items);
    # 3407 "./neo-c.h"
    for(i_20=0    ;i_20<self->size;i_20++){
        # 3406 "./neo-c.h"
        if(self->item_existance[i_20]) {
            # 3405 "./neo-c.h"
            if(1) {
                # 3403 "./neo-c.h"
                (self->keys[i_20] = come_decrement_ref_count(self->keys[i_20], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 356));
            }
        }
    }
    # 3407 "./neo-c.h"
    come_free((char*)self->keys);
    # 3409 "./neo-c.h"
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 357);
    # 3411 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 358));
    # 3412 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 359));
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    # 1 "sBlock_finalize"
    # 3 "sBlock_finalize"
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        # 2 "sBlock_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 367);
    }
    # 4 "sBlock_finalize"
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        # 3 "sBlock_finalize"
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 368);
    }
        neo_current_frame = fr.prev;
}

static struct list$1sBlock$ph* list$1sBlock$ph$p_clone(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sBlock$ph* result;
    struct list_item$1sBlock$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1513 "./neo-c.h"
    if(self==((void*)0)) {
        # 1511 "./neo-c.h"
                __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 374);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3, 377);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "./neo-c.h", 1513, 378, "struct list$1sBlock$ph*"), "./neo-c.h", 1513, 382)), "./neo-c.h", 1513, 383);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "./neo-c.h", 1518, 398));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sBlock$ph_add(result,(struct sBlock* )come_increment_ref_count(sBlock_clone(it->item), "./neo-c.h", 1521, 399));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 400);
    come_call_finalizer(list$1sBlock$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 401);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 402);
    return __result_obj__0;
}

static void list$1sBlock$ph$p_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
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
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 376);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sBlock$ph$p_finalize(struct list_item$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sBlock$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1sBlock$ph$p_finalize"
    # 3 "list_item$1sBlock$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1sBlock$ph$p_finalize"
        come_call_finalizer(sBlock_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sBlock$ph$p_finalize}", 2, 375);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sBlock$ph* list$1sBlock$ph_initialize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_initialize"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1sBlock$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 379);
    come_call_finalizer(list$1sBlock$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 380);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sBlock$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 381);
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_add(struct list$1sBlock$ph* self, struct sBlock*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_add"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sBlock$ph* litem;
    struct sBlock*  __dec_obj50  ;
    struct list_item$1sBlock$ph* litem_21;
    struct sBlock*  __dec_obj51  ;
    struct list_item$1sBlock$ph* litem_22;
    struct sBlock*  __dec_obj52  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_21, 0, sizeof(litem_21));
    memset(&litem_22, 0, sizeof(litem_22));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 384);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1534, 385, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1534, 386);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj50=litem->item,
        litem->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1538, 388);
        come_call_finalizer(sBlock_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 387);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1544, 389, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1544, 390);
        # 1546 "./neo-c.h"
        litem_21->prev=self->head;
        # 1547 "./neo-c.h"
        litem_21->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj51=litem_21->item,
        litem_21->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1548, 392);
        come_call_finalizer(sBlock_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 391);
        # 1550 "./neo-c.h"
        self->tail=litem_21;
        # 1551 "./neo-c.h"
        self->head->next=litem_21;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1554, 393, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1554, 394);
        # 1556 "./neo-c.h"
        litem_22->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_22->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj52=litem_22->item,
        litem_22->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1558, 396);
        come_call_finalizer(sBlock_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 395);
        # 1560 "./neo-c.h"
        self->tail->next=litem_22;
        # 1561 "./neo-c.h"
        self->tail=litem_22;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 397);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sBlock$ph_finalize(struct list$1sBlock$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sBlock$ph* it;
    struct list_item$1sBlock$ph* prev_it;
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
        come_call_finalizer(list_item$1sBlock$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 403);
    }
        neo_current_frame = fr.prev;
}

static void sIfNode_finalize(struct sIfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfNode_finalize"; neo_current_frame = &fr;
    # 1 "sIfNode_finalize"
    # 3 "sIfNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sIfNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIfNode_finalize", 2, 410));
    }
    # 4 "sIfNode_finalize"
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        # 3 "sIfNode_finalize"
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0,(void*)0, "sIfNode_finalize", 3, 411):(void*)0);
    }
    # 5 "sIfNode_finalize"
    if(self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        # 4 "sIfNode_finalize"
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_finalize}", 4, 412);
    }
    # 6 "sIfNode_finalize"
    if(self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        # 5 "sIfNode_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_finalize}", 5, 413);
    }
    # 7 "sIfNode_finalize"
    if(self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        # 6 "sIfNode_finalize"
        come_call_finalizer(list$1sBlock$ph$p_finalize, self->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_finalize}", 6, 414);
    }
    # 8 "sIfNode_finalize"
    if(self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        # 7 "sIfNode_finalize"
        come_call_finalizer(sBlock_finalize, self->mElseBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_finalize}", 7, 415);
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
    struct sNode* default_value_23;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sNode*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 437);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 438):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 439):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2161, 440):(void*)0);
    }
    # 2165 "./neo-c.h"
    if(position<0) {
        # 2162 "./neo-c.h"
        position+=self->len;
    }
    # 2165 "./neo-c.h"
    it=self->head;
    # 2166 "./neo-c.h"
    i=0;
    # 2173 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2171 "./neo-c.h"
        if(position==i) {
            # 2169 "./neo-c.h"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 441);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 442):(void*)0);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_23,0,sizeof(struct sNode*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_23, "./neo-c.h", 2177, 443);
    ((default_value_23) ? default_value_23 = come_decrement_ref_count(default_value_23, ((struct sNode*)default_value_23)->finalize, ((struct sNode*)default_value_23)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 444):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 445):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_24;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sNode*));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2158, 446);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 447):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2158, 448):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2161, 449):(void*)0);
    }
    # 2165 "./neo-c.h"
    if(position<0) {
        # 2162 "./neo-c.h"
        position+=self->len;
    }
    # 2165 "./neo-c.h"
    it=self->head;
    # 2166 "./neo-c.h"
    i=0;
    # 2173 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2171 "./neo-c.h"
        if(position==i) {
            # 2169 "./neo-c.h"
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2169, 450);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 451):(void*)0);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_24,0,sizeof(struct sNode*));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_24, "./neo-c.h", 2177, 452);
    ((default_value_24) ? default_value_24 = come_decrement_ref_count(default_value_24, ((struct sNode*)default_value_24)->finalize, ((struct sNode*)default_value_24)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 453):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2177, 454):(void*)0);
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph$p_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_27  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sBlock* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 458);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 459);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 460);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 461);
    }
    # 2165 "./neo-c.h"
    if(position<0) {
        # 2162 "./neo-c.h"
        position+=self->len;
    }
    # 2165 "./neo-c.h"
    it=self->head;
    # 2166 "./neo-c.h"
    i=0;
    # 2173 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2171 "./neo-c.h"
        if(position==i) {
            # 2169 "./neo-c.h"
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 462);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 463);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_27,0,sizeof(struct sBlock* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_27, "./neo-c.h", 2177, 464);
    come_call_finalizer(sBlock_finalize, default_value_27, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 465);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 466);
    return __result_obj__0;
}

static struct sBlock*  list$1sBlock$ph_operator_load_element(struct list$1sBlock$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_operator_load_element"; neo_current_frame = &fr;
    struct sBlock*  default_value  ;
    struct sBlock*  __result_obj__0  ;
    struct list_item$1sBlock$ph* it;
    int i;
    struct sBlock*  default_value_28  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(struct sBlock* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 467);
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 468);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 469);
        return __result_obj__0;
        come_call_finalizer(sBlock_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 470);
    }
    # 2165 "./neo-c.h"
    if(position<0) {
        # 2162 "./neo-c.h"
        position+=self->len;
    }
    # 2165 "./neo-c.h"
    it=self->head;
    # 2166 "./neo-c.h"
    i=0;
    # 2173 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2171 "./neo-c.h"
        if(position==i) {
            # 2169 "./neo-c.h"
                        __result_obj__0 = (struct sBlock* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 471);
            neo_current_frame = fr.prev;
            come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 472);
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_28,0,sizeof(struct sBlock* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(default_value_28, "./neo-c.h", 2177, 473);
    come_call_finalizer(sBlock_finalize, default_value_28, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 474);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 475);
    return __result_obj__0;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_push_back"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1CVALUE$ph* litem;
    struct CVALUE*  __dec_obj63  ;
    struct list_item$1CVALUE$ph* litem_29;
    struct CVALUE*  __dec_obj64  ;
    struct list_item$1CVALUE$ph* litem_30;
    struct CVALUE*  __dec_obj65  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_29, 0, sizeof(litem_29));
    memset(&litem_30, 0, sizeof(litem_30));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 492);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1619, 493, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1619, 494);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj63=litem->item,
        litem->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1623, 496);
        come_call_finalizer(CVALUE_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 495);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1629, 497, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1629, 498);
        # 1631 "./neo-c.h"
        litem_29->prev=self->head;
        # 1632 "./neo-c.h"
        litem_29->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj64=litem_29->item,
        litem_29->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1633, 500);
        come_call_finalizer(CVALUE_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 499);
        # 1635 "./neo-c.h"
        self->tail=litem_29;
        # 1636 "./neo-c.h"
        self->head->next=litem_29;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value0=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./neo-c.h", 1639, 501, "struct list_item$1CVALUE$ph*"))), "./neo-c.h", 1639, 502);
        # 1641 "./neo-c.h"
        litem_30->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_30->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj65=litem_30->item,
        litem_30->item=(struct CVALUE* )come_increment_ref_count(item, "./neo-c.h", 1643, 504);
        come_call_finalizer(CVALUE_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 503);
        # 1645 "./neo-c.h"
        self->tail->next=litem_30;
        # 1646 "./neo-c.h"
        self->tail=litem_30;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(CVALUE_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 505);
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
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 487));
    }
    # 4 "CVALUE_finalize"
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        # 3 "CVALUE_finalize"
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 488);
    }
    # 5 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        # 4 "CVALUE_finalize"
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 489));
    }
    # 6 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        # 5 "CVALUE_finalize"
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 490));
    }
    # 7 "CVALUE_finalize"
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        # 6 "CVALUE_finalize"
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 491));
    }
            neo_current_frame = fr.prev;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMatchNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj69;
    struct sNode* __dec_obj70;
    struct sMatchNode* __result_obj__0;
    # 149 "14if.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sMatchNode*)come_increment_ref_count(self, "14if.nc", 149, 517),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 149, 518);
    # 151 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj69=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node), "14if.nc", 151, 520);
    (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0, (void*)0, "14if.nc", 151, 519) :0);
    # 152 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj70=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node), "14if.nc", 152, 522);
    (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0, (void*)0, "14if.nc", 152, 521) :0);
    # 155 "14if.nc"
        __result_obj__0 = (struct sMatchNode*)come_increment_ref_count(self, "14if.nc", 155, 523);
    come_call_finalizer(sMatchNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 155, 527);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 155, 528):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 155, 529):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sMatchNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 155, 530);
    return __result_obj__0;
}

_Bool sMatchNode_terminated(struct sMatchNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMatchNode_terminated"; neo_current_frame = &fr;
    # 157 "14if.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sMatchNode_kind(struct sMatchNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMatchNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 162 "14if.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sMatch","14if.nc",162))), "14if.nc", 162, 531);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 162, 532));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "14if.nc", 162, 533));
    return __result_obj__0;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMatchNode_compile"; neo_current_frame = &fr;
    struct sNode* it_node;
    struct sNode* match_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool Value_31;
    memset(&it_node, 0, sizeof(it_node));
    memset(&match_node, 0, sizeof(match_node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&Value_31, 0, sizeof(Value_31));
    # 167 "14if.nc"
    it_node=(struct sNode*)come_increment_ref_count(self->it_node, "14if.nc", 167, 534);
    # 168 "14if.nc"
    match_node=(struct sNode*)come_increment_ref_count(self->match_node, "14if.nc", 168, 535);
    # 174 "14if.nc"
    Value=node_compile(it_node,info);
    if(!Value) {
        # 171 "14if.nc"
                __result_obj__0 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 171, 536):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 171, 537):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 174 "14if.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "14if.nc", 174, 538);
    # 175 "14if.nc"
    add_come_code(info,"%s;\n",come_value->c_value);
    # 181 "14if.nc"
    Value_31=node_compile(match_node,info);
    if(!Value_31) {
        # 178 "14if.nc"
                __result_obj__0 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 178, 539):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 178, 540):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 178, 541);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 181 "14if.nc"
        __result_obj__0 = (_Bool)1;
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 181, 542):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 181, 543):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 181, 544);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sMatchNode_finalize(struct sMatchNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMatchNode_finalize"; neo_current_frame = &fr;
    # 1 "sMatchNode_finalize"
    # 3 "sMatchNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sMatchNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sMatchNode_finalize", 2, 524));
    }
    # 4 "sMatchNode_finalize"
    if(self!=((void*)0)&&self->it_node!=((void*)0)) {
        # 3 "sMatchNode_finalize"
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0,(void*)0, "sMatchNode_finalize", 3, 525):(void*)0);
    }
    # 5 "sMatchNode_finalize"
    if(self!=((void*)0)&&self->match_node!=((void*)0)) {
        # 4 "sMatchNode_finalize"
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0,(void*)0, "sMatchNode_finalize", 4, 526):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfMethodNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj71;
    struct sNode* __dec_obj72;
    struct sIfMethodNode* __result_obj__0;
    # 189 "14if.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sIfMethodNode*)come_increment_ref_count(self, "14if.nc", 189, 545),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 189, 546);
    # 191 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj71=self->it_node,
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node), "14if.nc", 191, 548);
    (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0, (void*)0, "14if.nc", 191, 547) :0);
    # 192 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj72=self->match_node,
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node), "14if.nc", 192, 550);
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0, (void*)0, "14if.nc", 192, 549) :0);
    # 195 "14if.nc"
        __result_obj__0 = (struct sIfMethodNode*)come_increment_ref_count(self, "14if.nc", 195, 551);
    come_call_finalizer(sIfMethodNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 195, 555);
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 195, 556):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 195, 557):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sIfMethodNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 195, 558);
    return __result_obj__0;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfMethodNode_terminated"; neo_current_frame = &fr;
    # 197 "14if.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sIfMethodNode_kind(struct sIfMethodNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfMethodNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 202 "14if.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sIfMethodNode","14if.nc",202))), "14if.nc", 202, 559);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 202, 560));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "14if.nc", 202, 561));
    return __result_obj__0;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfMethodNode_compile"; neo_current_frame = &fr;
    struct sNode* it_node;
    struct sNode* match_node;
    _Bool Value;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    struct CVALUE*  come_value  ;
    _Bool Value_32;
    memset(&it_node, 0, sizeof(it_node));
    memset(&match_node, 0, sizeof(match_node));
    memset(&Value, 0, sizeof(Value));
    memset(&come_value, 0, sizeof(come_value));
    memset(&Value_32, 0, sizeof(Value_32));
    # 207 "14if.nc"
    it_node=(struct sNode*)come_increment_ref_count(self->it_node, "14if.nc", 207, 562);
    # 208 "14if.nc"
    match_node=(struct sNode*)come_increment_ref_count(self->match_node, "14if.nc", 208, 563);
    # 214 "14if.nc"
    Value=node_compile(it_node,info);
    if(!Value) {
        # 211 "14if.nc"
                __result_obj__0 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 211, 564):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 211, 565):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 214 "14if.nc"
    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "14if.nc", 214, 566);
    # 215 "14if.nc"
    add_come_code(info,"%s;\n",come_value->c_value);
    # 221 "14if.nc"
    Value_32=node_compile(match_node,info);
    if(!Value_32) {
        # 218 "14if.nc"
                __result_obj__0 = (_Bool)0;
        ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 218, 567):(void*)0);
        ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 218, 568):(void*)0);
        come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 218, 569);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 221 "14if.nc"
        __result_obj__0 = (_Bool)1;
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 221, 570):(void*)0);
    ((match_node) ? match_node = come_decrement_ref_count(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 221, 571):(void*)0);
    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 221, 572);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfMethodNode_finalize"; neo_current_frame = &fr;
    # 1 "sIfMethodNode_finalize"
    # 3 "sIfMethodNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sIfMethodNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sIfMethodNode_finalize", 2, 552));
    }
    # 4 "sIfMethodNode_finalize"
    if(self!=((void*)0)&&self->it_node!=((void*)0)) {
        # 3 "sIfMethodNode_finalize"
        ((self->it_node) ? self->it_node = come_decrement_ref_count(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0,(void*)0, "sIfMethodNode_finalize", 3, 553):(void*)0);
    }
    # 5 "sIfMethodNode_finalize"
    if(self!=((void*)0)&&self->match_node!=((void*)0)) {
        # 4 "sIfMethodNode_finalize"
        ((self->match_node) ? self->match_node = come_decrement_ref_count(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0,(void*)0, "sIfMethodNode_finalize", 4, 554):(void*)0);
    }
        neo_current_frame = fr.prev;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock*  if_block  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrStatmentNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj73;
    struct sBlock*  __dec_obj74  ;
    struct sOrStatmentNode* __result_obj__0;
    # 229 "14if.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sOrStatmentNode*)come_increment_ref_count(self, "14if.nc", 229, 573),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 229, 574);
    # 231 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj73=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node), "14if.nc", 231, 576);
    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0, (void*)0, "14if.nc", 231, 575) :0);
    # 232 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj74=self->mIfBlock,
    self->mIfBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(if_block), "14if.nc", 232, 578);
    come_call_finalizer(sBlock_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 232, 577);
    # 235 "14if.nc"
        __result_obj__0 = (struct sOrStatmentNode*)come_increment_ref_count(self, "14if.nc", 235, 579);
    come_call_finalizer(sOrStatmentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 235, 583);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 235, 584):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sOrStatmentNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 235, 585);
    return __result_obj__0;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrStatmentNode_terminated"; neo_current_frame = &fr;
    # 237 "14if.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sOrStatmentNode_kind(struct sOrStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrStatmentNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 242 "14if.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sOrStatmentNode","14if.nc",242))), "14if.nc", 242, 586);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 242, 587));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "14if.nc", 242, 588));
    return __result_obj__0;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrStatmentNode_compile"; neo_current_frame = &fr;
    struct sNode* expression_node;
    _Bool Value;
    _Bool in_conditional;
    struct sBlock*  if_block  ;
    char*  __dec_obj75  ;
    char*  __dec_obj76  ;
    memset(&expression_node, 0, sizeof(expression_node));
    memset(&Value, 0, sizeof(Value));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&if_block, 0, sizeof(if_block));
    # 248 "14if.nc"
    expression_node=self->mExpressionNode;
    # 250 "14if.nc"
    add_come_code(info,"if(!(");
    # 256 "14if.nc"
    Value=transpile_conditional_with_free_right_object_value(expression_node,info);
    if(!Value) {
        # 253 "14if.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 256 "14if.nc"
    in_conditional=info->in_conditional;
    # 257 "14if.nc"
    info->in_conditional=(_Bool)1;
    # 258 "14if.nc"
    add_come_code(info,")) {\n");
    # 259 "14if.nc"
    info->in_conditional=in_conditional;
    # 261 "14if.nc"
    if_block=self->mIfBlock;
    # 262 "14if.nc"
    transpile_block(if_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    # 263 "14if.nc"
    add_come_code(info,"}\n");
    # 265 "14if.nc"
    __dec_obj75=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 265, 589);
    # 266 "14if.nc"
    __dec_obj76=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 266, 590);
    # 268 "14if.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrStatmentNode_finalize"; neo_current_frame = &fr;
    # 1 "sOrStatmentNode_finalize"
    # 3 "sOrStatmentNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sOrStatmentNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sOrStatmentNode_finalize", 2, 580));
    }
    # 4 "sOrStatmentNode_finalize"
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        # 3 "sOrStatmentNode_finalize"
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0,(void*)0, "sOrStatmentNode_finalize", 3, 581):(void*)0);
    }
    # 5 "sOrStatmentNode_finalize"
    if(self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        # 4 "sOrStatmentNode_finalize"
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sOrStatmentNode_finalize}", 4, 582);
    }
        neo_current_frame = fr.prev;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock*  if_block  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndStatmentNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sNode* __dec_obj77;
    struct sBlock*  __dec_obj78  ;
    struct sAndStatmentNode* __result_obj__0;
    # 276 "14if.nc"
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sAndStatmentNode*)come_increment_ref_count(self, "14if.nc", 276, 591),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 276, 592);
    # 278 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj77=self->mExpressionNode,
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node), "14if.nc", 278, 594);
    (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0, (void*)0, "14if.nc", 278, 593) :0);
    # 279 "14if.nc"
    __right_value0 = (void*)0;
    __dec_obj78=self->mIfBlock,
    self->mIfBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(if_block), "14if.nc", 279, 596);
    come_call_finalizer(sBlock_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 279, 595);
    # 282 "14if.nc"
        __result_obj__0 = (struct sAndStatmentNode*)come_increment_ref_count(self, "14if.nc", 282, 597);
    come_call_finalizer(sAndStatmentNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 282, 601);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 282, 602):(void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(sAndStatmentNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14if.nc}", 282, 603);
    return __result_obj__0;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndStatmentNode_terminated"; neo_current_frame = &fr;
    # 284 "14if.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sAndStatmentNode_kind(struct sAndStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndStatmentNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 289 "14if.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sAndStatmentNode","14if.nc",289))), "14if.nc", 289, 604);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14if.nc", 289, 605));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "14if.nc", 289, 606));
    return __result_obj__0;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndStatmentNode_compile"; neo_current_frame = &fr;
    struct sNode* expression_node;
    _Bool Value;
    _Bool in_conditional;
    struct sBlock*  if_block  ;
    char*  __dec_obj79  ;
    char*  __dec_obj80  ;
    memset(&expression_node, 0, sizeof(expression_node));
    memset(&Value, 0, sizeof(Value));
    memset(&in_conditional, 0, sizeof(in_conditional));
    memset(&if_block, 0, sizeof(if_block));
    # 295 "14if.nc"
    expression_node=self->mExpressionNode;
    # 297 "14if.nc"
    add_come_code(info,"if(");
    # 303 "14if.nc"
    Value=transpile_conditional_with_free_right_object_value(expression_node,info);
    if(!Value) {
        # 300 "14if.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 303 "14if.nc"
    in_conditional=info->in_conditional;
    # 304 "14if.nc"
    info->in_conditional=(_Bool)1;
    # 305 "14if.nc"
    add_come_code(info,") {\n");
    # 306 "14if.nc"
    info->in_conditional=in_conditional;
    # 308 "14if.nc"
    if_block=self->mIfBlock;
    # 309 "14if.nc"
    transpile_block(if_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    # 310 "14if.nc"
    add_come_code(info,"}\n");
    # 312 "14if.nc"
    __dec_obj79=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 312, 607);
    # 313 "14if.nc"
    __dec_obj80=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "14if.nc", 313, 608);
    # 315 "14if.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndStatmentNode_finalize"; neo_current_frame = &fr;
    # 1 "sAndStatmentNode_finalize"
    # 3 "sAndStatmentNode_finalize"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 2 "sAndStatmentNode_finalize"
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sAndStatmentNode_finalize", 2, 598));
    }
    # 4 "sAndStatmentNode_finalize"
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        # 3 "sAndStatmentNode_finalize"
        ((self->mExpressionNode) ? self->mExpressionNode = come_decrement_ref_count(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0,(void*)0, "sAndStatmentNode_finalize", 3, 599):(void*)0);
    }
    # 5 "sAndStatmentNode_finalize"
    if(self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        # 4 "sAndStatmentNode_finalize"
        come_call_finalizer(sBlock_finalize, self->mIfBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sAndStatmentNode_finalize}", 4, 600);
    }
        neo_current_frame = fr.prev;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v8"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    int sline_real;
    _Bool existance_result_value;
    struct sNode* expression_node;
    struct sBlock*  if_block  ;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* elif_expression_nodes;
    struct list$1sBlock$ph* elif_blocks;
    int elif_num;
    struct sBlock*  else_block  ;
    char* saved_p;
    int saved_sline;
    char*  buf_33  ;
    int sline_real_34;
    struct sNode* expression_node_35;
    struct sBlock*  elif_block  ;
    struct sBlock*  __dec_obj87  ;
    struct sNode* _inf_value1;
    struct sIfNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* result;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&sline_real, 0, sizeof(sline_real));
    memset(&existance_result_value, 0, sizeof(existance_result_value));
    memset(&expression_node, 0, sizeof(expression_node));
    memset(&if_block, 0, sizeof(if_block));
    memset(&elif_expression_nodes, 0, sizeof(elif_expression_nodes));
    memset(&elif_blocks, 0, sizeof(elif_blocks));
    memset(&elif_num, 0, sizeof(elif_num));
    memset(&else_block, 0, sizeof(else_block));
    memset(&saved_p, 0, sizeof(saved_p));
    memset(&saved_sline, 0, sizeof(saved_sline));
    memset(&buf_33, 0, sizeof(buf_33));
    memset(&sline_real_34, 0, sizeof(sline_real_34));
    memset(&expression_node_35, 0, sizeof(expression_node_35));
    memset(&elif_block, 0, sizeof(elif_block));
    memset(&result, 0, sizeof(result));
    # 418 "14if.nc"
    if(charp_operator_equals(buf,"if")) {
        # 322 "14if.nc"
        sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 322, 609, "char* "), "14if.nc", 322, 610);
        # 323 "14if.nc"
        sline=info->sline;
        # 324 "14if.nc"
        sline_real=info->sline_real;
        # 325 "14if.nc"
        info->sline_real=info->sline;
        # 326 "14if.nc"
        existance_result_value=(_Bool)1;
        # 328 "14if.nc"
        expected_next_character(40,info);
        # 331 "14if.nc"
        __right_value0 = (void*)0;
        expression_node=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "14if.nc", 331, 611);
        # 333 "14if.nc"
        expected_next_character(41,info);
        # 334 "14if.nc"
        skip_spaces_and_lf(info);
        # 336 "14if.nc"
        __right_value0 = (void*)0;
        if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 336, 612);
        # 342 "14if.nc"
        if(!if_block->mOmitSemicolon) {
            # 339 "14if.nc"
            existance_result_value=(_Bool)0;
        }
        # 342 "14if.nc"
        __right_value0 = (void*)0;
        elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14if.nc", 342, 613, "struct list$1sNode$ph*"), "14if.nc", 342, 614)), "14if.nc", 342, 615);
        # 344 "14if.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "14if.nc", 344, 616, "struct list$1sBlock$ph*"), "14if.nc", 344, 617)), "14if.nc", 344, 618);
        # 346 "14if.nc"
        elif_num=0;
        # 348 "14if.nc"
        else_block=((void*)0);
        # 410 "14if.nc"
        while(1) {
            # 351 "14if.nc"
            saved_p=info->p;
            # 352 "14if.nc"
            saved_sline=info->sline;
            # 353 "14if.nc"
            skip_spaces_and_lf(info);
            # 361 "14if.nc"
            if(*info->p==59) {
                # 356 "14if.nc"
                info->p++;
                # 357 "14if.nc"
                skip_spaces_and_lf(info);
            }
            # 364 "14if.nc"
            if(!(xisalpha(*info->p)||*info->p==95)) {
                # 362 "14if.nc"
                break;
            }
            # 364 "14if.nc"
            skip_spaces_and_lf(info);
            # 365 "14if.nc"
            __right_value0 = (void*)0;
            buf_33=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "14if.nc", 365, 619);
            # 366 "14if.nc"
            skip_spaces_and_lf(info);
            # 410 "14if.nc"
            if(string_operator_equals(buf_33,"else")) {
                # 369 "14if.nc"
                sline_real_34=info->sline_real;
                # 370 "14if.nc"
                info->sline_real=info->sline;
                # 403 "14if.nc"
                if(parsecmp_forward("if",info)) {
                    # 372 "14if.nc"
                    skip_spaces_and_lf(info);
                    # 374 "14if.nc"
                    expected_next_character(40,info);
                    # 377 "14if.nc"
                    __right_value0 = (void*)0;
                    expression_node_35=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "14if.nc", 377, 620);
                    # 379 "14if.nc"
                    list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_35, "14if.nc", 379, 635));
                    # 381 "14if.nc"
                    expected_next_character(41,info);
                    # 382 "14if.nc"
                    skip_spaces_and_lf(info);
                    # 385 "14if.nc"
                    __right_value0 = (void*)0;
                    elif_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 385, 636);
                    # 390 "14if.nc"
                    if(!elif_block->mOmitSemicolon) {
                        # 387 "14if.nc"
                        existance_result_value=(_Bool)0;
                    }
                    # 390 "14if.nc"
                    list$1sBlock$ph_push_back(elif_blocks,(struct sBlock* )come_increment_ref_count(elif_block, "14if.nc", 390, 651));
                    # 392 "14if.nc"
                    elif_num++;
                    ((expression_node_35) ? expression_node_35 = come_decrement_ref_count(expression_node_35, ((struct sNode*)expression_node_35)->finalize, ((struct sNode*)expression_node_35)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 403, 652):(void*)0);
                    come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 403, 653);
                }
                else {
                    # 395 "14if.nc"
                    __right_value0 = (void*)0;
                    __dec_obj87=else_block,
                    else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 395, 655);
                    come_call_finalizer(sBlock_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 395, 654);
                    # 401 "14if.nc"
                    if(!else_block->mOmitSemicolon) {
                        # 398 "14if.nc"
                        existance_result_value=(_Bool)0;
                    }
                    # 401 "14if.nc"
                    (buf_33 = come_decrement_ref_count(buf_33, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 401, 656));
                    break;
                }
                # 403 "14if.nc"
                info->sline_real=sline_real_34;
            }
            else {
                # 406 "14if.nc"
                info->p=saved_p;
                # 407 "14if.nc"
                info->sline=saved_sline;
                # 408 "14if.nc"
                (buf_33 = come_decrement_ref_count(buf_33, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 408, 657));
                break;
            }
            (buf_33 = come_decrement_ref_count(buf_33, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 410, 658));
        }
        # 412 "14if.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 412, 662, "struct sNode");
        _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value1=sIfNode_initialize((struct sIfNode* )come_increment_ref_count((struct sIfNode *)come_calloc(1, sizeof(struct sIfNode )*(1), "14if.nc", 412, 659, "struct sIfNode* "), "14if.nc", 412, 660),(struct sNode*)come_increment_ref_count(expression_node, "14if.nc", 412, 661),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,existance_result_value,info))), "14if.nc", 412, 663);
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sIfNode_finalize;
        _inf_value1->clone=(void*)sIfNode_clone;
        _inf_value1->compile=(void*)sIfNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sIfNode_terminated;
        _inf_value1->kind=(void*)sIfNode_kind;
        _inf_value1->left_value=(void*)sNodeBase_left_value;
        result=(struct sNode*)come_increment_ref_count(_inf_value1, "14if.nc", 412, 680);
        come_call_finalizer(sIfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 412, 681);
        # 413 "14if.nc"
        info->sline_real=sline_real;
        # 415 "14if.nc"
                __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "14if.nc", 415, 682);
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 415, 683));
        ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 415, 684):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 415, 685);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 415, 686);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 415, 687);
        come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 415, 688);
        ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 415, 689):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 415, 690):(void*)0);
        return __result_obj__0;
        (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 418, 691));
        ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 418, 692):(void*)0);
        come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 418, 693);
        come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 418, 694);
        come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 418, 695);
        come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 418, 696);
        ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 418, 697):(void*)0);
    }
    # 418 "14if.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v7(buf,head,head_sline,info))), "14if.nc", 418, 698);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "14if.nc", 418, 699):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 418, 700):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj81;
    struct list_item$1sNode$ph* litem_36;
    struct sNode* __dec_obj82;
    struct list_item$1sNode$ph* litem_37;
    struct sNode* __dec_obj83;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_36, 0, sizeof(litem_36));
    memset(&litem_37, 0, sizeof(litem_37));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1615, 621):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1619, 622, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1619, 623);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj81=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1623, 625);
        (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1623, 624) :0);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_36=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1629, 626, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1629, 627);
        # 1631 "./neo-c.h"
        litem_36->prev=self->head;
        # 1632 "./neo-c.h"
        litem_36->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj82=litem_36->item,
        litem_36->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1633, 629);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1633, 628) :0);
        # 1635 "./neo-c.h"
        self->tail=litem_36;
        # 1636 "./neo-c.h"
        self->head->next=litem_36;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1639, 630, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1639, 631);
        # 1641 "./neo-c.h"
        litem_37->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_37->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj83=litem_37->item,
        litem_37->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1643, 633);
        (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1643, 632) :0);
        # 1645 "./neo-c.h"
        self->tail->next=litem_37;
        # 1646 "./neo-c.h"
        self->tail=litem_37;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1651, 634):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sBlock$ph* list$1sBlock$ph_push_back(struct list$1sBlock$ph* self, struct sBlock*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sBlock$ph_push_back"; neo_current_frame = &fr;
    struct list$1sBlock$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sBlock$ph* litem;
    struct sBlock*  __dec_obj84  ;
    struct list_item$1sBlock$ph* litem_38;
    struct sBlock*  __dec_obj85  ;
    struct list_item$1sBlock$ph* litem_39;
    struct sBlock*  __dec_obj86  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_38, 0, sizeof(litem_38));
    memset(&litem_39, 0, sizeof(litem_39));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 637);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1619, 638, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1619, 639);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj84=litem->item,
        litem->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1623, 641);
        come_call_finalizer(sBlock_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 640);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1629, 642, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1629, 643);
        # 1631 "./neo-c.h"
        litem_38->prev=self->head;
        # 1632 "./neo-c.h"
        litem_38->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj85=litem_38->item,
        litem_38->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1633, 645);
        come_call_finalizer(sBlock_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 644);
        # 1635 "./neo-c.h"
        self->tail=litem_38;
        # 1636 "./neo-c.h"
        self->head->next=litem_38;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1sBlock$ph*)come_increment_ref_count(((struct list_item$1sBlock$ph*)(__right_value0=(struct list_item$1sBlock$ph*)come_calloc(1, sizeof(struct list_item$1sBlock$ph)*(1), "./neo-c.h", 1639, 646, "struct list_item$1sBlock$ph*"))), "./neo-c.h", 1639, 647);
        # 1641 "./neo-c.h"
        litem_39->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_39->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj86=litem_39->item,
        litem_39->item=(struct sBlock* )come_increment_ref_count(item, "./neo-c.h", 1643, 649);
        come_call_finalizer(sBlock_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 648);
        # 1645 "./neo-c.h"
        self->tail->next=litem_39;
        # 1646 "./neo-c.h"
        self->tail=litem_39;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sBlock_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 650);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfNode_clone"; neo_current_frame = &fr;
    struct sIfNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIfNode*  result  ;
    char*  __dec_obj88  ;
    struct sNode* __dec_obj89;
    struct sBlock*  __dec_obj90  ;
    struct list$1sNode$ph* __dec_obj91;
    struct list$1sBlock$ph* __dec_obj92;
    struct sBlock*  __dec_obj93  ;
    memset(&result, 0, sizeof(result));
    # 3 "sIfNode_clone"
    # 5 "sIfNode_clone"
    if(self==(void*)0) {
        # 4 "sIfNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sIfNode_clone"
    result=(struct sIfNode* )come_increment_ref_count((struct sIfNode *)come_calloc(1, sizeof(struct sIfNode )*(1), "sIfNode_clone", 5, 664, "struct sIfNode* "), "sIfNode_clone", 5, 665);
    # 7 "sIfNode_clone"
    if(self!=((void*)0)) {
        # 6 "sIfNode_clone"
        result->sline=self->sline;
    }
    # 8 "sIfNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sIfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj88=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIfNode_clone", 7, 666, "char* "), "sIfNode_clone", 7, 668);
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "sIfNode_clone", 7, 667);
    }
    # 9 "sIfNode_clone"
    if(self!=((void*)0)) {
        # 8 "sIfNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sIfNode_clone"
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        # 9 "sIfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj89=result->mExpressionNode,
        result->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode), "sIfNode_clone", 9, 670);
        (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0, (void*)0, "sIfNode_clone", 9, 669) :0);
    }
    # 11 "sIfNode_clone"
    if(self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        # 10 "sIfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj90=result->mIfBlock,
        result->mIfBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mIfBlock), "sIfNode_clone", 10, 672);
        come_call_finalizer(sBlock_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_clone", 10, 671);
    }
    # 12 "sIfNode_clone"
    if(self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        # 11 "sIfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj91=result->mElifExpressionNodes,
        result->mElifExpressionNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mElifExpressionNodes), "sIfNode_clone", 11, 674);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_clone", 11, 673);
    }
    # 13 "sIfNode_clone"
    if(self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        # 12 "sIfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj92=result->mElifBlocks,
        result->mElifBlocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph$p_clone(self->mElifBlocks), "sIfNode_clone", 12, 676);
        come_call_finalizer(list$1sBlock$ph_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_clone", 12, 675);
    }
    # 14 "sIfNode_clone"
    if(self!=((void*)0)) {
        # 13 "sIfNode_clone"
        result->mElifNum=self->mElifNum;
    }
    # 15 "sIfNode_clone"
    if(self!=((void*)0)) {
        # 14 "sIfNode_clone"
        result->mGuard=self->mGuard;
    }
    # 16 "sIfNode_clone"
    if(self!=((void*)0)) {
        # 15 "sIfNode_clone"
        result->existance_result_value=self->existance_result_value;
    }
    # 17 "sIfNode_clone"
    if(self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        # 16 "sIfNode_clone"
        __right_value0 = (void*)0;
        __dec_obj93=result->mElseBlock,
        result->mElseBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mElseBlock), "sIfNode_clone", 16, 678);
        come_call_finalizer(sBlock_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sIfNode_clone", 16, 677);
    }
    # 17 "sIfNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sIfNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIfNode_clone}", 17, 679);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_or_statment"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    struct sBlock*  if_block  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value2;
    struct sOrStatmentNode* _inf_obj_value2;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&if_block, 0, sizeof(if_block));
    # 424 "14if.nc"
    sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 424, 701, "char* "), "14if.nc", 424, 702);
    # 425 "14if.nc"
    sline=info->sline;
    # 427 "14if.nc"
    skip_spaces_and_lf(info);
    # 429 "14if.nc"
    __right_value0 = (void*)0;
    if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 429, 703);
    # 431 "14if.nc"
        __right_value0 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 431, 707, "struct sNode");
    _inf_obj_value2=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value1=sOrStatmentNode_initialize((struct sOrStatmentNode* )come_increment_ref_count((struct sOrStatmentNode *)come_calloc(1, sizeof(struct sOrStatmentNode )*(1), "14if.nc", 431, 704, "struct sOrStatmentNode* "), "14if.nc", 431, 705),(struct sNode*)come_increment_ref_count(expression_node, "14if.nc", 431, 706),if_block,info))), "14if.nc", 431, 708);
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value2->clone=(void*)sOrStatmentNode_clone;
    _inf_value2->compile=(void*)sOrStatmentNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value2->kind=(void*)sOrStatmentNode_kind;
    _inf_value2->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "14if.nc", 431, 719);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 431, 720):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 431, 721));
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 431, 722);
    come_call_finalizer(sOrStatmentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 431, 723);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "14if.nc", 431, 724):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 431, 725):(void*)0);
    return __result_obj__0;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sOrStatmentNode_clone"; neo_current_frame = &fr;
    struct sOrStatmentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sOrStatmentNode*  result  ;
    char*  __dec_obj94  ;
    struct sNode* __dec_obj95;
    struct sBlock*  __dec_obj96  ;
    memset(&result, 0, sizeof(result));
    # 3 "sOrStatmentNode_clone"
    # 5 "sOrStatmentNode_clone"
    if(self==(void*)0) {
        # 4 "sOrStatmentNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sOrStatmentNode_clone"
    result=(struct sOrStatmentNode* )come_increment_ref_count((struct sOrStatmentNode *)come_calloc(1, sizeof(struct sOrStatmentNode )*(1), "sOrStatmentNode_clone", 5, 709, "struct sOrStatmentNode* "), "sOrStatmentNode_clone", 5, 710);
    # 7 "sOrStatmentNode_clone"
    if(self!=((void*)0)) {
        # 6 "sOrStatmentNode_clone"
        result->sline=self->sline;
    }
    # 8 "sOrStatmentNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sOrStatmentNode_clone"
        __right_value0 = (void*)0;
        __dec_obj94=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sOrStatmentNode_clone", 7, 711, "char* "), "sOrStatmentNode_clone", 7, 713);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "sOrStatmentNode_clone", 7, 712);
    }
    # 9 "sOrStatmentNode_clone"
    if(self!=((void*)0)) {
        # 8 "sOrStatmentNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sOrStatmentNode_clone"
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        # 9 "sOrStatmentNode_clone"
        __right_value0 = (void*)0;
        __dec_obj95=result->mExpressionNode,
        result->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode), "sOrStatmentNode_clone", 9, 715);
        (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0, (void*)0, "sOrStatmentNode_clone", 9, 714) :0);
    }
    # 11 "sOrStatmentNode_clone"
    if(self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        # 10 "sOrStatmentNode_clone"
        __right_value0 = (void*)0;
        __dec_obj96=result->mIfBlock,
        result->mIfBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mIfBlock), "sOrStatmentNode_clone", 10, 717);
        come_call_finalizer(sBlock_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sOrStatmentNode_clone", 10, 716);
    }
    # 11 "sOrStatmentNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sOrStatmentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sOrStatmentNode_clone}", 11, 718);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_and_statment"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    struct sBlock*  if_block  ;
    void* __right_value1 = (void*)0;
    struct sNode* _inf_value3;
    struct sAndStatmentNode* _inf_obj_value3;
    void* __right_value2 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&if_block, 0, sizeof(if_block));
    # 436 "14if.nc"
    sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 436, 726, "char* "), "14if.nc", 436, 727);
    # 437 "14if.nc"
    sline=info->sline;
    # 439 "14if.nc"
    skip_spaces_and_lf(info);
    # 441 "14if.nc"
    __right_value0 = (void*)0;
    if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 441, 728);
    # 443 "14if.nc"
        __right_value0 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 443, 732, "struct sNode");
    _inf_obj_value3=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value1=sAndStatmentNode_initialize((struct sAndStatmentNode* )come_increment_ref_count((struct sAndStatmentNode *)come_calloc(1, sizeof(struct sAndStatmentNode )*(1), "14if.nc", 443, 729, "struct sAndStatmentNode* "), "14if.nc", 443, 730),(struct sNode*)come_increment_ref_count(expression_node, "14if.nc", 443, 731),if_block,info))), "14if.nc", 443, 733);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value3->clone=(void*)sAndStatmentNode_clone;
    _inf_value3->compile=(void*)sAndStatmentNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value3->kind=(void*)sAndStatmentNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "14if.nc", 443, 744);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 443, 745):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 443, 746));
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 443, 747);
    come_call_finalizer(sAndStatmentNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 443, 748);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "14if.nc", 443, 749):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 443, 750):(void*)0);
    return __result_obj__0;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sAndStatmentNode_clone"; neo_current_frame = &fr;
    struct sAndStatmentNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sAndStatmentNode*  result  ;
    char*  __dec_obj97  ;
    struct sNode* __dec_obj98;
    struct sBlock*  __dec_obj99  ;
    memset(&result, 0, sizeof(result));
    # 3 "sAndStatmentNode_clone"
    # 5 "sAndStatmentNode_clone"
    if(self==(void*)0) {
        # 4 "sAndStatmentNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sAndStatmentNode_clone"
    result=(struct sAndStatmentNode* )come_increment_ref_count((struct sAndStatmentNode *)come_calloc(1, sizeof(struct sAndStatmentNode )*(1), "sAndStatmentNode_clone", 5, 734, "struct sAndStatmentNode* "), "sAndStatmentNode_clone", 5, 735);
    # 7 "sAndStatmentNode_clone"
    if(self!=((void*)0)) {
        # 6 "sAndStatmentNode_clone"
        result->sline=self->sline;
    }
    # 8 "sAndStatmentNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sAndStatmentNode_clone"
        __right_value0 = (void*)0;
        __dec_obj97=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sAndStatmentNode_clone", 7, 736, "char* "), "sAndStatmentNode_clone", 7, 738);
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "sAndStatmentNode_clone", 7, 737);
    }
    # 9 "sAndStatmentNode_clone"
    if(self!=((void*)0)) {
        # 8 "sAndStatmentNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sAndStatmentNode_clone"
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        # 9 "sAndStatmentNode_clone"
        __right_value0 = (void*)0;
        __dec_obj98=result->mExpressionNode,
        result->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode), "sAndStatmentNode_clone", 9, 740);
        (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0, (void*)0, "sAndStatmentNode_clone", 9, 739) :0);
    }
    # 11 "sAndStatmentNode_clone"
    if(self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        # 10 "sAndStatmentNode_clone"
        __right_value0 = (void*)0;
        __dec_obj99=result->mIfBlock,
        result->mIfBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mIfBlock), "sAndStatmentNode_clone", 10, 742);
        come_call_finalizer(sBlock_finalize, __dec_obj99,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sAndStatmentNode_clone", 10, 741);
    }
    # 11 "sAndStatmentNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sAndStatmentNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sAndStatmentNode_clone}", 11, 743);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_match"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    _Bool existance_result_value;
    void* __right_value1 = (void*)0;
    struct sNode* it_node;
    struct sNode* conditional_value;
    struct sBlock*  if_block  ;
    struct list$1sNode$ph* elif_expression_nodes;
    struct list$1sBlock$ph* elif_blocks;
    int elif_num;
    struct sBlock*  else_block  ;
    struct sBlock*  __dec_obj100  ;
    struct sNode* conditional_value_40;
    struct sBlock*  elif_block  ;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value4;
    struct sIfNode* _inf_obj_value4;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    struct sNode* _inf_value5;
    struct sMatchNode* _inf_obj_value5;
    void* __right_value5 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&existance_result_value, 0, sizeof(existance_result_value));
    memset(&it_node, 0, sizeof(it_node));
    memset(&conditional_value, 0, sizeof(conditional_value));
    memset(&if_block, 0, sizeof(if_block));
    memset(&elif_expression_nodes, 0, sizeof(elif_expression_nodes));
    memset(&elif_blocks, 0, sizeof(elif_blocks));
    memset(&elif_num, 0, sizeof(elif_num));
    memset(&else_block, 0, sizeof(else_block));
    memset(&conditional_value_40, 0, sizeof(conditional_value_40));
    memset(&elif_block, 0, sizeof(elif_block));
    # 448 "14if.nc"
    sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 448, 751, "char* "), "14if.nc", 448, 752);
    # 449 "14if.nc"
    sline=info->sline;
    # 451 "14if.nc"
    expected_next_character(123,info);
    # 452 "14if.nc"
    existance_result_value=(_Bool)1;
    # 454 "14if.nc"
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value"), "14if.nc", 454, 753),((void*)0),((void*)0),((void*)0),(_Bool)1,expression_node,info,(_Bool)0), "14if.nc", 454, 754);
    # 456 "14if.nc"
    expected_next_character(40,info);
    # 458 "14if.nc"
    __right_value0 = (void*)0;
    conditional_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "14if.nc", 458, 755);
    # 460 "14if.nc"
    expected_next_character(41,info);
    # 462 "14if.nc"
    skip_spaces_and_lf(info);
    # 464 "14if.nc"
    __right_value0 = (void*)0;
    if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 464, 756);
    # 468 "14if.nc"
    if(!if_block->mOmitSemicolon) {
        # 466 "14if.nc"
        existance_result_value=(_Bool)0;
    }
    # 468 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14if.nc", 468, 757, "struct list$1sNode$ph*"), "14if.nc", 468, 758)), "14if.nc", 468, 759);
    # 469 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "14if.nc", 469, 760, "struct list$1sBlock$ph*"), "14if.nc", 469, 761)), "14if.nc", 469, 762);
    # 470 "14if.nc"
    elif_num=0;
    # 471 "14if.nc"
    else_block=((void*)0);
    # 516 "14if.nc"
    while((_Bool)1) {
        # 474 "14if.nc"
        skip_spaces_and_lf(info);
        # 509 "14if.nc"
        if(parsecmp_forward("else",info)) {
            # 476 "14if.nc"
            skip_spaces_and_lf(info);
            # 478 "14if.nc"
            __right_value0 = (void*)0;
            __dec_obj100=else_block,
            else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 478, 764);
            come_call_finalizer(sBlock_finalize, __dec_obj100,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 478, 763);
            # 482 "14if.nc"
            if(!else_block->mOmitSemicolon) {
                # 480 "14if.nc"
                existance_result_value=(_Bool)0;
            }
        }
        else {
            # 489 "14if.nc"
            if(*info->p==125) {
                # 485 "14if.nc"
                info->p++;
                # 486 "14if.nc"
                skip_spaces_and_lf(info);
                # 487 "14if.nc"
                break;
            }
            # 489 "14if.nc"
            expected_next_character(40,info);
            # 491 "14if.nc"
            __right_value0 = (void*)0;
            conditional_value_40=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "14if.nc", 491, 765);
            # 493 "14if.nc"
            list$1sNode$ph_add(elif_expression_nodes,(struct sNode*)come_increment_ref_count(conditional_value_40, "14if.nc", 493, 766));
            # 495 "14if.nc"
            expected_next_character(41,info);
            # 497 "14if.nc"
            skip_spaces_and_lf(info);
            # 499 "14if.nc"
            __right_value0 = (void*)0;
            elif_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 499, 767);
            # 504 "14if.nc"
            if(!elif_block->mOmitSemicolon) {
                # 501 "14if.nc"
                existance_result_value=(_Bool)0;
            }
            # 504 "14if.nc"
            list$1sBlock$ph_add(elif_blocks,(struct sBlock* )come_increment_ref_count(elif_block, "14if.nc", 504, 768));
            # 506 "14if.nc"
            elif_num++;
            ((conditional_value_40) ? conditional_value_40 = come_decrement_ref_count(conditional_value_40, ((struct sNode*)conditional_value_40)->finalize, ((struct sNode*)conditional_value_40)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 509, 769):(void*)0);
            come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 509, 770);
        }
        # 514 "14if.nc"
        if(*info->p==125) {
            # 510 "14if.nc"
            info->p++;
            # 511 "14if.nc"
            skip_spaces_and_lf(info);
            # 512 "14if.nc"
            break;
        }
    }
    # 516 "14if.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 516, 777, "struct sNode");
    _inf_obj_value4=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value2=sIfNode_initialize((struct sIfNode* )come_increment_ref_count((struct sIfNode *)come_calloc(1, sizeof(struct sIfNode )*(1), "14if.nc", 516, 774, "struct sIfNode* "), "14if.nc", 516, 775),(struct sNode*)come_increment_ref_count(conditional_value, "14if.nc", 516, 776),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,existance_result_value,info))), "14if.nc", 516, 778);
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sIfNode_finalize;
    _inf_value4->clone=(void*)sIfNode_clone;
    _inf_value4->compile=(void*)sIfNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sIfNode_terminated;
    _inf_value4->kind=(void*)sIfNode_kind;
    _inf_value4->left_value=(void*)sNodeBase_left_value;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 516, 780, "struct sNode");
    _inf_obj_value5=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value4=sMatchNode_initialize((struct sMatchNode* )come_increment_ref_count((struct sMatchNode *)come_calloc(1, sizeof(struct sMatchNode )*(1), "14if.nc", 516, 771, "struct sMatchNode* "), "14if.nc", 516, 772),(struct sNode*)come_increment_ref_count(it_node, "14if.nc", 516, 773),(struct sNode*)come_increment_ref_count(_inf_value4, "14if.nc", 516, 779),info))), "14if.nc", 516, 781);
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMatchNode_finalize;
    _inf_value5->clone=(void*)sMatchNode_clone;
    _inf_value5->compile=(void*)sMatchNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMatchNode_terminated;
    _inf_value5->kind=(void*)sMatchNode_kind;
    _inf_value5->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value5=_inf_value5)), "14if.nc", 516, 792);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 516, 793):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 516, 794));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 516, 795):(void*)0);
    ((conditional_value) ? conditional_value = come_decrement_ref_count(conditional_value, ((struct sNode*)conditional_value)->finalize, ((struct sNode*)conditional_value)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 516, 796):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 516, 797);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 516, 798);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 516, 799);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 516, 800);
    come_call_finalizer(sIfNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 516, 801);
    come_call_finalizer(sMatchNode_finalize, __right_value4, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 516, 802);
    ((__right_value5) ? __right_value5 = come_decrement_ref_count(__right_value5, ((struct sNode*)__right_value5)->finalize, ((struct sNode*)__right_value5)->_protocol_obj, 1, 0,(void*)0, "14if.nc", 516, 803):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 516, 804):(void*)0);
    return __result_obj__0;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sMatchNode_clone"; neo_current_frame = &fr;
    struct sMatchNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sMatchNode*  result  ;
    char*  __dec_obj101  ;
    struct sNode* __dec_obj102;
    struct sNode* __dec_obj103;
    memset(&result, 0, sizeof(result));
    # 3 "sMatchNode_clone"
    # 5 "sMatchNode_clone"
    if(self==(void*)0) {
        # 4 "sMatchNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sMatchNode_clone"
    result=(struct sMatchNode* )come_increment_ref_count((struct sMatchNode *)come_calloc(1, sizeof(struct sMatchNode )*(1), "sMatchNode_clone", 5, 782, "struct sMatchNode* "), "sMatchNode_clone", 5, 783);
    # 7 "sMatchNode_clone"
    if(self!=((void*)0)) {
        # 6 "sMatchNode_clone"
        result->sline=self->sline;
    }
    # 8 "sMatchNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sMatchNode_clone"
        __right_value0 = (void*)0;
        __dec_obj101=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sMatchNode_clone", 7, 784, "char* "), "sMatchNode_clone", 7, 786);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "sMatchNode_clone", 7, 785);
    }
    # 9 "sMatchNode_clone"
    if(self!=((void*)0)) {
        # 8 "sMatchNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sMatchNode_clone"
    if(self!=((void*)0)&&self->it_node!=((void*)0)) {
        # 9 "sMatchNode_clone"
        __right_value0 = (void*)0;
        __dec_obj102=result->it_node,
        result->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node), "sMatchNode_clone", 9, 788);
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "sMatchNode_clone", 9, 787) :0);
    }
    # 11 "sMatchNode_clone"
    if(self!=((void*)0)&&self->match_node!=((void*)0)) {
        # 10 "sMatchNode_clone"
        __right_value0 = (void*)0;
        __dec_obj103=result->match_node,
        result->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node), "sMatchNode_clone", 10, 790);
        (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0, "sMatchNode_clone", 10, 789) :0);
    }
    # 11 "sMatchNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sMatchNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sMatchNode_clone}", 11, 791);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_catch(struct sNode* expression_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_catch"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    _Bool existance_result_value;
    void* __right_value1 = (void*)0;
    struct sNode* it_node;
    struct sNode* node1;
    struct sNode* conditional_value;
    struct sBlock*  if_block  ;
    struct sNode* result_node;
    struct list$1sNode$ph* elif_expression_nodes;
    struct list$1sBlock$ph* elif_blocks;
    int elif_num;
    struct sBlock*  else_block  ;
    void* __right_value2 = (void*)0;
    struct sNode* _inf_value6;
    struct sIfNode* _inf_obj_value6;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    struct sNode* _inf_value7;
    struct sMatchNode* _inf_obj_value7;
    void* __right_value5 = (void*)0;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&existance_result_value, 0, sizeof(existance_result_value));
    memset(&it_node, 0, sizeof(it_node));
    memset(&node1, 0, sizeof(node1));
    memset(&conditional_value, 0, sizeof(conditional_value));
    memset(&if_block, 0, sizeof(if_block));
    memset(&result_node, 0, sizeof(result_node));
    memset(&elif_expression_nodes, 0, sizeof(elif_expression_nodes));
    memset(&elif_blocks, 0, sizeof(elif_blocks));
    memset(&elif_num, 0, sizeof(elif_num));
    memset(&else_block, 0, sizeof(else_block));
    # 521 "14if.nc"
    sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 521, 805, "char* "), "14if.nc", 521, 806);
    # 522 "14if.nc"
    sline=info->sline;
    # 524 "14if.nc"
    existance_result_value=(_Bool)1;
    # 526 "14if.nc"
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value"), "14if.nc", 526, 807),((void*)0),((void*)0),((void*)0),(_Bool)1,expression_node,info,(_Bool)0), "14if.nc", 526, 808);
    # 528 "14if.nc"
    __right_value0 = (void*)0;
    node1=(struct sNode*)come_increment_ref_count(create_load_var("Value",info), "14if.nc", 528, 809);
    # 529 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    conditional_value=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node1, "14if.nc", 529, 810),(char*)come_increment_ref_count(xsprintf("v2"), "14if.nc", 529, 811),info), "14if.nc", 529, 812);
    # 531 "14if.nc"
    __right_value0 = (void*)0;
    if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 531, 813);
    # 533 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result_node=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(node1, "14if.nc", 533, 814),(char*)come_increment_ref_count(xsprintf("v1"), "14if.nc", 533, 815),info), "14if.nc", 533, 816);
    # 534 "14if.nc"
    list$1sNode$ph_push_back(if_block->mNodes,(struct sNode*)come_increment_ref_count(result_node, "14if.nc", 534, 817));
    # 535 "14if.nc"
    if_block->mOmitSemicolon=(_Bool)1;
    # 537 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14if.nc", 537, 818, "struct list$1sNode$ph*"), "14if.nc", 537, 819)), "14if.nc", 537, 820);
    # 538 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "14if.nc", 538, 821, "struct list$1sBlock$ph*"), "14if.nc", 538, 822)), "14if.nc", 538, 823);
    # 539 "14if.nc"
    elif_num=0;
    # 541 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    else_block=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "14if.nc", 541, 824, "struct sBlock* "), "14if.nc", 541, 825)), "14if.nc", 541, 826);
    # 542 "14if.nc"
    list$1sNode$ph_push_back(else_block->mNodes,(struct sNode*)come_increment_ref_count(result_node, "14if.nc", 542, 827));
    # 543 "14if.nc"
    else_block->mOmitSemicolon=existance_result_value;
    # 545 "14if.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 545, 834, "struct sNode");
    _inf_obj_value6=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value2=sIfNode_initialize((struct sIfNode* )come_increment_ref_count((struct sIfNode *)come_calloc(1, sizeof(struct sIfNode )*(1), "14if.nc", 545, 831, "struct sIfNode* "), "14if.nc", 545, 832),(struct sNode*)come_increment_ref_count(conditional_value, "14if.nc", 545, 833),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,existance_result_value,info))), "14if.nc", 545, 835);
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sIfNode_finalize;
    _inf_value6->clone=(void*)sIfNode_clone;
    _inf_value6->compile=(void*)sIfNode_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sIfNode_terminated;
    _inf_value6->kind=(void*)sIfNode_kind;
    _inf_value6->left_value=(void*)sNodeBase_left_value;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 545, 837, "struct sNode");
    _inf_obj_value7=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value4=sMatchNode_initialize((struct sMatchNode* )come_increment_ref_count((struct sMatchNode *)come_calloc(1, sizeof(struct sMatchNode )*(1), "14if.nc", 545, 828, "struct sMatchNode* "), "14if.nc", 545, 829),(struct sNode*)come_increment_ref_count(it_node, "14if.nc", 545, 830),(struct sNode*)come_increment_ref_count(_inf_value6, "14if.nc", 545, 836),info))), "14if.nc", 545, 838);
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sMatchNode_finalize;
    _inf_value7->clone=(void*)sMatchNode_clone;
    _inf_value7->compile=(void*)sMatchNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sMatchNode_terminated;
    _inf_value7->kind=(void*)sMatchNode_kind;
    _inf_value7->left_value=(void*)sNodeBase_left_value;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value5=_inf_value7)), "14if.nc", 545, 839);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 545, 840):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 545, 841));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 545, 842):(void*)0);
    ((node1) ? node1 = come_decrement_ref_count(node1, ((struct sNode*)node1)->finalize, ((struct sNode*)node1)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 545, 843):(void*)0);
    ((conditional_value) ? conditional_value = come_decrement_ref_count(conditional_value, ((struct sNode*)conditional_value)->finalize, ((struct sNode*)conditional_value)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 545, 844):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 545, 845);
    ((result_node) ? result_node = come_decrement_ref_count(result_node, ((struct sNode*)result_node)->finalize, ((struct sNode*)result_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 545, 846):(void*)0);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 545, 847);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 545, 848);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 545, 849);
    come_call_finalizer(sIfNode_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 545, 850);
    come_call_finalizer(sMatchNode_finalize, __right_value4, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 545, 851);
    ((__right_value5) ? __right_value5 = come_decrement_ref_count(__right_value5, ((struct sNode*)__right_value5)->finalize, ((struct sNode*)__right_value5)->_protocol_obj, 1, 0,(void*)0, "14if.nc", 545, 852):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 545, 853):(void*)0);
    return __result_obj__0;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_if_method_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    void* __right_value1 = (void*)0;
    struct sNode* it_node;
    struct sNode* conditional_node;
    _Bool existance_result_value;
    struct sBlock*  if_block  ;
    struct list$1sNode$ph* elif_expression_nodes;
    struct list$1sBlock$ph* elif_blocks;
    int elif_num;
    struct sBlock*  else_block  ;
    char* saved_p;
    int saved_sline;
    char*  buf  ;
    struct sNode* expression_node_41;
    struct sBlock*  elif_block  ;
    struct sBlock*  __dec_obj104  ;
    struct sNode* _inf_value8;
    struct sIfNode* _inf_obj_value8;
    void* __right_value2 = (void*)0;
    struct sNode* if_node;
    struct sNode* _inf_value9;
    struct sIfMethodNode* _inf_obj_value9;
    struct sNode* result;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&it_node, 0, sizeof(it_node));
    memset(&conditional_node, 0, sizeof(conditional_node));
    memset(&existance_result_value, 0, sizeof(existance_result_value));
    memset(&if_block, 0, sizeof(if_block));
    memset(&elif_expression_nodes, 0, sizeof(elif_expression_nodes));
    memset(&elif_blocks, 0, sizeof(elif_blocks));
    memset(&elif_num, 0, sizeof(elif_num));
    memset(&else_block, 0, sizeof(else_block));
    memset(&saved_p, 0, sizeof(saved_p));
    memset(&saved_sline, 0, sizeof(saved_sline));
    memset(&buf, 0, sizeof(buf));
    memset(&expression_node_41, 0, sizeof(expression_node_41));
    memset(&elif_block, 0, sizeof(elif_block));
    memset(&if_node, 0, sizeof(if_node));
    memset(&result, 0, sizeof(result));
    # 550 "14if.nc"
    sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 550, 854, "char* "), "14if.nc", 550, 855);
    # 551 "14if.nc"
    sline=info->sline;
    # 553 "14if.nc"
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value"), "14if.nc", 553, 856),((void*)0),((void*)0),((void*)0),(_Bool)1,expression_node,info,(_Bool)0), "14if.nc", 553, 857);
    # 555 "14if.nc"
    __right_value0 = (void*)0;
    conditional_node=(struct sNode*)come_increment_ref_count(create_load_var("Value",info), "14if.nc", 555, 858);
    # 556 "14if.nc"
    existance_result_value=(_Bool)1;
    # 558 "14if.nc"
    skip_spaces_and_lf(info);
    # 560 "14if.nc"
    __right_value0 = (void*)0;
    if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 560, 859);
    # 566 "14if.nc"
    if(!if_block->mOmitSemicolon) {
        # 563 "14if.nc"
        existance_result_value=(_Bool)0;
    }
    # 566 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14if.nc", 566, 860, "struct list$1sNode$ph*"), "14if.nc", 566, 861)), "14if.nc", 566, 862);
    # 568 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "14if.nc", 568, 863, "struct list$1sBlock$ph*"), "14if.nc", 568, 864)), "14if.nc", 568, 865);
    # 570 "14if.nc"
    elif_num=0;
    # 572 "14if.nc"
    else_block=((void*)0);
    # 629 "14if.nc"
    while(1) {
        # 575 "14if.nc"
        saved_p=info->p;
        # 576 "14if.nc"
        saved_sline=info->sline;
        # 577 "14if.nc"
        skip_spaces_and_lf(info);
        # 585 "14if.nc"
        if(*info->p==59) {
            # 580 "14if.nc"
            info->p++;
            # 581 "14if.nc"
            skip_spaces_and_lf(info);
        }
        # 588 "14if.nc"
        if(!(xisalpha(*info->p)||*info->p==95)) {
            # 586 "14if.nc"
            break;
        }
        # 588 "14if.nc"
        skip_spaces_and_lf(info);
        # 589 "14if.nc"
        __right_value0 = (void*)0;
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "14if.nc", 589, 866);
        # 590 "14if.nc"
        skip_spaces_and_lf(info);
        # 629 "14if.nc"
        if(string_operator_equals(buf,"else")) {
            # 623 "14if.nc"
            if(parsecmp_forward("if",info)) {
                # 594 "14if.nc"
                skip_spaces_and_lf(info);
                # 596 "14if.nc"
                expected_next_character(40,info);
                # 599 "14if.nc"
                __right_value0 = (void*)0;
                expression_node_41=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "14if.nc", 599, 867);
                # 601 "14if.nc"
                list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_41, "14if.nc", 601, 868));
                # 603 "14if.nc"
                expected_next_character(41,info);
                # 604 "14if.nc"
                skip_spaces_and_lf(info);
                # 607 "14if.nc"
                __right_value0 = (void*)0;
                elif_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 607, 869);
                # 612 "14if.nc"
                if(!elif_block->mOmitSemicolon) {
                    # 609 "14if.nc"
                    existance_result_value=(_Bool)0;
                }
                # 612 "14if.nc"
                list$1sBlock$ph_push_back(elif_blocks,(struct sBlock* )come_increment_ref_count(elif_block, "14if.nc", 612, 870));
                # 614 "14if.nc"
                elif_num++;
                ((expression_node_41) ? expression_node_41 = come_decrement_ref_count(expression_node_41, ((struct sNode*)expression_node_41)->finalize, ((struct sNode*)expression_node_41)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 623, 871):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 623, 872);
            }
            else {
                # 617 "14if.nc"
                __right_value0 = (void*)0;
                __dec_obj104=else_block,
                else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 617, 874);
                come_call_finalizer(sBlock_finalize, __dec_obj104,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 617, 873);
                # 621 "14if.nc"
                if(!else_block->mOmitSemicolon) {
                    # 619 "14if.nc"
                    existance_result_value=(_Bool)0;
                }
                # 621 "14if.nc"
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 621, 875));
                break;
            }
        }
        else {
            # 625 "14if.nc"
            info->p=saved_p;
            # 626 "14if.nc"
            info->sline=saved_sline;
            # 627 "14if.nc"
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 627, 876));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 629, 877));
    }
    # 631 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 631, 881, "struct sNode");
    _inf_obj_value8=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value1=sIfNode_initialize((struct sIfNode* )come_increment_ref_count((struct sIfNode *)come_calloc(1, sizeof(struct sIfNode )*(1), "14if.nc", 631, 878, "struct sIfNode* "), "14if.nc", 631, 879),(struct sNode*)come_increment_ref_count(conditional_node, "14if.nc", 631, 880),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,existance_result_value,info))), "14if.nc", 631, 882);
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sIfNode_finalize;
    _inf_value8->clone=(void*)sIfNode_clone;
    _inf_value8->compile=(void*)sIfNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sIfNode_terminated;
    _inf_value8->kind=(void*)sIfNode_kind;
    _inf_value8->left_value=(void*)sNodeBase_left_value;
    if_node=(struct sNode*)come_increment_ref_count(_inf_value8, "14if.nc", 631, 883);
    come_call_finalizer(sIfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 631, 884);
    # 632 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 632, 889, "struct sNode");
    _inf_obj_value9=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value1=sIfMethodNode_initialize((struct sIfMethodNode* )come_increment_ref_count((struct sIfMethodNode *)come_calloc(1, sizeof(struct sIfMethodNode )*(1), "14if.nc", 632, 885, "struct sIfMethodNode* "), "14if.nc", 632, 886),(struct sNode*)come_increment_ref_count(it_node, "14if.nc", 632, 887),(struct sNode*)come_increment_ref_count(if_node, "14if.nc", 632, 888),info))), "14if.nc", 632, 890);
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sIfMethodNode_finalize;
    _inf_value9->clone=(void*)sIfMethodNode_clone;
    _inf_value9->compile=(void*)sIfMethodNode_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sIfMethodNode_terminated;
    _inf_value9->kind=(void*)sIfMethodNode_kind;
    _inf_value9->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    result=(struct sNode*)come_increment_ref_count(_inf_value9, "14if.nc", 632, 901);
    come_call_finalizer(sIfMethodNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 632, 902);
    # 634 "14if.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "14if.nc", 634, 903);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 634, 904):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 634, 905));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 634, 906):(void*)0);
    ((conditional_node) ? conditional_node = come_decrement_ref_count(conditional_node, ((struct sNode*)conditional_node)->finalize, ((struct sNode*)conditional_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 634, 907):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 634, 908);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 634, 909);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 634, 910);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 634, 911);
    ((if_node) ? if_node = come_decrement_ref_count(if_node, ((struct sNode*)if_node)->finalize, ((struct sNode*)if_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 634, 912):(void*)0);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 634, 913):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 634, 914):(void*)0);
    return __result_obj__0;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sIfMethodNode_clone"; neo_current_frame = &fr;
    struct sIfMethodNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sIfMethodNode*  result  ;
    char*  __dec_obj105  ;
    struct sNode* __dec_obj106;
    struct sNode* __dec_obj107;
    memset(&result, 0, sizeof(result));
    # 3 "sIfMethodNode_clone"
    # 5 "sIfMethodNode_clone"
    if(self==(void*)0) {
        # 4 "sIfMethodNode_clone"
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5 "sIfMethodNode_clone"
    result=(struct sIfMethodNode* )come_increment_ref_count((struct sIfMethodNode *)come_calloc(1, sizeof(struct sIfMethodNode )*(1), "sIfMethodNode_clone", 5, 891, "struct sIfMethodNode* "), "sIfMethodNode_clone", 5, 892);
    # 7 "sIfMethodNode_clone"
    if(self!=((void*)0)) {
        # 6 "sIfMethodNode_clone"
        result->sline=self->sline;
    }
    # 8 "sIfMethodNode_clone"
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        # 7 "sIfMethodNode_clone"
        __right_value0 = (void*)0;
        __dec_obj105=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sIfMethodNode_clone", 7, 893, "char* "), "sIfMethodNode_clone", 7, 895);
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0, (void*)0, "sIfMethodNode_clone", 7, 894);
    }
    # 9 "sIfMethodNode_clone"
    if(self!=((void*)0)) {
        # 8 "sIfMethodNode_clone"
        result->sline_real=self->sline_real;
    }
    # 10 "sIfMethodNode_clone"
    if(self!=((void*)0)&&self->it_node!=((void*)0)) {
        # 9 "sIfMethodNode_clone"
        __right_value0 = (void*)0;
        __dec_obj106=result->it_node,
        result->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node), "sIfMethodNode_clone", 9, 897);
        (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0, (void*)0, "sIfMethodNode_clone", 9, 896) :0);
    }
    # 11 "sIfMethodNode_clone"
    if(self!=((void*)0)&&self->match_node!=((void*)0)) {
        # 10 "sIfMethodNode_clone"
        __right_value0 = (void*)0;
        __dec_obj107=result->match_node,
        result->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node), "sIfMethodNode_clone", 10, 899);
        (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0, (void*)0, "sIfMethodNode_clone", 10, 898) :0);
    }
    # 11 "sIfMethodNode_clone"
        __result_obj__0 = result;
    come_call_finalizer(sIfMethodNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sIfMethodNode_clone}", 11, 900);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_elif_method_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    void* __right_value1 = (void*)0;
    struct sNode* it_node;
    _Bool existance_result_value;
    struct sNode* conditional_node;
    struct sNode* conditional_node2;
    struct sBlock*  if_block  ;
    struct list$1sNode$ph* elif_expression_nodes;
    struct list$1sBlock$ph* elif_blocks;
    int elif_num;
    struct sBlock*  else_block  ;
    char* saved_p;
    int saved_sline;
    char*  buf  ;
    struct sNode* expression_node_42;
    struct sBlock*  elif_block  ;
    struct sBlock*  __dec_obj108  ;
    struct sNode* _inf_value10;
    struct sIfNode* _inf_obj_value10;
    void* __right_value2 = (void*)0;
    struct sNode* if_node;
    struct sNode* _inf_value11;
    struct sIfMethodNode* _inf_obj_value11;
    struct sNode* result;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&it_node, 0, sizeof(it_node));
    memset(&existance_result_value, 0, sizeof(existance_result_value));
    memset(&conditional_node, 0, sizeof(conditional_node));
    memset(&conditional_node2, 0, sizeof(conditional_node2));
    memset(&if_block, 0, sizeof(if_block));
    memset(&elif_expression_nodes, 0, sizeof(elif_expression_nodes));
    memset(&elif_blocks, 0, sizeof(elif_blocks));
    memset(&elif_num, 0, sizeof(elif_num));
    memset(&else_block, 0, sizeof(else_block));
    memset(&saved_p, 0, sizeof(saved_p));
    memset(&saved_sline, 0, sizeof(saved_sline));
    memset(&buf, 0, sizeof(buf));
    memset(&expression_node_42, 0, sizeof(expression_node_42));
    memset(&elif_block, 0, sizeof(elif_block));
    memset(&if_node, 0, sizeof(if_node));
    memset(&result, 0, sizeof(result));
    # 639 "14if.nc"
    sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 639, 915, "char* "), "14if.nc", 639, 916);
    # 640 "14if.nc"
    sline=info->sline;
    # 642 "14if.nc"
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value"), "14if.nc", 642, 917),((void*)0),((void*)0),((void*)0),(_Bool)1,expression_node,info,(_Bool)0), "14if.nc", 642, 918);
    # 643 "14if.nc"
    existance_result_value=(_Bool)1;
    # 645 "14if.nc"
    __right_value0 = (void*)0;
    conditional_node=(struct sNode*)come_increment_ref_count(create_load_var("Value",info), "14if.nc", 645, 919);
    # 646 "14if.nc"
    __right_value0 = (void*)0;
    conditional_node2=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node, "14if.nc", 646, 920),info), "14if.nc", 646, 921);
    # 648 "14if.nc"
    skip_spaces_and_lf(info);
    # 650 "14if.nc"
    __right_value0 = (void*)0;
    if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 650, 922);
    # 655 "14if.nc"
    if(!if_block->mOmitSemicolon) {
        # 652 "14if.nc"
        existance_result_value=(_Bool)0;
    }
    # 655 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14if.nc", 655, 923, "struct list$1sNode$ph*"), "14if.nc", 655, 924)), "14if.nc", 655, 925);
    # 657 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "14if.nc", 657, 926, "struct list$1sBlock$ph*"), "14if.nc", 657, 927)), "14if.nc", 657, 928);
    # 659 "14if.nc"
    elif_num=0;
    # 661 "14if.nc"
    else_block=((void*)0);
    # 718 "14if.nc"
    while(1) {
        # 664 "14if.nc"
        saved_p=info->p;
        # 665 "14if.nc"
        saved_sline=info->sline;
        # 666 "14if.nc"
        skip_spaces_and_lf(info);
        # 674 "14if.nc"
        if(*info->p==59) {
            # 669 "14if.nc"
            info->p++;
            # 670 "14if.nc"
            skip_spaces_and_lf(info);
        }
        # 677 "14if.nc"
        if(!(xisalpha(*info->p)||*info->p==95)) {
            # 675 "14if.nc"
            break;
        }
        # 677 "14if.nc"
        skip_spaces_and_lf(info);
        # 678 "14if.nc"
        __right_value0 = (void*)0;
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "14if.nc", 678, 929);
        # 679 "14if.nc"
        skip_spaces_and_lf(info);
        # 718 "14if.nc"
        if(string_operator_equals(buf,"else")) {
            # 712 "14if.nc"
            if(parsecmp_forward("if",info)) {
                # 683 "14if.nc"
                skip_spaces_and_lf(info);
                # 685 "14if.nc"
                expected_next_character(40,info);
                # 688 "14if.nc"
                __right_value0 = (void*)0;
                expression_node_42=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "14if.nc", 688, 930);
                # 690 "14if.nc"
                list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_42, "14if.nc", 690, 931));
                # 692 "14if.nc"
                expected_next_character(41,info);
                # 693 "14if.nc"
                skip_spaces_and_lf(info);
                # 696 "14if.nc"
                __right_value0 = (void*)0;
                elif_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 696, 932);
                # 701 "14if.nc"
                if(!elif_block->mOmitSemicolon) {
                    # 698 "14if.nc"
                    existance_result_value=(_Bool)0;
                }
                # 701 "14if.nc"
                list$1sBlock$ph_push_back(elif_blocks,(struct sBlock* )come_increment_ref_count(elif_block, "14if.nc", 701, 933));
                # 703 "14if.nc"
                elif_num++;
                ((expression_node_42) ? expression_node_42 = come_decrement_ref_count(expression_node_42, ((struct sNode*)expression_node_42)->finalize, ((struct sNode*)expression_node_42)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 712, 934):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 712, 935);
            }
            else {
                # 706 "14if.nc"
                __right_value0 = (void*)0;
                __dec_obj108=else_block,
                else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 706, 937);
                come_call_finalizer(sBlock_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 706, 936);
                # 710 "14if.nc"
                if(!else_block->mOmitSemicolon) {
                    # 708 "14if.nc"
                    existance_result_value=(_Bool)0;
                }
                # 710 "14if.nc"
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 710, 938));
                break;
            }
        }
        else {
            # 714 "14if.nc"
            info->p=saved_p;
            # 715 "14if.nc"
            info->sline=saved_sline;
            # 716 "14if.nc"
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 716, 939));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 718, 940));
    }
    # 720 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 720, 944, "struct sNode");
    _inf_obj_value10=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value1=sIfNode_initialize((struct sIfNode* )come_increment_ref_count((struct sIfNode *)come_calloc(1, sizeof(struct sIfNode )*(1), "14if.nc", 720, 941, "struct sIfNode* "), "14if.nc", 720, 942),(struct sNode*)come_increment_ref_count(conditional_node2, "14if.nc", 720, 943),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,existance_result_value,info))), "14if.nc", 720, 945);
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sIfNode_finalize;
    _inf_value10->clone=(void*)sIfNode_clone;
    _inf_value10->compile=(void*)sIfNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sIfNode_terminated;
    _inf_value10->kind=(void*)sIfNode_kind;
    _inf_value10->left_value=(void*)sNodeBase_left_value;
    if_node=(struct sNode*)come_increment_ref_count(_inf_value10, "14if.nc", 720, 946);
    come_call_finalizer(sIfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 720, 947);
    # 721 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 721, 952, "struct sNode");
    _inf_obj_value11=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value1=sIfMethodNode_initialize((struct sIfMethodNode* )come_increment_ref_count((struct sIfMethodNode *)come_calloc(1, sizeof(struct sIfMethodNode )*(1), "14if.nc", 721, 948, "struct sIfMethodNode* "), "14if.nc", 721, 949),(struct sNode*)come_increment_ref_count(it_node, "14if.nc", 721, 950),(struct sNode*)come_increment_ref_count(if_node, "14if.nc", 721, 951),info))), "14if.nc", 721, 953);
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sIfMethodNode_finalize;
    _inf_value11->clone=(void*)sIfMethodNode_clone;
    _inf_value11->compile=(void*)sIfMethodNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sIfMethodNode_terminated;
    _inf_value11->kind=(void*)sIfMethodNode_kind;
    _inf_value11->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    result=(struct sNode*)come_increment_ref_count(_inf_value11, "14if.nc", 721, 954);
    come_call_finalizer(sIfMethodNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 721, 955);
    # 723 "14if.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "14if.nc", 723, 956);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 723, 957):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 723, 958));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 723, 959):(void*)0);
    ((conditional_node) ? conditional_node = come_decrement_ref_count(conditional_node, ((struct sNode*)conditional_node)->finalize, ((struct sNode*)conditional_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 723, 960):(void*)0);
    ((conditional_node2) ? conditional_node2 = come_decrement_ref_count(conditional_node2, ((struct sNode*)conditional_node2)->finalize, ((struct sNode*)conditional_node2)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 723, 961):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 723, 962);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 723, 963);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 723, 964);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 723, 965);
    ((if_node) ? if_node = come_decrement_ref_count(if_node, ((struct sNode*)if_node)->finalize, ((struct sNode*)if_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 723, 966):(void*)0);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 723, 967):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 723, 968):(void*)0);
    return __result_obj__0;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_less_method_call"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  sname  ;
    int sline;
    void* __right_value1 = (void*)0;
    struct sNode* it_node;
    struct sNode* conditional_node;
    void* __right_value2 = (void*)0;
    struct sNode* conditional_node2;
    _Bool existance_result_value;
    struct sBlock*  if_block  ;
    struct list$1sNode$ph* elif_expression_nodes;
    struct list$1sBlock$ph* elif_blocks;
    int elif_num;
    struct sBlock*  else_block  ;
    char* saved_p;
    int saved_sline;
    char*  buf  ;
    struct sNode* expression_node_43;
    struct sBlock*  elif_block  ;
    struct sBlock*  __dec_obj109  ;
    struct sNode* _inf_value12;
    struct sIfNode* _inf_obj_value12;
    struct sNode* if_node;
    struct sNode* _inf_value13;
    struct sIfMethodNode* _inf_obj_value13;
    struct sNode* result;
    struct sNode* __result_obj__0;
    memset(&sname, 0, sizeof(sname));
    memset(&sline, 0, sizeof(sline));
    memset(&it_node, 0, sizeof(it_node));
    memset(&conditional_node, 0, sizeof(conditional_node));
    memset(&conditional_node2, 0, sizeof(conditional_node2));
    memset(&existance_result_value, 0, sizeof(existance_result_value));
    memset(&if_block, 0, sizeof(if_block));
    memset(&elif_expression_nodes, 0, sizeof(elif_expression_nodes));
    memset(&elif_blocks, 0, sizeof(elif_blocks));
    memset(&elif_num, 0, sizeof(elif_num));
    memset(&else_block, 0, sizeof(else_block));
    memset(&saved_p, 0, sizeof(saved_p));
    memset(&saved_sline, 0, sizeof(saved_sline));
    memset(&buf, 0, sizeof(buf));
    memset(&expression_node_43, 0, sizeof(expression_node_43));
    memset(&elif_block, 0, sizeof(elif_block));
    memset(&if_node, 0, sizeof(if_node));
    memset(&result, 0, sizeof(result));
    # 728 "14if.nc"
    sname=(char* )come_increment_ref_count((char* )come_memdup(info->sname, "14if.nc", 728, 969, "char* "), "14if.nc", 728, 970);
    # 729 "14if.nc"
    sline=info->sline;
    # 731 "14if.nc"
    __right_value0 = (void*)0;
    it_node=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value"), "14if.nc", 731, 971),((void*)0),((void*)0),((void*)0),(_Bool)1,expression_node,info,(_Bool)0), "14if.nc", 731, 972);
    # 733 "14if.nc"
    __right_value0 = (void*)0;
    conditional_node=(struct sNode*)come_increment_ref_count(create_load_var("Value",info), "14if.nc", 733, 973);
    # 734 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    conditional_node2=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node, "14if.nc", 734, 974),(struct sNode*)come_increment_ref_count(create_int_node((char* )come_increment_ref_count(int_to_string(0), "14if.nc", 734, 975),info), "14if.nc", 734, 976),info), "14if.nc", 734, 977);
    # 735 "14if.nc"
    existance_result_value=(_Bool)1;
    # 737 "14if.nc"
    skip_spaces_and_lf(info);
    # 739 "14if.nc"
    __right_value0 = (void*)0;
    if_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 739, 978);
    # 744 "14if.nc"
    if(!if_block->mOmitSemicolon) {
        # 741 "14if.nc"
        existance_result_value=(_Bool)0;
    }
    # 744 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_expression_nodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14if.nc", 744, 979, "struct list$1sNode$ph*"), "14if.nc", 744, 980)), "14if.nc", 744, 981);
    # 746 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elif_blocks=(struct list$1sBlock$ph*)come_increment_ref_count(list$1sBlock$ph_initialize((struct list$1sBlock$ph*)come_increment_ref_count((struct list$1sBlock$ph*)come_calloc(1, sizeof(struct list$1sBlock$ph)*(1), "14if.nc", 746, 982, "struct list$1sBlock$ph*"), "14if.nc", 746, 983)), "14if.nc", 746, 984);
    # 748 "14if.nc"
    elif_num=0;
    # 750 "14if.nc"
    else_block=((void*)0);
    # 807 "14if.nc"
    while(1) {
        # 753 "14if.nc"
        saved_p=info->p;
        # 754 "14if.nc"
        saved_sline=info->sline;
        # 755 "14if.nc"
        skip_spaces_and_lf(info);
        # 763 "14if.nc"
        if(*info->p==59) {
            # 758 "14if.nc"
            info->p++;
            # 759 "14if.nc"
            skip_spaces_and_lf(info);
        }
        # 766 "14if.nc"
        if(!(xisalpha(*info->p)||*info->p==95)) {
            # 764 "14if.nc"
            break;
        }
        # 766 "14if.nc"
        skip_spaces_and_lf(info);
        # 767 "14if.nc"
        __right_value0 = (void*)0;
        buf=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "14if.nc", 767, 985);
        # 768 "14if.nc"
        skip_spaces_and_lf(info);
        # 807 "14if.nc"
        if(string_operator_equals(buf,"else")) {
            # 801 "14if.nc"
            if(parsecmp_forward("if",info)) {
                # 772 "14if.nc"
                skip_spaces_and_lf(info);
                # 774 "14if.nc"
                expected_next_character(40,info);
                # 777 "14if.nc"
                __right_value0 = (void*)0;
                expression_node_43=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "14if.nc", 777, 986);
                # 779 "14if.nc"
                list$1sNode$ph_push_back(elif_expression_nodes,(struct sNode*)come_increment_ref_count(expression_node_43, "14if.nc", 779, 987));
                # 781 "14if.nc"
                expected_next_character(41,info);
                # 782 "14if.nc"
                skip_spaces_and_lf(info);
                # 785 "14if.nc"
                __right_value0 = (void*)0;
                elif_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 785, 988);
                # 790 "14if.nc"
                if(!elif_block->mOmitSemicolon) {
                    # 787 "14if.nc"
                    existance_result_value=(_Bool)0;
                }
                # 790 "14if.nc"
                list$1sBlock$ph_push_back(elif_blocks,(struct sBlock* )come_increment_ref_count(elif_block, "14if.nc", 790, 989));
                # 792 "14if.nc"
                elif_num++;
                ((expression_node_43) ? expression_node_43 = come_decrement_ref_count(expression_node_43, ((struct sNode*)expression_node_43)->finalize, ((struct sNode*)expression_node_43)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 801, 990):(void*)0);
                come_call_finalizer(sBlock_finalize, elif_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 801, 991);
            }
            else {
                # 795 "14if.nc"
                __right_value0 = (void*)0;
                __dec_obj109=else_block,
                else_block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0), "14if.nc", 795, 993);
                come_call_finalizer(sBlock_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc", 795, 992);
                # 799 "14if.nc"
                if(!else_block->mOmitSemicolon) {
                    # 797 "14if.nc"
                    existance_result_value=(_Bool)0;
                }
                # 799 "14if.nc"
                (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 799, 994));
                break;
            }
        }
        else {
            # 803 "14if.nc"
            info->p=saved_p;
            # 804 "14if.nc"
            info->sline=saved_sline;
            # 805 "14if.nc"
            (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 805, 995));
            break;
        }
        (buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 807, 996));
    }
    # 809 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 809, 1000, "struct sNode");
    _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value1=sIfNode_initialize((struct sIfNode* )come_increment_ref_count((struct sIfNode *)come_calloc(1, sizeof(struct sIfNode )*(1), "14if.nc", 809, 997, "struct sIfNode* "), "14if.nc", 809, 998),(struct sNode*)come_increment_ref_count(conditional_node2, "14if.nc", 809, 999),if_block,elif_expression_nodes,elif_blocks,elif_num,else_block,(_Bool)0,existance_result_value,info))), "14if.nc", 809, 1001);
    _inf_value12->_protocol_obj=_inf_obj_value12;
    _inf_value12->finalize=(void*)sIfNode_finalize;
    _inf_value12->clone=(void*)sIfNode_clone;
    _inf_value12->compile=(void*)sIfNode_compile;
    _inf_value12->sline=(void*)sNodeBase_sline;
    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
    _inf_value12->sname=(void*)sNodeBase_sname;
    _inf_value12->terminated=(void*)sIfNode_terminated;
    _inf_value12->kind=(void*)sIfNode_kind;
    _inf_value12->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    if_node=(struct sNode*)come_increment_ref_count(_inf_value12, "14if.nc", 809, 1002);
    come_call_finalizer(sIfNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 809, 1003);
    # 810 "14if.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14if.nc", 810, 1008, "struct sNode");
    _inf_obj_value13=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value1=sIfMethodNode_initialize((struct sIfMethodNode* )come_increment_ref_count((struct sIfMethodNode *)come_calloc(1, sizeof(struct sIfMethodNode )*(1), "14if.nc", 810, 1004, "struct sIfMethodNode* "), "14if.nc", 810, 1005),(struct sNode*)come_increment_ref_count(it_node, "14if.nc", 810, 1006),(struct sNode*)come_increment_ref_count(if_node, "14if.nc", 810, 1007),info))), "14if.nc", 810, 1009);
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sIfMethodNode_finalize;
    _inf_value13->clone=(void*)sIfMethodNode_clone;
    _inf_value13->compile=(void*)sIfMethodNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sIfMethodNode_terminated;
    _inf_value13->kind=(void*)sIfMethodNode_kind;
    _inf_value13->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    result=(struct sNode*)come_increment_ref_count(_inf_value13, "14if.nc", 810, 1010);
    come_call_finalizer(sIfMethodNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "14if.nc}", 810, 1011);
    # 812 "14if.nc"
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "14if.nc", 812, 1012);
    ((expression_node) ? expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 812, 1013):(void*)0);
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "14if.nc", 812, 1014));
    ((it_node) ? it_node = come_decrement_ref_count(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 812, 1015):(void*)0);
    ((conditional_node) ? conditional_node = come_decrement_ref_count(conditional_node, ((struct sNode*)conditional_node)->finalize, ((struct sNode*)conditional_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 812, 1016):(void*)0);
    ((conditional_node2) ? conditional_node2 = come_decrement_ref_count(conditional_node2, ((struct sNode*)conditional_node2)->finalize, ((struct sNode*)conditional_node2)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 812, 1017):(void*)0);
    come_call_finalizer(sBlock_finalize, if_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 812, 1018);
    come_call_finalizer(list$1sNode$ph$p_finalize, elif_expression_nodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 812, 1019);
    come_call_finalizer(list$1sBlock$ph$p_finalize, elif_blocks, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 812, 1020);
    come_call_finalizer(sBlock_finalize, else_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14if.nc}", 812, 1021);
    ((if_node) ? if_node = come_decrement_ref_count(if_node, ((struct sNode*)if_node)->finalize, ((struct sNode*)if_node)->_protocol_obj, 0, 0,(void*)0, "14if.nc", 812, 1022):(void*)0);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 812, 1023):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "14if.nc", 812, 1024):(void*)0);
    return __result_obj__0;
}

