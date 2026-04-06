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

struct tuple2$2char$phlist$1sType$ph$ph
{
    char*  v1  ;
    struct list$1sType$ph* v2;
};

struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph
{
    struct tuple2$2char$phlist$1sType$ph$ph* item;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* prev;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* next;
};

struct list$1tuple2$2char$phlist$1sType$ph$ph$ph
{
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* head;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* it;
};

struct tuple3$3char$phsNode$phchar$ph
{
    char*  v1  ;
    struct sNode* v2;
    char*  v3  ;
};

struct list_item$1tuple3$3char$phsNode$phchar$ph$ph
{
    struct tuple3$3char$phsNode$phchar$ph* item;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* prev;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* next;
};

struct list$1tuple3$3char$phsNode$phchar$ph$ph
{
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* head;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* it;
};

struct sEnumNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  mTypeName  ;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* mElements;
    struct sType*  mTypeElements  ;
    char*  mAttribute  ;
};

struct sPayloadEnumNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    char*  mTypeName  ;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* mVariants;
    struct list$1char$ph* mGenericsTypeNames;
    char*  mAttribute  ;
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
static char*  payload_enum_field_name(char*  variant_name  , int field_index, int payload_num);
static struct sType*  create_payload_enum_impl_type(char*  type_name  , struct list$1char$ph* generics_type_names, struct sInfo*  info  );
static int list$1char$ph_length(struct list$1char$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static _Bool compile_generated_payload_enum_method(char*  fun_name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, char*  block_text  , struct sInfo*  info  );
static struct sFun*  map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  default_value  , _Bool by_pointer);
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun*  sFun_clone(struct sFun*  self  );
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
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static void list$1char$ph_finalize(struct list$1char$ph* self);
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
static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
static void register_generated_payload_enum_generics_method(char*  fun_name_key  , struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, char*  block_text  , struct sInfo*  info  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  item  , _Bool by_pointer);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static void map$2char$phsGenericsFun$ph_remove_ordered_entry(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsGenericsFun$ph_key_position(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer);
static _Bool generate_payload_enum_methods(char*  type_name  , struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* variants, struct list$1char$ph* generics_type_names, struct sInfo*  info  );
static struct tuple2$2char$phlist$1sType$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_begin(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static _Bool list$1tuple2$2char$phlist$1sType$ph$ph$ph_end(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static struct tuple2$2char$phlist$1sType$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_next(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType**  values  );
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char**  values  );
static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char*  type_name  , struct list$1tuple3$3char$phsNode$phchar$ph$ph* elements, struct sType*  type_elements  , char*  attribute  , struct sInfo*  info  );
_Bool sEnumNode_terminated(struct sEnumNode* self);
char*  sEnumNode_kind(struct sEnumNode* self);
_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo*  info  );
static void sNodeBase_finalize(struct sNodeBase* self);
static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph$p_clone(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static void list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static void list_item$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* self);
static void tuple3$3char$phsNode$phchar$ph$p_finalize(struct tuple3$3char$phsNode$phchar$ph* self);
static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_initialize(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_add(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self, struct tuple3$3char$phsNode$phchar$ph* item);
static struct tuple3$3char$phsNode$phchar$ph* tuple3$3char$phsNode$phchar$ph_clone(struct tuple3$3char$phsNode$phchar$ph* self);
static void tuple3$3char$phsNode$phchar$ph_finalize(struct tuple3$3char$phsNode$phchar$ph* self);
static void list$1tuple3$3char$phsNode$phchar$ph$ph_finalize(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static void sEnumNode_finalize(struct sEnumNode* self);
static int list$1tuple3$3char$phsNode$phchar$ph$ph_length(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer);
static struct tuple3$3char$phsNode$phchar$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_begin(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static _Bool list$1tuple3$3char$phsNode$phchar$ph$ph_end(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static struct tuple3$3char$phsNode$phchar$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_next(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool by_pointer);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static void map$2char$phbuffer$ph_remove_ordered_entry(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phbuffer$ph_key_position(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer);
struct sPayloadEnumNode* sPayloadEnumNode_initialize(struct sPayloadEnumNode* self, char*  type_name  , struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* variants, struct list$1char$ph* generics_type_names, char*  attribute  , struct sInfo*  info  );
_Bool sPayloadEnumNode_terminated(struct sPayloadEnumNode* self);
char*  sPayloadEnumNode_kind(struct sPayloadEnumNode* self);
_Bool sPayloadEnumNode_compile(struct sPayloadEnumNode* self, struct sInfo*  info  );
static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_clone(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static void list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static void list_item$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static void tuple2$2char$phlist$1sType$ph$ph$p_finalize(struct tuple2$2char$phlist$1sType$ph$ph* self);
static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_initialize(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_add(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self, struct tuple2$2char$phlist$1sType$ph$ph* item);
static struct tuple2$2char$phlist$1sType$ph$ph* tuple2$2char$phlist$1sType$ph$ph_clone(struct tuple2$2char$phlist$1sType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static void tuple2$2char$phlist$1sType$ph$ph_finalize(struct tuple2$2char$phlist$1sType$ph$ph* self);
static void list$1tuple2$2char$phlist$1sType$ph$ph$ph_finalize(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static void sPayloadEnumNode_finalize(struct sPayloadEnumNode* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType* v2);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char*  key  , struct sType*  item  , _Bool by_pointer);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static void map$2char$phsType$ph_remove_ordered_entry(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsType$ph_key_position(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer);
struct sNode* parse_enum(char*  type_name  , char*  attribute  , struct sInfo*  info  );
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_push_back(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self, struct tuple2$2char$phlist$1sType$ph$ph* item);
static struct tuple2$2char$phlist$1sType$ph$ph* tuple2$2char$phlist$1sType$ph$ph_initialize(struct tuple2$2char$phlist$1sType$ph$ph* self, char*  v1  , struct list$1sType$ph* v2);
static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_reset(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self);
static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_push_back(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self, struct tuple3$3char$phsNode$phchar$ph* item);
static struct tuple3$3char$phsNode$phchar$ph* tuple3$3char$phsNode$phchar$ph_initialize(struct tuple3$3char$phsNode$phchar$ph* self, char*  v1  , struct sNode* v2, char*  v3  );
static int list$1tuple2$2char$phlist$1sType$ph$ph$ph_length(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self);
static struct sPayloadEnumNode* sPayloadEnumNode_clone(struct sPayloadEnumNode* self);
static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self);
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo*  info  );
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
static char*  payload_enum_field_name(char*  variant_name  , int field_index, int payload_num)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "payload_enum_field_name"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(payload_num<=1) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s_value",variant_name))), "21enum.nc", 6, 1);
        (variant_name = come_decrement_ref_count(variant_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 6, 2));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 6, 3));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "21enum.nc", 6, 4));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s_value%d",variant_name,field_index+1))), "21enum.nc", 9, 5);
    (variant_name = come_decrement_ref_count(variant_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 9, 6));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 9, 7));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "21enum.nc", 9, 8));
    return __result_obj__0;
}

static struct sType*  create_payload_enum_impl_type(char*  type_name  , struct list$1char$ph* generics_type_names, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "create_payload_enum_impl_type"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sType*  type  ;
    int i;
    void* __right_value2 = (void*)0;
    struct sType*  __result_obj__0  ;
    type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 14, 9, "struct sType* "), "21enum.nc", 14, 10),(char* )come_increment_ref_count(type_name, "21enum.nc", 14, 11),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 14, 12);
    for(i=0    ;i<list$1char$ph_length(generics_type_names);i++){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1sType$ph_push_back(type->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 17, 59, "struct sType* "), "21enum.nc", 17, 60),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i), "21enum.nc", 17, 61),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 17, 62));
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(type, "21enum.nc", 20, 63);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 20, 64));
    come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 20, 65);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 20, 66);
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

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj1  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj2  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj3  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 45);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1619, 46, "struct list_item$1sType$ph*"))), "./neo-c.h", 1619, 47);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1623, 49);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 48);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1629, 50, "struct list_item$1sType$ph*"))), "./neo-c.h", 1629, 51);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj2=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1633, 53);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 52);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1639, 54, "struct list_item$1sType$ph*"))), "./neo-c.h", 1639, 55);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj3=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1643, 57);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 56);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 58);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 13);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 14);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 17);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 18);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 19):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 20):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 21));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 22));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 23));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 24));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 25));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 26));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 27));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 28));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 31);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 32);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 34);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 35);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 36);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 37));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 38);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 41);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 42);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 43):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 44);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 16);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 15);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 30);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 29):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 33);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 40);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 39));
    }
            neo_current_frame = fr.prev;
}

static _Bool compile_generated_payload_enum_method(char*  fun_name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, char*  block_text  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compile_generated_payload_enum_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    _Bool _conditional_value_X0;
    _Bool __result_obj__0;
    char* p;
    int sline;
    int sline_real;
    int sline_top;
    char*  sname  ;
    char* head;
    struct buffer*  source  ;
    struct buffer*  __dec_obj4  ;
    char*  __dec_obj5  ;
    struct sBlock*  block  ;
    struct buffer*  __dec_obj6  ;
    char*  __dec_obj7  ;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* param_default_parametors;
    struct sFun*  fun  ;
    struct sNode* _inf_value1;
    struct sFunNode* _inf_obj_value1;
    void* __right_value2 = (void*)0;
    struct sNode* node;
    if(({(_conditional_value_X0=(((struct sFun* )(__right_value0=map$2char$phsFun$ph_at(info->funcs,fun_name,((void*)0),(_Bool)0)))));    come_call_finalizer(sFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 25, 108);
_conditional_value_X0;})) {
                __result_obj__0 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 26, 109));
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 26, 110);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 26, 111);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 26, 112);
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 26, 113));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    p=info->p;
    sline=info->sline;
    sline_real=info->sline_real;
    sline_top=info->sline_top;
    sname=(char* )come_increment_ref_count(info->sname, "21enum.nc", 33, 114);
    head=info->head;
    source=(struct buffer* )come_increment_ref_count(info->source, "21enum.nc", 35, 115);
    __right_value0 = (void*)0;
    __dec_obj4=info->source,
    info->source=(struct buffer* )come_increment_ref_count(charp_to_buffer(block_text), "21enum.nc", 37, 117);
    come_call_finalizer(buffer_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 37, 116);
    if(info->p==((void*)0)) {
        info->p=info->source->buf;
    }
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline;
    info->sline_real=sline;
    info->sline_top=sline;
    __right_value0 = (void*)0;
    __dec_obj5=info->sname,
    info->sname=(char* )come_increment_ref_count(__builtin_string(sname,"21enum.nc",47), "21enum.nc", 47, 119);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 47, 118);
    __right_value0 = (void*)0;
    block=(struct sBlock* )come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)1), "21enum.nc", 49, 120);
    info->head=head;
    __dec_obj6=info->source,
    info->source=(struct buffer* )come_increment_ref_count(source, "21enum.nc", 52, 122);
    come_call_finalizer(buffer_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 52, 121);
    if(info->p==((void*)0)) {
        info->p=info->source->buf;
    }
    info->p=info->source->buf;
    info->p=p;
    info->sline=sline;
    info->sline_real=sline_real;
    info->sline_top=sline_top;
    __dec_obj7=info->sname,
    info->sname=(char* )come_increment_ref_count(sname, "21enum.nc", 61, 124);
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 61, 123);
    __right_value0 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "21enum.nc", 63, 125, "struct list$1char$ph*"), "21enum.nc", 63, 129)), "21enum.nc", 63, 130);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "21enum.nc", 65, 131, "struct sFun* "), "21enum.nc", 65, 132),(char* )come_increment_ref_count(fun_name, "21enum.nc", 65, 133),(struct sType* )come_increment_ref_count(result_type, "21enum.nc", 65, 134),(struct list$1sType$ph*)come_increment_ref_count(param_types, "21enum.nc", 65, 135),(struct list$1char$ph*)come_increment_ref_count(param_names, "21enum.nc", 65, 136),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "21enum.nc", 65, 137),(_Bool)0,(_Bool)0,(struct sBlock* )come_increment_ref_count(block, "21enum.nc", 65, 138),(_Bool)0,info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "21enum.nc", 65, 139),(char*)come_increment_ref_count(xsprintf(""), "21enum.nc", 65, 140),(_Bool)0,((void*)0),((void*)0),0,(_Bool)0,(char*)come_increment_ref_count(xsprintf(""), "21enum.nc", 65, 141)), "21enum.nc", 65, 142);
    __right_value0 = (void*)0;
    map$2char$phsFun$ph_insert(info->funcs,(char* )come_increment_ref_count(__builtin_string(fun_name,"21enum.nc",67), "21enum.nc", 67, 182),(struct sFun* )come_increment_ref_count(fun, "21enum.nc", 67, 183),(_Bool)0);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21enum.nc", 69, 187, "struct sNode");
    _inf_obj_value1=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1=sFunNode_initialize((struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "21enum.nc", 69, 184, "struct sFunNode* "), "21enum.nc", 69, 185),(struct sFun* )come_increment_ref_count(fun, "21enum.nc", 69, 186),info))), "21enum.nc", 69, 188);
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
    node=(struct sNode*)come_increment_ref_count(_inf_value1, "21enum.nc", 69, 576);
    come_call_finalizer(sFunNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 69, 577);
        __result_obj__0 = node_compile(node,info);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 71, 578));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 71, 579);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 71, 580);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 71, 581);
    (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 71, 582));
    (sname = come_decrement_ref_count(sname, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 71, 583));
    come_call_finalizer(buffer_finalize, source, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 71, 584);
    come_call_finalizer(sBlock_finalize, block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 71, 585);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 71, 586);
    come_call_finalizer(sFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 71, 587);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "21enum.nc", 71, 588):(void*)0);
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
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 67);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 94);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 95);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 96);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 97);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 98);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 99);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 100);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 101);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 102);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 103);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 104);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 105);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 106);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 107);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 68));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 69);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 70);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 71);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 72);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 73);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 80);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 83);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 84));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 85));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 86);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 87);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 88);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 89);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 90));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 91));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 92));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 93));
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 79);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 78);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 74));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 75));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 76);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 77));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 81);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 82);
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 126);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 127);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 128);
    return __result_obj__0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char*  key  , struct sFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsFun$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 143));
        come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 144);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsFun$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 159));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 160);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 161);
                    self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3919, 162);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 163);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sFun* )come_increment_ref_count(item, "./neo-c.h", 3948, 164);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 179));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 180));
    come_call_finalizer(sFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 181);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sFun**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_2;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 145, "char** "))), "./neo-c.h", 3810, 146);
    __right_value0 = (void*)0;
    items=(struct sFun** )come_increment_ref_count(((struct sFun** )(__right_value0=(struct sFun* *)come_calloc(1, sizeof(struct sFun* )*(1*(size)), "./neo-c.h", 3811, 147, "struct sFun** "))), "./neo-c.h", 3811, 148);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 149, "unsigned int*"))), "./neo-c.h", 3812, 150);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 151, "_Bool*"))), "./neo-c.h", 3813, 152);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_2=0    ;i_2<old_size;i_2++){
        if(!self->item_existance[i_2]) {
            continue;
        }
        key_hash=self->hashes[i_2];
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
                keys[n]=self->keys[i_2];
                items[n]=self->items[i_2];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 153));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 154));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsFun$ph_remove_ordered_entry(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    pos=map$2char$phsFun$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsFun$ph_key_position(struct map$2char$phsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
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
    struct list_item$1char$ph* it_3;
    int i_4;
    struct list_item$1char$ph* prev_it_5;
    struct list_item$1char$ph* it_6;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_7;
    struct list_item$1char$ph* prev_it_8;
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 156);
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
        it_3=self->head;
        i_4=0;
        while(it_3!=((void*)0)) {
            if(i_4==head) {
                self->tail=it_3->prev;
                self->tail->next=((void*)0);
            }
            if(i_4>=head) {
                prev_it_5=it_3;
                it_3=it_3->next;
                i_4++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 157);
                self->len--;
            }
            else {
                it_3=it_3->next;
                i_4++;
            }
        }
    }
    else {
        it_6=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_7=0;
        while(it_6!=((void*)0)) {
            if(i_7==head) {
                head_prev_it=it_6->prev;
            }
            if(i_7==tail) {
                tail_it=it_6;
            }
            if(i_7>=head&&i_7<tail) {
                prev_it_8=it_6;
                it_6=it_6->next;
                i_7++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 158);
                self->len--;
            }
            else {
                it_6=it_6->next;
                i_7++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 155);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
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
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj9  ;
    struct list_item$1char$ph* litem_10;
    char*  __dec_obj10  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 165));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 166, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 167);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj8=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 169);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 168);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 170, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 171);
        litem_9->prev=self->head;
        litem_9->next=((void*)0);
        __dec_obj9=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 173);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 172);
        self->tail=litem_9;
        self->head->next=litem_9;
    }
    else {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 174, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 175);
        litem_10->prev=self->tail;
        litem_10->next=((void*)0);
        __dec_obj10=litem_10->item,
        litem_10->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 177);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 176);
        self->tail->next=litem_10;
        self->tail=litem_10;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 178));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sFunNode_finalize(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sFunNode_finalize", 2, 189));
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer(sFun_finalize, self->mFun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_finalize}", 3, 190);
    }
        neo_current_frame = fr.prev;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFunNode_clone"; neo_current_frame = &fr;
    struct sFunNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sFunNode*  result  ;
    char*  __dec_obj11  ;
    struct sFun*  __dec_obj76  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sFunNode* )come_increment_ref_count((struct sFunNode *)come_calloc(1, sizeof(struct sFunNode )*(1), "sFunNode_clone", 5, 191, "struct sFunNode* "), "sFunNode_clone", 5, 192);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sFunNode_clone", 7, 193, "char* "), "sFunNode_clone", 7, 195);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sFunNode_clone", 7, 194);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj76=result->mFun,
        result->mFun=(struct sFun* )come_increment_ref_count(sFun_clone(self->mFun), "sFunNode_clone", 9, 574);
        come_call_finalizer(sFun_finalize, __dec_obj76,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFunNode_clone", 9, 573);
    }
        __result_obj__0 = result;
    come_call_finalizer(sFunNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFunNode_clone}", 10, 575);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sFun*  sFun_clone(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_clone"; neo_current_frame = &fr;
    struct sFun*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sFun*  result  ;
    char*  __dec_obj12  ;
    struct sType*  __dec_obj47  ;
    struct list$1sType$ph* __dec_obj48;
    struct list$1char$ph* __dec_obj49;
    struct list$1char$ph* __dec_obj50;
    struct sType*  __dec_obj51  ;
    struct list$1sVar$ph* __dec_obj59;
    struct sBlock*  __dec_obj65  ;
    char*  __dec_obj66  ;
    char*  __dec_obj67  ;
    struct buffer*  __dec_obj68  ;
    struct buffer*  __dec_obj69  ;
    struct buffer*  __dec_obj70  ;
    struct buffer*  __dec_obj71  ;
    char*  __dec_obj72  ;
    char*  __dec_obj73  ;
    char*  __dec_obj74  ;
    char*  __dec_obj75  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count((void*)0, "sFun_clone", 4, 196);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 4, 197);
        return __result_obj__0;
    }
    result=(struct sFun* )come_increment_ref_count((struct sFun *)come_calloc(1, sizeof(struct sFun )*(1), "sFun_clone", 5, 198, "struct sFun* "), "sFun_clone", 5, 199);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sFun_clone", 6, 200, "char* "), "sFun_clone", 6, 202);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 6, 201);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj47=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sFun_clone", 7, 378);
        come_call_finalizer(sType_finalize, __dec_obj47,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 7, 377);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj48=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sFun_clone", 8, 380);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 8, 379);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj49=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sFun_clone", 9, 382);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj49,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 9, 381);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj50=result->mParamDefaultParametors,
        result->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors), "sFun_clone", 10, 384);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 10, 383);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj51=result->mLambdaType,
        result->mLambdaType=(struct sType* )come_increment_ref_count(sType_clone(self->mLambdaType), "sFun_clone", 11, 386);
        come_call_finalizer(sType_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 11, 385);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj59=result->mAllVar,
        result->mAllVar=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph$p_clone(self->mAllVar), "sFun_clone", 12, 434);
        come_call_finalizer(list$1sVar$ph_finalize, __dec_obj59,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 12, 433);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj65=result->mBlock,
        result->mBlock=(struct sBlock* )come_increment_ref_count(sBlock_clone(self->mBlock), "sFun_clone", 13, 543);
        come_call_finalizer(sBlock_finalize, __dec_obj65,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 13, 542);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj66=result->mTextBlock,
        result->mTextBlock=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlock, "sFun_clone", 14, 544, "char* "), "sFun_clone", 14, 546);
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 14, 545);
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj67=result->mTextBlockSName,
        result->mTextBlockSName=(char* )come_increment_ref_count((char* )come_memdup(self->mTextBlockSName, "sFun_clone", 15, 547, "char* "), "sFun_clone", 15, 549);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 15, 548);
    }
    if(self!=((void*)0)) {
        result->mTextBlockSline=self->mTextBlockSline;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj68=result->mSource,
        result->mSource=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSource), "sFun_clone", 17, 551);
        come_call_finalizer(buffer_finalize, __dec_obj68,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 17, 550);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj69=result->mSourceHead,
        result->mSourceHead=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead), "sFun_clone", 18, 553);
        come_call_finalizer(buffer_finalize, __dec_obj69,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 18, 552);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj70=result->mSourceHead2,
        result->mSourceHead2=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceHead2), "sFun_clone", 19, 555);
        come_call_finalizer(buffer_finalize, __dec_obj70,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 19, 554);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj71=result->mSourceEnd,
        result->mSourceEnd=(struct buffer* )come_increment_ref_count(buffer_clone(self->mSourceEnd), "sFun_clone", 20, 557);
        come_call_finalizer(buffer_finalize, __dec_obj71,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_clone", 20, 556);
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
        __dec_obj72=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sFun_clone", 28, 558, "char* "), "sFun_clone", 28, 560);
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 28, 559);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj73=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sFun_clone", 29, 561, "char* "), "sFun_clone", 29, 563);
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 29, 562);
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj74=result->mFunAttribute,
        result->mFunAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mFunAttribute, "sFun_clone", 30, 564, "char* "), "sFun_clone", 30, 566);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 30, 565);
    }
    if(self!=((void*)0)) {
        result->mGenericsFun=self->mGenericsFun;
    }
    if(self!=((void*)0)) {
        result->mDefineReturnVar=self->mDefineReturnVar;
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj75=result->mAsmFun,
        result->mAsmFun=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmFun, "sFun_clone", 33, 567, "char* "), "sFun_clone", 33, 569);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "sFun_clone", 33, 568);
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(result, "sFun_clone", 34, 570);
    come_call_finalizer(sFun_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 571);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sFun_clone}", 34, 572);
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
    struct list$1sNode$ph* __dec_obj33;
    struct list$1sNode$ph* __dec_obj34;
    struct list$1int$* __dec_obj35;
    struct list$1int$* __dec_obj36;
    struct sType*  __dec_obj37  ;
    char*  __dec_obj38  ;
    struct list$1sType$ph* __dec_obj39;
    struct list$1char$ph* __dec_obj43;
    struct sType*  __dec_obj44  ;
    struct sNode* __dec_obj45;
    struct list$1sNode$ph* __dec_obj46;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 203);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 204);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 205, "struct sType* "), "sType_clone", 5, 206);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 208);
        come_call_finalizer(sType_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 207);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 210);
        come_call_finalizer(sType_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 209);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj18=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 240);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 239);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj19=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 242);
        come_call_finalizer(sType_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 241);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj20=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 251);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 250) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 253);
        (__dec_obj21 ? __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 252) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 254, "char* "), "sType_clone", 14, 256);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 255);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 257, "char* "), "sType_clone", 15, 259);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 258);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 260, "char* "), "sType_clone", 16, 262);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 261);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj25=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 263, "char* "), "sType_clone", 17, 265);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 264);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 266, "char* "), "sType_clone", 18, 268);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 267);
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
        __dec_obj27=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 269, "char* "), "sType_clone", 49, 271);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 270);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj28=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 272, "char* "), "sType_clone", 51, 274);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 273);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj29=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 275, "char* "), "sType_clone", 54, 277);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 276);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 307);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj33,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 306);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 309);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 308);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj35=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 329);
        come_call_finalizer(list$1int$_finalize, __dec_obj35,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 328);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj36=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 331);
        come_call_finalizer(list$1int$_finalize, __dec_obj36,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 330);
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
        __dec_obj37=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 333);
        come_call_finalizer(sType_finalize, __dec_obj37,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 332);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj38=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 334, "char* "), "sType_clone", 67, 336);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 335);
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
        __dec_obj39=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 338);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 337);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj43=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 367);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj43,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 366);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj44=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 369);
        come_call_finalizer(sType_finalize, __dec_obj44,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 368);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj45=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 371);
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 370) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj46=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 373);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 372);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 374);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 375);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 376);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 211);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 212);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 213, "struct list$1sType$ph*"), "./neo-c.h", 1513, 217)), "./neo-c.h", 1513, 218);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 233));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 234));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 235);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 236);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 237);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 214);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 215);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 216);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj15  ;
    struct list_item$1sType$ph* litem_11;
    struct sType*  __dec_obj16  ;
    struct list_item$1sType$ph* litem_12;
    struct sType*  __dec_obj17  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 219);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 220, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 221);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj15=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 223);
        come_call_finalizer(sType_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 222);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 224, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 225);
        litem_11->prev=self->head;
        litem_11->next=((void*)0);
        __dec_obj16=litem_11->item,
        litem_11->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 227);
        come_call_finalizer(sType_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 226);
        self->tail=litem_11;
        self->head->next=litem_11;
    }
    else {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 228, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 229);
        litem_12->prev=self->tail;
        litem_12->next=((void*)0);
        __dec_obj17=litem_12->item,
        litem_12->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 231);
        come_call_finalizer(sType_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 230);
        self->tail->next=litem_12;
        self->tail=litem_12;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 232);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 238);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 243);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 244):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 245, "struct sNode*"), "sNode_clone", 5, 246);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 247);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 248):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 249):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 278);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 279);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 280, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 284)), "./neo-c.h", 1513, 285);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 300));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 301));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 302);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 303);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 304);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 281);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 282);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 283);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj30;
    struct list_item$1sNode$ph* litem_13;
    struct sNode* __dec_obj31;
    struct list_item$1sNode$ph* litem_14;
    struct sNode* __dec_obj32;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 286):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 287, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 288);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj30=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 290);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 289) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 291, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 292);
        litem_13->prev=self->head;
        litem_13->next=((void*)0);
        __dec_obj31=litem_13->item,
        litem_13->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 294);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 293) :0);
        self->tail=litem_13;
        self->head->next=litem_13;
    }
    else {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 295, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 296);
        litem_14->prev=self->tail;
        litem_14->next=((void*)0);
        __dec_obj32=litem_14->item,
        litem_14->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 298);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 297) :0);
        self->tail->next=litem_14;
        self->tail=litem_14;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 299):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 305);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 310);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 311);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 312, "struct list$1int$*"), "./neo-c.h", 1513, 316)), "./neo-c.h", 1513, 317);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 324);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 325);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 326);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 313);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 314);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 315);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 318, "struct list_item$1int$*"))), "./neo-c.h", 1534, 319);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 320, "struct list_item$1int$*"))), "./neo-c.h", 1544, 321);
        litem_15->prev=self->head;
        litem_15->next=((void*)0);
        litem_15->item=item;
        self->tail=litem_15;
        self->head->next=litem_15;
    }
    else {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 322, "struct list_item$1int$*"))), "./neo-c.h", 1554, 323);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 327);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 339);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 340);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 341, "struct list$1char$ph*"), "./neo-c.h", 1513, 342)), "./neo-c.h", 1513, 343);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 358, "char* "), "./neo-c.h", 1518, 359));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 360, "char* "), "./neo-c.h", 1521, 361));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 362);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 363);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 364);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj40  ;
    struct list_item$1char$ph* litem_17;
    char*  __dec_obj41  ;
    struct list_item$1char$ph* litem_18;
    char*  __dec_obj42  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 344));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 345, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 346);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj40=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 348);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 347);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 349, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 350);
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        __dec_obj41=litem_17->item,
        litem_17->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 352);
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 351);
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 353, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 354);
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        __dec_obj42=litem_18->item,
        litem_18->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 356);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 355);
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 357));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 365);
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 387);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 388);
        return __result_obj__0;
    }
    result=(struct list$1sVar$ph*)come_increment_ref_count(list$1sVar$ph_initialize((struct list$1sVar$ph*)come_increment_ref_count((struct list$1sVar$ph*)come_calloc(1, sizeof(struct list$1sVar$ph)*(1), "./neo-c.h", 1513, 389, "struct list$1sVar$ph*"), "./neo-c.h", 1513, 393)), "./neo-c.h", 1513, 394);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1518, 427));
        }
        else {
            __right_value0 = (void*)0;
            list$1sVar$ph_add(result,(struct sVar* )come_increment_ref_count(sVar_clone(it->item), "./neo-c.h", 1521, 428));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 429);
    come_call_finalizer(list$1sVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 430);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 431);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_initialize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_initialize"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sVar$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 390);
    come_call_finalizer(list$1sVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 391);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 392);
    return __result_obj__0;
}

static struct list$1sVar$ph* list$1sVar$ph_add(struct list$1sVar$ph* self, struct sVar*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph_add"; neo_current_frame = &fr;
    struct list$1sVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sVar$ph* litem;
    struct sVar*  __dec_obj52  ;
    struct list_item$1sVar$ph* litem_19;
    struct sVar*  __dec_obj53  ;
    struct list_item$1sVar$ph* litem_20;
    struct sVar*  __dec_obj54  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 395);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1534, 396, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1534, 397);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj52=litem->item,
        litem->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1538, 399);
        come_call_finalizer(sVar_finalize, __dec_obj52,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 398);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1544, 400, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1544, 401);
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj53=litem_19->item,
        litem_19->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1548, 403);
        come_call_finalizer(sVar_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 402);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1sVar$ph*)come_increment_ref_count(((struct list_item$1sVar$ph*)(__right_value0=(struct list_item$1sVar$ph*)come_calloc(1, sizeof(struct list_item$1sVar$ph)*(1), "./neo-c.h", 1554, 404, "struct list_item$1sVar$ph*"))), "./neo-c.h", 1554, 405);
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj54=litem_20->item,
        litem_20->item=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 1558, 407);
        come_call_finalizer(sVar_finalize, __dec_obj54,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 406);
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 408);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  sVar_clone(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_clone"; neo_current_frame = &fr;
    struct sVar*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVar*  result  ;
    char*  __dec_obj55  ;
    char*  __dec_obj56  ;
    struct sType*  __dec_obj57  ;
    char*  __dec_obj58  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count((void*)0, "sVar_clone", 4, 409);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 4, 410);
        return __result_obj__0;
    }
    result=(struct sVar* )come_increment_ref_count((struct sVar *)come_calloc(1, sizeof(struct sVar )*(1), "sVar_clone", 5, 411, "struct sVar* "), "sVar_clone", 5, 412);
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj55=result->mName,
        result->mName=(char* )come_increment_ref_count((char* )come_memdup(self->mName, "sVar_clone", 6, 413, "char* "), "sVar_clone", 6, 415);
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 6, 414);
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj56=result->mCValueName,
        result->mCValueName=(char* )come_increment_ref_count((char* )come_memdup(self->mCValueName, "sVar_clone", 7, 416, "char* "), "sVar_clone", 7, 418);
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 7, 417);
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj57=result->mType,
        result->mType=(struct sType* )come_increment_ref_count(sType_clone(self->mType), "sVar_clone", 8, 420);
        come_call_finalizer(sType_finalize, __dec_obj57,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_clone", 8, 419);
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
        __dec_obj58=result->mFunName,
        result->mFunName=(char* )come_increment_ref_count((char* )come_memdup(self->mFunName, "sVar_clone", 12, 421, "char* "), "sVar_clone", 12, 423);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "sVar_clone", 12, 422);
    }
    if(self!=((void*)0)) {
        result->no_output_come_code=self->no_output_come_code;
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(result, "sVar_clone", 14, 424);
    come_call_finalizer(sVar_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 425);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVar_clone}", 14, 426);
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
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 432);
    }
            neo_current_frame = fr.prev;
}

static struct sBlock*  sBlock_clone(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_clone"; neo_current_frame = &fr;
    struct sBlock*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sBlock*  result  ;
    struct list$1sNode$ph* __dec_obj60;
    struct sVarTable*  __dec_obj64  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct sBlock* )come_increment_ref_count((void*)0, "sBlock_clone", 4, 435);
        neo_current_frame = fr.prev;
        come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 4, 436);
        return __result_obj__0;
    }
    result=(struct sBlock* )come_increment_ref_count((struct sBlock *)come_calloc(1, sizeof(struct sBlock )*(1), "sBlock_clone", 5, 437, "struct sBlock* "), "sBlock_clone", 5, 438);
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj60=result->mNodes,
        result->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes), "sBlock_clone", 6, 440);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj60,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 6, 439);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj64=result->mVarTable,
        result->mVarTable=(struct sVarTable* )come_increment_ref_count(sVarTable_clone(self->mVarTable), "sBlock_clone", 7, 538);
        come_call_finalizer(sVarTable_finalize, __dec_obj64,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_clone", 7, 537);
    }
    if(self!=((void*)0)) {
        result->mOmitSemicolon=self->mOmitSemicolon;
    }
        __result_obj__0 = (struct sBlock* )come_increment_ref_count(result, "sBlock_clone", 9, 539);
    come_call_finalizer(sBlock_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 540);
    neo_current_frame = fr.prev;
    come_call_finalizer(sBlock_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sBlock_clone}", 9, 541);
    return __result_obj__0;
}

static struct sVarTable*  sVarTable_clone(struct sVarTable*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVarTable_clone"; neo_current_frame = &fr;
    struct sVarTable*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sVarTable*  result  ;
    struct map$2char$phsVar$ph* __dec_obj63;
    if(self==(void*)0) {
                __result_obj__0 = (struct sVarTable* )come_increment_ref_count((void*)0, "sVarTable_clone", 4, 441);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 4, 442);
        return __result_obj__0;
    }
    result=(struct sVarTable* )come_increment_ref_count((struct sVarTable *)come_calloc(1, sizeof(struct sVarTable )*(1), "sVarTable_clone", 5, 443, "struct sVarTable* "), "sVarTable_clone", 5, 444);
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj63=result->mVars,
        result->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars), "sVarTable_clone", 6, 533);
        come_call_finalizer(map$2char$phsVar$ph_finalize, __dec_obj63,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sVarTable_clone", 6, 532);
    }
    if(self!=((void*)0)) {
        result->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result->mParent=self->mParent;
    }
        __result_obj__0 = (struct sVarTable* )come_increment_ref_count(result, "sVarTable_clone", 9, 534);
    come_call_finalizer(sVarTable_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 535);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVarTable_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sVarTable_clone}", 9, 536);
    return __result_obj__0;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_clone"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct map$2char$phsVar$ph* result;
    struct list$1char$ph* __dec_obj62;
    char*  it  ;
    struct sVar*  default_value  ;
    struct sVar*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 3444, 445);
        neo_current_frame = fr.prev;
        come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3444, 451);
        return __result_obj__0;
    }
    result=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./neo-c.h", 3447, 452, "struct map$2char$phsVar$ph*"), "./neo-c.h", 3447, 468)), "./neo-c.h", 3447, 469);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj62=result->key_list,
    result->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3449, 470, "struct list$1char$ph*"), "./neo-c.h", 3449, 471)), "./neo-c.h", 3449, 473);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj62,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3449, 472);
    for(it=map$2char$phsVar$ph_begin(self)    ;!map$2char$phsVar$ph_end(self);it=map$2char$phsVar$ph_next(self)){
        memset(&default_value,0,sizeof(struct sVar* ));
        __right_value0 = (void*)0;
        it2=(struct sVar* )come_increment_ref_count(map$2char$phsVar$ph_at(self,it,(struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3455, 489),(_Bool)1), "./neo-c.h", 3455, 490);
        if(1&&1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3458, 512, "char* "), "./neo-c.h", 3458, 513),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3458, 514),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count((char* )come_memdup(it, "./neo-c.h", 3461, 515, "char* "), "./neo-c.h", 3461, 516),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3461, 517),(_Bool)0);
        }
        else if(1) {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3464, 518),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3464, 519),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phsVar$ph_put(result,(char* )come_increment_ref_count(it, "./neo-c.h", 3467, 520),(struct sVar* )come_increment_ref_count(sVar_clone(it2), "./neo-c.h", 3467, 521),(_Bool)0);
        }
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 522);
        come_call_finalizer(sVar_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3471, 523);
    }
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result, "./neo-c.h", 3471, 524);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 525);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 526);
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_21;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 446);
            }
        }
    }
    come_free((char*)self->items);
    for(i_21=0    ;i_21<self->size;i_21++){
        if(self->item_existance[i_21]) {
            if(1) {
                (self->keys[i_21] = come_decrement_ref_count(self->keys[i_21], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 447));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 448);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 449));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 450));
            neo_current_frame = fr.prev;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj61;
    struct map$2char$phsVar$ph* __result_obj__0;
    self->keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(128)), "./neo-c.h", 3340, 453, "char** "))), "./neo-c.h", 3340, 454);
    __right_value0 = (void*)0;
    self->items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(128)), "./neo-c.h", 3341, 455, "struct sVar** "))), "./neo-c.h", 3341, 456);
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "./neo-c.h", 3342, 457, "unsigned int*"))), "./neo-c.h", 3342, 458);
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 3343, 459, "_Bool*"))), "./neo-c.h", 3343, 460);
    for(i=0    ;i<128;i++){
        self->hashes[i]=0;
        self->item_existance[i]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __right_value0 = (void*)0;
    __dec_obj61=self->key_list,
    self->key_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 3354, 461, "struct list$1char$ph*"), "./neo-c.h", 3354, 462)), "./neo-c.h", 3354, 464);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj61,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 3354, 463);
    self->it=0;
        __result_obj__0 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self, "./neo-c.h", 3358, 465);
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 466);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3358, 467);
    return __result_obj__0;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_22  ;
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
    memset(&result_22,0,sizeof(char* ));
        __result_obj__0 = result_22;
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
    char*  result_23  ;
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
    memset(&result_23,0,sizeof(char* ));
        __result_obj__0 = result_23;
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
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 474);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 475);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 476);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 477);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 478);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 479);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 480);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 481);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 482);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 483);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 484);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 485);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 486);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 487);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 488);
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
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3971, 491));
        come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3971, 492);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsVar$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3990, 503));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3991, 504);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sVar_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3997, 505);
                    self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 3998, 506);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 4021, 507);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sVar* )come_increment_ref_count(item, "./neo-c.h", 4027, 508);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 4041, 509));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4044, 510));
    come_call_finalizer(sVar_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4044, 511);
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
    int i_24;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 493, "char** "))), "./neo-c.h", 3810, 494);
    __right_value0 = (void*)0;
    items=(struct sVar** )come_increment_ref_count(((struct sVar** )(__right_value0=(struct sVar* *)come_calloc(1, sizeof(struct sVar* )*(1*(size)), "./neo-c.h", 3811, 495, "struct sVar** "))), "./neo-c.h", 3811, 496);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 497, "unsigned int*"))), "./neo-c.h", 3812, 498);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 499, "_Bool*"))), "./neo-c.h", 3813, 500);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_24=0    ;i_24<old_size;i_24++){
        if(!self->item_existance[i_24]) {
            continue;
        }
        key_hash=self->hashes[i_24];
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
                keys[n]=self->keys[i_24];
                items[n]=self->items[i_24];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 501));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 502));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_remove_ordered_entry(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    pos=map$2char$phsVar$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsVar$ph_key_position(struct map$2char$phsVar$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_25;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3394, 527);
            }
        }
    }
    come_free((char*)self->items);
    for(i_25=0    ;i_25<self->size;i_25++){
        if(self->item_existance[i_25]) {
            if(1) {
                (self->keys[i_25] = come_decrement_ref_count(self->keys[i_25], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3403, 528));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3409, 529);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3411, 530));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3412, 531));
            neo_current_frame = fr.prev;
}

static void register_generated_payload_enum_generics_method(char*  fun_name_key  , struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, char*  block_text  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "register_generated_payload_enum_generics_method"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* method_generics_type_names;
    struct list$1char$ph* param_default_parametors;
    void* __right_value2 = (void*)0;
    struct sGenericsFun*  fun  ;
    if(({(_conditional_value_X0=(((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name_key,((void*)0),(_Bool)0)))));    come_call_finalizer(sGenericsFun_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 76, 614);
_conditional_value_X0;})) {
                (fun_name_key = come_decrement_ref_count(fun_name_key, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 77, 615));
        come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 77, 616);
        come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 77, 617);
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 77, 618);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 77, 619);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 77, 620);
        (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 77, 621));
        neo_current_frame = fr.prev;
        return;
    }
    __right_value0 = (void*)0;
    method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "21enum.nc", 80, 622, "struct list$1char$ph*"), "21enum.nc", 80, 623)), "21enum.nc", 80, 624);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "21enum.nc", 81, 625, "struct list$1char$ph*"), "21enum.nc", 81, 626)), "21enum.nc", 81, 627);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    fun=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun* )come_increment_ref_count((struct sGenericsFun *)come_calloc(1, sizeof(struct sGenericsFun )*(1), "21enum.nc", 83, 628, "struct sGenericsFun* "), "21enum.nc", 83, 629),(struct sType* )come_increment_ref_count(impl_type, "21enum.nc", 83, 630),generics_type_names,method_generics_type_names,(char* )come_increment_ref_count(fun_name_key, "21enum.nc", 83, 631),(struct sType* )come_increment_ref_count(result_type, "21enum.nc", 83, 632),(struct list$1sType$ph*)come_increment_ref_count(param_types, "21enum.nc", 83, 633),(struct list$1char$ph*)come_increment_ref_count(param_names, "21enum.nc", 83, 634),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors, "21enum.nc", 83, 635),(_Bool)0,(char* )come_increment_ref_count(block_text, "21enum.nc", 83, 636),info,(char* )come_increment_ref_count(__builtin_string(info->sname,"21enum.nc",83), "21enum.nc", 83, 637),info->sline,(_Bool)0), "21enum.nc", 83, 638);
    __right_value0 = (void*)0;
    map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char* )come_increment_ref_count(__builtin_string(fun_name_key,"21enum.nc",85), "21enum.nc", 85, 660),(struct sGenericsFun* )come_increment_ref_count(fun, "21enum.nc", 85, 661),(_Bool)0);
    (fun_name_key = come_decrement_ref_count(fun_name_key, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 88, 662));
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 663);
    come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 664);
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 665);
    come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 666);
    come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 667);
    (block_text = come_decrement_ref_count(block_text, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 88, 668));
    come_call_finalizer(list$1char$ph$p_finalize, method_generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 669);
    come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 670);
    come_call_finalizer(sGenericsFun_finalize, fun, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 88, 671);
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
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 589);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 600);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 601);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 602);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 603);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 604);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 605);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 606);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 607);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 608);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 609);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 610);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 611);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 612);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 613);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 590);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 591);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 592);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 593));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 594);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 595);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 596);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 597);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 598));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 599));
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsGenericsFun$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 639));
        come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 640);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsGenericsFun$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 651));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 652);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sGenericsFun_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 653);
                    self->items[it]=(struct sGenericsFun* )come_increment_ref_count(item, "./neo-c.h", 3919, 654);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 655);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sGenericsFun* )come_increment_ref_count(item, "./neo-c.h", 3948, 656);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 657));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 658));
    come_call_finalizer(sGenericsFun_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 659);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sGenericsFun**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_26;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 641, "char** "))), "./neo-c.h", 3810, 642);
    __right_value0 = (void*)0;
    items=(struct sGenericsFun** )come_increment_ref_count(((struct sGenericsFun** )(__right_value0=(struct sGenericsFun* *)come_calloc(1, sizeof(struct sGenericsFun* )*(1*(size)), "./neo-c.h", 3811, 643, "struct sGenericsFun** "))), "./neo-c.h", 3811, 644);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 645, "unsigned int*"))), "./neo-c.h", 3812, 646);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 647, "_Bool*"))), "./neo-c.h", 3813, 648);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_26=0    ;i_26<old_size;i_26++){
        if(!self->item_existance[i_26]) {
            continue;
        }
        key_hash=self->hashes[i_26];
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
                keys[n]=self->keys[i_26];
                items[n]=self->items[i_26];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 649));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 650));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsGenericsFun$ph_remove_ordered_entry(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    pos=map$2char$phsGenericsFun$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsGenericsFun$ph_key_position(struct map$2char$phsGenericsFun$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

static _Bool generate_payload_enum_methods(char*  type_name  , struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* variants, struct list$1char$ph* generics_type_names, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "generate_payload_enum_methods"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  impl_type  ;
    _Bool generic_enum;
    char*  none_generics_name  ;
    int tag_value;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* _o2_saved_3;
    struct tuple2$2char$phlist$1sType$ph$ph* it;
    struct tuple2$2char$phlist$1sType$ph$ph* multiple_assign_var1
;    char*  variant_name  =0;
    struct list$1sType$ph* payload_types=0;
    struct sType*  constructor_self_type  ;
    struct sType*  constructor_result_type  ;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* constructor_param_types;
    struct list$1char$ph* constructor_param_names;
    struct buffer*  constructor_block  ;
    int i;
    struct list$1sType$ph* _o2_saved_4;
    struct sType*  payload_type  ;
    char*  param_name  ;
    char*  field_name  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    char*  fun_name  ;
    _Bool _conditional_value_X0;
    _Bool __result_obj__0;
    struct sType*  predicate_self_type  ;
    struct sType*  predicate_result_type  ;
    struct sType*  __list_values1__[1]  ;
    struct list$1sType$ph* predicate_param_types;
    char*  __list_values2__[1]  ;
    struct list$1char$ph* predicate_param_names;
    char*  predicate_name  ;
    char*  predicate_block  ;
    char*  fun_name_31  ;
    struct sType*  getter_self_type  ;
    struct sType*  getter_result_type  ;
    struct sType*  __list_values3__[1]  ;
    struct list$1sType$ph* getter_param_types;
    char*  __list_values4__[1]  ;
    struct list$1char$ph* getter_param_names;
    char*  getter_name  ;
    char*  field_name_34  ;
    char*  getter_block  ;
    char*  fun_name_35  ;
    impl_type=(struct sType* )come_increment_ref_count(create_payload_enum_impl_type((char* )come_increment_ref_count(type_name, "21enum.nc", 90, 672),generics_type_names,info), "21enum.nc", 90, 673);
    generic_enum=list$1char$ph_length(generics_type_names)>0;
    __right_value0 = (void*)0;
    none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type_name), "21enum.nc", 92, 674);
    tag_value=1;
    for(_o2_saved_3=variants,it=list$1tuple2$2char$phlist$1sType$ph$ph$ph_begin(_o2_saved_3)    ;!list$1tuple2$2char$phlist$1sType$ph$ph$ph_end(_o2_saved_3);it=list$1tuple2$2char$phlist$1sType$ph$ph$ph_next(_o2_saved_3)){
        multiple_assign_var1=it;
        variant_name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "21enum.nc", 96, 675);
        payload_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var1->v2, "21enum.nc", 96, 676);
        __right_value0 = (void*)0;
        constructor_self_type=(struct sType* )come_increment_ref_count(sType_clone(impl_type), "21enum.nc", 98, 677);
        constructor_self_type->mPointerNum=1;
        constructor_self_type->mHeap=(_Bool)1;
        __right_value0 = (void*)0;
        constructor_result_type=(struct sType* )come_increment_ref_count(sType_clone(constructor_self_type), "21enum.nc", 102, 678);
        __right_value0 = (void*)0;
        constructor_param_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "21enum.nc", 104, 679, "struct list$1sType$ph*"), "21enum.nc", 104, 680)), "21enum.nc", 104, 681);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        constructor_param_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "21enum.nc", 105, 682, "struct list$1char$ph*"), "21enum.nc", 105, 683)), "21enum.nc", 105, 684);
        __right_value0 = (void*)0;
        list$1sType$ph_push_back(constructor_param_types,(struct sType* )come_increment_ref_count(sType_clone(constructor_self_type), "21enum.nc", 107, 685));
        __right_value0 = (void*)0;
        list$1char$ph_push_back(constructor_param_names,(char* )come_increment_ref_count(__builtin_string("self","21enum.nc",108), "21enum.nc", 108, 686));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        constructor_block=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "21enum.nc", 110, 687, "struct buffer* "), "21enum.nc", 110, 688)), "21enum.nc", 110, 689);
        buffer_append_str(constructor_block,"{ ");
        buffer_append_format(constructor_block,"self.tag = %d; ",tag_value);
        i=0;
        for(_o2_saved_4=(struct list$1sType$ph*)come_increment_ref_count(payload_types, "21enum.nc", 115, 690),payload_type=list$1sType$ph_begin(_o2_saved_4)        ;!list$1sType$ph_end(_o2_saved_4);payload_type=list$1sType$ph_next(_o2_saved_4)){
            __right_value0 = (void*)0;
            param_name=(char* )come_increment_ref_count(xsprintf("v%d",i+1), "21enum.nc", 116, 691);
            __right_value0 = (void*)0;
            field_name=(char* )come_increment_ref_count(payload_enum_field_name((char* )come_increment_ref_count(variant_name, "21enum.nc", 117, 692),i,list$1sType$ph_length(payload_types)), "21enum.nc", 117, 693);
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(constructor_param_types,(struct sType* )come_increment_ref_count(sType_clone(payload_type), "21enum.nc", 119, 694));
            list$1char$ph_push_back(constructor_param_names,(char* )come_increment_ref_count(param_name, "21enum.nc", 120, 695));
            buffer_append_format(constructor_block,"self.%s = %s; ",field_name,param_name);
            i++;
            (param_name = come_decrement_ref_count(param_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 125, 696));
            (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 125, 697));
        }
        buffer_append_str(constructor_block,"return self; }");
        if(generic_enum) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            register_generated_payload_enum_generics_method((char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,variant_name), "21enum.nc", 128, 698),(struct sType* )come_increment_ref_count(sType_clone(impl_type), "21enum.nc", 128, 699),(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names), "21enum.nc", 128, 700),(struct sType* )come_increment_ref_count(constructor_result_type, "21enum.nc", 128, 701),(struct list$1sType$ph*)come_increment_ref_count(constructor_param_types, "21enum.nc", 128, 702),(struct list$1char$ph*)come_increment_ref_count(constructor_param_names, "21enum.nc", 128, 703),(char* )come_increment_ref_count(buffer_to_string(constructor_block), "21enum.nc", 128, 704),info);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name=(char* )come_increment_ref_count(create_method_name(((struct sType* )(__right_value0=sType_clone(impl_type))),(_Bool)0,variant_name,info,(_Bool)1), "21enum.nc", 131, 705);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 131, 706);
            if(__right_value0 = (void*)0,
({(_conditional_value_X0=(!compile_generated_payload_enum_method((char* )come_increment_ref_count(fun_name, "21enum.nc", 132, 707),(struct sType* )come_increment_ref_count(constructor_result_type, "21enum.nc", 132, 708),(struct list$1sType$ph*)come_increment_ref_count(constructor_param_types, "21enum.nc", 132, 709),(struct list$1char$ph*)come_increment_ref_count(constructor_param_names, "21enum.nc", 132, 710),(char* )come_increment_ref_count(buffer_to_string(constructor_block), "21enum.nc", 132, 711),info)));_conditional_value_X0;})) {
                                __result_obj__0 = (_Bool)0;
                (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 133, 712));
                (variant_name = come_decrement_ref_count(variant_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 133, 713));
                come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 714);
                come_call_finalizer(sType_finalize, constructor_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 715);
                come_call_finalizer(sType_finalize, constructor_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 716);
                come_call_finalizer(list$1sType$ph$p_finalize, constructor_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 717);
                come_call_finalizer(list$1char$ph$p_finalize, constructor_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 718);
                come_call_finalizer(buffer_finalize, constructor_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 719);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 720);
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 133, 721));
                come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 133, 722);
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 133, 723));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 137, 724));
        }
        __right_value0 = (void*)0;
        predicate_self_type=(struct sType* )come_increment_ref_count(sType_clone(impl_type), "21enum.nc", 137, 725);
        predicate_self_type->mPointerNum=1;
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        predicate_result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 140, 726, "struct sType* "), "21enum.nc", 140, 727),(char*)come_increment_ref_count(xsprintf("_Bool"), "21enum.nc", 140, 728),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 140, 729);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        predicate_param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values1__[0]=((struct sType* )(__right_value0=sType_clone(predicate_self_type))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "21enum.nc", 141, 734, "struct list$1sType$ph"), "21enum.nc", 141, 735),1,__list_values1__)), "21enum.nc", 141, 736);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        predicate_param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values2__[0]=((char* )(__right_value0=__builtin_string("self","21enum.nc",142))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "21enum.nc", 142, 741, "struct list$1char$ph"), "21enum.nc", 142, 742),1,__list_values2__)), "21enum.nc", 142, 743);
        __right_value0 = (void*)0;
        predicate_name=(char* )come_increment_ref_count(xsprintf("is_%s",variant_name), "21enum.nc", 144, 744);
        __right_value0 = (void*)0;
        predicate_block=(char* )come_increment_ref_count(xsprintf("{ return self.tag == %d; }",tag_value), "21enum.nc", 145, 745);
        if(generic_enum) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            register_generated_payload_enum_generics_method((char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,predicate_name), "21enum.nc", 148, 746),(struct sType* )come_increment_ref_count(sType_clone(impl_type), "21enum.nc", 148, 747),(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names), "21enum.nc", 148, 748),(struct sType* )come_increment_ref_count(predicate_result_type, "21enum.nc", 148, 749),(struct list$1sType$ph*)come_increment_ref_count(predicate_param_types, "21enum.nc", 148, 750),(struct list$1char$ph*)come_increment_ref_count(predicate_param_names, "21enum.nc", 148, 751),(char* )come_increment_ref_count(predicate_block, "21enum.nc", 148, 752),info);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            fun_name_31=(char* )come_increment_ref_count(create_method_name(((struct sType* )(__right_value0=sType_clone(impl_type))),(_Bool)0,predicate_name,info,(_Bool)1), "21enum.nc", 151, 753);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 151, 754);
            if(!compile_generated_payload_enum_method((char* )come_increment_ref_count(fun_name_31, "21enum.nc", 152, 755),(struct sType* )come_increment_ref_count(predicate_result_type, "21enum.nc", 152, 756),(struct list$1sType$ph*)come_increment_ref_count(predicate_param_types, "21enum.nc", 152, 757),(struct list$1char$ph*)come_increment_ref_count(predicate_param_names, "21enum.nc", 152, 758),(char* )come_increment_ref_count(predicate_block, "21enum.nc", 152, 759),info)) {
                                __result_obj__0 = (_Bool)0;
                (fun_name_31 = come_decrement_ref_count(fun_name_31, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 153, 760));
                (variant_name = come_decrement_ref_count(variant_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 153, 761));
                come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 762);
                come_call_finalizer(sType_finalize, constructor_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 763);
                come_call_finalizer(sType_finalize, constructor_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 764);
                come_call_finalizer(list$1sType$ph$p_finalize, constructor_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 765);
                come_call_finalizer(list$1char$ph$p_finalize, constructor_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 766);
                come_call_finalizer(buffer_finalize, constructor_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 767);
                come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 768);
                come_call_finalizer(sType_finalize, predicate_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 769);
                come_call_finalizer(sType_finalize, predicate_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 770);
                come_call_finalizer(list$1sType$ph$p_finalize, predicate_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 771);
                come_call_finalizer(list$1char$ph$p_finalize, predicate_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 772);
                (predicate_name = come_decrement_ref_count(predicate_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 153, 773));
                (predicate_block = come_decrement_ref_count(predicate_block, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 153, 774));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 153, 775));
                come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 153, 776);
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 153, 777));
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            (fun_name_31 = come_decrement_ref_count(fun_name_31, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 157, 778));
        }
        if(list$1sType$ph_length(payload_types)==1) {
            __right_value0 = (void*)0;
            getter_self_type=(struct sType* )come_increment_ref_count(sType_clone(impl_type), "21enum.nc", 158, 779);
            getter_self_type->mPointerNum=1;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            getter_result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=list$1sType$ph_operator_load_element(payload_types,0)))), "21enum.nc", 161, 798);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 161, 799);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            getter_param_types=(struct list$1sType$ph*)come_increment_ref_count((__list_values3__[0]=((struct sType* )(__right_value0=sType_clone(getter_self_type))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "21enum.nc", 162, 800, "struct list$1sType$ph"), "21enum.nc", 162, 801),1,__list_values3__)), "21enum.nc", 162, 802);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            getter_param_names=(struct list$1char$ph*)come_increment_ref_count((__list_values4__[0]=((char* )(__right_value0=__builtin_string("self","21enum.nc",163))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "21enum.nc", 163, 803, "struct list$1char$ph"), "21enum.nc", 163, 804),1,__list_values4__)), "21enum.nc", 163, 805);
            __right_value0 = (void*)0;
            getter_name=(char* )come_increment_ref_count(xsprintf("get_%s",variant_name), "21enum.nc", 165, 806);
            __right_value0 = (void*)0;
            field_name_34=(char* )come_increment_ref_count(payload_enum_field_name((char* )come_increment_ref_count(variant_name, "21enum.nc", 166, 807),0,1), "21enum.nc", 166, 808);
            __right_value0 = (void*)0;
            getter_block=(char* )come_increment_ref_count(xsprintf("{ return self.%s; }",field_name_34), "21enum.nc", 167, 809);
            if(generic_enum) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                register_generated_payload_enum_generics_method((char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,getter_name), "21enum.nc", 170, 810),(struct sType* )come_increment_ref_count(sType_clone(impl_type), "21enum.nc", 170, 811),(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names), "21enum.nc", 170, 812),(struct sType* )come_increment_ref_count(getter_result_type, "21enum.nc", 170, 813),(struct list$1sType$ph*)come_increment_ref_count(getter_param_types, "21enum.nc", 170, 814),(struct list$1char$ph*)come_increment_ref_count(getter_param_names, "21enum.nc", 170, 815),(char* )come_increment_ref_count(getter_block, "21enum.nc", 170, 816),info);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                fun_name_35=(char* )come_increment_ref_count(create_method_name(((struct sType* )(__right_value0=sType_clone(impl_type))),(_Bool)0,getter_name,info,(_Bool)1), "21enum.nc", 173, 817);
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 173, 818);
                if(!compile_generated_payload_enum_method((char* )come_increment_ref_count(fun_name_35, "21enum.nc", 174, 819),(struct sType* )come_increment_ref_count(getter_result_type, "21enum.nc", 174, 820),(struct list$1sType$ph*)come_increment_ref_count(getter_param_types, "21enum.nc", 174, 821),(struct list$1char$ph*)come_increment_ref_count(getter_param_names, "21enum.nc", 174, 822),(char* )come_increment_ref_count(getter_block, "21enum.nc", 174, 823),info)) {
                                        __result_obj__0 = (_Bool)0;
                    (fun_name_35 = come_decrement_ref_count(fun_name_35, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 824));
                    come_call_finalizer(sType_finalize, getter_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 825);
                    come_call_finalizer(sType_finalize, getter_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 826);
                    come_call_finalizer(list$1sType$ph$p_finalize, getter_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 827);
                    come_call_finalizer(list$1char$ph$p_finalize, getter_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 828);
                    (getter_name = come_decrement_ref_count(getter_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 829));
                    (field_name_34 = come_decrement_ref_count(field_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 830));
                    (getter_block = come_decrement_ref_count(getter_block, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 831));
                    (variant_name = come_decrement_ref_count(variant_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 832));
                    come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 833);
                    come_call_finalizer(sType_finalize, constructor_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 834);
                    come_call_finalizer(sType_finalize, constructor_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 835);
                    come_call_finalizer(list$1sType$ph$p_finalize, constructor_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 836);
                    come_call_finalizer(list$1char$ph$p_finalize, constructor_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 837);
                    come_call_finalizer(buffer_finalize, constructor_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 838);
                    come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 839);
                    come_call_finalizer(sType_finalize, predicate_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 840);
                    come_call_finalizer(sType_finalize, predicate_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 841);
                    come_call_finalizer(list$1sType$ph$p_finalize, predicate_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 842);
                    come_call_finalizer(list$1char$ph$p_finalize, predicate_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 843);
                    (predicate_name = come_decrement_ref_count(predicate_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 844));
                    (predicate_block = come_decrement_ref_count(predicate_block, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 845));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 846));
                    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 175, 847);
                    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 175, 848));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                (fun_name_35 = come_decrement_ref_count(fun_name_35, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 178, 849));
            }
            come_call_finalizer(sType_finalize, getter_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 180, 850);
            come_call_finalizer(sType_finalize, getter_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 180, 851);
            come_call_finalizer(list$1sType$ph$p_finalize, getter_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 180, 852);
            come_call_finalizer(list$1char$ph$p_finalize, getter_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 180, 853);
            (getter_name = come_decrement_ref_count(getter_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 180, 854));
            (field_name_34 = come_decrement_ref_count(field_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 180, 855));
            (getter_block = come_decrement_ref_count(getter_block, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 180, 856));
        }
        tag_value++;
        (variant_name = come_decrement_ref_count(variant_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 183, 857));
        come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 858);
        come_call_finalizer(sType_finalize, constructor_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 859);
        come_call_finalizer(sType_finalize, constructor_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 860);
        come_call_finalizer(list$1sType$ph$p_finalize, constructor_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 861);
        come_call_finalizer(list$1char$ph$p_finalize, constructor_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 862);
        come_call_finalizer(buffer_finalize, constructor_block, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 863);
        come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 864);
        come_call_finalizer(sType_finalize, predicate_self_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 865);
        come_call_finalizer(sType_finalize, predicate_result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 866);
        come_call_finalizer(list$1sType$ph$p_finalize, predicate_param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 867);
        come_call_finalizer(list$1char$ph$p_finalize, predicate_param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 868);
        (predicate_name = come_decrement_ref_count(predicate_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 183, 869));
        (predicate_block = come_decrement_ref_count(predicate_block, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 183, 870));
    }
        __result_obj__0 = (_Bool)1;
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 183, 871));
    come_call_finalizer(sType_finalize, impl_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 183, 872);
    (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 183, 873));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phlist$1sType$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_begin(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phlist$1sType$ph$ph* result;
    struct tuple2$2char$phlist$1sType$ph$ph* __result_obj__0;
    struct tuple2$2char$phlist$1sType$ph$ph* result_27;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phlist$1sType$ph$ph*));
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
    memset(&result_27,0,sizeof(struct tuple2$2char$phlist$1sType$ph$ph*));
        __result_obj__0 = result_27;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phlist$1sType$ph$ph$ph_end(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct tuple2$2char$phlist$1sType$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_next(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phlist$1sType$ph$ph* result;
    struct tuple2$2char$phlist$1sType$ph$ph* __result_obj__0;
    struct tuple2$2char$phlist$1sType$ph$ph* result_28;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phlist$1sType$ph$ph*));
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
    memset(&result_28,0,sizeof(struct tuple2$2char$phlist$1sType$ph$ph*));
        __result_obj__0 = result_28;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_29  ;
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
    memset(&result_29,0,sizeof(struct sType* ));
        __result_obj__0 = result_29;
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
    struct sType*  result_30  ;
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
    memset(&result_30,0,sizeof(struct sType* ));
        __result_obj__0 = result_30;
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

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType**  values  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1sType$ph_push_back(self,(struct sType* )come_increment_ref_count(values[i], "./neo-c.h", 1494, 730));
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 731);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 732);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 733);
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
        list$1char$ph_push_back(self,(char* )come_increment_ref_count(values[i], "./neo-c.h", 1494, 737));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 738);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 739);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 740);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_32  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 780);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 781);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 782);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 783);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 784);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 785);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_32,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_32, "./neo-c.h", 2177, 786);
    come_call_finalizer(sType_finalize, default_value_32, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 787);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 788);
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    struct list_item$1sType$ph* it;
    int i;
    struct sType*  default_value_33  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sType* ));
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 789);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 790);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2158, 791);
        return __result_obj__0;
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2161, 792);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 793);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2169, 794);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_33,0,sizeof(struct sType* ));
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value_33, "./neo-c.h", 2177, 795);
    come_call_finalizer(sType_finalize, default_value_33, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 796);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2177, 797);
    return __result_obj__0;
}

struct sEnumNode* sEnumNode_initialize(struct sEnumNode* self, char*  type_name  , struct list$1tuple3$3char$phsNode$phchar$ph$ph* elements, struct sType*  type_elements  , char*  attribute  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEnumNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj77  ;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* __dec_obj84;
    struct sType*  __dec_obj85  ;
    char*  __dec_obj86  ;
    struct sEnumNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sEnumNode*)come_increment_ref_count(self, "21enum.nc", 190, 874),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 190, 876);
    __right_value0 = (void*)0;
    __dec_obj77=self->mTypeName,
    self->mTypeName=(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",192), "21enum.nc", 192, 878);
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 192, 877);
    __right_value0 = (void*)0;
    __dec_obj84=self->mElements,
    self->mElements=(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3char$phsNode$phchar$ph$ph$p_clone(elements), "21enum.nc", 193, 931);
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph_finalize, __dec_obj84,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 193, 930);
    __dec_obj85=self->mTypeElements,
    self->mTypeElements=(struct sType* )come_increment_ref_count(type_elements, "21enum.nc", 195, 933);
    come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 195, 932);
    __dec_obj86=self->mAttribute,
    self->mAttribute=(char* )come_increment_ref_count(attribute, "21enum.nc", 196, 935);
    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 196, 934);
        __result_obj__0 = (struct sEnumNode*)come_increment_ref_count(self, "21enum.nc", 198, 936);
    come_call_finalizer(sEnumNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 198, 942);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 198, 943));
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 198, 944);
    come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 198, 945);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 198, 946));
    neo_current_frame = fr.prev;
    come_call_finalizer(sEnumNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 198, 947);
    return __result_obj__0;
        __result_obj__0 = (struct sEnumNode*)come_increment_ref_count(self, "21enum.nc", 201, 948);
    come_call_finalizer(sEnumNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 201, 949);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 201, 950));
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 201, 951);
    come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 201, 952);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 201, 953));
    neo_current_frame = fr.prev;
    come_call_finalizer(sEnumNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 201, 954);
    return __result_obj__0;
}

_Bool sEnumNode_terminated(struct sEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEnumNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sEnumNode_kind(struct sEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEnumNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sEnumNode","21enum.nc",208))), "21enum.nc", 208, 955);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 208, 956));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "21enum.nc", 208, 957));
    return __result_obj__0;
}

_Bool sEnumNode_compile(struct sEnumNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEnumNode_compile"; neo_current_frame = &fr;
    char*  type_name  ;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* elements;
    char*  attribute  ;
    _Bool __result_obj__0;
    void* __right_value0 = (void*)0;
    _Bool _conditional_value_X0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    struct buffer*  buf  ;
    int i;
    int n;
    char*  right_c_value  ;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* _o2_saved_5;
    struct tuple3$3char$phsNode$phchar$ph* it;
    struct tuple3$3char$phsNode$phchar$ph* multiple_assign_var2
;    char*  name  =0;
    struct sNode* value=0;
    char*  attribute_41  =0;
    char*  c_value  ;
    char*  __dec_obj87  ;
    char*  __dec_obj88  ;
    _Bool Value;
    struct CVALUE*  right_value  ;
    char*  c_value_42  ;
    char*  __dec_obj89  ;
    char*  __dec_obj90  ;
    memset(&c_value, 0, sizeof(c_value));
    type_name=(char* )come_increment_ref_count(self->mTypeName, "21enum.nc", 213, 958);
    elements=(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(self->mElements, "21enum.nc", 214, 959);
    attribute=(char* )come_increment_ref_count(self->mAttribute, "21enum.nc", 215, 960);
    if(list$1tuple3$3char$phsNode$phchar$ph$ph_length(elements)==0) {
                __result_obj__0 = (_Bool)1;
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 218, 961));
        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 218, 962);
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 218, 963));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(({(_conditional_value_X0=(string_operator_not_equals(type_name,"")&&((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0),(_Bool)0)))==((void*)0)));    come_call_finalizer(sClass_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 221, 987);
_conditional_value_X0;})) {
        __right_value0 = (void*)0;
        map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",222), "21enum.nc", 222, 1009),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "21enum.nc", 222, 1010, "struct sClass* "), "21enum.nc", 222, 1012),(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",222), "21enum.nc", 222, 1011),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,(_Bool)0,(_Bool)0,info,(_Bool)0), "21enum.nc", 222, 1013),(_Bool)0);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "21enum.nc", 225, 1014, "struct buffer* "), "21enum.nc", 225, 1015)), "21enum.nc", 225, 1016);
    if(string_operator_equals(type_name,"")) {
        if(self->mTypeElements) {
            if(string_operator_equals(attribute,"")) {
                __right_value0 = (void*)0;
                buffer_append_format(buf,"enum :%s { ",((char* )(__right_value0=make_type_name_string(self->mTypeElements,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 230, 1017));
            }
            else {
                __right_value0 = (void*)0;
                buffer_append_format(buf,"enum %s :%s { ",attribute,((char* )(__right_value0=make_type_name_string(self->mTypeElements,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 233, 1018));
            }
        }
        else {
            if(string_operator_equals(attribute,"")) {
                buffer_append_str(buf,"enum { ");
            }
            else {
                buffer_append_format(buf,"enum %s { ",attribute);
            }
        }
    }
    else if(self->mTypeElements) {
        __right_value0 = (void*)0;
        buffer_append_format(buf,"enum %s %s:%s { ",attribute,type_name,((char* )(__right_value0=make_type_name_string(self->mTypeElements,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 246, 1019));
    }
    else {
        buffer_append_format(buf,"enum %s %s { ",attribute,type_name);
    }
    i=0;
    n=0;
    right_c_value=((void*)0);
    for(_o2_saved_5=(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(elements, "21enum.nc", 255, 1020),it=list$1tuple3$3char$phsNode$phchar$ph$ph_begin(_o2_saved_5)    ;!list$1tuple3$3char$phsNode$phchar$ph$ph_end(_o2_saved_5);it=list$1tuple3$3char$phsNode$phchar$ph$ph_next(_o2_saved_5)){
        multiple_assign_var2=it;
        name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "21enum.nc", 256, 1021);
        value=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2, "21enum.nc", 256, 1022);
        attribute_41=(char* )come_increment_ref_count(multiple_assign_var2->v3, "21enum.nc", 256, 1023);
        if(value==((void*)0)) {
            buffer_append_str(buf,name);
            buffer_append_str(buf," ");
            buffer_append_str(buf,attribute_41);
            buffer_append_str(buf,"\n");
            if(i!=list$1tuple3$3char$phsNode$phchar$ph$ph_length(elements)-1) {
                buffer_append_str(buf,",");
            }
            if(right_c_value) {
                __right_value0 = (void*)0;
                __dec_obj87=c_value,
                c_value=(char* )come_increment_ref_count(xsprintf("(%s+%d)",right_c_value,n), "21enum.nc", 270, 1025);
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 270, 1024);
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj88=c_value,
                c_value=(char* )come_increment_ref_count(xsprintf("(%d)",n), "21enum.nc", 273, 1027);
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 273, 1026);
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            add_variable_to_global_table_with_int_value(name,((struct sType*)(__right_value2=sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 276, 1028, "struct sType* "), "21enum.nc", 276, 1029),(char*)come_increment_ref_count(xsprintf("int"), "21enum.nc", 276, 1030),(_Bool)0,info,(_Bool)0,0))),c_value,info);
            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 276, 1031);
            (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 301, 1032));
        }
        else {
            Value=node_compile(value,info);
            if(!Value) {
                                __result_obj__0 = (_Bool)0;
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 280, 1033));
                ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "21enum.nc", 280, 1034):(void*)0);
                (attribute_41 = come_decrement_ref_count(attribute_41, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 280, 1035));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 280, 1036));
                come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 280, 1037);
                (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 280, 1038));
                come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 280, 1039);
                (right_c_value = come_decrement_ref_count(right_c_value, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 280, 1040));
                come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 280, 1041);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            right_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "21enum.nc", 283, 1042);
            __right_value0 = (void*)0;
            c_value_42=(char* )come_increment_ref_count(xsprintf("(%s)",right_value->c_value), "21enum.nc", 285, 1043);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            add_variable_to_global_table_with_int_value(name,((struct sType*)(__right_value2=sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 287, 1044, "struct sType* "), "21enum.nc", 287, 1045),(char*)come_increment_ref_count(xsprintf("int"), "21enum.nc", 287, 1046),(_Bool)0,info,(_Bool)0,0))),c_value_42,info);
            come_call_finalizer(sType_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 287, 1047);
            buffer_append_format(buf,"%s=(%s)",name,right_value->c_value);
            if(i!=list$1tuple3$3char$phsNode$phchar$ph$ph_length(elements)-1) {
                buffer_append_str(buf,",");
            }
            buffer_append_str(buf,"\n");
            __right_value0 = (void*)0;
            __dec_obj89=right_c_value,
            right_c_value=(char* )come_increment_ref_count((char* )come_memdup(right_value->c_value, "21enum.nc", 297, 1048, "char* "), "21enum.nc", 297, 1050);
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 297, 1049);
            n=0;
            come_call_finalizer(CVALUE_finalize, right_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 301, 1056);
            (c_value_42 = come_decrement_ref_count(c_value_42, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 301, 1057));
        }
        i++;
        n++;
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 304, 1058));
        ((value) ? value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0,(void*)0, "21enum.nc", 304, 1059):(void*)0);
        (attribute_41 = come_decrement_ref_count(attribute_41, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 304, 1060));
    }
    buffer_append_format(buf,"};\n");
    if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X0=(((struct buffer* )(__right_value2=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char* )(__right_value1=__builtin_string(type_name,"21enum.nc",306))))))==((void*)0)||string_operator_equals(type_name,"")));    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 306, 1091));
    come_call_finalizer(buffer_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 306, 1092);
_conditional_value_X0;})) {
        if(string_operator_equals(type_name,"")) {
            static int type_name_num=0;
            type_name_num++;
            __right_value0 = (void*)0;
            __dec_obj90=type_name,
            type_name=(char* )come_increment_ref_count(xsprintf("__enum_type_name_X%d",type_name_num), "21enum.nc", 310, 1094);
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 310, 1093);
            __right_value0 = (void*)0;
            map$2char$phbuffer$ph_insert(info->struct_definition,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",311), "21enum.nc", 311, 1116),(struct buffer* )come_increment_ref_count(buf, "21enum.nc", 311, 1117),(_Bool)0);
        }
        else {
            __right_value0 = (void*)0;
            map$2char$phbuffer$ph_insert(info->struct_definition,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",314), "21enum.nc", 314, 1118),(struct buffer* )come_increment_ref_count(buf, "21enum.nc", 314, 1119),(_Bool)0);
        }
    }
        __result_obj__0 = (_Bool)1;
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 318, 1120));
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 318, 1121);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 318, 1122));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 318, 1123);
    (right_c_value = come_decrement_ref_count(right_c_value, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 318, 1124));
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 318, 1125);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void sNodeBase_finalize(struct sNodeBase* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNodeBase_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sNodeBase_finalize", 2, 875));
    }
        neo_current_frame = fr.prev;
}

static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph$p_clone(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph$p_clone"; neo_current_frame = &fr;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* result;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 879);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 885);
        return __result_obj__0;
    }
    result=(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3char$phsNode$phchar$ph$ph_initialize((struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count((struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "./neo-c.h", 1513, 886, "struct list$1tuple3$3char$phsNode$phchar$ph$ph*"), "./neo-c.h", 1513, 890)), "./neo-c.h", 1513, 891);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple3$3char$phsNode$phchar$ph$ph_add(result,(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(tuple3$3char$phsNode$phchar$ph_clone(it->item), "./neo-c.h", 1518, 924));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple3$3char$phsNode$phchar$ph$ph_add(result,(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(tuple3$3char$phsNode$phchar$ph_clone(it->item), "./neo-c.h", 1521, 925));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 926);
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 927);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 928);
    return __result_obj__0;
}

static void list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* it;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 884);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize}", 2, 883);
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3char$phsNode$phchar$ph$p_finalize(struct tuple3$3char$phsNode$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsNode$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsNode$phchar$ph$p_finalize", 2, 880));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple3$3char$phsNode$phchar$ph$p_finalize", 3, 881):(void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsNode$phchar$ph$p_finalize", 4, 882));
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_initialize(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 887);
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 888);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 889);
    return __result_obj__0;
}

static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_add(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self, struct tuple3$3char$phsNode$phchar$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* litem;
    struct tuple3$3char$phsNode$phchar$ph* __dec_obj78;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* litem_36;
    struct tuple3$3char$phsNode$phchar$ph* __dec_obj79;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* litem_37;
    struct tuple3$3char$phsNode$phchar$ph* __dec_obj80;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 892);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)(__right_value0=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "./neo-c.h", 1534, 893, "struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*"))), "./neo-c.h", 1534, 894);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj78=litem->item,
        litem->item=(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 896);
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, __dec_obj78,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 895);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_36=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)(__right_value0=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "./neo-c.h", 1544, 897, "struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*"))), "./neo-c.h", 1544, 898);
        litem_36->prev=self->head;
        litem_36->next=((void*)0);
        __dec_obj79=litem_36->item,
        litem_36->item=(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 900);
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, __dec_obj79,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 899);
        self->tail=litem_36;
        self->head->next=litem_36;
    }
    else {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)(__right_value0=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "./neo-c.h", 1554, 901, "struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*"))), "./neo-c.h", 1554, 902);
        litem_37->prev=self->tail;
        litem_37->next=((void*)0);
        __dec_obj80=litem_37->item,
        litem_37->item=(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 904);
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, __dec_obj80,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 903);
        self->tail->next=litem_37;
        self->tail=litem_37;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 905);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple3$3char$phsNode$phchar$ph* tuple3$3char$phsNode$phchar$ph_clone(struct tuple3$3char$phsNode$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsNode$phchar$ph_clone"; neo_current_frame = &fr;
    struct tuple3$3char$phsNode$phchar$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple3$3char$phsNode$phchar$ph* result;
    char*  __dec_obj81  ;
    struct sNode* __dec_obj82;
    char*  __dec_obj83  ;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count((void*)0, "tuple3$3char$phsNode$phchar$ph_clone", 4, 906);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3char$phsNode$phchar$ph_clone}", 4, 907);
        return __result_obj__0;
    }
    result=(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count((struct tuple3$3char$phsNode$phchar$ph*)come_calloc(1, sizeof(struct tuple3$3char$phsNode$phchar$ph)*(1), "tuple3$3char$phsNode$phchar$ph_clone", 5, 908, "struct tuple3$3char$phsNode$phchar$ph*"), "tuple3$3char$phsNode$phchar$ph_clone", 5, 909);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj81=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple3$3char$phsNode$phchar$ph_clone", 6, 910, "char* "), "tuple3$3char$phsNode$phchar$ph_clone", 6, 912);
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "tuple3$3char$phsNode$phchar$ph_clone", 6, 911);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj82=result->v2,
        result->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2), "tuple3$3char$phsNode$phchar$ph_clone", 7, 914);
        (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0, (void*)0, "tuple3$3char$phsNode$phchar$ph_clone", 7, 913) :0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj83=result->v3,
        result->v3=(char* )come_increment_ref_count((char* )come_memdup(self->v3, "tuple3$3char$phsNode$phchar$ph_clone", 8, 915, "char* "), "tuple3$3char$phsNode$phchar$ph_clone", 8, 917);
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "tuple3$3char$phsNode$phchar$ph_clone", 8, 916);
    }
        __result_obj__0 = (struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(result, "tuple3$3char$phsNode$phchar$ph_clone", 9, 918);
    come_call_finalizer(tuple3$3char$phsNode$phchar$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3char$phsNode$phchar$ph_clone}", 9, 922);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple3$3char$phsNode$phchar$ph_clone}", 9, 923);
    return __result_obj__0;
}

static void tuple3$3char$phsNode$phchar$ph_finalize(struct tuple3$3char$phsNode$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsNode$phchar$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsNode$phchar$ph_finalize", 2, 919));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0,(void*)0, "tuple3$3char$phsNode$phchar$ph_finalize", 3, 920):(void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3char$phsNode$phchar$ph_finalize", 4, 921));
    }
        neo_current_frame = fr.prev;
}

static void list$1tuple3$3char$phsNode$phchar$ph$ph_finalize(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* it;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 929);
    }
        neo_current_frame = fr.prev;
}

static void sEnumNode_finalize(struct sEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEnumNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sEnumNode_finalize", 2, 937));
    }
    if(self!=((void*)0)&&self->mTypeName!=((void*)0)) {
        (self->mTypeName = come_decrement_ref_count(self->mTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sEnumNode_finalize", 3, 938));
    }
    if(self!=((void*)0)&&self->mElements!=((void*)0)) {
        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, self->mElements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sEnumNode_finalize}", 4, 939);
    }
    if(self!=((void*)0)&&self->mTypeElements!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypeElements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sEnumNode_finalize}", 5, 940);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sEnumNode_finalize", 6, 941));
    }
        neo_current_frame = fr.prev;
}

static int list$1tuple3$3char$phsNode$phchar$ph$ph_length(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
        neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_at"; neo_current_frame = &fr;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3512, 964);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 973);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3512, 974);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 3525, 975);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3525, 976);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3525, 977);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3532, 978);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 979);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3532, 980);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3536, 981);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 982);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3536, 983);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3540, 984);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 985);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3540, 986);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 965));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 970);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 971));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 972));
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 969);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 968);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 966));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 967);
    }
            neo_current_frame = fr.prev;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 988));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 989);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsClass$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 1000));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 1001);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 1002);
                    self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 3919, 1003);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 1004);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 3948, 1005);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 1006));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 1007));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 1008);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sClass**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_38;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 990, "char** "))), "./neo-c.h", 3810, 991);
    __right_value0 = (void*)0;
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), "./neo-c.h", 3811, 992, "struct sClass** "))), "./neo-c.h", 3811, 993);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 994, "unsigned int*"))), "./neo-c.h", 3812, 995);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 996, "_Bool*"))), "./neo-c.h", 3813, 997);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_38=0    ;i_38<old_size;i_38++){
        if(!self->item_existance[i_38]) {
            continue;
        }
        key_hash=self->hashes[i_38];
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
                keys[n]=self->keys[i_38];
                items[n]=self->items[i_38];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 998));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 999));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    pos=map$2char$phsClass$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

static struct tuple3$3char$phsNode$phchar$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_begin(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple3$3char$phsNode$phchar$ph* result;
    struct tuple3$3char$phsNode$phchar$ph* __result_obj__0;
    struct tuple3$3char$phsNode$phchar$ph* result_39;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple3$3char$phsNode$phchar$ph*));
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
    memset(&result_39,0,sizeof(struct tuple3$3char$phsNode$phchar$ph*));
        __result_obj__0 = result_39;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple3$3char$phsNode$phchar$ph$ph_end(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct tuple3$3char$phsNode$phchar$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_next(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_next"; neo_current_frame = &fr;
    struct tuple3$3char$phsNode$phchar$ph* result;
    struct tuple3$3char$phsNode$phchar$ph* __result_obj__0;
    struct tuple3$3char$phsNode$phchar$ph* result_40;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple3$3char$phsNode$phchar$ph*));
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
    memset(&result_40,0,sizeof(struct tuple3$3char$phsNode$phchar$ph*));
        __result_obj__0 = result_40;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 1051));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 1052);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 1053));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 1054));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 1055));
    }
                neo_current_frame = fr.prev;
}

static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct buffer*  default_value  ;
    struct buffer*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 1061);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 1062);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 1063);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 1064);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 1065);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 1066);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 1067);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 1068);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 1069);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 1070);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 1071);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 1072);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 1073);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 1074);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 1075);
    return __result_obj__0;
}

static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_operator_load_element"; neo_current_frame = &fr;
    struct buffer*  default_value  ;
    struct buffer*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4053, 1076);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 1077);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4053, 1078);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "./neo-c.h", 4065, 1079);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4065, 1080);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4065, 1081);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4072, 1082);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 1083);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4072, 1084);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4076, 1085);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 1086);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4076, 1087);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4080, 1088);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 1089);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4080, 1090);
    return __result_obj__0;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char*  key  , struct buffer*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phbuffer$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 1095));
        come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 1096);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phbuffer$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 1107));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 1108);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(buffer_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 1109);
                    self->items[it]=(struct buffer* )come_increment_ref_count(item, "./neo-c.h", 3919, 1110);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 1111);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct buffer* )come_increment_ref_count(item, "./neo-c.h", 3948, 1112);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 1113));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 1114));
    come_call_finalizer(buffer_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 1115);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct buffer**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_43;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 1097, "char** "))), "./neo-c.h", 3810, 1098);
    __right_value0 = (void*)0;
    items=(struct buffer** )come_increment_ref_count(((struct buffer** )(__right_value0=(struct buffer* *)come_calloc(1, sizeof(struct buffer* )*(1*(size)), "./neo-c.h", 3811, 1099, "struct buffer** "))), "./neo-c.h", 3811, 1100);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 1101, "unsigned int*"))), "./neo-c.h", 3812, 1102);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 1103, "_Bool*"))), "./neo-c.h", 3813, 1104);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_43=0    ;i_43<old_size;i_43++){
        if(!self->item_existance[i_43]) {
            continue;
        }
        key_hash=self->hashes[i_43];
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
                keys[n]=self->keys[i_43];
                items[n]=self->items[i_43];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 1105));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 1106));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phbuffer$ph_remove_ordered_entry(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    pos=map$2char$phbuffer$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phbuffer$ph_key_position(struct map$2char$phbuffer$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

struct sPayloadEnumNode* sPayloadEnumNode_initialize(struct sPayloadEnumNode* self, char*  type_name  , struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* variants, struct list$1char$ph* generics_type_names, char*  attribute  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPayloadEnumNode_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __dec_obj91  ;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* __dec_obj97;
    struct list$1char$ph* __dec_obj98;
    char*  __dec_obj99  ;
    struct sPayloadEnumNode* __result_obj__0;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sPayloadEnumNode*)come_increment_ref_count(self, "21enum.nc", 326, 1126),info)));
    come_call_finalizer(sNodeBase_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 326, 1127);
    __right_value0 = (void*)0;
    __dec_obj91=self->mTypeName,
    self->mTypeName=(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",328), "21enum.nc", 328, 1129);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 328, 1128);
    __right_value0 = (void*)0;
    __dec_obj97=self->mVariants,
    self->mVariants=(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_clone(variants), "21enum.nc", 329, 1187);
    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph_finalize, __dec_obj97,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 329, 1186);
    __right_value0 = (void*)0;
    __dec_obj98=self->mGenericsTypeNames,
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names), "21enum.nc", 330, 1189);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj98,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 330, 1188);
    __right_value0 = (void*)0;
    __dec_obj99=self->mAttribute,
    self->mAttribute=(char* )come_increment_ref_count(__builtin_string(attribute,"21enum.nc",331), "21enum.nc", 331, 1191);
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 331, 1190);
        __result_obj__0 = (struct sPayloadEnumNode*)come_increment_ref_count(self, "21enum.nc", 334, 1192);
    come_call_finalizer(sPayloadEnumNode_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 334, 1198);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 334, 1199));
    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 334, 1200);
    come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 334, 1201);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 334, 1202));
    neo_current_frame = fr.prev;
    come_call_finalizer(sPayloadEnumNode_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "21enum.nc}", 334, 1203);
    return __result_obj__0;
}

_Bool sPayloadEnumNode_terminated(struct sPayloadEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPayloadEnumNode_terminated"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

char*  sPayloadEnumNode_kind(struct sPayloadEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPayloadEnumNode_kind"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("sPayloadEnumNode","21enum.nc",341))), "21enum.nc", 341, 1204);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 341, 1205));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "21enum.nc", 341, 1206));
    return __result_obj__0;
}

_Bool sPayloadEnumNode_compile(struct sPayloadEnumNode* self, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPayloadEnumNode_compile"; neo_current_frame = &fr;
    char*  type_name  ;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* variants;
    struct list$1char$ph* generics_type_names;
    char*  attribute  ;
    _Bool __result_obj__0;
    _Bool generic_enum;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct sClass*  generics_class  ;
    char*  __dec_obj100  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* _o2_saved_6;
    struct tuple2$2char$phlist$1sType$ph$ph* it;
    struct tuple2$2char$phlist$1sType$ph$ph* multiple_assign_var3
;    char*  variant_name  =0;
    struct list$1sType$ph* payload_types=0;
    int i;
    struct list$1sType$ph* _o2_saved_7;
    struct sType*  payload_type  ;
    char*  field_name  ;
    struct sClass*  klass  ;
    char*  __dec_obj106  ;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* _o2_saved_8;
    struct tuple2$2char$phlist$1sType$ph$ph* it_48;
    struct tuple2$2char$phlist$1sType$ph$ph* multiple_assign_var4
;    char*  variant_name_49  =0;
    struct list$1sType$ph* payload_types_50=0;
    int i_51;
    struct list$1sType$ph* _o2_saved_9;
    struct sType*  payload_type_52  ;
    char*  field_name_53  ;
    type_name=(char* )come_increment_ref_count(self->mTypeName, "21enum.nc", 346, 1207);
    variants=self->mVariants;
    generics_type_names=self->mGenericsTypeNames;
    attribute=(char* )come_increment_ref_count(self->mAttribute, "21enum.nc", 349, 1208);
    if(string_operator_equals(type_name,"")) {
        err_msg(info,"payload enum requires a type name");
                __result_obj__0 = (_Bool)0;
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 353, 1209));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 353, 1210));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    generic_enum=list$1char$ph_length(generics_type_names)>0;
    if(generic_enum) {
        generics_class=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "21enum.nc", 359, 1211, "struct sClass* "), "21enum.nc", 359, 1213),(char* )come_increment_ref_count(type_name, "21enum.nc", 359, 1212),(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,list$1char$ph_length(generics_type_names),-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "21enum.nc", 359, 1214);
        if(string_operator_not_equals(attribute,"")) {
            __right_value0 = (void*)0;
            __dec_obj100=generics_class->mAttribute,
            generics_class->mAttribute=(char* )come_increment_ref_count(__builtin_string(attribute,"21enum.nc",361), "21enum.nc", 361, 1216);
            __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 361, 1215);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1tuple2$2char$phsType$ph$ph_push_back(generics_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "21enum.nc", 363, 1234, "struct tuple2$2char$phsType$ph"), "21enum.nc", 363, 1244),(char* )come_increment_ref_count(__builtin_string("tag","21enum.nc",363), "21enum.nc", 363, 1245),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 363, 1231, "struct sType* "), "21enum.nc", 363, 1232),(char*)come_increment_ref_count(xsprintf("int"), "21enum.nc", 363, 1233),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 363, 1246)), "21enum.nc", 363, 1247));
        for(_o2_saved_6=variants,it=list$1tuple2$2char$phlist$1sType$ph$ph$ph_begin(_o2_saved_6)        ;!list$1tuple2$2char$phlist$1sType$ph$ph$ph_end(_o2_saved_6);it=list$1tuple2$2char$phlist$1sType$ph$ph$ph_next(_o2_saved_6)){
            multiple_assign_var3=it;
            variant_name=(char* )come_increment_ref_count(multiple_assign_var3->v1, "21enum.nc", 366, 1248);
            payload_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var3->v2, "21enum.nc", 366, 1249);
            i=0;
            for(_o2_saved_7=(struct list$1sType$ph*)come_increment_ref_count(payload_types, "21enum.nc", 369, 1250),payload_type=list$1sType$ph_begin(_o2_saved_7)            ;!list$1sType$ph_end(_o2_saved_7);payload_type=list$1sType$ph_next(_o2_saved_7)){
                __right_value0 = (void*)0;
                field_name=(char* )come_increment_ref_count(payload_enum_field_name((char* )come_increment_ref_count(variant_name, "21enum.nc", 370, 1251),i,list$1sType$ph_length(payload_types)), "21enum.nc", 370, 1252);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                list$1tuple2$2char$phsType$ph$ph_push_back(generics_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "21enum.nc", 371, 1253, "struct tuple2$2char$phsType$ph"), "21enum.nc", 371, 1254),(char* )come_increment_ref_count(field_name, "21enum.nc", 371, 1255),(struct sType* )come_increment_ref_count(sType_clone(payload_type), "21enum.nc", 371, 1256)), "21enum.nc", 371, 1257));
                i++;
                (field_name = come_decrement_ref_count(field_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 374, 1258));
            }
            (variant_name = come_decrement_ref_count(variant_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 376, 1259));
            come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 376, 1260);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 376, 1261);
        }
        __right_value0 = (void*)0;
        map$2char$phsClass$ph_insert(info->generics_classes,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",376), "21enum.nc", 376, 1262),(struct sClass* )come_increment_ref_count(generics_class, "21enum.nc", 376, 1263),(_Bool)0);
        come_call_finalizer(sClass_finalize, generics_class, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 402, 1264);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        klass=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "21enum.nc", 379, 1265, "struct sClass* "), "21enum.nc", 379, 1267),(char* )come_increment_ref_count(type_name, "21enum.nc", 379, 1266),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "21enum.nc", 379, 1268);
        if(string_operator_not_equals(attribute,"")) {
            __right_value0 = (void*)0;
            __dec_obj106=klass->mAttribute,
            klass->mAttribute=(char* )come_increment_ref_count(__builtin_string(attribute,"21enum.nc",381), "21enum.nc", 381, 1270);
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 381, 1269);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __right_value4 = (void*)0;
        __right_value5 = (void*)0;
        list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "21enum.nc", 383, 1274, "struct tuple2$2char$phsType$ph"), "21enum.nc", 383, 1275),(char* )come_increment_ref_count(__builtin_string("tag","21enum.nc",383), "21enum.nc", 383, 1276),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 383, 1271, "struct sType* "), "21enum.nc", 383, 1272),(char*)come_increment_ref_count(xsprintf("int"), "21enum.nc", 383, 1273),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 383, 1277)), "21enum.nc", 383, 1278));
        for(_o2_saved_8=variants,it_48=list$1tuple2$2char$phlist$1sType$ph$ph$ph_begin(_o2_saved_8)        ;!list$1tuple2$2char$phlist$1sType$ph$ph$ph_end(_o2_saved_8);it_48=list$1tuple2$2char$phlist$1sType$ph$ph$ph_next(_o2_saved_8)){
            multiple_assign_var4=it_48;
            variant_name_49=(char* )come_increment_ref_count(multiple_assign_var4->v1, "21enum.nc", 386, 1279);
            payload_types_50=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var4->v2, "21enum.nc", 386, 1280);
            i_51=0;
            for(_o2_saved_9=(struct list$1sType$ph*)come_increment_ref_count(payload_types_50, "21enum.nc", 389, 1281),payload_type_52=list$1sType$ph_begin(_o2_saved_9)            ;!list$1sType$ph_end(_o2_saved_9);payload_type_52=list$1sType$ph_next(_o2_saved_9)){
                __right_value0 = (void*)0;
                field_name_53=(char* )come_increment_ref_count(payload_enum_field_name((char* )come_increment_ref_count(variant_name_49, "21enum.nc", 390, 1282),i_51,list$1sType$ph_length(payload_types_50)), "21enum.nc", 390, 1283);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                list$1tuple2$2char$phsType$ph$ph_push_back(klass->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "21enum.nc", 391, 1284, "struct tuple2$2char$phsType$ph"), "21enum.nc", 391, 1285),(char* )come_increment_ref_count(field_name_53, "21enum.nc", 391, 1286),(struct sType* )come_increment_ref_count(sType_clone(payload_type_52), "21enum.nc", 391, 1287)), "21enum.nc", 391, 1288));
                i_51++;
                (field_name_53 = come_decrement_ref_count(field_name_53, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 394, 1289));
            }
            (variant_name_49 = come_decrement_ref_count(variant_name_49, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 396, 1290));
            come_call_finalizer(list$1sType$ph$p_finalize, payload_types_50, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 396, 1291);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 396, 1292);
        }
        __right_value0 = (void*)0;
        map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",396), "21enum.nc", 396, 1293),(struct sClass* )come_increment_ref_count(klass, "21enum.nc", 396, 1294),(_Bool)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        map$2char$phsType$ph_insert(info->types,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",397), "21enum.nc", 397, 1316),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 397, 1317, "struct sType* "), "21enum.nc", 397, 1318),(char* )come_increment_ref_count(type_name, "21enum.nc", 397, 1319),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 397, 1320),(_Bool)0);
        output_struct(klass,((void*)0),info,(_Bool)0);
        come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 402, 1321);
    }
        __result_obj__0 = generate_payload_enum_methods((char* )come_increment_ref_count(type_name, "21enum.nc", 402, 1322),variants,generics_type_names,info);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 402, 1323));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 402, 1324));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_clone(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_clone"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* result;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 1130);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 1135);
        return __result_obj__0;
    }
    result=(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phlist$1sType$ph$ph$ph_initialize((struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "./neo-c.h", 1513, 1136, "struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*"), "./neo-c.h", 1513, 1140)), "./neo-c.h", 1513, 1141);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phlist$1sType$ph$ph$ph_add(result,(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(tuple2$2char$phlist$1sType$ph$ph_clone(it->item), "./neo-c.h", 1518, 1180));
        }
        else {
            __right_value0 = (void*)0;
            list$1tuple2$2char$phlist$1sType$ph$ph$ph_add(result,(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(tuple2$2char$phlist$1sType$ph$ph_clone(it->item), "./neo-c.h", 1521, 1181));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 1182);
    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 1183);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 1184);
    return __result_obj__0;
}

static void list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* it;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 1134);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize}", 2, 1133);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phlist$1sType$ph$ph$p_finalize(struct tuple2$2char$phlist$1sType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phlist$1sType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phlist$1sType$ph$ph$p_finalize", 2, 1131));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phlist$1sType$ph$ph$p_finalize}", 3, 1132);
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_initialize(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_initialize"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 1137);
    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 1138);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 1139);
    return __result_obj__0;
}

static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_add(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self, struct tuple2$2char$phlist$1sType$ph$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_add"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* litem;
    struct tuple2$2char$phlist$1sType$ph$ph* __dec_obj92;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* litem_44;
    struct tuple2$2char$phlist$1sType$ph$ph* __dec_obj93;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* litem_45;
    struct tuple2$2char$phlist$1sType$ph$ph* __dec_obj94;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 1142);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "./neo-c.h", 1534, 1143, "struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*"))), "./neo-c.h", 1534, 1144);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj92=litem->item,
        litem->item=(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(item, "./neo-c.h", 1538, 1146);
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, __dec_obj92,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 1145);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_44=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "./neo-c.h", 1544, 1147, "struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*"))), "./neo-c.h", 1544, 1148);
        litem_44->prev=self->head;
        litem_44->next=((void*)0);
        __dec_obj93=litem_44->item,
        litem_44->item=(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(item, "./neo-c.h", 1548, 1150);
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, __dec_obj93,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 1149);
        self->tail=litem_44;
        self->head->next=litem_44;
    }
    else {
        __right_value0 = (void*)0;
        litem_45=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "./neo-c.h", 1554, 1151, "struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*"))), "./neo-c.h", 1554, 1152);
        litem_45->prev=self->tail;
        litem_45->next=((void*)0);
        __dec_obj94=litem_45->item,
        litem_45->item=(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(item, "./neo-c.h", 1558, 1154);
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, __dec_obj94,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 1153);
        self->tail->next=litem_45;
        self->tail=litem_45;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 1155);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phlist$1sType$ph$ph* tuple2$2char$phlist$1sType$ph$ph_clone(struct tuple2$2char$phlist$1sType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phlist$1sType$ph$ph_clone"; neo_current_frame = &fr;
    struct tuple2$2char$phlist$1sType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct tuple2$2char$phlist$1sType$ph$ph* result;
    char*  __dec_obj95  ;
    struct list$1sType$ph* __dec_obj96;
    if(self==(void*)0) {
                __result_obj__0 = (struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count((void*)0, "tuple2$2char$phlist$1sType$ph$ph_clone", 4, 1156);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phlist$1sType$ph$ph_clone}", 4, 1157);
        return __result_obj__0;
    }
    result=(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count((struct tuple2$2char$phlist$1sType$ph$ph*)come_calloc(1, sizeof(struct tuple2$2char$phlist$1sType$ph$ph)*(1), "tuple2$2char$phlist$1sType$ph$ph_clone", 5, 1158, "struct tuple2$2char$phlist$1sType$ph$ph*"), "tuple2$2char$phlist$1sType$ph$ph_clone", 5, 1159);
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj95=result->v1,
        result->v1=(char* )come_increment_ref_count((char* )come_memdup(self->v1, "tuple2$2char$phlist$1sType$ph$ph_clone", 6, 1160, "char* "), "tuple2$2char$phlist$1sType$ph$ph_clone", 6, 1162);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "tuple2$2char$phlist$1sType$ph$ph_clone", 6, 1161);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj96=result->v2,
        result->v2=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_clone(self->v2), "tuple2$2char$phlist$1sType$ph$ph_clone", 7, 1174);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj96,(void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phlist$1sType$ph$ph_clone", 7, 1173);
    }
        __result_obj__0 = (struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(result, "tuple2$2char$phlist$1sType$ph$ph_clone", 8, 1175);
    come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phlist$1sType$ph$ph_clone}", 8, 1178);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "tuple2$2char$phlist$1sType$ph$ph_clone}", 8, 1179);
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 1163);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 1164);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 1165, "struct list$1sType$ph*"), "./neo-c.h", 1513, 1166)), "./neo-c.h", 1513, 1167);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 1168));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 1169));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 1170);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 1171);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 1172);
    return __result_obj__0;
}

static void tuple2$2char$phlist$1sType$ph$ph_finalize(struct tuple2$2char$phlist$1sType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phlist$1sType$ph$ph_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phlist$1sType$ph$ph_finalize", 2, 1176));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phlist$1sType$ph$ph_finalize}", 3, 1177);
    }
        neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phlist$1sType$ph$ph$ph_finalize(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* it;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 1185);
    }
        neo_current_frame = fr.prev;
}

static void sPayloadEnumNode_finalize(struct sPayloadEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPayloadEnumNode_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, (void*)0, "sPayloadEnumNode_finalize", 2, 1193));
    }
    if(self!=((void*)0)&&self->mTypeName!=((void*)0)) {
        (self->mTypeName = come_decrement_ref_count(self->mTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sPayloadEnumNode_finalize", 3, 1194));
    }
    if(self!=((void*)0)&&self->mVariants!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, self->mVariants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sPayloadEnumNode_finalize}", 4, 1195);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sPayloadEnumNode_finalize}", 5, 1196);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sPayloadEnumNode_finalize", 6, 1197));
    }
        neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phsType$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem;
    struct tuple2$2char$phsType$ph* __dec_obj101;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_46;
    struct tuple2$2char$phsType$ph* __dec_obj102;
    struct list_item$1tuple2$2char$phsType$ph$ph* litem_47;
    struct tuple2$2char$phsType$ph* __dec_obj103;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 1217);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1619, 1218, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1619, 1219);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj101=litem->item,
        litem->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1623, 1221);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj101,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 1220);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_46=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1629, 1222, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1629, 1223);
        litem_46->prev=self->head;
        litem_46->next=((void*)0);
        __dec_obj102=litem_46->item,
        litem_46->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1633, 1225);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj102,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 1224);
        self->tail=litem_46;
        self->head->next=litem_46;
    }
    else {
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./neo-c.h", 1639, 1226, "struct list_item$1tuple2$2char$phsType$ph$ph*"))), "./neo-c.h", 1639, 1227);
        litem_47->prev=self->tail;
        litem_47->next=((void*)0);
        __dec_obj103=litem_47->item,
        litem_47->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item, "./neo-c.h", 1643, 1229);
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __dec_obj103,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 1228);
        self->tail->next=litem_47;
        self->tail=litem_47;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 1230);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char*  v1  , struct sType* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj104  ;
    struct sType*  __dec_obj105  ;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    __dec_obj104=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4455, 1236);
    __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4455, 1235);
    __dec_obj105=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2, "./neo-c.h", 4456, 1238);
    come_call_finalizer(sType_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4456, 1237);
        __result_obj__0 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self, "./neo-c.h", 4458, 1239);
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1240);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4458, 1241));
    come_call_finalizer(sType_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4458, 1242);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1243);
    return __result_obj__0;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char*  key  , struct sType*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsType$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3892, 1295));
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3892, 1296);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsType$ph_rehash(self);
    }
    add_to_key_list=(_Bool)0;
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                map$2char$phsType$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                if(1) {
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3911, 1307));
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3912, 1308);
                }
                else {
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sType_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3918, 1309);
                    self->items[it]=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 3919, 1310);
                }
                else {
                    self->items[it]=item;
                }
                self->hashes[it]=key_hash;
                add_to_key_list=(_Bool)1;
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
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3942, 1311);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 3948, 1312);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            add_to_key_list=(_Bool)1;
            break;
        }
    }
    if(add_to_key_list) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3962, 1313));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3965, 1314));
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3965, 1315);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sType**  items  ;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_54;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    old_size=self->size;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3810, 1297, "char** "))), "./neo-c.h", 3810, 1298);
    __right_value0 = (void*)0;
    items=(struct sType** )come_increment_ref_count(((struct sType** )(__right_value0=(struct sType* *)come_calloc(1, sizeof(struct sType* )*(1*(size)), "./neo-c.h", 3811, 1299, "struct sType** "))), "./neo-c.h", 3811, 1300);
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3812, 1301, "unsigned int*"))), "./neo-c.h", 3812, 1302);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3813, 1303, "_Bool*"))), "./neo-c.h", 3813, 1304);
    for(i=0    ;i<size;i++){
        hashes[i]=0;
        item_existance[i]=(_Bool)0;
    }
    len=0;
    for(i_54=0    ;i_54<old_size;i_54++){
        if(!self->item_existance[i_54]) {
            continue;
        }
        key_hash=self->hashes[i_54];
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
                keys[n]=self->keys[i_54];
                items[n]=self->items[i_54];
                len++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3855, 1305));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3856, 1306));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->hashes=hashes;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsType$ph_remove_ordered_entry(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    pos=map$2char$phsType$ph_key_position(self,key,by_pointer);
    if(pos>=0) {
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsType$ph_key_position(struct map$2char$phsType$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    pos=0;
    it=self->key_list->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
                        neo_current_frame = fr.prev;
            return pos;
        }
        it=it->next;
        pos++;
    }
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

struct sNode* parse_enum(char*  type_name  , char*  attribute  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_enum"; neo_current_frame = &fr;
    struct sType*  type_elements  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* generics_type_names;
    char*  generics_name  ;
    struct sNode* __result_obj__0;
    struct list$1char$ph* generics_type_names_saved;
    struct list$1char$ph* __dec_obj107;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var5
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    struct sType*  __dec_obj108  ;
    char*  attribute_mid  ;
    char*  __dec_obj109  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj110  ;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* elements;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* payload_variants;
    _Bool payload_enum;
    char*  element_name  ;
    char*  attribute_55  ;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* _o2_saved_10;
    struct tuple3$3char$phsNode$phchar$ph* it2;
    struct tuple3$3char$phsNode$phchar$ph* multiple_assign_var6
;    char*  prev_name  =0;
    struct sNode* prev_value=0;
    char*  prev_attribute  =0;
    struct list$1char$ph* __dec_obj111;
    void* __right_value3 = (void*)0;
    struct list$1sType$ph* payload_types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var7
;    struct sType*  payload_type  =0;
    char*  name_58  =0;
    _Bool err_59=0;
    struct list$1char$ph* __dec_obj117;
    struct list$1char$ph* __dec_obj118;
    struct list$1char$ph* __dec_obj119;
    _Bool no_comma;
    struct sNode* element_value;
    struct list$1char$ph* __dec_obj126;
    char*  attribute2  ;
    char*  __dec_obj127  ;
    char*  __dec_obj128  ;
    struct sNode* _inf_value2;
    struct sPayloadEnumNode* _inf_obj_value2;
    struct sNode* _inf_value3;
    struct sEnumNode* _inf_obj_value3;
    type_elements=((void*)0);
    generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "21enum.nc", 409, 1325, "struct list$1char$ph*"), "21enum.nc", 409, 1326)), "21enum.nc", 409, 1327);
    if(*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            __right_value0 = (void*)0;
            generics_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "21enum.nc", 416, 1328);
            list$1char$ph_push_back(generics_type_names,(char* )come_increment_ref_count(generics_name, "21enum.nc", 417, 1329));
            if(*info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                (generics_name = come_decrement_ref_count(generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 422, 1330));
                break;
            }
            else if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                err_msg(info,"invalid payload enum generics definition");
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 430, 1331);
                (generics_name = come_decrement_ref_count(generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 430, 1332));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 430, 1333));
                (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 430, 1334));
                come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 430, 1335);
                come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 430, 1336);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 430, 1337):(void*)0);
                return __result_obj__0;
            }
            (generics_name = come_decrement_ref_count(generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 433, 1338));
        }
    }
    generics_type_names_saved=info->generics_type_names;
    __right_value0 = (void*)0;
    __dec_obj107=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names), "21enum.nc", 436, 1340);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 436, 1339);
    if(*info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        multiple_assign_var5=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type=(struct sType* )come_increment_ref_count(multiple_assign_var5->v1, "21enum.nc", 442, 1341);
        name=(char* )come_increment_ref_count(multiple_assign_var5->v2, "21enum.nc", 442, 1342);
        err=multiple_assign_var5->v3;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 442, 1345);
        __dec_obj108=type_elements,
        type_elements=(struct sType* )come_increment_ref_count(type, "21enum.nc", 444, 1347);
        come_call_finalizer(sType_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 444, 1346);
        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 447, 1348);
        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 447, 1349));
    }
    __right_value0 = (void*)0;
    attribute_mid=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "21enum.nc", 447, 1350);
    if(string_operator_not_equals(attribute_mid,"")) {
        if(string_operator_equals(attribute,"")) {
            __dec_obj109=attribute,
            attribute=(char* )come_increment_ref_count(attribute_mid, "21enum.nc", 450, 1352);
            __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 450, 1351);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj110=attribute,
            attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute," "))),attribute_mid), "21enum.nc", 453, 1354);
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 453, 1353);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 453, 1355));
        }
    }
    expected_next_character(123,info);
    __right_value0 = (void*)0;
    ((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 459, 1356));
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    elements=(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3char$phsNode$phchar$ph$ph_initialize((struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count((struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "21enum.nc", 461, 1357, "struct list$1tuple3$3char$phsNode$phchar$ph$ph*"), "21enum.nc", 461, 1358)), "21enum.nc", 461, 1359);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    payload_variants=(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phlist$1sType$ph$ph$ph_initialize((struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "21enum.nc", 462, 1360, "struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*"), "21enum.nc", 462, 1361)), "21enum.nc", 462, 1362);
    payload_enum=(_Bool)0;
    while((_Bool)1) {
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        __right_value0 = (void*)0;
        ((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 472, 1363));
        __right_value0 = (void*)0;
        element_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "21enum.nc", 474, 1364);
        __right_value0 = (void*)0;
        attribute_55=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "21enum.nc", 476, 1365);
        if(*info->p==40) {
            if(!payload_enum&&list$1tuple3$3char$phsNode$phchar$ph$ph_length(elements)>0) {
                for(_o2_saved_10=(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(elements, "21enum.nc", 480, 1366),it2=list$1tuple3$3char$phsNode$phchar$ph$ph_begin(_o2_saved_10)                ;!list$1tuple3$3char$phsNode$phchar$ph$ph_end(_o2_saved_10);it2=list$1tuple3$3char$phsNode$phchar$ph$ph_next(_o2_saved_10)){
                    multiple_assign_var6=it2;
                    prev_name=(char* )come_increment_ref_count(multiple_assign_var6->v1, "21enum.nc", 481, 1367);
                    prev_value=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2, "21enum.nc", 481, 1368);
                    prev_attribute=(char* )come_increment_ref_count(multiple_assign_var6->v3, "21enum.nc", 481, 1369);
                    if(prev_value!=((void*)0)) {
                        err_msg(info,"payload enum doesn't support mixing payload variants and integer values");
                        __right_value0 = (void*)0;
                        __dec_obj111=info->generics_type_names,
                        info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names_saved), "21enum.nc", 485, 1371);
                        come_call_finalizer(list$1char$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 485, 1370);
                                                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 486, 1372);
                        (prev_name = come_decrement_ref_count(prev_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 486, 1373));
                        ((prev_value) ? prev_value = come_decrement_ref_count(prev_value, ((struct sNode*)prev_value)->finalize, ((struct sNode*)prev_value)->_protocol_obj, 0, 0,(void*)0, "21enum.nc", 486, 1374):(void*)0);
                        (prev_attribute = come_decrement_ref_count(prev_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 486, 1375));
                        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 486, 1376);
                        (element_name = come_decrement_ref_count(element_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 486, 1377));
                        (attribute_55 = come_decrement_ref_count(attribute_55, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 486, 1378));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 486, 1379));
                        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 486, 1380));
                        come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 486, 1381);
                        come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 486, 1382);
                        (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 486, 1383));
                        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 486, 1384);
                        come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 486, 1385);
                        neo_current_frame = fr.prev;
                        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 486, 1386):(void*)0);
                        return __result_obj__0;
                    }
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    list$1tuple2$2char$phlist$1sType$ph$ph$ph_push_back(payload_variants,(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(tuple2$2char$phlist$1sType$ph$ph_initialize((struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count((struct tuple2$2char$phlist$1sType$ph$ph*)come_calloc(1, sizeof(struct tuple2$2char$phlist$1sType$ph$ph)*(1), "21enum.nc", 489, 1403, "struct tuple2$2char$phlist$1sType$ph$ph"), "21enum.nc", 489, 1413),(char* )come_increment_ref_count(prev_name, "21enum.nc", 489, 1414),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "21enum.nc", 489, 1401, "struct list$1sType$ph*"), "21enum.nc", 489, 1402)), "21enum.nc", 489, 1415)), "21enum.nc", 489, 1416));
                    (prev_name = come_decrement_ref_count(prev_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 491, 1417));
                    ((prev_value) ? prev_value = come_decrement_ref_count(prev_value, ((struct sNode*)prev_value)->finalize, ((struct sNode*)prev_value)->_protocol_obj, 0, 0,(void*)0, "21enum.nc", 491, 1418):(void*)0);
                    (prev_attribute = come_decrement_ref_count(prev_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 491, 1419));
                }
                list$1tuple3$3char$phsNode$phchar$ph$ph_reset(elements);
                come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, _o2_saved_10, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 494, 1421);
            }
            payload_enum=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            payload_types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "21enum.nc", 499, 1422, "struct list$1sType$ph*"), "21enum.nc", 499, 1423)), "21enum.nc", 499, 1424);
            while(*info->p!=41) {
                __right_value0 = (void*)0;
                multiple_assign_var7=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                payload_type=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "21enum.nc", 502, 1425);
                name_58=(char* )come_increment_ref_count(multiple_assign_var7->v2, "21enum.nc", 502, 1426);
                err_59=multiple_assign_var7->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 502, 1427);
                if(!err_59) {
                    __right_value0 = (void*)0;
                    __dec_obj117=info->generics_type_names,
                    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names_saved), "21enum.nc", 505, 1429);
                    come_call_finalizer(list$1char$ph_finalize, __dec_obj117,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 505, 1428);
                                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 506, 1430);
                    come_call_finalizer(sType_finalize, payload_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 506, 1431);
                    (name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 506, 1432));
                    come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 506, 1433);
                    (element_name = come_decrement_ref_count(element_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 506, 1434));
                    (attribute_55 = come_decrement_ref_count(attribute_55, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 506, 1435));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 506, 1436));
                    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 506, 1437));
                    come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 506, 1438);
                    come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 506, 1439);
                    (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 506, 1440));
                    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 506, 1441);
                    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 506, 1442);
                    neo_current_frame = fr.prev;
                    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 506, 1443):(void*)0);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(payload_types,(struct sType* )come_increment_ref_count(payload_type, "21enum.nc", 509, 1444));
                if(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==41) {
                }
                else {
                    err_msg(info,"invalid payload enum variant");
                    __right_value0 = (void*)0;
                    __dec_obj118=info->generics_type_names,
                    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names_saved), "21enum.nc", 519, 1446);
                    come_call_finalizer(list$1char$ph_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 519, 1445);
                                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 520, 1447);
                    come_call_finalizer(sType_finalize, payload_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 520, 1448);
                    (name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 520, 1449));
                    come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 520, 1450);
                    (element_name = come_decrement_ref_count(element_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 520, 1451));
                    (attribute_55 = come_decrement_ref_count(attribute_55, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 520, 1452));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 520, 1453));
                    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 520, 1454));
                    come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 520, 1455);
                    come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 520, 1456);
                    (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 520, 1457));
                    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 520, 1458);
                    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 520, 1459);
                    neo_current_frame = fr.prev;
                    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 520, 1460):(void*)0);
                    return __result_obj__0;
                }
                come_call_finalizer(sType_finalize, payload_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 524, 1461);
                (name_58 = come_decrement_ref_count(name_58, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 524, 1462));
            }
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple2$2char$phlist$1sType$ph$ph$ph_push_back(payload_variants,(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(tuple2$2char$phlist$1sType$ph$ph_initialize((struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count((struct tuple2$2char$phlist$1sType$ph$ph*)come_calloc(1, sizeof(struct tuple2$2char$phlist$1sType$ph$ph)*(1), "21enum.nc", 527, 1463, "struct tuple2$2char$phlist$1sType$ph$ph"), "21enum.nc", 527, 1464),(char* )come_increment_ref_count(element_name, "21enum.nc", 527, 1465),(struct list$1sType$ph*)come_increment_ref_count(payload_types, "21enum.nc", 527, 1466)), "21enum.nc", 527, 1467));
            come_call_finalizer(list$1sType$ph$p_finalize, payload_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 539, 1468);
        }
        else if(payload_enum) {
            if(*info->p==61&&*(info->p+1)!=61) {
                err_msg(info,"payload enum doesn't support integer values");
                __right_value0 = (void*)0;
                __dec_obj119=info->generics_type_names,
                info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names_saved), "21enum.nc", 532, 1470);
                come_call_finalizer(list$1char$ph_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 532, 1469);
                                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 533, 1471);
                (element_name = come_decrement_ref_count(element_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 533, 1472));
                (attribute_55 = come_decrement_ref_count(attribute_55, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 533, 1473));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 533, 1474));
                (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 533, 1475));
                come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 533, 1476);
                come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 533, 1477);
                (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 533, 1478));
                come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 533, 1479);
                come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 533, 1480);
                neo_current_frame = fr.prev;
                ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 533, 1481):(void*)0);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            list$1tuple2$2char$phlist$1sType$ph$ph$ph_push_back(payload_variants,(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(tuple2$2char$phlist$1sType$ph$ph_initialize((struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count((struct tuple2$2char$phlist$1sType$ph$ph*)come_calloc(1, sizeof(struct tuple2$2char$phlist$1sType$ph$ph)*(1), "21enum.nc", 536, 1484, "struct tuple2$2char$phlist$1sType$ph$ph"), "21enum.nc", 536, 1485),(char* )come_increment_ref_count(element_name, "21enum.nc", 536, 1486),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "21enum.nc", 536, 1482, "struct list$1sType$ph*"), "21enum.nc", 536, 1483)), "21enum.nc", 536, 1487)), "21enum.nc", 536, 1488));
        }
        if(!payload_enum&&*info->p==61&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            ((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 543, 1489));
            no_comma=info->no_comma;
            info->no_comma=(_Bool)1;
            __right_value0 = (void*)0;
            element_value=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "21enum.nc", 547, 1490);
            info->no_comma=no_comma;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple3$3char$phsNode$phchar$ph$ph_push_back(elements,(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(tuple3$3char$phsNode$phchar$ph_initialize((struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count((struct tuple3$3char$phsNode$phchar$ph*)come_calloc(1, sizeof(struct tuple3$3char$phsNode$phchar$ph)*(1), "21enum.nc", 551, 1505, "struct tuple3$3char$phsNode$phchar$ph"), "21enum.nc", 551, 1518),(char* )come_increment_ref_count(element_name, "21enum.nc", 551, 1519),(struct sNode*)come_increment_ref_count(element_value, "21enum.nc", 551, 1520),(char* )come_increment_ref_count(attribute_55, "21enum.nc", 551, 1521)), "21enum.nc", 551, 1522));
            ((element_value) ? element_value = come_decrement_ref_count(element_value, ((struct sNode*)element_value)->finalize, ((struct sNode*)element_value)->_protocol_obj, 0, 0,(void*)0, "21enum.nc", 557, 1523):(void*)0);
        }
        else if(!payload_enum) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1tuple3$3char$phsNode$phchar$ph$ph_push_back(elements,(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(tuple3$3char$phsNode$phchar$ph_initialize((struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count((struct tuple3$3char$phsNode$phchar$ph*)come_calloc(1, sizeof(struct tuple3$3char$phsNode$phchar$ph)*(1), "21enum.nc", 554, 1524, "struct tuple3$3char$phsNode$phchar$ph"), "21enum.nc", 554, 1525),(char* )come_increment_ref_count(element_name, "21enum.nc", 554, 1526),(struct sNode*)come_increment_ref_count((struct sNode*)((void*)0), "21enum.nc", 554, 1527),(char* )come_increment_ref_count(attribute_55, "21enum.nc", 554, 1528)), "21enum.nc", 554, 1529));
        }
        __right_value0 = (void*)0;
        ((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 557, 1530));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        __right_value0 = (void*)0;
        ((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 564, 1531));
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (element_name = come_decrement_ref_count(element_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 569, 1532));
            (attribute_55 = come_decrement_ref_count(attribute_55, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 569, 1533));
            break;
        }
        (element_name = come_decrement_ref_count(element_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 573, 1534));
        (attribute_55 = come_decrement_ref_count(attribute_55, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 573, 1535));
    }
    __right_value0 = (void*)0;
    __dec_obj126=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_type_names_saved), "21enum.nc", 573, 1537);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj126,(void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc", 573, 1536);
    __right_value0 = (void*)0;
    attribute2=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "21enum.nc", 575, 1538);
    if(string_operator_equals(attribute,"")&&string_operator_equals(attribute2,"")) {
    }
    else if(string_operator_equals(attribute,"")) {
        __dec_obj127=attribute,
        attribute=(char* )come_increment_ref_count(attribute2, "21enum.nc", 580, 1540);
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 580, 1539);
    }
    else if(string_operator_equals(attribute2,"")) {
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj128=attribute,
        attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute," "))),attribute2), "21enum.nc", 585, 1542);
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 585, 1541);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 585, 1543));
    }
    if(payload_enum) {
        if(type_elements!=((void*)0)) {
            err_msg(info,"payload enum doesn't support integer base type");
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 591, 1544);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 591, 1545));
            (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 591, 1546));
            come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 591, 1547);
            come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 591, 1548);
            (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 591, 1549));
            come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 591, 1550);
            come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 591, 1551);
            (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 591, 1552));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 591, 1553):(void*)0);
            return __result_obj__0;
        }
        if(list$1char$ph_length(generics_type_names)==0&&list$1tuple2$2char$phlist$1sType$ph$ph$ph_length(payload_variants)==0) {
            err_msg(info,"invalid payload enum");
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 595, 1554);
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 595, 1555));
            (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 595, 1556));
            come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 595, 1557);
            come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 595, 1558);
            (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 595, 1559));
            come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 595, 1560);
            come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 595, 1561);
            (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 595, 1562));
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 595, 1563):(void*)0);
            return __result_obj__0;
        }
        if(string_operator_not_equals(type_name,"")) {
            if(list$1char$ph_length(generics_type_names)>0) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                map$2char$phsClass$ph_insert(info->generics_classes,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",599), "21enum.nc", 599, 1564),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "21enum.nc", 599, 1565, "struct sClass* "), "21enum.nc", 599, 1567),(char* )come_increment_ref_count(type_name, "21enum.nc", 599, 1566),(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,list$1char$ph_length(generics_type_names),-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "21enum.nc", 599, 1568),(_Bool)0);
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",602), "21enum.nc", 602, 1569),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "21enum.nc", 602, 1570, "struct sClass* "), "21enum.nc", 602, 1572),(char* )come_increment_ref_count(type_name, "21enum.nc", 602, 1571),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "21enum.nc", 602, 1573),(_Bool)0);
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                map$2char$phsType$ph_insert(info->types,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",603), "21enum.nc", 603, 1574),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 603, 1575, "struct sType* "), "21enum.nc", 603, 1576),(char* )come_increment_ref_count(type_name, "21enum.nc", 603, 1577),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 603, 1578),(_Bool)0);
            }
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21enum.nc", 607, 1585, "struct sNode");
        _inf_obj_value2=(struct sPayloadEnumNode*)come_increment_ref_count(((struct sPayloadEnumNode*)(__right_value1=sPayloadEnumNode_initialize((struct sPayloadEnumNode* )come_increment_ref_count((struct sPayloadEnumNode *)come_calloc(1, sizeof(struct sPayloadEnumNode )*(1), "21enum.nc", 607, 1579, "struct sPayloadEnumNode* "), "21enum.nc", 607, 1580),(char* )come_increment_ref_count(type_name, "21enum.nc", 607, 1581),(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(payload_variants, "21enum.nc", 607, 1582),(struct list$1char$ph*)come_increment_ref_count(generics_type_names, "21enum.nc", 607, 1583),(char* )come_increment_ref_count(attribute, "21enum.nc", 607, 1584),info))), "21enum.nc", 607, 1586);
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sPayloadEnumNode_finalize;
        _inf_value2->clone=(void*)sPayloadEnumNode_clone;
        _inf_value2->compile=(void*)sPayloadEnumNode_compile;
        _inf_value2->sline=(void*)sNodeBase_sline;
        _inf_value2->sline_real=(void*)sNodeBase_sline_real;
        _inf_value2->sname=(void*)sNodeBase_sname;
        _inf_value2->terminated=(void*)sPayloadEnumNode_terminated;
        _inf_value2->kind=(void*)sPayloadEnumNode_kind;
        _inf_value2->left_value=(void*)sNodeBase_left_value;
        __right_value2 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value2)), "21enum.nc", 607, 1603);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 607, 1604));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 607, 1605));
        come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 607, 1606);
        come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 607, 1607);
        (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 607, 1608));
        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 607, 1609);
        come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 607, 1610);
        (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 607, 1611));
        come_call_finalizer(sPayloadEnumNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 607, 1612);
        ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "21enum.nc", 607, 1613):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 607, 1614):(void*)0);
        return __result_obj__0;
    }
    if(list$1char$ph_length(generics_type_names)>0) {
        err_msg(info,"integer enum doesn't support generics");
                __result_obj__0 = (struct sNode*)come_increment_ref_count(((void*)0), "21enum.nc", 612, 1615);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 612, 1616));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 612, 1617));
        come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 612, 1618);
        come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 612, 1619);
        (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 612, 1620));
        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 612, 1621);
        come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 612, 1622);
        (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 612, 1623));
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 612, 1624):(void*)0);
        return __result_obj__0;
    }
    if(string_operator_not_equals(type_name,"")) {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",615), "21enum.nc", 615, 1625),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "21enum.nc", 615, 1626, "struct sClass* "), "21enum.nc", 615, 1628),(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",615), "21enum.nc", 615, 1627),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)1,(_Bool)0,(_Bool)0,info,(_Bool)0), "21enum.nc", 615, 1629),(_Bool)0);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        map$2char$phsType$ph_insert(info->types,(char* )come_increment_ref_count(__builtin_string(type_name,"21enum.nc",616), "21enum.nc", 616, 1630),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "21enum.nc", 616, 1631, "struct sType* "), "21enum.nc", 616, 1632),(char* )come_increment_ref_count(type_name, "21enum.nc", 616, 1633),(_Bool)0,info,(_Bool)0,0), "21enum.nc", 616, 1634),(_Bool)0);
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21enum.nc", 619, 1641, "struct sNode");
    _inf_obj_value3=(struct sEnumNode*)come_increment_ref_count(((struct sEnumNode*)(__right_value1=sEnumNode_initialize((struct sEnumNode* )come_increment_ref_count((struct sEnumNode *)come_calloc(1, sizeof(struct sEnumNode )*(1), "21enum.nc", 619, 1635, "struct sEnumNode* "), "21enum.nc", 619, 1636),(char* )come_increment_ref_count(type_name, "21enum.nc", 619, 1637),(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(elements, "21enum.nc", 619, 1638),(struct sType* )come_increment_ref_count(type_elements, "21enum.nc", 619, 1639),(char* )come_increment_ref_count(attribute, "21enum.nc", 619, 1640),info))), "21enum.nc", 619, 1642);
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sEnumNode_finalize;
    _inf_value3->clone=(void*)sEnumNode_clone;
    _inf_value3->compile=(void*)sEnumNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sEnumNode_terminated;
    _inf_value3->kind=(void*)sEnumNode_kind;
    _inf_value3->left_value=(void*)sNodeBase_left_value;
    __right_value2 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value2=_inf_value3)), "21enum.nc", 619, 1659);
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 619, 1660));
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 619, 1661));
    come_call_finalizer(sType_finalize, type_elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 619, 1662);
    come_call_finalizer(list$1char$ph$p_finalize, generics_type_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 619, 1663);
    (attribute_mid = come_decrement_ref_count(attribute_mid, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 619, 1664));
    come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, elements, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 619, 1665);
    come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_finalize, payload_variants, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 619, 1666);
    (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 619, 1667));
    come_call_finalizer(sEnumNode_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 619, 1668);
    ((__right_value2) ? __right_value2 = come_decrement_ref_count(__right_value2, ((struct sNode*)__right_value2)->finalize, ((struct sNode*)__right_value2)->_protocol_obj, 1, 0,(void*)0, "21enum.nc", 619, 1669):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 619, 1670):(void*)0);
    return __result_obj__0;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 1343);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 1344));
    }
            neo_current_frame = fr.prev;
}

static struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* list$1tuple2$2char$phlist$1sType$ph$ph$ph_push_back(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self, struct tuple2$2char$phlist$1sType$ph$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* litem;
    struct tuple2$2char$phlist$1sType$ph$ph* __dec_obj112;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* litem_56;
    struct tuple2$2char$phlist$1sType$ph$ph* __dec_obj113;
    struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph* litem_57;
    struct tuple2$2char$phlist$1sType$ph$ph* __dec_obj114;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 1387);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "./neo-c.h", 1619, 1388, "struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*"))), "./neo-c.h", 1619, 1389);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj112=litem->item,
        litem->item=(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(item, "./neo-c.h", 1623, 1391);
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph_finalize, __dec_obj112,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 1390);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_56=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "./neo-c.h", 1629, 1392, "struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*"))), "./neo-c.h", 1629, 1393);
        litem_56->prev=self->head;
        litem_56->next=((void*)0);
        __dec_obj113=litem_56->item,
        litem_56->item=(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(item, "./neo-c.h", 1633, 1395);
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph_finalize, __dec_obj113,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 1394);
        self->tail=litem_56;
        self->head->next=litem_56;
    }
    else {
        __right_value0 = (void*)0;
        litem_57=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)(__right_value0=(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph)*(1), "./neo-c.h", 1639, 1396, "struct list_item$1tuple2$2char$phlist$1sType$ph$ph$ph*"))), "./neo-c.h", 1639, 1397);
        litem_57->prev=self->tail;
        litem_57->next=((void*)0);
        __dec_obj114=litem_57->item,
        litem_57->item=(struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(item, "./neo-c.h", 1643, 1399);
        come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph_finalize, __dec_obj114,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 1398);
        self->tail->next=litem_57;
        self->tail=litem_57;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 1400);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple2$2char$phlist$1sType$ph$ph* tuple2$2char$phlist$1sType$ph$ph_initialize(struct tuple2$2char$phlist$1sType$ph$ph* self, char*  v1  , struct list$1sType$ph* v2)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phlist$1sType$ph$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj115  ;
    struct list$1sType$ph* __dec_obj116;
    struct tuple2$2char$phlist$1sType$ph$ph* __result_obj__0;
    __dec_obj115=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4455, 1405);
    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4455, 1404);
    __dec_obj116=self->v2,
    self->v2=(struct list$1sType$ph*)come_increment_ref_count(v2, "./neo-c.h", 4456, 1407);
    come_call_finalizer(list$1sType$ph_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4456, 1406);
        __result_obj__0 = (struct tuple2$2char$phlist$1sType$ph$ph*)come_increment_ref_count(self, "./neo-c.h", 4458, 1408);
    come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1409);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4458, 1410));
    come_call_finalizer(list$1sType$ph$p_finalize, v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4458, 1411);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2char$phlist$1sType$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4458, 1412);
    return __result_obj__0;
}

static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_reset(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_reset"; neo_current_frame = &fr;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* __result_obj__0;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* it;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* prev_it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple3$3char$phsNode$phchar$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 1420);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1tuple3$3char$phsNode$phchar$ph$ph* list$1tuple3$3char$phsNode$phchar$ph$ph_push_back(struct list$1tuple3$3char$phsNode$phchar$ph$ph* self, struct tuple3$3char$phsNode$phchar$ph* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3char$phsNode$phchar$ph$ph_push_back"; neo_current_frame = &fr;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* litem;
    struct tuple3$3char$phsNode$phchar$ph* __dec_obj120;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* litem_60;
    struct tuple3$3char$phsNode$phchar$ph* __dec_obj121;
    struct list_item$1tuple3$3char$phsNode$phchar$ph$ph* litem_61;
    struct tuple3$3char$phsNode$phchar$ph* __dec_obj122;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 1491);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)(__right_value0=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "./neo-c.h", 1619, 1492, "struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*"))), "./neo-c.h", 1619, 1493);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj120=litem->item,
        litem->item=(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(item, "./neo-c.h", 1623, 1495);
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 1494);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_60=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)(__right_value0=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "./neo-c.h", 1629, 1496, "struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*"))), "./neo-c.h", 1629, 1497);
        litem_60->prev=self->head;
        litem_60->next=((void*)0);
        __dec_obj121=litem_60->item,
        litem_60->item=(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(item, "./neo-c.h", 1633, 1499);
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph_finalize, __dec_obj121,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 1498);
        self->tail=litem_60;
        self->head->next=litem_60;
    }
    else {
        __right_value0 = (void*)0;
        litem_61=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)(__right_value0=(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3char$phsNode$phchar$ph$ph)*(1), "./neo-c.h", 1639, 1500, "struct list_item$1tuple3$3char$phsNode$phchar$ph$ph*"))), "./neo-c.h", 1639, 1501);
        litem_61->prev=self->tail;
        litem_61->next=((void*)0);
        __dec_obj122=litem_61->item,
        litem_61->item=(struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(item, "./neo-c.h", 1643, 1503);
        come_call_finalizer(tuple3$3char$phsNode$phchar$ph_finalize, __dec_obj122,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 1502);
        self->tail->next=litem_61;
        self->tail=litem_61;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 1504);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct tuple3$3char$phsNode$phchar$ph* tuple3$3char$phsNode$phchar$ph_initialize(struct tuple3$3char$phsNode$phchar$ph* self, char*  v1  , struct sNode* v2, char*  v3  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3char$phsNode$phchar$ph_initialize"; neo_current_frame = &fr;
    char*  __dec_obj123  ;
    struct sNode* __dec_obj124;
    char*  __dec_obj125  ;
    struct tuple3$3char$phsNode$phchar$ph* __result_obj__0;
    __dec_obj123=self->v1,
    self->v1=(char* )come_increment_ref_count(v1, "./neo-c.h", 4571, 1507);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4571, 1506);
    __dec_obj124=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2, "./neo-c.h", 4572, 1509);
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 4572, 1508) :0);
    __dec_obj125=self->v3,
    self->v3=(char* )come_increment_ref_count(v3, "./neo-c.h", 4573, 1511);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4573, 1510);
        __result_obj__0 = (struct tuple3$3char$phsNode$phchar$ph*)come_increment_ref_count(self, "./neo-c.h", 4575, 1512);
    come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4575, 1513);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4575, 1514));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 4575, 1515):(void*)0);
    (v3 = come_decrement_ref_count(v3, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4575, 1516));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3char$phsNode$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4575, 1517);
    return __result_obj__0;
}

static int list$1tuple2$2char$phlist$1sType$ph$ph$ph_length(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phlist$1sType$ph$ph$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static struct sPayloadEnumNode* sPayloadEnumNode_clone(struct sPayloadEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sPayloadEnumNode_clone"; neo_current_frame = &fr;
    struct sPayloadEnumNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sPayloadEnumNode*  result  ;
    char*  __dec_obj129  ;
    char*  __dec_obj130  ;
    struct list$1tuple2$2char$phlist$1sType$ph$ph$ph* __dec_obj131;
    struct list$1char$ph* __dec_obj132;
    char*  __dec_obj133  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sPayloadEnumNode* )come_increment_ref_count((struct sPayloadEnumNode *)come_calloc(1, sizeof(struct sPayloadEnumNode )*(1), "sPayloadEnumNode_clone", 5, 1587, "struct sPayloadEnumNode* "), "sPayloadEnumNode_clone", 5, 1588);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj129=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sPayloadEnumNode_clone", 7, 1589, "char* "), "sPayloadEnumNode_clone", 7, 1591);
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "sPayloadEnumNode_clone", 7, 1590);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj130=result->mTypeName,
        result->mTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mTypeName, "sPayloadEnumNode_clone", 9, 1592, "char* "), "sPayloadEnumNode_clone", 9, 1594);
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "sPayloadEnumNode_clone", 9, 1593);
    }
    if(self!=((void*)0)&&self->mVariants!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj131=result->mVariants,
        result->mVariants=(struct list$1tuple2$2char$phlist$1sType$ph$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phlist$1sType$ph$ph$ph$p_clone(self->mVariants), "sPayloadEnumNode_clone", 10, 1596);
        come_call_finalizer(list$1tuple2$2char$phlist$1sType$ph$ph$ph_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sPayloadEnumNode_clone", 10, 1595);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj132=result->mGenericsTypeNames,
        result->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mGenericsTypeNames), "sPayloadEnumNode_clone", 11, 1598);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sPayloadEnumNode_clone", 11, 1597);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj133=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sPayloadEnumNode_clone", 12, 1599, "char* "), "sPayloadEnumNode_clone", 12, 1601);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0, (void*)0, "sPayloadEnumNode_clone", 12, 1600);
    }
        __result_obj__0 = result;
    come_call_finalizer(sPayloadEnumNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sPayloadEnumNode_clone}", 13, 1602);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sEnumNode* sEnumNode_clone(struct sEnumNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sEnumNode_clone"; neo_current_frame = &fr;
    struct sEnumNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sEnumNode*  result  ;
    char*  __dec_obj134  ;
    char*  __dec_obj135  ;
    struct list$1tuple3$3char$phsNode$phchar$ph$ph* __dec_obj136;
    struct sType*  __dec_obj137  ;
    char*  __dec_obj138  ;
    if(self==(void*)0) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    result=(struct sEnumNode* )come_increment_ref_count((struct sEnumNode *)come_calloc(1, sizeof(struct sEnumNode )*(1), "sEnumNode_clone", 5, 1643, "struct sEnumNode* "), "sEnumNode_clone", 5, 1644);
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj134=result->sname,
        result->sname=(char* )come_increment_ref_count((char* )come_memdup(self->sname, "sEnumNode_clone", 7, 1645, "char* "), "sEnumNode_clone", 7, 1647);
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0, (void*)0, "sEnumNode_clone", 7, 1646);
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)&&self->mTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj135=result->mTypeName,
        result->mTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mTypeName, "sEnumNode_clone", 9, 1648, "char* "), "sEnumNode_clone", 9, 1650);
        __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0, (void*)0, "sEnumNode_clone", 9, 1649);
    }
    if(self!=((void*)0)&&self->mElements!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj136=result->mElements,
        result->mElements=(struct list$1tuple3$3char$phsNode$phchar$ph$ph*)come_increment_ref_count(list$1tuple3$3char$phsNode$phchar$ph$ph$p_clone(self->mElements), "sEnumNode_clone", 10, 1652);
        come_call_finalizer(list$1tuple3$3char$phsNode$phchar$ph$ph_finalize, __dec_obj136,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sEnumNode_clone", 10, 1651);
    }
    if(self!=((void*)0)&&self->mTypeElements!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj137=result->mTypeElements,
        result->mTypeElements=(struct sType* )come_increment_ref_count(sType_clone(self->mTypeElements), "sEnumNode_clone", 11, 1654);
        come_call_finalizer(sType_finalize, __dec_obj137,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sEnumNode_clone", 11, 1653);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj138=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sEnumNode_clone", 12, 1655, "char* "), "sEnumNode_clone", 12, 1657);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0, (void*)0, "sEnumNode_clone", 12, 1656);
    }
        __result_obj__0 = result;
    come_call_finalizer(sEnumNode_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sEnumNode_clone}", 13, 1658);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "top_level_v96"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  attribute  ;
    char*  type_name  ;
    char*  attribute_after_enum  ;
    char*  __dec_obj139  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  __dec_obj140  ;
    char*  __dec_obj141  ;
    struct sNode* __result_obj__0;
    if(charp_operator_equals(buf,"enum")) {
        attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "21enum.nc", 625, 1671);
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(__builtin_string("","21enum.nc",627), "21enum.nc", 627, 1672);
        if(*info->p!=123&&*info->p!=58) {
            __right_value0 = (void*)0;
            attribute_after_enum=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "21enum.nc", 629, 1673);
            if(string_operator_not_equals(attribute_after_enum,"")) {
                if(string_operator_equals(attribute,"")) {
                    __dec_obj139=attribute,
                    attribute=(char* )come_increment_ref_count(attribute_after_enum, "21enum.nc", 632, 1675);
                    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 632, 1674);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj140=attribute,
                    attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute," "))),attribute_after_enum), "21enum.nc", 635, 1677);
                    __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 635, 1676);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 635, 1678));
                }
            }
            if(*info->p!=123&&*info->p!=58) {
                __right_value0 = (void*)0;
                __dec_obj141=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "21enum.nc", 640, 1680);
                __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0, (void*)0, "21enum.nc", 640, 1679);
            }
            (attribute_after_enum = come_decrement_ref_count(attribute_after_enum, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 644, 1681));
        }
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_enum((char* )come_increment_ref_count(type_name, "21enum.nc", 644, 1682),(char* )come_increment_ref_count(attribute, "21enum.nc", 644, 1683),info))), "21enum.nc", 644, 1684);
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 644, 1685));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 644, 1686));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "21enum.nc", 644, 1687):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 644, 1688):(void*)0);
        return __result_obj__0;
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 647, 1689));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 647, 1690));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=top_level_v95(buf,head,head_sline,info))), "21enum.nc", 647, 1691);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "21enum.nc", 647, 1692):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 647, 1693):(void*)0);
    return __result_obj__0;
}

struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_node_v16"; neo_current_frame = &fr;
    _Bool define_enum;
    char* p;
    int sline;
    _Bool no_output_come_code;
    void* __right_value0 = (void*)0;
    char*  type_name  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char*  struct_attribute  ;
    char*  type_name_62  ;
    struct sNode* __result_obj__0;
    define_enum=(_Bool)0;
    {
        p=info->p;
        sline=info->sline;
        no_output_come_code=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        if(charp_operator_equals(buf,"enum")) {
            if(xisalpha(*info->p)||*info->p==95) {
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "21enum.nc", 662, 1694);
                if(*info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        __right_value0 = (void*)0;
                        ((char* )(__right_value0=parse_word((_Bool)0,info)));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 669, 1695));
                        if(*info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        else if(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            break;
                        }
                    }
                }
                __right_value0 = (void*)0;
                (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 686, 1696));
                if(*info->p==58||*info->p==123) {
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        __right_value0 = (void*)0;
                        multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        type=(struct sType* )come_increment_ref_count(multiple_assign_var8->v1, "21enum.nc", 692, 1697);
                        name=(char* )come_increment_ref_count(multiple_assign_var8->v2, "21enum.nc", 692, 1698);
                        err=multiple_assign_var8->v3;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "21enum.nc}", 692, 1699);
                        come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "21enum.nc}", 695, 1700);
                        (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 695, 1701));
                    }
                    __right_value0 = (void*)0;
                    (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 695, 1702));
                }
                if(*info->p==123) {
                    __right_value0 = (void*)0;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "21enum.nc", 699, 1703));
                    if(*info->p==59) {
                        define_enum=(_Bool)1;
                    }
                }
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 706, 1704));
            }
        }
        info->p=p;
        info->sline=sline;
        info->no_output_come_code=no_output_come_code;
    }
    if(define_enum) {
        __right_value0 = (void*)0;
        struct_attribute=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "21enum.nc", 714, 1705);
        __right_value0 = (void*)0;
        type_name_62=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "21enum.nc", 716, 1706);
                __right_value0 = (void*)0;
        __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=parse_enum((char* )come_increment_ref_count(type_name_62, "21enum.nc", 718, 1707),(char* )come_increment_ref_count(struct_attribute, "21enum.nc", 718, 1708),info))), "21enum.nc", 718, 1709);
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 718, 1710));
        (type_name_62 = come_decrement_ref_count(type_name_62, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 718, 1711));
        ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "21enum.nc", 718, 1712):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 718, 1713):(void*)0);
        return __result_obj__0;
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 721, 1714));
        (type_name_62 = come_decrement_ref_count(type_name_62, (void*)0, (void*)0, 0, 0, (void*)0, "21enum.nc", 721, 1715));
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value0=string_node_v15(buf,head,head_sline,info))), "21enum.nc", 721, 1716);
    ((__right_value0) ? __right_value0 = come_decrement_ref_count(__right_value0, ((struct sNode*)__right_value0)->finalize, ((struct sNode*)__right_value0)->_protocol_obj, 1, 0,(void*)0, "21enum.nc", 721, 1717):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "21enum.nc", 721, 1718):(void*)0);
    return __result_obj__0;
}

