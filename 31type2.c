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

struct __current_stack1__
{
    _Bool* pointer_paren;
    int* paren_num;
    int* array_pointer_num;
    struct list$1sNode$ph** array;
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_32  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_33  ;
    char**  var_name_34  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
};

struct __current_stack2__
{
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_32  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_33  ;
    char**  var_name_34  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
};

struct __current_stack3__
{
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_32  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_33  ;
    char**  var_name_34  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
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
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType*  v1  , char*  v2  , _Bool v3);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
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
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*));
void method_block1_31type2nc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3);
static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer);
static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
void method_block2_31type2nc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3);
void method_block3_31type2nc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
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
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_type"; neo_current_frame = &fr;
    char* head;
    int head_sline;
    void* __right_value0 = (void*)0;
    char*  attribute_before  ;
    char*  type_name  ;
    _Bool norecord;
    _Bool constant;
    _Bool static_;
    _Bool volatile_;
    _Bool register_;
    _Bool unsigned_;
    _Bool long_;
    _Bool long_long;
    _Bool short_;
    _Bool restrict_;
    _Bool struct_;
    _Bool union_;
    _Bool enum_;
    _Bool no_heap;
    _Bool extern_;
    _Bool inline_;
    _Bool uniq_;
    _Bool tuple_;
    _Bool original_var_name;
    _Bool complex_;
    _Bool type_name_;
    _Bool noreturn_;
    _Bool weak_;
    struct sNode* alignas_;
    _Bool alignas_double;
    char*  tag_attribute  ;
    _Bool struct_define_parsed;
    _Bool anonymous_type;
    _Bool anonymous_name;
    _Bool atomic_;
    _Bool thread_local;
    _Bool thread_;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj1  ;
    char*  __dec_obj2  ;
    char*  __dec_obj3  ;
    char*  __dec_obj4  ;
    char*  __dec_obj5  ;
    char*  __dec_obj6  ;
    char*  __dec_obj7  ;
    struct buffer*  attr  ;
    char* p;
    char* tail;
    char*  attr_str  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj8  ;
    char*  __dec_obj9  ;
    char*  __dec_obj10  ;
    char*  attr_0  ;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    struct sNode* __dec_obj18;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    char* p_1;
    int sline;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    char*  struct_attribute_after_name  ;
    char*  __dec_obj31  ;
    char* p_2;
    int sline_3;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    char*  struct_attribute_after_generics  ;
    char*  __dec_obj34  ;
    char* p_4;
    int sline_5;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj35  ;
    char* p_6;
    int sline_7;
    char*  __dec_obj36  ;
    char*  __dec_obj37  ;
    char*  __dec_obj38  ;
    char* p_8;
    int sline_9;
    struct tuple2$2char$phchar$ph* multiple_assign_var1
;    char*  asm_name  =0;
    char*  enum_attribute  =0;
    char*  __dec_obj39  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char* p_10;
    int sline_11;
    char*  __dec_obj40  ;
    char*  __dec_obj41  ;
    char*  enum_attribute_after_name  ;
    char*  __dec_obj42  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  type_12  =0;
    char*  name_13  =0;
    _Bool err_14=0;
    char*  enum_attribute_after_type  ;
    char*  __dec_obj43  ;
    char* p_15;
    int sline_16;
    char* p_17;
    int sline_18;
    char*  __dec_obj44  ;
    char* p2;
    int sline2;
    char*  __dec_obj45  ;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    char*  __dec_obj48  ;
    char*  __dec_obj49  ;
    char*  __dec_obj50  ;
    char*  __dec_obj51  ;
    char* p_19;
    int sline_20;
    char*  __dec_obj52  ;
    char*  __dec_obj53  ;
    char*  __dec_obj54  ;
    char* p_21;
    int sline_22;
    char*  __dec_obj55  ;
    char* p_23;
    int sline_24;
    char*  __dec_obj56  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    char* p_25;
    int sline_26;
    char*  __dec_obj59  ;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    char*  __dec_obj63  ;
    char* p_27;
    int sline_28;
    char*  __dec_obj64  ;
    char*  __dec_obj65  ;
    char*  __dec_obj66  ;
    char*  __dec_obj67  ;
    char*  __dec_obj68  ;
    char*  __dec_obj69  ;
    char* p_29;
    int sline_30;
    char*  __dec_obj70  ;
    char*  __dec_obj71  ;
    char*  __dec_obj72  ;
    _Bool no_comma;
    struct sNode* exp;
    struct sType*  type_31  ;
    struct sNode* __dec_obj73;
    char*  var_name  ;
    struct sType*  __dec_obj74  ;
    char*  attribute  ;
    char*  __dec_obj75  ;
    char*  attribute_32  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    char*  __dec_obj79  ;
    int pointer_num;
    char*  pointer_attribute  ;
    _Bool heap;
    _Bool refference;
    _Bool no_refference;
    _Bool channel;
    _Bool deffer_;
    _Bool any_class;
    _Bool vtable;
    char*  pointer_attr  ;
    char*  __dec_obj80  ;
    char*  __dec_obj81  ;
    char*  tuple_name  ;
    char*  __dec_obj82  ;
    _Bool lambda_flag;
    char* pX;
    int slineX;
    struct sType*  type_33  ;
    char*  var_name_34  ;
    _Bool function_pointer_flag;
    _Bool pointer_to_array_flag;
    char* p_35;
    int sline_36;
    char*  word  ;
    char*  __dec_obj83  ;
    _Bool no_output_come_code;
    struct sNode* exp_37;
    char*  word_38  ;
    _Bool var_name_between_brace;
    char* p_39;
    int sline_40;
    char*  word_41  ;
    _Bool anonymous;
    char*  __dec_obj84  ;
    struct sNode* node_42;
    _Bool Value_43;
    int pointer_num_44;
    struct sType*  __dec_obj119  ;
    struct sType*  __dec_obj120  ;
    struct sClass*  klass  ;
    char*  __dec_obj121  ;
    char*  __dec_obj122  ;
    char*  __dec_obj123  ;
    struct sNode* node_53;
    _Bool Value_54;
    struct sType*  __dec_obj124  ;
    struct sType*  __dec_obj125  ;
    _Bool anonymous_55;
    char*  __dec_obj126  ;
    struct sNode* node_56;
    _Bool Value_57;
    int pointer_num_58;
    struct sType*  __dec_obj127  ;
    struct sType*  __dec_obj128  ;
    struct sClass*  klass_59  ;
    char*  __dec_obj129  ;
    char*  attribute_60  ;
    char*  __dec_obj130  ;
    struct sType*  result_type  ;
    _Bool _conditional_value_X0;
    struct sType*  __dec_obj131  ;
    int i;
    _Bool _conditional_value_X1;
    struct sType*  __dec_obj132  ;
    int i_65;
    _Bool _conditional_value_X2;
    struct sType*  __dec_obj133  ;
    struct sType*  __dec_obj134  ;
    struct sType*  __dec_obj135  ;
    struct sNode* __dec_obj136;
    char*  __dec_obj137  ;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var4
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    struct list$1sType$ph* __dec_obj140;
    struct list$1char$ph* __dec_obj141;
    _Bool pointer_paren;
    int paren_num;
    int array_pointer_num;
    struct sType*  __dec_obj142  ;
    struct sType*  __dec_obj143  ;
    struct sNode* __dec_obj144;
    char*  __dec_obj145  ;
    char*  __dec_obj146  ;
    char*  __dec_obj147  ;
    struct list$1sNode$ph* array;
    struct sNode* node_66;
    struct list$1sNode$ph* __dec_obj148;
    struct __current_stack1__ __current_stack1__;
    struct sNode* node_67;
    char*  function_pointer_attribute  ;
    int function_pointer_num;
    char*  pointer_attr_68  ;
    char*  __dec_obj149  ;
    char*  __dec_obj150  ;
    char*  pointer_attr2  ;
    char*  __dec_obj151  ;
    char*  __dec_obj152  ;
    struct sType*  result_type_69  ;
    _Bool _conditional_value_X3;
    struct sType*  __dec_obj153  ;
    int i_70;
    _Bool _conditional_value_X4;
    struct sType*  __dec_obj154  ;
    int i_71;
    _Bool _conditional_value_X5;
    struct sType*  __dec_obj155  ;
    struct sType*  __dec_obj156  ;
    struct sType*  __dec_obj157  ;
    struct sNode* __dec_obj158;
    int paren_flag;
    int array_pointer;
    char*  __dec_obj159  ;
    char*  __dec_obj160  ;
    struct sType*  __dec_obj161  ;
    struct sNode* node_72;
    struct sNode* node_73;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var5
;    struct list$1sType$ph* param_types_74=0;
    struct list$1char$ph* param_names_75=0;
    struct list$1char$ph* param_default_parametors_76=0;
    _Bool var_args_77=0;
    struct sType*  __dec_obj162  ;
    struct list$1sType$ph* __dec_obj163;
    struct list$1char$ph* __dec_obj164;
    char*  __dec_obj165  ;
    _Bool _conditional_value_X6;
    struct sType*  __dec_obj166  ;
    struct buffer*  t  ;
    struct sType*  type_  ;
    char*  __dec_obj167  ;
    struct sType*  __dec_obj168  ;
    char*  __dec_obj169  ;
    char*  __dec_obj170  ;
    struct sNode* __dec_obj171;
    char*  __dec_obj172  ;
    struct sType*  __dec_obj173  ;
    int i_78;
    _Bool _conditional_value_X7;
    struct sType*  __dec_obj174  ;
    struct sNode* __dec_obj175;
    char*  __dec_obj176  ;
    struct sType*  __dec_obj177  ;
    int i_79;
    _Bool _conditional_value_X8;
    struct sType*  __dec_obj178  ;
    struct sNode* __dec_obj179;
    char*  __dec_obj180  ;
    struct sType*  __dec_obj181  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType*  result_type_80  =0;
    char*  var_name_81  =0;
    _Bool err_82=0;
    struct sType*  __dec_obj182  ;
    struct sType*  __dec_obj186  ;
    char*  new_name  ;
    struct sNode* __dec_obj187;
    char*  __dec_obj188  ;
    char*  __dec_obj189  ;
    struct sType*  __dec_obj190  ;
    _Bool _conditional_value_X9;
    struct sType*  __dec_obj191  ;
    struct sType*  __dec_obj192  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var7
;    struct sType*  generics_type  =0;
    char*  var_name_85  =0;
    _Bool err_86=0;
    int expected_generics_num;
    struct sClass*  generics_class  ;
    struct sType*  __dec_obj193  ;
    char*  new_name_87  ;
    struct sNode* __dec_obj194;
    char*  __dec_obj195  ;
    char*  __dec_obj196  ;
    struct sType*  __dec_obj197  ;
    struct sClass*  klass_88  ;
    void* __right_value3 = (void*)0;
    struct sClass*  klass_98  ;
    struct sType*  __dec_obj201  ;
    struct sType*  __dec_obj202  ;
    struct sNode* __dec_obj203;
    char*  __dec_obj204  ;
    struct sType*  __dec_obj205  ;
    struct list$1sType$ph* types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var8
;    struct sType*  type2  =0;
    char*  name_99  =0;
    _Bool err_100=0;
    int num_tuples;
    struct sType*  __dec_obj206  ;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    struct sType*  __dec_obj207  ;
    struct sType*  __dec_obj208  ;
    char*  new_name_103  ;
    char*  __dec_obj209  ;
    char*  attribute_104  ;
    char*  __dec_obj210  ;
    char*  __dec_obj211  ;
    char*  __dec_obj212  ;
    char*  __dec_obj213  ;
    struct list$1sNode$ph* array_num_typedef;
    struct list$1sNode$ph* __dec_obj214;
    _Bool array_static;
    _Bool array_restrict;
    struct sNode* node_105;
    struct __current_stack2__ __current_stack2__;
    struct __current_stack3__ __current_stack3__;
    struct tuple2$2char$phchar$ph* multiple_assign_var9
;    char*  asm_name_110  =0;
    char*  attribute2  =0;
    char*  __dec_obj218  ;
    struct sType*  type_before  ;
    struct sType*  __dec_obj219  ;
    struct sNode* __list_values1__[1];
    struct list$1sNode$ph* __dec_obj220;
    struct sType*  __dec_obj221  ;
    char*  __dec_obj222  ;
    char*  __dec_obj223  ;
    char*  __dec_obj224  ;
    memset(&head, 0, sizeof(head));
    memset(&head_sline, 0, sizeof(head_sline));
    memset(&attribute_before, 0, sizeof(attribute_before));
    memset(&type_name, 0, sizeof(type_name));
    memset(&norecord, 0, sizeof(norecord));
    memset(&constant, 0, sizeof(constant));
    memset(&static_, 0, sizeof(static_));
    memset(&volatile_, 0, sizeof(volatile_));
    memset(&register_, 0, sizeof(register_));
    memset(&unsigned_, 0, sizeof(unsigned_));
    memset(&long_, 0, sizeof(long_));
    memset(&long_long, 0, sizeof(long_long));
    memset(&short_, 0, sizeof(short_));
    memset(&restrict_, 0, sizeof(restrict_));
    memset(&struct_, 0, sizeof(struct_));
    memset(&union_, 0, sizeof(union_));
    memset(&enum_, 0, sizeof(enum_));
    memset(&no_heap, 0, sizeof(no_heap));
    memset(&extern_, 0, sizeof(extern_));
    memset(&inline_, 0, sizeof(inline_));
    memset(&uniq_, 0, sizeof(uniq_));
    memset(&tuple_, 0, sizeof(tuple_));
    memset(&original_var_name, 0, sizeof(original_var_name));
    memset(&complex_, 0, sizeof(complex_));
    memset(&type_name_, 0, sizeof(type_name_));
    memset(&noreturn_, 0, sizeof(noreturn_));
    memset(&weak_, 0, sizeof(weak_));
    memset(&alignas_, 0, sizeof(alignas_));
    memset(&alignas_double, 0, sizeof(alignas_double));
    memset(&tag_attribute, 0, sizeof(tag_attribute));
    memset(&struct_define_parsed, 0, sizeof(struct_define_parsed));
    memset(&anonymous_type, 0, sizeof(anonymous_type));
    memset(&anonymous_name, 0, sizeof(anonymous_name));
    memset(&atomic_, 0, sizeof(atomic_));
    memset(&thread_local, 0, sizeof(thread_local));
    memset(&thread_, 0, sizeof(thread_));
    memset(&buf, 0, sizeof(buf));
    memset(&attr, 0, sizeof(attr));
    memset(&p, 0, sizeof(p));
    memset(&tail, 0, sizeof(tail));
    memset(&attr_str, 0, sizeof(attr_str));
    memset(&attr_0, 0, sizeof(attr_0));
    memset(&p_1, 0, sizeof(p_1));
    memset(&sline, 0, sizeof(sline));
    memset(&struct_attribute_after_name, 0, sizeof(struct_attribute_after_name));
    memset(&p_2, 0, sizeof(p_2));
    memset(&sline_3, 0, sizeof(sline_3));
    memset(&struct_attribute_after_generics, 0, sizeof(struct_attribute_after_generics));
    memset(&p_4, 0, sizeof(p_4));
    memset(&sline_5, 0, sizeof(sline_5));
    memset(&node, 0, sizeof(node));
    memset(&Value, 0, sizeof(Value));
    memset(&p_6, 0, sizeof(p_6));
    memset(&sline_7, 0, sizeof(sline_7));
    memset(&p_8, 0, sizeof(p_8));
    memset(&sline_9, 0, sizeof(sline_9));
    memset(&p_10, 0, sizeof(p_10));
    memset(&sline_11, 0, sizeof(sline_11));
    memset(&enum_attribute_after_name, 0, sizeof(enum_attribute_after_name));
    memset(&enum_attribute_after_type, 0, sizeof(enum_attribute_after_type));
    memset(&p_15, 0, sizeof(p_15));
    memset(&sline_16, 0, sizeof(sline_16));
    memset(&p_17, 0, sizeof(p_17));
    memset(&sline_18, 0, sizeof(sline_18));
    memset(&p2, 0, sizeof(p2));
    memset(&sline2, 0, sizeof(sline2));
    memset(&p_19, 0, sizeof(p_19));
    memset(&sline_20, 0, sizeof(sline_20));
    memset(&p_21, 0, sizeof(p_21));
    memset(&sline_22, 0, sizeof(sline_22));
    memset(&p_23, 0, sizeof(p_23));
    memset(&sline_24, 0, sizeof(sline_24));
    memset(&p_25, 0, sizeof(p_25));
    memset(&sline_26, 0, sizeof(sline_26));
    memset(&p_27, 0, sizeof(p_27));
    memset(&sline_28, 0, sizeof(sline_28));
    memset(&p_29, 0, sizeof(p_29));
    memset(&sline_30, 0, sizeof(sline_30));
    memset(&no_comma, 0, sizeof(no_comma));
    memset(&exp, 0, sizeof(exp));
    memset(&type_31, 0, sizeof(type_31));
    memset(&var_name, 0, sizeof(var_name));
    memset(&attribute, 0, sizeof(attribute));
    memset(&attribute_32, 0, sizeof(attribute_32));
    memset(&pointer_num, 0, sizeof(pointer_num));
    memset(&pointer_attribute, 0, sizeof(pointer_attribute));
    memset(&heap, 0, sizeof(heap));
    memset(&refference, 0, sizeof(refference));
    memset(&no_refference, 0, sizeof(no_refference));
    memset(&channel, 0, sizeof(channel));
    memset(&deffer_, 0, sizeof(deffer_));
    memset(&any_class, 0, sizeof(any_class));
    memset(&vtable, 0, sizeof(vtable));
    memset(&pointer_attr, 0, sizeof(pointer_attr));
    memset(&tuple_name, 0, sizeof(tuple_name));
    memset(&lambda_flag, 0, sizeof(lambda_flag));
    memset(&pX, 0, sizeof(pX));
    memset(&slineX, 0, sizeof(slineX));
    memset(&type_33, 0, sizeof(type_33));
    memset(&var_name_34, 0, sizeof(var_name_34));
    memset(&function_pointer_flag, 0, sizeof(function_pointer_flag));
    memset(&pointer_to_array_flag, 0, sizeof(pointer_to_array_flag));
    memset(&p_35, 0, sizeof(p_35));
    memset(&sline_36, 0, sizeof(sline_36));
    memset(&word, 0, sizeof(word));
    memset(&no_output_come_code, 0, sizeof(no_output_come_code));
    memset(&exp_37, 0, sizeof(exp_37));
    memset(&word_38, 0, sizeof(word_38));
    memset(&var_name_between_brace, 0, sizeof(var_name_between_brace));
    memset(&p_39, 0, sizeof(p_39));
    memset(&sline_40, 0, sizeof(sline_40));
    memset(&word_41, 0, sizeof(word_41));
    memset(&anonymous, 0, sizeof(anonymous));
    memset(&node_42, 0, sizeof(node_42));
    memset(&Value_43, 0, sizeof(Value_43));
    memset(&pointer_num_44, 0, sizeof(pointer_num_44));
    memset(&klass, 0, sizeof(klass));
    memset(&node_53, 0, sizeof(node_53));
    memset(&Value_54, 0, sizeof(Value_54));
    memset(&anonymous_55, 0, sizeof(anonymous_55));
    memset(&node_56, 0, sizeof(node_56));
    memset(&Value_57, 0, sizeof(Value_57));
    memset(&pointer_num_58, 0, sizeof(pointer_num_58));
    memset(&klass_59, 0, sizeof(klass_59));
    memset(&attribute_60, 0, sizeof(attribute_60));
    memset(&result_type, 0, sizeof(result_type));
    memset(&i, 0, sizeof(i));
    memset(&i_65, 0, sizeof(i_65));
    memset(&pointer_paren, 0, sizeof(pointer_paren));
    memset(&paren_num, 0, sizeof(paren_num));
    memset(&array_pointer_num, 0, sizeof(array_pointer_num));
    memset(&array, 0, sizeof(array));
    memset(&node_66, 0, sizeof(node_66));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&node_67, 0, sizeof(node_67));
    memset(&function_pointer_attribute, 0, sizeof(function_pointer_attribute));
    memset(&function_pointer_num, 0, sizeof(function_pointer_num));
    memset(&pointer_attr_68, 0, sizeof(pointer_attr_68));
    memset(&pointer_attr2, 0, sizeof(pointer_attr2));
    memset(&result_type_69, 0, sizeof(result_type_69));
    memset(&i_70, 0, sizeof(i_70));
    memset(&i_71, 0, sizeof(i_71));
    memset(&paren_flag, 0, sizeof(paren_flag));
    memset(&array_pointer, 0, sizeof(array_pointer));
    memset(&node_72, 0, sizeof(node_72));
    memset(&node_73, 0, sizeof(node_73));
    memset(&t, 0, sizeof(t));
    memset(&type_, 0, sizeof(type_));
    memset(&i_78, 0, sizeof(i_78));
    memset(&i_79, 0, sizeof(i_79));
    memset(&new_name, 0, sizeof(new_name));
    memset(&expected_generics_num, 0, sizeof(expected_generics_num));
    memset(&generics_class, 0, sizeof(generics_class));
    memset(&new_name_87, 0, sizeof(new_name_87));
    memset(&klass_88, 0, sizeof(klass_88));
    memset(&klass_98, 0, sizeof(klass_98));
    memset(&types, 0, sizeof(types));
    memset(&num_tuples, 0, sizeof(num_tuples));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    memset(&new_name_103, 0, sizeof(new_name_103));
    memset(&attribute_104, 0, sizeof(attribute_104));
    memset(&array_num_typedef, 0, sizeof(array_num_typedef));
    memset(&array_static, 0, sizeof(array_static));
    memset(&array_restrict, 0, sizeof(array_restrict));
    memset(&node_105, 0, sizeof(node_105));
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    memset(&type_before, 0, sizeof(type_before));
    # 5 "31type2.nc"
    head=info->p;
    # 6 "31type2.nc"
    head_sline=info->sline;
    # 8 "31type2.nc"
    attribute_before=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 8, 1);
    # 9 "31type2.nc"
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 9, 2);
    # 11 "31type2.nc"
    norecord=(_Bool)0;
    # 12 "31type2.nc"
    constant=(_Bool)0;
    # 13 "31type2.nc"
    static_=(_Bool)0;
    # 14 "31type2.nc"
    volatile_=(_Bool)0;
    # 15 "31type2.nc"
    register_=(_Bool)0;
    # 16 "31type2.nc"
    unsigned_=(_Bool)0;
    # 17 "31type2.nc"
    long_=(_Bool)0;
    # 18 "31type2.nc"
    long_long=(_Bool)0;
    # 19 "31type2.nc"
    short_=(_Bool)0;
    # 20 "31type2.nc"
    restrict_=(_Bool)0;
    # 21 "31type2.nc"
    struct_=(_Bool)0;
    # 22 "31type2.nc"
    union_=(_Bool)0;
    # 23 "31type2.nc"
    enum_=(_Bool)0;
    # 24 "31type2.nc"
    no_heap=(_Bool)0;
    # 25 "31type2.nc"
    extern_=(_Bool)0;
    # 26 "31type2.nc"
    inline_=(_Bool)0;
    # 27 "31type2.nc"
    uniq_=(_Bool)0;
    # 28 "31type2.nc"
    tuple_=(_Bool)0;
    # 29 "31type2.nc"
    original_var_name=(_Bool)0;
    # 30 "31type2.nc"
    complex_=(_Bool)0;
    # 31 "31type2.nc"
    type_name_=(_Bool)0;
    # 32 "31type2.nc"
    noreturn_=(_Bool)0;
    # 33 "31type2.nc"
    weak_=(_Bool)0;
    # 35 "31type2.nc"
    alignas_=((void*)0);
    # 36 "31type2.nc"
    alignas_double=(_Bool)0;
    # 38 "31type2.nc"
    __right_value0 = (void*)0;
    tag_attribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 38, 3);
    # 39 "31type2.nc"
    struct_define_parsed=(_Bool)0;
    # 41 "31type2.nc"
    anonymous_type=(_Bool)0;
    # 42 "31type2.nc"
    anonymous_name=(_Bool)0;
    # 43 "31type2.nc"
    atomic_=(_Bool)0;
    # 44 "31type2.nc"
    thread_local=(_Bool)0;
    # 45 "31type2.nc"
    thread_=(_Bool)0;
    # 702 "31type2.nc"
    while((_Bool)1) {
        # 700 "31type2.nc"
        if(string_operator_equals(type_name,"__type__")) {
            # 53 "31type2.nc"
            if(*info->p==40) {
                # 49 "31type2.nc"
                info->p++;
                # 50 "31type2.nc"
                skip_spaces_and_lf(info);
            }
            # 53 "31type2.nc"
            __right_value0 = (void*)0;
            buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "31type2.nc", 53, 4, "struct buffer* "), "31type2.nc", 53, 5)), "31type2.nc", 53, 6);
            # 65 "31type2.nc"
            while(*info->p) {
                # 64 "31type2.nc"
                if(*info->p==41) {
                    # 56 "31type2.nc"
                    info->p++;
                    # 57 "31type2.nc"
                    skip_spaces_and_lf(info);
                    # 58 "31type2.nc"
                    break;
                }
                else {
                    # 61 "31type2.nc"
                    buffer_append_char(buf,*info->p);
                    # 62 "31type2.nc"
                    info->p++;
                }
            }
            # 65 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj1=type_name,
            type_name=(char* )come_increment_ref_count(buffer_to_string(buf), "31type2.nc", 65, 8);
            __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 65, 7);
            # 67 "31type2.nc"
            type_name_=(_Bool)1;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 700, 9);
        }
        else if(string_operator_equals(type_name,"_Thread_local")) {
            # 70 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj2=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 70, 11);
            __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 70, 10);
            # 71 "31type2.nc"
            thread_local=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_norecord")) {
            # 74 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj3=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 74, 13);
            __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 74, 12);
            # 75 "31type2.nc"
            norecord=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_weak")) {
            # 78 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj4=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 78, 15);
            __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 78, 14);
            # 79 "31type2.nc"
            weak_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__thread")) {
            # 82 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj5=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 82, 17);
            __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 82, 16);
            # 83 "31type2.nc"
            thread_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Atomic")) {
            # 89 "31type2.nc"
            if(*info->p==40) {
                # 87 "31type2.nc"
                expected_next_character(40,info);
            }
            # 89 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj6=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 89, 19);
            __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 89, 18);
            # 90 "31type2.nc"
            atomic_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__extension__")) {
            # 93 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj7=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 93, 21);
            __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 93, 20);
        }
        else if(string_operator_equals(type_name,"__attribute__")) {
            # 96 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            attr=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "31type2.nc", 96, 22, "struct buffer* "), "31type2.nc", 96, 23)), "31type2.nc", 96, 24);
            # 97 "31type2.nc"
            buffer_append_str(attr,"__attribute__");
            # 99 "31type2.nc"
            skip_spaces_and_lf(info);
            # 109 "31type2.nc"
            if(*info->p==40) {
                # 102 "31type2.nc"
                p=info->p;
                # 103 "31type2.nc"
                skip_paren(info);
                # 104 "31type2.nc"
                tail=info->p;
                # 106 "31type2.nc"
                buffer_append(attr,p,tail-p);
            }
            # 109 "31type2.nc"
            __right_value0 = (void*)0;
            attr_str=(char* )come_increment_ref_count(buffer_to_string(attr), "31type2.nc", 109, 25);
            # 117 "31type2.nc"
            if(string_operator_not_equals(attribute_before,"")) {
                # 111 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj8=attribute_before,
                attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attr_str), "31type2.nc", 111, 27);
                __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 111, 26);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 111, 28));
            }
            else {
                # 114 "31type2.nc"
                __dec_obj9=attribute_before,
                attribute_before=(char* )come_increment_ref_count(attr_str, "31type2.nc", 114, 30);
                __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 114, 29);
            }
            # 117 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj10=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 117, 32);
            __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 117, 31);
            come_call_finalizer(buffer_finalize, attr, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 700, 33);
            (attr_str = come_decrement_ref_count(attr_str, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 34));
        }
        else if(string_operator_equals(type_name,"__declspec")) {
            # 120 "31type2.nc"
            __right_value0 = (void*)0;
            attr_0=(char* )come_increment_ref_count(parse_declspec_attribute(info), "31type2.nc", 120, 35);
            # 130 "31type2.nc"
            if(string_operator_not_equals(attr_0,"")) {
                # 128 "31type2.nc"
                if(string_operator_not_equals(attribute_before,"")) {
                    # 123 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj11=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attr_0), "31type2.nc", 123, 37);
                    __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 123, 36);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 123, 38));
                }
                else {
                    # 126 "31type2.nc"
                    __dec_obj12=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(attr_0, "31type2.nc", 126, 40);
                    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 126, 39);
                }
            }
            # 130 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj13=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 130, 42);
            __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 130, 41);
            (attr_0 = come_decrement_ref_count(attr_0, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 43));
        }
        else if(string_operator_equals(type_name,"_Noreturn")) {
            # 133 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj14=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 133, 45);
            __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 133, 44);
            # 134 "31type2.nc"
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__noreturn")) {
            # 137 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj15=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 137, 47);
            __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 137, 46);
            # 138 "31type2.nc"
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Nullable")) {
            # 141 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj16=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 141, 49);
            __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 141, 48);
        }
        else if(string_operator_equals(type_name,"_noreturn")) {
            # 144 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj17=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 144, 51);
            __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 144, 50);
            # 145 "31type2.nc"
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Alignas")) {
            # 148 "31type2.nc"
            expected_next_character(40,info);
            # 159 "31type2.nc"
            if((info->end-info->p)>strlen("double")&&memcmp(info->p,"double",strlen("double"))==0) {
                # 152 "31type2.nc"
                __right_value0 = (void*)0;
                (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 152, 52));
                # 153 "31type2.nc"
                alignas_double=(_Bool)1;
            }
            else {
                # 156 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj18=alignas_,
                alignas_=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 156, 54);
                (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 156, 53) :0);
            }
            # 159 "31type2.nc"
            expected_next_character(41,info);
            # 161 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj19=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 161, 56);
            __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 161, 55);
        }
        else if(string_operator_equals(type_name,"const")) {
            # 164 "31type2.nc"
            constant=(_Bool)1;
            # 166 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj20=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 166, 58);
            __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 166, 57);
        }
        else if(string_operator_equals(type_name,"_Complex")) {
            # 169 "31type2.nc"
            complex_=(_Bool)1;
            # 171 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj21=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 171, 60);
            __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 171, 59);
        }
        else if(string_operator_equals(type_name,"static")) {
            # 174 "31type2.nc"
            static_=(_Bool)1;
            # 176 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj22=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 176, 62);
            __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 176, 61);
        }
        else if(string_operator_equals(type_name,"uniq")) {
            # 179 "31type2.nc"
            uniq_=(_Bool)1;
            # 181 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj23=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 181, 64);
            __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 181, 63);
        }
        else if(string_operator_equals(type_name,"extern")) {
            # 184 "31type2.nc"
            extern_=(_Bool)1;
            # 186 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj24=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 186, 66);
            __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 186, 65);
        }
        else if(string_operator_equals(type_name,"inline")||string_operator_equals(type_name,"__inline")||string_operator_equals(type_name,"__inline__")||string_operator_equals(type_name,"__always_inline")||string_operator_equals(type_name,"__forceinline")) {
            # 190 "31type2.nc"
            inline_=(_Bool)1;
            # 192 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj25=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 192, 68);
            __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 192, 67);
        }
        else if(string_operator_equals(type_name,"volatile")||string_operator_equals(type_name,"__volatile__")) {
            # 195 "31type2.nc"
            volatile_=(_Bool)1;
            # 197 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj26=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 197, 70);
            __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 197, 69);
        }
        else if(string_operator_equals(type_name,"struct")) {
            # 200 "31type2.nc"
            struct_=(_Bool)1;
            # 201 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj27=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 201, 71),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 201, 72)), "31type2.nc", 201, 74);
            __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 201, 73);
            # 228 "31type2.nc"
            if(*info->p==123) {
                # 204 "31type2.nc"
                p_1=info->p;
                # 205 "31type2.nc"
                sline=info->sline;
                # 207 "31type2.nc"
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 207, 75));
                # 226 "31type2.nc"
                if(*info->p==59) {
                    # 210 "31type2.nc"
                    anonymous_name=(_Bool)1;
                    # 211 "31type2.nc"
                    anonymous_type=(_Bool)1;
                    # 212 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj28=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",212), "31type2.nc", 212, 77);
                    __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 212, 76);
                    # 213 "31type2.nc"
                    info->p=p_1;
                    # 214 "31type2.nc"
                    info->sline=sline;
                    # 215 "31type2.nc"
                    struct_define_parsed=(_Bool)1;
                    # 216 "31type2.nc"
                    break;
                }
                else {
                    # 219 "31type2.nc"
                    anonymous_type=(_Bool)1;
                    # 220 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj29=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",220), "31type2.nc", 220, 79);
                    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 220, 78);
                    # 221 "31type2.nc"
                    info->p=p_1;
                    # 222 "31type2.nc"
                    info->sline=sline;
                    # 223 "31type2.nc"
                    struct_define_parsed=(_Bool)1;
                    # 224 "31type2.nc"
                    break;
                }
            }
            # 228 "31type2.nc"
            skip_spaces_and_lf(info);
            # 298 "31type2.nc"
            if(*info->p!=62) {
                # 231 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj30=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 231, 81);
                __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 231, 80);
                # 233 "31type2.nc"
                skip_spaces_and_lf(info);
                # 235 "31type2.nc"
                __right_value0 = (void*)0;
                struct_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 235, 82);
                # 236 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj31=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 236, 83),(char* )come_increment_ref_count(struct_attribute_after_name, "31type2.nc", 236, 84)), "31type2.nc", 236, 86);
                __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 236, 85);
                # 268 "31type2.nc"
                if(*info->p==60) {
                    # 239 "31type2.nc"
                    p_2=info->p;
                    # 240 "31type2.nc"
                    sline_3=info->sline;
                    # 242 "31type2.nc"
                    info->p++;
                    # 243 "31type2.nc"
                    skip_spaces_and_lf(info);
                    # 266 "31type2.nc"
                    while((_Bool)1) {
                        # 265 "31type2.nc"
                        if(*info->p==62) {
                            # 247 "31type2.nc"
                            info->p++;
                            # 248 "31type2.nc"
                            skip_spaces_and_lf(info);
                            # 256 "31type2.nc"
                            if(*info->p==123) {
                            }
                            else {
                                # 253 "31type2.nc"
                                info->p=p_2;
                                # 254 "31type2.nc"
                                info->sline=sline_3;
                            }
                            # 256 "31type2.nc"
                            break;
                        }
                        else if(*info->p==0) {
                            # 259 "31type2.nc"
                            err_msg(info,"invalid struct definition");
                            # 260 "31type2.nc"
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 260, 87, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1757, 131),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1757, 132),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1757, 133),(_Bool)0))), "31type2.nc", 260, 134);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 135));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 136));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 137));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 260, 138):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 139));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1757, 140);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 260, 141);
                            return __result_obj__0;
                        }
                        else {
                            # 263 "31type2.nc"
                            info->p++;
                        }
                    }
                }
                # 268 "31type2.nc"
                __right_value0 = (void*)0;
                struct_attribute_after_generics=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 268, 142);
                # 269 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj34=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 269, 143),(char* )come_increment_ref_count(struct_attribute_after_generics, "31type2.nc", 269, 144)), "31type2.nc", 269, 146);
                __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 269, 145);
                # 297 "31type2.nc"
                if(*info->p==123) {
                    # 272 "31type2.nc"
                    p_4=info->p;
                    # 273 "31type2.nc"
                    sline_5=info->sline;
                    # 275 "31type2.nc"
                    __right_value0 = (void*)0;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 275, 147));
                    # 277 "31type2.nc"
                    __right_value0 = (void*)0;
                    (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 277, 148));
                    # 296 "31type2.nc"
                    if(*info->p==59) {
                        # 280 "31type2.nc"
                        info->p=head;
                        # 281 "31type2.nc"
                        info->sline=head_sline;
                        # 282 "31type2.nc"
                                                __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 282, 149, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 282, 150),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 282, 151),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 282, 152),(_Bool)0))), "31type2.nc", 282, 153);
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 154));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 155));
                        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 156));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 157));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 282, 158):(void*)0);
                        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 159));
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 282, 160);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 282, 161);
                        return __result_obj__0;
                    }
                    else {
                        # 285 "31type2.nc"
                        info->p=p_4;
                        # 286 "31type2.nc"
                        info->sline=sline_5;
                        # 288 "31type2.nc"
                        __right_value0 = (void*)0;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name, "31type2.nc", 288, 162),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 288, 163),info,(_Bool)0), "31type2.nc", 288, 164);
                        # 293 "31type2.nc"
                        Value=node_compile(node,info);
                        if(!Value) {
                            # 291 "31type2.nc"
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 291, 165, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 291, 166),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 291, 167),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 291, 168),(_Bool)0))), "31type2.nc", 291, 169);
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 291, 170):(void*)0);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 171));
                            (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 172));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 173));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 174));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 291, 175):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 176));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 291, 177);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 291, 178);
                            return __result_obj__0;
                        }
                        # 293 "31type2.nc"
                        struct_define_parsed=(_Bool)1;
                        # 294 "31type2.nc"
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 294, 179):(void*)0);
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 294, 180));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 294, 181));
                        break;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 296, 182):(void*)0);
                    }
                }
                (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 298, 183));
                (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 298, 184));
            }
        }
        else if(string_operator_equals(type_name,"union")) {
            # 300 "31type2.nc"
            union_=(_Bool)1;
            # 301 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj35=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 301, 185),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 301, 186)), "31type2.nc", 301, 188);
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 301, 187);
            # 331 "31type2.nc"
            if(*info->p==123) {
                # 304 "31type2.nc"
                p_6=info->p;
                # 305 "31type2.nc"
                sline_7=info->sline;
                # 307 "31type2.nc"
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 307, 189));
                # 313 "31type2.nc"
                if((info->end-info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    # 310 "31type2.nc"
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 310, 192);
                }
                # 329 "31type2.nc"
                if(*info->p==59) {
                    # 314 "31type2.nc"
                    info->p=head;
                    # 315 "31type2.nc"
                    info->sline=head_sline;
                    # 316 "31type2.nc"
                    anonymous_type=(_Bool)1;
                    # 317 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj36=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",317), "31type2.nc", 317, 194);
                    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 317, 193);
                    # 318 "31type2.nc"
                    info->p=p_6;
                    # 319 "31type2.nc"
                    info->sline=sline_7;
                    # 320 "31type2.nc"
                    break;
                }
                else {
                    # 323 "31type2.nc"
                    anonymous_type=(_Bool)1;
                    # 324 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj37=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",324), "31type2.nc", 324, 196);
                    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 324, 195);
                    # 325 "31type2.nc"
                    info->p=p_6;
                    # 326 "31type2.nc"
                    info->sline=sline_7;
                    # 327 "31type2.nc"
                    break;
                }
            }
            # 331 "31type2.nc"
            skip_spaces_and_lf(info);
            # 333 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj38=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 333, 198);
            __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 333, 197);
            # 335 "31type2.nc"
            skip_spaces_and_lf(info);
            # 355 "31type2.nc"
            if(*info->p==123) {
                # 338 "31type2.nc"
                p_8=info->p;
                # 339 "31type2.nc"
                sline_9=info->sline;
                # 341 "31type2.nc"
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 341, 199));
                # 354 "31type2.nc"
                if(*info->p==59) {
                    # 344 "31type2.nc"
                    info->p=head;
                    # 345 "31type2.nc"
                    info->sline=head_sline;
                    # 346 "31type2.nc"
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 346, 200, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 346, 201),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 346, 202),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 346, 203),(_Bool)0))), "31type2.nc", 346, 204);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 346, 205));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 346, 206));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 346, 207):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 346, 208));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 346, 209);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 346, 210);
                    return __result_obj__0;
                }
                else {
                    # 349 "31type2.nc"
                    anonymous_type=(_Bool)1;
                    # 350 "31type2.nc"
                    info->p=p_8;
                    # 351 "31type2.nc"
                    info->sline=sline_9;
                    # 352 "31type2.nc"
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name,"enum")) {
            # 357 "31type2.nc"
            enum_=(_Bool)1;
            # 359 "31type2.nc"
            skip_spaces_and_lf(info);
            # 361 "31type2.nc"
            __right_value0 = (void*)0;
            multiple_assign_var1=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            asm_name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "31type2.nc", 361, 211);
            enum_attribute=(char* )come_increment_ref_count(multiple_assign_var1->v2, "31type2.nc", 361, 212);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 361, 213);
            # 362 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj39=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 362, 214),(char* )come_increment_ref_count(enum_attribute, "31type2.nc", 362, 215)), "31type2.nc", 362, 217);
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 362, 216);
            # 371 "31type2.nc"
            if(*info->p==58) {
                # 365 "31type2.nc"
                info->p++;
                # 366 "31type2.nc"
                skip_spaces_and_lf(info);
                # 368 "31type2.nc"
                __right_value0 = (void*)0;
                multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "31type2.nc", 368, 218);
                name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "31type2.nc", 368, 219);
                err=multiple_assign_var2->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 368, 220);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 371, 221);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 371, 222));
            }
            # 371 "31type2.nc"
            skip_spaces_and_lf(info);
            # 398 "31type2.nc"
            if(*info->p==123) {
                # 374 "31type2.nc"
                p_10=info->p;
                # 375 "31type2.nc"
                sline_11=info->sline;
                # 377 "31type2.nc"
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 377, 223));
                # 383 "31type2.nc"
                if((info->end-info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    # 380 "31type2.nc"
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 380, 224);
                }
                # 396 "31type2.nc"
                if(*info->p==59) {
                    # 384 "31type2.nc"
                    info->p=head;
                    # 385 "31type2.nc"
                    info->sline=head_sline;
                    # 386 "31type2.nc"
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 386, 225, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 386, 226),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 386, 227),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 386, 228),(_Bool)0))), "31type2.nc", 386, 229);
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 230));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 231));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 232));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 233));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 386, 234):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 235));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 386, 236);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 386, 237);
                    return __result_obj__0;
                }
                else {
                    # 389 "31type2.nc"
                    anonymous_type=(_Bool)1;
                    # 390 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj40=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",390), "31type2.nc", 390, 239);
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 390, 238);
                    # 391 "31type2.nc"
                    info->p=p_10;
                    # 392 "31type2.nc"
                    info->sline=sline_11;
                    # 393 "31type2.nc"
                    struct_define_parsed=(_Bool)1;
                    # 394 "31type2.nc"
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 394, 240));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 394, 241));
                    break;
                }
            }
            # 398 "31type2.nc"
            skip_spaces_and_lf(info);
            # 400 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj41=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 400, 243);
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 400, 242);
            # 402 "31type2.nc"
            skip_spaces_and_lf(info);
            # 404 "31type2.nc"
            __right_value0 = (void*)0;
            enum_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 404, 244);
            # 405 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj42=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 405, 245),(char* )come_increment_ref_count(enum_attribute_after_name, "31type2.nc", 405, 246)), "31type2.nc", 405, 248);
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 405, 247);
            # 414 "31type2.nc"
            if(*info->p==58) {
                # 408 "31type2.nc"
                info->p++;
                # 409 "31type2.nc"
                skip_spaces_and_lf(info);
                # 411 "31type2.nc"
                __right_value0 = (void*)0;
                multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_12=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "31type2.nc", 411, 249);
                name_13=(char* )come_increment_ref_count(multiple_assign_var3->v2, "31type2.nc", 411, 250);
                err_14=multiple_assign_var3->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 411, 251);
                come_call_finalizer(sType_finalize, type_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 414, 252);
                (name_13 = come_decrement_ref_count(name_13, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 414, 253));
            }
            # 414 "31type2.nc"
            skip_spaces_and_lf(info);
            # 416 "31type2.nc"
            __right_value0 = (void*)0;
            enum_attribute_after_type=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 416, 254);
            # 417 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj43=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 417, 255),(char* )come_increment_ref_count(enum_attribute_after_type, "31type2.nc", 417, 256)), "31type2.nc", 417, 258);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 417, 257);
            # 438 "31type2.nc"
            if(*info->p==123) {
                # 420 "31type2.nc"
                p_15=info->p;
                # 421 "31type2.nc"
                sline_16=info->sline;
                # 423 "31type2.nc"
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 423, 259));
                # 437 "31type2.nc"
                if(*info->p==59) {
                    # 426 "31type2.nc"
                    info->p=head;
                    # 427 "31type2.nc"
                    info->sline=head_sline;
                    # 428 "31type2.nc"
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 428, 260, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 428, 261),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 428, 262),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 428, 263),(_Bool)0))), "31type2.nc", 428, 264);
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 265));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 266));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 267));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 268));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 269));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 270));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 428, 271):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 272));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 428, 273);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 428, 274);
                    return __result_obj__0;
                }
                else {
                    # 431 "31type2.nc"
                    anonymous_type=(_Bool)1;
                    # 432 "31type2.nc"
                    info->p=p_15;
                    # 433 "31type2.nc"
                    info->sline=sline_16;
                    # 434 "31type2.nc"
                    struct_define_parsed=(_Bool)1;
                    # 435 "31type2.nc"
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 275));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 276));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 277));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 278));
                    break;
                }
            }
            (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 279));
            (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 280));
            (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 281));
            (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 282));
        }
        else if(string_operator_equals(type_name,"long")) {
            # 526 "31type2.nc"
            {
                # 442 "31type2.nc"
                p_17=info->p;
                # 443 "31type2.nc"
                sline_18=info->sline;
                # 525 "31type2.nc"
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    # 446 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj44=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",446), "31type2.nc", 446, 284);
                    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 446, 283);
                    # 447 "31type2.nc"
                    break;
                }
                else {
                    # 450 "31type2.nc"
                    p2=info->p;
                    # 451 "31type2.nc"
                    sline2=info->sline;
                    # 453 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj45=type_name,
                    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 453, 286);
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 453, 285);
                    # 524 "31type2.nc"
                    if(string_operator_equals(type_name,"double")) {
                        # 456 "31type2.nc"
                        long_=(_Bool)1;
                        # 457 "31type2.nc"
                        break;
                    }
                    else if(string_operator_equals(type_name,"unsigned")) {
                        # 460 "31type2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj46=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 460, 288);
                        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 460, 287);
                        # 467 "31type2.nc"
                        if(string_operator_equals(type_name,"int")) {
                            # 463 "31type2.nc"
                            long_=(_Bool)1;
                            # 464 "31type2.nc"
                            unsigned_=(_Bool)1;
                            # 465 "31type2.nc"
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"signed")) {
                        # 469 "31type2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj47=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 469, 290);
                        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 469, 289);
                        # 476 "31type2.nc"
                        if(string_operator_equals(type_name,"int")) {
                            # 472 "31type2.nc"
                            long_=(_Bool)1;
                            # 473 "31type2.nc"
                            unsigned_=(_Bool)0;
                            # 474 "31type2.nc"
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"long")) {
                        # 478 "31type2.nc"
                        p_17=info->p;
                        # 479 "31type2.nc"
                        sline_18=info->sline;
                        # 495 "31type2.nc"
                        if(xisalpha(*info->p)||*info->p==95) {
                            # 481 "31type2.nc"
                            long_long=(_Bool)1;
                            # 482 "31type2.nc"
                            __right_value0 = (void*)0;
                            __dec_obj48=type_name,
                            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 482, 292);
                            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 482, 291);
                        }
                        else if(*info->p==58) {
                            # 485 "31type2.nc"
                            __right_value0 = (void*)0;
                            __dec_obj49=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",485), "31type2.nc", 485, 294);
                            __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 485, 293);
                            # 486 "31type2.nc"
                            info->p=p2;
                            # 487 "31type2.nc"
                            info->sline=sline2;
                            # 488 "31type2.nc"
                            break;
                        }
                        else {
                            # 491 "31type2.nc"
                            long_=(_Bool)1;
                            # 492 "31type2.nc"
                            break;
                        }
                        # 506 "31type2.nc"
                        if(string_operator_equals(type_name,"int")) {
                            # 496 "31type2.nc"
                            long_long=(_Bool)1;
                            # 497 "31type2.nc"
                            break;
                        }
                        else if(!is_type_name(type_name,info)) {
                            # 500 "31type2.nc"
                            __right_value0 = (void*)0;
                            __dec_obj50=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",500), "31type2.nc", 500, 296);
                            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 500, 295);
                            # 501 "31type2.nc"
                            long_long=(_Bool)1;
                            # 502 "31type2.nc"
                            info->p=p_17;
                            # 503 "31type2.nc"
                            info->sline=sline_18;
                            # 504 "31type2.nc"
                            break;
                        }
                    }
                    else if(is_type_name(type_name,info)) {
                        # 515 "31type2.nc"
                        if(long_) {
                            # 509 "31type2.nc"
                            long_long=(_Bool)1;
                            # 510 "31type2.nc"
                            long_=(_Bool)0;
                        }
                        else {
                            # 513 "31type2.nc"
                            long_=(_Bool)1;
                        }
                        # 515 "31type2.nc"
                        break;
                    }
                    else {
                        # 518 "31type2.nc"
                        info->p=p_17;
                        # 519 "31type2.nc"
                        info->sline=sline_18;
                        # 521 "31type2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj51=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",521), "31type2.nc", 521, 298);
                        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 521, 297);
                        # 522 "31type2.nc"
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(type_name,"signed")) {
            # 528 "31type2.nc"
            unsigned_=(_Bool)0;
            # 549 "31type2.nc"
            if(xisalpha(*info->p)||*info->p==95) {
                # 531 "31type2.nc"
                p_19=info->p;
                # 532 "31type2.nc"
                sline_20=info->sline;
                # 534 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj52=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 534, 300);
                __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 534, 299);
                # 544 "31type2.nc"
                if(string_operator_equals(type_name,"char")||string_operator_equals(type_name,"short")||string_operator_equals(type_name,"long")||string_operator_equals(type_name,"int")) {
                }
                else {
                    # 539 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj53=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 539, 302);
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 539, 301);
                    # 540 "31type2.nc"
                    info->p=p_19;
                    # 541 "31type2.nc"
                    info->sline=sline_20;
                    # 542 "31type2.nc"
                    break;
                }
            }
            else {
                # 546 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj54=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 546, 304);
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 546, 303);
                # 547 "31type2.nc"
                break;
            }
        }
        else if(string_operator_equals(type_name,"unsigned")) {
            # 551 "31type2.nc"
            unsigned_=(_Bool)1;
            # 618 "31type2.nc"
            if(xisalpha(*info->p)||*info->p==95) {
                # 554 "31type2.nc"
                p_21=info->p;
                # 555 "31type2.nc"
                sline_22=info->sline;
                # 557 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj55=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 557, 306);
                __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 557, 305);
                # 613 "31type2.nc"
                if(string_operator_equals(type_name,"short")) {
                    # 582 "31type2.nc"
                    if(xisalpha(*info->p)||*info->p==95) {
                        # 561 "31type2.nc"
                        p_23=info->p;
                        # 562 "31type2.nc"
                        sline_24=info->sline;
                        # 564 "31type2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj56=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 564, 308);
                        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 564, 307);
                        # 576 "31type2.nc"
                        if(is_type_name(type_name,info)) {
                            # 567 "31type2.nc"
                            short_=(_Bool)1;
                        }
                        else {
                            # 570 "31type2.nc"
                            short_=(_Bool)1;
                            # 571 "31type2.nc"
                            __right_value0 = (void*)0;
                            __dec_obj57=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",571), "31type2.nc", 571, 310);
                            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 571, 309);
                            # 573 "31type2.nc"
                            info->p=p_23;
                            # 574 "31type2.nc"
                            info->sline=sline_24;
                        }
                    }
                    else {
                        # 578 "31type2.nc"
                        short_=(_Bool)1;
                        # 579 "31type2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj58=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",579), "31type2.nc", 579, 312);
                        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 579, 311);
                        # 580 "31type2.nc"
                        break;
                    }
                }
                else if(string_operator_equals(type_name,"long")) {
                    # 606 "31type2.nc"
                    if(xisalpha(*info->p)||*info->p==95) {
                        # 585 "31type2.nc"
                        p_25=info->p;
                        # 586 "31type2.nc"
                        sline_26=info->sline;
                        # 588 "31type2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj59=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 588, 314);
                        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 588, 313);
                        # 600 "31type2.nc"
                        if(is_type_name(type_name,info)) {
                            # 591 "31type2.nc"
                            long_=(_Bool)1;
                        }
                        else {
                            # 594 "31type2.nc"
                            long_=(_Bool)1;
                            # 595 "31type2.nc"
                            __right_value0 = (void*)0;
                            __dec_obj60=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",595), "31type2.nc", 595, 316);
                            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 595, 315);
                            # 597 "31type2.nc"
                            info->p=p_25;
                            # 598 "31type2.nc"
                            info->sline=sline_26;
                        }
                    }
                    else {
                        # 602 "31type2.nc"
                        long_=(_Bool)1;
                        # 603 "31type2.nc"
                        __right_value0 = (void*)0;
                        __dec_obj61=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",603), "31type2.nc", 603, 318);
                        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 603, 317);
                        # 604 "31type2.nc"
                        break;
                    }
                }
                else if(!is_type_name(type_name,info)) {
                    # 608 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj62=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",608), "31type2.nc", 608, 320);
                    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 608, 319);
                    # 609 "31type2.nc"
                    info->p=p_21;
                    # 610 "31type2.nc"
                    info->sline=sline_22;
                    # 611 "31type2.nc"
                    break;
                }
            }
            else {
                # 615 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj63=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",615), "31type2.nc", 615, 322);
                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 615, 321);
                # 616 "31type2.nc"
                break;
            }
        }
        else if(string_operator_equals(type_name,"signed")||string_operator_equals(type_name,"__signed__")) {
            # 620 "31type2.nc"
            unsigned_=(_Bool)0;
            # 622 "31type2.nc"
            p_27=info->p;
            # 623 "31type2.nc"
            sline_28=info->sline;
            # 625 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj64=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 625, 324);
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 625, 323);
            # 633 "31type2.nc"
            if(*info->p==58&&*(info->p+1)==58) {
                # 628 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj65=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",628), "31type2.nc", 628, 326);
                __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 628, 325);
                # 629 "31type2.nc"
                info->p=p_27;
                # 630 "31type2.nc"
                info->sline=sline_28;
                # 631 "31type2.nc"
                break;
            }
        }
        else if(string_operator_equals(type_name,"register")) {
            # 635 "31type2.nc"
            register_=(_Bool)1;
            # 637 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj66=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 637, 328);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 637, 327);
        }
        else if(string_operator_equals(type_name,"restrict")) {
            # 640 "31type2.nc"
            restrict_=(_Bool)1;
            # 642 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj67=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 642, 330);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 642, 329);
        }
        else if(string_operator_equals(type_name,"_Addr")) {
            # 645 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj68=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 645, 332);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 645, 331);
        }
        else if(string_operator_equals(type_name,"__restrict")) {
            # 648 "31type2.nc"
            restrict_=(_Bool)1;
            # 650 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj69=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 650, 334);
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 650, 333);
        }
        else if(string_operator_equals(type_name,"tup")) {
            # 653 "31type2.nc"
            err_msg(info,"tup shorthand was removed. use tuple2/tuple3/... explicit types");
            # 654 "31type2.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 654, 335, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 654, 336),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 654, 337),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 654, 338),(_Bool)0))), "31type2.nc", 654, 339);
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 654, 340));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 654, 341));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 654, 342):(void*)0);
            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 654, 343));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 654, 344);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 654, 345);
            return __result_obj__0;
        }
        else if(string_operator_equals(type_name,"short")) {
            # 657 "31type2.nc"
            short_=(_Bool)0;
            # 696 "31type2.nc"
            if(*info->p==58) {
                # 660 "31type2.nc"
                break;
            }
            else if(xisalnum(*info->p)) {
                # 663 "31type2.nc"
                p_29=info->p;
                # 664 "31type2.nc"
                sline_30=info->sline;
                # 665 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj70=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 665, 347);
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 665, 346);
                # 674 "31type2.nc"
                if(*info->p==58&&*(info->p+1)==58) {
                    # 668 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj71=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short","31type2.nc",668), "31type2.nc", 668, 349);
                    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 668, 348);
                    # 669 "31type2.nc"
                    info->p=p_29;
                    # 670 "31type2.nc"
                    info->sline=sline_30;
                    # 671 "31type2.nc"
                    break;
                }
                # 692 "31type2.nc"
                if(string_operator_equals(type_name,"int")) {
                    # 675 "31type2.nc"
                    short_=(_Bool)1;
                    # 676 "31type2.nc"
                    break;
                }
                else if(string_operator_equals(type_name,"short")) {
                    # 679 "31type2.nc"
                    short_=(_Bool)1;
                    # 680 "31type2.nc"
                    break;
                }
                else if(is_type_name(type_name,info)) {
                    # 683 "31type2.nc"
                    info->p=p_29;
                    # 684 "31type2.nc"
                    info->sline=sline_30;
                }
                else {
                    # 687 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj72=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short","31type2.nc",687), "31type2.nc", 687, 351);
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 687, 350);
                    # 688 "31type2.nc"
                    info->p=p_29;
                    # 689 "31type2.nc"
                    info->sline=sline_30;
                    # 690 "31type2.nc"
                    break;
                }
            }
            else {
                # 694 "31type2.nc"
                break;
            }
        }
        else {
            # 698 "31type2.nc"
            break;
        }
    }
    # 728 "31type2.nc"
    if((string_operator_equals(type_name,"typeof")||string_operator_equals(type_name,"__typeof__"))&&*info->p==40) {
        # 703 "31type2.nc"
        info->p++;
        # 704 "31type2.nc"
        skip_spaces_and_lf(info);
        # 706 "31type2.nc"
        no_comma=info->no_comma;
        # 707 "31type2.nc"
        info->no_comma=(_Bool)0;
        # 708 "31type2.nc"
        __right_value0 = (void*)0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 708, 352);
        # 709 "31type2.nc"
        info->no_comma=no_comma;
        # 711 "31type2.nc"
        expected_next_character(41,info);
        # 713 "31type2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        type_31=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 713, 353, "struct sType* "), "31type2.nc", 713, 354),(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 713, 355),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 713, 356);
        # 714 "31type2.nc"
        __dec_obj73=type_31->mTypeOfNode,
        type_31->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp, "31type2.nc", 714, 358);
        (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 714, 357) :0);
        # 716 "31type2.nc"
        var_name=((void*)0);
        # 718 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj74=type_31,
        type_31=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_31, "31type2.nc", 718, 359),info), "31type2.nc", 718, 361);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 718, 360);
        # 720 "31type2.nc"
        attribute=((void*)0);
        # 725 "31type2.nc"
        if(parse_variable_name) {
            # 723 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj75=var_name,
            var_name=(char* )come_increment_ref_count(parse_variable_name_fun(type_31,anonymous_name,(_Bool)0,(char* )come_increment_ref_count(attribute, "31type2.nc", 723, 362),info), "31type2.nc", 723, 364);
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 723, 363);
        }
        # 725 "31type2.nc"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 725, 365, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 725, 366),(struct sType* )come_increment_ref_count(type_31, "31type2.nc", 725, 367),(char* )come_increment_ref_count(var_name, "31type2.nc", 725, 368),(_Bool)1))), "31type2.nc", 725, 369);
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 725, 370):(void*)0);
        come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 725, 371);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 372));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 373));
        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 374));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 375));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 725, 376):(void*)0);
        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 377));
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 725, 378);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 725, 379);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 728, 380):(void*)0);
        come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 728, 381);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 728, 382));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 728, 383));
    }
    # 728 "31type2.nc"
    __right_value0 = (void*)0;
    attribute_32=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "31type2.nc", 728, 384);
    # 738 "31type2.nc"
    if(string_operator_not_equals(attribute_before,"")) {
        # 736 "31type2.nc"
        if(string_operator_equals(attribute_32,"")) {
            # 731 "31type2.nc"
            __dec_obj76=attribute_32,
            attribute_32=(char* )come_increment_ref_count(attribute_before, "31type2.nc", 731, 386);
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 731, 385);
        }
        else {
            # 734 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj77=attribute_32,
            attribute_32=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attribute_32), "31type2.nc", 734, 388);
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 734, 387);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 734, 389));
        }
        # 736 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj78=attribute_before,
        attribute_before=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 736, 391);
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 736, 390);
    }
    # 742 "31type2.nc"
    if(!struct_define_parsed&&(struct_||enum_)&&string_operator_not_equals(tag_attribute,"")) {
        # 739 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj79=attribute_32,
        attribute_32=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 739, 392),(char* )come_increment_ref_count(attribute_32, "31type2.nc", 739, 393)), "31type2.nc", 739, 395);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 739, 394);
    }
    # 742 "31type2.nc"
    skip_pointer_attribute(info);
    # 744 "31type2.nc"
    pointer_num=0;
    # 745 "31type2.nc"
    __right_value0 = (void*)0;
    pointer_attribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 745, 396);
    # 746 "31type2.nc"
    heap=(_Bool)0;
    # 747 "31type2.nc"
    refference=(_Bool)0;
    # 748 "31type2.nc"
    no_refference=(_Bool)0;
    # 749 "31type2.nc"
    channel=(_Bool)0;
    # 750 "31type2.nc"
    deffer_=(_Bool)0;
    # 751 "31type2.nc"
    any_class=(_Bool)0;
    # 752 "31type2.nc"
    vtable=(_Bool)0;
    # 793 "31type2.nc"
    while(1) {
        # 791 "31type2.nc"
        if(*info->p==42) {
            # 755 "31type2.nc"
            info->p++;
            # 756 "31type2.nc"
            skip_spaces_and_lf(info);
            # 757 "31type2.nc"
            __right_value0 = (void*)0;
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "31type2.nc", 757, 397);
            # 767 "31type2.nc"
            if(string_operator_not_equals(pointer_attr,"")) {
                # 765 "31type2.nc"
                if(string_operator_not_equals(pointer_attribute,"")) {
                    # 760 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj80=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(pointer_attribute," "))),pointer_attr), "31type2.nc", 760, 399);
                    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 760, 398);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 760, 400));
                }
                else {
                    # 763 "31type2.nc"
                    __dec_obj81=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(pointer_attr, "31type2.nc", 763, 402);
                    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 763, 401);
                }
            }
            # 767 "31type2.nc"
            pointer_num++;
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 791, 403));
        }
        else if(*info->p==37) {
            # 770 "31type2.nc"
            info->p++;
            # 771 "31type2.nc"
            skip_spaces_and_lf(info);
            # 773 "31type2.nc"
            heap=(_Bool)1;
        }
        else if(gComePthread&&*info->p==124) {
            # 776 "31type2.nc"
            info->p++;
            # 777 "31type2.nc"
            skip_spaces_and_lf(info);
            # 779 "31type2.nc"
            channel=(_Bool)1;
        }
        else if(*info->p==64) {
            # 782 "31type2.nc"
            info->p++;
            # 786 "31type2.nc"
            while(xisalnum(*info->p)||*info->p==95) {
                # 784 "31type2.nc"
                info->p++;
            }
            # 786 "31type2.nc"
            skip_spaces_and_lf(info);
        }
        else {
            # 789 "31type2.nc"
            break;
        }
    }
    # 793 "31type2.nc"
    skip_pointer_attribute(info);
    # 795 "31type2.nc"
    tuple_name=((void*)0);
    # 803 "31type2.nc"
    if(*info->p==58&&*(info->p+1)!=58&&tuple_) {
        # 797 "31type2.nc"
        info->p++;
        # 798 "31type2.nc"
        skip_spaces_and_lf(info);
        # 800 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj82=tuple_name,
        tuple_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 800, 405);
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 800, 404);
    }
    # 807 "31type2.nc"
    if(atomic_&&*info->p==41) {
        # 804 "31type2.nc"
        expected_next_character(41,info);
    }
    # 807 "31type2.nc"
    lambda_flag=(_Bool)0;
    # 824 "31type2.nc"
    {
        # 809 "31type2.nc"
        pX=info->p;
        # 810 "31type2.nc"
        slineX=info->sline;
        # 820 "31type2.nc"
        if(xisalpha(*info->p)||*info->p==95) {
            # 813 "31type2.nc"
            __right_value0 = (void*)0;
            (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 813, 406));
            # 818 "31type2.nc"
            if(*info->p==40&&info->in_typedef) {
                # 816 "31type2.nc"
                lambda_flag=(_Bool)1;
            }
        }
        # 820 "31type2.nc"
        info->p=pX;
        # 821 "31type2.nc"
        info->sline=slineX;
    }
    # 824 "31type2.nc"
    # 825 "31type2.nc"
    # 827 "31type2.nc"
    function_pointer_flag=(_Bool)0;
    # 828 "31type2.nc"
    pointer_to_array_flag=(_Bool)0;
    # 931 "31type2.nc"
    {
        # 830 "31type2.nc"
        p_35=info->p;
        # 831 "31type2.nc"
        sline_36=info->sline;
        # 927 "31type2.nc"
        if(*info->p==40) {
            # 834 "31type2.nc"
            info->p++;
            # 835 "31type2.nc"
            skip_spaces_and_lf(info);
            # 837 "31type2.nc"
            skip_pointer_attribute(info);
            # 844 "31type2.nc"
            if(*info->p==40) {
                # 840 "31type2.nc"
                info->p++;
                # 841 "31type2.nc"
                skip_spaces_and_lf(info);
            }
            # 925 "31type2.nc"
            if(*info->p==42||*info->p==94) {
                # 850 "31type2.nc"
                while(*info->p==42||*info->p==94) {
                    # 846 "31type2.nc"
                    info->p++;
                    # 847 "31type2.nc"
                    skip_spaces_and_lf(info);
                }
                # 850 "31type2.nc"
                function_pointer_flag=(_Bool)1;
                # 852 "31type2.nc"
                word=((void*)0);
                # 857 "31type2.nc"
                if(xisalpha(*info->p)||*info->p==95) {
                    # 854 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj83=word,
                    word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 854, 408);
                    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 854, 407);
                }
                # 912 "31type2.nc"
                if(*info->p==91) {
                    # 858 "31type2.nc"
                    pointer_to_array_flag=(_Bool)1;
                    # 879 "31type2.nc"
                    while(*info->p==91) {
                        # 860 "31type2.nc"
                        info->p++;
                        # 861 "31type2.nc"
                        skip_spaces_and_lf(info);
                        # 868 "31type2.nc"
                        if(*info->p==93) {
                            # 864 "31type2.nc"
                            info->p++;
                            # 865 "31type2.nc"
                            skip_spaces_and_lf(info);
                            # 866 "31type2.nc"
                            break;
                        }
                        # 869 "31type2.nc"
                        no_output_come_code=info->no_output_come_code;
                        # 869 "31type2.nc"
                        info->no_output_come_code=(_Bool)1;
                        # 870 "31type2.nc"
                        __right_value0 = (void*)0;
                        exp_37=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 870, 409);
                        # 871 "31type2.nc"
                        info->no_output_come_code=no_output_come_code;
                        # 877 "31type2.nc"
                        if(*info->p==93) {
                            # 874 "31type2.nc"
                            info->p++;
                            # 875 "31type2.nc"
                            skip_spaces_and_lf(info);
                        }
                        ((exp_37) ? exp_37 = come_decrement_ref_count(exp_37, ((struct sNode*)exp_37)->finalize, ((struct sNode*)exp_37)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 879, 410):(void*)0);
                    }
                    # 892 "31type2.nc"
                    if(*info->p==41) {
                        # 880 "31type2.nc"
                        info->p++;
                        # 881 "31type2.nc"
                        skip_spaces_and_lf(info);
                        # 891 "31type2.nc"
                        if(*info->p==40) {
                            # 884 "31type2.nc"
                            function_pointer_flag=(_Bool)1;
                            # 885 "31type2.nc"
                            pointer_to_array_flag=(_Bool)0;
                        }
                        else if(*info->p==91) {
                            # 888 "31type2.nc"
                            function_pointer_flag=(_Bool)0;
                            # 889 "31type2.nc"
                            pointer_to_array_flag=(_Bool)1;
                        }
                    }
                }
                else if(*info->p==41) {
                    # 894 "31type2.nc"
                    info->p++;
                    # 895 "31type2.nc"
                    skip_spaces_and_lf(info);
                    # 904 "31type2.nc"
                    if(*info->p==41) {
                        # 898 "31type2.nc"
                        info->p++;
                        # 899 "31type2.nc"
                        skip_spaces_and_lf(info);
                        # 900 "31type2.nc"
                        pointer_to_array_flag=(_Bool)1;
                        # 901 "31type2.nc"
                        function_pointer_flag=(_Bool)0;
                    }
                    # 911 "31type2.nc"
                    if(*info->p==91) {
                        # 905 "31type2.nc"
                        pointer_to_array_flag=(_Bool)1;
                        # 906 "31type2.nc"
                        function_pointer_flag=(_Bool)0;
                    }
                    else if(*info->p==40) {
                        # 909 "31type2.nc"
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 925, 411));
            }
            else if(xisalpha(*info->p)||*info->p==95) {
                # 914 "31type2.nc"
                __right_value0 = (void*)0;
                word_38=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 914, 412);
                # 924 "31type2.nc"
                if(*info->p==41) {
                    # 917 "31type2.nc"
                    info->p++;
                    # 918 "31type2.nc"
                    skip_spaces_and_lf(info);
                    # 923 "31type2.nc"
                    if(*info->p==40) {
                        # 921 "31type2.nc"
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word_38 = come_decrement_ref_count(word_38, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 925, 413));
            }
        }
        # 927 "31type2.nc"
        info->p=p_35;
        # 928 "31type2.nc"
        info->sline=sline_36;
    }
    # 931 "31type2.nc"
    var_name_between_brace=(_Bool)0;
    # 963 "31type2.nc"
    {
        # 933 "31type2.nc"
        p_39=info->p;
        # 934 "31type2.nc"
        sline_40=info->sline;
        # 958 "31type2.nc"
        if(*info->p==40) {
            # 937 "31type2.nc"
            info->p++;
            # 938 "31type2.nc"
            skip_spaces_and_lf(info);
            # 940 "31type2.nc"
            skip_pointer_attribute(info);
            # 956 "31type2.nc"
            if(xisalpha(*info->p)||*info->p==95) {
                # 943 "31type2.nc"
                __right_value0 = (void*)0;
                word_41=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 943, 414);
                # 955 "31type2.nc"
                if(is_type_name(word_41,info)) {
                }
                else if(*info->p==41) {
                    # 948 "31type2.nc"
                    info->p++;
                    # 949 "31type2.nc"
                    skip_spaces_and_lf(info);
                    # 954 "31type2.nc"
                    if(*info->p!=40) {
                        # 952 "31type2.nc"
                        var_name_between_brace=(_Bool)1;
                    }
                }
                (word_41 = come_decrement_ref_count(word_41, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 956, 415));
            }
        }
        # 958 "31type2.nc"
        info->p=p_39;
        # 959 "31type2.nc"
        info->sline=sline_40;
    }
    # 1679 "31type2.nc"
    if(anonymous_type&&*info->p==123) {
        # 964 "31type2.nc"
        static int anonymous_num=0;
        # 1070 "31type2.nc"
        if(struct_) {
            # 966 "31type2.nc"
            anonymous=(_Bool)0;
            # 972 "31type2.nc"
            if(string_operator_equals(type_name,"")) {
                # 968 "31type2.nc"
                anonymous=(_Bool)1;
                # 969 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj84=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num), "31type2.nc", 969, 417);
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 969, 416);
            }
            # 972 "31type2.nc"
            __right_value0 = (void*)0;
            node_42=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name, "31type2.nc", 972, 418),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 972, 419),info,anonymous), "31type2.nc", 972, 420);
            # 979 "31type2.nc"
            Value_43=node_compile(node_42,info);
            if(!Value_43) {
                # 975 "31type2.nc"
                err_msg(info,"parse_struct is failed");
                # 976 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 976, 421, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 976, 422),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 976, 423),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 976, 424),(_Bool)0))), "31type2.nc", 976, 425);
                ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 976, 426):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 427));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 428));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 976, 429):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 430));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 431));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 432));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 433));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 976, 434);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 435));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 976, 436);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 976, 437);
                return __result_obj__0;
            }
            # 979 "31type2.nc"
            pointer_num_44=0;
            # 990 "31type2.nc"
            while(*info->p==42) {
                # 982 "31type2.nc"
                info->p++;
                # 982 "31type2.nc"
                skip_spaces_and_lf(info);
                # 984 "31type2.nc"
                skip_pointer_attribute(info);
                # 986 "31type2.nc"
                pointer_num_44++;
            }
            # 990 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj119=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 990, 646);
            come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 990, 645);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 3, 647);
            # 995 "31type2.nc"
            if(type_33==((void*)0)) {
                # 993 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj120=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 993, 648, "struct sType* "), "31type2.nc", 993, 649),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",993), "31type2.nc", 993, 650),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 993, 652);
                come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 993, 651);
            }
            # 995 "31type2.nc"
            __right_value0 = (void*)0;
            klass=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name), "31type2.nc", 995, 691);
            # 996 "31type2.nc"
            klass->mAnonymous=(_Bool)1;
            # 997 "31type2.nc"
            type_33->mAnonymous=anonymous;
            # 998 "31type2.nc"
            type_33->mAnonymous=anonymous;
            # 999 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj121=type_33->mAnonymousName,
            type_33->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",999), "31type2.nc", 999, 693);
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 999, 692);
            # 1001 "31type2.nc"
            type_33->mPointerNum=pointer_num_44;
            ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1070, 694):(void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1070, 695);
        }
        else if(enum_) {
            # 1013 "31type2.nc"
            if(string_operator_equals(type_name,"")) {
                # 1011 "31type2.nc"
                if(info->no_output_come_code) {
                    # 1006 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj122=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num+1), "31type2.nc", 1006, 697);
                    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1006, 696);
                }
                else {
                    # 1009 "31type2.nc"
                    __right_value0 = (void*)0;
                    __dec_obj123=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num), "31type2.nc", 1009, 699);
                    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1009, 698);
                }
            }
            # 1013 "31type2.nc"
            __right_value0 = (void*)0;
            node_53=(struct sNode*)come_increment_ref_count(parse_enum((char* )come_increment_ref_count(type_name, "31type2.nc", 1013, 700),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 1013, 701),info), "31type2.nc", 1013, 702);
            # 1020 "31type2.nc"
            Value_54=node_compile(node_53,info);
            if(!Value_54) {
                # 1016 "31type2.nc"
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                # 1017 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1017, 703, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1017, 704),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1017, 705),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1017, 706),(_Bool)0))), "31type2.nc", 1017, 707);
                ((node_53) ? node_53 = come_decrement_ref_count(node_53, ((struct sNode*)node_53)->finalize, ((struct sNode*)node_53)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1017, 708):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1017, 709));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1017, 710));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1017, 711):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1017, 712));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1017, 713));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1017, 714));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1017, 715));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1017, 716);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1017, 717));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1017, 718);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1017, 719);
                return __result_obj__0;
            }
            # 1020 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj124=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1020, 721);
            come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1020, 720);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1020, 722);
            # 1025 "31type2.nc"
            if(type_33==((void*)0)) {
                # 1023 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj125=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1023, 723, "struct sType* "), "31type2.nc", 1023, 724),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1023), "31type2.nc", 1023, 725),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1023, 727);
                come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1023, 726);
            }
            ((node_53) ? node_53 = come_decrement_ref_count(node_53, ((struct sNode*)node_53)->finalize, ((struct sNode*)node_53)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1070, 728):(void*)0);
        }
        else if(union_) {
            # 1027 "31type2.nc"
            anonymous_55=(_Bool)0;
            # 1033 "31type2.nc"
            if(string_operator_equals(type_name,"")) {
                # 1029 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj126=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num), "31type2.nc", 1029, 730);
                __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1029, 729);
                # 1030 "31type2.nc"
                anonymous_55=(_Bool)1;
            }
            # 1033 "31type2.nc"
            __right_value0 = (void*)0;
            node_56=(struct sNode*)come_increment_ref_count(parse_union((char* )come_increment_ref_count(type_name, "31type2.nc", 1033, 731),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 1033, 732),info,(_Bool)1), "31type2.nc", 1033, 733);
            # 1040 "31type2.nc"
            Value_57=node_compile(node_56,info);
            if(!Value_57) {
                # 1036 "31type2.nc"
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                # 1037 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1037, 734, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1037, 735),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1037, 736),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1037, 737),(_Bool)0))), "31type2.nc", 1037, 738);
                ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1037, 739):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1037, 740));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1037, 741));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1037, 742):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1037, 743));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1037, 744));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1037, 745));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1037, 746));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1037, 747);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1037, 748));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1037, 749);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1037, 750);
                return __result_obj__0;
            }
            # 1040 "31type2.nc"
            pointer_num_58=0;
            # 1051 "31type2.nc"
            while(*info->p==42) {
                # 1043 "31type2.nc"
                info->p++;
                # 1043 "31type2.nc"
                skip_spaces_and_lf(info);
                # 1045 "31type2.nc"
                skip_pointer_attribute(info);
                # 1047 "31type2.nc"
                pointer_num_58++;
            }
            # 1051 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj127=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1051, 752);
            come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1051, 751);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1051, 753);
            # 1058 "31type2.nc"
            if(type_33==((void*)0)) {
                # 1054 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj128=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1054, 754, "struct sType* "), "31type2.nc", 1054, 755),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1054), "31type2.nc", 1054, 756),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1054, 758);
                come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1054, 757);
            }
            # 1058 "31type2.nc"
            __right_value0 = (void*)0;
            klass_59=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name), "31type2.nc", 1058, 759);
            # 1059 "31type2.nc"
            klass_59->mAnonymous=(_Bool)1;
            # 1061 "31type2.nc"
            type_33->mPointerNum=pointer_num_58;
            # 1062 "31type2.nc"
            type_33->mAnonymous=anonymous_55;
            # 1063 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj129=type_33->mAnonymousName,
            type_33->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1063), "31type2.nc", 1063, 761);
            __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1063, 760);
            ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1070, 762):(void*)0);
            come_call_finalizer(sClass_finalize, klass_59, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1070, 763);
        }
        else {
            # 1066 "31type2.nc"
            err_msg(info,"unexpected { character");
            # 1067 "31type2.nc"
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1067, 764, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1067, 765),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1067, 766),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1067, 767),(_Bool)0))), "31type2.nc", 1067, 768);
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1067, 769));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1067, 770));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1067, 771):(void*)0);
            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1067, 772));
            (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1067, 773));
            (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1067, 774));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1067, 775));
            come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1067, 776);
            (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1067, 777));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1067, 778);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1067, 779);
            return __result_obj__0;
        }
        # 1070 "31type2.nc"
        __right_value0 = (void*)0;
        attribute_60=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "31type2.nc", 1070, 780);
        # 1076 "31type2.nc"
        if(!parse_variable_name) {
            # 1073 "31type2.nc"
            append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute_60, "31type2.nc", 1073, 781),(_Bool)0,info);
        }
        # 1079 "31type2.nc"
        if(parse_variable_name) {
            # 1077 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj130=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_variable_name_fun(type_33,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_60, "31type2.nc", 1077, 782),info), "31type2.nc", 1077, 784);
            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1077, 783);
        }
        (attribute_60 = come_decrement_ref_count(attribute_60, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1679, 785));
    }
    else if(lambda_flag) {
        # 1081 "31type2.nc"
        # 1109 "31type2.nc"
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1082, 786);
_conditional_value_X0;})) {
            # 1083 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj131=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1083, 788);
            come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1083, 787);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1083, 789);
            # 1084 "31type2.nc"
            __right_value0 = (void*)0;
            result_type->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            # 1092 "31type2.nc"
            for(i=0            ;i<list$1char$ph_length(info->generics_type_names);i++){
                # 1091 "31type2.nc"
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1088, 808));
_conditional_value_X1;})) {
                    # 1089 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj132=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1089, 809, "struct sType* "), "31type2.nc", 1089, 810),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i), "31type2.nc", 1089, 811),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1089, 813);
                    come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1089, 812);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            # 1099 "31type2.nc"
            for(i_65=0            ;i_65<list$1char$ph_length(info->method_generics_type_names);i_65++){
                # 1098 "31type2.nc"
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X2=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_65))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1095, 814));
_conditional_value_X2;})) {
                    # 1096 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj133=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1096, 815, "struct sType* "), "31type2.nc", 1096, 816),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_65), "31type2.nc", 1096, 817),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1096, 819);
                    come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1096, 818);
                }
            }
        }
        else {
            # 1102 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj134=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1102, 821);
            come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1102, 820);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1102, 822);
            # 1107 "31type2.nc"
            if(result_type==((void*)0)) {
                # 1105 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj135=result_type,
                result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1105, 823, "struct sType* "), "31type2.nc", 1105, 824),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1105), "31type2.nc", 1105, 825),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1105, 827);
                come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1105, 826);
            }
        }
        # 1109 "31type2.nc"
        apply_type_qualifiers(result_type,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        # 1110 "31type2.nc"
        __dec_obj136=result_type->mAlignas,
        result_type->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1110, 829);
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1110, 828) :0);
        # 1111 "31type2.nc"
        result_type->mPointerNum=pointer_num;
        # 1112 "31type2.nc"
        result_type->mHeap=result_type->mHeap||heap;
        # 1113 "31type2.nc"
        result_type->mChannel=result_type->mChannel||channel;
        # 1114 "31type2.nc"
        result_type->mDefferRightValue=result_type->mDefferRightValue||deffer_;
        # 1115 "31type2.nc"
        merge_pointer_attribute_to_type(result_type,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1115, 830));
        # 1117 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj137=var_name_34,
        var_name_34=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 1117, 832);
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1117, 831);
        # 1119 "31type2.nc"
        __right_value0 = (void*)0;
        multiple_assign_var4=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var4->v1, "31type2.nc", 1119, 833);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var4->v2, "31type2.nc", 1119, 834);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var4->v3, "31type2.nc", 1119, 835);
        var_args=multiple_assign_var4->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1119, 839);
        # 1121 "31type2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj138=type_33,
        type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1121, 840, "struct sType* "), "31type2.nc", 1121, 841),(char*)come_increment_ref_count(xsprintf("lambda"), "31type2.nc", 1121, 842),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1121, 844);
        come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1121, 843);
        # 1123 "31type2.nc"
        __dec_obj139=type_33->mResultType,
        type_33->mResultType=(struct sType* )come_increment_ref_count(result_type, "31type2.nc", 1123, 846);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1123, 845);
        # 1124 "31type2.nc"
        __dec_obj140=type_33->mParamTypes,
        type_33->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "31type2.nc", 1124, 848);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1124, 847);
        # 1125 "31type2.nc"
        __dec_obj141=type_33->mParamNames,
        type_33->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "31type2.nc", 1125, 850);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1125, 849);
        # 1126 "31type2.nc"
        type_33->mVarArgs=var_args;
        # 1127 "31type2.nc"
        type_33->mExtern=extern_;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 851);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 852);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 853);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 854);
    }
    else if(pointer_to_array_flag) {
        # 1130 "31type2.nc"
        expected_next_character(40,info);
        # 1132 "31type2.nc"
        skip_pointer_attribute(info);
        # 1134 "31type2.nc"
        pointer_paren=(_Bool)0;
        # 1135 "31type2.nc"
        paren_num=1;
        # 1143 "31type2.nc"
        if(*info->p==40) {
            # 1137 "31type2.nc"
            pointer_paren=(_Bool)1;
            # 1138 "31type2.nc"
            info->p++;
            # 1139 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1140 "31type2.nc"
            paren_num++;
        }
        # 1143 "31type2.nc"
        array_pointer_num=0;
        # 1151 "31type2.nc"
        while(*info->p==42||*info->p==94) {
            # 1145 "31type2.nc"
            info->p++;
            # 1146 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1147 "31type2.nc"
            skip_pointer_attribute(info);
            # 1148 "31type2.nc"
            array_pointer_num++;
        }
        # 1151 "31type2.nc"
        skip_pointer_attribute(info);
        # 1153 "31type2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj142=type_33,
        type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1153, 856);
        come_call_finalizer(sType_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1153, 855);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1153, 857);
        # 1159 "31type2.nc"
        if(type_33==((void*)0)) {
            # 1156 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj143=type_33,
            type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1156, 858, "struct sType* "), "31type2.nc", 1156, 859),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1156), "31type2.nc", 1156, 860),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1156, 862);
            come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1156, 861);
        }
        # 1159 "31type2.nc"
        apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        # 1160 "31type2.nc"
        __dec_obj144=type_33->mAlignas,
        type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1160, 864);
        (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1160, 863) :0);
        # 1161 "31type2.nc"
        type_33->mPointerNum+=pointer_num;
        # 1162 "31type2.nc"
        type_33->mHeap=type_33->mHeap||heap;
        # 1163 "31type2.nc"
        type_33->mChannel=type_33->mChannel||channel;
        # 1164 "31type2.nc"
        __dec_obj145=type_33->mTupleName,
        type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1164, 866);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1164, 865);
        # 1165 "31type2.nc"
        type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
        # 1166 "31type2.nc"
        merge_pointer_attribute_to_type(type_33,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1166, 867));
        # 1175 "31type2.nc"
        if(xisalpha(*info->p)||*info->p==95) {
            # 1169 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj146=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 1169, 869);
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1169, 868);
        }
        else {
            # 1172 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj147=var_name_34,
            var_name_34=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1172, 871);
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1172, 870);
        }
        # 1180 "31type2.nc"
        if(*info->p==41) {
            # 1176 "31type2.nc"
            info->p++;
            # 1177 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1178 "31type2.nc"
            paren_num--;
        }
        # 1180 "31type2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        array=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "31type2.nc", 1180, 872, "struct list$1sNode$ph*"), "31type2.nc", 1180, 873)), "31type2.nc", 1180, 874);
        # 1194 "31type2.nc"
        while(*info->p==91) {
            # 1182 "31type2.nc"
            info->p++;
            # 1183 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1185 "31type2.nc"
            __right_value0 = (void*)0;
            node_66=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1185, 875);
            # 1187 "31type2.nc"
            list$1sNode$ph_add(array,(struct sNode*)come_increment_ref_count(node_66, "31type2.nc", 1187, 876));
            # 1193 "31type2.nc"
            if(*info->p==93) {
                # 1190 "31type2.nc"
                info->p++;
                # 1191 "31type2.nc"
                skip_spaces_and_lf(info);
            }
            ((node_66) ? node_66 = come_decrement_ref_count(node_66, ((struct sNode*)node_66)->finalize, ((struct sNode*)node_66)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1194, 877):(void*)0);
        }
        # 1206 "31type2.nc"
        if(paren_num>0&&*info->p==41) {
            # 1195 "31type2.nc"
            info->p++;
            # 1196 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1198 "31type2.nc"
            __dec_obj148=type_33->mVarNameArrayNum,
            type_33->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array, "31type2.nc", 1198, 879);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1198, 878);
        }
        else {
            # 1204 "31type2.nc"
            ({            __current_stack1__.pointer_paren = &pointer_paren;
            __current_stack1__.paren_num = &paren_num;
            __current_stack1__.array_pointer_num = &array_pointer_num;
            __current_stack1__.array = &array;
            __current_stack1__.info = &info;
            __current_stack1__.parse_variable_name = &parse_variable_name;
            __current_stack1__.parse_multiple_type = &parse_multiple_type;
            __current_stack1__.in_function_parametor = &in_function_parametor;
            __current_stack1__.head = &head;
            __current_stack1__.head_sline = &head_sline;
            __current_stack1__.attribute_before = &attribute_before;
            __current_stack1__.type_name = &type_name;
            __current_stack1__.norecord = &norecord;
            __current_stack1__.constant = &constant;
            __current_stack1__.static_ = &static_;
            __current_stack1__.volatile_ = &volatile_;
            __current_stack1__.register_ = &register_;
            __current_stack1__.unsigned_ = &unsigned_;
            __current_stack1__.long_ = &long_;
            __current_stack1__.long_long = &long_long;
            __current_stack1__.short_ = &short_;
            __current_stack1__.restrict_ = &restrict_;
            __current_stack1__.struct_ = &struct_;
            __current_stack1__.union_ = &union_;
            __current_stack1__.enum_ = &enum_;
            __current_stack1__.no_heap = &no_heap;
            __current_stack1__.extern_ = &extern_;
            __current_stack1__.inline_ = &inline_;
            __current_stack1__.uniq_ = &uniq_;
            __current_stack1__.tuple_ = &tuple_;
            __current_stack1__.original_var_name = &original_var_name;
            __current_stack1__.complex_ = &complex_;
            __current_stack1__.type_name_ = &type_name_;
            __current_stack1__.noreturn_ = &noreturn_;
            __current_stack1__.weak_ = &weak_;
            __current_stack1__.alignas_ = &alignas_;
            __current_stack1__.alignas_double = &alignas_double;
            __current_stack1__.tag_attribute = &tag_attribute;
            __current_stack1__.struct_define_parsed = &struct_define_parsed;
            __current_stack1__.anonymous_type = &anonymous_type;
            __current_stack1__.anonymous_name = &anonymous_name;
            __current_stack1__.atomic_ = &atomic_;
            __current_stack1__.thread_local = &thread_local;
            __current_stack1__.thread_ = &thread_;
            __current_stack1__.attribute_32 = &attribute_32;
            __current_stack1__.pointer_num = &pointer_num;
            __current_stack1__.pointer_attribute = &pointer_attribute;
            __current_stack1__.heap = &heap;
            __current_stack1__.refference = &refference;
            __current_stack1__.no_refference = &no_refference;
            __current_stack1__.channel = &channel;
            __current_stack1__.deffer_ = &deffer_;
            __current_stack1__.any_class = &any_class;
            __current_stack1__.vtable = &vtable;
            __current_stack1__.tuple_name = &tuple_name;
            __current_stack1__.lambda_flag = &lambda_flag;
            __current_stack1__.type_33 = &type_33;
            __current_stack1__.var_name_34 = &var_name_34;
            __current_stack1__.function_pointer_flag = &function_pointer_flag;
            __current_stack1__.pointer_to_array_flag = &pointer_to_array_flag;
            __current_stack1__.var_name_between_brace = &var_name_between_brace;
            })            ,            list$1sNode$ph_each(array,&__current_stack1__,(void*)method_block1_31type2nc);
        }
        # 1227 "31type2.nc"
        while(*info->p==91) {
            # 1207 "31type2.nc"
            info->p++;
            # 1208 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1217 "31type2.nc"
            if(*info->p==93) {
                # 1211 "31type2.nc"
                info->p++;
                # 1212 "31type2.nc"
                skip_spaces_and_lf(info);
                # 1213 "31type2.nc"
                type_33->mArrayPointerType=(_Bool)1;
                # 1214 "31type2.nc"
                break;
            }
            # 1217 "31type2.nc"
            __right_value0 = (void*)0;
            node_67=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1217, 883);
            # 1219 "31type2.nc"
            list$1sNode$ph_add(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_67, "31type2.nc", 1219, 884));
            # 1225 "31type2.nc"
            if(*info->p==93) {
                # 1222 "31type2.nc"
                info->p++;
                # 1223 "31type2.nc"
                skip_spaces_and_lf(info);
            }
            ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1227, 885):(void*)0);
        }
        # 1227 "31type2.nc"
        type_33->mArrayPointerNum=array_pointer_num;
        # 1228 "31type2.nc"
        type_33->mPointerParen=pointer_paren;
        come_call_finalizer(list$1sNode$ph$p_finalize, array, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 886);
    }
    else if(function_pointer_flag) {
        # 1231 "31type2.nc"
        info->p++;
        # 1232 "31type2.nc"
        skip_spaces_and_lf(info);
        # 1234 "31type2.nc"
        skip_pointer_attribute(info);
        # 1235 "31type2.nc"
        __right_value0 = (void*)0;
        function_pointer_attribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1235, 887);
        # 1237 "31type2.nc"
        function_pointer_num=0;
        # 1253 "31type2.nc"
        while(*info->p==42||*info->p==94) {
            # 1239 "31type2.nc"
            info->p++;
            # 1240 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1241 "31type2.nc"
            __right_value0 = (void*)0;
            pointer_attr_68=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "31type2.nc", 1241, 888);
            # 1250 "31type2.nc"
            if(string_operator_not_equals(pointer_attr_68,"")) {
                # 1249 "31type2.nc"
                if(string_operator_not_equals(function_pointer_attribute,"")) {
                    # 1244 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj149=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(function_pointer_attribute," "))),pointer_attr_68), "31type2.nc", 1244, 890);
                    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1244, 889);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1244, 891));
                }
                else {
                    # 1247 "31type2.nc"
                    __dec_obj150=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr_68, "31type2.nc", 1247, 893);
                    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1247, 892);
                }
            }
            # 1250 "31type2.nc"
            function_pointer_num++;
            (pointer_attr_68 = come_decrement_ref_count(pointer_attr_68, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1253, 894));
        }
        # 1253 "31type2.nc"
        __right_value0 = (void*)0;
        pointer_attr2=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "31type2.nc", 1253, 895);
        # 1263 "31type2.nc"
        if(string_operator_not_equals(pointer_attr2,"")) {
            # 1261 "31type2.nc"
            if(string_operator_not_equals(function_pointer_attribute,"")) {
                # 1256 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj151=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(function_pointer_attribute," "))),pointer_attr2), "31type2.nc", 1256, 897);
                __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1256, 896);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1256, 898));
            }
            else {
                # 1259 "31type2.nc"
                __dec_obj152=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr2, "31type2.nc", 1259, 900);
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1259, 899);
            }
        }
        # 1263 "31type2.nc"
        # 1290 "31type2.nc"
        if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1264, 901);
_conditional_value_X3;})) {
            # 1265 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj153=result_type_69,
            result_type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1265, 903);
            come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1265, 902);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1265, 904);
            # 1266 "31type2.nc"
            __right_value0 = (void*)0;
            result_type_69->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_69->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            # 1274 "31type2.nc"
            for(i_70=0            ;i_70<list$1char$ph_length(info->generics_type_names);i_70++){
                # 1273 "31type2.nc"
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X4=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_70))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1270, 905));
_conditional_value_X4;})) {
                    # 1271 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj154=result_type_69,
                    result_type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1271, 906, "struct sType* "), "31type2.nc", 1271, 907),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_70), "31type2.nc", 1271, 908),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1271, 910);
                    come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1271, 909);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            # 1281 "31type2.nc"
            for(i_71=0            ;i_71<list$1char$ph_length(info->method_generics_type_names);i_71++){
                # 1280 "31type2.nc"
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X5=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_71))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1277, 911));
_conditional_value_X5;})) {
                    # 1278 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj155=result_type_69,
                    result_type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1278, 912, "struct sType* "), "31type2.nc", 1278, 913),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_71), "31type2.nc", 1278, 914),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1278, 916);
                    come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1278, 915);
                }
            }
        }
        else {
            # 1283 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj156=result_type_69,
            result_type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1283, 918);
            come_call_finalizer(sType_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1283, 917);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1283, 919);
            # 1288 "31type2.nc"
            if(result_type_69==((void*)0)) {
                # 1286 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj157=result_type_69,
                result_type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1286, 920, "struct sType* "), "31type2.nc", 1286, 921),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1286), "31type2.nc", 1286, 922),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1286, 924);
                come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1286, 923);
            }
        }
        # 1290 "31type2.nc"
        apply_type_qualifiers(result_type_69,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        # 1291 "31type2.nc"
        __dec_obj158=result_type_69->mAlignas,
        result_type_69->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1291, 926);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1291, 925) :0);
        # 1292 "31type2.nc"
        result_type_69->mPointerNum+=pointer_num;
        # 1293 "31type2.nc"
        result_type_69->mHeap=result_type_69->mHeap||heap;
        # 1294 "31type2.nc"
        result_type_69->mChannel=result_type_69->mChannel||channel;
        # 1295 "31type2.nc"
        result_type_69->mDefferRightValue=result_type_69->mDefferRightValue||deffer_;
        # 1296 "31type2.nc"
        merge_pointer_attribute_to_type(result_type_69,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1296, 927));
        # 1298 "31type2.nc"
        paren_flag=(_Bool)0;
        # 1305 "31type2.nc"
        if(*info->p==40) {
            # 1300 "31type2.nc"
            info->p++;
            # 1301 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1302 "31type2.nc"
            paren_flag=(_Bool)1;
        }
        # 1305 "31type2.nc"
        array_pointer=0;
        # 1312 "31type2.nc"
        while(*info->p==42) {
            # 1307 "31type2.nc"
            info->p++;
            # 1308 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1309 "31type2.nc"
            array_pointer++;
        }
        # 1324 "31type2.nc"
        if(xisalnum(*info->p)||*info->p==95) {
            # 1313 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj159=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 1313, 929);
            __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1313, 928);
            # 1317 "31type2.nc"
            if(!paren_flag&&*info->p==40) {
                # 1315 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1315, 930, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1315, 931),(struct sType* )come_increment_ref_count(result_type_69, "31type2.nc", 1315, 932),(char* )come_increment_ref_count(var_name_34, "31type2.nc", 1315, 933),(_Bool)0))), "31type2.nc", 1315, 934);
                (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 935));
                (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 936));
                come_call_finalizer(sType_finalize, result_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1315, 937);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 938));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 939));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1315, 940):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 941));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 942));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 943));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 944));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1315, 945);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1315, 946));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1315, 947);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1315, 948);
                return __result_obj__0;
            }
        }
        else {
            # 1319 "31type2.nc"
            static int num_anonymous_var_name=0;
            # 1320 "31type2.nc"
            num_anonymous_var_name++;
            # 1321 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj160=var_name_34,
            var_name_34=(char* )come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name), "31type2.nc", 1321, 950);
            __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1321, 949);
        }
        # 1324 "31type2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj161=type_33,
        type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1324, 951, "struct sType* "), "31type2.nc", 1324, 952),(char*)come_increment_ref_count(xsprintf("lambda"), "31type2.nc", 1324, 953),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1324, 955);
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1324, 954);
        # 1348 "31type2.nc"
        while(*info->p==91) {
            # 1326 "31type2.nc"
            info->p++;
            # 1327 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1346 "31type2.nc"
            if(*info->p==93) {
                # 1330 "31type2.nc"
                info->p++;
                # 1331 "31type2.nc"
                skip_spaces_and_lf(info);
                # 1333 "31type2.nc"
                type_33->mArrayPointerType=(_Bool)1;
                # 1334 "31type2.nc"
                break;
            }
            else {
                # 1337 "31type2.nc"
                __right_value0 = (void*)0;
                node_72=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1337, 956);
                # 1339 "31type2.nc"
                list$1sNode$ph_add(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_72, "31type2.nc", 1339, 957));
                # 1345 "31type2.nc"
                if(*info->p==93) {
                    # 1342 "31type2.nc"
                    info->p++;
                    # 1343 "31type2.nc"
                    skip_spaces_and_lf(info);
                }
                ((node_72) ? node_72 = come_decrement_ref_count(node_72, ((struct sNode*)node_72)->finalize, ((struct sNode*)node_72)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1346, 958):(void*)0);
            }
        }
        # 1353 "31type2.nc"
        if(paren_flag&&*info->p==41) {
            # 1349 "31type2.nc"
            info->p++;
            # 1350 "31type2.nc"
            skip_spaces_and_lf(info);
        }
        # 1366 "31type2.nc"
        while(*info->p==91) {
            # 1354 "31type2.nc"
            info->p++;
            # 1355 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1357 "31type2.nc"
            __right_value0 = (void*)0;
            node_73=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1357, 959);
            # 1359 "31type2.nc"
            list$1sNode$ph_add(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_73, "31type2.nc", 1359, 960));
            # 1365 "31type2.nc"
            if(*info->p==93) {
                # 1362 "31type2.nc"
                info->p++;
                # 1363 "31type2.nc"
                skip_spaces_and_lf(info);
            }
            ((node_73) ? node_73 = come_decrement_ref_count(node_73, ((struct sNode*)node_73)->finalize, ((struct sNode*)node_73)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1366, 961):(void*)0);
        }
        # 1366 "31type2.nc"
        expected_next_character(41,info);
        # 1368 "31type2.nc"
        __right_value0 = (void*)0;
        multiple_assign_var5=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types_74=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var5->v1, "31type2.nc", 1368, 962);
        param_names_75=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v2, "31type2.nc", 1368, 963);
        param_default_parametors_76=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v3, "31type2.nc", 1368, 964);
        var_args_77=multiple_assign_var5->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1368, 965);
        # 1370 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj162=type_33->mResultType,
        type_33->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type_69), "31type2.nc", 1370, 967);
        come_call_finalizer(sType_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1370, 966);
        # 1371 "31type2.nc"
        __dec_obj163=type_33->mParamTypes,
        type_33->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_74, "31type2.nc", 1371, 969);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj163,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1371, 968);
        # 1372 "31type2.nc"
        __dec_obj164=type_33->mParamNames,
        type_33->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_75, "31type2.nc", 1372, 971);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1372, 970);
        # 1373 "31type2.nc"
        type_33->mVarArgs=var_args_77;
        # 1374 "31type2.nc"
        type_33->mExtern=extern_;
        # 1375 "31type2.nc"
        __dec_obj165=type_33->mPointerAttribute,
        type_33->mPointerAttribute=(char* )come_increment_ref_count(function_pointer_attribute, "31type2.nc", 1375, 973);
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1375, 972);
        # 1377 "31type2.nc"
        type_33->mFunctionPointerNum=function_pointer_num;
        # 1378 "31type2.nc"
        type_33->mArrayPointerNum=array_pointer;
        (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1679, 974));
        (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1679, 975));
        come_call_finalizer(sType_finalize, result_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 976);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 977);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 978);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1679, 979);
    }
    else {
        # 1604 "31type2.nc"
        if(__right_value0 = (void*)0,
({(_conditional_value_X6=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1381, 980);
_conditional_value_X6;})) {
            # 1382 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj166=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1382, 982);
            come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1382, 981);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1382, 983);
            # 1383 "31type2.nc"
            __right_value0 = (void*)0;
            type_33->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_33->mClass->mName)));
            # 1385 "31type2.nc"
            __right_value0 = (void*)0;
            t=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_operator_load_element(info->typedef_definition,type_name)));
            # 1387 "31type2.nc"
            type_33->mOriginalTypePointerNum=pointer_num;
            # 1388 "31type2.nc"
            type_33->mOriginalTypePointerHeap=heap;
            # 1395 "31type2.nc"
            if(type_33->mTypedef||t) {
                # 1390 "31type2.nc"
                __right_value0 = (void*)0;
                type_=(struct sType* )come_increment_ref_count(sType_clone(type_33), "31type2.nc", 1390, 1014);
                # 1391 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj167=type_->mAttribute,
                type_->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1391, 1016);
                __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1391, 1015);
                # 1392 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj168=type_33->mTypedefOriginalType,
                type_33->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(type_), "31type2.nc", 1392, 1018);
                come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1392, 1017);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1395, 1019);
            }
            # 1395 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj169=type_33->mAttribute,
            type_33->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1395, 1021);
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1395, 1020);
            # 1396 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj170=type_33->mVarAttribute,
            type_33->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1396, 1023);
            __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1396, 1022);
            # 1398 "31type2.nc"
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            # 1399 "31type2.nc"
            __dec_obj171=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1399, 1025);
            (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1399, 1024) :0);
            # 1406 "31type2.nc"
            if(string_operator_equals(type_33->mClass->mName,"lambda")||list$1sNode$ph_length(type_33->mArrayNum)>0) {
                # 1401 "31type2.nc"
                type_33->mArrayPointerNum+=pointer_num;
            }
            else {
                # 1404 "31type2.nc"
                type_33->mPointerNum+=pointer_num;
            }
            # 1406 "31type2.nc"
            type_33->mHeap=type_33->mHeap||heap;
            # 1407 "31type2.nc"
            type_33->mChannel=type_33->mChannel||channel;
            # 1408 "31type2.nc"
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            # 1409 "31type2.nc"
            __dec_obj172=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1409, 1027);
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1409, 1026);
            # 1411 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj173=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1411, 1028),info), "31type2.nc", 1411, 1030);
            come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1411, 1029);
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            # 1420 "31type2.nc"
            for(i_78=0            ;i_78<list$1char$ph_length(info->generics_type_names);i_78++){
                # 1418 "31type2.nc"
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X7=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_78))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1415, 1031));
_conditional_value_X7;})) {
                    # 1416 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj174=type_33,
                    type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1416, 1032, "struct sType* "), "31type2.nc", 1416, 1033),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_78), "31type2.nc", 1416, 1034),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1416, 1036);
                    come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1416, 1035);
                }
            }
            # 1420 "31type2.nc"
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            # 1421 "31type2.nc"
            __dec_obj175=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1421, 1038);
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1421, 1037) :0);
            # 1422 "31type2.nc"
            type_33->mPointerNum+=pointer_num;
            # 1423 "31type2.nc"
            type_33->mHeap=type_33->mHeap||heap;
            # 1424 "31type2.nc"
            type_33->mChannel=type_33->mChannel||channel;
            # 1425 "31type2.nc"
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            # 1426 "31type2.nc"
            __dec_obj176=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1426, 1040);
            __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1426, 1039);
            # 1428 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj177=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1428, 1041),info), "31type2.nc", 1428, 1043);
            come_call_finalizer(sType_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1428, 1042);
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            # 1437 "31type2.nc"
            for(i_79=0            ;i_79<list$1char$ph_length(info->method_generics_type_names);i_79++){
                # 1435 "31type2.nc"
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X8=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_79))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1432, 1044));
_conditional_value_X8;})) {
                    # 1433 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj178=type_33,
                    type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1433, 1045, "struct sType* "), "31type2.nc", 1433, 1046),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_79), "31type2.nc", 1433, 1047),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1433, 1049);
                    come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1433, 1048);
                }
            }
            # 1437 "31type2.nc"
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            # 1438 "31type2.nc"
            __dec_obj179=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1438, 1051);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1438, 1050) :0);
            # 1439 "31type2.nc"
            type_33->mPointerNum+=pointer_num;
            # 1440 "31type2.nc"
            type_33->mHeap=type_33->mHeap||heap;
            # 1441 "31type2.nc"
            type_33->mChannel=type_33->mChannel||channel;
            # 1442 "31type2.nc"
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            # 1443 "31type2.nc"
            __dec_obj180=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1443, 1053);
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1443, 1052);
            # 1445 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj181=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1445, 1054),info), "31type2.nc", 1445, 1056);
            come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1445, 1055);
        }
        else if(string_operator_equals(type_name,"Result")&&*info->p==60) {
            # 1448 "31type2.nc"
            info->p++;
            # 1449 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1451 "31type2.nc"
            __right_value0 = (void*)0;
            multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            result_type_80=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "31type2.nc", 1451, 1057);
            var_name_81=(char* )come_increment_ref_count(multiple_assign_var6->v2, "31type2.nc", 1451, 1058);
            err_82=multiple_assign_var6->v3;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1451, 1059);
            # 1457 "31type2.nc"
            if(!err_82) {
                # 1454 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1454, 1060, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1454, 1061),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1454, 1062),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1454, 1063),(_Bool)0))), "31type2.nc", 1454, 1064);
                come_call_finalizer(sType_finalize, result_type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1454, 1065);
                (var_name_81 = come_decrement_ref_count(var_name_81, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1066));
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1067));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1068));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1454, 1069):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1070));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1071));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1072));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1073));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1454, 1074);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1454, 1075));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1454, 1076);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1454, 1077);
                return __result_obj__0;
            }
            # 1462 "31type2.nc"
            if(*info->p!=62) {
                # 1458 "31type2.nc"
                err_msg(info,"invalid Result type arguments");
                # 1459 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1459, 1078, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1459, 1079),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1459, 1080),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1459, 1081),(_Bool)0))), "31type2.nc", 1459, 1082);
                come_call_finalizer(sType_finalize, result_type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1459, 1083);
                (var_name_81 = come_decrement_ref_count(var_name_81, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1084));
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1085));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1086));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1459, 1087):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1088));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1089));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1090));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1091));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1459, 1092);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1459, 1093));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1459, 1094);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1459, 1095);
                return __result_obj__0;
            }
            # 1462 "31type2.nc"
            info->p++;
            # 1463 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1465 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj182=type_33,
            type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1465, 1096, "struct sType* "), "31type2.nc", 1465, 1097),(char*)come_increment_ref_count(xsprintf("tuple2"), "31type2.nc", 1465, 1098),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1465, 1100);
            come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1465, 1099);
            # 1466 "31type2.nc"
            list$1sType$ph_push_back(type_33->mGenericsTypes,(struct sType* )come_increment_ref_count(result_type_80, "31type2.nc", 1466, 1115));
            # 1467 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            list$1sType$ph_push_back(type_33->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1467, 1116, "struct sType* "), "31type2.nc", 1467, 1117),(char*)come_increment_ref_count(xsprintf("_Bool"), "31type2.nc", 1467, 1118),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1467, 1119));
            # 1468 "31type2.nc"
            type_33->mPointerNum=1;
            # 1469 "31type2.nc"
            type_33->mHeap=(_Bool)1;
            # 1483 "31type2.nc"
            if(is_contained_generics_class(type_33,info)) {
                # 1472 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj186=type_33,
                type_33=(struct sType* )come_increment_ref_count(solve_generics(type_33,info->generics_type,info), "31type2.nc", 1472, 1121);
                come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1472, 1120);
            }
            else {
                # 1481 "31type2.nc"
                if(!output_generics_struct(type_33,type_33,info)) {
                    # 1477 "31type2.nc"
                    __right_value0 = (void*)0;
                    new_name=(char* )come_increment_ref_count(create_generics_name(type_33,info), "31type2.nc", 1477, 1122);
                    # 1478 "31type2.nc"
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name);
                    # 1479 "31type2.nc"
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1481, 1123));
                }
            }
            # 1483 "31type2.nc"
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            # 1484 "31type2.nc"
            __dec_obj187=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1484, 1125);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1484, 1124) :0);
            # 1485 "31type2.nc"
            type_33->mPointerNum+=pointer_num;
            # 1486 "31type2.nc"
            type_33->mHeap=type_33->mHeap||heap;
            # 1487 "31type2.nc"
            type_33->mChannel=type_33->mChannel||channel;
            # 1488 "31type2.nc"
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            # 1489 "31type2.nc"
            __dec_obj188=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1489, 1127);
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1489, 1126);
            # 1491 "31type2.nc"
            __dec_obj189=type_name,
            type_name=(char* )come_increment_ref_count(type_33->mClass->mName, "31type2.nc", 1491, 1129);
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1491, 1128);
            # 1493 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj190=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1493, 1130),info), "31type2.nc", 1493, 1132);
            come_call_finalizer(sType_finalize, __dec_obj190,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1493, 1131);
            come_call_finalizer(sType_finalize, result_type_80, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1604, 1133);
            (var_name_81 = come_decrement_ref_count(var_name_81, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1604, 1134));
        }
        else if(*info->p==60) {
            # 1496 "31type2.nc"
            info->p++;
            # 1497 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1506 "31type2.nc"
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X9=(((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char* )(__right_value1=__builtin_string(type_name,"31type2.nc",1499))))))==((void*)0)));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1499, 1135));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1499, 1136);
_conditional_value_X9;})) {
                # 1501 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1501, 1137, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1501, 1138),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1501, 1139),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1501, 1140),(_Bool)0))), "31type2.nc", 1501, 1141);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1501, 1142));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1501, 1143));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1501, 1144):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1501, 1145));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1501, 1146));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1501, 1147));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1501, 1148));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1501, 1149);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1501, 1150));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1501, 1151);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1501, 1152);
                return __result_obj__0;
            }
            # 1506 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj191=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1506, 1154);
            come_call_finalizer(sType_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1506, 1153);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1506, 1155);
            # 1512 "31type2.nc"
            if(type_33==((void*)0)) {
                # 1509 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj192=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1509, 1156, "struct sType* "), "31type2.nc", 1509, 1157),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1509), "31type2.nc", 1509, 1158),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1509, 1160);
                come_call_finalizer(sType_finalize, __dec_obj192,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1509, 1159);
            }
            # 1537 "31type2.nc"
            while((_Bool)1) {
                # 1513 "31type2.nc"
                __right_value0 = (void*)0;
                multiple_assign_var7=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "31type2.nc", 1513, 1161);
                var_name_85=(char* )come_increment_ref_count(multiple_assign_var7->v2, "31type2.nc", 1513, 1162);
                err_86=multiple_assign_var7->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1513, 1163);
                # 1519 "31type2.nc"
                if(!err_86) {
                    # 1516 "31type2.nc"
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1516, 1164, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1516, 1165),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1516, 1166),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1516, 1167),(_Bool)0))), "31type2.nc", 1516, 1168);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1516, 1169);
                    (var_name_85 = come_decrement_ref_count(var_name_85, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1170));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1171));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1172));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1516, 1173):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1174));
                    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1175));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1176));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1177));
                    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1516, 1178);
                    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1516, 1179));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1516, 1180);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1516, 1181);
                    return __result_obj__0;
                }
                # 1519 "31type2.nc"
                list$1sType$ph_push_back(type_33->mGenericsTypes,(struct sType* )come_increment_ref_count(generics_type, "31type2.nc", 1519, 1182));
                # 1535 "31type2.nc"
                if(*info->p==44) {
                    # 1522 "31type2.nc"
                    info->p++;
                    # 1523 "31type2.nc"
                    skip_spaces_and_lf(info);
                }
                else if(*info->p==62) {
                    # 1526 "31type2.nc"
                    info->p++;
                    # 1527 "31type2.nc"
                    skip_spaces_and_lf(info);
                    # 1529 "31type2.nc"
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1529, 1183);
                    (var_name_85 = come_decrement_ref_count(var_name_85, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1529, 1184));
                    break;
                }
                else {
                    # 1532 "31type2.nc"
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2));
                    # 1533 "31type2.nc"
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1533, 1185, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1533, 1186),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1533, 1187),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1533, 1188),(_Bool)0))), "31type2.nc", 1533, 1189);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1533, 1190);
                    (var_name_85 = come_decrement_ref_count(var_name_85, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1191));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1192));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1193));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1533, 1194):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1195));
                    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1196));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1197));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1198));
                    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1533, 1199);
                    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1533, 1200));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1533, 1201);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1533, 1202);
                    return __result_obj__0;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1537, 1203);
                (var_name_85 = come_decrement_ref_count(var_name_85, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1537, 1204));
            }
            # 1537 "31type2.nc"
            expected_generics_num=-1;
            # 1538 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            generics_class=((struct sClass* )(__right_value1=map$2char$phsClass$ph_at(info->generics_classes,((char* )(__right_value0=__builtin_string(type_name,"31type2.nc",1538))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1538, 1220));
            # 1542 "31type2.nc"
            if(generics_class) {
                # 1540 "31type2.nc"
                expected_generics_num=generics_class->mGenericsNum;
            }
            # 1547 "31type2.nc"
            if(expected_generics_num>=0&&list$1sType$ph_length(type_33->mGenericsTypes)!=expected_generics_num) {
                # 1543 "31type2.nc"
                err_msg(info,"invalid count of generics type arguments. %s requires %d but got %d",type_name,expected_generics_num,list$1sType$ph_length(type_33->mGenericsTypes));
                # 1544 "31type2.nc"
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1544, 1221, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1544, 1222),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1544, 1223),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1544, 1224),(_Bool)0))), "31type2.nc", 1544, 1225);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1544, 1226));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1544, 1227));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1544, 1228):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1544, 1229));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1544, 1230));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1544, 1231));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1544, 1232));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1544, 1233);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1544, 1234));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1544, 1235);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1544, 1236);
                return __result_obj__0;
            }
            # 1559 "31type2.nc"
            if(is_contained_generics_class(type_33,info)) {
                # 1548 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj193=type_33,
                type_33=(struct sType* )come_increment_ref_count(solve_generics(type_33,info->generics_type,info), "31type2.nc", 1548, 1238);
                come_call_finalizer(sType_finalize, __dec_obj193,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1548, 1237);
            }
            else {
                # 1557 "31type2.nc"
                if(!output_generics_struct(type_33,type_33,info)) {
                    # 1553 "31type2.nc"
                    __right_value0 = (void*)0;
                    new_name_87=(char* )come_increment_ref_count(create_generics_name(type_33,info), "31type2.nc", 1553, 1239);
                    # 1554 "31type2.nc"
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_87);
                    # 1555 "31type2.nc"
                    exit(7);
                    (new_name_87 = come_decrement_ref_count(new_name_87, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1557, 1240));
                }
            }
            # 1559 "31type2.nc"
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            # 1560 "31type2.nc"
            __dec_obj194=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1560, 1242);
            (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1560, 1241) :0);
            # 1561 "31type2.nc"
            type_33->mPointerNum+=pointer_num;
            # 1562 "31type2.nc"
            type_33->mHeap=type_33->mHeap||heap;
            # 1563 "31type2.nc"
            type_33->mChannel=type_33->mChannel||channel;
            # 1564 "31type2.nc"
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            # 1565 "31type2.nc"
            __dec_obj195=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1565, 1244);
            __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1565, 1243);
            # 1567 "31type2.nc"
            __dec_obj196=type_name,
            type_name=(char* )come_increment_ref_count(type_33->mClass->mName, "31type2.nc", 1567, 1246);
            __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1567, 1245);
            # 1569 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj197=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1569, 1247),info), "31type2.nc", 1569, 1249);
            come_call_finalizer(sType_finalize, __dec_obj197,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1569, 1248);
        }
        else {
            # 1579 "31type2.nc"
            if(struct_) {
                # 1573 "31type2.nc"
                __right_value0 = (void*)0;
                klass_88=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                # 1578 "31type2.nc"
                if(klass_88==((void*)0)&&*info->p!=60) {
                    # 1576 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1576), "31type2.nc", 1576, 1289),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "31type2.nc", 1576, 1290, "struct sClass* "), "31type2.nc", 1576, 1292),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1576), "31type2.nc", 1576, 1291),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "31type2.nc", 1576, 1293),(_Bool)0);
                }
            }
            # 1589 "31type2.nc"
            if(union_) {
                # 1580 "31type2.nc"
                __right_value0 = (void*)0;
                klass_98=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                # 1585 "31type2.nc"
                if(klass_98==((void*)0)&&*info->p!=60) {
                    # 1583 "31type2.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1583), "31type2.nc", 1583, 1294),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "31type2.nc", 1583, 1295, "struct sClass* "), "31type2.nc", 1583, 1297),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1583), "31type2.nc", 1583, 1296),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "31type2.nc", 1583, 1298),(_Bool)0);
                }
            }
            # 1589 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj201=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1589, 1300);
            come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1589, 1299);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1589, 1301);
            # 1595 "31type2.nc"
            if(type_33==((void*)0)) {
                # 1592 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj202=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1592, 1302, "struct sType* "), "31type2.nc", 1592, 1303),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1592), "31type2.nc", 1592, 1304),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1592, 1306);
                come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1592, 1305);
            }
            # 1595 "31type2.nc"
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            # 1596 "31type2.nc"
            __dec_obj203=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1596, 1308);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1596, 1307) :0);
            # 1597 "31type2.nc"
            type_33->mPointerNum+=pointer_num;
            # 1598 "31type2.nc"
            type_33->mHeap=type_33->mHeap||heap;
            # 1599 "31type2.nc"
            type_33->mChannel=type_33->mChannel||channel;
            # 1600 "31type2.nc"
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            # 1601 "31type2.nc"
            __dec_obj204=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1601, 1310);
            __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1601, 1309);
        }
        # 1604 "31type2.nc"
        merge_pointer_attribute_to_type(type_33,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1604, 1311));
        # 1606 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj205=type_33,
        type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1606, 1312),info), "31type2.nc", 1606, 1314);
        come_call_finalizer(sType_finalize, __dec_obj205,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1606, 1313);
        # 1659 "31type2.nc"
        if(parse_multiple_type&&*info->p==44&&!info->in_offsetof) {
            # 1609 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "31type2.nc", 1609, 1315, "struct list$1sType$ph*"), "31type2.nc", 1609, 1316)), "31type2.nc", 1609, 1317);
            # 1611 "31type2.nc"
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(types,(struct sType* )come_increment_ref_count(sType_clone(type_33), "31type2.nc", 1611, 1318));
            # 1626 "31type2.nc"
            while(*info->p==44) {
                # 1614 "31type2.nc"
                info->p++;
                # 1615 "31type2.nc"
                skip_spaces_and_lf(info);
                # 1617 "31type2.nc"
                __right_value0 = (void*)0;
                multiple_assign_var8=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2=(struct sType* )come_increment_ref_count(multiple_assign_var8->v1, "31type2.nc", 1617, 1319);
                name_99=(char* )come_increment_ref_count(multiple_assign_var8->v2, "31type2.nc", 1617, 1320);
                err_100=multiple_assign_var8->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1617, 1321);
                # 1623 "31type2.nc"
                if(!err_100) {
                    # 1620 "31type2.nc"
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1620, 1322, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1620, 1323),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1620, 1324),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1620, 1325),(_Bool)0))), "31type2.nc", 1620, 1326);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1620, 1327);
                    (name_99 = come_decrement_ref_count(name_99, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1328));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1620, 1329);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1330));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1331));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1620, 1332):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1333));
                    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1334));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1335));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1336));
                    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1620, 1337);
                    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1620, 1338));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1620, 1339);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1620, 1340);
                    return __result_obj__0;
                }
                # 1623 "31type2.nc"
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(types,(struct sType* )come_increment_ref_count(sType_clone(type2), "31type2.nc", 1623, 1341));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1626, 1342);
                (name_99 = come_decrement_ref_count(name_99, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1626, 1343));
            }
            # 1631 "31type2.nc"
            if(*info->p==41) {
                # 1627 "31type2.nc"
                info->p++;
                # 1628 "31type2.nc"
                skip_spaces_and_lf(info);
            }
            # 1631 "31type2.nc"
            num_tuples=list$1sType$ph_length(types);
            # 1633 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj206=type_33,
            type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1633, 1344, "struct sType* "), "31type2.nc", 1633, 1345),(char* )come_increment_ref_count(xsprintf("tuple%d",num_tuples), "31type2.nc", 1633, 1346),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1633, 1348);
            come_call_finalizer(sType_finalize, __dec_obj206,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1633, 1347);
            # 1634 "31type2.nc"
            type_33->mPointerNum++;
            # 1635 "31type2.nc"
            type_33->mHeap=(_Bool)1;
            # 1641 "31type2.nc"
            for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(types, "31type2.nc", 1637, 1349),it=list$1sType$ph_begin(_o2_saved_3)            ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
                # 1638 "31type2.nc"
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(type_33->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it)))), "31type2.nc", 1638, 1350));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1638, 1351);
            }
            # 1641 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj207=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1641, 1352),info), "31type2.nc", 1641, 1354);
            come_call_finalizer(sType_finalize, __dec_obj207,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1641, 1353);
            # 1654 "31type2.nc"
            if(is_contained_generics_class(type_33,info)) {
                # 1644 "31type2.nc"
                __right_value0 = (void*)0;
                __dec_obj208=type_33,
                type_33=(struct sType* )come_increment_ref_count(solve_generics(type_33,info->generics_type,info), "31type2.nc", 1644, 1356);
                come_call_finalizer(sType_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1644, 1355);
            }
            else {
                # 1653 "31type2.nc"
                if(!output_generics_struct(type_33,type_33,info)) {
                    # 1649 "31type2.nc"
                    __right_value0 = (void*)0;
                    new_name_103=(char* )come_increment_ref_count(create_generics_name(type_33,info), "31type2.nc", 1649, 1357);
                    # 1650 "31type2.nc"
                    printf("output generics is failed(%s)\n",new_name_103);
                    # 1651 "31type2.nc"
                    exit(9);
                    (new_name_103 = come_decrement_ref_count(new_name_103, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1653, 1358));
                }
            }
            # 1654 "31type2.nc"
            type_33->mMultipleTypes=(_Bool)1;
            # 1656 "31type2.nc"
            __dec_obj209=type_name,
            type_name=(char* )come_increment_ref_count(type_33->mClass->mName, "31type2.nc", 1656, 1360);
            __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1656, 1359);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1659, 1361);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1659, 1362);
        }
        # 1659 "31type2.nc"
        __right_value0 = (void*)0;
        attribute_104=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "31type2.nc", 1659, 1363);
        # 1671 "31type2.nc"
        if(type_33&&string_operator_equals(type_33->mClass->mName,"lambda")&&string_operator_not_equals(attribute_104,"")) {
            # 1668 "31type2.nc"
            if(type_33->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type_33->mMiddleAttribute,"")) {
                # 1663 "31type2.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj210=type_33->mMiddleAttribute,
                type_33->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type_33->mMiddleAttribute," "))),attribute_104), "31type2.nc", 1663, 1365);
                __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1663, 1364);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1663, 1366));
            }
            else {
                # 1666 "31type2.nc"
                __dec_obj211=type_33->mMiddleAttribute,
                type_33->mMiddleAttribute=(char* )come_increment_ref_count(attribute_104, "31type2.nc", 1666, 1368);
                __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1666, 1367);
            }
            # 1668 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj212=attribute_104,
            attribute_104=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1668, 1370);
            __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1668, 1369);
        }
        # 1675 "31type2.nc"
        if(!parse_variable_name) {
            # 1672 "31type2.nc"
            append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute_104, "31type2.nc", 1672, 1371),(_Bool)0,info);
        }
        # 1678 "31type2.nc"
        if(parse_variable_name) {
            # 1676 "31type2.nc"
            __right_value0 = (void*)0;
            __dec_obj213=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_variable_name_fun(type_33,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_104, "31type2.nc", 1676, 1372),info), "31type2.nc", 1676, 1374);
            __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1676, 1373);
        }
        (attribute_104 = come_decrement_ref_count(attribute_104, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1679, 1375));
    }
    # 1679 "31type2.nc"
    skip_spaces_and_lf(info);
    # 1680 "31type2.nc"
    array_num_typedef=((void*)0);
    # 1686 "31type2.nc"
    if(list$1sNode$ph_length(type_33->mArrayNum)>0) {
        # 1682 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj214=array_num_typedef,
        array_num_typedef=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(type_33->mArrayNum), "31type2.nc", 1682, 1377);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1682, 1376);
        # 1683 "31type2.nc"
        list$1sNode$ph_reset(type_33->mArrayNum);
    }
    # 1728 "31type2.nc"
    while(*info->p==91) {
        # 1687 "31type2.nc"
        info->p++;
        # 1688 "31type2.nc"
        skip_spaces_and_lf(info);
        # 1690 "31type2.nc"
        array_static=(_Bool)0;
        # 1691 "31type2.nc"
        array_restrict=(_Bool)0;
        # 1708 "31type2.nc"
        while(1) {
            # 1706 "31type2.nc"
            if(parsecmp_forward("static",info)) {
                # 1694 "31type2.nc"
                skip_spaces_and_lf(info);
                # 1696 "31type2.nc"
                array_static=(_Bool)1;
            }
            else if(parsecmp_forward("restrict",info)) {
                # 1699 "31type2.nc"
                skip_spaces_and_lf(info);
                # 1701 "31type2.nc"
                array_restrict=(_Bool)1;
            }
            else {
                # 1704 "31type2.nc"
                break;
            }
        }
        # 1708 "31type2.nc"
        skip_pointer_attribute(info);
        # 1718 "31type2.nc"
        if(*info->p==93) {
            # 1711 "31type2.nc"
            info->p++;
            # 1712 "31type2.nc"
            skip_spaces_and_lf(info);
            # 1714 "31type2.nc"
            type_33->mArrayPointerType=(_Bool)1;
            # 1716 "31type2.nc"
            break;
        }
        # 1718 "31type2.nc"
        skip_spaces_and_lf(info);
        # 1720 "31type2.nc"
        __right_value0 = (void*)0;
        node_105=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1720, 1379);
        # 1721 "31type2.nc"
        list$1sNode$ph_push_back(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_105, "31type2.nc", 1721, 1394));
        # 1722 "31type2.nc"
        list$1int$_push_back(type_33->mArrayStatic,array_static);
        # 1723 "31type2.nc"
        list$1int$_push_back(type_33->mArrayRestrict,array_restrict);
        # 1725 "31type2.nc"
        expected_next_character(93,info);
        ((node_105) ? node_105 = come_decrement_ref_count(node_105, ((struct sNode*)node_105)->finalize, ((struct sNode*)node_105)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1728, 1401):(void*)0);
    }
    # 1737 "31type2.nc"
    if(array_num_typedef) {
        # 1732 "31type2.nc"
        ({        __current_stack2__.info = &info;
        __current_stack2__.parse_variable_name = &parse_variable_name;
        __current_stack2__.parse_multiple_type = &parse_multiple_type;
        __current_stack2__.in_function_parametor = &in_function_parametor;
        __current_stack2__.head = &head;
        __current_stack2__.head_sline = &head_sline;
        __current_stack2__.attribute_before = &attribute_before;
        __current_stack2__.type_name = &type_name;
        __current_stack2__.norecord = &norecord;
        __current_stack2__.constant = &constant;
        __current_stack2__.static_ = &static_;
        __current_stack2__.volatile_ = &volatile_;
        __current_stack2__.register_ = &register_;
        __current_stack2__.unsigned_ = &unsigned_;
        __current_stack2__.long_ = &long_;
        __current_stack2__.long_long = &long_long;
        __current_stack2__.short_ = &short_;
        __current_stack2__.restrict_ = &restrict_;
        __current_stack2__.struct_ = &struct_;
        __current_stack2__.union_ = &union_;
        __current_stack2__.enum_ = &enum_;
        __current_stack2__.no_heap = &no_heap;
        __current_stack2__.extern_ = &extern_;
        __current_stack2__.inline_ = &inline_;
        __current_stack2__.uniq_ = &uniq_;
        __current_stack2__.tuple_ = &tuple_;
        __current_stack2__.original_var_name = &original_var_name;
        __current_stack2__.complex_ = &complex_;
        __current_stack2__.type_name_ = &type_name_;
        __current_stack2__.noreturn_ = &noreturn_;
        __current_stack2__.weak_ = &weak_;
        __current_stack2__.alignas_ = &alignas_;
        __current_stack2__.alignas_double = &alignas_double;
        __current_stack2__.tag_attribute = &tag_attribute;
        __current_stack2__.struct_define_parsed = &struct_define_parsed;
        __current_stack2__.anonymous_type = &anonymous_type;
        __current_stack2__.anonymous_name = &anonymous_name;
        __current_stack2__.atomic_ = &atomic_;
        __current_stack2__.thread_local = &thread_local;
        __current_stack2__.thread_ = &thread_;
        __current_stack2__.attribute_32 = &attribute_32;
        __current_stack2__.pointer_num = &pointer_num;
        __current_stack2__.pointer_attribute = &pointer_attribute;
        __current_stack2__.heap = &heap;
        __current_stack2__.refference = &refference;
        __current_stack2__.no_refference = &no_refference;
        __current_stack2__.channel = &channel;
        __current_stack2__.deffer_ = &deffer_;
        __current_stack2__.any_class = &any_class;
        __current_stack2__.vtable = &vtable;
        __current_stack2__.tuple_name = &tuple_name;
        __current_stack2__.lambda_flag = &lambda_flag;
        __current_stack2__.type_33 = &type_33;
        __current_stack2__.var_name_34 = &var_name_34;
        __current_stack2__.function_pointer_flag = &function_pointer_flag;
        __current_stack2__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack2__.var_name_between_brace = &var_name_between_brace;
        __current_stack2__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(type_33->mArrayNum,&__current_stack2__,(void*)method_block2_31type2nc);
        # 1732 "31type2.nc"
        list$1sNode$ph_reset(type_33->mArrayNum);
        # 1736 "31type2.nc"
        ({        __current_stack3__.info = &info;
        __current_stack3__.parse_variable_name = &parse_variable_name;
        __current_stack3__.parse_multiple_type = &parse_multiple_type;
        __current_stack3__.in_function_parametor = &in_function_parametor;
        __current_stack3__.head = &head;
        __current_stack3__.head_sline = &head_sline;
        __current_stack3__.attribute_before = &attribute_before;
        __current_stack3__.type_name = &type_name;
        __current_stack3__.norecord = &norecord;
        __current_stack3__.constant = &constant;
        __current_stack3__.static_ = &static_;
        __current_stack3__.volatile_ = &volatile_;
        __current_stack3__.register_ = &register_;
        __current_stack3__.unsigned_ = &unsigned_;
        __current_stack3__.long_ = &long_;
        __current_stack3__.long_long = &long_long;
        __current_stack3__.short_ = &short_;
        __current_stack3__.restrict_ = &restrict_;
        __current_stack3__.struct_ = &struct_;
        __current_stack3__.union_ = &union_;
        __current_stack3__.enum_ = &enum_;
        __current_stack3__.no_heap = &no_heap;
        __current_stack3__.extern_ = &extern_;
        __current_stack3__.inline_ = &inline_;
        __current_stack3__.uniq_ = &uniq_;
        __current_stack3__.tuple_ = &tuple_;
        __current_stack3__.original_var_name = &original_var_name;
        __current_stack3__.complex_ = &complex_;
        __current_stack3__.type_name_ = &type_name_;
        __current_stack3__.noreturn_ = &noreturn_;
        __current_stack3__.weak_ = &weak_;
        __current_stack3__.alignas_ = &alignas_;
        __current_stack3__.alignas_double = &alignas_double;
        __current_stack3__.tag_attribute = &tag_attribute;
        __current_stack3__.struct_define_parsed = &struct_define_parsed;
        __current_stack3__.anonymous_type = &anonymous_type;
        __current_stack3__.anonymous_name = &anonymous_name;
        __current_stack3__.atomic_ = &atomic_;
        __current_stack3__.thread_local = &thread_local;
        __current_stack3__.thread_ = &thread_;
        __current_stack3__.attribute_32 = &attribute_32;
        __current_stack3__.pointer_num = &pointer_num;
        __current_stack3__.pointer_attribute = &pointer_attribute;
        __current_stack3__.heap = &heap;
        __current_stack3__.refference = &refference;
        __current_stack3__.no_refference = &no_refference;
        __current_stack3__.channel = &channel;
        __current_stack3__.deffer_ = &deffer_;
        __current_stack3__.any_class = &any_class;
        __current_stack3__.vtable = &vtable;
        __current_stack3__.tuple_name = &tuple_name;
        __current_stack3__.lambda_flag = &lambda_flag;
        __current_stack3__.type_33 = &type_33;
        __current_stack3__.var_name_34 = &var_name_34;
        __current_stack3__.function_pointer_flag = &function_pointer_flag;
        __current_stack3__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack3__.var_name_between_brace = &var_name_between_brace;
        __current_stack3__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(array_num_typedef,&__current_stack3__,(void*)method_block3_31type2nc);
    }
    # 1737 "31type2.nc"
    __right_value0 = (void*)0;
    multiple_assign_var9=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name_110=(char* )come_increment_ref_count(multiple_assign_var9->v1, "31type2.nc", 1737, 1406);
    attribute2=(char* )come_increment_ref_count(multiple_assign_var9->v2, "31type2.nc", 1737, 1407);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1737, 1408);
    # 1739 "31type2.nc"
    append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute2, "31type2.nc", 1739, 1409),parse_variable_name,info);
    # 1741 "31type2.nc"
    __dec_obj218=type_33->mAsmName,
    type_33->mAsmName=(char* )come_increment_ref_count(asm_name_110, "31type2.nc", 1741, 1411);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1741, 1410);
    # 1743 "31type2.nc"
    skip_spaces_and_lf(info);
    # 1753 "31type2.nc"
    if(type_33->mChannel) {
        # 1746 "31type2.nc"
        __right_value0 = (void*)0;
        type_before=(struct sType* )come_increment_ref_count(sType_clone(type_33), "31type2.nc", 1746, 1412);
        # 1747 "31type2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj219=type_33,
        type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1747, 1413, "struct sType* "), "31type2.nc", 1747, 1414),(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 1747, 1415),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1747, 1417);
        come_call_finalizer(sType_finalize, __dec_obj219,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1747, 1416);
        # 1748 "31type2.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __dec_obj220=type_33->mArrayNum,
        type_33->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2"), "31type2.nc", 1748, 1418),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "31type2.nc", 4, 1423, "struct list$1sNode$ph"), "31type2.nc", 4, 1424),1,__list_values1__)), "31type2.nc", 1748, 1426);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj220,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1748, 1425);
        # 1749 "31type2.nc"
        __dec_obj221=type_33->mChannelType,
        type_33->mChannelType=(struct sType* )come_increment_ref_count(type_before, "31type2.nc", 1749, 1428);
        come_call_finalizer(sType_finalize, __dec_obj221,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1749, 1427);
        # 1750 "31type2.nc"
        type_33->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1753, 1429);
    }
    # 1762 "31type2.nc"
    if(type_33&&string_operator_equals(type_33->mClass->mName,"lambda")&&string_operator_not_equals(attribute_32,"")) {
        # 1760 "31type2.nc"
        if(type_33->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type_33->mMiddleAttribute,"")) {
            # 1755 "31type2.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj222=type_33->mMiddleAttribute,
            type_33->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type_33->mMiddleAttribute," "))),attribute_32), "31type2.nc", 1755, 1431);
            __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1755, 1430);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1755, 1432));
        }
        else {
            # 1758 "31type2.nc"
            __dec_obj223=type_33->mMiddleAttribute,
            type_33->mMiddleAttribute=(char* )come_increment_ref_count(attribute_32, "31type2.nc", 1758, 1434);
            __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1758, 1433);
        }
        # 1760 "31type2.nc"
        __right_value0 = (void*)0;
        __dec_obj224=attribute_32,
        attribute_32=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1760, 1436);
        __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1760, 1435);
    }
    # 1762 "31type2.nc"
    append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute_32, "31type2.nc", 1762, 1437),parse_variable_name,info);
    # 1764 "31type2.nc"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1764, 1438, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1764, 1439),(struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1764, 1440),(char* )come_increment_ref_count(var_name_34, "31type2.nc", 1764, 1441),(_Bool)1))), "31type2.nc", 1764, 1442);
    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1443));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1444));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1764, 1445):(void*)0);
    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1446));
    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1447));
    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1448));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1449));
    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1764, 1450);
    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1451));
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_typedef, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1764, 1452);
    (asm_name_110 = come_decrement_ref_count(asm_name_110, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1453));
    (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1764, 1454));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1764, 1455);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1764, 1456);
    return __result_obj__0;
}

static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType*  v1  , char*  v2  , _Bool v3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj32  ;
    char*  __dec_obj33  ;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    # 4581 "./neo-c.h"
    __dec_obj32=self->v1,
    self->v1=(struct sType* )come_increment_ref_count(v1, "./neo-c.h", 4581, 121);
    come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4581, 120);
    # 4582 "./neo-c.h"
    __dec_obj33=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "./neo-c.h", 4582, 123);
    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4582, 122);
    # 4583 "./neo-c.h"
    self->v3=v3;
    # 4585 "./neo-c.h"
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(self, "./neo-c.h", 4585, 124);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4585, 127);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4585, 128);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4585, 129));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4585, 130);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    # 1 "sType_finalize"
    # 3 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 2 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 88);
    }
    # 4 "sType_finalize"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 3 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 89);
    }
    # 5 "sType_finalize"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 4 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 92);
    }
    # 6 "sType_finalize"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 5 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 93);
    }
    # 7 "sType_finalize"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 6 "sType_finalize"
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 94):(void*)0);
    }
    # 8 "sType_finalize"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 7 "sType_finalize"
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 95):(void*)0);
    }
    # 9 "sType_finalize"
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        # 8 "sType_finalize"
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 96));
    }
    # 10 "sType_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 9 "sType_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 97));
    }
    # 11 "sType_finalize"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 10 "sType_finalize"
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 98));
    }
    # 12 "sType_finalize"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 11 "sType_finalize"
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 99));
    }
    # 13 "sType_finalize"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 12 "sType_finalize"
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 100));
    }
    # 14 "sType_finalize"
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        # 13 "sType_finalize"
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 101));
    }
    # 15 "sType_finalize"
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        # 14 "sType_finalize"
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 102));
    }
    # 16 "sType_finalize"
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        # 15 "sType_finalize"
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 103));
    }
    # 17 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        # 16 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 106);
    }
    # 18 "sType_finalize"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 17 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 107);
    }
    # 19 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 18 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 109);
    }
    # 20 "sType_finalize"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 19 "sType_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 110);
    }
    # 21 "sType_finalize"
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        # 20 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 111);
    }
    # 22 "sType_finalize"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 21 "sType_finalize"
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 112));
    }
    # 23 "sType_finalize"
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        # 22 "sType_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 113);
    }
    # 24 "sType_finalize"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 23 "sType_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 0, 116);
    }
    # 25 "sType_finalize"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 24 "sType_finalize"
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 117);
    }
    # 26 "sType_finalize"
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        # 25 "sType_finalize"
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 118):(void*)0);
    }
    # 27 "sType_finalize"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 26 "sType_finalize"
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 119);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 91);
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
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 90);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 105);
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
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 104):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 108);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 115);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 114));
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    # 3 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 125);
    }
    # 4 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple3$3sType$phchar$ph_Bool$$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 126));
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$phchar$ph$p_finalize"
    # 3 "tuple2$2char$phchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$phchar$ph$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 2, 190));
    }
    # 4 "tuple2$2char$phchar$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phchar$ph$p_finalize"
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 3, 191));
    }
                        neo_current_frame = fr.prev;
}

static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sType* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 438);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 439);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 440);
        return __result_obj__0;
    }
    # 4066 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4067 "./neo-c.h"
    hash=key_hash%self->size;
    # 4068 "./neo-c.h"
    it=hash;
    # 4090 "./neo-c.h"
    while((_Bool)1) {
        # 4088 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4078 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4075 "./neo-c.h"
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 441);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 442);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 443);
                return __result_obj__0;
            }
            # 4081 "./neo-c.h"
            if(++it>=self->size) {
                # 4079 "./neo-c.h"
                it=0;
            }
            # 4084 "./neo-c.h"
            if(it==hash) {
                # 4082 "./neo-c.h"
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 444);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 445);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 446);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 447);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 448);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 449);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 450);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 451);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 452);
    return __result_obj__0;
}

static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sType* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 453);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 454);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 455);
        return __result_obj__0;
    }
    # 4066 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4067 "./neo-c.h"
    hash=key_hash%self->size;
    # 4068 "./neo-c.h"
    it=hash;
    # 4090 "./neo-c.h"
    while((_Bool)1) {
        # 4088 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4078 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4075 "./neo-c.h"
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 456);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 457);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 458);
                return __result_obj__0;
            }
            # 4081 "./neo-c.h"
            if(++it>=self->size) {
                # 4079 "./neo-c.h"
                it=0;
            }
            # 4084 "./neo-c.h"
            if(it==hash) {
                # 4082 "./neo-c.h"
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 459);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 460);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 461);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 462);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 463);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 464);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 465);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 466);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 467);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj85  ;
    struct sType*  __dec_obj86  ;
    struct list$1sType$ph* __dec_obj90;
    struct sType*  __dec_obj91  ;
    struct sNode* __dec_obj92;
    struct sNode* __dec_obj93;
    char*  __dec_obj94  ;
    char*  __dec_obj95  ;
    char*  __dec_obj96  ;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    char*  __dec_obj99  ;
    char*  __dec_obj100  ;
    char*  __dec_obj101  ;
    struct list$1sNode$ph* __dec_obj105;
    struct list$1sNode$ph* __dec_obj106;
    struct list$1int$* __dec_obj107;
    struct list$1int$* __dec_obj108;
    struct sType*  __dec_obj109  ;
    char*  __dec_obj110  ;
    struct list$1sType$ph* __dec_obj111;
    struct list$1char$ph* __dec_obj115;
    struct sType*  __dec_obj116  ;
    struct sNode* __dec_obj117;
    struct list$1sNode$ph* __dec_obj118;
    memset(&result, 0, sizeof(result));
    # 3 "sType_clone"
    # 5 "sType_clone"
    if(self==(void*)0) {
        # 4 "sType_clone"
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 468);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 469);
        return __result_obj__0;
    }
    # 5 "sType_clone"
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 470, "struct sType* "), "sType_clone", 5, 471);
    # 7 "sType_clone"
    if(self!=((void*)0)) {
        # 6 "sType_clone"
        result->mClass=self->mClass;
    }
    # 8 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        # 7 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj85=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 473);
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 472);
    }
    # 9 "sType_clone"
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        # 8 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj86=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 475);
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 474);
    }
    # 10 "sType_clone"
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        # 9 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj90=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 76, 505);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 504);
    }
    # 11 "sType_clone"
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        # 10 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj91=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 507);
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 506);
    }
    # 12 "sType_clone"
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        # 11 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj92=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 516);
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 515) :0);
    }
    # 13 "sType_clone"
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        # 12 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj93=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 518);
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 517) :0);
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
        __dec_obj94=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 519, "char* "), "sType_clone", 14, 521);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 520);
    }
    # 16 "sType_clone"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 15 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj95=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 522, "char* "), "sType_clone", 15, 524);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 523);
    }
    # 17 "sType_clone"
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        # 16 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj96=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 525, "char* "), "sType_clone", 16, 527);
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 526);
    }
    # 18 "sType_clone"
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        # 17 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj97=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 528, "char* "), "sType_clone", 17, 530);
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 529);
    }
    # 19 "sType_clone"
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        # 18 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj98=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 531, "char* "), "sType_clone", 18, 533);
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 532);
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
        __dec_obj99=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 534, "char* "), "sType_clone", 49, 536);
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 535);
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
        __dec_obj100=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 537, "char* "), "sType_clone", 51, 539);
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 538);
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
        __dec_obj101=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 540, "char* "), "sType_clone", 54, 542);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 541);
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
        __dec_obj105=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 15, 572);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 571);
    }
    # 59 "sType_clone"
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        # 58 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj106=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 574);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 573);
    }
    # 60 "sType_clone"
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        # 59 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj107=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 15, 594);
        come_call_finalizer(list$1int$_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 593);
    }
    # 61 "sType_clone"
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        # 60 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj108=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 596);
        come_call_finalizer(list$1int$_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 595);
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
        __dec_obj109=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 598);
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 597);
    }
    # 68 "sType_clone"
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        # 67 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj110=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 599, "char* "), "sType_clone", 67, 601);
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 600);
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
        __dec_obj111=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 603);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 602);
    }
    # 73 "sType_clone"
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        # 72 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj115=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 15, 635);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 15, 634);
    }
    # 74 "sType_clone"
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        # 73 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj116=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 637);
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 636);
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
        __dec_obj117=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 639);
        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 638) :0);
    }
    # 77 "sType_clone"
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        # 76 "sType_clone"
        __right_value0 = (void*)0;
        __dec_obj118=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 641);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 640);
    }
    # 77 "sType_clone"
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 642);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 643);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 644);
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 476);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 477);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 478, "struct list$1sType$ph*"), "./neo-c.h", 1513, 482)), "./neo-c.h", 1513, 483);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 498));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 499));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 500);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 501);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 502);
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
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 479);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 480);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 481);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj87  ;
    struct list_item$1sType$ph* litem_45;
    struct sType*  __dec_obj88  ;
    struct list_item$1sType$ph* litem_46;
    struct sType*  __dec_obj89  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_45, 0, sizeof(litem_45));
    memset(&litem_46, 0, sizeof(litem_46));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 484);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 485, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 486);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj87=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 488);
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 487);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_45=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 489, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 490);
        # 1546 "./neo-c.h"
        litem_45->prev=self->head;
        # 1547 "./neo-c.h"
        litem_45->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj88=litem_45->item,
        litem_45->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 492);
        come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 491);
        # 1550 "./neo-c.h"
        self->tail=litem_45;
        # 1551 "./neo-c.h"
        self->head->next=litem_45;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_46=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 493, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 494);
        # 1556 "./neo-c.h"
        litem_46->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_46->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj89=litem_46->item,
        litem_46->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 496);
        come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 495);
        # 1560 "./neo-c.h"
        self->tail->next=litem_46;
        # 1561 "./neo-c.h"
        self->tail=litem_46;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 497);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 503);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 508);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 509):(void*)0);
        return __result_obj__0;
    }
    # 5 "sNode_clone"
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 510, "struct sNode*"), "sNode_clone", 5, 511);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 512);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 513):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 514):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 543);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 544);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 545, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 549)), "./neo-c.h", 1513, 550);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 565));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 566));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 567);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 568);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 569);
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
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 546);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 547);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 548);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj102;
    struct list_item$1sNode$ph* litem_47;
    struct sNode* __dec_obj103;
    struct list_item$1sNode$ph* litem_48;
    struct sNode* __dec_obj104;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_47, 0, sizeof(litem_47));
    memset(&litem_48, 0, sizeof(litem_48));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 551):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 552, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 553);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj102=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 555);
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 554) :0);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 556, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 557);
        # 1546 "./neo-c.h"
        litem_47->prev=self->head;
        # 1547 "./neo-c.h"
        litem_47->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj103=litem_47->item,
        litem_47->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 559);
        (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 558) :0);
        # 1550 "./neo-c.h"
        self->tail=litem_47;
        # 1551 "./neo-c.h"
        self->head->next=litem_47;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_48=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 560, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 561);
        # 1556 "./neo-c.h"
        litem_48->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_48->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj104=litem_48->item,
        litem_48->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 563);
        (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 562) :0);
        # 1560 "./neo-c.h"
        self->tail->next=litem_48;
        # 1561 "./neo-c.h"
        self->tail=litem_48;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 564):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 570);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 575);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 576);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 577, "struct list$1int$*"), "./neo-c.h", 1513, 581)), "./neo-c.h", 1513, 582);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 589);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 590);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 591);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 578);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 579);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 580);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_49;
    struct list_item$1int$* litem_50;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_49, 0, sizeof(litem_49));
    memset(&litem_50, 0, sizeof(litem_50));
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 583, "struct list_item$1int$*"))), "./neo-c.h", 1534, 584);
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
        litem_49=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 585, "struct list_item$1int$*"))), "./neo-c.h", 1544, 586);
        # 1546 "./neo-c.h"
        litem_49->prev=self->head;
        # 1547 "./neo-c.h"
        litem_49->next=((void*)0);
        # 1548 "./neo-c.h"
        litem_49->item=item;
        # 1550 "./neo-c.h"
        self->tail=litem_49;
        # 1551 "./neo-c.h"
        self->head->next=litem_49;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_50=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 587, "struct list_item$1int$*"))), "./neo-c.h", 1554, 588);
        # 1556 "./neo-c.h"
        litem_50->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_50->next=((void*)0);
        # 1558 "./neo-c.h"
        litem_50->item=item;
        # 1560 "./neo-c.h"
        self->tail->next=litem_50;
        # 1561 "./neo-c.h"
        self->tail=litem_50;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 592);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 604);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 605);
        return __result_obj__0;
    }
    # 1513 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 606, "struct list$1char$ph*"), "./neo-c.h", 1513, 610)), "./neo-c.h", 1513, 611);
    # 1515 "./neo-c.h"
    it=self->head;
    # 1527 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "./neo-c.h"
        if(1) {
            # 1518 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 626, "char* "), "./neo-c.h", 1518, 627));
        }
        else {
            # 1521 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 628, "char* "), "./neo-c.h", 1521, 629));
        }
        # 1524 "./neo-c.h"
        it=it->next;
    }
    # 1527 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 630);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 631);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 632);
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 607);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 608);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 609);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj112  ;
    struct list_item$1char$ph* litem_51;
    char*  __dec_obj113  ;
    struct list_item$1char$ph* litem_52;
    char*  __dec_obj114  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_51, 0, sizeof(litem_51));
    memset(&litem_52, 0, sizeof(litem_52));
    # 1533 "./neo-c.h"
    if(self==((void*)0)) {
        # 1531 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 612));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "./neo-c.h"
    if(self->len==0) {
        # 1534 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 613, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 614);
        # 1536 "./neo-c.h"
        litem->prev=((void*)0);
        # 1537 "./neo-c.h"
        litem->next=((void*)0);
        # 1538 "./neo-c.h"
        __dec_obj112=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 616);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 615);
        # 1540 "./neo-c.h"
        self->tail=litem;
        # 1541 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_51=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 617, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 618);
        # 1546 "./neo-c.h"
        litem_51->prev=self->head;
        # 1547 "./neo-c.h"
        litem_51->next=((void*)0);
        # 1548 "./neo-c.h"
        __dec_obj113=litem_51->item,
        litem_51->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 620);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 619);
        # 1550 "./neo-c.h"
        self->tail=litem_51;
        # 1551 "./neo-c.h"
        self->head->next=litem_51;
    }
    else {
        # 1554 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_52=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 621, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 622);
        # 1556 "./neo-c.h"
        litem_52->prev=self->tail;
        # 1557 "./neo-c.h"
        litem_52->next=((void*)0);
        # 1558 "./neo-c.h"
        __dec_obj114=litem_52->item,
        litem_52->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 624);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 623);
        # 1560 "./neo-c.h"
        self->tail->next=litem_52;
        # 1561 "./neo-c.h"
        self->tail=litem_52;
    }
    # 1564 "./neo-c.h"
    self->len++;
    # 1566 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 625));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 633);
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sClass* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 653);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 662);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 663);
        return __result_obj__0;
    }
    # 4066 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4067 "./neo-c.h"
    hash=key_hash%self->size;
    # 4068 "./neo-c.h"
    it=hash;
    # 4090 "./neo-c.h"
    while((_Bool)1) {
        # 4088 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4078 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4075 "./neo-c.h"
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 664);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 665);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 666);
                return __result_obj__0;
            }
            # 4081 "./neo-c.h"
            if(++it>=self->size) {
                # 4079 "./neo-c.h"
                it=0;
            }
            # 4084 "./neo-c.h"
            if(it==hash) {
                # 4082 "./neo-c.h"
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 667);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 668);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 669);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 670);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 671);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 672);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 673);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 674);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 675);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    # 1 "sClass_finalize"
    # 3 "sClass_finalize"
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        # 2 "sClass_finalize"
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 654));
    }
    # 4 "sClass_finalize"
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        # 3 "sClass_finalize"
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 5, 659);
    }
    # 5 "sClass_finalize"
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        # 4 "sClass_finalize"
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 660));
    }
    # 6 "sClass_finalize"
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        # 5 "sClass_finalize"
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 661));
    }
            neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 658);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"
    # 3 "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 657);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple2$2char$phsType$ph$p_finalize"
    # 3 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple2$2char$phsType$ph$p_finalize"
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 655));
    }
    # 4 "tuple2$2char$phsType$ph$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple2$2char$phsType$ph$p_finalize"
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 656);
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct sClass* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 676);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 677);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 678);
        return __result_obj__0;
    }
    # 4066 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4067 "./neo-c.h"
    hash=key_hash%self->size;
    # 4068 "./neo-c.h"
    it=hash;
    # 4090 "./neo-c.h"
    while((_Bool)1) {
        # 4088 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4078 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4075 "./neo-c.h"
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 679);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 680);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 681);
                return __result_obj__0;
            }
            # 4081 "./neo-c.h"
            if(++it>=self->size) {
                # 4079 "./neo-c.h"
                it=0;
            }
            # 4084 "./neo-c.h"
            if(it==hash) {
                # 4082 "./neo-c.h"
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 682);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 683);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 684);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 685);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 686);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 687);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 688);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 689);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 690);
    return __result_obj__0;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
    memset(&it, 0, sizeof(it));
    # 2253 "./neo-c.h"
    if(self==((void*)0)) {
        # 2250 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2259 "./neo-c.h"
    for(it=list$1char$ph_begin(self)    ;!list$1char$ph_end(self);it=list$1char$ph_next(self)){
        # 2257 "./neo-c.h"
        if((!by_pointer&&string_equals(it,item))||(by_pointer&&it==item)) {
            # 2255 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
    # 2259 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (_Bool)0;
            neo_current_frame = fr.prev;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_61  ;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(char* ));
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
    memset(&result_61,0,sizeof(char* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_61;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_62  ;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(char* ));
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
    memset(&result_62,0,sizeof(char* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_62;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_length"; neo_current_frame = &fr;
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

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_63  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(char* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 790);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 791));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 792));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2161, 793));
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
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 794);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 795));
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_63,0,sizeof(char* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value_63, "./neo-c.h", 2177, 796);
    (default_value_63 = come_decrement_ref_count(default_value_63, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 797));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 798));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_64  ;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2153 "./neo-c.h"
    # 2161 "./neo-c.h"
    if(self==((void*)0)) {
        # 2156 "./neo-c.h"
        # 2157 "./neo-c.h"
        memset(&default_value,0,sizeof(char* ));
        # 2158 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "./neo-c.h", 2158, 799);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 800));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2158, 801));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 2161, 802));
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
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "./neo-c.h", 2169, 803);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2169, 804));
            return __result_obj__0;
        }
        # 2171 "./neo-c.h"
        it=it->next;
        # 2172 "./neo-c.h"
        i++;
    }
    # 2175 "./neo-c.h"
    # 2176 "./neo-c.h"
    memset(&default_value_64,0,sizeof(char* ));
    # 2177 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value_64, "./neo-c.h", 2177, 805);
    (default_value_64 = come_decrement_ref_count(default_value_64, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 806));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 2177, 807));
    return __result_obj__0;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    # 3 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        # 2 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 2, 836);
    }
    # 4 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        # 3 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 3, 837);
    }
    # 5 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        # 4 "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 4, 838);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_each"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    _Bool end_flag;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&end_flag, 0, sizeof(end_flag));
    # 1729 "./neo-c.h"
    if(self==((void*)0)) {
        # 1726 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1729 "./neo-c.h"
    it=self->head;
    # 1730 "./neo-c.h"
    i=0;
    # 1742 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1732 "./neo-c.h"
        end_flag=(_Bool)0;
        # 1733 "./neo-c.h"
        block(parent,(struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 1733, 880),i,&end_flag);
        # 1738 "./neo-c.h"
        if(end_flag==(_Bool)1) {
            # 1736 "./neo-c.h"
            break;
        }
        # 1738 "./neo-c.h"
        it=it->next;
        # 1739 "./neo-c.h"
        i++;
    }
    # 1742 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block1_31type2nc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_31type2nc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    # 1203 "31type2.nc"
    list$1sNode$ph_add((*(parent->type_33))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "31type2.nc", 1203, 881));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1206, 882):(void*)0);
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct buffer* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 984);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 985);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 986);
        return __result_obj__0;
    }
    # 4066 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4067 "./neo-c.h"
    hash=key_hash%self->size;
    # 4068 "./neo-c.h"
    it=hash;
    # 4090 "./neo-c.h"
    while((_Bool)1) {
        # 4088 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4078 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4075 "./neo-c.h"
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 987);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 988);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 989);
                return __result_obj__0;
            }
            # 4081 "./neo-c.h"
            if(++it>=self->size) {
                # 4079 "./neo-c.h"
                it=0;
            }
            # 4084 "./neo-c.h"
            if(it==hash) {
                # 4082 "./neo-c.h"
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 990);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 991);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 992);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 993);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 994);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 995);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 996);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 997);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 998);
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
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 4057 "./neo-c.h"
    # 4059 "./neo-c.h"
    # 4060 "./neo-c.h"
    memset(&default_value,0,sizeof(struct buffer* ));
    # 4066 "./neo-c.h"
    if(self==((void*)0)) {
        # 4063 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4063, 999);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 1000);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4063, 1001);
        return __result_obj__0;
    }
    # 4066 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 4067 "./neo-c.h"
    hash=key_hash%self->size;
    # 4068 "./neo-c.h"
    it=hash;
    # 4090 "./neo-c.h"
    while((_Bool)1) {
        # 4088 "./neo-c.h"
        if(self->item_existance[it]) {
            # 4078 "./neo-c.h"
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                # 4075 "./neo-c.h"
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "./neo-c.h", 4075, 1002);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4075, 1003);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4075, 1004);
                return __result_obj__0;
            }
            # 4081 "./neo-c.h"
            if(++it>=self->size) {
                # 4079 "./neo-c.h"
                it=0;
            }
            # 4084 "./neo-c.h"
            if(it==hash) {
                # 4082 "./neo-c.h"
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4082, 1005);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 1006);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4082, 1007);
                return __result_obj__0;
            }
        }
        else {
            # 4086 "./neo-c.h"
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4086, 1008);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 1009);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4086, 1010);
            return __result_obj__0;
        }
    }
    # 4090 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "./neo-c.h", 4090, 1011);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 1012);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4090, 1013);
    return __result_obj__0;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
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

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj183  ;
    struct list_item$1sType$ph* litem_83;
    struct sType*  __dec_obj184  ;
    struct list_item$1sType$ph* litem_84;
    struct sType*  __dec_obj185  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_83, 0, sizeof(litem_83));
    memset(&litem_84, 0, sizeof(litem_84));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1615, 1101);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1619, 1102, "struct list_item$1sType$ph*"))), "./neo-c.h", 1619, 1103);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj183=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1623, 1105);
        come_call_finalizer(sType_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1623, 1104);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_83=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1629, 1106, "struct list_item$1sType$ph*"))), "./neo-c.h", 1629, 1107);
        # 1631 "./neo-c.h"
        litem_83->prev=self->head;
        # 1632 "./neo-c.h"
        litem_83->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj184=litem_83->item,
        litem_83->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1633, 1109);
        come_call_finalizer(sType_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1633, 1108);
        # 1635 "./neo-c.h"
        self->tail=litem_83;
        # 1636 "./neo-c.h"
        self->head->next=litem_83;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_84=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1639, 1110, "struct list_item$1sType$ph*"))), "./neo-c.h", 1639, 1111);
        # 1641 "./neo-c.h"
        litem_84->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_84->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj185=litem_84->item,
        litem_84->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1643, 1113);
        come_call_finalizer(sType_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1643, 1112);
        # 1645 "./neo-c.h"
        self->tail->next=litem_84;
        # 1646 "./neo-c.h"
        self->tail=litem_84;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1651, 1114);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_at"; neo_current_frame = &fr;
    struct sClass*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 3519 "./neo-c.h"
    # 3525 "./neo-c.h"
    if(self==((void*)0)) {
        # 3522 "./neo-c.h"
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3522, 1205);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 1206);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3522, 1207);
        return __result_obj__0;
    }
    # 3525 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3526 "./neo-c.h"
    hash=key_hash%self->size;
    # 3527 "./neo-c.h"
    it=hash;
    # 3550 "./neo-c.h"
    while((_Bool)1) {
        # 3548 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3538 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3535 "./neo-c.h"
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "./neo-c.h", 3535, 1208);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3535, 1209);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3535, 1210);
                return __result_obj__0;
            }
            # 3541 "./neo-c.h"
            if(++it>=self->size) {
                # 3539 "./neo-c.h"
                it=0;
            }
            # 3544 "./neo-c.h"
            if(it==hash) {
                # 3542 "./neo-c.h"
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3542, 1211);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 1212);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3542, 1213);
                return __result_obj__0;
            }
        }
        else {
            # 3546 "./neo-c.h"
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3546, 1214);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 1215);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3546, 1216);
            return __result_obj__0;
        }
    }
    # 3550 "./neo-c.h"
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "./neo-c.h", 3550, 1217);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 1218);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3550, 1219);
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_length"; neo_current_frame = &fr;
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

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&add_to_key_list, 0, sizeof(add_to_key_list));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&it, 0, sizeof(it));
    # 3899 "./neo-c.h"
    # 3905 "./neo-c.h"
    if(self==((void*)0)) {
        # 3902 "./neo-c.h"
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3902, 1250));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3902, 1251);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3908 "./neo-c.h"
    if(self->len*10>=self->size) {
        # 3906 "./neo-c.h"
        map$2char$phsClass$ph_rehash(self);
    }
    # 3908 "./neo-c.h"
    add_to_key_list=(_Bool)0;
    # 3909 "./neo-c.h"
    key_hash=string_get_hash_key(((char* )key));
    # 3910 "./neo-c.h"
    hash=key_hash%self->size;
    # 3911 "./neo-c.h"
    it=hash;
    # 3971 "./neo-c.h"
    while((_Bool)1) {
        # 3969 "./neo-c.h"
        if(self->item_existance[it]) {
            # 3939 "./neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3919 "./neo-c.h"
                map$2char$phsClass$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3927 "./neo-c.h"
                if(1) {
                    # 3921 "./neo-c.h"
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3921, 1266));
                    # 3922 "./neo-c.h"
                    self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3922, 1267);
                }
                else {
                    # 3925 "./neo-c.h"
                    self->keys[it]=key;
                }
                # 3934 "./neo-c.h"
                if(1) {
                    # 3928 "./neo-c.h"
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3928, 1268);
                    # 3929 "./neo-c.h"
                    self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 3929, 1269);
                }
                else {
                    # 3932 "./neo-c.h"
                    self->items[it]=item;
                }
                # 3934 "./neo-c.h"
                self->hashes[it]=key_hash;
                # 3935 "./neo-c.h"
                add_to_key_list=(_Bool)1;
                # 3936 "./neo-c.h"
                break;
            }
            # 3942 "./neo-c.h"
            if(++it>=self->size) {
                # 3940 "./neo-c.h"
                it=0;
            }
            # 3947 "./neo-c.h"
            if(it==hash) {
                # 3943 "./neo-c.h"
                printf("unexpected error in map.insert\n");
                # 3944 "./neo-c.h"
                stackframe2(self);
                # 3945 "./neo-c.h"
                exit(2);
            }
        }
        else {
            # 3949 "./neo-c.h"
            self->item_existance[it]=(_Bool)1;
            # 3950 "./neo-c.h"
            self->hashes[it]=key_hash;
            # 3957 "./neo-c.h"
            if(1) {
                # 3952 "./neo-c.h"
                self->keys[it]=(char* )come_increment_ref_count(key, "./neo-c.h", 3952, 1270);
            }
            else {
                # 3955 "./neo-c.h"
                self->keys[it]=key;
            }
            # 3964 "./neo-c.h"
            if(1) {
                # 3958 "./neo-c.h"
                self->items[it]=(struct sClass* )come_increment_ref_count(item, "./neo-c.h", 3958, 1271);
            }
            else {
                # 3961 "./neo-c.h"
                self->items[it]=item;
            }
            # 3964 "./neo-c.h"
            self->len++;
            # 3965 "./neo-c.h"
            add_to_key_list=(_Bool)1;
            # 3967 "./neo-c.h"
            break;
        }
    }
    # 3975 "./neo-c.h"
    if(add_to_key_list) {
        # 3972 "./neo-c.h"
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "./neo-c.h", 3972, 1286));
    }
    # 3975 "./neo-c.h"
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3975, 1287));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3975, 1288);
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
    int i_89;
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
    memset(&i_89, 0, sizeof(i_89));
    memset(&key_hash, 0, sizeof(key_hash));
    memset(&hash, 0, sizeof(hash));
    memset(&n, 0, sizeof(n));
    # 3816 "./neo-c.h"
    # 3818 "./neo-c.h"
    old_size=self->size;
    # 3819 "./neo-c.h"
    size=self->size*10;
    # 3820 "./neo-c.h"
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "./neo-c.h", 3820, 1252, "char** "))), "./neo-c.h", 3820, 1253);
    # 3821 "./neo-c.h"
    __right_value0 = (void*)0;
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), "./neo-c.h", 3821, 1254, "struct sClass** "))), "./neo-c.h", 3821, 1255);
    # 3822 "./neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "./neo-c.h", 3822, 1256, "unsigned int*"))), "./neo-c.h", 3822, 1257);
    # 3823 "./neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "./neo-c.h", 3823, 1258, "_Bool*"))), "./neo-c.h", 3823, 1259);
    # 3829 "./neo-c.h"
    for(i=0    ;i<size;i++){
        # 3825 "./neo-c.h"
        hashes[i]=0;
        # 3826 "./neo-c.h"
        item_existance[i]=(_Bool)0;
    }
    # 3829 "./neo-c.h"
    len=0;
    # 3864 "./neo-c.h"
    for(i_89=0    ;i_89<old_size;i_89++){
        # 3836 "./neo-c.h"
        if(!self->item_existance[i_89]) {
            # 3833 "./neo-c.h"
            continue;
        }
        # 3836 "./neo-c.h"
        key_hash=self->hashes[i_89];
        # 3837 "./neo-c.h"
        hash=key_hash%size;
        # 3838 "./neo-c.h"
        n=hash;
        # 3862 "./neo-c.h"
        while((_Bool)1) {
            # 3861 "./neo-c.h"
            if(item_existance[n]) {
                # 3846 "./neo-c.h"
                if(++n>=size) {
                    # 3844 "./neo-c.h"
                    n=0;
                }
                # 3851 "./neo-c.h"
                if(n==hash) {
                    # 3847 "./neo-c.h"
                    printf("unexpected error in map.rehash(1)\n");
                    # 3848 "./neo-c.h"
                    stackframe2(self);
                    # 3849 "./neo-c.h"
                    exit(2);
                }
            }
            else {
                # 3853 "./neo-c.h"
                item_existance[n]=(_Bool)1;
                # 3854 "./neo-c.h"
                hashes[n]=key_hash;
                # 3855 "./neo-c.h"
                keys[n]=self->keys[i_89];
                # 3856 "./neo-c.h"
                items[n]=self->items[i_89];
                # 3858 "./neo-c.h"
                len++;
                # 3859 "./neo-c.h"
                break;
            }
        }
    }
    # 3864 "./neo-c.h"
    come_free((char*)self->items);
    # 3865 "./neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3865, 1260));
    # 3866 "./neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3866, 1261));
    # 3867 "./neo-c.h"
    come_free((char*)self->keys);
    # 3869 "./neo-c.h"
    self->keys=keys;
    # 3870 "./neo-c.h"
    self->items=items;
    # 3871 "./neo-c.h"
    self->hashes=hashes;
    # 3872 "./neo-c.h"
    self->item_existance=item_existance;
    # 3874 "./neo-c.h"
    self->size=size;
    # 3875 "./neo-c.h"
    self->len=len;
            neo_current_frame = fr.prev;
}

static void map$2char$phsClass$ph_remove_ordered_entry(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    memset(&pos, 0, sizeof(pos));
    # 3444 "./neo-c.h"
    pos=map$2char$phsClass$ph_key_position(self,key,by_pointer);
    # 3448 "./neo-c.h"
    if(pos>=0) {
        # 3446 "./neo-c.h"
        list$1char$ph_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2char$phsClass$ph_key_position(struct map$2char$phsClass$ph* self, char*  key  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1char$ph* it;
    memset(&pos, 0, sizeof(pos));
    memset(&it, 0, sizeof(it));
    # 3430 "./neo-c.h"
    if(self==((void*)0)) {
        # 3427 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 3430 "./neo-c.h"
    pos=0;
    # 3431 "./neo-c.h"
    it=self->key_list->head;
    # 3440 "./neo-c.h"
    while(it!=((void*)0)) {
        # 3436 "./neo-c.h"
        if((!by_pointer&&string_equals(it->item,key))||(by_pointer&&it->item==key)) {
            # 3434 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return pos;
        }
        # 3436 "./neo-c.h"
        it=it->next;
        # 3437 "./neo-c.h"
        pos++;
    }
    # 3440 "./neo-c.h"
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
    struct list_item$1char$ph* it_90;
    int i_91;
    struct list_item$1char$ph* prev_it_92;
    struct list_item$1char$ph* it_93;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_94;
    struct list_item$1char$ph* prev_it_95;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_90, 0, sizeof(it_90));
    memset(&i_91, 0, sizeof(i_91));
    memset(&prev_it_92, 0, sizeof(prev_it_92));
    memset(&it_93, 0, sizeof(it_93));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_94, 0, sizeof(i_94));
    memset(&prev_it_95, 0, sizeof(prev_it_95));
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1942, 1263);
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
        it_90=self->head;
        # 1959 "./neo-c.h"
        i_91=0;
        # 1981 "./neo-c.h"
        while(it_90!=((void*)0)) {
            # 1966 "./neo-c.h"
            if(i_91==head) {
                # 1962 "./neo-c.h"
                self->tail=it_90->prev;
                # 1963 "./neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "./neo-c.h"
            if(i_91>=head) {
                # 1967 "./neo-c.h"
                prev_it_92=it_90;
                # 1969 "./neo-c.h"
                it_90=it_90->next;
                # 1970 "./neo-c.h"
                i_91++;
                # 1972 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_92, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1972, 1264);
                # 1974 "./neo-c.h"
                self->len--;
            }
            else {
                # 1977 "./neo-c.h"
                it_90=it_90->next;
                # 1978 "./neo-c.h"
                i_91++;
            }
        }
    }
    else {
        # 1983 "./neo-c.h"
        it_93=self->head;
        # 1985 "./neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "./neo-c.h"
        tail_it=((void*)0);
        # 1989 "./neo-c.h"
        i_94=0;
        # 2015 "./neo-c.h"
        while(it_93!=((void*)0)) {
            # 1994 "./neo-c.h"
            if(i_94==head) {
                # 1992 "./neo-c.h"
                head_prev_it=it_93->prev;
            }
            # 1998 "./neo-c.h"
            if(i_94==tail) {
                # 1995 "./neo-c.h"
                tail_it=it_93;
            }
            # 2013 "./neo-c.h"
            if(i_94>=head&&i_94<tail) {
                # 2000 "./neo-c.h"
                prev_it_95=it_93;
                # 2002 "./neo-c.h"
                it_93=it_93->next;
                # 2003 "./neo-c.h"
                i_94++;
                # 2005 "./neo-c.h"
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_95, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 2005, 1265);
                # 2007 "./neo-c.h"
                self->len--;
            }
            else {
                # 2010 "./neo-c.h"
                it_93=it_93->next;
                # 2011 "./neo-c.h"
                i_94++;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 1262);
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
    char*  __dec_obj198  ;
    struct list_item$1char$ph* litem_96;
    char*  __dec_obj199  ;
    struct list_item$1char$ph* litem_97;
    char*  __dec_obj200  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_96, 0, sizeof(litem_96));
    memset(&litem_97, 0, sizeof(litem_97));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 1272));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 1273, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 1274);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj198=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 1276);
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 1275);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_96=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 1277, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 1278);
        # 1631 "./neo-c.h"
        litem_96->prev=self->head;
        # 1632 "./neo-c.h"
        litem_96->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj199=litem_96->item,
        litem_96->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 1280);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 1279);
        # 1635 "./neo-c.h"
        self->tail=litem_96;
        # 1636 "./neo-c.h"
        self->head->next=litem_96;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_97=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 1281, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 1282);
        # 1641 "./neo-c.h"
        litem_97->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_97->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj200=litem_97->item,
        litem_97->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 1284);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 1283);
        # 1645 "./neo-c.h"
        self->tail->next=litem_97;
        # 1646 "./neo-c.h"
        self->tail=litem_97;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 1285));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_101  ;
    # 1682 "./neo-c.h"
    # 1689 "./neo-c.h"
    if(self==((void*)0)) {
        # 1685 "./neo-c.h"
        # 1686 "./neo-c.h"
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_101,0,sizeof(struct sType* ));
    # 1697 "./neo-c.h"
        __result_obj__0 = result_101;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
    # 1721 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_102  ;
    # 1701 "./neo-c.h"
    # 1709 "./neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "./neo-c.h"
        # 1705 "./neo-c.h"
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_102,0,sizeof(struct sType* ));
    # 1717 "./neo-c.h"
        __result_obj__0 = result_102;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1864, 1378);
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

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj215;
    struct list_item$1sNode$ph* litem_106;
    struct sNode* __dec_obj216;
    struct list_item$1sNode$ph* litem_107;
    struct sNode* __dec_obj217;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_106, 0, sizeof(litem_106));
    memset(&litem_107, 0, sizeof(litem_107));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1615, 1380):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1619, 1381, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1619, 1382);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj215=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1623, 1384);
        (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1623, 1383) :0);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_106=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1629, 1385, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1629, 1386);
        # 1631 "./neo-c.h"
        litem_106->prev=self->head;
        # 1632 "./neo-c.h"
        litem_106->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj216=litem_106->item,
        litem_106->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1633, 1388);
        (__dec_obj216 ? __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1633, 1387) :0);
        # 1635 "./neo-c.h"
        self->tail=litem_106;
        # 1636 "./neo-c.h"
        self->head->next=litem_106;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_107=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1639, 1389, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1639, 1390);
        # 1641 "./neo-c.h"
        litem_107->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_107->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj217=litem_107->item,
        litem_107->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1643, 1392);
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1643, 1391) :0);
        # 1645 "./neo-c.h"
        self->tail->next=litem_107;
        # 1646 "./neo-c.h"
        self->tail=litem_107;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1651, 1393):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_108;
    struct list_item$1int$* litem_109;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_108, 0, sizeof(litem_108));
    memset(&litem_109, 0, sizeof(litem_109));
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1619, 1395, "struct list_item$1int$*"))), "./neo-c.h", 1619, 1396);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_108=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1629, 1397, "struct list_item$1int$*"))), "./neo-c.h", 1629, 1398);
        # 1631 "./neo-c.h"
        litem_108->prev=self->head;
        # 1632 "./neo-c.h"
        litem_108->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_108->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_108;
        # 1636 "./neo-c.h"
        self->head->next=litem_108;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_109=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1639, 1399, "struct list_item$1int$*"))), "./neo-c.h", 1639, 1400);
        # 1641 "./neo-c.h"
        litem_109->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_109->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_109->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_109;
        # 1646 "./neo-c.h"
        self->tail=litem_109;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block2_31type2nc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_31type2nc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    # 1731 "31type2.nc"
    list$1sNode$ph_add((*(parent->type_33))->mVarNameArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "31type2.nc", 1731, 1402));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1734, 1403):(void*)0);
            neo_current_frame = fr.prev;
}

void method_block3_31type2nc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block3_31type2nc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    # 1735 "31type2.nc"
    list$1sNode$ph_add((*(parent->type_33))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "31type2.nc", 1735, 1404));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1738, 1405):(void*)0);
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sNode$ph* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i], "./neo-c.h", 1494, 1419));
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 1420);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 1421);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 1422);
    return __result_obj__0;
}

